/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o13_float { char p[0x13]; float v; };
struct o13_ushort { char p[0x13]; unsigned short v; };
struct o15_ushort { char p[0x15]; unsigned short v; };
struct o17_ushort { char p[0x17]; unsigned short v; };
struct o19_ushort { char p[0x19]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o68_short { char p[0x68]; short v; };
struct o7_float { char p[0x7]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o82_short { char p[0x82]; short v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oB_float { char p[0xB]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF_float { char p[0xF]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c01488c(int);
int FUN_0c01491c(int);
int FUN_0c014a9c(int);
int FUN_0c014b0a(int);
int FUN_0c014bf4(void);
int FUN_0c014d02(int);
int FUN_0c014d54(int);
int FUN_0c014d8a(int);
int FUN_0c0195a2(int);
int FUN_0c0555dc(void);
int FUN_0c058f4e(void);
int FUN_0c059330(int);
int FUN_0c06231c(int, int, int);
int FUN_0c073374(int);
int FUN_0c0733f4(int);
int FUN_0c0734ec(int);
int FUN_0c09a910(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int, int);
int FUN_0c0a370c(int);
int FUN_0c0a3eec(int);
int FUN_0c0a3fa4(int, int);
int FUN_0c0a43b8(int);
int FUN_0c0a5042(void);
int FUN_0c0a9d12(int, int, int);
int FUN_0c0ab5de(int);
int FUN_0c0dc1c0(int, int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c018cca(int a4);
int FUN_0c037b9c(int a4);
int FUN_0c072c34(int a4);
int FUN_0c014dc8(int a4, int a5, int a6, int a7);
int FUN_0c0d2018(int a4);
int FUN_0c024446(int a4, int a5, int a6, int a7);
int FUN_0c0a58f4(int a4, int a5, int a6, int a7);
int FUN_0c07350e(int a4, int a5, int a6, int a7);

int FUN_0c018cca(int a4)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t17;
    register int t20;
    register int t82;
    register int t83;
    register int t84;
    register int t92;
    register int t93;
    register int t94;
    register int t100;

    t0 = *(signed char *)((a4 + 0x3));
    if ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) != (*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3)))) {
        t3 = *(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3));
        *(unsigned char *)(((int)stk + 0)) = t3;
        FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + a4)) + 0x0))), 0xC664AF0, (*(signed char *)((((signed char)t3 << 1) + 0xC11B774))));
        (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3))) << 2))))))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
    }
    t17 = *(signed char *)((a4 + 0x8));
    switch (t17) {
    case 0:
        if ((int)(*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) >= (int)0x6) {
            *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = 1.0f;
        } else {
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = 0.0f;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = (*(float *)(((((((struct oEC_short *)(a4))->v)) << 2) + 0xC11B724)));
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
            if (((((struct oEC_short *)(a4))->v)) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        break;
    case 1:
        (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = (*(float *)(((((((struct oEC_short *)(a4))->v)) << 2) + 0xC11B724)));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        break;
    case 2:
        *(unsigned char *)((a4 + 0xF)) = ((-(*(signed char *)((a4 + 0xF)))) + 0x1);
        t20 = *(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2));
        *(unsigned char *)(((int)stk + 0)) = t20;
        FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + a4)) + 0x0))), 0xC664AF0, (*(signed char *)(((((signed char)t20 << 1) + (*(signed char *)((a4 + 0xF)))) + 0xC11B774))));
        *(unsigned char *)((a4 + 0x8)) = 0x0;
        break;
    }
    if ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x0))) == 0) {
        t82 = (0x2E0 + a4);
        t83 = 0x0;
        for (;;) {
            t84 = *(int *)((t82 + 0x0));
            t82 = (t82 + 0x4);
            t83 = (t83 + 0x1);
            (((struct o40_float *)(t84))->v) = 0.5f;
            if ((int)t83 >= (int)0x7) {
                break;
            }
        }
    }
    if (((*(signed char *)(((((signed char)t0 << 2) << 2) + 0xC3622EA))) - (*(signed char *)((a4 + 0xE)))) == 1) {
        t92 = (0x2E0 + a4);
        t93 = 0x0;
        for (;;) {
            t94 = *(int *)((t92 + 0x0));
            t92 = (t92 + 0x4);
            t93 = (t93 + 0x1);
            (((struct o40_float *)(t94))->v) = 1.0f;
            if ((int)t93 >= (int)0x7) {
                break;
            }
        }
    }
    *(unsigned char *)((a4 + 0xE)) = (*(signed char *)(((((signed char)t0 << 2) << 2) + 0xC3622EA)));
    t100 = FUN_0c0195a2(a4);
    if ((signed char)t100 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t100;
}

int FUN_0c037b9c(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t11;
    register float u16;
    register int t17;
    register int t21;
    register int t22;
    register float u23;
    register int t32;
    register int t33;
    register int t48;
    register int t54;
    register int t58;
    register int t83;
    register int t89;
    register int t93;
    register int t99;
    register int t36;
    register int t18;
    register int t19;
    register int t20;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t36 = (FUN_0c059330(a4));
                } else {
                    t36 = t3;
                    if (t3 == 4) {
                        t36 = (FUN_0c059330(a4));
                    }
                }
            } else {
                t11 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
                (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
                u16 = *(float *)(((int)stk + 12));
                (((struct o28_float *)(a4))->v) = u16;
                t17 = 0xC037D6C;
                t21 = 0x0;
                t22 = 0x0;
                u23 = u16;
                for (;;) {
                    if ((int)t22 >= (int)0x3) {
                        break;
                    }
                    t19 = 0x2E0;
                    t17 = 0x1C;
                    t22 = (t22 + 0x1);
                    t19 = (t19 + a4);
                    t19 = (t19 + t21);
                    t20 = (*(int *)((t19 + 0x0)));
                    u23 = (*(float *)((t20 + t17)));
                    u23 = (u23 + 0.049999997f);
                    *(float *)((t20 + t17)) = u23;
                    t17 = 0x20;
                    t20 = 0x2E0;
                    t20 = (t20 + a4);
                    t20 = (t20 + t21);
                    t19 = (*(int *)((t20 + 0x0)));
                    t20 = 0x2E0;
                    u23 = (*(float *)((t19 + t17)));
                    t20 = (t20 + a4);
                    u23 = (u23 + 0.049999997f);
                    t20 = (t20 + t21);
                    *(float *)((t19 + t17)) = u23;
                    t17 = 0x24;
                    t19 = (*(int *)((t20 + 0x0)));
                    t20 = 0x2E0;
                    u23 = (*(float *)((t19 + t17)));
                    t20 = (t20 + a4);
                    u23 = (u23 + 0.049999997f);
                    t20 = (t20 + t21);
                    *(float *)((t19 + t17)) = u23;
                    t19 = (*(int *)((t20 + 0x0)));
                    t18 = (*(int *)((t19 + 0x18)));
                    t18 = (t18 - 182);
                    *(unsigned int *)((t19 + 0x18)) = t18;
                    t21 = (t21 + 0x4);
                }
                t32 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t32 - 1);
                t36 = 0xEC;
                if ((short)(t32 - 1) == 0) {
                    t33 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t33 + 0x1);
                    t36 = (t33 + 0x1);
                }
            }
            t99 = t36;
        } else {
            t48 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
            (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
            (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            t54 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t54 - 1);
            t99 = 0xEC;
            if ((short)(t54 - 1) == 0) {
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0x24;
                t58 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t58 + 0x1);
                t99 = (t58 + 0x1);
            }
        }
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x64;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t83 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
        (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
        (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
        (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
        t89 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t89 - 1);
        t99 = 0xEC;
        if ((short)(t89 - 1) == 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x24;
            t93 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t93 + 0x1);
            t99 = (t93 + 0x1);
        }
    }
    return t99;
}

int FUN_0c072c34(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 == 7) {
                                    t1 = *(signed char *)((a4 + 0x71F1));
                                    u0 = (((struct o70_float *)((((short)((short)t1 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v);
                                    (((struct o70_float *)((((short)((short)t1 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v) = (u0 - 1.0f);
                                    t1 = *(signed char *)((a4 + 0x71F1));
                                    u0 = (((struct o70_float *)((0x9A0 + ((short)((short)t1 * (short)0xDC0) + (0x300 + a4)))))->v);
                                    (((struct o74_float *)((0xA50 + ((short)((short)t1 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0x8;
                                        (((struct oF0_ushort *)(a4))->v) = 0x4;
                                    }
                                    return 0xF0;
                                }
                                if (t0 == 8) {
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0x9;
                                        (((struct oF0_ushort *)(a4))->v) = 0xA;
                                    }
                                    return 0xF0;
                                }
                                if (t0 == 9) {
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    t2 = 0xF0;
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0xA;
                                        t2 = 0xA;
                                    }
                                    return t2;
                                }
                                if (t0 == 10) {
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        return FUN_0c0a2080(a4, 0xA50, 0x3, 0xA);
                                    }
                                    return 0x71AA;
                                }
                                return t0;
                            }
                            t0 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                *(unsigned char *)((a4 + 0xA)) = 0x7;
                                (((struct oF0_ushort *)(a4))->v) = 0x3;
                            }
                            return 0xF0;
                        }
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v);
                        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v) = (u0 + 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o70_float *)((0x9A0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                        (((struct o74_float *)((0xA50 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                        t0 = (((struct oF0_short *)(a4))->v);
                        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = 0x6;
                            (((struct oF0_ushort *)(a4))->v) = 0x6;
                        }
                        return 0xF0;
                    }
                    t0 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                    if ((short)(t0 - 1) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = 0x5;
                        (((struct oF0_ushort *)(a4))->v) = 0x3;
                    }
                    return 0xF0;
                }
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0xA)) = 0x4;
                    (((struct oF0_ushort *)(a4))->v) = 0x3;
                }
                return 0xF0;
            }
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                (((struct oF0_ushort *)(a4))->v) = 0x4;
            }
            return 0xF0;
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x3;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x5;
    }
    return 0xF0;
}

int FUN_0c014dc8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t0 == 1) {
        (((struct o17_ushort *)0xC7F302D)->v) = 0x0;
        if ((*(signed char *)0xC7F2F08) == 0) {
            t1 = *(signed char *)((a4 + 0x5));
            return ((int (*)(int, int, int, int))(0xC014FA4))(0x1, 0xC7F3046, t1, 0x0);
        }
        t1 = *(signed char *)0xC7F3081;
        *(volatile signed char *)((t1 + 0xC17AFB4));
        *(volatile signed char *)((a4 + 0x5));
        return ((int (*)(int, int, int, int))(0xC014FA0))(0x1, 0xC7F3046, t1, 0x0);
    }
    if ((unsigned char)t0 == 2) {
        FUN_0c01488c(0x0);
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 3) {
        FUN_0c01491c((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 4) {
        FUN_0c014a9c(0x0);
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 6) {
        FUN_0c014b0a((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 10) {
        FUN_0c014d02((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 11) {
        FUN_0c014d54((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 != 0xF0) {
        if ((unsigned char)t0 != 0xF1) {
            if ((unsigned char)t0 != 0xF2) {
                if ((unsigned char)t0 != 0xF5) {
                    if ((unsigned char)t0 != 0xF6) {
                        if ((unsigned char)t0 != 0xF7) {
                            if ((unsigned char)t0 != 0xF8) {
                                if ((unsigned char)t0 != 0xF9) {
                                    if ((unsigned char)t0 == 0xFB) {
                                        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                    }
                                    if ((unsigned char)t0 != 0xFC) {
                                        if ((unsigned char)t0 != 0xFD) {
                                            if ((unsigned char)t0 == 0xFE) {
                                                return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                            }
                                            if ((unsigned char)t0 != 0xFF) {
                                                return ((int (*)(int, int, int, int))(0xC014FB2))(0x1, 0xC7F3046, 0x0, a7);
                                            }
                                            (((struct o2_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302F) + 0x1);
                                            return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                        }
                                        (((struct o19_ushort *)0xC7F302D)->v) = 0x0;
                                        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                    }
                                    (((struct o19_ushort *)0xC7F302D)->v) = 0x1;
                                    return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                }
                                (((struct o0_uchar *)0xC7F302D)->v) = (*(signed char *)((a4 + 0x4)));
                                if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 6) {
                                    FUN_0c014bf4();
                                    return ((int (*)(void))(0xC014FC4))();
                                }
                                if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 4) {
                                    if ((*(signed char *)0xC7F301E) == 0) {
                                        FUN_0c01491c((*(signed char *)((a4 + 0x4))));
                                        return ((int (*)(void))(0xC014FC4))();
                                    }
                                    return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                }
                                FUN_0c01491c((*(signed char *)((a4 + 0x4))));
                                return ((int (*)(void))(0xC014FC4))();
                            }
                            FUN_0c014d8a((*(signed char *)((a4 + 0x4))));
                            return ((int (*)(void))(0xC014FC4))();
                        }
                        FUN_0c0a3fa4((*(signed char *)0xC7F3081), (*(signed char *)((a4 + 0x4))));
                        return ((int (*)(void))(0xC014FC4))();
                    }
                    FUN_0c0a3eec((*(signed char *)((a4 + 0x4))));
                    return ((int (*)(void))(0xC014FC4))();
                }
                (((struct o0_uchar *)0xC361C5D)->v) = (*(signed char *)((a4 + 0x4)));
                FUN_0c0a370c((*(signed char *)0xC361C5D));
                return ((int (*)(void))(0xC014FC4))();
            }
            (((struct o13_ushort *)0xC7F302D)->v) = 0x1;
            return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
        }
        (((struct o15_ushort *)0xC7F302D)->v) = 0x1;
        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
    }
    FUN_0c058f4e();
    (((struct o13_float *)0xC361C5D)->v) = 0.0f;
    (((struct oF_float *)0xC361C5D)->v) = 0.0f;
    (((struct oB_float *)0xC361C5D)->v) = 0.0f;
    (((struct o7_float *)0xC361C5D)->v) = 0.0f;
    return ((int (*)(void))(0xC014FC4))();
}

int FUN_0c0d2018(int a4)
{
    register int t0;
    register int t1;

    (((struct o8C_uint *)(a4))->v) = (((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x4)))) + ((unsigned short)((((struct o8A_short *)(a4))->v)) << 2));
    t0 = (((struct o44_int *)(a4))->v);
    if ((t0 == 16) || ((t0 == 32) || ((t0 == 64) || (t0 == 0x80)))) {
        t0 = (((struct o88_short *)(a4))->v);
        if ((unsigned short)t0 != 0) {
            if ((unsigned short)t0 != 1) {
                if ((unsigned short)t0 != 2) {
                } else {
                    if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) - 1);
                    }
                    if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                        t0 = (((struct o8C_int *)(a4))->v);
                        *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) + 0x1);
                    }
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    if ((unsigned int)(*(short *)((t0 + 0x2))) >= (unsigned int)(*(short *)((((0xC33F604 + (signed char)((t1 << 1) + (t1 << 2))) + ((*(signed char *)((a4 + 0x4))) << 1)) + 0x12)))) {
                        *(unsigned short *)((((((struct o8C_int *)(a4))->v)) + 0x2)) = 0x0;
                    }
                }
            } else {
                if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 - 1);
                    if ((int)(signed char)(t1 - 1) < 0) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x2;
                    }
                }
                if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    t1 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)((t0 + 0x1)) = (t1 + 0x1);
                    if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                        *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x1)) = 0x0;
                    }
                }
            }
        } else {
            if ((0x40 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < (int)0xFFFFFFFF) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0x12;
                }
            }
            if ((0x80 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = (((struct o8C_int *)(a4))->v);
                t1 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x12) {
                    *(unsigned char *)((((((struct o8C_int *)(a4))->v)) + 0x0)) = 0xFFFFFFFF;
                }
            }
        }
    }
    (((struct o9A_ushort *)(a4))->v) = (*(short *)((0xC33F62E + ((*(signed char *)((((((struct o8C_int *)(a4))->v)) + 0x1))) << 1))));
    t0 = (((struct o8C_int *)(a4))->v);
    t1 = *(signed char *)((t0 + 0x1));
    (((struct o90_uint *)(a4))->v) = ((((unsigned short)(*(short *)(((t1 << 1) + 0xC33F62E))) * (unsigned short)(*(short *)((t0 + 0x2)))) << 1) + (*(int *)((((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + (t1 << 2)) + 0xC))));
    if ((0x2 & ((((struct o48_int *)(a4))->v))) != 0) {
        (((struct o54_ushort *)(a4))->v) = 0x1;
        (((struct o56_ushort *)(a4))->v) = 0x1;
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) != 0) {
        (((struct o56_ushort *)(a4))->v) = 0x3;
        t1 = 0x56;
    }
    return t1;
}

int FUN_0c024446(int a4, int a5, int a6, int a7)
{

    return ((int (*)(int, int, int, int))(0xC02465A))(a4, a5, a6, a7);
}

int FUN_0c0a58f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 == 3) {
                    t1 = *(signed char *)0xC7F2EE8;
                    if ((unsigned char)t1 != 0) {
                        if ((unsigned char)t1 != 1) {
                            if ((unsigned char)t1 != 2) {
                                (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                                (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
                                *(unsigned short *)0xC7F3036 = 0x1E;
                                return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                            }
                            if (((*(int *)(((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F8))) & 0x604) != 0) {
                                *(unsigned short *)0xC7F3036 = 0x1;
                            }
                            t1 = *(short *)0xC7F3036;
                            *(unsigned short *)0xC7F3036 = (t1 - 1);
                            if ((int)(short)(t1 - 1) <= 0) {
                                (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                                return ((int (*)(int, int, int, int))(0xC0A5AD8))((signed char)((((a4 << 2) << 1) + a4) << 2), 0xC7F2EE7, 0x0, 0xC7F3036);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A5AD8))((signed char)((((a4 << 2) << 1) + a4) << 2), 0xC7F2EE7, 0x0, 0xC7F3036);
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        *(unsigned short *)0xC7F3036 = 0x78;
                    }
                    t1 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        *(unsigned short *)0xC7F3036 = 0x78;
                        return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                if ((unsigned char)t0 == 4) {
                    t0 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        return ((int (*)(int, int, int, int))(0xC0A5AC6))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                return ((int (*)(int, int, int, int))(0xC0A5ACE))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
            }
            t0 = *(signed char *)0xC7F2EE8;
            if ((unsigned char)t0 != 0) {
                if ((unsigned char)t0 == 1) {
                    t0 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
                t0 = 0x7;
                if ((int)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) >= (int)0x7) {
                    t0 = 0x8;
                }
                FUN_0c0a9d12(a4, (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))), t0);
                t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56));
                if ((int)t0 > 0) {
                    if ((int)t0 <= (int)0xA) {
                        return FUN_0c0ab5de((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))));
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            t0 = FUN_0c0a5042();
            if ((*(signed char *)((t0 + 0x8))) != 2) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            if ((*(signed char *)((t0 + 0x9))) != 3) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
            *(unsigned short *)0xC7F3036 = 0x3C;
            if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) != 7) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0), a5, a6, a7);
            }
            if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x74))) != 0) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0), a5, a6, a7);
            }
            FUN_0c0dc1c0(0x5, 0x3C, 0x2, 0x5);
            (((struct o74_uchar *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x1;
            *(unsigned short *)0xC7F3036 = 0x78;
            return ((int (*)(void))(0xC0A5AD8))();
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    }
    (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
    return FUN_0c0a43b8(a4);
}

int FUN_0c07350e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0734ec(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0734A8))(a4, a5, a6, a7);
            }
            return FUN_0c0733f4(a4);
        }
        return FUN_0c073374(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0732D8))(a4, a5, a6, a7);
}
