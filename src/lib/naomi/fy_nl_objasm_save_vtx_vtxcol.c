/* INLINE-ASM: hand-written register-convention routine (mask in r11, pointer in r1, fr4-fr10 in; fschg double moves with pre-decrement stores) that C cannot express */
#pragma inline_asm(nl_objasm_save_vtx_vtxcol)
void nl_objasm_save_vtx_vtxcol(void)
{
    MOV R11,R0
    MOV #6,R10
    AND #3,R0
    SHLD R10,R0
    MOV.L LP,R10
    FSCHG
    ADD R0,R10
    FMOV.S @R1,FR2
    FMOV.S FR10,@-R10
    FMOV.S FR8,@-R10
    FMOV.S FR2,@-R10
    FMOV.S FR6,@-R10
    FMOV.S FR4,@-R10
    RTS
    FSCHG
    .ALIGN 4
LP: .DATA.L H'0C0EC2C8
}
