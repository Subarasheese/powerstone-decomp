/* INLINE-ASM: takes r1, r8, r11 and fr2/fr4/fr6 from its caller (an assembly routine's register convention) and switches the FPU transfer size (fschg). */
#pragma inline_asm(nl_objasm_save_vtx_bump)
void nl_objasm_save_vtx_bump(void)
{
    MOV R11,R0
    MOV #5,R10
    AND #3,R0
    SHLD R10,R0
    MOV.L L_TBL,R10
    FSCHG
    ADD R0,R10
    MOV.L R1,@-R10
    MOV.L R8,@-R10
    FMOV.S FR2,@-R10
    FMOV.S FR6,@-R10
    FMOV.S FR4,@-R10
    RTS
    FSCHG
    .ALIGN 4
L_TBL:
    .DATA.L H'0C0ECE20
}
