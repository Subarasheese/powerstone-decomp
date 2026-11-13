/* INLINE-ASM: the function reads fr15 (a caller-saved-by-nobody FPU register that is not an argument register); no C form exists for it. */
/* Subtracts a step (fr4 truncated to short, 1 if zero) from the short at +0x71D4 of the object, clamping at zero; fr15 == 0 forces a step of 1.0. */
#pragma inline_asm(getfr15)
static int getfr15(void)
{
    ftrc fr15,fpul
    sts fpul,r0
}
void FUN_0c08e34e(char *o, float d)
{
    short a = getfr15();
    short s;
    short *p;
    if (a == 0)
        d = 1.0f;
    s = (int)d;
    p = (short *)(o + 0x71D4);
    *p -= s ? s : 1;
    if (*p < 0)
        *p = 0;
}
