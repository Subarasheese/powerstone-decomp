/* INLINE-ASM: takes r11 from its caller (an assembly routine's register convention) and switches the FPU transfer size (fschg). */
/* Display-list helper writing table entries via FPU transfer-size switches (hand-written assembly). */
#pragma inline_asm(nl_objasm_shift_vtx_spd_ofst)
void nl_objasm_shift_vtx_spd_ofst(void)
{
    MOV #5,R1
    MOV.L L_TBL,R10
    MOV R11,R0
    AND #3,R0
    MOV R10,R2
    SHLD R1,R0
    FSCHG
    ADD R0,R10
    ADD #-8,R10
    MOV R11,R0
    FMOV.S @R10,FR2
    ADD #-1,R0
    MOV R2,R10
    AND #3,R0
    SHLD R1,R0
    ADD R0,R2
    MOV R11,R0
    FMOV.S FR2,@-R2
    ADD #-2,R0
    AND #3,R0
    SHLD R1,R0
    ADD R0,R10
    FMOV.S FR2,@-R10
    RTS
    FSCHG
    .ALIGN 4
L_TBL:
    .DATA.L H'0C0EA1A0
}
