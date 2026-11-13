/* INLINE-ASM: renderer hand-written assembly: vertex pointer in r4, XMTRX, FV4 and FPUL used as registers, uses fschg, ftrv and fdiv */
/* Transforms the vertex at r14 (r4 vertex record, bit 0 of its first word selects inline data or the pointer in word 1) by XMTRX and leaves 1/w in fr4 and the raw w bits in r0. */
#pragma inline_asm(nl_objasm_transform_vtx_spd)
void nl_objasm_transform_vtx_spd(void)
{
    MOV.L @R4,R0
    FSCHG
    TST #1,R0
    MOV R4,R14
    BF/S L1
    ADD #32,R4
    MOV.L @(4,R14),R14
    ADD #-24,R4
    ADD R4,R14
L1:
    FMOV.S @R14+,FR4
    FMOV.S @R14+,FR6
    FLDI1 FR7
    FMOV.S @R14+,FR2
    FLDI0 FR3
    FTRV XMTRX,FV4
    ADD #64,R4
    MOV R14,R2
    PREF @R4
    ADD #-64,R4
    FLDS FR7,FPUL
    FLDI1 FR7
    FDIV FR4,FR7
    STS FPUL,R0
    FSCHG
    FSTS FPUL,FR4
    RTS
    CMP/HI R0,R12
}
