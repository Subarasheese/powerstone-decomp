/* INLINE-ASM: hand-written register-convention routine (mask in r0, pointers in r5/r6, fr1/fr3 in, T flag from the caller selects the tail store; fschg pair moves, pref) that C cannot express */
#pragma inline_asm(nl_objasm_send_saved_vtx_bump)
void nl_objasm_send_saved_vtx_bump(void)
{
    MOV #5,R1
    MOV.L LP,R10
    AND #3,R0
    FSCHG
    SHLD R1,R0
    ADD R0,R10
    MOV #-16,R2
    FMOV.S @R10+,FR0
    SHLL16 R2
    FMOV.S @R10+,FR2
    ADD #32,R6
    FMOV.S @R10+,FR4
    FMUL FR3,FR2
    FMOV.S @R10+,FR6
    FMUL FR3,FR1
    SHLL8 R2
    FMOV.S FR6,@-R6
    ADD #32,R5
    FMOV.S FR4,@-R6
    FMOV.S FR2,@-R6
    FMOV.S FR0,@-R6
    BT L1
    MOV R6,R2
L1:
    MOV.L R2,@R6
    FSCHG
    PREF @R6
    RTS
    ADD #32,R6
    .ALIGN 4
LP: .DATA.L H'0C0ECE00
}
