/* INLINE-ASM: NL object assembly: loops over a clip list calling sibling assembly fragments with live registers (r3, r4, r9, r11, r12, the T flag) and dispatching through braf, no C form. */
#pragma inline_asm(ia_FUN_0c0e8f60)
static void ia_FUN_0c0e8f60(void)
{
    MOV.L   R10,@-R15
    MOV.L   R11,@-R15
    STS.L   PR,@-R15
    MOV.L   @R4+,R3
LC0E8F68:
    MOV.L   PL0,R14
    JSR     @R14
    MOV     #0,R9
    MOV     R9,R0
    CMP/EQ  #0,R0
    BT      LC0E8FCE
    CMP/EQ  #7,R0
    BT      LC0E8FEC
    MOV.L   PL1,R14
    JSR     @R14
    MOV     #0,R11
    MOV.L   PL2,R14
    JSR     @R14
    NOP
    MOV.L   PL1,R14
    JSR     @R14
    MOV     #1,R11
    MOV.L   PL2,R14
    JSR     @R14
    NOP
    MOV.L   PL1,R14
    JSR     @R14
    MOV     #2,R11
    MOV.L   PL2,R14
    JSR     @R14
    NOP
    MOV     R12,R0
    TST     #1,R0
    BT/S    LC0E8F9A
    SHLL2   R9
    MOV.L   PL3,R14
    JSR     @R14
    NOP
LC0E8F9A:
    BRAF    R9
    NOP
    NOP
    NOP
    BRA     LC0E900E
    NOP
    BRA     LC0E902C
    NOP
    BRA     LC0E904C
    NOP
    BRA     LC0E9066
    NOP
    BRA     LC0E9086
    NOP
    BRA     LC0E90A0
    NOP
    NOP
    NOP
LC0E8FBE:
    DT      R3
    BF      LC0E8F68
    MOV     #1,R0
    LDS.L   @R15+,PR
    OR      R0,R12
    MOV.L   @R15+,R11
    RTS
    MOV.L   @R15+,R10
LC0E8FCE:
    MOV     R3,R9
    MOV.L   PL1,R14
    JSR     @R14
    MOV     #3,R3
    MOV.L   PL4,R14
    JSR     @R14
    NOP
    MOV.L   PL1,R14
    JSR     @R14
    NOP
    MOV.L   PL4,R14
    JSR     @R14
    NOP
    MOV.L   PL1,R14
    JSR     @R14
    NOP
    MOV.L   PL4,R14
    JSR     @R14
    NOP
    BRA     LC0E8FBE
    MOV     R9,R3
LC0E8FEC:
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0E8FF6
    ADD     #24,R4
LC0E8FF6:
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0E9000
    ADD     #24,R4
LC0E9000:
    MOV.L   @R4,R0
    TST     #1,R0
    ADD     #8,R4
    BT      LC0E900A
    ADD     #24,R4
LC0E900A:
    BRA     LC0E8FBE
    NOP
LC0E900E:
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #1,R0
    CLRT
    MOV     #2,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    SETT
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #1,R0
    BRA     LC0E8FBE
    NOP
LC0E902C:
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV     #1,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV     #2,R11
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #2,R0
    SETT
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #1,R0
    BRA     LC0E8FBE
    NOP
LC0E904C:
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV     #1,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    SETT
    MOV     #2,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    BRA     LC0E8FBE
    NOP
LC0E9066:
    CLRT
    MOV     #1,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #1,R0
    CLRT
    MOV     #2,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    SETT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #2,R0
    BRA     LC0E8FBE
    NOP
LC0E9086:
    CLRT
    MOV     #1,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #1,R0
    SETT
    MOV     #2,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #1,R0
    BRA     LC0E8FBE
    NOP
LC0E90A0:
    CLRT
    MOV     #2,R11
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #0,R0
    CLRT
    MOV.L   PL6,R14
    JSR     @R14
    MOV     #1,R0
    SETT
    MOV.L   PL5,R14
    JSR     @R14
    MOV     #2,R0
    BRA     LC0E8FBE
    NOP
    .ALIGN 4
PL0:
    .DATA.L H'0C0E90C0
PL1:
    .DATA.L H'0C0E8D20
PL2:
    .DATA.L H'0C0E8E20
PL3:
    .DATA.L H'0C0E8E40
PL4:
    .DATA.L H'0C0E8DE0
PL5:
    .DATA.L H'0C0E8E80
PL6:
    .DATA.L H'0C0E8EC0
}

void FUN_0c0e8f60(void)
{
    ia_FUN_0c0e8f60();
}
