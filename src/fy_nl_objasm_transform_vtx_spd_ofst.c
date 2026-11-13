/* INLINE-ASM: takes its vertex pointer in r4 and returns/uses values in fr4, r0, r2, r12 and r14 under an assembly routine's register convention, with the FPU in transfer-size mode (fschg), xmtrx (ftrv) and a prefetch. */
#pragma inline_asm(nl_objasm_transform_vtx_spd_ofst)
int nl_objasm_transform_vtx_spd_ofst(void)
{
    MOV.L @R4,R0
    FSCHG
    TST #1,R0
    MOV R4,R14
    BF/S L_A
    ADD #32,R4
    MOV.L @(4,R14),R14
    ADD #-24,R4
    ADD R4,R14
L_A:
    FMOV.S @R14+,FR4
    FMOV.S @R14+,FR6
    FLDI1 FR7
    FMOV.S @R14+,FR2
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
