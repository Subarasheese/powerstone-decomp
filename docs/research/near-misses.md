# Open near-misses

Drafts that compile but are not byte-identical yet, in [partial/](../../partial/) as `p_<start>.c` (each keeps its
`@unit` header; move it to `src/` once `build.sh` still prints `MATCH` with it). "Aligned" is the longest common
subsequence of instructions with pool and branch displacements masked, so one extra instruction costs one point.

| Draft | Aligned | What still differs |
|---|---|---|
| `p_0c064a1c.c` | 162/176 before the fix below | Fixed: `b3` must be plain `char` (the original feeds the byte straight into `mulu.w`, no `extu.b`); everything before the final address expression now matches. Left: the original keeps the pointer in r4 with a copy in r2 and a 4-byte frame; every form tried (char pointer, struct form, separate base and signed-byte locals, int arithmetic) spills more temporaries or keeps it in r13. |
| `p_0c0dbe30.c` | 161/178 | The original loads `mov.b @r13` later and computes `1 - (signed char)x` with a different multiply order. |
| `p_0c051ce4.c` | 135/164 | Two stack slots swapped (`@(4,r15)` and `@(8,r15)`) and an r5/r6 swap. All 36 declaration orders of the two local groups tried: none better, so the cause is use order. |
| `p_0c0a16bc.c` | 251/286 | The original hoists the constants 5 and 0 into callee-saved registers where shc hoists 1 into r10. |
| `p_0c0d2a8c.c` | 377/422 | First call's fr6/fr7 order and the point where the pool is dumped mid-function; needs `-macsave=1` and `sprintf(char *, char *, ...)`. |
| `p_0c0497fc.c` | 76/100 | Not analysed yet (96/100 with registers ignored: mostly register choice). |
| `p_0c0c10f0.c` | 236/312 | First function matches; the second differs in stack temporaries. |
| `p_0c08352c.c`, `p_0c0a02d4.c`, `p_0c0a4030.c`, `p_0c04fc9e.c` | lower | Register allocation and parameter spills (`p_0c0a4030`: the original keeps a value in r14 and also stores the parameter to the stack). |
| `p_0c03a024.c`, `p_0c05986c.c`, `p_0c06f4f0.c`, `p_0c08bf90.c`, `p_0c09d89c.c` | n/a | Do not build as committed (a compile error, or the code overflows the range by a few bytes). `p_0c06f4f0`: 8 of 9 functions matched in an earlier attempt, only `FUN_0c06f6ca` differed. `p_0c09d89c` overlaps two matched units, `m_0c09d990` and `m_0c09d9bc`, which would have to be removed first. |
| `p_0c0101f0.c` | 35/38 | Parked: see [vmu_lcd_refresh.md](vmu_lcd_refresh.md). |

A quick way to see the real differences: build with the draft in `src/`, disassemble both images with
`tools/shdis.py` over the range, and diff the two listings with the `@(...,pc)` displacements and branch targets
masked.
