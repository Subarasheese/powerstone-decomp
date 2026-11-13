/* INLINE-ASM: NL object assembly: reads r2, r3, r5, r6 and fr2-fr7 as live registers and runs in FPSCR.SZ=1 (fschg), no C form. */
/* Renderer vertex routine running in FPSCR.SZ=1 on live registers r2, r3, r5, r6 and fr2-fr7. */
#pragma inline_asm(ia_FUN_0c0e9ca0)
static void ia_FUN_0c0e9ca0(void)
{
    FSCHG
    ADD     #32,R6
    FMOV.S  @R2,FR0
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR0,@-R6
    MOV     #-1,R2
    FMOV.S  FR6,@-R6
    DT      R3
    FMOV.S  FR4,@-R6
    BT/S    LC0E9CC4
    FSCHG
    MOV.L   R6,@R6
    ADD     #32,R5
    PREF    @R6
    BRA     LEND
    ADD     #32,R6
LC0E9CC4:
    MOV.L   R2,@R6
    ADD     #32,R5
    PREF    @R6
    ADD     #32,R6
LEND:
}

void nl_objasm_send_vtx_spd(void)
{
    ia_FUN_0c0e9ca0();
}
