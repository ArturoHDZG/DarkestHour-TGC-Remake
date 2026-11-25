# Windows 10 / 11 Performance Guide — Darkest Hour (Europa Engine)
*(English above, Español más abajo)*

---

## ⚠️ Creator's Recommendation & Third-Party Disclaimer
> **Recommended by the creator of TGC Remake (Arturo Hernández Garza)** for smoother FPS, faster map scrolling, and long-campaign stability on Windows 10 and Windows 11.
>
> **DISCLAIMER:** None of the graphics wrappers (`cnc-ddraw`, `dgVoodoo 2`, `dxwrapper`) or binary patchers (`4GB Patch`) listed below are created, owned, maintained, or redistributed by the author of **TGC Remake**. They are **independent third-party projects** hosted exclusively on their respective authors' official pages. Download and install them at your own discretion, directly into your **main Darkest Hour installation folder** (never inside `Mods\TCG Remake\`).

---

## 🌍 English — Boosting Performance on Modern Windows

Because *Darkest Hour* runs on the classic 32-bit **Europa Engine** (legacy DirectDraw / DirectX), Windows 10 and Windows 11 frequently cap frame rates to 10–20 FPS when unpaused or stutter during fullscreen scrolling.

### Step 1 — Native Windows & `settings.cfg` Tweaks (No Downloads Needed)
Try these native settings first inside your **main Darkest Hour root folder** (e.g. `...\Steam\steamapps\common\Darkest Hour A HOI Game\`):

1. **Enable Windowed Mode**: Open `settings.cfg` and set `display mode` to **`1`** (instead of `0`). Choose a resolution equal to or slightly smaller than your desktop.
2. **Compatibility Settings on `Darkest Hour.exe`**:
   * Right-click **`Darkest Hour.exe`** $\rightarrow$ **Properties $\rightarrow$ Compatibility**.
   * Check **Reduced color mode** $\rightarrow$ **16-bit (65,536) color**.
   * Check **Disable fullscreen optimizations**.
   * *(Optional if still unstable)* Try **Windows 7** or **Windows XP (SP3)** compatibility mode.
3. **Enable Legacy DirectPlay**:
   * Open Windows Search $\rightarrow$ **Turn Windows features on or off** $\rightarrow$ expand **Legacy Components** $\rightarrow$ check **DirectPlay** $\rightarrow$ OK.
4. **Bypass Steam Overlay**: Use `Darkest Hour Launcher.exe` once to select `TCG Remake`, close the launcher, and launch the game directly from **`Darkest Hour.exe`**.

---

### Step 2 — Recommended DirectDraw Wrappers (If FPS Still Drops)
Only install **one** wrapper at a time into your **main Darkest Hour folder** (next to `Darkest Hour.exe`):

| Tool | Best For | Official Upstream Download |
| :--- | :--- | :--- |
| **`cnc-ddraw`** *(Most Popular)* | Smooth 60 FPS map scrolling & windowed borderless | [github.com/FunkyFr3sh/cnc-ddraw/releases](https://github.com/FunkyFr3sh/cnc-ddraw/releases) |
| **`dgVoodoo 2`** | Translating legacy DirectDraw to DirectX 11/12 | [github.com/dege-diosg/dgVoodoo2/releases](https://github.com/dege-diosg/dgVoodoo2/releases) |
| **`dxwrapper`** | Converting DirectDraw/D3D7 calls to DirectX 9 (`Dd7to9 = 1`) | [github.com/elishacloud/dxwrapper/releases](https://github.com/elishacloud/dxwrapper/releases) |

#### Using `cnc-ddraw` (Mouse Alignment Tip)
1. Extract `ddraw.dll` and `ddraw.ini` next to `Darkest Hour.exe`.
2. **Important Mouse Offset Fix**: If your mouse cursor clicks slightly off-target, keep **`cnc-ddraw` in windowed mode** inside `ddraw.ini`, while setting `display mode = 0` (Fullscreen) inside Darkest Hour's `settings.cfg`. This lets the wrapper manage the window cleanly so mouse coordinates match 1:1.

#### Using `dgVoodoo 2`
1. Copy `dgVoodooCpl.exe`, `dgVoodoo.conf`, and `MS\x86\DDraw.dll` next to `Darkest Hour.exe`.
2. Run `dgVoodooCpl.exe` to configure scaling/VRAM and click **Apply**.

---

### Step 3 — Late-Game Memory & CPU Tips (1900–2000+ Campaigns)
* **4GB / Large Address Aware (LAA)**: TGC Remake runs an entire century with **14,591+ events**. If your `Darkest Hour.exe` is an older non-Steam 32-bit binary limited to 2 GB RAM, applying NTCore's official **4GB Patch** ([ntcore.com/?page_id=371](https://ntcore.com/?page_id=371)) prevents late-game out-of-memory crashes. *(Always keep a backup of `Darkest Hour.exe` first).*
* **Dedicated GPU & Single-Core Affinity**: Force `Darkest Hour.exe` onto your dedicated GPU (NVIDIA/AMD Control Panel), and if time progression stutters on high-core CPUs, test limiting affinity in Task Manager $\rightarrow$ Details $\rightarrow$ Set affinity to 1–2 cores (`CPU 0`).

---
---

## 🇪🇸 Español — Guía de Rendimiento en Windows 10 y 11

### ⚠️ Recomendación del Creador y Aviso Legal (Proyectos de Terceros)
> **Recomendado por el creador de TGC Remake (Arturo Hernández Garza)** para lograr mayor fluidez, desplazamiento suave por el mapa y estabilidad en partidas largas (1900–2000+) en Windows 10 y Windows 11.
>
> **AVISO IMPORTANTE:** Ninguno de los wrappers ni parches externos mencionados aquí (`cnc-ddraw`, `dgVoodoo 2`, `dxwrapper`, `4GB Patch`) me pertenece ni ha sido creado o modificado por mí. Son **proyectos independientes de terceros** alojados en los repositorios oficiales de sus autores. Descárgalos bajo tu propia responsabilidad e instálalos únicamente en la **carpeta raíz de Darkest Hour** (junto a `Darkest Hour.exe`), **nunca** dentro de `Mods\TCG Remake\`.

---

### Paso 1 — Ajustes Nativos (Sin Instalar Programas Externos)
Prueba primero estos ajustes dentro de la **carpeta principal de Darkest Hour**:

1. **Modo Ventana**: Abre `settings.cfg` y cambia `display mode` a **`1`** (usa una resolución igual o un poco menor a tu monitor).
2. **Propiedades de `Darkest Hour.exe`** (clic derecho $\rightarrow$ **Propiedades $\rightarrow$ Compatibilidad**):
   * Marca **Modo de color reducido** $\rightarrow$ **Color de 16 bits**.
   * Marca **Deshabilitar optimizaciones de pantalla completa**.
   * *(Opcional)* Prueba modo compatibilidad con **Windows 7** o **Windows XP (SP3)**.
3. **Activar DirectPlay**: En el buscador de Windows abre **Activar o desactivar las características de Windows** $\rightarrow$ **Componentes heredados** $\rightarrow$ marca **DirectPlay** y reinicia si es necesario.
4. **Saltarse el Launcher**: Selecciona `TCG Remake` una vez en el Launcher, ciérralo, y abre el juego ejecutando directamente **`Darkest Hour.exe`**.

---

### Paso 2 — Wrappers DirectDraw Oficiales (Si los FPS siguen bajos al quitar la pausa)
Instala **solo uno a la vez** en la **carpeta raíz de Darkest Hour** (donde está `Darkest Hour.exe`):

* **`cnc-ddraw` (el más usado en Darkest Hour)**: descarga oficial en [github.com/FunkyFr3sh/cnc-ddraw/releases](https://github.com/FunkyFr3sh/cnc-ddraw/releases). Copia `ddraw.dll` y `ddraw.ini` junto a `Darkest Hour.exe`.
  * *Solución al desfase del ratón*: si el clic no coincide con los botones, deja `cnc-ddraw` en modo ventana dentro de `ddraw.ini` y pon `display mode = 0` en el `settings.cfg` del juego.
* **`dgVoodoo 2` (alternativa DirectX 11/12)**: descarga oficial en [github.com/dege-diosg/dgVoodoo2/releases](https://github.com/dege-diosg/dgVoodoo2/releases). Copia `dgVoodooCpl.exe`, `dgVoodoo.conf` y `MS\x86\DDraw.dll` junto a `Darkest Hour.exe`.
* **`dxwrapper` (conversión a DirectX 9)**: descarga oficial en [github.com/elishacloud/dxwrapper/releases](https://github.com/elishacloud/dxwrapper/releases) (activando `Dd7to9 = 1`).

---

### Paso 3 — Memoria 4GB (LAA) y CPU para Campañas de 100 Años
* **4GB Patch (Large Address Aware)**: En versiones antiguas de 32 bits no actualizadas, permite usar hasta 4 GB de RAM para evitar cierres en partidas largas 1950–2000+. Herramienta oficial del autor original: [ntcore.com/?page_id=371](https://ntcore.com/?page_id=371) *(haz copia de seguridad de `Darkest Hour.exe` antes de aplicarlo)*.
* **GPU y afinidad de CPU**: Fuerza `Darkest Hour.exe` a usar tu GPU dedicada y, si notas tirones al avanzar los días, prueba limitar la afinidad en el Administrador de Tareas $\rightarrow$ Detalles $\rightarrow$ **Establecer afinidad** (`CPU 0`).
