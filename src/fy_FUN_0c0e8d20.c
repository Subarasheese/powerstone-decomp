/* INLINE-ASM: hand-written FPU routine (vertex through XMTRX with ftrv/fipr, clip flags into r9 via the T flag, state in r8, r12, r13 and fv12) that C cannot express */
#pragma inline_asm(FUN_0c0e8d20)
int FUN_0c0e8d20(void)
{
    MOV.L @R4,R0
    TST #1,R0
    BF/S Lc0e8d44
    FMOV.S @R4+,FR4
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR4
    FMOV.S @R0+,FR5
    FMOV.S @R0+,FR6
    FLDI1 FR7
    FMOV.S @R0+,FR2
    FMOV.S @R0+,FR0
    FTRV XMTRX,FV4
    FMOV.S @R0+,FR1
    FLDI0 FR3
    ADD #32,R4
    BRA Lc0e8d58
    MOV R0,R2
Lc0e8d44:
    FMOV.S @R4+,FR5
    FMOV.S @R4+,FR6
    FLDI1 FR7
    FMOV.S @R4+,FR2
    FMOV.S @R4+,FR0
    FTRV XMTRX,FV4
    FMOV.S @R4+,FR1
    FLDI0 FR3
    MOV R4,R2
    ADD #40,R4
Lc0e8d58:
    FLDI0 FR11
    FIPR FV12,FV0
    PREF @R4
    ADD #-32,R4
    FLDS FR7,FPUL
    STS FPUL,R0
    FLDI1 FR7
    FDIV FR4,FR7
    FSTS FPUL,FR4
    FCMP/GT FR11,FR3
    FIPR FV0,FV8
    FMOV FR15,FR2
    BF Lc0e8db6
    FADD FR3,FR2
    MOV R13,R1
    FMOV.S @R1+,FR0
    TST R8,R8
    FMOV.S @R1+,FR1
    FLDI0 FR3
    BT/S Lc0e8dd2
    FADD FR2,FR1
    CMP/PZ R8
    BF/S Lc0e8dac
    FTRC FR11,FPUL
    MOV #127,R1
    FLDI0 FR3
    ADD #127,R1
    STS FPUL,R0
    ADD #55,R1
    CMP/GT R1,R0
    SHLL2 R0
    BF Lc0e8dce
    MOV.L @(R0,R8),R0
    FCMP/GT FR3,FR1
    LDS R0,FPUL
    BF/S Lc0e8da4
    FSTS FPUL,FR3
    FMAC FR0,FR1,FR3
Lc0e8da4:
    FLDS FR4,FPUL
    STS FPUL,R0
    RTS
    CMP/HI R0,R12
Lc0e8dac:
    FLDI1 FR2
    FLDS FR4,FPUL
    STS FPUL,R0
    RTS
    CMP/HI R0,R12
Lc0e8db6:
    MOV R13,R1
    CMP/PZ R8
    FLDI0 FR3
    BF Lc0e8dac
    FMOV.S @R1+,FR0
    FLDS FR4,FPUL
    STS FPUL,R0
    CMP/HI R0,R12
    FMOV.S @R1+,FR1
    FADD FR2,FR1
    RTS
    FMAC FR0,FR1,FR3
Lc0e8dce:
    FLDS FR4,FPUL
    STS FPUL,R0
Lc0e8dd2:
    CMP/HI R0,R12
    RTS
    FMAC FR0,FR1,FR3
}
