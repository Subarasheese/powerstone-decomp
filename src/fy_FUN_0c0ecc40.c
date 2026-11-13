/* INLINE-ASM: renderer hand-written assembly: vertex pointer in r4, clip-flag accumulator r9 and limit r12 held by the caller, XMTRX and the FV registers are used as registers, T flag shifted into r9 */
/* Variant of FUN_0c0e90c0: transforms three consecutive vertices (inline 32-byte records or 8-byte records pointing at their data, selected by bit 0 of the first word) by XMTRX and shifts into r9 one compare of r12 against each transformed w. */
#pragma inline_asm(FUN_0c0ecc40)
int FUN_0c0ecc40(void)
{
    MOV R4,R1
    MOV.L @R4,R0
    TST #1,R0
    BF/S L1
    FMOV.S @R4+,FR4
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR4
    FMOV.S @R0+,FR5
    FMOV.S @R0+,FR6
    BRA L2
    FLDI1 FR7
L1:
    FMOV.S @R4+,FR5
    FMOV.S @R4,FR6
    FLDI1 FR7
    ADD #24,R4
L2:
    PREF @R4
    ADD #32,R4
    PREF @R4
    ADD #-32,R4
    FTRV XMTRX,FV4
    MOV.L @R4,R0
    TST #1,R0
    BF/S L3
    FMOV.S @R4+,FR0
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR0
    FMOV.S @R0+,FR1
    FMOV.S @R0+,FR2
    BRA L4
    FLDI1 FR3
L3:
    FMOV.S @R4+,FR1
    FMOV.S @R4,FR2
    FLDI1 FR3
    ADD #24,R4
L4:
    PREF @R4
    ADD #32,R4
    PREF @R4
    ADD #-32,R4
    FTRV XMTRX,FV0
    FLDS FR7,FPUL
    MOV.L @R4,R0
    TST #1,R0
    BF/S L5
    FMOV.S @R4+,FR4
    MOV.L @R4+,R0
    ADD R4,R0
    FMOV.S @R0+,FR4
    FMOV.S @R0+,FR5
    FMOV.S @R0+,FR6
    BRA L6
    FLDI1 FR7
L5:
    FMOV.S @R4+,FR5
    FMOV.S @R4,FR6
    FLDI1 FR7
L6:
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
