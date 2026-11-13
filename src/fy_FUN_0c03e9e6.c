/* Spawns the next spark/debris particle of an effect object: when the countdown at +236 reaches zero it picks the current slot (index +240, advanced modulo 4), and if that particle is free marks it, copies the owner's position and velocity into it, offsets it by the table row for +238 rotated by its angle (+20/+16) and gives it a velocity from the owner's facing (+48); a busy slot just retries next frame (+236 = 1). */
typedef struct { int a, b, c; } S12;
extern float FUN_0c0dfa50(int a);
extern float FUN_0c0df4d0(int a);
void FUN_0c03e9e6(char *o)
{
    char *p, *t, *row;
    float fa, fb, fc, k4, sn, cs;
    int m;

    *(short *)(o + 236) = *(short *)(o + 236) - 1;
    if (*(short *)(o + 236) != 0)
        return;
    p = *(char **)(o + 736 + *(short *)(o + 240) * 4);
    if (*p != 0) {
        *(short *)(o + 236) = 1;
        return;
    }
    *(short *)(o + 236) = 30;
    *(short *)(o + 240) = (*(short *)(o + 240) + 1) % 4;
    t = *(char **)(o + 28);
    *p = 1;
    *(S12 *)(p + 28) = *(S12 *)0xC149914;
    *(float *)(p + 36) = 0.0999999940f;
    *(S12 *)(p + 4) = *(S12 *)(t + 32);
    *(S12 *)(p + 16) = *(S12 *)(t + 44);
    *(int *)(p + 16) = *(int *)(p + 16) + *(int *)(0xC1498FC + *(short *)(o + 238) * 4);
    m = o[238];
    row = (char *)(0xC1498D8 + (signed char)(m * 12));
    sn = FUN_0c0dfa50(*(int *)(p + 20));
    fa = *(float *)(row + 8);
    cs = FUN_0c0df4d0(*(int *)(p + 20));
    fb = cs * *(float *)row;
    fb = fb + fa * sn;
    *(float *)(p + 4) = *(float *)(p + 4) + fb;
    cs = FUN_0c0df4d0(*(int *)(p + 20));
    fa = cs * *(float *)(row + 8);
    sn = FUN_0c0dfa50(*(int *)(p + 20));
    fb = sn * *(float *)row;
    fa = fa - fb;
    *(float *)(p + 12) = *(float *)(p + 12) + fa;
    cs = FUN_0c0df4d0(*(int *)(p + 16));
    *(float *)(p + 8) = *(float *)(p + 8) + *(float *)(row + 4) * cs;
    k4 = 4.0f;
    fa = FUN_0c0dfa50(*(int *)(t + 48));
    cs = FUN_0c0df4d0(*(int *)(p + 16));
    fa = fa * cs;
    fa = fa * k4;
    *(float *)(p + 40) = -fa;
    fa = FUN_0c0df4d0(*(int *)(t + 48));
    cs = FUN_0c0df4d0(*(int *)(p + 16));
    fa = fa * cs;
    fa = fa * k4;
    *(float *)(p + 48) = -fa;
    sn = FUN_0c0dfa50(*(int *)(p + 16));
    *(float *)(p + 44) = sn * k4;
    *(int *)(p + 52) = 0;
}
