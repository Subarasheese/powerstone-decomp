# Overlays

## There are no SH-4 code overlays on this disc

The Dreamcast main CPU (SH-4) executable is `1ST_READ.BIN` alone.  Every other
file was checked for compiled SH-4 functions using the prologue/epilogue pair
that the compiler emits for every function:

```
mov.l r14,@-r15 / sts.l pr,@-r15    e6 2f 22 4f
lds.l @r15+,pr / rts / nop          26 4f 0b 00 09 00
```

`overlays/inventory.md` lists all 303 files.  `1ST_READ.BIN` has 761 prologues
and 463 epilogues; the nearest other file has **zero** of either.  Nothing else
contains SH-4 code, so there is nothing else to split into a C unit or link at
another address.  The files that look like overlays are content:

| type | files | what they are |
|---|---:|---|
| SH-4 code | 1 | `1ST_READ.BIN`, 3,414,344 bytes, 3,321 functions |
| ARM code | 1 | `AICADRV.BIN`, the AICA sound CPU driver |
| DTPK sound bank | 48 | AM2 SoundFactory 2 banks, 1,047 samples |
| CRI ADX audio | 44 | streamed music/voice |
| model / animation | 164 | `.MDL`, `.MDT`, `_MODEL.BIN` |
| other data | 33 | tables, fonts, `PL*_DATA.BIN`, `ST00_DATA.BIN` |
| hit data | 11 | `_HIT.BIN` |
| PVR texture | 1 | `GBIX` image |

`AICADRV.BIN` starts with an ARM branch vector table and contains the strings
`AM2/AICAsoundDrv981228/Ver1.35`, `Sequencer 1.21 98/12/07 Y.Takeda` and `DTPK`.
It is the one additional *executable* on the disc, so it is decompiled under
`overlays/aicadrv/`.

## DTPK sound banks

All 48 `.BIN` banks parse cleanly with the AM2 DTPK format (sample table at
0x3C, 16-byte sample entries).  The sample data of each bank ends exactly at the
file size.  Totals: 1,047 samples, 937 4-bit AICA ADPCM and 110 signed 8-bit
PCM, 15,550,630 bytes of sample data.  `tools/3-assets/dtpk.py` validates and
decodes them (ADPCM step is MAME's `aica.cpp`); `overlays/dtpk/manifest.txt` is
the per-bank table.

```
python3 tools/3-assets/dtpk.py manifest <extracted-dir>
python3 tools/3-assets/dtpk.py wav <extracted-dir> <out-dir>
```

## Reproduce

```
python3 tools/3-assets/overlay_scan.py <extracted-dir> --md > overlays/inventory.md
python3 overlays/aicadrv/normalize.py <extracted-dir>/AICADRV.BIN AICADRV.norm.bin
```
