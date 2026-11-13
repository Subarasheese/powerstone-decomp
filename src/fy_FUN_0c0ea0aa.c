/* INLINE-ASM: NL object assembly: the clip/send loop of the display list builder, reading and updating r4-r6, r9-r12 and fr (live registers), looping through sibling fragments with SZ toggles; no C form. */
#pragma inline_asm(ia_FUN_0c0ea0aa)
static void ia_FUN_0c0ea0aa(void)
{
    FMOV.S  FR11,@-R15
    FMOV.S  FR10,@-R15
    FMOV.S  FR9,@-R15
    FMOV.S  FR8,@-R15
    STS.L   PR,@-R15
    MOV.L   PL0,R0
    MOV.L   R0,@-R15
    MOV.L   @R4+,R0
LC0EA0BA:
    CMP/PL  R0
    MOV.L   @R15,R9
    BT/S    LC0EA0E0
    CMP/PZ  R0
    MOV     R0,R8
    MOV     R11,R0
    MOV.L   R5,@(R0,R10)
    ADD     #4,R15
    LDS.L   @R15+,PR
    FMOV.S  @R15+,FR8
    FMOV.S  @R15+,FR9
    FMOV.S  @R15+,FR10
    FMOV.S  @R15+,FR11
    FMOV.S  @R15+,FR12
    FMOV.S  @R15+,FR13
    FMOV.S  @R15+,FR14
    RTS
    FMOV.S  @R15+,FR15
    NOP
LC0EA0E0:
    MOV     R0,R1
    MOV     #-5,R2
    MOV.L   @R9+,R3
    AND     #64,R0
    SHLD    R2,R0
    MOV     #-3,R2
    AND     R2,R3
    OR      R0,R3
    ADD     #32,R4
    MOV     #-49,R2
    AND     R2,R3
    MOV     R1,R0
    MOV     R15,R2
    ADD     #40,R2
    LDS     R3,FPUL
    MOV.L   @(40,R2),R2
    CMP/PZ  R2
    MOV     #27,R2
    BT/S    LC0EA10A
    AND     #3,R0
    XOR     #1,R0
LC0EA10A:
    SHLD    R2,R0
    MOV     #3,R3
    FSCHG
    SHLD    R2,R3
    PREF    @R4
    NOT     R3,R3
    MOV.L   @R9+,R2
    AND     R3,R2
    FSTS    FPUL,FR0
    OR      R0,R2
    LDS     R2,FPUL
    ADD     #-32,R4
    FSTS    FPUL,FR1
    ADD     #16,R6
    FMOV.S  @R9+,FR2
    FMOV.S  FR2,@-R6
    ADD     #32,R5
    FMOV.S  FR0,@-R6
    FSCHG
    PREF    @R6
    ADD     #32,R6
    ROTCR   R12
    MOV     R1,R0
    BT/S    LC0EA150
    SHLL    R12
    TST     #8,R0
    BT      LC0EA148
    MOV.L   PL1,R7
    JSR     @R7
    NOP
    BRA     LC0EA0BA
    MOV.L   @R4+,R0
LC0EA148:
    MOV.L   PL2,R7
    JSR     @R7
    NOP
    BRA     LC0EA0BA
    MOV.L   @R4+,R0
LC0EA150:
    MOV     #0,R1
    TST     #64,R0
    ADDC    R1,R12
    TST     #16,R0
    BT/S    LC0EA164
    TST     #8,R0
    MOV.L   PL3,R7
    JSR     @R7
    NOP
    BRA     LC0EA0BA
    MOV.L   @R4+,R0
LC0EA164:
    BT      LC0EA170
    MOV.L   PL4,R7
    JSR     @R7
    NOP
    BRA     LC0EA0BA
    MOV.L   @R4+,R0
    NOP
LC0EA170:
    BRA     LC0EA170
    NOP
    .ALIGN 4
PL0:
    .DATA.L H'0C7FD240
PL1:
    .DATA.L H'0C0EA3C0
PL2:
    .DATA.L H'0C0EA2A0
PL3:
    .DATA.L H'0C0EA4C0
PL4:
    .DATA.L H'0C0EAB00
}

void FUN_0c0ea0aa(void)
{
    ia_FUN_0c0ea0aa();
}
