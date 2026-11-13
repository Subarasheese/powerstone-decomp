/* INLINE-ASM: NL object assembly: transforms a vertex strip with ftrv through XMTRX and writes clipped, lit vertices to the store queue; its inputs are r4-r6, r8 and fv12 and the T flag (live registers), FPSCR.SZ toggles, no C form. */
#pragma inline_asm(ia_FUN_0c0e8700)
static void ia_FUN_0c0e8700(void)
{
    TST     R8,R8
    MOV     R8,R0
    BF      LC0E8708
    BRA     LC0E8828
LC0E8708:
    TST     #1,R0
    BF      LC0E8710
    BRA     LC0E899A
    NOP
LC0E8710:
    MOV.L   @R4+,R3
    FLDI1   FR2
    FSCHG
    FLDI0   FR3
    FMOV.S  FR2,@-R6
    ADD     #32,R6
    FMOV.S  FR2,@R6
    MOV.L   @R4,R0
    MOV     R4,R14
    TST     #1,R0
    ADD     #32,R4
    BF      LC0E872E
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
    ADD     R4,R14
LC0E872E:
    FMOV.S  @R14+,FR4
    FMOV.S  @R14,FR6
    ADD     #16,R14
    FLDI1   FR7
    FMOV.S  @R14,FR0
    FTRV    XMTRX,FV4
LC0E873A:
    FLDI1   FR7
    FDIV    FR4,FR7
    DT      R3
    MOV.L   @R4+,R0
    BT/S    LC0E87E8
    MOV.L   @R4+,R14
    TST     #1,R0
    MOV     R6,R2
    BT/S    LC0E8754
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E8754:
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
    BT/S    LC0E87B8
    MOV.L   @R4+,R14
    TST     #1,R0
    BT/S    LC0E8790
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E8790:
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
    BRA     LC0E873A
    ADD     #56,R6
    NOP
LC0E87B8:
    CMP/PL  R0
    MOV.L   @R4+,R2
    BF      LC0E87D8
    TST     #128,R0
    MOV     R14,R3
    BT      LC0E87D8
    MOV     R2,R0
    MOV     #-1,R2
    MOV.L   @R4+,R14
    TST     #1,R0
    BT/S    LC0E8790
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E8790
    ADD     #-8,R14
LC0E87D8:
    ADD     #44,R4
    PREF    @R4
    ADD     #-48,R4
    FMOV    FR8,FR4
    ADD     #32,R5
    BRA     LC0E880E
    FMOV    FR10,FR6
    NOP
LC0E87E8:
    CMP/PL  R0
    MOV.L   @R4+,R2
    BF      LC0E8808
    TST     #128,R0
    MOV     R14,R3
    BT      LC0E8808
    MOV     R2,R0
    MOV     #-1,R2
    MOV.L   @R4+,R14
    TST     #1,R0
    BT/S    LC0E8754
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E8754
    ADD     #-8,R14
LC0E8808:
    ADD     #44,R4
    PREF    @R4
    ADD     #-48,R4
LC0E880E:
    FMUL    FR7,FR6
    MOV     #-1,R2
    FMUL    FR7,FR5
    FMOV.S  FR0,@-R6
    ADD     #-8,R4
    FMOV.S  FR6,@-R6
    ADD     #32,R5
    FMOV.S  FR4,@-R6
    MOV.L   R2,@R6
    FSCHG
    PREF    @R6
    RTS
    ADD     #32,R6
LC0E8828:
    MOV.L   @R4+,R3
    ADD     #32,R6
    FSCHG
    MOV.L   @R4,R0
    MOV     R4,R14
    FLDI0   FR2
    TST     #1,R0
    ADD     #32,R4
    BF      LC0E8840
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
    ADD     R4,R14
LC0E8840:
    FMOV.S  @R14+,FR4
    MOV     R6,R2
    FMOV.S  @R14+,FR6
    FADD    FR7,FR2
    FLDI1   FR7
    FLDI0   FR3
    FMOV.S  @R14+,FR0
    FTRV    XMTRX,FV4
LC0E8850:
    MOV.L   @R4+,R0
    FLDS    FR15,FPUL
    DT      R3
    MOV.L   @R4+,R1
    FIPR    FV12,FV0
    FLDI1   FR7
    BT/S    LC0E8940
    FDIV    FR4,FR7
    TST     #1,R0
    ADD     R4,R1
    BT/S    LC0E886E
    FSTS    FPUL,FR2
    MOV     R4,R1
    ADD     #24,R4
    ADD     #-8,R1
LC0E886E:
    FLDI0   FR10
    FCMP/GT FR10,FR3
    FMOV.S  @R1+,FR8
    ADD     #32,R4
    FMOV.S  @R13,FR0
    BF      LC0E887C
    FADD    FR3,FR2
LC0E887C:
    PREF    @R4
    CMP/PZ  R8
    FADD    FR2,FR1
    FLDI0   FR3
    BF      LC0E8888
    FMAC    FR0,FR1,FR3
LC0E8888:
    FMOV.S  @R14,FR0
    FMOV.S  @R1+,FR10
    ADD     #-32,R4
    FMOV.S  FR2,@-R6
    FSUB    FR2,FR2
    FMOV.S  FR0,@-R6
    FMUL    FR7,FR6
    FMOV.S  @R1+,FR0
    FADD    FR11,FR2
    FLDI1   FR11
    FMUL    FR7,FR5
    ADD     #32,R5
    FMOV.S  FR6,@-R6
    DT      R3
    FMOV.S  FR4,@-R6
    FTRV    XMTRX,FV8
    MOV.L   R2,@R6
    FSUB    FR3,FR3
    MOV.L   @R4+,R0
    MOV     R6,R2
    PREF    @R6
    ADD     #64,R6
    MOV.L   @R4+,R14
    FLDS    FR15,FPUL
    FIPR    FV12,FV0
    FLDI1   FR11
    BT/S    LC0E8914
    FDIV    FR8,FR11
    TST     #1,R0
    ADD     R4,R14
    BT/S    LC0E88CE
    FSTS    FPUL,FR2
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0E88CE:
    FLDI0   FR0
    FCMP/GT FR0,FR3
    FMOV.S  @R14+,FR4
    ADD     #32,R4
    FMOV.S  @R13,FR0
    BF      LC0E88DC
    FADD    FR3,FR2
LC0E88DC:
    PREF    @R4
    CMP/PZ  R8
    FADD    FR2,FR1
    FLDI0   FR3
    BF      LC0E88E8
    FMAC    FR0,FR1,FR3
LC0E88E8:
    FMOV.S  @R1,FR0
    FMOV.S  @R14+,FR6
    ADD     #-32,R4
    FMOV.S  FR2,@-R6
    FSUB    FR2,FR2
    FMOV.S  FR0,@-R6
    FMUL    FR11,FR10
    FMOV.S  @R14+,FR0
    FADD    FR7,FR2
    FLDI1   FR7
    FMUL    FR11,FR9
    ADD     #32,R5
    FMOV.S  FR10,@-R6
    FSUB    FR3,FR3
    FMOV.S  FR8,@-R6
    FTRV    XMTRX,FV4
    MOV.L   R2,@R6
    MOV     R6,R2
    PREF    @R6
    BRA     LC0E8850
    ADD     #64,R6
    NOP
LC0E8914:
    CMP/PL  R0
    FSTS    FPUL,FR2
    BF      LC0E8934
    TST     #128,R0
    MOV     R14,R3
    BT      LC0E8934
    MOV.L   @R4+,R0
    MOV     #-1,R2
    TST     #1,R0
    MOV.L   @R4+,R14
    BT/S    LC0E88CE
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    BRA     LC0E88CE
    ADD     #-8,R14
LC0E8934:
    ADD     #48,R4
    PREF    @R4
    ADD     #-48,R4
    FMOV    FR8,FR4
    BRA     LC0E8968
    FMOV    FR10,FR6
LC0E8940:
    CMP/PL  R0
    FSTS    FPUL,FR2
    BF      LC0E8960
    TST     #128,R0
    MOV     R1,R3
    BT      LC0E8960
    MOV.L   @R4+,R0
    MOV     #-1,R2
    TST     #1,R0
    MOV.L   @R4+,R1
    BT/S    LC0E886E
    ADD     R4,R1
    MOV     R4,R1
    ADD     #24,R4
    BRA     LC0E886E
    ADD     #-8,R1
LC0E8960:
    ADD     #48,R4
    MOV     R14,R1
    PREF    @R4
    ADD     #-48,R4
LC0E8968:
    FLDI0   FR0
    FCMP/GT FR0,FR3
    FMOV.S  @R13,FR0
    BF      LC0E8972
    FADD    FR3,FR2
LC0E8972:
    CMP/PZ  R8
    FMOV.S  @R1,FR10
    FADD    FR2,FR1
    FLDI0   FR3
    BF      LC0E897E
    FMAC    FR0,FR1,FR3
LC0E897E:
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR10,@-R6
    MOV     #-1,R2
    FMOV.S  FR6,@-R6
    ADD     #32,R5
    FMOV.S  FR4,@-R6
    ADD     #-8,R4
    MOV.L   R2,@R6
    FSCHG
    PREF    @R6
    RTS
    ADD     #32,R6
LC0E899A:
    MOV     #127,R2
    MOV.L   @R4+,R3
    ADD     #-32,R6
    MOV.L   @R4,R0
    ADD     #127,R2
    FSCHG
    ADD     #55,R2
    TST     #1,R0
    MOV     R4,R14
    BF/S    LC0E89B6
    ADD     #32,R4
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
LC0E89B4:
    ADD     R4,R14
LC0E89B6:
    FMOV.S  @R14+,FR4
LC0E89B8:
    FMOV.S  @R14+,FR6
LC0E89BA:
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
    BT      LC0E89FC
    MOV.L   @R4,R0
    FIPR    FV12,FV0
    MOV.L   @(4,R4),R14
    TST     #1,R0
    ADD     #32,R4
    FLDI1   FR7
    BF/S    LC0E8A04
    FDIV    FR4,FR7
    ADD     #-24,R4
    PREF    @R4
    FCMP/GT FR11,FR3
    ADD     R4,R14
    FLDS    FR15,FPUL
    FIPR    FV0,FV8
    FMOV.S  @R13,FR0
    PREF    @R14
    BF/S    LC0E8A34
    FSTS    FPUL,FR2
    BRA     LC0E8A18
    FADD    FR3,FR2
    NOP
LC0E89FC:
    FIPR    FV12,FV0
    ADD     #32,R4
    FLDI1   FR7
    FDIV    FR4,FR7
LC0E8A04:
    PREF    @R4
    MOV     R4,R14
    FCMP/GT FR11,FR3
    FLDS    FR15,FPUL
    FIPR    FV0,FV8
    FMOV.S  @R13,FR0
    ADD     #-32,R14
    BF/S    LC0E8A34
    FSTS    FPUL,FR2
    FADD    FR3,FR2
LC0E8A18:
    FTRC    FR11,FPUL
    FLDI0   FR3
    STS     FPUL,R0
    FADD    FR2,FR1
    CMP/GT  R2,R0
    SHLL2   R0
    BF      LC0E8A38
    MOV.L   @(R0,R8),R0
    FCMP/GT FR3,FR1
    LDS     R0,FPUL
    BF/S    LC0E8A3A
    FSTS    FPUL,FR3
    BRA     LC0E8A3A
    FMAC    FR0,FR1,FR3
LC0E8A34:
    FADD    FR2,FR1
    FLDI0   FR3
LC0E8A38:
    FMAC    FR0,FR1,FR3
LC0E8A3A:
    FMOV.S  @R1,FR0
    FMUL    FR7,FR6
    FMOV.S  FR2,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR0,@-R6
    TST     R3,R3
    FMOV.S  FR6,@-R6
    BT/S    LC0E8A54
    FMOV.S  FR4,@-R6
    MOV.L   R6,@R6
    FMOV.S  @R14+,FR4
    BRA     LC0E89B8
    PREF    @R6
LC0E8A54:
    MOV.L   @R14+,R0
    MOV     #-1,R1
    CMP/PL  R0
    MOV.L   R1,@R6
    BF/S    LC0E8A7A
    PREF    @R6
    TST     #128,R0
    MOV.L   @R14+,R3
    BT      LC0E8A7A
    MOV.L   @R14,R0
    ADD     #8,R4
    TST     #1,R0
    FMOV.S  @R14+,FR4
    BF/S    LC0E89BA
    FMOV.S  @R14+,FR6
    ADD     #-24,R4
    FLDS    FR5,FPUL
    BRA     LC0E89B4
    STS     FPUL,R14
LC0E8A7A:
    ADD     #-32,R4
    FSCHG
    RTS
    ADD     #32,R6
}

void FUN_0c0e8700(void)
{
    ia_FUN_0c0e8700();
}
