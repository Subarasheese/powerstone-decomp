/* INLINE-ASM: NL object assembly: its inputs are r11 and fr (live registers) and it runs in FPSCR.SZ=1 (fschg) over a table, no C form. */
/* NL object assembly over a table in FPSCR.SZ=1 mode (hand-written assembly wrapper). */
#pragma inline_asm(ia_FUN_0c0e8e40)
static void ia_FUN_0c0e8e40(void)
{
    MOV     #5,R1
    MOV.L   #H'0C7FD3A0,R10
    MOV     R11,R0
    AND     #3,R0
    MOV     R10,R2
    SHLD    R1,R0
    FSCHG
    ADD     R0,R10
    ADD     #-8,R10
    MOV     R11,R0
    FMOV.S  @R10,FR2
    ADD     #-1,R0
    MOV     R2,R10
    AND     #3,R0
    SHLD    R1,R0
    ADD     R0,R2
    MOV     R11,R0
    FMOV.S  FR2,@-R2
    ADD     #-2,R0
    AND     #3,R0
    SHLD    R1,R0
    ADD     R0,R10
    FMOV.S  FR2,@-R10
    FSCHG
}

void nl_objasm_shift_vtx_ofst(void)
{
    ia_FUN_0c0e8e40();
}
