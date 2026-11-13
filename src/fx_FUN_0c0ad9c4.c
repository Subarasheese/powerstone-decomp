/* Initialises an object (arg) from its owner at +28 and a 10-byte kind row: counters, flag bytes, the owner's 12-byte block, two scaled direction floats from a trig helper pair, and a 12-byte constant block; then runs FUN_0c0ad1b8. */
struct T12 { int a, b, c; };
extern void FUN_0c0a1e0a(char *o, int k);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c0ad1b8(char *o);
void FUN_0c0ad9c4(char *o)
{
    signed char *e;
    signed char *own;
    float f;
    o[8]++;
    o[3] = (*(char **)(o + 28))[3];
    *(short *)(o + 236) = 0;
    *(short *)(o + 238) = 0;
    *(short *)(o + 240) = 0;
    o[729] = 0;
    e = (signed char *)(0xC33BFD8 + (signed char)o[788] * 10);
    o[0x101] = e[4];
    o[0x102] = e[5];
    FUN_0c0a1e0a(o, e[3]);
    o[261] = 0;
    o[262] = 0;
    o[263] = 0;
    *(struct T12 *)(o + 44) = *(struct T12 *)(*(char **)(o + 28) + 44);
    own = *(signed char **)(o + 28);
    if (e[7] != 0)
        f = *(float *)(0xC33C05C + own[4] * 24 + 12);
    else
        f = *(float *)(0xC33C05C + (*(signed char **)(o + 28))[4] * 24 + 8);
    *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * f;
    *(float *)(o + 60) = 0.0f;
    *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * f;
    *(struct T12 *)(o + 68) = *(struct T12 *)0xC339FA8;
    FUN_0c0ad1b8(o);
}
