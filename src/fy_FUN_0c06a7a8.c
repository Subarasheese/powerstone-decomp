/* Per-mode setup from five 13-entry tables (bytes at 0x0C14EF98, 0x0C14EFDC, 0x0C14EFE9, 0x0C14EFF6 and 13 floats at 0x0C14EFA8) indexed by the mode byte at +0x7238: calls FUN_0c09a808 with the first, copies one table byte to +0x710C, calls FUN_0c0a2db4 with the second and float when the second is positive (else clears six floats at +56..+76), and sets two flags at +0x71A8/+0x71A9 when the third is non-zero. */
typedef struct { char v[13]; } B13;
typedef struct { float v[13]; } F13;
extern void FUN_0c09a808(char *, int, int);
extern void FUN_0c0a2db4(char *, int, float);

void FUN_0c06a7a8(char *o)
{
    B13 a, b, c, d;
    F13 f;
    int k;

    a = *(B13 *)0x0C14EF98;
    f = *(F13 *)0x0C14EFA8;
    b = *(B13 *)0x0C14EFDC;
    c = *(B13 *)0x0C14EFE9;
    d = *(B13 *)0x0C14EFF6;
    *(short *)(o + 0xF0) = 0;
    FUN_0c09a808(o, 1, a.v[o[0x7238]]);
    o[0x710C] = d.v[o[0x7238]];
    if (b.v[o[0x7238]] > 0) {
        k = o[0x7238];
        FUN_0c0a2db4(o, b.v[k], f.v[k]);
    } else {
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 72) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 64) = 0.0f;
        *(float *)(o + 60) = 0.0f;
        *(float *)(o + 56) = 0.0f;
    }
    if (c.v[o[0x7238]] != 0) {
        o[0x71A9] = 1;
        o[0x71A8] = 1;
    }
}
