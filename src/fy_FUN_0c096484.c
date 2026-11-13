/* Turning step of a fighter: runs FUN_0c09a910 (calls FUN_0c09a808(o, 2, 212) when it reports non-zero), reacts to the input bits at +732, and turns the facing angle at +48 by +-910 (or 0), steering towards the opponent's (pointer at +28) facing when both are close (|dx| <= 150), in the same state and the angle difference is inside the 14563 window. */
extern int FUN_0c09a910(char *o);
extern int FUN_0c09a808(char *o, int a, int b);
void FUN_0c096484(char *o)
{
    char *p;
    int d, r5;
    float fo, fp, fd, fa;

    if ((signed char)FUN_0c09a910(o) != 0)
        FUN_0c09a808(o, 2, 212);
    if (*(int *)(o + 732) & 48) {
        o[29239] = 99;
        o[10] = 2;
    }
    if (*(int *)(o + 732) & 64)
        d = 910;
    else if (*(int *)(o + 732) & 128)
        d = -910;
    else
        d = 0;
    p = *(char **)(o + 28);
    if (p[29114] == 34) {
        fo = *(float *)(o + 36);
        fp = *(float *)(p + 36);
        fd = fo - fp;
        fa = fd;
        if (0.0f > fd)
            fa = fp - fo;
        if (!(fa > 150.0f) && *(int *)(o + 29128) != 0 && *(int *)(p + 29128) != 0
            && *(int *)(o + 29128) == *(int *)(p + 29128)) {
            r5 = (short)(*(int *)(o + 48) + d - *(int *)(p + 48));
            if (r5 <= 14563 && r5 >= -14563) {
                if (r5 > 13653 || r5 < -13653)
                    d = 0;
                else if (r5 > 0)
                    d = 910;
                else
                    d = -910;
            }
        }
    }
    *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + d);
}
