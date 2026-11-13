/* INLINE-ASM: hand-written assembly routine (register-based calling convention, FPU transfer-size mode, no C form) */
#pragma inline_asm(displayStrip_nc_bump)
int displayStrip_nc_bump(void)
{
    MOV.L R10,@-R15
    MOV.L R11,@-R15
    STS.L PR,@-R15
    MOV.L @R4+,R3
L_0C0ED1E8:
    MOV #0,R11
    MOV #0,R9
    MOV.L R13,@-R15
    MOV.L P_0,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF/S S_1
    ROTCL R9
    BRA L_0C0ED214
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
    BRA L_0C0ED248
    NOP
S_2:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_3,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0ED202:
    NOP
    MOV.L R13,@-R15
    MOV.L P_4,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF/S S_3
    ROTCL R9
    BRA L_0C0ED27E
    NOP
S_3:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_5,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_4
    BRA L_0C0ED202
    NOP
S_4:
    BRA L_0C0ED22C
    NOP
L_0C0ED214:
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
    BRA L_0C0ED260
    NOP
S_5:
L_0C0ED220:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_7,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT/S S_6
    ROTCL R9
    BRA L_0C0ED27E
    NOP
S_6:
    DT R3
    BT S_7
    BRA L_0C0ED220
    NOP
S_7:
L_0C0ED22C:
    MOV.L @R4+,R0
    CMP/PL R0
    BT/S S_8
    TST #128,R0
    BRA L_0C0ED23A
    NOP
S_8:
    BT/S S_9
    MOV.L @R4+,R3
    BRA L_0C0ED1E8
    NOP
S_9:
    ADD #-4,R4
L_0C0ED23A:
    LDS.L @R15+,PR
    MOV.L @R15+,R11
    MOV #1,R0
    MOV.L @R15+,R10
    ADD #-4,R4
    RTS
    OR R0,R12
L_0C0ED248:
    DT R3
    MOV.L R13,@-R15
    MOV.L P_8,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ADD #-112,R4
    MOV.L R13,@-R15
    MOV.L P_9,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #0,R11
    MOV.L R13,@-R15
    MOV.L P_10,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #1,R11
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_11,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0ED29C
    ADD #56,R4
L_0C0ED260:
    MOV #1,R11
    MOV.L R13,@-R15
    MOV.L P_12,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA J_1
    NOP
P_0:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_1:
    .DATA.W H'D480
    .DATA.W H'0C0E
P_2:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_3:
    .DATA.W H'D480
    .DATA.W H'0C0E
P_4:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_5:
    .DATA.W H'D480
    .DATA.W H'0C0E
P_6:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_7:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_8:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_9:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_10:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_11:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_12:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
J_1:
    ADD #-112,R4
    MOV.L R13,@-R15
    MOV.L P_13,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #0,R11
    MOV.L R13,@-R15
    MOV.L P_14,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV #1,R11
    CLRT
    MOV #0,R0
    MOV.L R13,@-R15
    MOV.L P_15,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    CLRT
    MOV #1,R0
    MOV.L R13,@-R15
    MOV.L P_16,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BRA L_0C0ED29C
    ADD #56,R4
L_0C0ED27E:
    NOP
    MOV.L R13,@-R15
    MOV.L P_17,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ADD #-56,R4
    ADD #-112,R4
    MOV.L R13,@-R15
    MOV.L P_18,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
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
    ADD #56,R4
    ADD #1,R11
    BRA L_0C0ED2A6
    MOV R9,R0
L_0C0ED29C:
    ADD #1,R11
    MOV.L R13,@-R15
    MOV.L P_22,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    ROTCL R9
    MOV.L R13,@-R15
    MOV.L P_23,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R9,R0
L_0C0ED2A6:
    AND #7,R0
    SHLL2 R0
    BRAF R0
    NOP
    NOP
    NOP
    BRA L_0C0ED2CE
    NOP
    BRA L_0C0ED2EC
    NOP
    BRA L_0C0ED306
    NOP
    BRA L_0C0ED316
    NOP
    BRA L_0C0ED336
    NOP
    BRA L_0C0ED344
    NOP
    NOP
    NOP
L_0C0ED2CE:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_24,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_25,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    DT R3
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_26,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_10
    BRA L_0C0ED29C
    NOP
S_10:
    BRA L_0C0ED22C
    NOP
    BRA J_2
    NOP
P_13:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_14:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_15:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_16:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_17:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_18:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_19:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_20:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_21:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_22:
    .DATA.W H'D380
    .DATA.W H'0C0E
P_23:
    .DATA.W H'D4C0
    .DATA.W H'0C0E
P_24:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_25:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_26:
    .DATA.W H'D520
    .DATA.W H'0C0E
J_2:
L_0C0ED2EC:
    CLRT
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_27,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_28,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_29,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_11
    BRA L_0C0ED29C
    NOP
S_11:
    BRA L_0C0ED22C
    NOP
L_0C0ED306:
    MOV R11,R0
    SETT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_30,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    BF S_12
    BRA L_0C0ED332
    NOP
S_12:
    BRA L_0C0ED220
    NOP
L_0C0ED316:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_31,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_32,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_33,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BF S_13
    BRA L_0C0ED332
    NOP
S_13:
    BRA L_0C0ED202
    ADD #1,R11
L_0C0ED332:
    BRA L_0C0ED22C
    NOP
L_0C0ED336:
    MOV R11,R0
    DT R3
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_34,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_14
    BRA L_0C0ED29C
    NOP
S_14:
    BRA L_0C0ED22C
    NOP
L_0C0ED344:
    MOV R11,R0
    TST #1,R0
    BF S_15
    BRA L_0C0ED352
    NOP
S_15:
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_35,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
L_0C0ED352:
    MOV R11,R0
    CLRT
    ADD #-2,R0
    MOV.L R13,@-R15
    MOV.L P_36,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    MOV R11,R0
    CLRT
    ADD #-1,R0
    MOV.L R13,@-R15
    MOV.L P_37,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    DT R3
    MOV R11,R0
    MOV.L R13,@-R15
    MOV.L P_38,R13
    JSR @R13
    MOV.L @R15+,R13
    NOP
    BT S_16
    BRA L_0C0ED29C
    NOP
S_16:
    BRA L_0C0ED22C
    NOP
    .DATA.W H'0009
P_27:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_28:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_29:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_30:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_31:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_32:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_33:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
P_34:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_35:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_36:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_37:
    .DATA.W H'D520
    .DATA.W H'0C0E
P_38:
    .DATA.W H'D4E0
    .DATA.W H'0C0E
    .DATA.W H'0009
}
