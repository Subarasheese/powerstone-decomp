/* INLINE-ASM: hand-written register-convention routine (r0/r11 slot indices, r12/r7/r5/r6 and fr registers in, T flag from the caller, fschg pair moves, fmac) that C cannot express */
#pragma inline_asm(FUN_0c0e8ec0)
void FUN_0c0e8ec0(void)
{
    AND #3,R0
    SHLL2 R0
    MOV.L P0,R10
    SHLL2 R0
    ADD R0,R0
    MOV R10,R2
    ADD R0,R10
    MOV R11,R0
    AND #3,R0
    FMOV.S @R10,FR2
    SHLL2 R0
    SHLL2 R0
    ADD R0,R0
    ADD R0,R2
    FMOV.S @R2,FR1
    LDS R12,FPUL
    FSTS FPUL,FR0
    FSUB FR2,FR0
    ADD #24,R10
    FSUB FR2,FR1
    ADD #24,R2
    FDIV FR1,FR0
    LDS R7,FPUL
    FSTS FPUL,FR1
    FSCHG
    FMOV.S @R2,FR4
    ADD #-8,R2
    FMOV.S @R10,FR2
    ADD #-8,R10
    FSUB FR2,FR4
    FSUB FR3,FR5
    ADD #32,R6
    FMAC FR0,FR4,FR2
    FMAC FR0,FR5,FR3
    FMOV.S FR2,@-R6
    FMOV.S @R2,FR4
    ADD #-8,R2
    FMOV.S @R10,FR2
    ADD #-8,R10
    FSUB FR2,FR4
    FSUB FR3,FR5
    FMAC FR0,FR4,FR2
    FMAC FR0,FR5,FR3
    FMOV.S FR2,@-R6
    FSCHG
    FMOV.S FR1,@-R6
    FMOV.S @R2,FR5
    ADD #-4,R2
    FMOV.S @R10,FR3
    ADD #-4,R10
    FMOV.S @R2,FR4
    FMOV.S @R10,FR2
    FSUB FR3,FR5
    FSUB FR2,FR4
    MOV #-16,R2
    FMAC FR0,FR5,FR3
    SHLL16 R2
    FMAC FR0,FR4,FR2
    SHLL8 R2
    FMUL FR1,FR3
    ADD #32,R5
    FMUL FR1,FR2
    FMOV.S FR3,@-R6
    FMOV.S FR2,@-R6
    BT Lc0e8f44
    MOV R6,R2
Lc0e8f44:
    MOV.L R2,@-R6
    PREF @R6
    RTS
    ADD #32,R6
    .ALIGN 4
P0: .DATA.L H'0C7FD380
}
