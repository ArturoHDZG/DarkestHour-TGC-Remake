# The Grand Campaign — TGC Remake (Darkest Hour)

[![Mod Audit](https://github.com/ArturoHDZG/DarkestHour-TGC-Remake/actions/workflows/audit.yml/badge.svg)](https://github.com/ArturoHDZG/DarkestHour-TGC-Remake/actions/workflows/audit.yml)

*(English description first, followed by Español below / Descripción en inglés arriba y en español más abajo)*

---

## 🌍 English — About TGC Remake

**The Grand Campaign (TGC Remake)** is a comprehensive overhaul and expansion built upon the classic *The Grand Campaign (v2.4.90)* mod for **Darkest Hour: A Hearts of Iron Game**, spanning **1900 to 2000+** across four deep historical and alternate-history timeline branches:

1. **Historical Timeline (1900–2000+)**: Belle Époque, WWI, Interwar, WWII, Cold War, Decolonization, and late 20th-century transitions.
2. **Branch 1 — Pax Germanica**: Central Powers victory (`U08`, `U09`, `OTT`), Mitteleuropa, Berlin–Baghdad axis, and Cold War against Imperial Germany.
3. **Branch 2 — Pax Fascista**: Axis hegemony, *Reichskommissariats*, Allied governments-in-exile, and global resistance networks.
4. **Branch 3 — Pax Sovietica**: Eurasian socialist dominance, People's Republics (`U10`–`U35`), multipolar Cold War, and Sino-Soviet dynamics.

### Key Improvements Over Original TGC 2.4.90
* **14,591+ Events across 567 Files**: Complete narrative and mechanical leveling across all **10 Great Powers** (`GER/U08`, `ENG`, `FRA`, `USA`, `RUS/SOV`, `ITA`, `JAP`, `CHI/CHC`, `U09/AUS`, `OTT/TUR`) plus **11 Global Cultural-Political Blocks** (880 regional/systemic events) and a **Weak-Minor Rebalance & Industrial Uplift Pass** (100 events rescuing 0-event formables and boosting minor playability).
* **0-Defect Engine Hygiene**: Every event normalized to strict native **Europa Engine** command syntax (`command = { type = ... }`), verified 12-column Paradox CSV alignment, validated country tags (`db/country.csv`), ministers (`29,955`), leaders (`63,332`), tech teams (`22,514`), and BMP event graphics (`0` missing).
* **Map & Urban Modernization**: 183 urban provinces with city sprites/illustrations and clean 1900 & 1914 scenario definitions.

---

### ⚠️ IMPORTANT LANGUAGE DISCLAIMER (English & Spanish Only)
> **This mod is officially localized ONLY in English and Spanish.**
>
> All new and expanded content has been authored in Spanish (native language of the creator) and localized to English so the international community can play seamlessly and create future translations.
>
> **All other language columns** (French, Italian, German, Polish, Portuguese, Russian) are intentionally **left blank** for new events. If you switch Darkest Hour's language setting to any language other than **English** or **Spanish**, new events will display empty text boxes or `UNKNOWN STRING WANTED`.
>
> **Want to translate into your language?** Native speakers are warmly welcome! See [docs/TRANSLATION_GUIDE.md](docs/TRANSLATION_GUIDE.md) and submit a Pull Request—remember **never** to use `;` inside any translated text!

---

### 📥 Installation (Players)

#### Option A — GitHub Releases (Recommended for Players)
1. Go to the [**Releases**](../../releases) section of this repository and download the latest packaged archive.
2. Extract the folder into your Darkest Hour installation directory under `Mods\`:
   ```text
   <Darkest Hour Folder>\Mods\TCG Remake\
   ```
   *(Make sure `config\`, `db\`, `gfx\`, `map\`, and `scenarios\` sit directly inside `Mods\TCG Remake\`, not nested inside an extra duplicate folder).*
3. Open **Darkest Hour Launcher**, select **`TCG Remake`** in the mod dropdown, set your language to **English** or **Spanish**, and launch!

#### Option B — Git Clone (Testers & Contributors)
```bash
git clone https://github.com/ArturoHDZG/DarkestHour-TGC-Remake.git "TCG Remake"
```

### 🐛 How to Report Bugs
1. In `<Darkest Hour Folder>\settings.cfg`, set `1 # Extra debug logs` before launching.
2. Open an Issue using our Bug Report template and attach your **`savedebug.txt`** (from the Darkest Hour root folder) plus the scenario/country/date where the issue occurred.

---
---

## 🇪🇸 Español — Acerca de TGC Remake

**The Grand Campaign (TGC Remake)** es una modernización y expansión integral sobre el mod clásico *The Grand Campaign (v2.4.90)* para **Darkest Hour**, abarcando desde **1900 hasta más allá del 2000** con cuatro ramas completas:

1. **Tronco Histórico (1900–2000+)**: Belle Époque, IGM, Entreguerras, IIGM, Guerra Fría, Descolonización y fin de siglo.
2. **Rama 1 — Pax Germanica**: Victoria de los Imperios Centrales (`U08`, `U09`, `OTT`).
3. **Rama 2 — Pax Fascista**: Hegemonía del Eje, *Reichskommissariats* y redes globales de resistencia.
4. **Rama 3 — Pax Soviética**: Dominio euroasiático socialista, Repúblicas Populares y Guerra Fría multipolar.

### Qué aporta respecto al mod original
* **14,591+ eventos en 567 archivos**: Nivelación de las **10 Grandes Potencias**, **11 Bloques Político-Culturales del mundo** (880 eventos) y un **Pase Final de Rebalance y Estímulo Industrial** (100 eventos rescatando tags con 0 eventos y dando bonificaciones jugables de CI, ingresos y recursos a las naciones menores débiles).
* **0 defectos técnicos**: Sintaxis 100% nativa del *Europa Engine*, CSVs de 12 columnas verificados, tags, ministros (`29,955`), líderes (`63,332`), equipos tecnológicos (`22,514`) e imágenes `.bmp` validados al 100%.

### ⚠️ AVISO IMPORTANTE DE IDIOMAS (Solo Inglés y Español)
> **Este mod solo está localizado oficialmente al Español y al Inglés.**
>
> Todas las columnas de otros idiomas (francés, italiano, alemán, polaco, portugués, ruso) permanecen en blanco en el contenido nuevo. Si cambias el idioma del juego a otro que no sea **Español** o **Inglés**, en los eventos nuevos aparecerán cuadros vacíos o `UNKNOWN STRING WANTED`.
>
> Invitamos a traductores nativos de la comunidad a añadir su idioma consultando [docs/TRANSLATION_GUIDE.md](docs/TRANSLATION_GUIDE.md) y enviando un *Pull Request* (sin usar nunca punto y coma `;` dentro de las oraciones, ya que rompe el CSV).

---

## 📜 Credits / Créditos
* **Original Mod**: *The Grand Campaign (v2.4.90)* by **ejwith9953**, *World in Flames 2 (WiF2)* contributors, and all original credits preserved in [`Readme.txt`](Readme.txt).
* **Base Game**: *Darkest Hour: A Hearts of Iron Game* by the **Darkest Hour Team**.
* **TGC Remake Modernization & Expansion**: **Arturo Hernández Garza** and contributors.
