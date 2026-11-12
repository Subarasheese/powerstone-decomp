#!/usr/bin/env python3
"""Rewrite AICADRV.BIN's far-call idiom into ordinary ARM bl/bx so a normal
decompiler can recover functions.

The AM2 AICA driver does not use bl.  A call is

    stmdb sp!,{pc}     e92d8000   push the return address (pc+12 on ARM7TDMI)
    mov  r0,r0         e1a00000   padding
    b    target        eaxxxxxx   tail branch; the return lands after this

and a return is `ldm sp!,{pc}` (e8bd8000).  We keep every address identical:

    nop                e1a00000
    nop                e1a00000
    bl   target        ebxxxxxx   return address is still the next instruction
    ...
    ldm sp!,{pc}  ->   bx lr      e12fff1e

Usage: python3 normalize.py AICADRV.BIN AICADRV.norm.bin
"""
import struct
import sys

CALL = 0xE92D8000
PAD = 0xE1A00000
RET = 0xE8BD8000
BX_LR = 0xE12FFF1E


def main():
    src, dst = sys.argv[1], sys.argv[2]
    d = bytearray(open(src, 'rb').read())
    get = lambda o: struct.unpack_from('<I', d, o)[0]
    calls = 0
    for i in range(0, len(d) - 8, 4):
        if get(i) != CALL:
            continue
        if get(i + 4) != PAD or get(i + 8) >> 24 != 0xEA:
            continue
        struct.pack_into('<I', d, i, PAD)
        struct.pack_into('<I', d, i + 4, PAD)
        struct.pack_into('<I', d, i + 8, (get(i + 8) & 0x00FFFFFF) | 0xEB000000)
        calls += 1
    returns = 0
    for i in range(0, len(d) - 4, 4):
        if get(i) == RET:
            struct.pack_into('<I', d, i, BX_LR)
            returns += 1
    open(dst, 'wb').write(d)
    print('normalized %d calls, %d returns -> %s' % (calls, returns, dst))


if __name__ == '__main__':
    main()
