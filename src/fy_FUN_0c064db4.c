/* Launches a thrown object's flight: when FUN_0c09a910 allows it, state 7 fires straight (speed 25 along the heading, fixed upward component), other states aim at the target's height difference (distance clamped to 200, aim angle from FUN_0c0df360, lower-bounded at 25486) and then both set up the sprite, the 40/2 timers and advance the step byte at 10. */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c0df360(float);
char FUN_0c09a910(char *);
void FUN_0c09a808(char *, int, int);
int thunk_FUN_0c062242(char *, char *);
void FUN_0c064db4(char *o)
{
    float fdist, d;
    char *c, *rec;

    if (FUN_0c09a910(o) == 0)
        return;
    if (o[4] == 7) {
        FUN_0c09a808(o, 1, 163);
        o[0x71a9] = 1;
        o[0x71a8] = 1;
        *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * 25.0f;
        *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * 25.0f;
        *(float *)(o + 60) = -(FUN_0c0df4d0(4551) * 25.0f);
    } else {
        fdist = *(float *)0xC494D1C;
        if (!(200.0f > fdist))
            fdist = 200.0f;
        if (fdist == 0.0f)
            fdist = 0.0099999998f;
        c = *(char **)(o + 28);
        *(float *)(o + 0x7254) = (*(float *)(o + 36) - *(float *)(c + 36)) + -50.0f;
        d = *(float *)(o + 0x7254) / fdist;
        *(int *)(o + 44) = (unsigned short)(FUN_0c0df360(d) + 0x4000);
        if (*(int *)(o + 44) < 25486)
            *(int *)(o + 44) = 25486;
        *(float *)(o + 60) = FUN_0c0dfa50(0x14000 - *(int *)(o + 44)) * 25.0f;
        *(float *)(o + 0x7254) = FUN_0c0df4d0(0x14000 - *(int *)(o + 44)) * 25.0f;
        *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * *(float *)(o + 0x7254);
        *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * *(float *)(o + 0x7254);
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 72) = 0.0f;
        FUN_0c09a808(o, 1, 163);
        o[0x71a9] = 1;
        o[0x71a8] = 1;
        rec = (char *)(0xC7E40C4 + (unsigned short)((unsigned char)o[3] * 0x72D0));
        thunk_FUN_0c062242(rec + 0x300 + (short)(rec[0x71f1] * 3520) + 352, o + 32);
    }
    *(short *)(o + 0xEC) = 40;
    *(short *)(o + 0xF2) = 2;
    o[10] = o[10] + 1;
}
