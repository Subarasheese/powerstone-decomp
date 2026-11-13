/* INLINE-ASM: renderer hand-written assembly: command pointer r4, vertex counter r3, output queue r5/r6, scratch r8/r14, FV/FR registers and FPSCR.SZ (fschg) are the interface; no C form exists */
/* Renderer strip loop: reads vertices (inline records or through a pointer, bit 0 of the first word), transforms them by XMTRX, optionally mixes in a colour offset from the stack frame with fipr, packs the colour bytes and writes the vertex records to the queue at r6 with pref, until the end-of-strip flags of the next command. */
#pragma inline_asm(FUN_0c0ec3c0)
void FUN_0c0ec3c0(void)
{
    MOV.L @R4+,R3
    ADD #32,R6
    FSCHG
LC3C6:
    MOV.L @R4,R0
    TST #1,R0
    MOV R4,R14
    BF/S LC3D6
    ADD #32,R4
    MOV.L @(4,R14),R14
    ADD #-24,R4
    ADD R4,R14
LC3D6:
    FMOV.S @R14+,FR4
    FMOV.S @R14,FR6
    MOV R14,R1
    FLDI1 FR7
    ADD #16,R1
    MOV.B @(7,R14),R0
    MOV.L @(8,R14),R8
    CMP/PL R0
    EXTU.B R8,R0
    BF/S LC438
    FTRV XMTRX,FV4
    MOV.L @(4,R14),R2
    EXTS.B R2,R0
    SHLR8 R2
    LDS R0,FPUL
    EXTS.B R2,R0
    FLOAT FPUL,FR1
    SHLR8 R2
    LDS R0,FPUL
    EXTS.B R2,R0
    FLOAT FPUL,FR0
    LDS R0,FPUL
    FLOAT FPUL,FR2
    FLDI0 FR3
    MOV R15,R2
    FSCHG
    ADD #24,R2
    FMOV.S @R2+,FR8
    MOV #60,R0
    FMOV.S @R2+,FR9
    SHLL8 R0
    FMOV.S @R2+,FR10
    OR #1,R0
    FIPR FV8,FV0
    SHLL8 R0
    FMOV.S @R2+,FR2
    OR #2,R0
    FLDI0 FR0
    SHLL8 R0
    FSCHG
    OR #4,R0
    LDS R0,FPUL
    EXTU.B R8,R0
    FCMP/GT FR0,FR3
    FSTS FPUL,FR11
    BF LC436
    FMUL FR11,FR3
    FADD FR3,FR2
LC436:
    SETT
LC438:
    ADD #32,R4
    LDS R0,FPUL
    SHLR8 R8
    EXTU.B R8,R0
    PREF @R4
    SHLR8 R8
    FLOAT FPUL,FR11
    ADD #-32,R4
    FLDI1 FR7
    FDIV FR4,FR7
    LDS R0,FPUL
    FLOAT FPUL,FR10
    EXTU.B R8,R0
    LDS R0,FPUL
    SHLR8 R8
    FLOAT FPUL,FR9
    LDS R8,FPUL
    ADD #-8,R6
    FLOAT FPUL,FR8
    FMOV.S @R1,FR0
    MOV #-1,R0
    FLDI0 FR3
    FMUL FR15,FR11
    BF/S LC470
    FMOV.S FR0,@-R6
    FMUL FR2,FR9
    FMUL FR2,FR10
    FMUL FR2,FR11
LC470:
    DT R3
    FLDI0 FR2
    FMUL FR7,FR6
    BT LC47A
    MOV R6,R0
LC47A:
    FMUL FR7,FR5
    FMOV.S FR6,@-R6
    ADD #64,R5
    FMOV.S FR4,@-R6
    FMUL FR14,FR10
    MOV.L R0,@R6
    PREF @R6
    MOV R4,R14
    MOV.L @(4,R14),R14
    ADD #64,R6
    MOV.L @R4+,R0
    FMUL FR13,FR9
    FMOV.S FR2,@-R6
    FMUL FR12,FR8
    FMOV.S FR2,@-R6
    ADD R4,R14
    FMOV.S FR10,@-R6
    ADD #4,R14
    FMOV.S FR8,@-R6
    BT/S LC4B4
    PREF @R6
    TST #1,R0
    ADD #64,R6
    BT/S LC3D6
    ADD #4,R4
    MOV R4,R14
    ADD #24,R4
    BRA LC3D6
    ADD #-8,R14
LC4B4:
    ADD #64,R6
    CMP/PL R0
    BF/S LC4C2
    TST #128,R0
    BF/S LC3C6
    MOV.L @R4+,R3
    ADD #-4,R4
LC4C2:
    FSCHG
    ADD #-4,R4
    RTS
    ADD #-32,R6
}
