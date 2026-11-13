/* INLINE-ASM: hand-written FPU routine (vertex through XMTRX with ftrv/fipr, packed colour and table lookups, T flag and r12/r13 from the caller) that C cannot express */
#pragma inline_asm(nl_objasm_transform_vtx_bump)
int nl_objasm_transform_vtx_bump(void)
{
    FMOV.S @R4+,FR4
    FMOV.S @R4+,FR5
    FMOV.S @R4+,FR6
    FLDI1 FR7
    FMOV.S @R4+,FR2
    FMOV.S @R4+,FR0
    FMOV.S @R4+,FR1
    FTRV XMTRX,FV4
    FLDI0 FR3
    FMOV.S @R4+,FR10
    MOV R13,R0
    FMOV.S @R4+,FR8
    SHLR16 R0
    FMOV.S @R4+,FR9
    FIPR FV12,FV0
    FMOV.S @R4+,FR2
    FSUB FR15,FR15
    FMOV.S @R4+,FR0
    SHLL16 R0
    FLDS FR7,FPUL
    FLDI1 FR7
    FDIV FR4,FR7
    FLDI0 FR11
    FCMP/GT FR11,FR3
    FSTS FPUL,FR4
    FIPR FV12,FV8
    FMOV.S @R4+,FR1
    BT Lc0ed3ba
    FLDI0 FR3
Lc0ed3ba:
    FMOV FR3,FR8
    FMUL FR8,FR8
    FLDI1 FR9
    FIPR FV0,FV12
    FLDI0 FR10
    FCMP/GT FR11,FR10
    MOV R13,R2
    FSUB FR8,FR9
    EXTU.B R2,R2
    BF Lc0ed3d0
    FNEG FR11
Lc0ed3d0:
    MOVT R0
    FCMP/GT FR15,FR10
    LDS R2,FPUL
    FSQRT FR9
    BF Lc0ed3dc
    FNEG FR15
Lc0ed3dc:
    MOVT R1
    FCMP/GT FR11,FR15
    FMOV FR15,FR10
    SHLL2 R1
    BF Lc0ed3ec
    FMOV FR11,FR15
    OR #2,R0
    FMOV FR10,FR11
Lc0ed3ec:
    OR R0,R1
    FLOAT FPUL,FR10
    SHLL R1
    MOVA D2,R0
    MOV.W @(R0,R1),R1
    MOVA D1,R0
    FMOV.S @R0+,FR0
    FDIV FR11,FR15
    SHLR R1
    FMOV.S @R0+,FR11
    FMUL FR10,FR3
    MOV.L @R0,R2
    MOV R13,R0
    SHLR16 R0
    FMUL FR10,FR9
    SHLL16 R0
    FTRC FR3,FPUL
    OR R0,R1
    STS FPUL,R0
    ADD #32,R4
    FTRC FR9,FPUL
    PREF @R4
    SHLL16 R0
    ADD R0,R1
    STS FPUL,R0
    ADD #32,R4
    FMAC FR0,FR15,FR11
    PREF @R4
    FTRC FR11,FPUL
    ADD #-64,R4
    SHLL8 R0
    FLDI0 FR15
    ADD R0,R1
    STS FPUL,R0
    AND #255,R0
    FLDS FR4,FPUL
    MOV.B @(R0,R2),R0
    BF Lc0ed43a
    NEG R0,R0
Lc0ed43a:
    ADD R1,R0
    STS FPUL,R2
    MOV R0,R1
    FMOV.S @R4+,FR2
    FMOV.S @R4+,FR3
    RTS
    CMP/HI R2,R12
    .ALIGN 4
D1: .DATA.L H'43000000
    .DATA.L H'3F000000
    .DATA.L H'0C0EFB1C
    .DATA.L H'00000000
D2: .DATA.W H'0000
    .DATA.W H'0101
    .DATA.W H'0081
    .DATA.W H'0080
    .DATA.W H'01FF
    .DATA.W H'0100
    .DATA.W H'0180
    .DATA.W H'0181
}

