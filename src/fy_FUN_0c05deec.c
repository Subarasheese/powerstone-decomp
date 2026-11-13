/* Starts an effect step: bumps the counter at +8, copies the type byte from the owner (+28), flags it, runs FUN_0c05a8f8, fills the sub-block at +0x2E0 (two 12-byte vectors from 0x0C336410/0x0C336434 at +4/+16, three floats at +28/+32/+36), sets the pointer at +0x118 into the owner's table, and on first use records +13 into the 0x0C7F2664 block. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c05a8f8(char *);

void FUN_0c05deec(char *o)
{
    char *p = *(char **)(o + 28);
    char *g;

    o[8] = o[8] + 1;
    o[3] = (*(char **)(o + 28))[3];
    o[1] = 1;
    o[0x105] = 1;
    o[0x107] = 1;
    FUN_0c05a8f8(o);
    *(S12 *)(*(char **)(o + 0x2E0) + 4) = *(S12 *)0x0C336410;
    *(S12 *)(*(char **)(o + 0x2E0) + 16) = *(S12 *)0x0C336434;
    *(float *)(*(char **)(o + 0x2E0) + 28) = 1.0f;
    *(float *)(*(char **)(o + 0x2E0) + 32) = 0.199999988f;
    *(float *)(*(char **)(o + 0x2E0) + 36) = 1.0f;
    *(char **)(o + 0x118) = p + 0x300 + (short)(p[0x71F1] * 3520) + 0x580;
    if (o[11] == 0) {
        g = (char *)0x0C7F2664;
        g[0x315] = o[13];
        g[0x316] = 1;
        o[11] = 1;
    }
}
