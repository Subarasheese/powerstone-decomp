/* INLINE-ASM: NL object assembly: transforms a vertex with ftrv (XMTRX back bank) and tests it against a plane (fipr) and a table, live registers r4, r8, r12 and fr8-fr15, no C form. */
/* Transforms a vertex through the back XMTRX bank and tests it against a plane and a table. */
#pragma inline_asm(ia_FUN_0c0e7be0)
static int ia_FUN_0c0e7be0(void)
{
    MOV.L   @R4,R0
    TST     #1,R0
    BF/S    LC0E7C04
    FMOV.S  @R4+,FR4
    MOV.L   @R4+,R0
    ADD     R4,R0
    FMOV.S  @R0+,FR4
    FMOV.S  @R0+,FR5
    FMOV.S  @R0+,FR6
    FLDI1   FR7
    FMOV.S  @R0+,FR2
    FMOV.S  @R0+,FR0
    FTRV    XMTRX,FV4
    FMOV.S  @R0+,FR1
    FLDI0   FR3
    ADD     #32,R4
    BRA     LC0E7C18
    MOV     R0,R2
LC0E7C04:
    FMOV.S  @R4+,FR5
    FMOV.S  @R4+,FR6
    FLDI1   FR7
    FMOV.S  @R4+,FR2
    FMOV.S  @R4+,FR0
    FTRV    XMTRX,FV4
    FMOV.S  @R4+,FR1
    FLDI0   FR3
    MOV     R4,R2
    ADD     #40,R4
LC0E7C18:
    FLDI0   FR11
    FIPR    FV12,FV0
    PREF    @R4
    ADD     #-32,R4
    FLDS    FR7,FPUL
    STS     FPUL,R0
    FLDI1   FR7
    FDIV    FR4,FR7
    FSTS    FPUL,FR4
    FCMP/GT FR11,FR3
    FIPR    FV0,FV8
    FMOV    FR15,FR2
    BF      LC0E7C66
    FADD    FR3,FR2
    TST     R8,R8
    FLDI0   FR3
    BT/S    LC0E7C6A
    CMP/PZ  R8
    BF/S    LC0E7C5C
    FTRC    FR11,FPUL
    MOV     #127,R1
    ADD     #127,R1
    STS     FPUL,R0
    ADD     #55,R1
    CMP/GT  R1,R0
    SHLL2   R0
    BF      LC0E7C66
    MOV.L   @(R0,R8),R0
    LDS     R0,FPUL
    FSTS    FPUL,FR3
    FLDS    FR4,FPUL
    STS     FPUL,R0
    BRA     LEND
    CMP/HI  R0,R12
LC0E7C5C:
    FLDI1   FR2
    FLDS    FR4,FPUL
    STS     FPUL,R0
    BRA     LEND
    CMP/HI  R0,R12
LC0E7C66:
    FLDS    FR4,FPUL
    STS     FPUL,R0
LC0E7C6A:
    FLDI0   FR3
    CMP/HI  R0,R12
LEND:
}

int nl_objasm_transform_vtx(void)
{
    return ia_FUN_0c0e7be0();
}
