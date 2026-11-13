/* INLINE-ASM: renderer hand-written assembly: registers (r3 count, r4 vertex pointer, r9, r11, r12, T flag) are the interface and the callees read T and r0; the bsr calls became mov.l/jsr through r14 (saved and restored here) because the C is linked far from the original and bsr cannot reach */
/* Renderer clipping loop: transforms three vertices per triangle with FUN_0c0e7f60, then depending on the clip bits in r9 skips the triangle, passes it whole (7), or clips it with the FUN_0c0e7be0 / 7c80 / 7cc0 / 7ce0 / 7d20 / 7d60 helpers; r3 triangles in a row, r12 bit 0 is set at the end. */
void FUN_0c0e7f60(void);
void FUN_0c0e7be0(void);
void FUN_0c0e7cc0(void);
void FUN_0c0e7ce0(void);
void FUN_0c0e7c80(void);
void FUN_0c0e7d20(void);
void FUN_0c0e7d60(void);
#pragma inline_asm(FUN_0c0e7e00)
int FUN_0c0e7e00(void)
{
    .IMPORT _FUN_0c0e7f60
    .IMPORT _FUN_0c0e7be0
    .IMPORT _FUN_0c0e7cc0
    .IMPORT _FUN_0c0e7ce0
    .IMPORT _FUN_0c0e7c80
    .IMPORT _FUN_0c0e7d20
    .IMPORT _FUN_0c0e7d60
    MOV.L R10,@-R15
    MOV.L R11,@-R15
    STS.L PR,@-R15
    MOV.L R14,@-R15
    MOV.L @R4+,R3
L7E08:
    MOV.L K7F60,R14
    JSR @R14
    MOV #0,R9
    MOV R9,R0
    CMP/EQ #0,R0
    BT L7E6E
    CMP/EQ #7,R0
    BT L7E8C
    MOV.L K7BE0,R14
    JSR @R14
    MOV #0,R11
    MOV.L K7CC0,R14
    JSR @R14
    NOP
    MOV.L K7BE0,R14
    JSR @R14
    MOV #1,R11
    MOV.L K7CC0,R14
    JSR @R14
    NOP
    MOV.L K7BE0,R14
    JSR @R14
    MOV #2,R11
    MOV.L K7CC0,R14
    JSR @R14
    NOP
    MOV R12,R0
    TST #1,R0
    BT/S L7E3A
    SHLL2 R9
    MOV.L K7CE0,R14
    JSR @R14
    NOP
L7E3A:
    BRAF R9
    NOP
    NOP
    NOP
    BRA L7EAE
    NOP
    BRA L7ECC
    NOP
    BRA L7EEC
    NOP
    BRA L7F06
    NOP
    BRA L7F26
    NOP
    BRA L7F40
    NOP
    NOP
    NOP
L7E5E:
    DT R3
    BF L7E08
    MOV #1,R0
    MOV.L @R15+,R14
    LDS.L @R15+,PR
    OR R0,R12
    MOV.L @R15+,R11
    RTS
    MOV.L @R15+,R10
L7E6E:
    MOV R3,R9
    MOV.L K7BE0,R14
    JSR @R14
    MOV #3,R3
    MOV.L K7C80,R14
    JSR @R14
    NOP
    MOV.L K7BE0,R14
    JSR @R14
    NOP
    MOV.L K7C80,R14
    JSR @R14
    NOP
    MOV.L K7BE0,R14
    JSR @R14
    NOP
    MOV.L K7C80,R14
    JSR @R14
    NOP
    BRA L7E5E
    MOV R9,R3
L7E8C:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BT L7E96
    ADD #24,R4
L7E96:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BT L7EA0
    ADD #24,R4
L7EA0:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BT L7EAA
    ADD #24,R4
L7EAA:
    BRA L7E5E
    NOP
L7EAE:
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #1,R0
    CLRT
    MOV #2,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    SETT
    MOV.L K7D60,R14
    JSR @R14
    MOV #1,R0
    BRA L7E5E
    NOP
L7ECC:
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV #1,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV #2,R11
    MOV.L K7D20,R14
    JSR @R14
    MOV #2,R0
    SETT
    MOV.L K7D60,R14
    JSR @R14
    MOV #1,R0
    BRA L7E5E
    NOP
L7EEC:
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV #1,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    SETT
    MOV #2,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    BRA L7E5E
    NOP
L7F06:
    CLRT
    MOV #1,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #1,R0
    CLRT
    MOV #2,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    SETT
    MOV.L K7D20,R14
    JSR @R14
    MOV #2,R0
    BRA L7E5E
    NOP
L7F26:
    CLRT
    MOV #1,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV.L K7D20,R14
    JSR @R14
    MOV #1,R0
    SETT
    MOV #2,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #1,R0
    BRA L7E5E
    NOP
L7F40:
    CLRT
    MOV #2,R11
    MOV.L K7D60,R14
    JSR @R14
    MOV #0,R0
    CLRT
    MOV.L K7D60,R14
    JSR @R14
    MOV #1,R0
    SETT
    MOV.L K7D20,R14
    JSR @R14
    MOV #2,R0
    BRA L7E5E
    NOP
    .ALIGN 4
K7F60: .DATA.L _FUN_0c0e7f60
K7BE0: .DATA.L _FUN_0c0e7be0
K7CC0: .DATA.L _FUN_0c0e7cc0
K7CE0: .DATA.L _FUN_0c0e7ce0
K7C80: .DATA.L _FUN_0c0e7c80
K7D20: .DATA.L _FUN_0c0e7d20
K7D60: .DATA.L _FUN_0c0e7d60
}
