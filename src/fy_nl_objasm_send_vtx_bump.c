/* INLINE-ASM: NL object assembly: its inputs are r1, r3, r5, r6, r8 and fr2-fr7 (live registers) and it runs in FPSCR.SZ=1 (fschg), no C form. */
#pragma inline_asm(ia_nl_objasm_send_vtx_bump)
static void ia_nl_objasm_send_vtx_bump(void)
{
    FSCHG
    ADD     #32,R6
    MOV.L   R1,@-R6
    FMUL    FR7,FR6
    FMUL    FR7,FR5
    MOV.L   R8,@-R6
    MOV     R6,R0
    FMOV.S  FR2,@-R6
    SHAR    R0
    FMOV.S  FR6,@-R6
    DT      R3
    FMOV.S  FR4,@-R6
    BT      LC0ED49C
    MOV     R6,R0
LC0ED49C:
    MOV.L   R0,@R6
    FSCHG
    ADD     #32,R5
    PREF    @R6
    ADD     #32,R6
}

void nl_objasm_send_vtx_bump(void)
{
    ia_nl_objasm_send_vtx_bump();
}
