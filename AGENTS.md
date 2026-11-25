# AGENTS.md — Technical Guide for AI Agents & Contributors

This repository contains **The Grand Campaign (TGC Remake)** for **Darkest Hour (Europa Engine)**.
Read this file completely before modifying events, localization CSVs, ministers, leaders, scenarios, or map data—regardless of OS (Windows, macOS, or Linux).

---

## 1. Timeline Architecture (4 Branches)
Every major power and regional geopolitical block is designed around 4 distinct timeline paths from **1900 to 2000+**:
1. **Tronco Histórico (Historical Path)**: 1900–2000+ (Belle Époque, WWI, Interwar, WWII, Cold War, 1990s).
2. **Rama 1 — Pax Germanica (`U08` / Central Powers Victory)**: Imperial Germany + Austria-Hungary (`U09`) + Ottoman Empire (`OTT`) reshape Europe, Africa, Asia, and Middle East after winning WWI.
3. **Rama 2 — Pax Fascista (`GER` / Axis Victory)**: WWII Axis dominance, *Reichskommissariats* (`U40`–`U48`), Allied exile (`CAN`/`USA`), global underground resistance.
4. **Rama 3 — Pax Soviética (`SOV` / Eurasian Socialist Dominance)**: Post-WWII Soviet hegemony in continental Europe, People's Republics (`U10`–`U35`), multipolar Sino-Soviet/Euro-Atlantic shifts.

---

## 2. Official Event ID Allocation Map (DO NOT COLLIDE)
Never reuse IDs already assigned. Always check before creating new events:
- `100` – `324999`: Base TGC + Early/Legacy Great Power & Regional Modules
- `325001` – `331260`: Great Power Leveling Volumes 4 & 5 (`USA`, `CHI`, `JAP`, `FRA`, `ITA`, `AUS`, `TUR`)
- `340001` – `340080`: Block 1 — British Commonwealth (`db/events/Blocks/Block1_Commonwealth_*.txt`)
- `350001` – `350080`: Block 2 — Francophonie & Quebec (`db/events/Blocks/Block2_Francophonie_*.txt`)
- `360001` – `360080`: Block 3 — Ibero-America & Iberia incl. Portugal (`db/events/Blocks/Block3_Iberoamerica_*.txt`)
- `370001` – `370080`: Block 4 — North Muslim Africa (`db/events/Blocks/Block4_NorthAfrica_*.txt`)
- `380001` – `380080`: Block 5 — Middle East: Sunni, Shia & Israel (`db/events/Blocks/Block5_MiddleEast_*.txt`)
- `390001` – `390080`: Block 6 — Sub-Saharan Africa (`db/events/Blocks/Block6_SubSaharanAfrica_*.txt`)
- `400001` – `400080`: Block 7 — Indian Subcontinent (`db/events/Blocks/Block7_IndianSubcontinent_*.txt`)
- `410001` – `410080`: Block 8 — Southeast Asia (`db/events/Blocks/Block8_SoutheastAsia_*.txt`)
- `420001` – `420080`: Block 9 — Atlantic, Nordic & Baltic Europe (`db/events/Blocks/Block9_AtlanticNordicBaltic_*.txt`)
- `430001` – `430080`: Block 10 — Central-Balkan Europe & Occupation Regimes (`db/events/Blocks/Block10_CentralBalkan_*.txt`)
- `440001` – `440080`: Block 11 — Interior Asia, Caucasus, Korea & Eurasian Factions (`db/events/Blocks/Block11_InteriorAsia_*.txt`)
- `450001` – `450100`: Final Global Rebalance, 0-Event Tag Rescue & Weak Minor Industrial Uplift (`db/events/Blocks/Global_Minor_Rebalance_Uplift.txt`)
- **`450101` – `509999`**: **FREE FOR NEW DEVELOPMENT / BUGFIXES / EXPANSIONS**

---

## 3. Strict Europa Engine (Darkest Hour) Rules

### A. Event Syntax (`db/events/**/*.txt`)
- **Pure native command syntax ONLY** — NEVER combine commands on one line or omit `type =`:
  - GOOD: `command = { type = dissent value = -5 }`
  - BAD: `command = { dissent = -5 supplies = 500 }`
  - GOOD slider: `command = { type = domestic which = democratic value = 1 }` (never `political_sliders = { ... }`)
  - GOOD relations: `command = { type = relation which = TAG value = 50 }` (never `relations = { ... }`)
  - GOOD intel minister: `command = { type = ministerofintelligence which = ID }` (never `headofmilitaryintelligence`)
  - GOOD armament minister: `command = { type = armamentminister which = ID }` (never `headofarmament`)
  - GOOD puppet release: `command = { type = end_mastery which = TAG }` (never `end_master`)
  - GOOD industrial bonus: `command = { type = construct which = ic where = -1 value = 1 }` or `command = { type = industrial_modifier which = total value = 3 }`
- **Calendar**: Europa Engine uses **30-day months** (`1`–`30` max; February `1`–`28`). Never use `day = 31`.
- **Tags**: Validate every `country`, `exists`, `which` tag against `db/country.csv`!
  - Watch non-ISO DH tags: Peru=`PRU`, Paraguay=`PAR`, Senegal=`U96`, Nigeria=`NIG`, Kenya=`U90`, Cambodia=`CMB` (`CAM` is Cameroon), Malaya=`MLY` (`MAL` is Mali), Bangladesh=`UIR`, El Salvador=`SAL`, Trieste=`U38`.
- **Ministers**: Validate any `headofstate` / `headofgovernment` / etc. ID against `db/ministers/ministers_<tag>.csv`. Note: tags like `U38`, `U68`, `U69`, `UES`, `U54`, `U65`, `UIC`, `UPR`, `URO` have **no minister file**—never emit minister commands for them.
- **Pictures**: Verify every `picture = "..."` resolves to an existing `.bmp` file inside `gfx/events_pics/`.
- **Registration**: Every `.txt` file under `db/events/` MUST be registered once in `db/tgc-events.txt`.

### B. Localization CSVs (`config/*.csv`) — CRITICAL RULES
- **Encoding**: Strictly `Windows-1252` (`latin-1`), never BOM UTF-8.
- **Column Structure (12 columns, `;` delimited, ending in `;X`)**:
  `KEY;English;French;Italian;Spanish;German;Polish;Portuguese;Russian;Extra1;Extra2;X`
  - **Column 1 (`English`)** = English text ONLY.
  - **Column 4 (`Spanish`)** = Spanish text ONLY.
  - **Supported languages**: Only **English** and **Spanish** are officially maintained. Leave columns `2, 3, 5, 6, 7, 8, 9, 10` blank unless intentionally translated by a native speaker.
- **FORBIDDEN SEMICOLON RULE**: NEVER use `;` inside ANY English or Spanish sentence, title, description, or button text! Even when grammatically valid in prose, `;` acts as the Paradox CSV delimiter and shifts columns, breaking the game UI. Replace `;` with `,`, `.`, `:`, `-`, or rephrase the sentence.

---

## 4. Mandatory Verification Commands (Run After Every Edit)
Run both from the repository root (`TCG Remake/`):
```bash
python tools/master_mod_audit.py
python tools/syntax_check.py
```
Both scripts MUST report **100% PASSED / 0 defects** before committing or pushing.
