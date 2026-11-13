/* Thrown-object controller (state byte at +8): 0 computes a launch direction towards a target, 1 and 2 move it and count a timer, 3 frees it. */
extern int FUN_0c0555dc(char *);
extern float FUN_0c0df340(float);
extern int FUN_0c0df360(float);
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern void FUN_0c0367e4(char *, int);
extern void FUN_0c03743c(char *, int);
extern void FUN_0c059330(char *);

void FUN_0c0b9c54(char *o)
{
    char *p, *q;
    int v, i, expired, n;
    float f13, f14, f15, t, s, scale;
    unsigned int eb, b4, b1;
    float eps, c4, c1;

    if (FUN_0c0555dc(o) != 0)
        o[8] = 3;
    switch (o[8]) {
    case 0:
        p = *(char **)(o + 0x1C);
        q = *(char **)(p + 0x1C);
        eb = 0x358637BD;
        eps = *(float *)&eb;
        f14 = *(float *)(q + 32) - *(float *)(p + 32);
        f15 = *(float *)(q + 36) - *(float *)(p + 36);
        f13 = *(float *)(q + 40) - *(float *)(p + 40);
        if (f14 == 0.0f)
            f14 = eps;
        if (f15 == 0.0f)
            f15 = eps;
        if (f13 == 0.0f)
            f13 = eps;
        t = f13 * f13 + f14 * f14;
        v = FUN_0c0df360(-FUN_0c0df340(t) / f15);
        if (0.0f > f15)
            v = v + 0x8000;
        v = (unsigned short)(v + 0x4000);
        *(int *)(o + 44) = -v;
        scale = 50.0f;
        s = FUN_0c0dfa50(0x14000 + v);
        s = s * FUN_0c0df4d0(0x14000 - *(int *)(o + 48));
        *(float *)(o + 56) = s * scale;
        *(float *)(o + 60) = FUN_0c0df4d0(0x14000 - *(int *)(o + 44)) * scale;
        s = FUN_0c0dfa50(0x14000 - *(int *)(o + 44));
        s = s * FUN_0c0dfa50(0x14000 - *(int *)(o + 48));
        *(float *)(o + 64) = s * scale;
        FUN_0c0367e4(o, 1);
        o[0x2D9] = 2;
        *(short *)(o + 0xEC) = 60;
        *(short *)(o + 0xEE) = 0;
        o[8] = o[8] + 1;
        /* fall through */
    case 1:
        for (i = 0; i < 2; i++) {
            q = ((char **)(o + 0x2E0))[i];
            *(int *)(q + 0x18) = *(int *)(q + 0x18) + 3094;
        }
        expired = o[0x2D8] != 0;
        if (!expired) {
            *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
            expired = *(short *)(o + 0xEC) == 0;
        }
        if (expired) {
            *(float *)(o + 32) = *(float *)(o + 32) - *(float *)(o + 56);
            *(float *)(o + 36) = *(float *)(o + 36) + *(float *)(o + 60);
            *(float *)(o + 40) = *(float *)(o + 40) - *(float *)(o + 64);
            o[0x101] = 0;
            o[0x102] = 0;
            *(short *)(o + 0xEC) = 10;
            o[8] = o[8] + 1;
        } else {
            *(float *)(o + 32) = *(float *)(o + 32) + *(float *)(o + 56);
            *(float *)(o + 36) = *(float *)(o + 36) - *(float *)(o + 60);
            *(float *)(o + 40) = *(float *)(o + 40) + *(float *)(o + 64);
            *(short *)(o + 0xEE) = *(short *)(o + 0xEE) + 1;
            n = *(short *)(o + 0xEE);
            if (n % 3 == 0)
                FUN_0c03743c(o, 0);
        }
        return;
    case 2:
        b4 = 0x3ECCCCCC;
        b1 = 0x3DCCCCCC;
        c4 = *(float *)&b4;
        c1 = *(float *)&b1;
        *(float *)(o + 80) = *(float *)(o + 80) + c4;
        *(float *)(o + 84) = *(float *)(o + 84) + c4;
        *(float *)(o + 88) = *(float *)(o + 88) - c1;
        *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
        if (*(short *)(o + 0xEC) == 0)
            o[8] = o[8] + 1;
        return;
    case 3:
        FUN_0c059330(o);
        return;
    default:
        return;
    }
}
