/* INLINE-ASM: NL object assembly: the clip/send state machine of the display list builder: live registers r4, r9, r11, r12, fr and the T flag, SZ toggles, braf dispatch and calls to sibling assembly fragments; no C form. */
/* Display list builder clip/send state machine over the command stream (hand-written assembly). */
#pragma inline_asm(ia_FUN_0c0ea4c0)
static void ia_FUN_0c0ea4c0(void)
{
    MOV.L   R10,@-R15
    MOV.L   R11,@-R15
    STS.L   PR,@-R15
    MOV.L   @R4+,R3
    FSCHG
    FMOV    FR3,FR0
    FMOV    FR7,FR12
    FMOV    FR11,FR2
    FMOV    FR15,FR14
    FSCHG
    FMOV    FR1,FR12
    FMOV    FR3,FR14
LC0EA4D8:
    MOV     #0,R11
    MOV.L   PL0,R13
    JSR     @R13
    MOV     #0,R9
    BF      LC0EA4E2
    BRA     LC0EA5F8
LC0EA4E2:
    ROTCL   R9
    MOV.L   PL1,R13
    JSR     @R13
    ADD     #1,R11
    MOV.L   PL0,R13
    JSR     @R13
    NOP
    BF      LC0EA4F0
    BRA     LC0EA66E
LC0EA4F0:
    ROTCL   R9
    MOV.L   PL1,R13
    JSR     @R13
    ADD     #1,R11
LC0EA4F6:
    ADD     #32,R6
    MOV.L   @R4,R0
    FSCHG
    MOV     R4,R14
    TST     #1,R0
    ADD     #32,R4
    BF      LC0EA50A
    MOV.L   @(4,R14),R14
    ADD     #-24,R4
    ADD     R4,R14
LC0EA50A:
    FMOV.S  @R14+,FR4
    FMOV.S  @R14+,FR6
    FLDI1   FR7
    FMOV.S  @R14+,FR2
    FMOV.S  @R14,FR0
    FTRV    XMTRX,FV4
LC0EA516:
    FMOV.S  FR2,@-R6
    FLDS    FR7,FPUL
    FLDI1   FR7
    FDIV    FR4,FR7
    STS     FPUL,R0
    CMP/HI  R0,R12
    BF      FS1
    BRA     LC0EA5B8
    NOP
FS1:
    DT      R3
    MOV.L   @R4+,R0
    ADD     #1,R11
    BF/S    FS2
    MOV.L   @R4+,R14
    BRA     LC0EA5D8
    NOP
FS2:
    TST     #1,R0
    MOV     R6,R2
    BT/S    LC0EA53C
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0EA53C:
    FMOV.S  @R14+,FR8
    ADD     #64,R4
    FMOV.S  @R14+,FR10
    PREF    @R4
    FLDI1   FR11
    ADD     #-64,R4
    FMOV.S  @R14+,FR2
    FMUL    FR7,FR6
    FMOV.S  FR0,@-R6
    FMUL    FR7,FR5
    FMOV.S  FR6,@-R6
    FTRV    XMTRX,FV8
    FMOV.S  FR4,@-R6
    ADD     #32,R5
    MOV.L   R2,@R6
    FMOV.S  @R14,FR0
    PREF    @R6
    ADD     #64,R6
    FMOV.S  FR2,@-R6
    FLDS    FR11,FPUL
    FLDI1   FR11
    FDIV    FR8,FR11
    STS     FPUL,R0
    CMP/HI  R0,R12
    BT      LC0EA5AC
    DT      R3
    MOV.L   @R4+,R0
    ADD     #1,R11
    BT/S    LC0EA5CC
    MOV.L   @R4+,R14
    TST     #1,R0
    MOV     R6,R2
    BT/S    LC0EA586
    ADD     R4,R14
    MOV     R4,R14
    ADD     #24,R4
    ADD     #-8,R14
LC0EA586:
    FMOV.S  @R14+,FR4
    ADD     #64,R4
    FMOV.S  @R14+,FR6
    PREF    @R4
    FLDI1   FR7
    FMUL    FR11,FR10
    FMOV.S  @R14+,FR2
    FMUL    FR11,FR9
    FMOV.S  FR0,@-R6
    FTRV    XMTRX,FV4
    FMOV.S  FR10,@-R6
    ADD     #-64,R4
    FMOV.S  FR8,@-R6
    ADD     #32,R5
    MOV.L   R2,@R6
    FMOV.S  @R14,FR0
    PREF    @R6
    BRA     LC0EA516
    ADD     #64,R6
LC0EA5AC:
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FMOV    FR8,FR4
    BRA     LC0EA5BE
    FMOV    FR10,FR6
LC0EA5B8:
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
LC0EA5BE:
    ROTCL   R9
    FSCHG
    MOV     R14,R2
    FSTS    FPUL,FR4
    BRA     LC0EA6EE
    ADD     #-24,R6
    NOP
LC0EA5CC:
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
    FMOV    FR8,FR4
    BRA     LC0EA5DE
    FMOV    FR10,FR6
LC0EA5D8:
    ADD     #32,R4
    PREF    @R4
    ADD     #-32,R4
LC0EA5DE:
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
    BRA     LC0EA650
    ADD     #32,R6
LC0EA5F8:
    DT      R3
    ADD     #1,R11
    MOV.L   PL0,R13
    JSR     @R13
    DT      R3
    BT/S    FS3
    ROTCL   R9
    BRA     LC0EA6A4
    NOP
FS3:
LC0EA604:
    MOV.L   @R4,R0
    MOV     R4,R14
    TST     #1,R0
    ADD     #32,R4
    BF/S    LC0EA616
    FLDI1   FR7
    ADD     #-24,R4
    MOV.L   @(4,R14),R14
    ADD     R4,R14
LC0EA616:
    FMOV.S  @R14+,FR4
    FMOV.S  @R14+,FR5
LC0EA61A:
    FMOV.S  @R14+,FR6
    MOV     #32,R1
    MOV.L   @R4,R0
    ADD     #32,R4
    PREF    @R4
    FIPR    FV12,FV4
    TST     #1,R0
    ADD     #-32,R4
    BF/S    LC0EA636
    MOV     R4,R14
    MOV     #8,R1
    MOV.L   @(4,R14),R14
    ADD     #8,R14
    ADD     R4,R14
LC0EA636:
    FLDS    FR7,FPUL
    STS     FPUL,R0
    CMP/HI  R0,R12
    ADD     #1,R11
    BT/S    FS4
    ROTCL   R9
    BRA     LC0EA6E0
    NOP
FS4:
    DT      R3
    FLDI1   FR7
    BT      LC0EA650
    ADD     R1,R4
    FMOV.S  @R14+,FR4
    BRA     LC0EA61A
    FMOV.S  @R14+,FR5
LC0EA650:
    MOV.L   @R4+,R0
    CMP/PL  R0
    BF/S    LC0EA660
    TST     #128,R0
    BT      LC0EA65C
    BRA     LC0EA4D8
LC0EA65C:
    MOV.L   @R4+,R3
    ADD     #-4,R4
LC0EA660:
    LDS.L   @R15+,PR
    MOV     #1,R0
    MOV.L   @R15+,R11
    ADD     #-4,R4
    MOV.L   @R15+,R10
    RTS
    OR      R0,R12
LC0EA66E:
    MOV.L   PL2,R13
    JSR     @R13
    DT      R3
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA67C
    ADD     #-24,R4
LC0EA67C:
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA686
    ADD     #-24,R4
LC0EA686:
    MOV.L   PL0,R13
    JSR     @R13
    NOP
    MOV.L   PL2,R13
    JSR     @R13
    MOV     #0,R11
    MOV     #1,R11
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    MOV     #0,R0
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0EA6A0
    ADD     #24,R4
LC0EA6A0:
    BRA     LC0EA73C
    NOP
LC0EA6A4:
    MOV.L   PL2,R13
    JSR     @R13
    MOV     #1,R11
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA6B2
    ADD     #-24,R4
LC0EA6B2:
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA6BC
    ADD     #-24,R4
LC0EA6BC:
    MOV.L   PL0,R13
    JSR     @R13
    NOP
    MOV.L   PL2,R13
    JSR     @R13
    MOV     #0,R11
    MOV     #1,R11
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    MOV     #0,R0
    CLRT
    MOV.L   PL4,R13
    JSR     @R13
    MOV     #1,R0
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0EA6DC
    ADD     #24,R4
LC0EA6DC:
    BRA     LC0EA73C
    NOP
LC0EA6E0:
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA6EA
    ADD     #-24,R4
LC0EA6EA:
    MOV.L   PL0,R13
    JSR     @R13
    NOP
LC0EA6EE:
    MOV.L   PL2,R13
    JSR     @R13
    NOP
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA6FC
    ADD     #-24,R4
LC0EA6FC:
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA706
    ADD     #-24,R4
LC0EA706:
    ADD     #-8,R4
    MOV.L   @(4,R4),R0
    TST     #1,R0
    BT      LC0EA710
    ADD     #-24,R4
LC0EA710:
    MOV.L   PL0,R13
    JSR     @R13
    NOP
    MOV.L   PL2,R13
    JSR     @R13
    ADD     #-2,R11
    MOV.L   PL0,R13
    JSR     @R13
    NOP
    MOV.L   PL2,R13
    JSR     @R13
    ADD     #1,R11
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0EA72A
    ADD     #24,R4
LC0EA72A:
    ADD     #1,R11
    MOV     R12,R0
    TST     #1,R0
    BT/S    LC0EA752
    MOV     R9,R0
    MOV.L   PL5,R13
    JSR     @R13
    NOP
    BRA     LC0EA752
    MOV     R9,R0
LC0EA73C:
    MOV.L   PL0,R13
    JSR     @R13
    ADD     #1,R11
    MOV.L   PL2,R13
    JSR     @R13
    ROTCL   R9
    MOV     R12,R0
    TST     #1,R0
    BT/S    LC0EA752
    MOV     R9,R0
    MOV.L   PL5,R13
    JSR     @R13
    NOP
    MOV     R9,R0
LC0EA752:
    AND     #7,R0
    SHLL2   R0
    BRAF    R0
    NOP
    NOP
    NOP
    BRA     LC0EA77A
    NOP
    BRA     LC0EA798
    NOP
    BRA     LC0EA7B2
    NOP
    BRA     LC0EA7C2
    NOP
    BRA     LC0EA7E2
    NOP
    BRA     LC0EA7F0
    NOP
    NOP
    NOP
LC0EA77A:
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-2,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL4,R13
    JSR     @R13
    ADD     #-1,R0
    MOV     R11,R0
    DT      R3
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
    BF      LC0EA73C
    BRA     LC0EA650
    NOP
LC0EA798:
    CLRT
    MOV.L   PL4,R13
    JSR     @R13
    MOV     R11,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
    DT      R3
    MOV.L   PL4,R13
    JSR     @R13
    MOV     R11,R0
    BT      FS5
    BRA     LC0EA73C
    NOP
FS5:
    BRA     LC0EA650
    NOP
LC0EA7B2:
    MOV     R11,R0
    SETT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-2,R0
    DT      R3
    BT      LC0EA7DE
    BRA     LC0EA604
    NOP
LC0EA7C2:
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-2,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL4,R13
    JSR     @R13
    ADD     #-1,R0
    DT      R3
    MOV.L   PL4,R13
    JSR     @R13
    MOV     R11,R0
    BT      LC0EA7DE
    BRA     LC0EA4F6
    ADD     #1,R11
LC0EA7DE:
    BRA     LC0EA650
    NOP
LC0EA7E2:
    MOV     R11,R0
    DT      R3
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
    BT      FS6
    BRA     LC0EA73C
    NOP
FS6:
    BRA     LC0EA650
    NOP
LC0EA7F0:
    MOV     R11,R0
    TST     #1,R0
    BT      LC0EA812
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-2,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
    BRA     LC0EA822
    NOP
LC0EA812:
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-2,R0
    MOV     R11,R0
    CLRT
    MOV.L   PL3,R13
    JSR     @R13
    ADD     #-1,R0
LC0EA822:
    DT      R3
    MOV.L   PL4,R13
    JSR     @R13
    MOV     R11,R0
    BT      FS7
    BRA     LC0EA73C
    NOP
FS7:
    BRA     LC0EA650
    NOP
    .ALIGN 4
PL0:
    .DATA.L H'0C0EA840
PL1:
    .DATA.L H'0C0EA880
PL2:
    .DATA.L H'0C0EA8C0
PL3:
    .DATA.L H'0C0EA960
PL4:
    .DATA.L H'0C0EA920
PL5:
    .DATA.L H'0C0EA8E0
}

void nl_display_strip_nc_spd_ofst(void)
{
    ia_FUN_0c0ea4c0();
}
