# AICADRV.BIN

The AICA sound CPU program (`AM2/AICAsoundDrv981228/Ver1.35`, with
`Sequencer 1.21 98/12/07 Y.Takeda`).  It is ARM7TDMI code loaded into AICA sound
RAM, based at `0x00000000`; the reset vector at 0x0 branches to 0x510.

## Calling convention

The driver does not use `bl`.  A call is three instructions:

```
stmdb sp!,{pc}   push the return address
mov   r0,r0      padding
b     target     the pushed return lands after this branch
```

and a return is `ldm sp!,{pc}`.  316 call sites and 198 returns were found (plus
8 ordinary `bl`).  `normalize.py` rewrites the three-instruction call into a
plain `bl` at the branch slot (so the return address is unchanged), rewrites
`ldm sp!,{pc}` to `bx lr`, and leaves every address in place.  That lets an
unmodified decompiler see the functions.

## Decompilation

Ghidra 12.1.4, language `ARM:LE:32:v4t`, base 0, on the normalized image:
104 functions recovered.  `AICADRV.norm.c` is the exported pseudo-C and
`functions.txt` is the function map.  Names are `FUN_<address>`; the C uses the
driver's register-passing conventions only loosely and is a starting point, not
a match.  The unpaired `stmdb sp!,{pc}` sites (0x1cd4, 0x1d2c, 0x1d80, 0x1de4,
0x1e30) are dispatcher/long-jump sites and were left alone.

```
python3 normalize.py ../../<extracted-dir>/AICADRV.BIN AICADRV.norm.bin
# analyzeHeadless <proj> AICA -import AICADRV.norm.bin \
#   -processor ARM:LE:32:v4t -postScript ExportC.java AICADRV.norm.c
```
