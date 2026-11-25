#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Builds clean, versioned release archive(s) inside dist/ for GitHub Releases,
excluding .git, .github, tools, docs, dist, and OS junk.
Automatically checks GitHub's 2 GB per-asset limit and splits music/ into
a separate MusicPack archive only if the combined zip exceeds 1.95 GiB.
Generates SHA256SUMS.txt for release integrity verification.
"""

import argparse
import hashlib
import os
import zipfile

GITHUB_SAFE_LIMIT = int(1.95 * 1024 * 1024 * 1024)  # ~1.95 GiB (< 2 GiB GitHub limit)
MOD_FOLDER_NAME = "TCG Remake"

EXCLUDE_TOP = {".git", ".github", "dist", "tools", "docs", "backup", "__pycache__"}
EXCLUDE_FILES = {".DS_Store", "Thumbs.db", "desktop.ini", "savedebug.txt", "settings.cfg", ".gitignore", ".gitattributes", "AGENTS.md", "SECURITY.md"}
EXCLUDE_EXTS = {".bak", ".orig", ".tmp", ".pyc"}

def collect_files(skip_music=False, only_music=False):
    items = []
    for root, dirs, files in os.walk("."):
        rel_root = os.path.relpath(root, ".").replace("\\", "/")
        top = rel_root.split("/")[0] if rel_root != "." else ""
        if rel_root == ".":
            dirs[:] = [d for d in sorted(dirs) if d not in EXCLUDE_TOP and not d.startswith(".")]
        else:
            dirs[:] = [d for d in sorted(dirs) if d != "__pycache__" and not d.startswith(".")]

        if only_music:
            if rel_root == "." or top not in ("music", "sfx"):
                continue
        elif skip_music and top in ("music", "sfx"):
            continue

        for fn in sorted(files):
            if fn in EXCLUDE_FILES or os.path.splitext(fn)[1].lower() in EXCLUDE_EXTS:
                continue
            src = os.path.join(root, fn)
            rel = os.path.relpath(src, ".").replace("\\", "/")
            arc = f"{MOD_FOLDER_NAME}/{rel}"
            items.append((src, arc))
    return items

def write_zip(items, out_path):
    with zipfile.ZipFile(out_path, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=6) as zf:
        for src, arc in items:
            zf.write(src, arc)
    return os.path.getsize(out_path)

def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        while True:
            chunk = f.read(1048576)
            if not chunk:
                break
            h.update(chunk)
    return h.hexdigest()

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--version", default="v3.0.0-alpha.1", help="Release tag version")
    args = parser.parse_args()

    os.makedirs("dist", exist_ok=True)
    ver = args.version
    full_name = f"TCG_Remake_{ver}_Full.zip"
    full_path = os.path.join("dist", full_name)

    print(f"[1/3] Collecting mod files for {ver}...")
    all_items = collect_files()
    print(f"      Total playable files: {len(all_items)}")
    print(f"[2/3] Building {full_path} (compresslevel=6)...")
    full_bytes = write_zip(all_items, full_path)
    full_gib = full_bytes / (1024 ** 3)
    print(f"      Full zip size: {full_bytes:,} bytes ({full_gib:.2f} GiB)")

    artifacts = []
    if full_bytes <= GITHUB_SAFE_LIMIT:
        print("      [OK] Single full archive fits safely under GitHub's 2.0 GiB asset limit!")
        artifacts.append(full_path)
    else:
        print("      [INFO] Exceeds 1.95 GiB -> splitting into Core + MusicPack for GitHub Releases...")
        os.remove(full_path)
        core_path = os.path.join("dist", f"TCG_Remake_{ver}_Core.zip")
        music_path = os.path.join("dist", f"TCG_Remake_{ver}_MusicPack.zip")

        core_items = collect_files(skip_music=True)
        music_items = collect_files(only_music=True)

        core_bytes = write_zip(core_items, core_path)
        music_bytes = write_zip(music_items, music_path)
        print(f"      Core zip     : {core_bytes:,} bytes ({core_bytes / (1024**3):.2f} GiB)")
        print(f"      MusicPack zip: {music_bytes:,} bytes ({music_bytes / (1024**3):.2f} GiB)")
        artifacts.extend([core_path, music_path])

    print("[3/3] Generating dist/SHA256SUMS.txt...")
    sums_path = os.path.join("dist", "SHA256SUMS.txt")
    with open(sums_path, "w", encoding="utf-8") as out:
        for ap in artifacts:
            digest = sha256_file(ap)
            bn = os.path.basename(ap)
            out.write(f"{digest}  {bn}\n")
            print(f"      {digest}  {bn}")

if __name__ == "__main__":
    main()
