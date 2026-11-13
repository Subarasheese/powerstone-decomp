/* INLINE-ASM: NL object assembly: its inputs are r1, r3, r5, r6 and fr5-fr10 (live registers), FPSCR.SZ=1 (fschg), no C form. */
#pragma inline_asm(ia_nl_objasm_send_vtx_vtxcol)
static void ia_nl_objasm_send_vtx_vtxcol(void)
{
    FSCHG
    ADD     #24,R6
    FMOV.S  @R1,FR2
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FLDI0   FR2
    MOV     R6,R0
    FLDI0   FR3
    SHAR    R0
    FMOV.S  FR6,@-R6
    DT      R3
    FMOV.S  FR4,@-R6
    BT      LC0EC93E
    MOV     R6,R0
LC0EC93E:
    MOV.L   R0,@R6
    PREF    @R6
    ADD     #64,R6
    FMOV.S  FR2,@-R6
    ADD     #64,R5
    FMOV.S  FR2,@-R6
    FMOV.S  FR10,@-R6
    FMOV.S  FR8,@-R6
    FSCHG
    PREF    @R6
    ADD     #32,R6
}

void nl_objasm_send_vtx_vtxcol(void)
{
    ia_nl_objasm_send_vtx_vtxcol();
}
