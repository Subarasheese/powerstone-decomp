/* INLINE-ASM: NL object assembly: its inputs are r0, r5, r6, the T flag and fr1/fr3 (live registers), FPSCR.SZ=1 (fschg), no C form. */
#pragma inline_asm(ia_FUN_0c0e8e80)
static void ia_FUN_0c0e8e80(void)
{
    AND     #3,R0
    MOV     #5,R2
    MOV.L   #H'0C7FD380,R10
    SHLD    R2,R0
    FSCHG
    ADD     R0,R10
    FMOV.S  @R10+,FR0
    FMOV.S  @R10+,FR2
    ADD     #32,R6
    FMOV.S  @R10+,FR4
    FMUL    FR3,FR2
    FMOV.S  @R10+,FR6
    FMUL    FR3,FR1
    FMOV.S  FR6,@-R6
    MOV     #-1,R2
    FMOV.S  FR4,@-R6
    ADD     #32,R5
    FMOV.S  FR2,@-R6
    BT/S    LC0E8EAA
    FMOV.S  FR0,@-R6
    MOV     R6,R2
LC0E8EAA:
    MOV.L   R2,@R6
    FSCHG
    PREF    @R6
    ADD     #32,R6
}

void FUN_0c0e8e80(void)
{
    ia_FUN_0c0e8e80();
}
