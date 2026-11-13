/* INLINE-ASM: NL object assembly: transforms three vertices with ftrv through the back-bank matrix (XMTRX) and shifts the clip bits into r9 (live registers r4, r9, r12), no C form. */
#pragma inline_asm(ia_nl_objasm_transform_tri_bump)
static int ia_nl_objasm_transform_tri_bump(void)
{
    FMOV.S  @R4+,FR4
    FMOV.S  @R4+,FR5
    FMOV.S  @R4,FR6
    FLDI1   FR7
    ADD     #48,R4
    PREF    @R4
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FTRV    XMTRX,FV4
    FMOV.S  @R4+,FR0
    FMOV.S  @R4+,FR1
    FMOV.S  @R4,FR2
    FLDI1   FR3
    ADD     #48,R4
    PREF    @R4
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FTRV    XMTRX,FV0
    FLDS    FR7,FPUL
    STS     FPUL,R0
    FMOV.S  @R4+,FR4
    FMOV.S  @R4+,FR5
    FMOV.S  @R4,FR6
    CMP/HI  R0,R12
    FLDI1   FR7
    ADD     #-120,R4
    FTRV    XMTRX,FV4
    ROTCL   R9
    FLDS    FR3,FPUL
    STS     FPUL,R0
    CMP/HI  R0,R12
    FLDS    FR7,FPUL
    ROTCL   R9
    STS     FPUL,R0
    CMP/HI  R0,R12
    ROTCL   R9
}

int nl_objasm_transform_tri_bump(void)
{
    return ia_nl_objasm_transform_tri_bump();
}
