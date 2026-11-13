/* INLINE-ASM: hand-written assembly routine (register-based calling convention, FPU transfer-size mode, no C form) */
/* Hand-written routine that calls a chain of helper routines selected by a mode code, once per list entry. */
#pragma inline_asm(nl_display_triangle_nc_spd_ofst)
int nl_display_triangle_nc_spd_ofst(void)
{
    MOV.L R10,@-R15
    MOV.L R11,@-R15
    STS.L PR,@-R15
    MOV.L @R4+,R3
L_0C0EAB08:
    MOV #0,R9
    MOV.L R13,@-R15
    MOV.L P_0,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R9,R0
    CMP/EQ #0,R0
    BF S_1
    BRA L_0C0EAB6E
    NOP
S_1:
    CMP/EQ #7,R0
    BF S_2
    BRA L_0C0EAB8C
    NOP
S_2:
    MOV #0,R11
    MOV.L R13,@-R15
    MOV.L P_1,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_2,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #1,R11
    MOV.L R13,@-R15
    MOV.L P_3,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_4,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #2,R11
    MOV.L R13,@-R15
    MOV.L P_5,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_6,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R12,R0
    TST #1,R0
    BF/S S_3
    SHLL2 R9
    BRA L_0C0EAB3A
    NOP
S_3:
    NOP
    MOV.L R13,@-R15
    MOV.L P_7,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0EAB3A:
    BRAF R9
    NOP
    NOP
    NOP
    BRA L_0C0EABAE
    NOP
    BRA L_0C0EABCC
    NOP
    BRA L_0C0EABEC
    NOP
    BRA L_0C0EAC06
    NOP
    BRA L_0C0EAC26
    NOP
    BRA L_0C0EAC40
    NOP
    NOP
    NOP
L_0C0EAB5E:
    DT R3
    BT S_4
    BRA L_0C0EAB08
    NOP
S_4:
    MOV #1,R0
    LDS.L @R15+,PR
    OR R0,R12
    MOV.L @R15+,R11
    RTS
    MOV.L @R15+,R10
L_0C0EAB6E:
    MOV R3,R9
    MOV #3,R3
    MOV.L R13,@-R15
    MOV.L P_8,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_9,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_10,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_11,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_12,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_13,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_1
    NOP
P_0:
    .DATA.W H'AC60
    .DATA.W H'0C0E
P_1:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_2:
    .DATA.W H'A8C0
    .DATA.W H'0C0E
P_3:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_4:
    .DATA.W H'A8C0
    .DATA.W H'0C0E
P_5:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_6:
    .DATA.W H'A8C0
    .DATA.W H'0C0E
P_7:
    .DATA.W H'A8E0
    .DATA.W H'0C0E
P_8:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_9:
    .DATA.W H'A880
    .DATA.W H'0C0E
P_10:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_11:
    .DATA.W H'A880
    .DATA.W H'0C0E
P_12:
    .DATA.W H'A840
    .DATA.W H'0C0E
P_13:
    .DATA.W H'A880
    .DATA.W H'0C0E
J_1:
    BRA L_0C0EAB5E
    MOV R9,R3
L_0C0EAB8C:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_5
    BRA L_0C0EAB96
    NOP
S_5:
    ADD #24,R4
L_0C0EAB96:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_6
    BRA L_0C0EABA0
    NOP
S_6:
    ADD #24,R4
L_0C0EABA0:
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_7
    BRA L_0C0EABAA
    NOP
S_7:
    ADD #24,R4
L_0C0EABAA:
    BRA L_0C0EAB5E
    NOP
L_0C0EABAE:
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_14,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_15,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #2,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_16,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_17,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
L_0C0EABCC:
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_18,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_19,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #2,R11
    MOV #2,R0
    MOV.L R13,@-R15
    MOV.L P_20,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_21,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
L_0C0EABEC:
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_22,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_23,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #2,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_24,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
L_0C0EAC06:
    CLRT
    MOV #1,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_25,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_26,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #2,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_27,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #2,R0
    MOV.L R13,@-R15
    MOV.L P_28,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
L_0C0EAC26:
    CLRT
    MOV #1,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_29,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_2
    NOP
    .DATA.W H'0009
P_14:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_15:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_16:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_17:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_18:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_19:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_20:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_21:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_22:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_23:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_24:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_25:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_26:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_27:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_28:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_29:
    .DATA.W H'A960
    .DATA.W H'0C0E
    .DATA.W H'0009
J_2:
    CLRT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_30,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #2,R11
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_31,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
L_0C0EAC40:
    CLRT
    MOV #2,R11
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_32,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_33,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    SETT
    MOV #2,R0
    MOV.L R13,@-R15
    MOV.L P_34,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EAB5E
    NOP
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
P_30:
    .DATA.W H'A920
    .DATA.W H'0C0E
P_31:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_32:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_33:
    .DATA.W H'A960
    .DATA.W H'0C0E
P_34:
    .DATA.W H'A920
    .DATA.W H'0C0E
}
