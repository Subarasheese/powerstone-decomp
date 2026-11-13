# Power Stone decomp

![decomp progress](badges/progress.svg?p=98.0&b=96.9&m=1.4&a=61&s=0)
[![ByteMatch progress](https://bytematch.dev/Subarasheese/pwrstn-decomp.svg?label=Byte-matched&measure=matched_code_percent)](https://bytematch.dev/Subarasheese/pwrstn-decomp)

A decompilation of the Dreamcast game **Power Stone**, in progress. It rebuilds the game's executable byte for byte.
A function is **done** when its C behaves like the original (Equivalent);
byte-identical C (Matching) is the bonus tier.

_**This is not a traditional, human-idiomatic decompilation.** It is structured and documented for AI consumption,
and its tooling is built for the automation and scale of that paradigm.
If needed, a human-idiomatic rewrite can start from it, as a fork or a new project.
This project constitutes a solid stepping stone for such a target: it contains equivalent C, byte-matching C units,
the asset maps, the source-file map of the executable, the build pipeline and the notes in
[docs/matching.md](docs/matching.md)._

**This repository contains no game code or data.** You supply your own disc; `setup.sh` generates
everything game-derived on your machine, and `.gitignore` keeps it out of git.

The disc's only other executable, the ARM AICA sound driver, and the proof that there are
no SH-4 code overlays are under [overlays/](overlays/README.md).

## Progress

<!-- progress -->
```
TOTAL TEST COVERAGE            60.9%  the instructions the cases ran, of all instructions, over the 5483 functions that can be C; the 5133 functions that reached the check are measured, the others count 0
FUNCTIONS LEFT  (98.0% complete) 108  of the 5483 functions that can be C (44 with no C form are counted apart)
BYTES LEFT    (96.9% complete) 30114  of 981552 bytes of code that can be C
FUNCTIONS                             
  unnamed                       2352  functions still called FUN_... (2352 of 5527)
  Not written C                   42  12672 bytes
  Written C with errors            0  0 bytes
  Not drawn                        8  1298 bytes
  Drawn with errors               23  5668 bytes
  Checked with errors             35  10476 bytes
  No C form                     0.8%  an instruction or a register convention with no C form (tools/5-generated/classify.py names it)
  documented                   53.5%  2959 named functions in docs/*.md
```
<!-- /progress -->

Updated on every commit by `tools/hooks/pre-commit` (enable once per clone:
`git config core.hooksPath tools/hooks`).

### Status in short

| | |
|---|---|
| Functions mapped | 5,009 in `functions.txt` (3,321 from the first analysis, 1,647 added by reachability checks with `tools/boundaries.py`); about 612 more candidates are listed in [docs/missed_functions.txt](docs/missed_functions.txt) |
| Source files mapped | 911 rows in [docs/sourcetree.csv](docs/sourcetree.csv): game 612, Katana SDK 128, NAOMI-style libraries 69, C runtime 69, CRI ADX/Sofdec 30, data 3 |
| **Byte-matching C** | **111 units, 286 functions** (`src/m_*.c`), built into the executable; the build stays byte-identical |
| Equivalent C (fuzzy) | 4,550 functions proven behaviour-equivalent by test cases in `tests/` (not built): the generator's `src/gen_*.c`, plus hand-written C (`src/hand_*.c`, `src/fx_*.c`, `src/fy_*.c`). **Game code: 3,462 of 3,543 functions** are Equivalent or byte-matched (97.7%; 95.7% counting only byte-matched and real C). 72 are hand-written inline assembly (`INLINE-ASM` in their first line) where no C form exists, e.g. register-convention renderer routines. The evidence is uneven: about 940 of these functions have cases reaching under 60% of the original's instructions. 81 game functions are not done (see [docs/research/near-misses.md](docs/research/near-misses.md) and `partial/`) |
| Drafts | 17 near-misses in [partial/](partial/), with what still differs in [docs/research/near-misses.md](docs/research/near-misses.md) |

Progress is also tracked on [ByteMatch](https://bytematch.dev/Subarasheese/pwrstn-decomp): the
`Progress report` workflow writes an objdiff-format report with
[tools/bytematch_report.py](tools/bytematch_report.py). It counts byte-matched functions as matched and lists the
Equivalent functions as functional C, rated by their test coverage. CI cannot rebuild the executable (no game code
is committed), so the report is computed from what the repository records; matching units are verified locally
by `build.sh`.

The key compiler finding so far: most of the game's own code needs the hidden SHC option `-extra=a=400`
(a `nop` after every `mov Rm,r0`). See [docs/matching.md](docs/matching.md).

## The steps

This decomp follows the steps of the dc-decomp-kickoff skill: six from the disc to proven C for every function, then three to build, run and stabilise the game from that C. `AGENTS.md` has the detail.

| # | Step                                    | Decomp completion                              | You provide                        | What it does                                                                                                                                                                                                                                                                                                               |
|---|-----------------------------------------|------------------------------------------------|------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1 | **Decomp project setup**                | -                                              | The disc as a `.gdi`, a Katana SDK | Installs the tools (Docker, Python 3) and checks your game disc and SDK.                                                                                                                                                                                                                                                   |
| 2 | **Signature-driven baseline**           | -                                              |                                    | Reads the disc, splits the executable into one assembly file per function, rebuilds it **byte for byte** with the SDK's own assembler and linker, and names every function it can match by signature.                                                                                                                      |
| 3 | **Asset mapping**                       | -                                              |                                    | Writes the text map (every string with its pointers, text per disc file), the model map, the texture list and the audio map.                                                                                                                                                                                               |
| 4 | **Opportunity-driven optional boosts**  | Varies greatly by project                      | The materials                      | Uses what you hand over to save work in every step after it, the earlier the better: a later port (Android is the strongest), a prototype or debug build, cheat codes, other regions, existing notes, the same game on another console, a sibling decomp. It never looks for these itself and never reads your other code. |
| 5 | **Incremental script-generated decomp** | up to 50%                                      | SDK library sources (optional)     | Proves C for what the tools can write on their own: the SDK's own library source where you have it, then generated C, then directed test cases that reach the branches the first ones missed. Generated C is reported apart from hand-written C.                                                                           |
| 6 | **Experience-driven agentic decomp**    | 100%                                           |                                    | Takes what is left one pocket at a time, function by function: C and test cases until each function is proven. The plan is in the repo's `AGENTS.md`.                                                                                                                                                                      |
| 7 | **Code size reduction**                 | -                                              |                                    | Shrinks the code compiled from the proven C to the size of the original game code. A smaller version of a function replaces the old one only if it is still equivalent to the original.                                                                                                                                    |
| 8 | **Build from C**                        | -                                              | The disc as a `.gdi`               | Builds the executable from the C and a disc image with it (`make disc GDI="your disc.gdi"`). Libraries, data and SDK stay as they are; pointers to game functions follow them.                                                                                                                                             |
| 9 | **Runtime repairs**                     | BOOTS TO MENU, PLAYABLE, STABLE (`status.txt`) | Flycast GDB                        | Runs the game using Flycast GDB, locates and tracks bugs and iterates builds until the game is stable.                                                                                                                                                                                                                     |

## Build

You need: your own copy of the disc as a `.gdi` with its track files, Python 3, Docker, and a Katana SDK (its Hitachi
assembler and linker do the build; any folder layout works).

```
make setup GDI="path/to/your disc.gdi"
echo 'SDK_PATH="/path/to/katana-sdk"' > .env      # once: where your SDK is (not committed)
make
make c                                            # the executable built from the C (build/cbuild/game.bin)
make disc GDI="path/to/your disc.gdi"             # the same, plus a disc image with it (build/disc-cbuild/)
```

`make` (which runs `build.sh`) should end with `MATCH`. The other targets are listed at the top of the `Makefile`.

The matching units were made with **SHC 5.0 Release 32**: point `SDK_PATH` at a folder that holds that `shc.exe`
with its `asmsh`, `lnk` and `elf2bin` (the `shc-v5.0r32` package of the decomp.me compiler archive works). Another
compiler release can produce different bytes for some units.

It builds its own small tools image the first time (Docker must be running). The first build assembles every file
(a few minutes); after that only changed files. (Running the scripts with `bash` means file permissions never matter;
`./build.sh` works too once `setup.sh` has run.) Docker is required; on Linux x86_64 without
Docker, `DC_LOCAL=1` runs the tools through `wibo` instead.

## Supported version

| | |
|---|---|
| Release | USA, T-1201N, V1.001, 1999-08-05, region U |
| `1ST_READ.BIN` | 3,414,344 bytes, SHA-1 `940160e1e871f4490fe6de2fe9e0eb19e31a79e7` |
| Linked at | `0x0C010000` |
| SDK era | Shinobi 1.42, syStart 1.07, ADXT 5.32 (CRI), builds Mar-May 1999 |

Other releases are different builds: `setup.sh` refuses them rather than produce a broken split.

## What is here

**Instructions for agents and people working on the decomp**

| path           | what                                                                                                                                               |
|----------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| [AGENTS.md](AGENTS.md)    | The steps this decomp follows, and the per-function loop: Equivalent first, Matching as the bonus. The tools to try at step 6 are listed there |
| [KICKOFF](KICKOFF)      | The version of dc-decomp-kickoff this repo follows                                                                                                 |

**Documentation**

| path                             | what                                                                                                                                                   |
|----------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| [README.md](README.md)                      | This file                                                                                                                                              |
| [docs/matching.md](docs/matching.md) | Byte-matching notes: compiler, options that decide a match (`-extra=a=400`, `-cpu=sh3`, `-macsave=1`), source idioms, what still blocks |
| [docs/sourcetree.md](docs/sourcetree.md), [docs/sourcetree.csv](docs/sourcetree.csv) | The executable split into its original source files (boundaries from literal pools and `bsr`/`bra` links), grouped by layer, with matching candidates in [docs/candidate_units.txt](docs/candidate_units.txt) |
| [docs/research/](docs/research/) | Open near-misses and parked investigations |
| [overlays/](overlays/README.md) | Proof that the disc has no SH-4 code overlays; the ARM AICA sound driver; the DTPK sound banks |
| [docs/equivalent.md](docs/equivalent.md)             | The evidence for each Equivalent function (written by [tools/equiv.py](tools/equiv.py))                                                                                |
| text-map/                      | (generated) The executable's strings, how much text each disc file holds, and every image file (`images.tsv`): counts and lists to read, not a verdict |

**The functions and their names**

| path                       | what                                                                                                                                    |
|----------------------------|-----------------------------------------------------------------------------------------------------------------------------------------|
| [functions.txt](functions.txt)            | Every function: address, size, name (`FUN_<addr>` = not named yet). The source of truth for boundaries; [asm/](asm/) is generated from it     |
| [symbols.txt](symbols.txt)              | Addresses the C units use that no file defines yet (RAM, data inside asm)                                                               |
| [sdk.txt](sdk.txt)                  | The bundled Sega SDK's code (for [tools/progress.py](tools/progress.py))                                                                                   |
| [models.txt](models.txt), [model-map/](model-map/) | What is known about the game's 3D models: tables whose layout is understood (read by [tools/3-assets/model_map.py](tools/3-assets/model_map.py)), and the map built from them |
| [BASE](BASE)                     | Link address                                                                                                                            |

**The C**

| path | what |
|---|---|
| [src/](src/) | C in a tree by subsystem (`game/<subsystem>/`, `lib/<library>/`, see [src/README.md](src/README.md)): Equivalent files `gen_*.c` (checked by [tools/equiv.py](tools/equiv.py), not built; written by [tools/5-generated/gen_equiv](tools/5-generated/gen_equiv)) and matching C units `m_<start>[_<name>].c` (built, see below) |
| [partial/](partial/) | Matching drafts that do not match yet, `p_<start>.c`: not built, counted apart from done |
| [sdk-verified.txt](sdk-verified.txt) | Library functions whose bytes the SDK source you supplied reproduces (written by [tools/5-generated/sdk_source.py](tools/5-generated/sdk_source.py)) |

**The proof**

| path | what |
|---|---|
| [tests/<file>/<function>.json](tests/) | The test cases of each function |
| [tests/equivalent.txt](tests/equivalent.txt) | The functions found Equivalent |
| [badges/](badges) | The progress badge, written by [tools/progress.py](tools/progress.py): `progress.svg`. It also lists the statuses in [status.txt](status.txt) (BUILDS FROM C, BOOTS TO MENU, PLAYABLE, STABLE), ticked, crossed, or a question mark where not tested yet (`[?]`); each needs the ones above it |

**Scripts and tools**

| path | what |
|---|---|
| [setup.sh](setup.sh) | Extract and verify your executable, generate [asm/](asm/), [text-map/](text-map/) and [model-map/](model-map/) |
| [Makefile](Makefile) | The build commands: `make setup`, `make`, `make c`, `make disc`, `make progress` |
| [build.sh](build.sh) | Assemble, link, convert, compare with your original |
| [disc.sh](disc.sh) | Build a playable disc image of your version (files you put under `disc/`) |
| [textures.sh](textures.sh) | Optional: every standard texture on one page, to look through |
| [tools/](tools/README.md) | The tools several steps use: the Equivalent check (`equiv.py`), the SH-4 disassembler and simulator, progress and status reports, renaming |
| [tools/1-2-baseline/](tools/1-2-baseline/README.md) | Steps 1-2: splitting the executable, the C-unit layout, SDK naming |
| [tools/3-assets/](tools/3-assets/README.md) | Step 3: text map, model map, textures |
| [tools/4-boosts/](tools/4-boosts/README.md) | Step 4: names and C from a sibling decomp, checks against the running game |
| [tools/5-generated/](tools/5-generated/README.md) | Step 5: the generator (`gen_equiv/`), SDK source, what is left and why |
| [tools/6-agentic/](tools/6-agentic/README.md) | Step 6: cases written by hand, literal pools, code addresses |
| [tools/7-reduction/](tools/7-reduction/README.md) | Step 7: smaller C, still proven |
| [tools/8-build/](tools/8-build/README.md) | Step 8: the build from C and the disc image |

**Local only (git-ignored)**

| path | what | written by |
|---|---|---|
| 1ST_READ.BIN, asm/, objects.txt | Your executable and the assembly generated from it | [setup.sh](setup.sh) (with `tools/gdi_read.py` and `tools/1-2-baseline/split_asm.py`) |
| sdk-source/ | The C of the library functions, from the SDK source you supplied | `tools/5-generated/sdk_source.py` |
| build/ | Build output, the generator's log ([build/gen_run.log](build/gen_run.log)) and its report of why functions failed ([build/gen_failed.txt](build/gen_failed.txt)) | `make` (build/obj/, build/out.bin), `make c` (build/cbuild/), `tools/5-generated/gen_equiv` (its log and report) |
| state/ | Working state: notes, failed cases, the remaining-functions report ([state/remaining.md](state/remaining.md)) and its cache | `tools/5-generated/gen_equiv` (failed cases), `tools/5-generated/remaining.py` (the report), `tools/ledger.py` (notes) |

## Model map

`setup.sh` also builds `model-map/game.dcgs` (with `tools/3-assets/model_map.py`): every model it recognises in the disc files, the
table in the executable that holds it, the texture lists, every sound it recognises (CRI ADX and AHX streams, and the sound
banks), and, where a skeleton is known, characters assembled from their parts. It is plain tab-separated text in sections (`[models]`, `[assemblies]`, `[rigs]`, `[bones]`, `[audio]`, `[textures]`) and it is
**committed**: it holds addresses, offsets, sizes and names only, no game bytes or text (the text map is the one
that stays local). Regenerate it with `python3 tools/3-assets/model_map.py 1ST_READ.BIN "$(cat BASE)" functions.txt "<your disc>.gdi" model-map`.

- **No setup needed to start.** With no rules the map still lists every model it recognises, grouped by the table that holds it.
- **`models.txt` is what is known about the game's models**, one rule per line: `chars` and `structs` (tables whose
  layout is understood), `rig` / `bone` / `assemble` (a skeleton posed from a motion record), `nodes` / `nodelayout` (linked node structs in
  the executable, each character placed in its bind pose), `textures` (pairs a
  model file with a texture file of another name; matching names are found by themselves), `note`, and the two a
  person adds by naming things: `name <file> <offset> <text>` (one model), `sound <file> <entry> <text>` (one sound), `image <file> <offset> <text>` (one picture) and `table <address> <group> <label>`
  (a whole table). The syntax is in the header of `tools/3-assets/model_map.py`.
- **Naming convention.** A row shows the name first and the id beside it, and only the id when there is no name.
  Names are tidied the same way everywhere: words separated by single spaces (underscores and camelCase become
  spaces), each word starting with a capital, no parentheses. Ids (hex offsets, table addresses, the game's own
  identifiers) are never changed.
- **Naming things.** Edit `models.txt` and rerun the tool, or use a model viewer that opens this folder and writes
  the `name` and `table` lines for you, into two sorted blocks at the end of the file, so a naming session is a small
  `git diff`. Commit the diff.

## Equivalent C and shared library code

How strong an Equivalent function is depends on its test cases, so `tools/equiv.py` reports how many of the original's instructions they
run. The original's code is kept as one assembly file per function, the baseline the build keeps checking. C written by `tools/5-generated/gen_equiv` is
script-generated: it is checked on generated cases, which are then widened (`gen_equiv --direct` and `--retest`, and cases by hand for the branches
nobody ran). There is no pass mark: a function that passes is done, and the total test coverage on the badge says how strong the evidence is. `AGENTS.md` lists the steps this decomp follows.

`src/<folder>/<file>.c` with no `@unit` header is C checked for behaviour only: `python3 tools/equiv.py src/<folder>/<file>.c`
runs each function in an SH-4 interpreter twice per test case, the original bytes and your compiled C,
and they must agree on calls, memory writes and the result. Passing functions are listed in
`tests/equivalent.txt` and counted as done. The loop, and how to write many of them quickly, is in
`AGENTS.md` and the kickoff skill's `references/equivalent-pipeline.md`.

## Matching C units (the build tier)

A file `src/<name>.c` whose first line is `/* @unit <start>-<end> [shc options] */` replaces every
asm file in that address range. `build.sh` compiles it with the SDK's `shc` to assembly, lays it
out exactly like the original (`tools/1-2-baseline/fill.py`: alignment as nops, reserved gaps as `0xEE`, padded
to `<end>`), assembles it and links it in place; the result still has to `MATCH`. A unit with
constant data (initialised local arrays, const tables, string literals) also names where the
original link put that data: `/* @unit <start>-<end> @data <dstart>-<dend> [shc options] */`. The
data becomes its own piece at that range, in source order; both ranges must start and end on asm
file boundaries (add them to `functions.txt`: `F <addr> 0 FUN_<addr>` for a function start,
`D <addr> 0 data_<addr>` for a data boundary, which is not counted as a function). A unit is one
original source file: all its functions share literal pools, so it goes in only when all of it
matches. `python3 tools/progress.py` reports the state,
each function in one bucket: done (equivalent C; matching C and SDK source part of it), named only (a name is
not done work), unnamed; plus documented functions and named globals. `docs/equivalent.md` holds
the evidence for each equivalent function.

## Names

Names come from signature matching against the Katana SDK's own libraries (only unique matches are applied);
small wrappers inherit the name of the function they call. About 500 more library names (Katana GD-ROM, VMS file
system, kernel and display libraries, and the NAOMI-style `nl*` library) were transferred from the function lists
of other public Dreamcast decomps by aligning runs of at least six consecutive functions with identical sizes;
only consistent, unique alignments were applied. They are strong guesses, not proofs.

## How this was started

This repo was autogenerated using
[dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff) v2.0. It follows the steps above; `AGENTS.md` says how.

## Acknowledgements

Tooling and knowledge this project builds on (no code or data from these is redistributed beyond the kickoff
tools under `tools/`):
[dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff) (the template and tools),
the [decomp.me compiler archive](https://github.com/decompme/compilers) (SHC releases),
[wibo](https://github.com/decompals/wibo),
[sonic-adventure](https://github.com/reshaped/sonic-adventure) and [shckit](https://github.com/reshaped/shckit)
(SHC toolchain notes and SDK source reconstructions),
[tgm2p-decomp](https://github.com/masonc15/tgm2p-decomp) (SHC register-allocation notes), and the function lists of
[crazy-taxi-decomp](https://github.com/consolesplayingconsoles/crazy-taxi-decomp),
[zombie-revenge-decomp](https://github.com/consolesplayingconsoles/zombie-revenge-decomp) and
[boku-doraemon-decomp](https://github.com/consolesplayingconsoles/boku-doraemon-decomp) (library names).

## Third-party sources

The build needs a Katana SDK. Repositories that hold such material (for example
`Kochise/dreamcast-docs`)
are named solely as examples of the type of material required. We have no affiliation with, and
make no representation regarding, those repositories, their contents, or their licensing. You are
solely responsible for determining whether you are entitled to obtain and use any such material.

POWER STONE and its publisher's trademarks belong to their owners. This project is not affiliated with
or endorsed by them.
