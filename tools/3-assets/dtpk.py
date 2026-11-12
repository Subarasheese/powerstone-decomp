#!/usr/bin/env python3
"""Parse Sega AM2 DTPK sound banks (the 'overlay' .BIN files).

    python3 tools/3-assets/dtpk.py manifest <extracted-dir>   # table of every bank
    python3 tools/3-assets/dtpk.py wav <extracted-dir> <out-dir>

Format (https://github.com/Shenmue-Mods/DTPKUtil, AM2-DTPK.txt), little endian:
  0x00 'DTPK'   0x08 file size   0x3C offset of sample table
  sample table: u32 last index, then 16-byte entries:
    u32 location: bits 0-22 data offset, 23 half quality, 24 ADPCM, 25 unknown
    u16 loop start, u16 loop end, u32 rate flag (0x80 = half rate), u32 byte length

Samples are either signed 8-bit PCM or 4-bit AICA ADPCM (low nibble first), mono.
The AICA ADPCM step is the YM2610-style decoder used by MAME's aica.cpp.
"""
import glob
import os
import struct
import sys
import wave

QUANT_MUL = (1, 3, 5, 7, 9, 11, 13, 15, -1, -3, -5, -7, -9, -11, -13, -15)
TABLE_QUANT = (230, 230, 230, 230, 307, 409, 512, 614)
ADPCM_SHIFT = 8


class Sample:
    __slots__ = ('index', 'offset', 'length', 'adpcm', 'half', 'rate',
                 'loop_start', 'loop_end', 'data')

    def __init__(self, index, entry, d):
        loc, self.loop_start, self.loop_end, rate_flag, self.length = entry
        self.index = index
        self.offset = loc & 0x007FFFFF
        self.half = bool((loc >> 23) & 1) or bool(rate_flag & 0x80)
        self.adpcm = bool((loc >> 24) & 1)
        self.rate = 22050 if self.half else 44100
        self.data = d[self.offset:self.offset + self.length]

    def pcm16(self):
        if self.adpcm:
            return self._adpcm()
        return [b - 256 if b & 0x80 else b for b in self.data]

    def _adpcm(self):
        out = []
        prev_signal = 0
        prev_quant = 0x7f
        for byte in self.data:
            for nibble in (byte & 0xF, byte >> 4):
                x = (prev_quant * QUANT_MUL[nibble & 7]) // 8
                if x > 0x7FFF:
                    x = 0x7FFF
                if nibble & 8:
                    x = -x
                x += prev_signal
                prev_signal = max(-0x8000, min(0x7FFF, x))
                prev_quant = (prev_quant * TABLE_QUANT[nibble & 7]) >> ADPCM_SHIFT
                prev_quant = max(0x7f, min(0x6000, prev_quant))
                out.append(prev_signal)
        return out


def parse(path):
    d = open(path, 'rb').read()
    if d[:4] != b'DTPK':
        raise ValueError('%s: not a DTPK bank' % path)
    table = struct.unpack_from('<I', d, 0x3C)[0]
    count = struct.unpack_from('<I', d, table)[0] + 1
    samples = []
    for i in range(count):
        entry = struct.unpack_from('<IHHII', d, table + 4 + i * 16)
        samples.append(Sample(i, entry, d))
    return samples


def manifest(root):
    total = 0
    print('%-18s %6s %6s %6s %10s' % ('bank', 'samples', 'pcm', 'adpcm', 'bytes'))
    for path in sorted(glob.glob(os.path.join(root, '*.BIN'))):
        d = open(path, 'rb').read(4)
        if d != b'DTPK':
            continue
        samples = parse(path)
        pcm = sum(1 for s in samples if not s.adpcm)
        adpcm = len(samples) - pcm
        size = sum(s.length for s in samples)
        total += len(samples)
        print('%-18s %6d %6d %6d %10d' % (os.path.basename(path), len(samples), pcm, adpcm, size))
    print('%-18s %6d' % ('TOTAL', total))


def extract(root, outdir):
    made = 0
    for path in sorted(glob.glob(os.path.join(root, '*.BIN'))):
        if open(path, 'rb').read(4) != b'DTPK':
            continue
        bank = os.path.splitext(os.path.basename(path))[0]
        dest = os.path.join(outdir, bank)
        os.makedirs(dest, exist_ok=True)
        for s in parse(path):
            samples = s.pcm16()
            with wave.open(os.path.join(dest, '%03d.wav' % s.index), 'wb') as w:
                w.setnchannels(1)
                w.setsampwidth(2)
                w.setframerate(s.rate)
                w.writeframes(struct.pack('<%dh' % len(samples), *samples))
            made += 1
    print('wrote %d wav files under %s' % (made, outdir))


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    cmd, root = sys.argv[1], sys.argv[2]
    if cmd == 'manifest':
        manifest(root)
    elif cmd == 'wav':
        extract(root, sys.argv[3])
    else:
        print(__doc__)
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
