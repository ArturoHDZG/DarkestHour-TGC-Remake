#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Europa Engine Syntax & Bilingual Localization Verifier for TGC Remake.
Checks:
1. Balanced braces across all db/events/**/*.txt
2. Pure native DH command syntax (no pseudo-syntax commands)
3. 12-column Paradox CSV alignment & non-empty Spanish/English coverage in main CSVs
4. Zero semicolons inside translated text fields
"""

import csv
import os
import re
import sys

def check_events():
    brace_errors = []
    syntax_errors = []
    day31_warnings = []

    for root, _, files in os.walk("db/events"):
        for fn in sorted(files):
            if not fn.endswith(".txt"):
                continue
            p = os.path.join(root, fn)
            with open(p, "r", encoding="latin-1", errors="ignore") as f:
                lines = f.readlines()

            clean_lines = [l.split("#", 1)[0] for l in lines]
            clean_txt = "".join(clean_lines)
            if clean_txt.count("{") != clean_txt.count("}"):
                brace_errors.append((p, clean_txt.count("{"), clean_txt.count("}")))

            lines_no_comment = [l.split("#", 1)[0] for l in lines]
            i = 0
            n = len(lines_no_comment)
            while i < n:
                s = lines_no_comment[i].strip()
                if s.startswith("command = {"):
                    block = [s]
                    depth = s.count("{") - s.count("}")
                    start_line = i + 1
                    while depth > 0 and i + 1 < n:
                        i += 1
                        nxt = lines_no_comment[i].strip()
                        block.append(nxt)
                        depth += nxt.count("{") - nxt.count("}")
                    full_cmd = " ".join(block)
                    m_open = full_cmd.find("{")
                    inner = full_cmd[m_open + 1:-1].strip() if full_cmd.endswith("}") else full_cmd[m_open + 1:]
                    if inner and (
                        not re.search(r"\btype\s*=", inner)
                        or any(k in inner for k in ["political_sliders", "industrial_modifier = {", "relations = {", "headofstate = {", "headofgovernment = {"])
                    ):
                        syntax_errors.append((p, start_line, full_cmd[:110]))
                if "Blocks" in root and re.search(r"date\s*=\s*\{\s*day\s*=\s*31\b", s):
                    day31_warnings.append((p, i + 1, s))
                i += 1

    return brace_errors, syntax_errors, day31_warnings

def check_localization():
    csv_targets = [
        ("config/event_text.csv", True),
        ("config/text.csv", True),
        ("config/darkest_hour.csv", True),
        ("config/scenario_text.csv", False),  # legacy vanilla descriptions may have >12 trailing empty cols
    ]
    missing_es = []
    bad_cols = []
    for path, strict_12 in csv_targets:
        with open(path, "r", encoding="latin-1") as f:
            lines = f.readlines()
        for idx, l in enumerate(lines, 1):
            if l.startswith("#") or not l.strip():
                continue
            cols = l.rstrip("\r\n").split(";")
            if strict_12 and len(cols) != 12:
                bad_cols.append((path, idx, len(cols), cols[0]))
            if len(cols) >= 5 and cols[1].strip() and not cols[4].strip():
                missing_es.append((path, idx, cols[0]))
    return missing_es, bad_cols

if __name__ == "__main__":
    br, syn, d31 = check_events()
    miss_es, bad_c = check_localization()

    print("=" * 72)
    print("  TGC REMAKE - EUROPA ENGINE SYNTAX & BILINGUAL CSV VERIFICATION")
    print("=" * 72)
    print(f"  Brace mismatches      : {len(br)}")
    print(f"  Pseudo-syntax commands: {len(syn)}")
    print(f"  Block day=31 dates    : {len(d31)}")
    print(f"  Shifted CSV rows      : {len(bad_c)}")
    print(f"  Rows missing Spanish  : {len(miss_es)}")

    ok = not (br or syn or d31 or bad_c or miss_es)
    print("  Status:", "PASSED [OK]" if ok else "ISSUES DETECTED [WARN]")
    print("=" * 72)

    for grp_name, grp in [("Brace", br), ("Syntax", syn), ("Day31", d31), ("CSVCols", bad_c), ("MissingES", miss_es)]:
        for item in grp[:10]:
            print(f"  [{grp_name}] {item}")

    sys.exit(0 if ok else 1)
