/* INLINE-ASM: renderer hand-written assembly on r0, r5, r6 and fr3 held by the caller and the T flag, uses fschg and pref */
/* Takes the saved vertex slot r0&3 of the table at 0xC0EC2A0 (64 bytes per slot), scales two floats by fr3 and writes the vertex and its colour record to the buffer at r6 (the header word is -0x01000000 or r6 when T is clear), sending both halves with pref. */
#pragma inline_asm(nl_objasm_send_saved_vtx_vtxcol)
void nl_objasm_send_saved_vtx_vtxcol(void)
{
    MOV #6,R1
    MOV.L L1,R10
    AND #3,R0
    FSCHG
    SHLD R1,R0
    FLDI0 FR6
    ADD R0,R10
    FLDI0 FR7
    MOV #-16,R2
    FMOV.S @R10+,FR0
    SHLL16 R2
    FMOV.S @R10+,FR2
    ADD #24,R6
    FMOV.S @R10+,FR4
    FMUL FR3,FR2
    FMOV.S @R10+,FR8
    FMUL FR3,FR1
    FMOV.S @R10,FR10
    SHLL8 R2
    FMOV.S FR4,@-R6
    ADD #64,R5
    FMOV.S FR2,@-R6
    FMOV.S FR0,@-R6
    BT L2
    MOV R6,R2
L2:
    MOV.L R2,@R6
    MOV R6,R2
    PREF @R6
    ADD #64,R6
    FMOV.S FR6,@-R6
    FMOV.S FR6,@-R6
    FMOV.S FR10,@-R6
    FMOV.S FR8,@-R6
    PREF @R6
    FSCHG
    RTS
    ADD #32,R6
    .ALIGN 4
L1: .DATA.L H'0C0EC2A0
}
