# Contexto de Fixes UI y Estandarización de Tecnologías (Rama `fix/tech-ui-names`)

Este documento resume los cambios aplicados en la rama temporal `fix/tech-ui-names` (basada en `4853003a`) para estandarizar nombres (`NAME`), nombres cortos (`SHORT_`), etiquetas (`TECH_CAT_*`) y posiciones en el árbol tecnológico de **TGC Remake (Darkest Hour)**, evitando desbordamientos en la interfaz en español.

---

## 1. Archivos modificados
- `config/tech_names.csv` (codificación `Windows-1252` / `latin-1`)
- `config/tech_normalization_ledger.csv` (sincronizado con `tech_names.csv`)
- `db/tech/infantry_tech.txt`
- `db/tech/armor_tech.txt`
- `db/tech/naval_tech.txt`
- `db/tech/aircraft_tech.txt`
- `db/tech/industry_tech.txt`

---

## 2. Reglas de diseño y UI acordadas
1. **Nombres cortos (`SHORT_TECH_APP_*`)**:
   - Son cajas muy pequeñas en la interfaz del árbol tecnológico: **no usar abreviaturas largas ni subtipos innecesarios** (`Mec.`, `Superp.`, `Reacc.`, etc.) si desbordan.
   - El formato estándar es **`<Categoría corta> {año}`** (ej. `Infantería 1870`, `Inf. Par. 1938`, `Torpedos 1870`, `GAE 1922`). El año es obligatorio porque indica la dificultad/época.
2. **Nombres completos (`TECH_APP_*`)**:
   - Formato descriptivo unificado en español con preposición `de` antes del año en la mayoría de ramas (ej. `División de Infantería de 1870`, `Buque Corbeta de 1939`, `Caza Interceptor de 1914`).
3. **Reglas técnicas obligatorias (`AGENTS.md`)**:
   - Todos los CSV en `config/*.csv` se leen y escriben estrictamente en **`Windows-1252` (`latin-1`)**.
   - Cero `;` dentro de textos, cero líneas en blanco en CSV, y `#EOF;;;;;;;;;;;X` únicamente en la última línea.
   - El carácter ordinal `ª` (`0xAA` en `latin-1`, ej. `3.ª`, `4.ª`) es compatible con el motor y las auditorías.
   - Ejecutar siempre las 3 auditorías antes de commit/push:
     - `python tools/security_check.py`
     - `python tools/master_mod_audit.py`
     - `python tools/syntax_check.py`

---

## 3. Resumen de cambios por pestaña

### A. Infantería (`db/tech/infantry_tech.txt` + `config/tech_names.csv`)
- **Labels y posiciones:**
  - `TECH_CAT_MOUNTAIN`: `Infantería de Montaña` en `(121, 1)`
  - `TECH_CAT_MECHANIZED`: en `(237, 1)`
  - `TECH_CAT_MOTORIZED`: en `(355, 1)`
  - `TECH_CAT_MARINES`: en `(475, 1)`
  - `TECH_CAT_ENGINEERS`: `Zapadores/Ingenieros` en `(469, 289)`
  - **Nuevo label** `TECH_CAT_REPAIRS` (`Reparaciones`) en `(140, 374)` sobre las tecnologías de talleres/reparación (`id = 199130+`)
- **Short names:**
  - Infantería Regular: `Infantería {año}`
  - Infantería de Marina: `Inf. Marina {año}` (todos, sin `Mec.`)
  - Caballería: `Caballería {año}` (todos, sin `Mecanizada`/`Blindada`/`Acorazada`)
  - Paracaidistas: `Inf. Par. {año}` (todos)
  - Zapadores: `Zapadores {año}` (todos, sin `Mec.`)
  - Movilización: `Movilización 1914`
- **Names:**
  - Infantería Regular: `División de Infantería de {año}`
  - Infantería Ligera: `Infantería Ligera de {año}`
  - Infantería de Montaña: `Infantería de Montaña {año}`
  - Infantería Motorizada / Mecanizada: `Infantería Motorizada de {año}` / `Infantería Mecanizada de {año}`
  - Infantería de Marina: `Infantería de Marina de {año}` (1922–1957), `Marina Mecanizada {año}` (1961+)
  - Caballería: `División de Caballería de {año}` (1870–1936), `Caballería Motorizada de 1939`, `Caballería Mecanizada de 1942`, `Caballería Blindada de 1946`, `Caballería Acorazada de {año}` (1953+)
  - Fuerzas Especiales 1941: `Fuerzas Especiales de 1941`
  - Zapadores: `Brigada de Zapadores de {año}` (1911–1960), `Ingenieros Mecanizados de {año}` (1970+)

### B. Blindaje y Artillería (`db/tech/armor_tech.txt` + `config/tech_names.csv`)
- **Labels y posiciones:**
  - `TECH_CAT_greatwartanks`: `Blindados PGM` en `(40, 1)`
  - `TECH_CAT_LIGHTTANKS`: `Blindados Ligeros` en `(37, 51)`
  - `TECH_CAT_MEDIUMTANKS`: `Blindados Medios/MBT` en `(25, 255)`
  - `TECH_CAT_HEAVYTANKS`: `Blindados Pesados`
  - `TECH_CAT_ARMOUREDCAR`: `Tanquetas/APC` en `(570, 288)`
  - `TECH_CAT_SELFPROPART`: `Art. Autopropulsada`
  - `TECH_CAT_ROCKETART`: en `(160, 323)`
  - `TECH_CAT_SPANTIAIR`: en `(547, 136)`
  - `TECH_CAT_GLIDER_ARM`: `Blindados Planeador`
- **Short names:**
  - Blindados PGM: `Blindados 1917`, `Blindados 1918`
  - Blindados Ligeros: `Bli. Ligeros {año}` (todos menos `VCI 1965`)
  - Blindados Medios/MBT: `Blindados {año}` (1939–1952), `MBT {año}` (1956+)
  - Blindados Pesados: `Bli. Pesados {año}` (regulares), `Bli. SP {año}` (superpesados 1944, 1959)
  - Tanquetas/APC: `Tanquetas {año}` (1911–1948), `APC {año}` (1954+)
  - Art. Campaña 1918: `Artillería 1918`
  - Brigadas AA: `Brig. AA {año}`
  - Art. Cohetes AP: `Art. Coh. AP {año}`
  - Blindados Planeador: `Bli. Aéreos 1943`, `Bli. Aéreos 1958`, `VCI Aéreos 1968`
- **Names:**
  - `Blindados de la Gran Guerra {año}`, `Blindados Ligeros de {año}`, `Vehículos de Combate de Infantería de 1965`
  - `Blindados de {año}` (hasta 1952) y `Tanques de Batalla Principal de {año}` (1956+)
  - `Blindados Pesados de {año}` y `Blindados Superpesados de {año}`
  - `Vehículos Cazacarros {año}`
  - `Tanquetas de {año}` (hasta 1929), `Vehículos Autoametralladores de {año}` (1936–1948), `Transportes Blindados de Personal de {año}` (1954+)
  - `Artillería de Campaña de {año}`, `Artillería Autopropulsada de {año}`, `Artillería Anticarro de {año}`, `Artillería de Cohetes de {año}`, `Artillería de Cohetes AP de {año}`
  - `Batería Antiaérea Estática de {año}` (1917–1948) y `Batería Antiaérea SAM de 1956`
  - `Artillería Antiaérea de {año}`, `Artillería Antiaérea AP de {año}`
  - `Blindados para Planeador de 1943`, `Blindados Aerotransportados de {año}`

### C. Naval (`db/tech/naval_tech.txt` + `config/tech_names.csv`)
- **Labels y posiciones:**
  - `TECH_CAT_MISSCORVETTE`: en `(2, 120)`
  - `TECH_CAT_TRANSPORTS`: en `(7, 340)`
  - `TECH_CAT_DESTROYERS`: en `(142, 1)`
  - `TECH_CAT_DDG`: `Destructores Misil` en `(130, 170)`
  - `TECH_CAT_LARGEASW`: `Destructores GAS` en `(128, 256)`
  - `TECH_CAT_ASW_EQUIPMENT`: `Equipo Antisubmarinos` en `(118, 340)`
  - `TECH_CAT_CIWS`: en `(428, 389)`
  - `TECH_CAT_ARMDBOX`: en `(412, 440)`
- **Short names:**
  - `GAS {año}`, `Cruc. Ligero {año}`, `Cru. Pesado {año}`, `Acorazado {año}`, `PPav Ligero {año}`, `Portaaviones {año}`, `Submarino {año}`, `Torpedos {año}`
- **Names:**
  - `Buque Corbeta de {año}`, `Corbeta Lanzamisiles de {año}`, `Buque Fragata de {año}`, `Transporte de Tropas de {año}`
  - `Cañonero Torpedero de 1885`, `Buque Destructor de {año}`, `Destructor Lanzamisiles de {año}`, `Destructor Antisubmarino de {año}`, `Sistemas de Guerra Antisubmarina de {año}`
  - `Crucero Ligero de Guerra de {año}`, `Crucero Pesado de Guerra de {año}`, `Crucero de Batalla de {año}`
  - `Buque Acorazado de {año}`, `Acorazado Superpesado de {año}`
  - `Portahidroaviones de 1912`, `Portaaviones Escolta de 1916/1920`, `Portaaviones Ligero y Escolta de 1929/1941/1944`, `Portaaviones Ligero de 1948/1959`, `Crucero Pesado de Aviación de 1970/1982`, `Portahelicópteros de 1971/1989`
  - `Portaaviones de {año}` y `Superportaaviones de 1951`
  - `Buque sumergible de {año}` (1896–1933), `Buque sumergible de Gran Alcance de {año}` (1937–1943), `Submarino Superpesado de 1944`, `Submarino de {año}` (1950+)
  - `Torpedos Navales de {año}`, `Torpedos Aerolanzables de 1912`, `Torpedos Antisubmarinos de 1957`

### D. Aviación (`db/tech/aircraft_tech.txt` + `config/tech_names.csv`)
- **Labels y posiciones:**
  - `TECH_CAT_FIGHTERS`: `(78, 1)`
  - `TECH_CAT_INTERCEPTORS`: `(26, 154)`
  - `TECH_CAT_MULTIFIGHTERS`: `(120, 154)`
  - `TECH_CAT_JETFIG`: `(68, 238)`
  - `TECH_CAT_REFUELPLANE`: `Naves Nodriza` en `(134, 390)`
  - `TECH_CAT_CAG`: `Grupos Embarcados` en `(236, 154)`
  - `TECH_CAT_TACTBOMBERS`: `Bomb. Tácticos`
  - `TECH_CAT_ATTHELO`: `Helicópteros Ataque`
  - `TECH_CAT_FIXEDWINGGUNSHIP`: `Cañoneros de Apoyo` en `(352, 355)`
  - `TECH_CAT_AWACS`: en `(360, 439)`
  - `TECH_CAT_STRATBOMBERS`: `Bomb. Estratégicos`
  - `TECH_CAT_NAVBOMBERS`: `Bomb. Navales`
- **Short names:**
  - `Interceptor {año}`, `Caza Poliv. {año}` (hasta 1967), `Cazas {año}` (1974, 1983), `Caza Escolta {año}`, `Nave Nodriza {año}`, `GAE {año}`, `B. Experim. 1911`, `Bomb. Táct. {año}`, `Bomb. Est. {año}`, `Bomb. Naval {año}`, `Cañonero Ap. {año}`, `Nave AAC {año}`
- **Names:**
  - `Avión de Reconocimiento de 1910`
  - `Caza Interceptor de {año}` (1914–1942), `... a Reacción de {año}` (1944–1958), `... Supersónico de {año}` (1962+)
  - `Caza Polivalente de {año}` (1916–1943), `... a Reacción de {año}` (1945–1959), `Caza de 3.ª Generación ({año})` (1963, 1967), `Caza de 4.ª Generación ({año})` (1974, 1983)
  - `Caza de Escolta ... de {año}`, `Avión de Reabastecimiento de {año}`, `Nave de Apoyo Aéreo Cercano de {año}`
  - `Bombardero Experimental de 1911`, `Bombardero Táctico ... de {año}`, `Bombardero Estratégico ... de {año}`, `Bombardero Naval ... de {año}`
  - `Avión de Transporte Aéreo de {año}`, `Cañoneros de Apoyo Terrestre de {año}`, `Hidroavión de {año}`, `Avión de Alerta Temprana (AWACS) de {año}`
  - `Helicóptero de Exploración Naval de {año}`, `Helicóptero Naval Antisubmarino de {año}`, `Helicóptero de Apoyo Armado de {año}`, `Grupo Aeronaval Embarcado de {año}`

### E. Industria y Producción (`db/tech/industry_tech.txt` + `config/tech_names.csv`)
- **Labels y posiciones:**
  - `TECH_CAT_MANUFACTURING`: `(4, 1)`
  - `TECH_CAT_ASSEMBLYLINES`: `(12, 287)`
  - `TECH_CAT_AGRICULTURE`: `(124, 1)`
  - `TECH_CAT_HOSPITALS`: `(124, 321)`
  - `TECH_CAT_CONSTRUCTION`: `(240, 1)`
  - `TECH_CAT_SYNTHETICOIL`: `(364, 1)`
  - `TECH_CAT_RRWARNING`: `Radares de Alerta` en `(594, 1)`
  - `TECH_CAT_NUCLEAR`: `(474, 321)`
  - `TECH_CAT_EQUIPMENT`: `Equip. Especializado` en `(586, 321)`
- **Short names:**
  - Fabricación Industrial: `Gestión 1910`, `Producción 1915`, `Fabricación 1925`, `Procesos 1930`, `Montaje 1940`, `Pro. Flexible 1955`, `Planificación 1960`, `Fab. Digital 1964`
  - Líneas de Montaje: `Mont. Aéreo {1940/1982}`, `Mont. Naval {1940/1982}`, `Mont. Vehíc. {1940/1982}`, `Mont. Armas {1940/1981}`, `Mont. Cohe. 1942`, `Mont. Misiles 1982`
  - Producción Agrícola: `Prod. Agrícola {año}` (todos)
  - Hospitales Militares / Medicina: `Hospital Mil. {año}` (todos), `Medicina {año}` (todos)
  - Computación: `Tiro Análogo 1916`, `Máq. Cont. 1928`, `T. Inform. {1948/1960/1976}`
  - Nuclear: `Inv. Atómica {año}` (todos)
  - Radares: `Radares {año}` (todos)
  - Equip. Especializado: `Eq. Agreste 1939`, `Eq. Invernal 1939`, `Eq. Tropical 1939`, `Eq. Desierto 1939`, `Veh. Agreste 1940`, `Veh. Invierno 1940`, `Veh. Selva 1940`, `Veh. Desierto 1940`
