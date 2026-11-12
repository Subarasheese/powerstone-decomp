/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D4_ushort { char p[0x71D4]; unsigned short v; };
struct o71D6_ushort { char p[0x71D6]; unsigned short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o71D8_ushort { char p[0x71D8]; unsigned short v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0203d6(void);
int FUN_0c0203f6(void);
int FUN_0c049e68(int, int);
int FUN_0c04bef2(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int);
int FUN_0c0593e0(int);
int FUN_0c05941e(int);
int FUN_0c05948c(int);
int FUN_0c06231c(int, int, int);
int FUN_0c062f10(int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c092b8c(void);
int FUN_0c099c60(int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09c35e(void);
int FUN_0c09ca88(int, int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0a3ebc(int, int, int);
int FUN_0c0a3f30(int);
int FUN_0c0c3544(int);
int FUN_0c0c3a7a(int);
int FUN_0c0c3b16(int);
int FUN_0c0c3b2c(int);
int FUN_0c0cc8e8(void);
int FUN_0c0df920(void);
float FUN_0c0df940(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(int, int, int, float, float, float, float, float, float, float);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0527a2(int a4, int a5, int a6, int a7);
int FUN_0c09cb20(int a4);
int FUN_0c04997c(int a4);
int FUN_0c068ec6(int a4);
int FUN_0c0c3b58(int a4);
int FUN_0c0b482e(int a4);
int FUN_0c084ac2(int a4, int a5, int a6, int a7);

int FUN_0c0527a2(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t2;
    register int t16;
    register int t36;
    register int t40;
    register int t41;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC7F302C) << 2) + 0xC32DE40)))))();
    if ((*(signed char *)0xC7F302C) != 0) {
        (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
        if ((*(signed char *)0xC7EB2F6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = 0x1;
        }
        if ((*(signed char *)0xC7F25C6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = ((*(signed char *)0xC7F3192) | 0x2);
        }
        if ((*(signed char *)0xC7F3192) != 0) {
            (((struct o0_uchar *)0xC7F3078)->v) = 0x2;
            if (((((struct o2_short *)0xC7F3192)->v)) != 0) {
                t16 = (((struct o2_short *)0xC7F3192)->v);
                (((struct o2_ushort *)0xC7F3192)->v) = (t16 - 1);
                if ((short)(t16 - 1) == 0) {
                    FUN_0c09c35e();
                }
            } else {
                *(unsigned char *)0xC7F25C6 = 0x0;
                *(unsigned char *)0xC7EB2F6 = 0x0;
                (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
                (((struct o0_uchar *)0xC7F3078)->v) = 0x0;
            }
        }
        t36 = *(signed char *)0xC7F3078;
        if (t36 != 0) {
            if (t36 == 1) {
            } else {
                if (t36 != 2) {
                } else {
                    (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
                    t41 = *(int *)0xC7E407C;
                    t40 = (FUN_0c092b8c());
                    for (;;) {
                        if (t41 == 0) {
                            break;
                        }
                        t40 = (*(signed char *)((t41 + 0x4)));
                        if (t40 == 5) {
                            t40 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t41 + 0x10)))))(t41, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                        }
                        t41 = (*(int *)((t41 + 0x18)));
                    }
                    FUN_0c0593e0(0x2);
                    FUN_0c0593e0(0x3);
                    FUN_0c0593e0(0x4);
                    FUN_0c0593e0(0x1);
                    *(unsigned int *)(((int)stk + 0)) = 0xC7E40C4;
                    FUN_0c099c60(0xC7E40C4);
                    FUN_0c099c60(0xC7EB394);
                    FUN_0c0203d6();
                    FUN_0c099c60((*(int *)(((int)stk + 0))));
                    FUN_0c099c60(0xC7EB394);
                    FUN_0c062f10((*(int *)(((int)stk + 0))));
                    FUN_0c062f10(0xC7EB394);
                    FUN_0c05941e(0x2);
                    FUN_0c05941e(0x3);
                    FUN_0c05941e(0x4);
                    FUN_0c05941e(0x1);
                    if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                        FUN_0c0203f6();
                    }
                }
            }
        } else {
            (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
            FUN_0c092b8c();
            FUN_0c0cc8e8();
            FUN_0c05948c(0x2);
            FUN_0c05948c(0x3);
            FUN_0c05948c(0x4);
            FUN_0c05948c(0x1);
            FUN_0c099c60(0xC7E40C4);
            *(unsigned int *)(((int)stk + 0)) = 0xC7EB394;
            FUN_0c099c60(0xC7EB394);
            FUN_0c0593e0(0x2);
            FUN_0c0593e0(0x3);
            FUN_0c0593e0(0x4);
            FUN_0c0593e0(0x1);
            FUN_0c0203d6();
            FUN_0c099c60(0xC7E40C4);
            FUN_0c099c60((*(int *)(((int)stk + 0))));
            FUN_0c062f10(0xC7E40C4);
            FUN_0c062f10((*(int *)(((int)stk + 0))));
            FUN_0c05941e(0x2);
            FUN_0c05941e(0x3);
            FUN_0c05941e(0x4);
            FUN_0c05941e(0x1);
            if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                FUN_0c0203f6();
            }
            FUN_0c05948c(0x5);
            FUN_0c05948c(0x7);
            FUN_0c0593e0(0x5);
            FUN_0c0593e0(0x7);
        }
        FUN_0c05948c(0x6);
        FUN_0c0593e0(0x6);
        return ((int (*)(void))(0xC05299E))();
    }
    return t2;
}

int FUN_0c09cb20(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = (FUN_0c0555c4()) != 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C09CB36;
    L_C09CD26:;
    return 0x0;
    L_C09CB36:;
    if (!(((*(signed char *)((v0_0 + 0x4))) != 10))) goto L_C09CC70;
    if (((*(signed char *)((v0_0 + 0x71F1))) == 0)) goto L_C09CB4C;
    goto L_C09CC70;
    L_C09CC70:;
    v0_2 = FUN_0c09ca88(v0_0, 0x6);
    v0_1 = (v0_2);
    if (((signed char)v0_2 == 0)) goto L_C09CD26;
    v0_1 = *(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C09CD26;
    if (((*(signed char *)((v0_2 + 0x30D))) != 0)) goto L_C09CD26;
    v0_3 = *(signed char *)((v0_2 + 0x30C));
    v0_1 = (v0_3);
    if ((v0_3 == 15)) goto L_C09CCB2;
    if ((v0_1 == 16)) goto L_C09CCB2;
    if ((v0_1 != 17)) goto L_C09CD26;
    L_C09CCB2:;
    v0_1 = *(signed char *)((v0_2 + 0x30C));
    v0_2 = (v0_1);
    if ((v0_1 == 15)) goto L_C09CCC6;
    if ((v0_2 == 16)) goto L_C09CCCA;
    if (!((v0_2 == 17))) goto L_C09CCD8;
    R12 = (0x17);
    goto L_C09CCD0;
    L_C09CCD8:;
    (((struct o71D4_ushort *)(v0_0))->v) = (((((struct o71D4_short *)(v0_0))->v)) + R12);
    v0_2 = (0x71D4);
    v0_1 = (0xF0);
    if (((int)((((struct o71D4_short *)(v0_0))->v)) <= (int)0xF0)) goto L_C09CCEA;
    *(unsigned short *)((v0_0 + v0_2)) = v0_1;
    L_C09CCEA:;
    if (((int)(*(short *)((v0_0 + v0_2))) <= (int)(*(short *)((v0_0 + (v0_2 + 0x2)))))) goto L_C09CCFC;
    (((struct o71D6_ushort *)(v0_0))->v) = ((((struct o71D4_short *)(v0_0))->v));
    L_C09CCFC:;
    if (((int)((((struct o71D4_short *)(v0_0))->v)) <= (int)((((struct o71D8_short *)(v0_0))->v)))) goto L_C09CD12;
    (((struct o71D8_ushort *)(v0_0))->v) = ((((struct o71D4_short *)(v0_0))->v));
    L_C09CD12:;
    goto L_C09CD26;
    L_C09CCD0:;
    FUN_0c049e68(v0_0, 0x1);
    goto L_C09CCD8;
    L_C09CCCA:;
    R12 = (0x2F);
    goto L_C09CCD0;
    L_C09CCC6:;
    R12 = (0x5F);
    goto L_C09CCD0;
    L_C09CB4C:;
    if (((*(signed char *)((v0_0 + 0x71F3))) == 0)) goto L_C09CB58;
    goto L_C09CC70;
    L_C09CB58:;
    if ((((((struct o71F4_short *)(v0_0))->v)) == 0)) goto L_C09CB64;
    goto L_C09CC70;
    L_C09CB64:;
    if (((*(signed char *)((v0_0 + 0x71BA))) != 23)) goto L_C09CB70;
    goto L_C09CC70;
    L_C09CB70:;
    if (((int)(*(signed char *)((v0_0 + 0x7230))) < (int)0x3)) goto L_C09CB7E;
    goto L_C09CC70;
    L_C09CB7E:;
    v0_2 = FUN_0c09ca88(v0_0, 0x5);
    v0_1 = (v0_2);
    if (((signed char)v0_2 == 0)) goto L_C09CC70;
    if (((*(signed char *)(((*(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0))) + 0xC))) == 0)) goto L_C09CC70;
    if (((*(signed char *)((((0x310 + (*(int *)(((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2))))) + ((-(*(signed char *)((v0_0 + 0x3)))) + 0x1)) + 0x0))) != 0)) goto L_C09CC70;
    v0_2 = *(int *)((((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2)) + 0x0));
    *(unsigned char *)((v0_2 + 0x8)) = ((*(signed char *)((v0_2 + 0x8))) + 0x1);
    *(unsigned char *)(((*(int *)((((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2)) + 0x0))) + 0x9)) = 0x0;
    *(unsigned char *)(((0x310 + (*(int *)(((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0))))) + (*(signed char *)((v0_0 + 0x3))))) = 0x1;
    (((struct o7230_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x7230))) + 0x1);
    (((struct o7231_uchar *)(v0_0))->v) = ((*(signed char *)(((0x7231 + v0_0) + 0x0))) | ((int)0x1 << (int)(*(signed char *)(((*(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0))) + 0xE)))));
    if (((int)(*(signed char *)((v0_0 + 0x7230))) >= (int)0x3)) goto L_C09CC2C;
    if (((*(signed char *)((v0_0 + 0x3))) != 0)) goto L_C09CC24;
    v0_1 = (0x16);
    L_C09CC26:;
    FUN_0c0a3f30(v0_1);
    L_C09CC2C:;
    v0_1 = (FUN_0c0555c4()) == 0;
    if (v0_1) goto L_C09CC4E;
    if (((*(signed char *)((v0_0 + 0x71ED))) != 0)) goto L_C09CC4E;
    v0_0 = *(signed char *)((v0_0 + 0x4));
    *(unsigned int *)(((0xC7F2F8C + (v0_0 << 2)) + 0x0)) = ((*(int *)((0xC7F2F8C + (v0_0 << 2)))) + 0x1);
    L_C09CC4E:;
    v0_2 = (0x1);
    return v0_2;
    L_C09CC24:;
    v0_1 = (0x2C);
    goto L_C09CC26;
}

int FUN_0c04997c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register float F10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_6);
    if (v0_1) goto L_C0499AC;
    return FUN_0c059330(v0_0, R5, R6);
    L_C0499AC:;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_4 = (v0_3);
    v0_1 = ((0x308 + v0_0));
    v0_2 = ((*(int *)((v0_0 + 0x1C))));
    if ((v0_3 == 0)) goto L_C0499F4;
    if ((v0_4 == 1)) goto L_C049A0A;
    if (!((v0_4 != 2))) goto L_C049B44;
    if ((v0_4 != 3)) goto L_C0499CC;
    goto L_C049B44;
    L_C049B44:;
    return FUN_0c059330(v0_0, R5, R6);
    L_C0499CC:;
    L_C049B5A:;
    return v0_4;
    L_C049A0A:;
    v0_6 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_6 - 1);
    v0_4 = (0x4);
    v0_5 = (0x0);
    v0_3 = (0x1);
    if (((short)(v0_6 - 1) != 0)) goto L_C049A8C;
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049A8C;
    (((struct oEC_ushort *)(v0_0))->v) = v0_3;
    v0_7 = *(int *)(((((*(signed char *)((v0_1 + 0x10))) << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_6 = (v0_7);
    if (((*(signed char *)((v0_7 + 0x0))) != 0)) goto L_C049A8C;
    (((struct oEC_ushort *)(v0_0))->v) = 0x2;
    *(unsigned char *)((v0_6 + 0x0)) = v0_3;
    FUN_0c0e6fe8(v0_6, R5, R6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, F10);
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + v0_1) + 0x0)) = v0_5;
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + (v0_1 + 0x8)) + 0x0)) = v0_4;
    FUN_0c06231c(0x0, 0xC4CFA68, ((*(signed char *)((((*(signed char *)((v0_1 + 0x10))) + v0_1) + 0x0))) + 0x5C));
    (((struct o10_uchar *)(v0_1))->v) = (((*(signed char *)((v0_1 + 0x10))) + 0x1) & 0x7);
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) + 0x1);
    L_C049A8C:;
    v0_7 = (v0_5);
    L_C049A8E:;
    v0_8 = *(int *)(((((signed char)v0_7 << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_6 = (v0_8);
    if (((*(signed char *)((v0_8 + 0x0))) == 0)) goto L_C049B00;
    v0_8 = *(signed char *)((((signed char)v0_7 + (v0_1 + 0x8)) + 0x0));
    *(unsigned char *)((((signed char)v0_7 + (v0_1 + 0x8)) + 0x0)) = (v0_8 - 1);
    if (((signed char)(v0_8 - 1) != 0)) goto L_C049B00;
    *(unsigned char *)((((v0_1 + 0x8) + (signed char)v0_7) + 0x0)) = v0_4;
    v0_8 = *(signed char *)((((signed char)v0_7 + v0_1) + 0x0));
    *(unsigned char *)((((signed char)v0_7 + v0_1) + 0x0)) = (v0_8 + 0x1);
    if (((int)(signed char)(v0_8 + 0x1) <= (int)0x3)) goto L_C049AF0;
    *(unsigned char *)((v0_6 + 0x0)) = v0_5;
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) - 1);
    L_C049B00:;
    v0_6 = (int)(signed char)(v0_7 + 0x1) < (int)0x8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_C049A8E;
    if ((!(((((struct o274_float *)(v0_2))->v)) > 0.0f))) goto L_C049B1E;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049B1E;
    *(unsigned char *)((v0_1 + v0_4)) = v0_3;
    L_C049B1E:;
    if (((*(signed char *)((v0_2 + 0xA))) == 0)) goto L_C049B2E;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049B2E;
    *(unsigned char *)((v0_1 + v0_4)) = v0_3;
    L_C049B2E:;
    v0_4 = (0x11);
    if (((*(signed char *)((v0_1 + 0x11))) != 0)) goto L_C049B5A;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) == 0)) goto L_C049B5A;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    v0_4 = (0x2);
    goto L_C049B5A;
    L_C049AF0:;
    FUN_0c06231c(v0_6, 0xC4CFA68, ((*(signed char *)((((signed char)v0_7 + v0_1) + 0x0))) + 0x5C));
    goto L_C049B00;
    L_C0499F4:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x2;
    memset(v0_1, 0x0, 0x14);
    goto L_C049A0A;
}

int FUN_0c068ec6(int a4)
{
    int stk[12];
    register int t0;
    register int t11;
    register int t28;
    register int t30;
    register int t41;
    register int t52;
    register int t61;
    int t12;
    register int t13;
    int t20;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t61 = 0x71A8;
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            FUN_0c09a91a((*(int *)((a4 + 0x1C))));
            FUN_0c09da1c((*(int *)((a4 + 0x1C))));
        }
        t11 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t11 - 1);
        if (((short)(t11 - 1) == 0) && (t12 = *(int *)((a4 + 0x1C)), t13 = *(signed char *)((t12 + 0x71F1)), t13 == 0)) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t20 = (((struct oEC_short *)(a4))->v), t20 == 0)) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            FUN_0c08eba8(a4, 0x30);
            FUN_0c08deec(a4, 0x30);
        }
        FUN_0c09da1c(a4);
        t28 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t28 != 14) {
            if ((unsigned short)t28 != 41) {
                t61 = (unsigned short)t28;
                if ((unsigned short)t28 != 71) {
                } else {
                    FUN_0c0a3914(a4, 0x5);
                    t30 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                    FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3));
                }
            } else {
                FUN_0c0a3914(a4, 0x4);
                FUN_0c08eba8(a4, 0x31);
                t41 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
            }
        } else {
            FUN_0c0a3914(a4, 0x4);
            FUN_0c08eba8(a4, 0x31);
            t52 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
            FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
        }
    }
    return t61;
}

int FUN_0c0c3b58(int a4)
{
    register int t0;
    float u0;

    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    u0 = (((struct o50_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    u0 = (((struct o54_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o54_float *)(a4))->v) = 1.0f;
    }
    u0 = (((struct o58_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o58_float *)(a4))->v) = 1.0f;
    }
    if (((((struct o50_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o50_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    if (((((struct o54_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o54_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    if (((((struct o58_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o58_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    t0 = FUN_0c0c3a7a(a4);
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x9)) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = t0;
    } else {
        t0 = FUN_0c0c3b16(a4);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x9)) = 0x2;
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            *(unsigned char *)((a4 + 0xB)) = t0;
        } else {
            t0 = FUN_0c0c3b2c(a4);
            if (t0 != 0) {
                *(unsigned char *)((a4 + 0x9)) = 0x3;
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                *(unsigned char *)((a4 + 0xB)) = t0;
            }
        }
    }
    return FUN_0c0c3544(a4);
}

int FUN_0c0b482e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 == 3) {
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xEC;
                    if ((int)(short)(t0 - 1) < 0) {
                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                        t2 = 0x0;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - ((((((struct o44_float *)(t1))->v)) * 0.0399999991f)));
                (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - ((((((struct o48_float *)(t1))->v)) * 0.0399999991f)));
                (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - ((((((struct o4C_float *)(t1))->v)) * 0.0199999996f)));
                (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o44_float *)(t1))->v));
                (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o48_float *)(t1))->v));
                (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o4C_float *)(t1))->v));
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                t2 = 0xEC;
                if ((int)(short)(t1 + 0x1) > (int)0x78) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    FUN_0c0df920();
                    (((struct oEC_ushort *)(a4))->v) = (FUN_0c0e6e5c());
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t2 = 0x2E4;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = 0x2E8;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    u0 = 6000.0f;
    u0 = u0 + 4000.0f * (FUN_0c0df940());
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o28_float *)(a4))->v) = ((FUN_0c0df940()) * 5000.0f);
    t0 = 0x0;
    t1 = (0x2E0 + a4);
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x1);
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o4C_float *)(t2))->v) = 1.0f;
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
    FUN_0c0df920();
    t0 = FUN_0c0e6e5c();
    if (t0 != 0) {
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        return FUN_0c0a3ebc((*(signed char *)0xC7F3051), 0x2, 0x7);
    }
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
    return 0x2E4;
}

int FUN_0c084ac2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC084A9E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC084942))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0848CC))(a4, a5, a6, a7);
}
