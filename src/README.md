# src/: the C, by subsystem

No path of Capcom's sources survives in the executable (no assert strings, no debug file names), so this tree cannot be their
folder layout. It follows the next best evidence, the **original link order**: the linker placed each source file's code where the
makefile listed it, and that order runs subsystem by subsystem (save, endings, menus, hit boxes, demo, HUD, effects, AI, game flow,
items, resources, the shared fighter code, then each character in roster order, stages, debug tools, camera; then the NAOMI
library, the Katana SDK, CRI middleware and the C runtime). `tools/srctree.py` holds the rules and files every C file;
`docs/sourcetree.csv` (the original's 911 source files and their layers) decides which code is library code.

A file is known by its **stem** (name without folder), unique across the tree: its cases are `tests/<stem>/`, and the tools find it
with `tools/srcfiles.py`. A tool that writes a new file puts it at the top of `src/`; `python3 tools/srctree.py --apply` files it.

| folder | what |
|---|---|
| `game/system` | pad input, file-system directory, system init, small runtime helpers |
| `game/save` | VMU save data (pack, image, load/save state machines) |
| `game/flow` | game mode machine, round flow, difficulty, screen modes |
| `game/demo` | attract demo, logos, boot screens, ranking, endings, staff roll |
| `game/menu`, `menu/select`, `menu/option` | menus: VMU menu, test mode, results; character/stage select; options and key config |
| `game/ui` | HUD, hit counter, win marks, sprite queue, fades |
| `game/draw`, `game/math` | frame drawing, lighting, model utilities, view setup; vector math |
| `game/resource` | resource loader (common, per player) |
| `game/object` | object pool, scene objects, actor objects and their motion sounds |
| `game/effect`, `effect/impact`, `effect/player`, `effect/special` | effect objects: general, impacts, player effects, per-character special-move effects |
| `game/ai` | CPU fighter AI (script interpreter and its ops) |
| `game/item` | items and weapons |
| `game/hit` | hit boxes, hit records, hit reactions, damage |
| `game/player`, `player/state` | shared fighter code: setup, motion, physics, utilities; the state machine (enter, update, control) |
| `game/player/chara/<name>` | one folder per character, in roster order: falcon, ryoma, wangtang, jack, gunrock, garuda, ayame, rouge, kraken, valgas |
| `game/stage`, `stage/gimmick` | stage objects and layout; stage gimmicks |
| `game/camera`, `game/sound`, `game/debug` | camera modes; sound and BGM; debug text, motion/attack editors, key debug |
| `lib/naomi` | NAOMI-style library: layers, object put, textures, screen math, the `nl_objasm_*` renderer |
| `lib/katana` | Katana SDK: crt0, GD-ROM file system, VMU (bu/vmsfs), Kamui, RTC, peripherals |
| `lib/cri` | CRI ADX / Sofdec middleware |
| `lib/libc` | C runtime: mem/str functions, printf core, compiler math helpers |
| `lib/mixed` | generated library C whose functions come from several libraries (written by the generator in batches, not by source file) |

Headers: `game/game.h` holds the types the modules share (Vec3, Fighter); a module converted to the header form has its
own header (`game/camera/camera.h`, `game/ui/ui.h`: types, data and every function of the module declared once) and one C file per original
source file. Include them from `src` (`#include "game/camera/camera.h"`; the build passes `-include=src`).

File names: `m_<start>[_<what>].c` are byte-matching units (built); `gen_*.c` generated Equivalent C; `fy_`, `fx_`, `hx_`, `hand_`
hand-written Equivalent C; `_alt` / `_equiv` files hold a module's Equivalent-only functions apart from its matching unit.
