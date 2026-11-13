/* Per-frame update of a knock-down/launch move: counts down two timers (+0xEE, +0xEC), steps the animation index (+0xF0, capped at 4, via a table at 0x0C14EEBA) while the move runs, and when it is over either launches the character (FUN_0c0555c4: shortens the timer, plays a sound, drops a float by 75, next step) or lands it (sets the velocity from the facing angle, step 4); ends with FUN_0c09d990 unless it launched. */
extern int FUN_0c09a910(char *);
extern int FUN_0c09c894(char *);
extern void FUN_0c0a1d88(char *, int);
extern char *FUN_0c09c91a(char *);
extern int FUN_0c09cd32(char *);
extern int FUN_0c068488(char *);
extern int FUN_0c0555c4(void);
extern void FUN_0c0332a0(char *, int);
extern void FUN_0c09a808(char *, int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c09d990(char *);

void FUN_0c0687fc(char *o)
{
    char *q;
    int c;
    int f0;

    FUN_0c09a910(o);
    *(short *)(o + 0xEE) = *(short *)(o + 0xEE) - 1;
    *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
    if ((signed char)FUN_0c09c894(o) != 0) {
        *(short *)(o + 0xF0) = *(short *)(o + 0xF0) + 1;
        if (*(short *)(o + 0xF0) > 4)
            *(short *)(o + 0xF0) = 4;
        else
            FUN_0c0a1d88(o, ((signed char *)0x0C14EEBA)[*(short *)(o + 0xF0)]);
    }
    q = FUN_0c09c91a(o);
    if (q != 0) {
        o[15] = 0;
        if (q[4] == 10)
            o[15] = 1;
    }
    if ((signed char)FUN_0c09cd32(o) != 0 && *(short *)(o + 0xEE) <= 0)
        c = 1;
    else
        c = 0;
    if ((signed char)c == 0) {
        if ((signed char)FUN_0c068488(o) == 0 || *(short *)(o + 0xEE) > 0) {
            if (*(short *)(o + 0xF0) != 4 || o[15] == 0)
                goto done;
        }
    }
    if (*(short *)(o + 0xEC) > 0 && FUN_0c0555c4() != 0) {
        FUN_0c0332a0(o, 0);
        *(short *)(o + 0xEE) = 10;
        FUN_0c09a808(o, 1, 159);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        *(float *)(o + 36) = *(float *)(o + 36) - 75.0f;
        o[10] = o[10] + 1;
        return;
    }
    FUN_0c09a808(o, 2, 205);
    *(short *)(o + 0xEC) = 9;
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    *(float *)(o + 56) = -(FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * 6.0f);
    *(float *)(o + 64) = -(FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * 6.0f);
    *(float *)(o + 60) = 15.0f;
    *(float *)(o + 72) = -1.22499990f;
    *(float *)(o + 76) = 0.0f;
    *(float *)(o + 68) = 0.0f;
    *(int *)(o + 44) = 0;
    o[10] = 4;
done:
    FUN_0c09d990(o);
}
