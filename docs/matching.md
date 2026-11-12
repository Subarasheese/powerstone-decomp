# Byte-matching notes for POWER STONE

What has been measured while matching this game's code with Hitachi SHC, so the next session does not
repeat the experiments. Everything here was verified against the original `1ST_READ.BIN`
(a unit counts only when `bash build.sh` still prints `MATCH`), unless it is marked as a hypothesis.

## Two tiers

| Tier | Where | Proof | Counted as |
|---|---|---|---|
| **Matching** (byte-identical) | `src/m_<start>[_<name>].c`, first line `/* @unit <start>-<end> [options] */` | built into the executable by `build.sh`; the whole image must stay byte-identical | done, and part of the build |
| **Equivalent** (fuzzy: same behaviour) | `src/gen_*.c` (written by `tools/5-generated/gen_equiv`) | `tools/equiv.py` runs the original bytes and the compiled C side by side on the cases in `tests/` | done, not built |

Unit files are named by their start address, plus the source-file name from `docs/sourcetree.csv` where one is
known (`m_0c0f2fec_vmsapi.c`, `m_0c105c04_adx_rnas.c`).

## Toolchain

- Compiler: SHC 5.0 Release 32 (the `shc-v5.0r32` package of the decomp.me compiler archive), run by `build.sh`
  under `wibo` in the `dc-tools` Docker image. Base flags (in `build.sh`):
  `-cpu=sh4 -endian=little -fpu=single -division=cpu -round=nearest -pic=0 -macsave=0 -optimize=1 -size -string=const`.
- Per-unit options go after the range in the `@unit` header.

## Options that decide a match

| Option | When | Evidence |
|---|---|---|
| **`-extra=a=400`** | The original has a `nop` (0009) after every `mov Rm,r0` outside a delay slot. True for most of the game's own code (about 3,155 pairs in 458 source files) and some library code. | Verified: without it `mov R14,R0` is followed by the next instruction; with it by `NOP`. Six source files with 13 such pairs match only with it. It is a hidden SH-4 errata workaround (documented by shckit). |
| `-cpu=sh3` | Library code (CRI ADX/Sofdec, SJ) whose loads are scheduled in source order | The ADX/SJ units match only with it. |
| `-macsave=1` | The original saves `macl` around `muls.w`/`mulu.w` | Several game units. |
| `-optimize=0` | Trivial wrappers with a non-tail `jsr` | Some stubs. |
| `-align16` | Library code padded with nops to 16 bytes | |

Measured to make **no difference** on the code tried: `-size` vs `-speed` vs neither; SHC 5.0 R26, R32 and
5.1 R04 (identical output on the same source); `-extra=a=800`, `a=c00`, `a=1400`, `a=1800`, `a=1c00` (only pool
alignment moves). R04 with `-speed -extra=a=1800` gave 0 new matches on 22 near-miss ranges; 87 of the 111
units matched under R32 `-size` also match under R04 `-speed`.

## Layout details handled by `tools/1-2-baseline/fill.py`

- The 2-byte pad before a long-word literal pool or a switch jump table is `0x0000` in the original, not the
  linker's `0xEE` fill.
- A gap of 2 bytes or less at the end of a unit is `0x0000`.
- A unit that starts at an address that is 2 mod 4 gets the wrong pool padding: start it at the true file start.

## Source idioms that decided matches

- One unit per original source file: functions share a literal pool and call each other with `bsr`/`bra`,
  which only compile inside one unit. `docs/sourcetree.csv` has the file boundaries (some are guesses).
- `register` locals take r14, r13, ... in declaration order; hoisted constants get r8-r14 by use count.
- `if ((p = f()))` tests r0 directly; `int r = f();` with `r` unused avoids a tail `jmp`; `float r = f(x); return r;` too.
- Compound assignment (`v->a.x += v->b.x`) and plain assignment compile differently.
- A `volatile` struct field forces repeated loads; a volatile pointer cast does not.
- `extern S g[];` keeps shc from folding `+offset` into the pool address.
- `a = b = c = 1.0f` uses `fldi1 fr3` and its own store order; separate statements use fr4.
- Struct locals: the later declaration gets the lower stack address. Unused `int x[1];` gives a bare `add #-4,r15`.
- `case 0: case 2:` grouped first reproduces some `braf` tables; write explicit cases for gaps.
- `if (c) f(A); else f(B);` and `f(c ? A : B)` allocate differently; try both.
- A callee returning `char` needs a `char` prototype to get `exts.b`; `(short)(i * 52)` gives `muls.w` + `exts.w`.
- A byte the original feeds straight into `mulu.w` (no `extu.b`) is a plain `char` field, not `unsigned char`.
- `a * b + c` in one expression gives `fmac`.
- `#pragma inline` on a `static` helper stops address sharing across calls at `-optimize=1` (at the cost of a
  frame and dead stores): see [research/FUN_0c0101f0.md](research/FUN_0c0101f0.md).
- Compiler runtime helpers are linked by address and need a `symbols.txt` line and the name in the C (a comment
  is enough): `_quick_evn_mvn` 0c0e6fdc, `_quick_odd_mvn` 0c0e6fe8, `_quick_mvn`/`_slow_mvn` 0c0e7140 (name not
  confirmed), `_divls` 0c0e6d00, `_modls` 0c0e6e5c, `_modlu` 0c0e6f24, `_slow_strcpy` 0c0eb708.

## What still blocks most files

- Register allocation and stack-slot order in larger functions (the usual remaining difference in near-misses).
- Functions whose pool or `bra`/`bsr` targets cross the boundaries in `docs/sourcetree.csv` (the map is wrong
  there; about 612 functions are still missing from `functions.txt`, see `docs/missed_functions.txt`).
- Float-heavy code and spilled parameters combined with a tail `jmp`.

Open near-misses with their remaining differences: [research/near-misses.md](research/near-misses.md).
