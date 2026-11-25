#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Strict Anti-Injection & Binary Integrity Guard for TGC Remake.
Ensures zero unauthorized executables, zero symlinks, and zero suspicious
script injection primitives in tools/ or .github/workflows/.
"""

import hashlib
import os
import re
import sys

BLOCKED_EXTENSIONS = {
    ".exe", ".dll", ".so", ".dylib", ".bat", ".cmd", ".ps1",
    ".vbs", ".vbe", ".js", ".jse", ".wsf", ".wsh", ".scr",
    ".msi", ".msp", ".com", ".pif", ".jar", ".sh", ".bash",
    ".zsh", ".csh", ".ksh", ".hta", ".cpl", ".reg",
}

ALLOWED_BINARIES = {
    "HoI2Editor.exe": "cac864eb080469bc53cd93ed400fc3366a056d021177ec5eb89fc24771953a98",
}

SUSPICIOUS_PY_PATTERNS = [
    r"\beval\s*\(",
    r"\bexec\s*\(",
    r"\b__import__\s*\(",
    r"subprocess\.[A-Za-z_]+\([^)]*shell\s*=\s*True",
    r"\bos\.system\s*\(",
    r"\bos\.popen\s*\(",
    r"\bbase64\.b64decode\s*\(",
    r"\bctypes\b",
    r"\bsocket\b",
    r"\burllib\b",
    r"\brequests\b",
    r"\bhttp\.client\b",
]

def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        while True:
            chunk = f.read(65536)
            if not chunk:
                break
            h.update(chunk)
    return h.hexdigest()

def scan():
    errors = []

    # 1. Symlink & executable binary scan across repository
    for root, dirs, files in os.walk("."):
        dirs[:] = [d for d in dirs if d not in (".git", "__pycache__", "dist")]
        for d in dirs:
            dp = os.path.join(root, d)
            if os.path.islink(dp):
                errors.append(f"SYMLINK_DIR: {dp}")
        for fn in files:
            p = os.path.join(root, fn)
            rel = os.path.relpath(p, ".").replace("\\", "/")
            if os.path.islink(p):
                errors.append(f"SYMLINK_FILE: {rel}")
                continue
            ext = os.path.splitext(fn)[1].lower()
            if ext in BLOCKED_EXTENSIONS:
                if rel in ALLOWED_BINARIES:
                    actual = sha256_file(p)
                    if actual != ALLOWED_BINARIES[rel]:
                        errors.append(f"TAMPERED_BINARY: {rel} (sha256={actual})")
                else:
                    errors.append(f"UNAUTHORIZED_EXECUTABLE: {rel}")

    # 2. Python tools code injection audit
    if os.path.isdir("tools"):
        for fn in sorted(os.listdir("tools")):
            if not fn.endswith(".py") or fn == "security_check.py":
                continue
            p = os.path.join("tools", fn)
            with open(p, "r", encoding="utf-8", errors="ignore") as f:
                content = f.read()
            for pat in SUSPICIOUS_PY_PATTERNS:
                if re.search(pat, content):
                    errors.append(f"SUSPICIOUS_CODE_IN_TOOLS ({pat}): tools/{fn}")

    # 3. GitHub Actions workflow hardening check
    wf_dir = os.path.join(".github", "workflows")
    if os.path.isdir(wf_dir):
        for fn in sorted(os.listdir(wf_dir)):
            if not fn.endswith((".yml", ".yaml")):
                continue
            p = os.path.join(wf_dir, fn)
            with open(p, "r", encoding="utf-8", errors="ignore") as f:
                yml = f.read()
            if "pull_request_target" in yml:
                errors.append(f"UNSAFE_TRIGGER pull_request_target in {p}")
            if "contents: read" not in yml:
                errors.append(f"MISSING_LEAST_PRIVILEGE_PERMISSIONS in {p}")
            if "curl " in yml or "wget " in yml:
                errors.append(f"UNTRUSTED_NETWORK_DOWNLOAD in {p}")

    return errors

if __name__ == "__main__":
    errs = scan()
    print("=" * 72)
    print("  TGC REMAKE - STRICT SECURITY & ANTI-INJECTION AUDIT")
    print("=" * 72)
    print(f"  Allowlisted binaries verified : {len(ALLOWED_BINARIES)}")
    print(f"  Security violations found     : {len(errs)}")
    print("  Status:", "PASSED [OK]" if not errs else "FAILED [ALERT]")
    print("=" * 72)
    for e in errs:
        print("  [!]", e)
    sys.exit(0 if not errs else 1)
