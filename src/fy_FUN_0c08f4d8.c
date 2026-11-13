/* Starts a fighter's knock-back reaction: when the counter at +0x721A is below 2 and FUN_0c09cd32 reports a hit direction it counts up, plays the sound and, for direction 8 (or a refused hit) just halves/flips the velocity floats by direction, else turns the fighter to the hit direction (+48), sets state 22, launches it (velocity floats at +56..+76, timers at +236/+238) and runs the follow-up calls. Returns 1 when a hit was handled, 0 otherwise. */
extern int FUN_0c09cd32(char *o);
extern void FUN_0c0a3ea8(int a);
extern void FUN_0c09b7a4(void *p, int a);
extern int FUN_0c0555c4(void);
extern void FUN_0c08e382(char *o);
extern void FUN_0c0a2e26(char *o, int a, int b);
extern int FUN_0c09d818(char *o, int a);
extern int FUN_0c09a808(char *o, int a, int b);
extern void FUN_0c044250(char *dst, int a);
extern float FUN_0c09b74c(char *o);
extern int FUN_0c0dc18e(int, int);
extern void FUN_0c09c506(char *o);
extern void FUN_0c098c86(char *o);
int FUN_0c08f4d8(char *o)
{
    int r12, r13;
    float two;

    if (o[0x721A] >= 2)
        return 0;
    r12 = FUN_0c09cd32(o);
    if ((signed char)r12 == 0)
        return 0;
    o[0x721A] = o[0x721A] + 1;
    FUN_0c0a3ea8(o[3]);
    FUN_0c09b7a4(o, 15);
    if (o[0x71DD] == 1 && o[0x72AC] != 0 && *(short *)(o + 0x72A4) == 0 && FUN_0c0555c4() != 0) {
        FUN_0c08e382(o);
        FUN_0c0a2e26(o, 38, r12);
        return 1;
    }
    r13 = (signed char)r12;
    if (r13 != 8 && FUN_0c09d818(o, r12) >= 0 && !(*(unsigned char *)(*(int *)(o + 248) + 16) & 1)) {
        r13 = ((r13 - 4) << 14) - 32768;
        o[0x71DD] = 22;
        o[11] = 0;
        *(int *)(o + 48) = r13;
        FUN_0c09a808(o, 2, 152);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        FUN_0c044250(o + 32, *(int *)(o + 48));
        *(float *)(o + 36) = *(float *)(o + 36) - FUN_0c09b74c(o);
        if (*(float *)(o + 724) > *(float *)(o + 36))
            *(float *)(o + 36) = *(float *)(o + 724);
        *(short *)(o + 236) = 20;
        *(short *)(o + 238) = 13;
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 64) = 0.0f;
        *(float *)(o + 56) = 0.0f;
        *(unsigned int *)(o + 60) = 0x80000000;
        *(float *)(o + 72) = -1.0f;
        FUN_0c0dc18e(10, 10);
        FUN_0c09c506(o);
        FUN_0c098c86(o);
        return 1;
    }
    two = 2.0f;
    switch (r13) {
    case 4:
    case 6:
        *(float *)(o + 56) = *(float *)(o + 56) / two;
        *(float *)(o + 64) = -(*(float *)(o + 64) / two);
        break;
    case 5:
    case 7:
        *(float *)(o + 56) = -(*(float *)(o + 56) / two);
        *(float *)(o + 64) = *(float *)(o + 64) / two;
        break;
    }
    return 0;
}
