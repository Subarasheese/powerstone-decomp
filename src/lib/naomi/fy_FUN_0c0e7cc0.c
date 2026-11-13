/* INLINE-ASM: hand-written register-convention routine (mask in r11, pointer in r2, fr2/fr4/fr6 in; uses fschg and pre-decrement fmov stores) that C cannot express */
/* Stores a vertex's four floats into the buffer slot selected by the mask in r11 (pre-decrement fmov stores). */
#pragma inline_asm(nl_objasm_save_vtx)
void nl_objasm_save_vtx(void)
{
    MOV #5,R10
    MOV R11,R0
    AND #3,R0
    FSCHG
    SHLD R10,R0
    MOV.L LP,R10
    FMOV.S @R2,FR0
    ADD R0,R10
    FMOV.S FR2,@-R10
    FMOV.S FR0,@-R10
    FMOV.S FR6,@-R10
    FMOV.S FR4,@-R10
    RTS
    FSCHG
    .ALIGN 4
LP: .DATA.L H'0C7FD2A0
}
