/* Starts an object's next phase: bumps byte 8, copies byte 3 from the linked object (pointer at +28), sets +6 = 15 and flag bytes at +1, 0x105, 0x107, calls FUN_0c05a8f8, copies two 12-byte vectors (0xC3362C8, 0xC3362EC) into the sub-object at +0x2E0, computes the pointer stored at +280 from the linked object and its signed byte at 0x71F1, and on first use hands byte 13 to the global block at 0xC7F2664. */
struct V { int x, y, z; };
extern int FUN_0c05a8f8(unsigned char *);

void FUN_0c05c3be(unsigned char *o)
{
    unsigned char *p = *(unsigned char **)(o + 28);
    unsigned char *g;

    o[8]++;
    o[3] = (*(unsigned char **)(o + 28))[3];
    *(short *)(o + 6) = 15;
    o[1] = 1;
    o[0x105] = 1;
    o[0x107] = 1;
    FUN_0c05a8f8(o);
    *(struct V *)(*(unsigned char **)(o + 0x2E0) + 4) = *(struct V *)0xC3362C8;
    *(struct V *)(*(unsigned char **)(o + 0x2E0) + 16) = *(struct V *)0xC3362EC;
    *(unsigned char **)(o + 280) = p + 768 + (short)((signed char)p[0x71F1] * 3520) + 1408;
    if (o[11] == 0) {
        g = (unsigned char *)0xC7F2664;
        g[789] = o[13];
        g[790] = 1;
        o[11] = 1;
    }
}
