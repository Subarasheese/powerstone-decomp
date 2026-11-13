/* INLINE-ASM: NL object assembly: transforms a vertex strip with ftrv through XMTRX and writes clipped vertices to the store queue; its inputs are r4-r6, r8, fr15, fv12 and the T flag (live registers), FPSCR.SZ toggles, no C form. */
#pragma inline_asm(ia_FUN_0c0e8000)
static void ia_FUN_0c0e8000(void)
{
    TST     R8,R8
    MOV     R8,R0
    BF      LC0E8008
    BRA     LC0E8116
LC0E8008:
    TST     #1,R0
    BF      LC0E8010
    BRA     LC0E8256
    NOP
LC0E8010:
    MOV.L   @R4+,R9
    FLDI1   FR2
    FSCHG
    FLDI0   FR3
    MOV     #3,R3
    FMOV.S  FR2,@-R6
    ADD     #32,R6
    FMOV.S  FR2,@R6
    MOV.L   @R4,R0
    MOV     R4,R14
    TST     #1,R0
    ADD     #32,R4
    BF      LC0E8030
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
    ADD     R4,R14
LC0E8030:
    FMOV.S  @R14+,FR4
    FMOV.S  @R14,FR6
    ADD     #16,R14
    FLDI1   FR7
    FMOV.S  @R14,FR0
    FTRV    XMTRX,FV4
LC0E803C:
    FLDI1   FR7
    FDIV    FR4,FR7
    DT      R3
    MOV.L   @R4+,R0
    BT/S    LC0E80E0
    MOV.L   @R4+,R14
    TST     #1,R0
    MOV     R6,R2
    BT/S    LC0E8056
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E8056:
    FMOV.S  @R14+,FR8
    ADD     #32,R4
    PREF    @R4
    FMOV.S  @R14,FR10
    ADD     #16,R14
    FLDI1   FR11
    FMUL    FR7,FR6
    FMOV.S  FR0,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR6,@-R6
    FTRV    XMTRX,FV8
    FMOV.S  FR4,@-R6
    ADD     #-32,R4
    MOV.L   R2,@R6
    FMOV.S  @R14,FR0
    DT      R3
    PREF    @R6
    ADD     #56,R6
    MOV     R6,R2
    FLDI1   FR11
    FDIV    FR8,FR11
    MOV.L   @R4+,R0
    BT/S    LC0E80B8
    MOV.L   @R4+,R14
    TST     #1,R0
    BT/S    LC0E8092
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E8092:
    ADD     #32,R4
    FMOV.S  @R14+,FR4
    PREF    @R4
    FMOV.S  @R14,FR6
    ADD     #16,R14
    FLDI1   FR7
    FMUL    FR11,FR10
    ADD     #-32,R4
    FMUL    FR11,FR9
    FMOV.S  FR0,@-R6
    FMOV.S  FR10,@-R6
    FTRV    XMTRX,FV4
    FMOV.S  FR8,@-R6
    ADD     #64,R5
    MOV.L   R2,@R6
    FMOV.S  @R14,FR0
    PREF    @R6
    BRA     LC0E803C
    ADD     #56,R6
LC0E80B8:
    DT      R9
    MOV     #-1,R2
    BT      LC0E80D0
    TST     #1,R0
    MOV     #3,R3
    BT/S    LC0E8092
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E8092
    ADD     #-8,R14
    NOP
LC0E80D0:
    ADD     #48,R4
    PREF    @R4
    ADD     #-48,R4
    FMOV    FR8,FR4
    ADD     #32,R5
    BRA     LC0E80FE
    FMOV    FR10,FR6
    NOP
LC0E80E0:
    DT      R9
    MOV     #-1,R2
    BT      LC0E80F8
    TST     #1,R0
    MOV     #3,R3
    BT/S    LC0E8056
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E8056
    ADD     #-8,R14
    NOP
LC0E80F8:
    ADD     #48,R4
    PREF    @R4
    ADD     #-48,R4
LC0E80FE:
    FMUL    FR7,FR6
    FMOV.S  FR0,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR6,@-R6
    ADD     #32,R5
    FMOV.S  FR4,@-R6
    ADD     #-8,R4
    MOV.L   R2,@R6
    FSCHG
    PREF    @R6
    RTS
    ADD     #32,R6
LC0E8116:
    MOV.L   @R4+,R9
    ADD     #32,R6
    FSCHG
    MOV     #3,R3
    MOV.L   @R4,R0
    MOV     R4,R14
    FLDI0   FR2
    TST     #1,R0
    ADD     #32,R4
    BF      LC0E8130
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
    ADD     R4,R14
LC0E8130:
    FMOV.S  @R14+,FR4
    MOV     R6,R2
    FMOV.S  @R14+,FR6
    FADD    FR7,FR2
    FLDI1   FR7
    FLDI0   FR3
    FMOV.S  @R14+,FR0
    FTRV    XMTRX,FV4
LC0E8140:
    MOV.L   @R4+,R0
    DT      R3
    FLDS    FR15,FPUL
    FLDI1   FR7
    FDIV    FR4,FR7
    MOV.L   @R4+,R1
    BT/S    LC0E8210
    FIPR    FV12,FV0
    TST     #1,R0
    ADD     R4,R1
    BT/S    LC0E815E
    FSTS    FPUL,FR2
    MOV     R4,R1
    ADD     #24,R4
    ADD     #-8,R1
LC0E815E:
    FLDI0   FR0
    FCMP/GT FR0,FR3
    FMOV.S  @R14,FR0
    ADD     #32,R4
    FMOV.S  @R1+,FR8
    BF      LC0E816C
    FADD    FR3,FR2
LC0E816C:
    FLDI0   FR3
    DT      R3
    FMOV.S  FR2,@-R6
    FSUB    FR2,FR2
    PREF    @R4
    ADD     #-32,R4
    FMOV.S  @R1+,FR10
    FMUL    FR7,FR6
    FMOV.S  FR0,@-R6
    FADD    FR11,FR2
    FLDI1   FR11
    FMUL    FR7,FR5
    FMOV.S  @R1+,FR0
    ADD     #32,R5
    FMOV.S  FR6,@-R6
    FTRV    XMTRX,FV8
    FMOV.S  FR4,@-R6
    MOV.L   R2,@R6
    MOV     R6,R2
    PREF    @R6
    ADD     #64,R6
    MOV.L   @R4+,R0
    MOV.L   @R4+,R14
    FLDS    FR15,FPUL
    FIPR    FV12,FV0
    FLDI1   FR11
    BT/S    LC0E81EA
    FDIV    FR8,FR11
    TST     #1,R0
    ADD     R4,R14
    BT/S    LC0E81B2
    FSTS    FPUL,FR2
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E81B2:
    FLDI0   FR0
    FCMP/GT FR0,FR3
    FMOV.S  @R1,FR0
    ADD     #32,R4
    FMOV.S  @R14+,FR4
    BF      LC0E81C0
    FADD    FR3,FR2
LC0E81C0:
    FLDI0   FR3
    FMOV.S  FR2,@-R6
    FSUB    FR2,FR2
    PREF    @R4
    ADD     #-32,R4
    FMOV.S  @R14+,FR6
    FMUL    FR11,FR10
    FMOV.S  FR0,@-R6
    FADD    FR7,FR2
    FLDI1   FR7
    FMUL    FR11,FR9
    FMOV.S  @R14+,FR0
    ADD     #32,R5
    FMOV.S  FR10,@-R6
    FTRV    XMTRX,FV4
    FMOV.S  FR8,@-R6
    MOV.L   R2,@R6
    MOV     R6,R2
    PREF    @R6
    BRA     LC0E8140
    ADD     #64,R6
LC0E81EA:
    DT      R9
    FSTS    FPUL,FR2
    BT/S    LC0E8204
    MOV     #-1,R2
    TST     #1,R0
    MOV     #3,R3
    BT/S    LC0E81B2
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E81B2
    ADD     #-8,R14
    NOP
LC0E8204:
    ADD     #48,R4
    PREF    @R4
    ADD     #-48,R4
    FMOV    FR8,FR4
    BRA     LC0E8230
    FMOV    FR10,FR6
LC0E8210:
    DT      R9
    FSTS    FPUL,FR2
    BT/S    LC0E8228
    MOV     #-1,R2
    TST     #1,R0
    MOV     #3,R3
    BT/S    LC0E815E
    ADD     R4,R1
    MOV     R4,R1
    ADD     #24,R4
    BRA     LC0E815E
    ADD     #-8,R1
LC0E8228:
    ADD     #48,R4
    MOV     R14,R1
    PREF    @R4
    ADD     #-48,R4
LC0E8230:
    FLDI0   FR0
    FCMP/GT FR0,FR3
    FMOV.S  @R1,FR10
    BF      LC0E823A
    FADD    FR3,FR2
LC0E823A:
    FLDI0   FR3
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR10,@-R6
    ADD     #32,R5
    FMOV.S  FR6,@-R6
    ADD     #-8,R4
    FMOV.S  FR4,@-R6
    MOV.L   R2,@R6
    FSCHG
    PREF    @R6
    RTS
    ADD     #32,R6
LC0E8256:
    MOV     #127,R2
    MOV     #3,R3
    MOV.L   @R4+,R9
    ADD     #-32,R6
    MOV.L   @R4,R0
    ADD     #127,R2
    FSCHG
    ADD     #55,R2
    TST     #1,R0
    MOV     R4,R14
    BF/S    LC0E8274
    ADD     #32,R4
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
LC0E8272:
    ADD     R4,R14
LC0E8274:
    FMOV.S  @R14+,FR4
LC0E8276:
    FMOV.S  @R14+,FR6
LC0E8278:
    FLDI0   FR2
    FADD    FR7,FR2
    FLDI1   FR7
    ADD     #64,R6
    FLDI0   FR3
    ADD     #32,R5
    FMOV.S  @R14+,FR0
    FTRV    XMTRX,FV4
    FLDI0   FR11
    DT      R3
    MOV     R14,R1
    BT      LC0E82B8
    MOV.L   @R4,R0
    FIPR    FV12,FV0
    MOV.L   @(4,R4),R14
    TST     #1,R0
    ADD     #32,R4
    FLDI1   FR7
    BF/S    LC0E82C0
    FDIV    FR4,FR7
    ADD     #-24,R4
    PREF    @R4
    FCMP/GT FR11,FR3
    ADD     R4,R14
    FLDS    FR15,FPUL
    FIPR    FV0,FV8
    PREF    @R14
    BF/S    LC0E82E6
    FSTS    FPUL,FR2
    BRA     LC0E82D2
    FADD    FR3,FR2
    NOP
LC0E82B8:
    FIPR    FV12,FV0
    ADD     #32,R4
    FLDI1   FR7
    FDIV    FR4,FR7
LC0E82C0:
    MOV     R4,R14
    FCMP/GT FR11,FR3
    FLDS    FR15,FPUL
    FIPR    FV0,FV8
    PREF    @R4
    ADD     #-32,R14
    BF/S    LC0E82E6
    FSTS    FPUL,FR2
    FADD    FR3,FR2
LC0E82D2:
    FTRC    FR11,FPUL
    FLDI0   FR3
    STS     FPUL,R0
    CMP/GT  R2,R0
    SHLL2   R0
    BF      LC0E82E8
    MOV.L   @(R0,R8),R0
    LDS     R0,FPUL
    BRA     LC0E82E8
    FSTS    FPUL,FR3
LC0E82E6:
    FLDI0   FR3
LC0E82E8:
    FMOV.S  @R1,FR0
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR0,@-R6
    TST     R3,R3
    FMOV.S  FR6,@-R6
    BT/S    LC0E8304
    FMOV.S  FR4,@-R6
    MOV.L   R6,@R6
    FMOV.S  @R14+,FR4
    BRA     LC0E8276
    PREF    @R6
    NOP
LC0E8304:
    MOV     #-1,R1
    MOV.L   R1,@R6
    DT      R9
    PREF    @R6
    BT      LC0E8322
    MOV.L   @R14,R0
    MOV     #3,R3
    TST     #1,R0
    FMOV.S  @R14+,FR4
    BF/S    LC0E8278
    FMOV.S  @R14+,FR6
    ADD     #-24,R4
    FLDS    FR5,FPUL
    BRA     LC0E8272
    STS     FPUL,R14
LC0E8322:
    ADD     #-32,R4
    FSCHG
    RTS
    ADD     #32,R6
}

void FUN_0c0e8000(void)
{
    ia_FUN_0c0e8000();
}
