/* INLINE-ASM: reads r11, r2, fr2, fr4, fr6 and uses r10 as live registers and runs with FPSCR.SZ set (fschg): hand-written NL object assembly with no C form. */
#pragma inline_asm(ia_9ce0)
static void ia_9ce0(void)
{
    MOV     #5,R10
    MOV     R11,R0
    AND     #3,R0
    FSCHG
    SHLD    R10,R0
    MOV.L   #H'0C0E95C0,R10
    FMOV.S  @R2,FR0
    ADD     R0,R10
    FMOV.S  FR2,@-R10
    FMOV.S  FR0,@-R10
    FMOV.S  FR6,@-R10
    FMOV.S  FR4,@-R10
    FSCHG
}

void FUN_0c0e9ce0(void)
{
    ia_9ce0();
}
