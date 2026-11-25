# Translation & Localization Guide / Guía de Traducción

Thank you for helping translate **The Grand Campaign (TGC Remake)** into more languages!

## CSV Format Rules (CRITICAL)
Darkest Hour uses semicolon-delimited (`;`) CSV files encoded in **Windows-1252 (`latin-1`)** inside `config/`:
* Primary files: `config/event_text.csv`, `config/scenario_text.csv`, `config/text.csv`, `config/world_names.csv`.

Every data row has **12 semicolon-separated columns** ending in `;X`:
```text
Col 0: STRING_KEY (DO NOT MODIFY)
Col 1: English
Col 2: French
Col 3: Italian
Col 4: Spanish
Col 5: German
Col 6: Polish
Col 7: Portuguese
Col 8: Russian
Col 9: Extra1
Col 10: Extra2
Col 11: X (DO NOT REMOVE)
```

## Golden Rules Before Submitting a PR
1. **NEVER use `;` (semicolon) inside any translated sentence!** Even when grammatically right, `;` breaks the CSV column count and corrupts all texts below or next to it. Always replace `;` with `,`, `.`, `:`, or `-`.
2. **Save as `Windows-1252` (`latin-1`)** (not UTF-8 with BOM).
3. Keep placeholders (`%s`, `%d`, `\n`) intact.
4. Run the verification suite before committing:
   ```bash
   python tools/master_mod_audit.py
   python tools/syntax_check.py
   ```
