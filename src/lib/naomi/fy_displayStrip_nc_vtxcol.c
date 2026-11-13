/* INLINE-ASM: hand-written assembly routine (register-based calling convention, FPU transfer-size mode, no C form) */
#pragma inline_asm(displayStrip_nc_vtxcol)
int displayStrip_nc_vtxcol(void)
{
    MOV.L R10,@-R15
    MOV.L R11,@-R15
    STS.L PR,@-R15
    MOV.L @R4+,R3
L_0C0EC608:
    MOV #0,R11
    MOV #0,R9
    MOV.L R13,@-R15
    MOV.L P_0,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF/S S_1
    ROTCL R9
    BRA L_0C0EC634
    NOP
S_1:
    ADD #1,R11
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
    BF/S S_2
    ROTCL R9
    BRA L_0C0EC69E
    NOP
S_2:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_3,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0EC622:
    NOP
    MOV.L R13,@-R15
    MOV.L P_4,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF/S S_3
    ROTCL R9
    BRA L_0C0EC71E
    NOP
S_3:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_5,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_4
    BRA L_0C0EC622
    NOP
S_4:
    BRA L_0C0EC682
    NOP
L_0C0EC634:
    DT R3
    ADD #1,R11
    DT R3
    MOV.L R13,@-R15
    MOV.L P_6,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT/S S_5
    ROTCL R9
    BRA L_0C0EC6D4
    NOP
S_5:
L_0C0EC640:
    MOV.L @R4,R0
    MOV R4,R14
    TST #1,R0
    ADD #32,R4
    BT/S S_6
    FLDI1 FR7
    BRA L_0C0EC652
    NOP
S_6:
    ADD #-24,R4
    MOV.L @(4,R14),R14
    ADD R4,R14
L_0C0EC652:
    FMOV.S @R14+,FR4
    FMOV.S @R14+,FR5
    FMOV.S @R14+,FR6
    MOV #32,R1
    MOV.L @R4,R0
    ADD #32,R4
    TST #1,R0
    FTRV XMTRX,FV4
    PREF @R4
    ADD #-32,R4
    BT/S S_7
    MOV R4,R14
    BRA L_0C0EC672
    NOP
S_7:
    MOV #8,R1
    MOV.L @(4,R14),R14
    ADD #8,R14
    ADD R4,R14
L_0C0EC672:
    FLDS FR7,FPUL
    STS FPUL,R0
    CMP/HI R0,R12
    ADD #1,R11
    BT/S S_8
    ROTCL R9
    BRA L_0C0EC710
    NOP
S_8:
    DT R3
    BT S_9
    BRA L_0C0EC640
    NOP
S_9:
L_0C0EC682:
    MOV.L @R4+,R0
    CMP/PL R0
    BT/S S_10
    TST #128,R0
    BRA L_0C0EC690
    NOP
S_10:
    BT/S S_11
    MOV.L @R4+,R3
    BRA L_0C0EC608
    NOP
S_11:
    ADD #-4,R4
L_0C0EC690:
    LDS.L @R15+,PR
    MOV #1,R0
    MOV.L @R15+,R11
    ADD #-4,R4
    MOV.L @R15+,R10
    RTS
    OR R0,R12
L_0C0EC69E:
    DT R3
    MOV.L R13,@-R15
    MOV.L P_7,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_1
    NOP
    .DATA.W H'0009
P_0:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_1:
    .DATA.W H'C920
    .DATA.W H'0C0E
P_2:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_3:
    .DATA.W H'C920
    .DATA.W H'0C0E
P_4:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_5:
    .DATA.W H'C920
    .DATA.W H'0C0E
P_6:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_7:
    .DATA.W H'C960
    .DATA.W H'0C0E
    .DATA.W H'0009
J_1:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_12
    BRA L_0C0EC6AC
    NOP
S_12:
    ADD #-24,R4
L_0C0EC6AC:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_13
    BRA L_0C0EC6B6
    NOP
S_13:
    ADD #-24,R4
L_0C0EC6B6:
    NOP
    MOV.L R13,@-R15
    MOV.L P_8,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #0,R11
    MOV.L R13,@-R15
    MOV.L P_9,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #1,R11
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_10,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_14
    BRA L_0C0EC6D0
    NOP
S_14:
    ADD #24,R4
L_0C0EC6D0:
    BRA L_0C0EC76C
    NOP
L_0C0EC6D4:
    MOV #1,R11
    MOV.L R13,@-R15
    MOV.L P_11,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_15
    BRA L_0C0EC6E2
    NOP
S_15:
    ADD #-24,R4
L_0C0EC6E2:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_16
    BRA L_0C0EC6EC
    NOP
S_16:
    ADD #-24,R4
L_0C0EC6EC:
    NOP
    MOV.L R13,@-R15
    MOV.L P_12,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #0,R11
    MOV.L R13,@-R15
    MOV.L P_13,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #1,R11
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
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_17
    BRA L_0C0EC70C
    NOP
S_17:
    ADD #24,R4
L_0C0EC70C:
    BRA L_0C0EC76C
    NOP
L_0C0EC710:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_18
    BRA L_0C0EC71A
    NOP
S_18:
    ADD #-24,R4
L_0C0EC71A:
    NOP
    MOV.L R13,@-R15
    MOV.L P_16,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0EC71E:
    NOP
    MOV.L R13,@-R15
    MOV.L P_17,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_19
    BRA L_0C0EC72C
    NOP
S_19:
    ADD #-24,R4
L_0C0EC72C:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_20
    BRA L_0C0EC736
    NOP
S_20:
    ADD #-24,R4
L_0C0EC736:
    ADD #-8,R4
    MOV.L @(4,R4),R0
    TST #1,R0
    BF S_21
    BRA L_0C0EC740
    NOP
S_21:
    ADD #-24,R4
L_0C0EC740:
    NOP
    MOV.L R13,@-R15
    MOV.L P_18,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_2
    NOP
P_8:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_9:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_10:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_11:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_12:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_13:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_14:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_15:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_16:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_17:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_18:
    .DATA.W H'C860
    .DATA.W H'0C0E
J_2:
    ADD #-2,R11
    MOV.L R13,@-R15
    MOV.L P_19,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    NOP
    MOV.L R13,@-R15
    MOV.L P_20,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_21,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV.L @R4,R0
    TST #1,R0
    ADD #8,R4
    BF S_22
    BRA L_0C0EC75A
    NOP
S_22:
    ADD #24,R4
L_0C0EC75A:
    MOV R12,R0
    ADD #1,R11
    TST #1,R0
    BF/S S_23
    MOV R9,R0
    BRA L_0C0EC782
    NOP
S_23:
    NOP
    MOV.L R13,@-R15
    MOV.L P_22,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0EC782
    MOV R9,R0
L_0C0EC76C:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_23,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ROTCL R9
    MOV.L R13,@-R15
    MOV.L P_24,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R12,R0
    TST #1,R0
    BF/S S_24
    MOV R9,R0
    BRA L_0C0EC782
    NOP
S_24:
    NOP
    MOV.L R13,@-R15
    MOV.L P_25,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R9,R0
L_0C0EC782:
    AND #7,R0
    SHLL2 R0
    BRAF R0
    NOP
    NOP
    NOP
    BRA L_0C0EC7AA
    NOP
    BRA L_0C0EC7C8
    NOP
    BRA L_0C0EC7E2
    NOP
    BRA L_0C0EC7F2
    NOP
    BRA L_0C0EC812
    NOP
    BRA L_0C0EC820
    NOP
    NOP
    NOP
L_0C0EC7AA:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_26,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_27,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    DT R3
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_28,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_25
    BRA L_0C0EC76C
    NOP
S_25:
    BRA L_0C0EC682
    NOP
L_0C0EC7C8:
    CLRT
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_29,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_30,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_3
    NOP
    .DATA.W H'0009
P_19:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_20:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_21:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_22:
    .DATA.W H'C980
    .DATA.W H'0C0E
P_23:
    .DATA.W H'C860
    .DATA.W H'0C0E
P_24:
    .DATA.W H'C960
    .DATA.W H'0C0E
P_25:
    .DATA.W H'C980
    .DATA.W H'0C0E
P_26:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_27:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_28:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_29:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_30:
    .DATA.W H'CA20
    .DATA.W H'0C0E
    .DATA.W H'0009
J_3:
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_31,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_26
    BRA L_0C0EC76C
    NOP
S_26:
    BRA L_0C0EC682
    NOP
L_0C0EC7E2:
    MOV R11,R0
    SETT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_32,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    BF S_27
    BRA L_0C0EC80E
    NOP
S_27:
    BRA L_0C0EC640
    NOP
L_0C0EC7F2:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_33,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_34,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_35,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF S_28
    BRA L_0C0EC80E
    NOP
S_28:
    BRA L_0C0EC622
    ADD #1,R11
L_0C0EC80E:
    BRA L_0C0EC682
    NOP
L_0C0EC812:
    MOV R11,R0
    DT R3
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_36,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_29
    BRA L_0C0EC76C
    NOP
S_29:
    BRA L_0C0EC682
    NOP
L_0C0EC820:
    MOV R11,R0
    TST #1,R0
    BF S_30
    BRA L_0C0EC82E
    NOP
S_30:
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_37,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0EC82E:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_38,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_39,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_40,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_31
    BRA L_0C0EC76C
    NOP
S_31:
    BRA L_0C0EC682
    NOP
    .DATA.W H'0009
P_31:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_32:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_33:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_34:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_35:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
P_36:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_37:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_38:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_39:
    .DATA.W H'CA20
    .DATA.W H'0C0E
P_40:
    .DATA.W H'C9C0
    .DATA.W H'0C0E
    .DATA.W H'0009
}
