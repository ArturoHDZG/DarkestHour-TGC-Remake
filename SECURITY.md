# Security Policy / Política de Seguridad

## Scope & Threat Model
**The Grand Campaign (TGC Remake)** is a data/asset modification for *Darkest Hour (Europa Engine)*.  
Almost all mod content consists strictly of plain-text Paradox script files (`.txt`, `.eug`, `.inc`, `.ai`), Windows-1252 localization tables (`.csv`), audio (`.mp3`, `.wav`), and graphic assets (`.bmp`, `.png`, `.ico`).

To protect contributors and players from malicious code injection, supply-chain tampering, and Trojanized downloads:

### Strict Repository Rules
1. **No New Executables or Native Binaries**: Pull Requests introducing or modifying executables/scripts (`.exe`, `.dll`, `.bat`, `.cmd`, `.ps1`, `.vbs`, `.scr`, `.msi`, `.sh`, `.so`, `.dylib`, `.jar`) are **strictly rejected**.
   * The single pre-existing legacy mod utility [`HoI2Editor.exe`](HoI2Editor.exe) is pinned by its verified **SHA-256 checksum** in [`tools/security_check.py`](tools/security_check.py). Any byte-level tampering fails CI automatically.
2. **Restricted CI Permissions & Workflow Hardening**:
   * All GitHub Actions workflows run with `permissions: contents: read` (least-privilege), `persist-credentials: false`, and never execute untrusted `pull_request_target` workflows.
   * Automated checks block suspicious dynamic code execution primitives (`eval`, `exec`, `shell=True`, obfuscated/base64 payloads) or unauthorized changes inside `.github/workflows/` and `tools/`.
3. **No Path Traversal or Symlinks**: Symbolic links and malformed archive paths are blocked by CI verification.
4. **Release Verification**: Official pre-releases and releases include a `SHA256SUMS.txt` manifest so players can verify downloaded archives have not been altered.

---

## Reporting a Security Vulnerability / Reportar un Problema de Seguridad
If you discover a suspicious binary, tampered release asset, malicious script in a PR, or CI workflow vulnerability:
* **Do NOT open a public issue with exploit instructions.**
* Contact the repository maintainer privately via GitHub Security Advisories (**Security → Advisories → Report a vulnerability**).
* Please include affected file paths, commit hashes, or SHA-256 checksums.
