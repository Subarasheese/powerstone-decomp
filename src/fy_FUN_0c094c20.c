/* Walk/turn step of a fighter: checks the move FUN_0c09d544 (mode 2 counts +0x7243 down and adds the step at +0x7254 to +36), steers the facing angle at +48 towards FUN_0c09ddfe's + the global at 0xC7F31E0 (at most 1456 per step), sets the velocity floats at +56/+64 from the angle (scale 12 or 8), runs FUN_0c09d990 and arms the +240 timer; with no input it counts +240 down and ends the move (returns 1) through FUN_0c09a808. */
extern signed char FUN_0c09d544(char *o, char *p, float a);
extern int FUN_0c09ddfe(char *o);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c09d990(char *o);
extern int FUN_0c09a808(char *o, int a, int b);
int FUN_0c094c20(char *o)
{
    int d, t;
    float k;
    short s;

    if (FUN_0c09d544(o, o + 0x7254, 60.0f) == 2) {
        o[0x7243] = o[0x7243] - 1;
        if (o[0x7243] == 0) {
            *(float *)(o + 36) = *(float *)(o + 36) + *(float *)(o + 0x7254);
            o[0x7243] = 4;
        }
    } else {
        o[0x7243] = 4;
    }
    if ((*(int *)(o + 732) & 240) == 0 && *(short *)(o + 238) == 0) {
        s = *(short *)(o + 240) - 1;
        *(short *)(o + 240) = s;
        if (s > 0)
            goto tail;
        FUN_0c09a808(o, 2, 159);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        o[11] = 2;
        return 1;
    }
    if (*(short *)(o + 238) == 0) {
        d = (short)(*(int *)0xC7F31E0 + FUN_0c09ddfe(o) - *(int *)(o + 48));
        if (d > -1456) {
            if (d >= 1456) {
                *(int *)(o + 48) = *(int *)(o + 48) + 1456;
            } else {
                t = (d + (0 > d)) >> 1;
                *(int *)(o + 48) = *(int *)(o + 48) + t;
            }
        } else {
            *(int *)(o + 48) = *(int *)(o + 48) - 1456;
        }
        *(int *)(o + 48) = *(int *)(o + 48) & 0xFFFF;
    }
    if (o[11] == 0)
        k = 12.0f;
    else
        k = 8.0f;
    *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * k;
    *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * k;
    FUN_0c09d990(o);
    *(short *)(o + 240) = 4;
tail:
    if (*(short *)(o + 238) != 0)
        *(short *)(o + 238) = *(short *)(o + 238) - 1;
    return 0;
}
