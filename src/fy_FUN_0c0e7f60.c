/* INLINE-ASM: hand-written FPU routine (3 vertices through the matrix in XMTRX with ftrv, clip flags accumulated through the T flag into r9, argument in r4 and flags in r12) that C cannot express */
#pragma inline_asm(FUN_0c0e7f60)
int FUN_0c0e7f60(void)
{
    MOV R4,R1
    MOV.L @R4,R0
    TST #1,R0
    BF/S Lc0e7f78
    FMOV.S @R4+,FR4
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR4
    FMOV.S @R0+,FR5
    FMOV.S @R0+,FR6
    BRA Lc0e7f80
    FLDI1 FR7
Lc0e7f78:
    FMOV.S @R4+,FR5
    FMOV.S @R4,FR6
    FLDI1 FR7
    ADD #24,R4
Lc0e7f80:
    PREF @R4
    ADD #32,R4
    PREF @R4
    ADD #-32,R4
    FTRV XMTRX,FV4
    MOV.L @R4,R0
    TST #1,R0
    BF/S Lc0e7fa0
    FMOV.S @R4+,FR0
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR0
    FMOV.S @R0+,FR1
    FMOV.S @R0+,FR2
    BRA Lc0e7fa8
    FLDI1 FR3
Lc0e7fa0:
    FMOV.S @R4+,FR1
    FMOV.S @R4,FR2
    FLDI1 FR3
    ADD #24,R4
Lc0e7fa8:
    ADD #32,R4
    PREF @R4
    ADD #-32,R4
    FTRV XMTRX,FV0
    MOV.L @R4,R0
    TST #1,R0
    FLDS FR7,FPUL
    BF/S Lc0e7fc8
    FMOV.S @R4+,FR4
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR4
    FMOV.S @R0+,FR5
    FMOV.S @R0+,FR6
    BRA Lc0e7fce
    FLDI1 FR7
Lc0e7fc8:
    FMOV.S @R4+,FR5
    FMOV.S @R4,FR6
    FLDI1 FR7
Lc0e7fce:
    MOV R1,R4
    STS FPUL,R0
    FTRV XMTRX,FV4
    CMP/HI R0,R12
    FLDS FR3,FPUL
    ROTCL R9
    STS FPUL,R0
    CMP/HI R0,R12
    FLDS FR7,FPUL
    ROTCL R9
    STS FPUL,R0
    CMP/HI R0,R12
    RTS
    ROTCL R9
}
