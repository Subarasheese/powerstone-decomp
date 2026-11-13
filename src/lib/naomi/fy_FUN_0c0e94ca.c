/* INLINE-ASM: renderer hand-written assembly: its inputs are registers (r4 command pointer, r5, r6, r10, r11, r12) and the callees it reaches by bsr take the rest; the four bsr calls became mov.l/jsr through r0 (dead at those points) because the C is linked far from the original and bsr cannot reach */
/* Renderer command loop: walks the command words at r4, copies state words into the output queue at r6 and dispatches by flag bits to the triangle and strip helpers until a non-positive command ends it. */
void nl_display_triangle_spd(void);
void nl_display_strip_spd(void);
void nl_display_strip_nc_spd(void);
void nl_display_triangle_nc_spd(void);
#pragma inline_asm(FUN_0c0e94ca)
int FUN_0c0e94ca(void)
{
    .IMPORT _nl_display_triangle_spd
    .IMPORT _nl_display_strip_spd
    .IMPORT _nl_display_strip_nc_spd
    .IMPORT _nl_display_triangle_nc_spd
    MOV R15,R1
    FMOV.S FR15,@-R15
    FMOV.S FR14,@-R15
    FMOV.S FR13,@-R15
    FMOV.S FR12,@-R15
    FMOV.S FR11,@-R15
    FMOV.S FR10,@-R15
    FMOV.S FR9,@-R15
    FMOV.S FR8,@-R15
    STS.L PR,@-R15
    MOV.L PC0E96A0,R0
    MOV.L R0,@-R15
    MOV.L @R4+,R0
L94DA:
    CMP/PL R0
    MOV.L @R15,R9
    BT/S L9500
    CMP/PZ R0
    MOV R0,R8
    MOV R11,R0
    MOV.L R5,@(R0,R10)
    ADD #4,R15
    LDS.L @R15+,PR
    FMOV.S @R15+,FR8
    FMOV.S @R15+,FR9
    FMOV.S @R15+,FR10
    FMOV.S @R15+,FR11
    FMOV.S @R15+,FR12
    FMOV.S @R15+,FR13
    FMOV.S @R15+,FR14
    RTS
    FMOV.S @R15+,FR15
    NOP
L9500:
    MOV R0,R1
    MOV #-5,R2
    MOV.L @R9+,R3
    AND #64,R0
    SHLD R2,R0
    MOV #-3,R2
    AND R2,R3
    OR R0,R3
    ADD #32,R4
    MOV #-49,R2
    AND R2,R3
    MOV R1,R0
    MOV R15,R2
    ADD #40,R2
    LDS R3,FPUL
    MOV.L @(40,R2),R2
    CMP/PZ R2
    MOV #27,R2
    BT/S L952A
    AND #3,R0
    XOR #1,R0
L952A:
    SHLD R2,R0
    MOV #3,R3
    FSCHG
    SHLD R2,R3
    PREF @R4
    NOT R3,R3
    MOV.L @R9+,R2
    AND R3,R2
    FSTS FPUL,FR0
    OR R0,R2
    LDS R2,FPUL
    ADD #-32,R4
    FSTS FPUL,FR1
    ADD #16,R6
    FMOV.S @R9+,FR2
    FMOV.S FR2,@-R6
    ADD #32,R5
    FMOV.S FR0,@-R6
    FSCHG
    PREF @R6
    ADD #32,R6
    ROTCR R12
    MOV R1,R0
    BT/S L9570
    SHLL R12
    TST #8,R0
    BT L9568
    MOV.L K97E0,R0
    JSR @R0
    NOP
    BRA L94DA
    MOV.L @R4+,R0
L9568:
    MOV.L K96C0,R0
    JSR @R0
    NOP
    BRA L94DA
    MOV.L @R4+,R0
L9570:
    MOV #0,R1
    TST #64,R0
    ADDC R1,R12
    TST #16,R0
    BT/S L9584
    TST #8,R0
    MOV.L K98E0,R0
    JSR @R0
    NOP
    BRA L94DA
    MOV.L @R4+,R0
L9584:
    BT L9590
    MOV.L K9EA0,R0
    JSR @R0
    NOP
    BRA L94DA
    MOV.L @R4+,R0
    NOP
L9590:
    BRA L9590
    NOP
    .ALIGN 4
PC0E96A0: .DATA.L H'0C7FD240
K97E0: .DATA.L _nl_display_triangle_spd
K96C0: .DATA.L _nl_display_strip_spd
K98E0: .DATA.L _nl_display_strip_nc_spd
K9EA0: .DATA.L _nl_display_triangle_nc_spd
}
