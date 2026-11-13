/* INLINE-ASM: NL object assembly: transforms, clips and sends a lit triangle strip entry: its inputs are r4-r6, r13 and fv12/XMTRX (live registers), FPSCR.SZ toggles (fschg) and it reads constants and a table placed after the code; no C form. */
#pragma inline_asm(ia_displayTriangle_bump)
static void ia_displayTriangle_bump(void)
{
    MOV.L   @R4+,R9
    ADD     #32,R6
    MOV     #3,R3
LC0ED086:
    FMOV.S  @R4+,FR4
    FMOV.S  @R4+,FR5
    FMOV.S  @R4+,FR6
    FLDI1   FR7
    FMOV.S  @R4+,FR2
    FMOV.S  @R4+,FR0
    FMOV.S  @R4+,FR1
    FTRV    XMTRX,FV4
    FLDI0   FR3
    FMOV.S  @R4+,FR10
    MOV     R13,R0
    FMOV.S  @R4+,FR8
    SHLR16  R0
    FMOV.S  @R4+,FR9
    FIPR    FV12,FV0
    FMOV.S  @R4+,FR2
    FSUB    FR15,FR15
    FLDI1   FR7
    FDIV    FR4,FR7
    FMOV.S  @R4+,FR0
    SHLL16  R0
    FLDI0   FR11
    FCMP/GT FR11,FR3
    FMOV.S  @R4+,FR1
    ADD     #32,R4
    FIPR    FV12,FV8
    PREF    @R4
    BT      LC0ED0C0
    FLDI0   FR3
LC0ED0C0:
    FMOV    FR3,FR8
    FMUL    FR8,FR8
    FLDI1   FR9
    FIPR    FV0,FV12
    FLDI0   FR10
    FCMP/GT FR11,FR10
    MOV     R13,R2
    FSUB    FR8,FR9
    EXTU.B  R2,R2
    BF      LC0ED0D6
    FNEG    FR11
LC0ED0D6:
    MOVT    R0
    FCMP/GT FR15,FR10
    LDS     R2,FPUL
    FSQRT   FR9
    BF      LC0ED0E2
    FNEG    FR15
LC0ED0E2:
    MOVT    R1
    FCMP/GT FR11,FR15
    FMOV    FR15,FR10
    SHLL2   R1
    BF      LC0ED0F2
    FMOV    FR11,FR15
    OR      #2,R0
    FMOV    FR10,FR11
LC0ED0F2:
    OR      R0,R1
    FLOAT   FPUL,FR10
    SHLL    R1
    MOVA    LTAB,R0
    MOV.W   @(R0,R1),R1
    MOVA    LCONST,R0
    FMOV.S  @R0+,FR0
    FDIV    FR11,FR15
    SHLR    R1
    FMOV.S  @R0+,FR11
    FMUL    FR10,FR3
    MOV.L   @R0,R2
    MOV     R13,R0
    SHLR16  R0
    FMUL    FR10,FR9
    SHLL16  R0
    FTRC    FR3,FPUL
    OR      R0,R1
    STS     FPUL,R0
    ADD     #32,R4
    FTRC    FR9,FPUL
    PREF    @R4
    SHLL16  R0
    ADD     R0,R1
    STS     FPUL,R0
    ADD     #-64,R4
    FMAC    FR0,FR15,FR11
    SHLL8   R0
    FTRC    FR11,FPUL
    FLDI0   FR15
    ADD     R0,R1
    STS     FPUL,R0
    AND     #255,R0
    MOV.B   @(R0,R2),R0
    BF      LC0ED13A
    NEG     R0,R0
LC0ED13A:
    ADD     R1,R0
    MOV.L   R0,@-R6
    FSCHG
    MOV.L   @R4+,R1
    FMUL    FR7,FR6
    MOV.L   @R4+,R2
    FMUL    FR7,FR5
    MOV.L   R8,@-R6
    MOV     R0,R14
    MOV.L   R2,@-R6
    MOV     R6,R0
    MOV.L   R1,@-R6
    SHAR    R0
    FMOV.S  FR6,@-R6
    DT      R3
    FMOV.S  FR4,@-R6
    BT/S    LC0ED168
    FSCHG
    MOV.L   R6,@R6
    ADD     #32,R5
    PREF    @R6
    BRA     LC0ED086
    ADD     #64,R6
LC0ED168:
    ADD     #32,R5
    MOV.L   R0,@R6
    DT      R9
    PREF    @R6
    ADD     #64,R6
    BF/S    LC0ED086
    MOV     #3,R3
    RTS
    ADD     #-32,R6
    .ALIGN 4
LCONST:
    .DATA.L H'43000000
    .DATA.L H'3F000000
    .DATA.L H'0C0EFB1C
    .DATA.L H'3F000000
LTAB:
    .DATA.W H'0000,H'0101,H'0081,H'0080
    .DATA.W H'01FF,H'0100,H'0180,H'0181
}

void displayTriangle_bump(void)
{
    ia_displayTriangle_bump();
}
