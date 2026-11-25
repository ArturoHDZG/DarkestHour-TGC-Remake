# Technical Documentation — The Grand Campaign (TGC Remake)

[![Mod Verification & Security Audit](https://github.com/ArturoHDZG/DarkestHour-TGC-Remake/actions/workflows/audit.yml/badge.svg)](https://github.com/ArturoHDZG/DarkestHour-TGC-Remake/actions/workflows/audit.yml)

This document contains the technical architecture, engine specifications, ID allocation map, verification tools, and contribution workflows for modders, testers, and automated checks. For the player overview and installation guide, see the main [README.md](../README.md).

---

## 1. Engine & Repository Metrics (Verified Baseline)
- **Target Engine**: Darkest Hour (Europa Engine)
- **Event System**: **567 event files** registered in [`db/TGC-events.txt`](../db/TGC-events.txt) totaling **14,591 events** (`0` duplicate IDs).
- **Databases**:
  - **Ministers**: `29,955` entries (`db/ministers/*.csv`)
  - **Leaders**: `63,332` entries (`db/leaders/*.csv`)
  - **Tech Teams**: `22,514` entries (`db/tech/teams/*.csv`)
  - **Tech & Units**: `1,214` technologies (`db/tech/*.txt`), `110` unit files (`db/units/`)
- **Localization**: `260,589` lines across `config/*.csv` (`0` duplicate keys, `0` shifted rows). Strict `Windows-1252 (latin-1)` encoding, 12-column semicolon-delimited format ending in `;X`.
- **Map & Scenarios**: `2,772` lines in `map/Map_1/province.csv`, `183` urban provinces, `95` province illustrations, `85` city sprites, `0` missing BMP event pictures, `0` scenario errors (`scenarios/1900.eug` & `scenarios/1914.eug`).

---

## 2. Directory Structure
```text
TCG Remake/
├── .github/
│   ├── workflows/audit.yml          # Hardened CI (least privilege contents: read)
│   ├── rulesets/                    # Ready-to-import GitHub branch & tag rulesets
│   ├── ISSUE_TEMPLATE/bug_report.md # Community bug reporting template
│   └── FUNDING.yml                  # Community donation configuration
├── ai/                              # National & switch AI profiles (1900–1990+)
├── config/                          # 12-column Windows-1252 localization CSVs (EN/ES)
├── db/
│   ├── TGC-events.txt               # Master event include registry (case-sensitive)
│   ├── events/Blocks/               # 11 Cultural-Political Blocks + Final Rebalance
│   ├── ministers/, leaders/, tech/  # Character & technology databases
│   └── country.csv, revolt.txt      # Country & formable nation definitions
├── docs/
│   ├── WALKTHROUGH.md               # Complete development chronicle
│   ├── TRANSLATION_GUIDE.md         # Community native translation rules
│   └── TECHNICAL.md                 # This technical reference
├── gfx/, music/, sfx/               # Graphics, event pictures, audio & interfaces
├── map/                             # Province data, naval/land distances & urban sprites
├── scenarios/                       # 1900.eug & 1914.eug scenario setups
├── tools/
│   ├── security_check.py            # Anti-injection & SHA-256 binary integrity guard
│   ├── master_mod_audit.py          # Full 9-domain mod consistency auditor
│   ├── syntax_check.py              # Native Europa Engine syntax & bilingual CSV checker
│   └── build_release.py             # Release packager + SHA256SUMS.txt generator
├── AGENTS.md                        # Technical specification for AI agents & contributors
├── SECURITY.md                      # Security & anti-injection policy
└── README.md                        # Player-facing promotional landing page
```

---

## 3. Timeline Architecture & Official Event ID Allocation Map
All content spans **1900–2000+** across four geopolitical branches (*Historical*, *Pax Germanica*, *Pax Fascista*, *Pax Sovietica*):

| ID Range | Module / Block | Files |
| :--- | :--- | :--- |
| `100` – `324999` | Base TGC & Legacy Great Power / Regional Expansions | `db/events/{ENG,FRA,GER,ITA,JAP,RUS,SOV,USA,Minors,GLOBAL}/` |
| `325001` – `331260` | Great Power Leveling Volumes 4 & 5 (`USA`, `CHI`, `JAP`, `FRA`, `ITA`, `AUS`, `TUR`) | `db/events/{USA,CHI,JAP,FRA,ITA,Minors}/` |
| `340001` – `340080` | Block 1: British Commonwealth | `db/events/Blocks/Block1_Commonwealth_*.txt` |
| `350001` – `350080` | Block 2: Francophonie & Quebec | `db/events/Blocks/Block2_Francophonie_*.txt` |
| `360001` – `360080` | Block 3: Ibero-America & Iberia (incl. Portugal) | `db/events/Blocks/Block3_Iberoamerica_*.txt` |
| `370001` – `370080` | Block 4: North Muslim Africa | `db/events/Blocks/Block4_NorthAfrica_*.txt` |
| `380001` – `380080` | Block 5: Middle East (Sunni, Shia & Israel) | `db/events/Blocks/Block5_MiddleEast_*.txt` |
| `390001` – `390080` | Block 6: Sub-Saharan Africa | `db/events/Blocks/Block6_SubSaharanAfrica_*.txt` |
| `400001` – `400080` | Block 7: Indian Subcontinent | `db/events/Blocks/Block7_IndianSubcontinent_*.txt` |
| `410001` – `410080` | Block 8: Southeast Asia | `db/events/Blocks/Block8_SoutheastAsia_*.txt` |
| `420001` – `420080` | Block 9: Atlantic, Nordic & Baltic Europe | `db/events/Blocks/Block9_AtlanticNordicBaltic_*.txt` |
| `430001` – `430080` | Block 10: Central-Balkan Europe & Occupation Regimes | `db/events/Blocks/Block10_CentralBalkan_*.txt` |
| `440001` – `440080` | Block 11: Interior Asia, Caucasus, Korea & Eurasian Factions | `db/events/Blocks/Block11_InteriorAsia_*.txt` |
| `450001` – `450100` | Final Global Rebalance, 0-Event Tag Rescue & Weak Minor Industrial Uplift | `db/events/Blocks/Global_Minor_Rebalance_Uplift.txt` |
| **`450101` – `509999`** | **Reserved & Free for New Expansions / Bugfixes** | — |

---

## 4. Verification & Build Commands
Every Pull Request and push to `main` is automatically audited in CI, and contributors should run all three checks locally from the repository root before committing:

```bash
python tools/security_check.py
python tools/master_mod_audit.py
python tools/syntax_check.py
```

To package a clean, checksummed archive for distribution in `dist/`:
```bash
python tools/build_release.py --version vX.Y.Z
```
*(Automatically checks GitHub's 2.0 GiB per-asset limit and generates `dist/SHA256SUMS.txt`.)*

---

## 5. Technical Rules Summary for Contributors
* See [`AGENTS.md`](../AGENTS.md) for strict Europa Engine syntax (`command = { type = ... }`, 30-day calendar, validated tags/ministers/BMPs).
* See [`docs/TRANSLATION_GUIDE.md`](TRANSLATION_GUIDE.md) for CSV rules (**never** use `;` inside any text string, preserve `Windows-1252`, keep unused language columns empty).
* See [`SECURITY.md`](../SECURITY.md) for binary integrity (`HoI2Editor.exe` SHA-256 pinning) and anti-injection enforcement.
