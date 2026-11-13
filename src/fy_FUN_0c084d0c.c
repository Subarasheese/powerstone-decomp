/* Two functions of one source file: FUN_0c084d0c, the entry of a player's turn state (clears the velocity floats, starts animation 96, takes the turn target from FUN_0c09ddfe / FUN_0c09dbce, lowers the counter at +0x71F4 by 120, sets +240 to 13) which ends by falling into FUN_0c084d9e, the per-frame step of that state (moves the two table words at 0x1e80+0x1760/0x1810+84 by 0x4000 for mode 11, and for mode 13 finishes the turn with FUN_0c0c571c / FUN_0c03d254 / FUN_0c0a3914 or FUN_0c0a2080; then updates and turns the heading by the 16-bit difference at +0x7248 divided by the counter at +240). */
extern short g_w31e0;
void FUN_0c09a808(char *o, int a, int b);
int FUN_0c09ddfe(char *o);
int FUN_0c09dbce(char *o);
int FUN_0c0c571c(char *o, int a);
void FUN_0c03d254(char *o, int a);
void FUN_0c0a3914(char *o);
void FUN_0c0a2080(char *o);
void FUN_0c09a910(char *o);
void FUN_0c09da1c(char *o);
void FUN_0c084d9e(char *o);
void FUN_0c084d0c(char *o)
{
    int r;
    short t;
    o[11] = o[11] + 1;
    *(float *)(o + 64) = 0.0f;
    *(float *)(o + 60) = 0.0f;
    *(float *)(o + 56) = 0.0f;
    *(float *)(o + 76) = 0.0f;
    *(float *)(o + 72) = 0.0f;
    *(float *)(o + 68) = 0.0f;
    o[0x71BC] = 0;
    FUN_0c09a808(o, 1, 96);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    if (*(int *)(o + 732) & 0xF0)
        r = FUN_0c09ddfe(o) + g_w31e0;
    else
        r = FUN_0c09dbce(o);
    *(int *)(o + 0x7248) = (unsigned short)r;
    t = (short)(int)((float)*(short *)(o + 0x71F4) - 120.0f);
    *(short *)(o + 0x71F4) = t;
    if (t < 0)
        *(short *)(o + 0x71F4) = 0;
    *(short *)(o + 240) = 13;
    FUN_0c084d9e(o);
}
