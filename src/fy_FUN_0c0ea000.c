/* INLINE-ASM: NL object assembly: transforms three indirect/inline vertices with ftrv through the back-bank matrix (XMTRX) into r9 clip bits (live registers r4, r9, r12), no C form. */
#pragma inline_asm(ia_FUN_0c0ea000)
static int ia_FUN_0c0ea000(void)
{
    MOV     R4,R1
    MOV.L   @R4,R0
    TST     #1,R0
    BF/S    LC0EA018
    FMOV.S  @R4+,FR4
    MOV.L   @R4+,R0
    ADD     R4,R0
    FMOV.S  @R0+,FR4
    FMOV.S  @R0+,FR5
    FMOV.S  @R0+,FR6
    BRA     LC0EA020
    FLDI1   FR7
LC0EA018:
    FMOV.S  @R4+,FR5
    FMOV.S  @R4,FR6
    FLDI1   FR7
    ADD     #24,R4
LC0EA020:
    PREF    @R4
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FTRV    XMTRX,FV4
    MOV.L   @R4,R0
    TST     #1,R0
    BF/S    LC0EA040
    FMOV.S  @R4+,FR0
    MOV.L   @R4+,R0
    ADD     R4,R0
    FMOV.S  @R0+,FR0
    FMOV.S  @R0+,FR1
    FMOV.S  @R0+,FR2
    BRA     LC0EA048
    FLDI1   FR3
LC0EA040:
    FMOV.S  @R4+,FR1
    FMOV.S  @R4,FR2
    FLDI1   FR3
    ADD     #24,R4
LC0EA048:
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FTRV    XMTRX,FV0
    FLDS    FR7,FPUL
    MOV.L   @R4,R0
    TST     #1,R0
    BF/S    LC0EA068
    FMOV.S  @R4+,FR4
    MOV.L   @R4+,R0
    ADD     R4,R0
    FMOV.S  @R0+,FR4
    FMOV.S  @R0+,FR5
    FMOV.S  @R0+,FR6
    BRA     LC0EA06E
    FLDI1   FR7
LC0EA068:
    FMOV.S  @R4+,FR5
    FMOV.S  @R4,FR6
    FLDI1   FR7
LC0EA06E:
    MOV     R1,R4
    STS     FPUL,R0
    FTRV    XMTRX,FV4
    CMP/HI  R0,R12
    FLDS    FR3,FPUL
    ROTCL   R9
    STS     FPUL,R0
    CMP/HI  R0,R12
    FLDS    FR7,FPUL
    ROTCL   R9
    STS     FPUL,R0
    CMP/HI  R0,R12
    ROTCL   R9
}

int FUN_0c0ea000(void)
{
    return ia_FUN_0c0ea000();
}
