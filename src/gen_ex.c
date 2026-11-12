/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c062954(int, int);
int FUN_0c06297a(void);
int FUN_0c062a7e(int);
int FUN_0c062abe(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(int);
int FUN_0c0fddd4(int, int);
int FUN_0c108fe8(int);
int FUN_0c10ba20(void);
int FUN_0c10d760(void);
int FUN_0c10dabe(int, int);
int FUN_0c10dd58(int, int);
int FUN_0c10dd8c(int, int);
int FUN_0c10ddb4(void);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0b4010(int a4);
int FUN_0c04a558(int a4);
int FUN_0c01be44(int a4, int a5, int a6, int a7);
int FUN_0c10ddd2(int a4);

int FUN_0c0b4010(int a4)
{
    int stk[4];
    register int t0;
    register int t4;
    register int t21;
    register int t6;
    register int t8;
    register float t13;
    register float u15;
    register int t29;
    register int t31;
    register int t74;
    register int t39;
    register int t56;
    register int t41;
    register int t43;
    register float t48;
    register float u50;
    register int t64;
    register int t66;
    register int t84;
    register int t101;
    register int t86;
    register int t88;
    register float t93;
    register float u95;
    register int t109;
    register int t111;
    register int t124;
    register int t139;
    register int t126;
    register int t128;
    register float t133;
    register int t147;
    register int t149;
    register int t157;
    register int t119;
    register int t79;
    register int t34;
    register int t69;
    register int t114;
    register int t152;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t4 = *(signed char *)((a4 + 0x8));
                if (t4 != 0) {
                    t21 = t4;
                    if (t4 != 1) {
                    } else {
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        t6 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                        *(unsigned int *)(((int)stk + 0)) = t6;
                        FUN_0c062954(t6, t6);
                        for (;;) {
                            t8 = FUN_0c06297a();
                            if (t8 != 0) {
                                break;
                            }
                            FUN_0c062a7e((((int)stk + 0) + 0x4));
                            t13 = FUN_0c0dfa50(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                            u15 = ((*(float *)(((int)stk + 8))) * (t13 + 1.0f));
                            *(float *)(((int)stk + 4)) = (u15 * 0.00999999978f);
                            FUN_0c062abe((((int)stk + 0) + 0x4));
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                        }
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                        }
                        t21 = 0xEC;
                    }
                    t34 = t21;
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    t29 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                    *(unsigned int *)(((int)stk + 0)) = t29;
                    FUN_0c062954(t29, t29);
                    for (;;) {
                        t31 = FUN_0c06297a();
                        if (t31 != 0) {
                            break;
                        }
                        FUN_0c062a7e((((int)stk + 0) + 0x4));
                        *(float *)(((int)stk + 4)) = 0.0f;
                        FUN_0c062abe((((int)stk + 0) + 0x4));
                    }
                    t34 = t31;
                }
                t79 = t34;
            } else {
                t74 = t0;
                if (t0 == 3) {
                    t39 = *(signed char *)((a4 + 0x8));
                    if (t39 != 0) {
                        t56 = t39;
                        if (t39 != 1) {
                        } else {
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            t41 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                            *(unsigned int *)(((int)stk + 0)) = t41;
                            FUN_0c062954(t41, t41);
                            for (;;) {
                                t43 = FUN_0c06297a();
                                if (t43 != 0) {
                                    break;
                                }
                                FUN_0c062a7e((((int)stk + 0) + 0x4));
                                t48 = FUN_0c0dfa50(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                                u50 = ((*(float *)(((int)stk + 4))) * t48);
                                *(float *)(((int)stk + 12)) = (u50 * 0.0299999993f);
                                FUN_0c062abe((((int)stk + 0) + 0x4));
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                            }
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5);
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                            }
                            t56 = 0xEC;
                        }
                        t69 = t56;
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        t64 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                        *(unsigned int *)(((int)stk + 0)) = t64;
                        FUN_0c062954(t64, t64);
                        for (;;) {
                            t66 = FUN_0c06297a();
                            if (t66 != 0) {
                                break;
                            }
                            FUN_0c062a7e((((int)stk + 0) + 0x4));
                            *(float *)(((int)stk + 12)) = 0.0f;
                            FUN_0c062abe((((int)stk + 0) + 0x4));
                        }
                        t69 = t66;
                    }
                    t74 = t69;
                }
                t79 = t74;
            }
            t119 = t79;
        } else {
            t84 = *(signed char *)((a4 + 0x8));
            if (t84 != 0) {
                t101 = t84;
                if (t84 != 1) {
                } else {
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    t86 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                    *(unsigned int *)(((int)stk + 0)) = t86;
                    FUN_0c062954(t86, t86);
                    for (;;) {
                        t88 = FUN_0c06297a();
                        if (t88 != 0) {
                            break;
                        }
                        FUN_0c062a7e((((int)stk + 0) + 0x4));
                        t93 = FUN_0c0dfa50(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                        u95 = ((*(float *)(((int)stk + 4))) * t93);
                        *(float *)(((int)stk + 12)) = (u95 * 0.049999997f);
                        FUN_0c062abe((((int)stk + 0) + 0x4));
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1E);
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                    }
                    t101 = 0xEC;
                }
                t114 = t101;
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t109 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                *(unsigned int *)(((int)stk + 0)) = t109;
                FUN_0c062954(t109, t109);
                for (;;) {
                    t111 = FUN_0c06297a();
                    if (t111 != 0) {
                        break;
                    }
                    FUN_0c062a7e((((int)stk + 0) + 0x4));
                    *(float *)(((int)stk + 12)) = 0.0f;
                    FUN_0c062abe((((int)stk + 0) + 0x4));
                }
                t114 = t111;
            }
            t119 = t114;
        }
        t157 = t119;
    } else {
        t124 = *(signed char *)((a4 + 0x8));
        if (t124 != 0) {
            t139 = t124;
            if (t124 != 1) {
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                t126 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                *(unsigned int *)(((int)stk + 0)) = t126;
                FUN_0c062954(t126, t126);
                for (;;) {
                    t128 = FUN_0c06297a();
                    if (t128 != 0) {
                        break;
                    }
                    FUN_0c062a7e((((int)stk + 0) + 0x4));
                    t133 = FUN_0c0dfa50(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(float *)(((int)stk + 8)) = (t133 * 25.0f);
                    FUN_0c062abe((((int)stk + 0) + 0x4));
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
                t139 = 0xEC;
            }
            t152 = t139;
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t147 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
            *(unsigned int *)(((int)stk + 0)) = t147;
            FUN_0c062954(t147, t147);
            for (;;) {
                t149 = FUN_0c06297a();
                if (t149 != 0) {
                    break;
                }
                FUN_0c062a7e((((int)stk + 0) + 0x4));
                *(float *)(((int)stk + 8)) = 0.0f;
                FUN_0c062abe((((int)stk + 0) + 0x4));
            }
            t152 = t149;
        }
        t157 = t152;
    }
    return t157;
}

int FUN_0c04a558(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F0;
    register float F1;
    register float F10;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_4 = (v0_3);
    v0_0 = (v0_2);
    v0_1 = ((0x308 + v0_2));
    if ((v0_3 == 0)) goto L_C04A5AC;
    if ((v0_4 == 1)) goto L_C04A5C2;
    if ((v0_4 != 2)) goto L_C04A586;
    L_C04A8A4:;
    return FUN_0c059330(v0_0, R5, R6, R7);
    L_C04A586:;
    if ((v0_4 != 3)) goto L_C04A58E;
    goto L_C04A8A4;
    L_C04A58E:;
    L_C04A8C0:;
    return v0_4;
    L_C04A5C2:;
    v0_3 = (((struct o2FC_int *)(v0_0))->v);
    v0_4 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
    (((struct o8_float *)(v0_3))->v) = (((((struct o8_float *)(v0_3))->v)) + 40.0f);
    *(unsigned int *)((v0_3 + 0x14)) = (unsigned short)((*(int *)((v0_3 + 0x14))) + 0xFC00);
    v0_5 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_5 - 1);
    v0_3 = (0x0);
    v0_4 = (0x4);
    FPUL_ = (0x42200000);
    if (!(((short)(v0_5 - 1) == 0))) goto L_C04A7E2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1;
    v0_6 = *(int *)(((((*(signed char *)((v0_1 + 0x10))) << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_5 = (v0_6);
    if (((*(signed char *)((v0_6 + 0x0))) == 0)) goto L_C04A644;
    goto L_C04A7E2;
    L_C04A7E2:;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_6 = ((v0_1 + 0x8));
    v0_5 = (v0_3);
    v0_7 = ((v0_1 + 0x8));
    L_C04A7F0:;
    v0_8 = *(int *)((((v0_5 << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_2 = (v0_8);
    if (((*(signed char *)((v0_8 + 0x0))) == 0)) goto L_C04A856;
    v0_8 = *(signed char *)(((v0_1 + v0_5) + 0x0));
    *(unsigned char *)(((v0_1 + v0_5) + 0x0)) = (v0_8 - 1);
    if (((signed char)(v0_8 - 1) != 0)) goto L_C04A856;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    v0_8 = *(signed char *)((v0_7 + 0x0));
    *(unsigned char *)((v0_7 + 0x0)) = (v0_8 + 0x1);
    if (((int)(signed char)(v0_8 + 0x1) <= (int)0x3)) goto L_C04A84C;
    *(unsigned char *)((v0_2 + 0x0)) = v0_3;
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) - 1);
    L_C04A856:;
    v0_2 = (int)(v0_5 + 0x1) < (int)0x7;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    v0_6 = ((v0_6 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    v0_7 = ((v0_7 + 0x1));
    if (v0_2) goto L_C04A7F0;
    if (((*(signed char *)((0xC7EB27E + (unsigned short)((unsigned short)(*(signed char *)((v0_0 + 0x3))) * (unsigned short)0x72D0)))) == 13)) goto L_C04A88E;
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C04A88E;
    (((struct o12_uchar *)(v0_1))->v) = 0x1;
    *(unsigned char *)((((((struct o2FC_int *)(v0_0))->v)) + 0x0)) = v0_3;
    L_C04A88E:;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) == 0)) goto L_C04A8C0;
    v0_4 = (0x11);
    if (((*(signed char *)((v0_1 + 0x11))) != 0)) goto L_C04A8C0;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    v0_4 = (0x2);
    goto L_C04A8C0;
    L_C04A84C:;
    FUN_0c06231c(v0_2, 0xC4CFA68, ((*(signed char *)((v0_6 + 0x0))) + 0x65));
    goto L_C04A856;
    L_C04A644:;
    if (((*(signed char *)((v0_1 + 0x12))) == 0)) goto L_C04A650;
    goto L_C04A7E2;
    L_C04A650:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x8;
    *(unsigned char *)((v0_5 + 0x0)) = 0x1;
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + (v0_1 + 0x8)) + 0x0)) = v0_3;
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + v0_1) + 0x0)) = v0_4;
    FUN_0c06231c(v0_5, 0xC4CFA68, ((*(signed char *)((((*(signed char *)((v0_1 + 0x10))) + (v0_1 + 0x8)) + 0x0))) + 0x65));
    v0_6 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
    *(int *)((int)stk + 0) = (0x4 + v0_5);
    w0_3 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 0)) = (0x4 + v0_5);
    v0_6 = (0xC0DF940);
    w0_1 = (255.0f);
    w0_2 = (2.14748365e+09f);
    w0_0 = ((w0_3 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * 255.0f))) goto L_C04A6D2;
    w0_0 = ((w0_0 - (w0_2 + w0_2)));
    L_C04A6D2:;
    v0_6 = FUN_0c0e6f24(v0_2);
    w0_0 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C04A6EC;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04A6EC:;
    v0_6 = *(int *)((int)stk + 0);
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_6 + 0x0))) + (w0_0 + -30.0f));
    *(int *)((int)stk + 0) = (0x8 + v0_5);
    w0_3 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 0)) = (0x8 + v0_5);
    w0_2 = (2.14748365e+09f);
    w0_0 = ((w0_3 * w0_1));
    v0_6 = (((2.14748365e+09f > (w0_3 * w0_1))));
    FPUL_ = (0x4F000000);
    if ((v0_6)) goto L_C04A75E;
    w0_0 = ((w0_0 - (w0_2 + w0_2)));
    L_C04A75E:;
    v0_6 = FUN_0c0e6f24(v0_2);
    w0_0 = ((float)v0_6);
    FPUL_ = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C04A778;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04A778:;
    v0_6 = *(int *)((int)stk + 0);
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_6 + 0x0))) + (w0_0 + 30.0f));
    *(int *)((int)stk + 0) = (0xC + v0_5);
    w0_3 = FUN_0c0df940();
    *(unsigned int *)(((int)stk + 0)) = (0xC + v0_5);
    w0_2 = (2.14748365e+09f);
    w0_0 = ((w0_3 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * w0_1))) goto L_C04A7A0;
    w0_0 = ((w0_0 - (w0_2 + w0_2)));
    L_C04A7A0:;
    v0_5 = FUN_0c0e6f24(v0_2);
    w0_0 = ((float)v0_5);
    FPUL_ = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C04A7BA;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04A7BA:;
    v0_5 = *(int *)((int)stk + 0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) + (w0_0 + -30.0f));
    *(volatile signed char *)((v0_1 + 0x10));
    (((struct o10_uchar *)(v0_1))->v) = (FUN_0c0e6e5c(v0_2));
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) + 0x1);
    goto L_C04A7E2;
    L_C04A5AC:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x8;
    memset(v0_1, 0x0, 0x14);
    goto L_C04A5C2;
}

int FUN_0c01be44(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_3);
    v0_1 = (0xC362360);
    if ((v0_3 == 0)) goto L_C01BE70;
    if ((v0_2 == 1)) goto L_C01BE76;
    return FUN_0c059330(v0_0, R5, R6, a7);
    L_C01BE76:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    R5 = (0x0);
    R6 = (0xFFFFF556);
    w0_3 = (-76.0759964f);
    w0_4 = (-16.421999f);
    w0_0 = (0.0f);
    w0_2 = (1.0f);
    w0_1 = (-295.0f);
    w0_5 = (-600.0f);
    w0_6 = (76.0759964f);
    if ((v0_3 == 0)) goto L_C01BEC4;
    if ((v0_2 != 1)) goto L_C01BEA0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BFB6;
    if ((v0_2 == 1)) goto L_C01BFFA;
    if ((v0_2 == 2)) goto L_C01C09C;
    L_C01C1BE:;
    return v0_2;
    L_C01C09C:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (!(((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3))) goto L_C01C1B0;
    goto L_C01C1BE;
    L_C01C1B0:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C01C1BE;
    L_C01BFFA:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + w0_0);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + -3.33333325f);
    w0_2 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_2 + 20.0f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x5B);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0xEC);
    w0_2 = ((w0_2 + 20.0f));
    FPUL_ = (0x41A00000);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C01C036;
    goto L_C01C1BE;
    L_C01C036:;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = -100.0f;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R5;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    w0_2 = (-100.0f);
    goto L_C01C1BE;
    L_C01BFB6:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1D;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BFFA;
    L_C01BEA0:;
    if (!((v0_2 != 2))) goto L_C01C052;
    if ((v0_2 != 3)) goto L_C01BEB0;
    goto L_C01C052;
    L_C01C052:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C060;
    if ((v0_2 == 1)) goto L_C01C09C;
    goto L_C01C1BE;
    L_C01C060:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    *(unsigned char *)((((((struct o2F4_int *)(v0_0))->v)) + 0x0)) = R5;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C09C;
    L_C01BEB0:;
    if ((v0_2 != 4)) goto L_C01BEB8;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C0D4;
    if ((v0_2 == 1)) goto L_C01C118;
    if ((v0_2 == 2)) goto L_C01C1A6;
    goto L_C01C1BE;
    L_C01C1A6:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3)) goto L_C01C1BE;
    goto L_C01C1B0;
    L_C01C118:;
    v0_2 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_2))->v) = (((((struct o40_float *)(v0_2))->v)) + -0.199999988f);
    w0_1 = (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v);
    w0_2 = (w0_1);
    FPUL_ = (0xBE4CCCCC);
    if ((!(0.0f > w0_1))) goto L_C01C140;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01C140:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C1A6;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01C1A0:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C1A6;
    L_C01C0D4:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0x5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C118;
    L_C01BEB8:;
    if ((v0_2 != 5)) goto L_C01BEC0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01C168;
    if ((v0_2 == 1)) goto L_C01C1A6;
    goto L_C01C1BE;
    L_C01C168:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    goto L_C01C1A0;
    L_C01BEC0:;
    goto L_C01C1BE;
    L_C01BEC4:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C01BED6;
    if ((v0_2 == 1)) goto L_C01BF2E;
    if ((v0_2 == 2)) goto L_C01BF70;
    goto L_C01C1BE;
    L_C01BF70:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1))) == v0_3)) goto L_C01BF7E;
    goto L_C01C1B0;
    L_C01BF7E:;
    goto L_C01C1BE;
    L_C01BF2E:;
    v0_2 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_2))->v) = (((((struct o40_float *)(v0_2))->v)) + 0.099999994f);
    FPUL_ = (0x3DCCCCCC);
    if ((!(((((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v)) > w0_2))) goto L_C01BF54;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    L_C01BF54:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01BF70;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BF70;
    L_C01BED6:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_4;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_6;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_2;
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C01BF0E;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    L_C01BF0E:;
    (((struct o12_uchar *)(v0_1))->v) = R5;
    (((struct o20_float *)(v0_0))->v) = w0_1;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_5;
    *(unsigned int *)((v0_0 + 0x2C)) = R6;
    *(unsigned int *)((v0_0 + 0x30)) = R5;
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01BF2E;
    L_C01BE70:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01BE76;
}

int FUN_0c10ddd2(int a4)
{
    int t0;
    register int t1;
    register int t134;
    int t137;
    register int t147;
    register int t174;
    register int t175;
    register int t176;
    register int t177;
    register int t178;
    register int t227;
    register int t228;
    register int t229;
    register int t230;
    register int t231;
    register int t56;
    register int t74;
    register int t92;
    register int t110;
    register int t128;
    register int t188;
    register int t189;
    register int t200;
    register int t201;
    register int t212;
    register int t213;
    register int t224;
    register int t225;
    register int t241;
    register int t242;

    t0 = (((struct o0_int *)0xA05F6900)->v);
    if ((0x8 & t0) != 0) {
        t1 = FUN_0c10d760();
        t174 = t1;
        if (t1 != 0) {
            t174 = (FUN_0c108fe8(t1));
        }
    }
    if ((t0 & 0x20) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x20;
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x4);
    }
    if ((t0 & 0x4) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x7;
        *(unsigned int *)0xC8171C8 = 0x0;
        (((struct o0_uint *)0xC8426CC)->v) = 0x0;
        (((struct o4_uint *)0xC84270C)->v) = (((((struct o0_int *)0xC84270C)->v)) - (*(int *)0xFFD8000C));
        if (((((struct o18_int *)0xC817318)->v)) != 0) {
            (((struct o18_uint *)0xC817318)->v) = 0x0;
            (((struct o18_uint *)0xC8426CC)->v) = 0x0;
            (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC817268)->v));
            (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC817268)->v));
            (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC817268)->v));
            (((struct o24_uint *)0xA05F8048)->v) = ((((struct o8_int *)0xC817268)->v));
            t174 = 0xC817270;
        } else {
            *(unsigned int *)(((((((struct o0_int *)0xC817318)->v)) << 2) + 0xC817304)) = 0x5;
            t174 = 0xC817304;
        }
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x1);
        (((struct o10_uint *)0xC84270C)->v) = 0x0;
    }
    if ((t0 & 0x80000) != 0) {
        *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
        (((struct o0_uint *)0xA05F6900)->v) = 0x80000;
        t174 = (FUN_0c10ba20());
    } else {
        t56 = 0x80000;
    }
    if ((t0 & 0x40) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x40;
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x40);
    }
    t74 = t56;
    if ((t0 & 0x80) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x80;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x1);
        t174 = 0xC817324;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x80, t56));
        } else {
        }
        t74 = t56;
    }
    t92 = t74;
    if ((t0 & 0x100) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x100;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x2);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x100, t74));
        } else {
        }
        t92 = t74;
    }
    t110 = t92;
    if ((t0 & 0x200) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x4);
        t174 = 0xC817324;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x200, t92));
        } else {
        }
        t110 = t92;
    }
    t128 = t110;
    if ((t0 & 0x400) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x400;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x8);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x400, t110));
        } else {
        }
        t128 = t110;
    }
    t134 = 0x200000;
    t176 = t128;
    if ((t0 & 0x200000) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200000;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x10);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x200000, t128));
        } else {
            t134 = 0x200000;
        }
        t176 = t128;
    }
    t137 = (((struct o8_int *)0xA05F6900)->v);
    t147 = t134;
    if ((0x4 & t137) != 0) {
        t147 = FUN_0c10dd58(t134, t176);
        t174 = t147;
        if (t147 != 0) {
            t174 = (FUN_0c108fe8(t147));
        } else {
        }
    } else {
    }
    t175 = t147;
    if ((0x8 & t137) != 0) {
        t175 = FUN_0c10dd8c(t147, t176);
        t174 = t175;
        if (t175 != 0) {
            t174 = (FUN_0c108fe8(t175));
        } else {
        }
    } else {
    }
    if ((t137 & 0x2) != 0) {
        t175 = FUN_0c10ddb4();
        t174 = t175;
        if (t175 != 0) {
            t174 = (FUN_0c108fe8(t175));
        } else {
        }
    } else {
    }
    t177 = 0xA05F6900;
    t178 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t188 = t175;
            t189 = t176;
        }
        t175 = t188;
        t176 = t189;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t200 = t175;
            t201 = t176;
        }
        t175 = t200;
        t176 = t201;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t212 = t175;
            t213 = t176;
        }
        t175 = t212;
        t176 = t213;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t224 = t175;
            t225 = t176;
        }
        t178 = (t178 + 0x1);
        t175 = t224;
        t176 = t225;
        if ((int)t178 >= (int)0x5) {
            break;
        }
    }
    if ((int)t178 < (int)0x9) {
        t227 = t174;
        t228 = t175;
        t229 = t176;
        t230 = 0x0;
        t231 = t178;
        for (;;) {
            if ((((int)0x1 << (int)t231) & ((((struct o0_int *)0xC817268)->v))) != 0) {
                (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t231)));
                t230 = t231;
                t227 = 0xC8171F4;
                t230 = (t230 << 2);
                t230 = (t230 << 1);
                t229 = (*(int *)((t230 + t227)));
                t227 = (t227 - 4);
                t228 = (*(int *)((t230 + t227)));
                t227 = (FUN_0c0fddd4(t228, t229));
            } else {
                t241 = t228;
                t242 = t229;
            }
            t231 = (t231 + 0x1);
            t228 = t241;
            t229 = t242;
            if ((int)t231 >= (int)0x9) {
                break;
            }
        }
    }
    return 0x0;
}
