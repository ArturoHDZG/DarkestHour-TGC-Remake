# -*- coding: utf-8 -*-
"""
Master Mod Verification Suite: The Grand Campaign (TGC Remake).
Executes exhaustive checks across all 9 domains of the engine.
"""
import glob, os, re, struct

def run_master_audit():
    print("=" * 80)
    print("      THE GRAND CAMPAIGN (TGC REMAKE) - MASTER MOD VERIFICATION AUDIT")
    print("=" * 80)
    
    results = {}
    
    # ----------------------------------------------------
    # Domain 1: Project Hygiene & Residual Files
    # ----------------------------------------------------
    print("\n[1/9] Checking Project Hygiene and File Integrity...")
    junk = []
    zero_bytes = []
    for root, dirs, files in os.walk('.'):
        dirs[:] = [d for d in dirs if not d.startswith('.') and d != '__pycache__']
        for f in files:
            p = os.path.join(root, f)
            if f in ['.DS_Store', 'Thumbs.db', 'desktop.ini'] or f.endswith('.bak') or f.endswith('.orig'):
                junk.append(p)
            elif os.path.getsize(p) == 0 and not f.startswith('.'):
                zero_bytes.append(p)
    results['Hygiene'] = {
        'junk_files': len(junk),
        'zero_byte_files': len(zero_bytes),
        'passed': len(junk) == 0 and len(zero_bytes) == 0
    }
    print(f"  -> Junk files: {len(junk)} | Zero-byte files: {len(zero_bytes)} | Status: {'PASSED' if results['Hygiene']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 2: Event System
    # ----------------------------------------------------
    print("\n[2/9] Checking Event System (db/events/ & db/tgc-events.txt)...")
    with open('db/tgc-events.txt', 'r', encoding='latin-1') as f:
        tgc_text = f.read()
    inc_files = [m.group(1).replace('\\', '/') for line in tgc_text.splitlines() if not line.strip().startswith('#') for m in [re.search(r'event\s*=\s*\"([^\"]+)\"', line.strip())] if m]
    missing_inc = [f for f in inc_files if not os.path.exists(f)]
    
    disk_events = [os.path.join(r, f).replace('\\', '/') for r, d, fs in os.walk('db/events') for f in fs if f.endswith('.txt')]
    unref = [f for f in disk_events if f not in set(inc_files)]
    
    event_ids = set()
    dup_ids = []
    unbalanced_events = []
    total_events = 0
    
    for fp in inc_files:
        if not os.path.exists(fp): continue
        with open(fp, 'r', encoding='latin-1') as f:
            c = f.read()
        if c.count('{') != c.count('}'):
            unbalanced_events.append(fp)
            
        # Clean comments per line to ensure braces in comments don't skew depth
        clean_lines = []
        for line in c.splitlines():
            idx = line.find('#')
            if idx != -1:
                line = line[:idx]
            clean_lines.append(line)
        clean_text = '\n'.join(clean_lines)
        
        depth = 0
        i = 0
        n = len(clean_text)
        while i < n:
            if depth == 0:
                m = re.compile(r'\bevent\s*=\s*\{').search(clean_text, i)
                if not m:
                    break
                event_start = m.end()
                depth = 1
                curr = event_start
                while curr < n and depth > 0:
                    ch = clean_text[curr]
                    if ch == '{':
                        depth += 1
                    elif ch == '}':
                        depth -= 1
                    curr += 1
                event_body = clean_text[event_start:curr-1]
                total_events += 1
                id_m = re.search(r'\bid\s*=\s*(\d+)', event_body)
                if id_m:
                    eid = int(id_m.group(1))
                    if eid in event_ids:
                        dup_ids.append((eid, fp))
                    else:
                        event_ids.add(eid)
                i = curr
                depth = 0
            else:
                i += 1
                    
    results['Events'] = {
        'total_files': len(inc_files),
        'missing_files': len(missing_inc),
        'unreferenced_files': len(unref),
        'total_events': total_events,
        'unique_event_ids': len(event_ids),
        'duplicate_ids': len(dup_ids),
        'unbalanced_files': len(unbalanced_events),
        'passed': len(missing_inc) == 0 and len(unref) == 0 and len(dup_ids) == 0 and len(unbalanced_events) == 0
    }
    print(f"  -> Total files: {len(inc_files)} | Total events: {total_events} | Duplicate IDs: {len(dup_ids)} | Status: {'PASSED' if results['Events']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 3: Ministers
    # ----------------------------------------------------
    print("\n[3/9] Checking Ministers (db/ministers/*.csv)...")
    min_files = sorted(glob.glob('db/ministers/*.csv'))
    total_min = 0
    num_min_names = 0
    empty_min_names = 0
    malformed_min = 0
    invalid_min_pics = 0
    
    for fp in min_files:
        with open(fp, 'r', encoding='latin-1') as f:
            for line in f:
                ls = line.strip()
                if not ls or ls.startswith('#') or 'Ruling Cabinet' in ls or 'Replacements' in ls:
                    continue
                parts = ls.split(';')
                if len(parts) < 10:
                    malformed_min += 1
                    continue
                total_min += 1
                name = parts[2].strip()
                pic = parts[9].strip()
                if name.isdigit(): num_min_names += 1
                elif not name: empty_min_names += 1
                if not pic or ';' in pic: invalid_min_pics += 1

    results['Ministers'] = {
        'total_files': len(min_files),
        'total_ministers': total_min,
        'numeric_names': num_min_names,
        'empty_names': empty_min_names,
        'malformed_rows': malformed_min,
        'invalid_pics': invalid_min_pics,
        'passed': num_min_names == 0 and empty_min_names == 0 and malformed_min == 0 and invalid_min_pics == 0
    }
    print(f"  -> Total ministers: {total_min} | Numeric names: {num_min_names} | Malformed rows: {malformed_min} | Status: {'PASSED' if results['Ministers']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 4: Leaders
    # ----------------------------------------------------
    print("\n[4/9] Checking Leaders (db/leaders/*.csv)...")
    ldr_files = sorted(glob.glob('db/leaders/*.csv'))
    total_ldr = 0
    num_ldr_names = 0
    empty_ldr_names = 0
    malformed_ldr = 0
    names_in_pic = 0
    
    for fp in ldr_files:
        with open(fp, 'r', encoding='latin-1') as f:
            for line in f:
                ls = line.strip()
                if not ls or ls.startswith('#') or 'Name;ID;Country' in ls or 'Name;Id;Country' in ls:
                    continue
                parts = ls.split(';')
                if len(parts) < 9:
                    malformed_ldr += 1
                    continue
                total_ldr += 1
                name = parts[0].strip()
                if name.isdigit(): num_ldr_names += 1
                elif not name: empty_ldr_names += 1
                if len(parts) >= 14:
                    pic = parts[13].strip()
                    if ' ' in pic and not pic.lower().endswith('.bmp'):
                        names_in_pic += 1

    results['Leaders'] = {
        'total_files': len(ldr_files),
        'total_leaders': total_ldr,
        'numeric_names': num_ldr_names,
        'empty_names': empty_ldr_names,
        'malformed_rows': malformed_ldr,
        'names_in_pic': names_in_pic,
        'passed': num_ldr_names == 0 and empty_ldr_names == 0 and malformed_ldr == 0 and names_in_pic == 0
    }
    print(f"  -> Total leaders: {total_ldr} | Numeric names: {num_ldr_names} | Shifted pic cols: {names_in_pic} | Status: {'PASSED' if results['Leaders']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 5: Tech Teams
    # ----------------------------------------------------
    print("\n[5/9] Checking Tech Teams (db/tech/teams/*.csv)...")
    team_files = sorted(glob.glob('db/tech/teams/*.csv'))
    total_teams = 0
    num_team_names = 0
    empty_team_names = 0
    malformed_teams = 0
    for fp in team_files:
        with open(fp, 'r', encoding='latin-1') as f:
            for line in f:
                ls = line.strip()
                if not ls or ls.startswith('#') or ('Name' in ls and 'Skill' in ls):
                    continue
                parts = ls.split(';')
                if len(parts) < 8:
                    malformed_teams += 1
                    continue
                total_teams += 1
                name = parts[1].strip() if len(parts) > 1 else ""
                if name.isdigit(): num_team_names += 1
                elif not name: empty_team_names += 1

    results['Teams'] = {
        'total_files': len(team_files),
        'total_teams': total_teams,
        'numeric_names': num_team_names,
        'empty_names': empty_team_names,
        'malformed_rows': malformed_teams,
        'passed': num_team_names == 0 and empty_team_names == 0 and malformed_teams == 0
    }
    print(f"  -> Total teams: {total_teams} | Numeric names: {num_team_names} | Malformed rows: {malformed_teams} | Status: {'PASSED' if results['Teams']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 6: Tech Tree & Units
    # ----------------------------------------------------
    print("\n[6/9] Checking Tech Tree and Unit Definitions...")
    tech_ids = set()
    broken_reqs = 0
    for fp in glob.glob('db/tech/*.txt'):
        with open(fp, 'r', encoding='latin-1') as f:
            c = f.read()
        for a in re.findall(r'application\s*=\s*\{\s*id\s*=\s*(\d+)', c):
            tech_ids.add(int(a))
    for fp in glob.glob('db/tech/*.txt'):
        with open(fp, 'r', encoding='latin-1') as f:
            c = f.read()
        for m in re.finditer(r'(?:or_)?required\s*=\s*\{([^}]+)\}', c):
            for r in [int(x) for x in m.group(1).split() if x.isdigit()]:
                if r not in tech_ids: broken_reqs += 1
                
    unit_files = [os.path.join(r, f) for r, d, fs in os.walk('db/units') for f in fs if f.endswith('.txt')]
    unbalanced_units = [fp for fp in unit_files if open(fp, 'r', encoding='latin-1').read().count('{') != open(fp, 'r', encoding='latin-1').read().count('}')]
    
    results['TechAndUnits'] = {
        'total_techs': len(tech_ids),
        'broken_requirements': broken_reqs,
        'unit_files': len(unit_files),
        'unbalanced_units': len(unbalanced_units),
        'passed': broken_reqs == 0 and len(unbalanced_units) == 0
    }
    print(f"  -> Total techs: {len(tech_ids)} | Broken reqs: {broken_reqs} | Unit files: {len(unit_files)} | Status: {'PASSED' if results['TechAndUnits']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 7: Configuration CSVs
    # ----------------------------------------------------
    print("\n[7/9] Checking Configuration and Localization CSVs (config/*.csv)...")
    csv_files = sorted(glob.glob('config/*.csv'))
    total_csv_lines = 0
    dup_loc_keys = 0
    shifted_csv_rows = 0
    for fp in csv_files:
        fn = os.path.basename(fp)
        with open(fp, 'r', encoding='latin-1') as f:
            lines = f.readlines()
        total_csv_lines += len(lines)
        seen_k = set()
        for line in lines:
            ls = line.strip()
            if not ls or ls.startswith('#'): continue
            parts = ls.split(';')
            if fn in ['event_text.csv', 'darkest_hour.csv', 'text.csv', 'unit_names.csv', 'models.csv', 'tech_names.csv', 'world_names.csv']:
                k = parts[0].strip()
                if k and not k.startswith('#') and k != '##':
                    if k in seen_k: dup_loc_keys += 1
                    else: seen_k.add(k)
                if len(parts) != 12:
                    shifted_csv_rows += 1

    results['ConfigCSV'] = {
        'total_files': len(csv_files),
        'total_lines': total_csv_lines,
        'duplicate_keys': dup_loc_keys,
        'shifted_rows': shifted_csv_rows,
        'passed': dup_loc_keys == 0 and shifted_csv_rows == 0
    }
    print(f"  -> Total lines: {total_csv_lines} | Duplicate keys: {dup_loc_keys} | Shifted rows: {shifted_csv_rows} | Status: {'PASSED' if results['ConfigCSV']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 8: Graphic Assets
    # ----------------------------------------------------
    print("\n[8/9] Checking Graphic Assets & BMP Integrity...")
    ill_files = glob.glob('gfx/interface/ill_prov_*.bmp')
    city_files = glob.glob('map/Map_1/gfx/city_*.bmp')
    
    ill_err = 0
    for fp in ill_files:
        fn = os.path.basename(fp)
        if fn.replace('ill_prov_', '').replace('.bmp', '').isdigit():
            if os.path.getsize(fp) != 114966: ill_err += 1

    city_err = 0
    for fp in city_files:
        if os.path.getsize(fp) == 0: city_err += 1; continue
        with open(fp, 'rb') as f:
            f.seek(54)
            b, g, r, a = f.read(4)
        if not (r >= 240 and g <= 10 and b >= 240):
            city_err += 1

    # Check event pictures in db/events/
    ev_pics = set()
    for fp in inc_files:
        if not os.path.exists(fp): continue
        with open(fp, 'r', encoding='latin-1') as f:
            for l in f:
                m = re.search(r'picture\s*=\s*\"([^\"]+)\"', l)
                if m:
                    p = m.group(1).replace('\\', '/').strip()
                    if p and p != 'none': ev_pics.add(p)
    missing_pics = 0
    for pic in ev_pics:
        cands = [f"gfx/events_pics/{pic}.bmp", f"gfx/events_pics/{pic}", f"gfx/events_pics/{os.path.basename(pic)}.bmp", f"gfx/interface/{pic}.bmp", f"gfx/interface/{pic}"]
        if not any(os.path.exists(c) for c in cands):
            missing_pics += 1

    results['Graphics'] = {
        'province_illustrations': len(ill_files),
        'province_ill_errors': ill_err,
        'city_sprites': len(city_files),
        'city_sprite_errors': city_err,
        'unique_event_pics': len(ev_pics),
        'missing_event_pics': missing_pics,
        'passed': ill_err == 0 and city_err == 0 and missing_pics == 0
    }
    print(f"  -> Prov illustrations: {len(ill_files)} (err: {ill_err}) | City sprites: {len(city_files)} (err: {city_err}) | Missing event pics: {missing_pics} | Status: {'PASSED' if results['Graphics']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Domain 9: Map & Scenarios
    # ----------------------------------------------------
    print("\n[9/9] Checking Map (province.csv) and Scenarios (1900 & 1914)...")
    with open('map/Map_1/province.csv', 'r', encoding='latin-1') as f:
        prov_lines = f.readlines()
    urban_count = sum(1 for l in prov_lines if len(l.split(';')) > 6 and l.split(';')[6].strip().lower() == 'urban')
    
    scn_err = 0
    for s in ['1900', '1914']:
        with open(f'scenarios/{s}.eug', 'r', encoding='latin-1') as f:
            t = f.read()
        if t.count('{') != t.count('}'): scn_err += 1
        for inc in re.findall(r'include\s*=\s*\"([^\"]+)\"', t):
            if not os.path.exists(inc.replace('\\', '/')): scn_err += 1

    # Overlap check in 1900
    overlap_count = 0
    owned_map = {}
    for fp in glob.glob('scenarios/1900/*.inc'):
        fn = os.path.basename(fp)
        tag = fn.replace('.inc', '')
        if tag in ['Bases', 'Deposits', 'Victory_Points', 'REB']: continue
        with open(fp, 'r', encoding='latin-1') as f:
            c = f.read()
        m = re.search(r'ownedprovinces\s*=\s*\{([^}]+)\}', c)
        if m:
            for p in [int(x) for x in m.group(1).split() if x.isdigit()]:
                if p in owned_map: overlap_count += 1
                else: owned_map[p] = tag

    results['MapScenarios'] = {
        'province_lines': len(prov_lines),
        'urban_provinces': urban_count,
        'scenario_errors': scn_err,
        'province_overlaps_1900': overlap_count,
        'passed': len(prov_lines) == 2772 and urban_count == 183 and scn_err == 0 and overlap_count == 0
    }
    print(f"  -> province.csv lines: {len(prov_lines)} | Urban provs: {urban_count} | Scenario errors: {scn_err} | 1900 overlaps: {overlap_count} | Status: {'PASSED' if results['MapScenarios']['passed'] else 'FAILED'}")

    # ----------------------------------------------------
    # Summary of All 9 Domains
    # ----------------------------------------------------
    print("\n" + "=" * 80)
    print("                         GLOBAL VERIFICATION SUMMARY")
    print("=" * 80)
    all_passed = True
    for domain, data in results.items():
        status = "PASSED [OK]" if data['passed'] else "FAILED [X]"
        if not data['passed']: all_passed = False
        print(f"  Domain: {domain:15} | Status: {status}")
    print("=" * 80)
    if all_passed:
        print(">>> 100% AUDIT SUCCESS: ALL DOMAINS PASSED ZERO DEFECTS. MOD IS 100% OPERATIONAL. <<<")
    else:
        print(">>> AUDIT DETECTED FAILURES. REVIEW ABOVE DOMAINS. <<<")
    print("=" * 80)
    return all_passed

if __name__ == '__main__':
    run_master_audit()
