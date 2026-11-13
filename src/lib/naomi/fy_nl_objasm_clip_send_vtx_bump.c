/* INLINE-ASM: NL object assembly: clips an edge against a plane table: its inputs are r0, r5, r6, r7, r11, r12, the T flag and fr3/fr5 (live registers), FPSCR.SZ toggles (fschg), no C form. */
#pragma inline_asm(ia_nl_objasm_clip_send_vtx_bump)
static void ia_nl_objasm_clip_send_vtx_bump(void)
{
    MOV     #5,R1
    MOV.L   #H'0C0ECE00,R10
    AND     #3,R0
    SHLD    R1,R0
    MOV     R10,R2
    ADD     R0,R10
    MOV     R11,R0
    AND     #3,R0
    FMOV.S  @R10,FR2
    SHLD    R1,R0
    LDS     R12,FPUL
    ADD     R0,R2
    FSTS    FPUL,FR0
    FMOV.S  @R2,FR1
    FSUB    FR2,FR0
    ADD     #24,R2
    FSCHG
    ADD     #32,R6
    FSUB    FR2,FR1
    FMOV.S  @R2,FR4
    ADD     #-8,R2
    LDS     R7,FPUL
    ADD     #16,R10
    FDIV    FR1,FR0
    FMOV.S  FR4,@-R6
    FMOV.S  @R2,FR4
    ADD     #-8,R2
    FMOV.S  @R10,FR2
    ADD     #-8,R10
    FSTS    FPUL,FR1
    FSUB    FR2,FR4
    FSUB    FR3,FR5
    FMAC    FR0,FR4,FR2
    FMAC    FR0,FR5,FR3
    FMOV.S  FR2,@-R6
    FSCHG
    FMOV.S  FR1,@-R6
    FMOV.S  @R2,FR5
    ADD     #-4,R2
    FMOV.S  @R10,FR3
    ADD     #-4,R10
    FMOV.S  @R2,FR4
    FMOV.S  @R10,FR2
    FSUB    FR3,FR5
    FSUB    FR2,FR4
    MOV     #-16,R2
    FMAC    FR0,FR5,FR3
    SHLL16  R2
    FMAC    FR0,FR4,FR2
    SHLL8   R2
    FMUL    FR1,FR3
    ADD     #32,R5
    FMUL    FR1,FR2
    FMOV.S  FR3,@-R6
    FMOV.S  FR2,@-R6
    BT      LC0ED592
    MOV     R6,R2
LC0ED592:
    MOV.L   R2,@-R6
    PREF    @R6
    ADD     #32,R6
}

void nl_objasm_clip_send_vtx_bump(void)
{
    ia_nl_objasm_clip_send_vtx_bump();
}
