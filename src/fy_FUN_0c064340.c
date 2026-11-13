/* Per-frame update of a hit/guard reaction: counts the timer at +0xEC down (resetting +0x2D9 while it runs), halves the float at +60 when the one at +0x274 is negative, then by the move kind at +4: kinds 4/5 start a knock (FUN_0c09e7b8 test, FUN_0c09c45a / FUN_0c09c422, angle +0x8000 for kind 5) and go to step 3; other kinds either start the guard-break (kind 7), take FUN_0c0a2e26 (6, 0), or play the hit reaction (+0xEC = 35, step + 1); when nothing applies it runs FUN_0c09d990 / FUN_0c09d9bc. */
extern void FUN_0c09a910(char *);
extern int FUN_0c09e7b8(char *, float);
extern void FUN_0c09c45a(char *);
extern void FUN_0c0dc18e(int, int);
extern void FUN_0c09c422(char *);
extern int FUN_0c09c894(char *);
extern void FUN_0c09a808(char *, int, int);
extern void FUN_0c0a2e26(char *, int, int);
extern void FUN_0c09d990(char *);
extern void FUN_0c09d9bc(char *);

void FUN_0c064340(char *o)
{
    *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
    if (*(short *)(o + 0xEC) > 0)
        o[0x2D9] = 2;
    FUN_0c09a910(o);
    if (*(float *)(o + 0x274) < 0.0f)
        *(float *)(o + 60) = *(float *)(o + 60) / 2.0f;
    if (o[4] == 4) {
        if (!(*(float *)(o + 60) < 0.0f))
            goto idle;
        if ((signed char)FUN_0c09e7b8(o, 0.0f) == 0)
            goto idle;
        FUN_0c09c45a(o);
        FUN_0c0dc18e(30, 20);
        goto knock;
    }
    if (o[4] == 5) {
        if (!(*(float *)(o + 60) < 0.0f))
            goto idle;
        if ((signed char)FUN_0c09e7b8(o, 0.0f) == 0)
            goto idle;
        FUN_0c09c422(o);
        *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
    knock:
        FUN_0c09a808(o, 1, 152);
        o[10] = 3;
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        return;
    }
    if (!(*(float *)(o + 60) < 0.0f))
        goto idle;
    if ((signed char)FUN_0c09e7b8(o, 0.0f) == 0)
        goto idle;
    if (o[0x108] != 0 && (signed char)FUN_0c09c894(o) != 0) {
        if (o[4] == 7) {
            FUN_0c09a808(o, 1, 152);
            o[0x71A9] = 1;
            o[0x71A8] = 1;
            o[10] = 3;
            return;
        }
        if (o[4] != 2)
            *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
        goto away;
    }
    if (o[4] == 7)
        goto away;
    if (o[4] != 2)
        *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
    FUN_0c09a808(o, 1, 152);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    FUN_0c09c422(o);
    o[0x710B] = 1;
    *(short *)(o + 0xEC) = 35;
    o[10] = o[10] + 1;
    return;
away:
    FUN_0c0a2e26(o, 6, 0);
    return;
idle:
    FUN_0c09d990(o);
    FUN_0c09d9bc(o);
}
