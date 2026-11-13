/* INLINE-ASM: getfr15 */
/* attack records, hit data setup, hit-stop shake, combo counter, damage helpers (0c08d644-0c09111e) */

#pragma inline_asm(getfr15)
static int getfr15(void)
{
    ftrc fr15,fpul
    sts fpul,r0
}

void pl_reduce_life_clamped(char *obj, float step)
{
    short fr15_val = getfr15();
    short step_int;
    short *timer_ptr;
    if (fr15_val == 0)
        step = 1.0f;
    step_int = (int)step;
    timer_ptr = (short *)(obj + 0x71D4);
    *timer_ptr -= step_int ? step_int : 1;
    if (*timer_ptr < 0)
        *timer_ptr = 0;
}
