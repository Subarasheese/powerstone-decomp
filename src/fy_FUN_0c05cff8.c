/* Updates an effect object's three sub-blocks (+0x2E0/+0x2E4/+0x2E8/+0x2EC): a sine wobble from the angle counter at +0xEC into the first, copies of its vector to the next two, offsets into the second, random 0/1 and 1..7 values from the counter at 0x0C7F2EE0+0x134 into the third and fourth, and a vector copy to +56 while the float at +0x274 is positive. */
typedef struct { int a, b, c; } S12;
extern float FUN_0c0dfa50(int);

void FUN_0c05cff8(char *o)
{
    char *p0 = *(char **)(o + 0x2E0);
    char *g = (char *)0x0C7F2EE0;
    float x, v;
    int s = *(short *)(o + 0xEC);

    x = FUN_0c0dfa50((int)((float)(6 * s) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
    *(float *)(p0 + 8) = x * 10.0f;
    *(S12 *)(*(char **)(o + 0x2E4) + 4) = *(S12 *)(*(char **)(o + 0x2E0) + 4);
    *(S12 *)(*(char **)(o + 0x2E8) + 4) = *(S12 *)(*(char **)(o + 0x2E0) + 4);
    *(int *)(*(char **)(o + 0x2E4) + 16) += 182;
    *(int *)(*(char **)(o + 0x2E4) + 20) += 364;
    **(char **)(o + 0x2E8) = *(int *)(g + 0x134) % 2;
    v = (float)(*(int *)(g + 0x134) % 7 + 1) * 0.0999999940f;
    *(float *)(*(char **)(o + 0x2EC) + 28) = v;
    *(float *)(*(char **)(o + 0x2EC) + 32) = v;
    *(float *)(*(char **)(o + 0x2EC) + 36) = v;
    if (*(float *)(o + 0x274) > 0.0f)
        *(S12 *)(o + 56) = *(S12 *)0x0C336320;
}
