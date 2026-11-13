/* Per-frame step of a fighter's hit reaction: eases the facing angle (+48) towards FUN_0c09db78's by (difference / timer) while the timer short (+236) counts down; when it reaches zero it fires the effect pointed to at +0x71CC (6/7, or 8/9 in mode 2) and clears +0x7236; then, depending on mode (+0x71BC), runs FUN_0c09a910 and tail-calls the follow-up handler. */
extern int FUN_0c09db78(char *o);
extern void FUN_0c0a3914(char *o, int a);
extern void FUN_0c0abe44(void *p, int a, int b);
extern signed char FUN_0c09a910(char *o);
extern void FUN_0c0a2080(char *o);
extern signed char FUN_0c09e7b8(char *o, float a);
extern void FUN_0c0a2e26(char *o, int a, int b);
extern void FUN_0c09d990(char *o);
extern void FUN_0c09d9bc(char *o);
void FUN_0c063d60(char *o)
{
    int ang;
    void *p;

    if (o[0x721E] == 0 && *(short *)(o + 236) != 0) {
        ang = (short)(FUN_0c09db78(o) - *(int *)(o + 48));
        if (*(short *)(o + 236) > 0)
            *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + ang / *(short *)(o + 236));
    }
    *(short *)(o + 236) = *(short *)(o + 236) - 1;
    if (*(short *)(o + 236) == 0 && *(int *)(o + 0x71CC) != 0) {
        p = *(void **)(o + 0x71CC);
        if (o[0x71BC] == 2) {
            FUN_0c0a3914(o, 9);
            if (o[0x721E] == 0)
                FUN_0c0abe44(p, 8, o[3]);
            else
                FUN_0c0abe44(p, 9, o[3]);
        } else {
            FUN_0c0a3914(o, 9);
            if (o[0x721E] == 0)
                FUN_0c0abe44(p, 6, o[3]);
            else
                FUN_0c0abe44(p, 7, o[3]);
        }
        o[0x7236] = 0;
    }
    if (o[0x71BC] == 2) {
        FUN_0c09a910(o);
        if (0.0f > *(float *)(o + 60)) {
            if (FUN_0c09e7b8(o, 0.0f) != 0) {
                FUN_0c0a2e26(o, 6, 0);
                return;
            }
        }
        FUN_0c09d990(o);
        FUN_0c09d9bc(o);
    } else {
        if (FUN_0c09a910(o) != 0)
            FUN_0c0a2080(o);
    }
}
