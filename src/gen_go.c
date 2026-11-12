/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0396bc(int, int);
int FUN_0c039aa0(int, int);
int FUN_0c039c6c(int, int, int);
int FUN_0c03b4d0(int, int, int, int, float);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int FUN_0c04bef2(int, int, int, int);
int FUN_0c0641a0(int, float, float);
int FUN_0c0674c0(int);
int FUN_0c067a68(int, int, int, int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a828(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09c894(int);
int FUN_0c09c974(int, int, float);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2080(int, int, int, int, int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a5086(void);
int FUN_0c0a5ae6(int, int, int, int);
int FUN_0c0d8f10(int, int, int);
int FUN_0c0daaf8(int, int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(int);
int thunk_FUN_0c062242(int);
int FUN_0c07fd0a(int a4);
int FUN_0c081204(int a4, int a5, int a6, int a7);
int FUN_0c0a5d68(int a4, int a5, int a6, int a7);
int FUN_0c09bcbc(int a4, int a5, int a6, int a7);

int FUN_0c07fd0a(int a4)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t8;
    register int t15;
    register int t16;
    register int t19;
    register int t26;
    register int t30;
    register int t42;
    register int t45;
    register int t60;
    register int t66;
    register int t68;
    register int t69;
    register int t82;
    register int t121;
    register int t118;
    register int t139;
    register int t144;
    register int t157;
    register int t162;
    register int t192;
    register int t191;
    register int t210;
    register int t222;
    register int t226;
    register int t250;
    register int t249;
    register int t259;
    register int t268;
    int t3;
    register int t4;
    register int t5;
    int t27;
    register int t28;
    int t40;
    int t61;
    register int t62;
    register int t63;
    register int t116;
    register int t154;
    int t158;
    register int t159;
    register int t160;
    int t223;
    register int t224;
    int t240;

    t0 = *(signed char *)((a4 + 0x7209));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                t1 = *(signed char *)((a4 + 0xA));
                if (t1 != 0) {
                    if (t1 != 1) {
                        return t1;
                    }
                    t2 = (((struct oEE_short *)(a4))->v);
                    if (((int)t2 < (int)0x9) && (t3 = (int)(((unsigned int)t2) >> 31), t4 = (((struct oEC_short *)(a4))->v), t5 = *(signed char *)(((signed char)((t2 << 1) + t2) + 0xC337494)), t4 == (unsigned char)t5)) {
                        t6 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                        t8 = *(signed char *)((a4 + 0xEE));
                        thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(unsigned char)(*(signed char *)(((signed char)((t8 << 1) + t8) + 0xC337495))) * (short)0xB0)));
                        FUN_0c04bef2((((int)stk + 20) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x3);
                        t15 = *(signed char *)((a4 + 0x3));
                        t16 = 0x14;
                        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x6) {
                            t16 = 0x3;
                        }
                        FUN_0c0a3796(((-t15) + 0x1), t16);
                        t19 = *(signed char *)((a4 + 0xEE));
                        FUN_0c08eba8(a4, (*(signed char *)(((signed char)((t19 << 1) + t19) + 0xC337496))));
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    }
                    t26 = (((struct oF0_short *)(a4))->v);
                    if (((int)t26 < (int)0x6) && (t27 = (((struct oEC_short *)(a4))->v), t28 = *(int *)((((short)t26 << 2) + 0xC337540)), t27 == t28)) {
                        t30 = *(signed char *)0xC7F3051;
                        FUN_0c0daaf8((*(signed char *)(((((((struct oF0_short *)(a4))->v)) + (0xC337558 + (signed char)((t30 << 1) + (t30 << 2)))) + 0x0))), (*(signed char *)((a4 + 0x3))));
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                    }
                    if (((int)((((struct oF2_short *)(a4))->v)) < (int)0x7) && (t40 = (((struct oF2_short *)(a4))->v), (int)t40 > 0)) {
                        t42 = *(signed char *)((a4 + 0xF2));
                        if (((((struct oEC_short *)(a4))->v)) == ((*(int *)(((signed char)(((t42 << 1) + t42) << 2) + 0xC3374B0))) - 1)) {
                            t45 = *(signed char *)((a4 + 0x3));
                            *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4);
                            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                            FUN_0c0396bc(a4, (((int)stk + 20) + 0x8));
                        }
                    }
                    t60 = (((struct oF2_short *)(a4))->v);
                    if (((int)t60 < (int)0x9) && (t61 = (int)(((unsigned int)t60) >> 31), t62 = (((struct oEC_short *)(a4))->v), t63 = *(int *)(((signed char)(((t60 << 1) + t60) << 2) + 0xC3374B0)), t62 == t63)) {
                        *(float *)0xC3375C8 = (*(float *)(((((((struct oF2_short *)(a4))->v)) << 2) + 0xC33751C)));
                        *(int *)((int)stk + 16) = 0xC3375C4;
                        *(int *)((int)stk + 12) = 0xC3375B8;
                        *(int *)((int)stk + 8) = 0x52;
                        t66 = *(signed char *)((a4 + 0xF2));
                        *(unsigned int *)(((int)stk + 24)) = (0xC3374B0 + (signed char)(((t66 << 1) + t66) << 2));
                        t68 = *(int *)(((0xC3374B0 + (signed char)(((t66 << 1) + t66) << 2)) + 0x8));
                        *(int *)((int)stk + 4) = (signed char)t68;
                        *(int *)((int)stk + 0) = 0x16;
                        t69 = *(signed char *)((a4 + 0x3));
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = t69;
                        FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, (*(int *)(((*(int *)(((int)stk + 24))) + 0x4))), ((signed char)((((t69 << 1) + t69) << 2) << 1) + 0xC6002D0), 0x16, (signed char)t68, 0x52, 0xC3375B8, 0xC3375C4);
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xC4) {
                        t82 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4);
                        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
                        FUN_0c039aa0((((int)stk + 20) + 0x8), (*(signed char *)((a4 + 0x3))));
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xC3) {
                        FUN_0c039c6c((a4 + 0x20), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))));
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xCD) {
                        FUN_0c039c6c((a4 + 0x20), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))));
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    FUN_0c09a910(a4);
                    FUN_0c09da1c(a4);
                    t121 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        FUN_0c0e6fe8(0xC337368);
                        FUN_0c0e6fe8(t116);
                        t118 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a2080))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        t121 = (FUN_0c0d8f10(0x0, (*(signed char *)((a4 + 0x3))), 0x40));
                    }
                    return t121;
                }
                FUN_0c09c974(a4, 0x0, 142.0f);
                (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
                FUN_0c09a808(a4, 0x1, 0x70);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
                    (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                }
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x0;
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x3;
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                (((struct oF2_ushort *)(a4))->v) = 0x0;
                return 0xF2;
            }
            t139 = *(signed char *)((a4 + 0xA));
            if (t139 != 0) {
                if (t139 != 1) {
                    if (t139 != 2) {
                        if (t139 != 3) {
                            if (t139 != 4) {
                                return t139;
                            }
                            FUN_0c09a910(a4);
                            FUN_0c09da1c(a4);
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return ((int (*)(int))(FUN_0c0a2080))(a4);
                            }
                            return 0x71AA;
                        }
                        FUN_0c09a910(a4);
                        t144 = FUN_0c09e7b8(a4);
                        if ((signed char)t144 != 0) {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            FUN_0c09a808(a4, 0x1, 0x92);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            return 0x71A8;
                        }
                        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                        return 0x24;
                    }
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    FUN_0c09a808(a4, 0x4, 0x4);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    FUN_0c0e6fe8(0xC337368);
                    (((struct o3C_float *)(a4))->v) = -7.0f;
                    FUN_0c0e6fe8(t154);
                    (((struct o48_float *)(a4))->v) = -1.0f;
                    return 0x48;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t157 = (((struct oEE_short *)(a4))->v);
                if (((int)t157 < (int)0x6) && (t158 = (((struct oEC_short *)(a4))->v), t159 = (int)(((unsigned int)((short)t157 << 2)) >> 31), t160 = *(int *)(((((short)t157 << 2) << 1) + 0xC33745C)), t158 == t160)) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    t162 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) << 1) + 0xC337460))) * (short)0xB0)));
                    FUN_0c04bef2((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
                    if (((((struct oEE_short *)(a4))->v)) != 0) {
                        if (((((struct oEE_short *)(a4))->v)) == 6) {
                            FUN_0c08eba8(a4, 0x34);
                            (((struct oF2_ushort *)(a4))->v) = 0x1;
                        } else {
                            FUN_0c08eba8(a4, 0x32);
                        }
                    }
                    FUN_0c0a3796(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
                }
                FUN_0c09a910(a4);
                FUN_0c09da1c(a4);
                t192 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t191 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t191 + 0x1);
                    t192 = (t191 + 0x1);
                }
                return t192;
            }
            FUN_0c09c974(a4, 0x0, 0.0f);
            (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
            FUN_0c09a808(a4, 0x4, 0x3);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
                (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            }
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x0;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
            (((struct oEC_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
            (((struct oEE_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
            return 0xEE;
        }
        return FUN_0c0674c0(a4);
    }
    t210 = *(signed char *)((a4 + 0xA));
    if (t210 != 0) {
        if (t210 != 1) {
            return t210;
        }
        FUN_0c09a910(a4);
        FUN_0c09da1c(a4);
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            FUN_0c09a91a((*(int *)((a4 + 0x1C))));
            FUN_0c09da1c((*(int *)((a4 + 0x1C))));
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t222 = (((struct oEE_short *)(a4))->v);
        if (((int)t222 < (int)0x4) && (t223 = (((struct oEC_short *)(a4))->v), t224 = *(int *)((((short)t222 << 2) + 0xC337448)), t223 == t224)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            t226 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            FUN_0c04bef2((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
            FUN_0c08eba8(a4, 0x31);
            FUN_0c0a3796(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
        }
        if ((((((struct oEC_short *)(a4))->v)) == (*(int *)0xC337458)) && (t240 = (((struct oF0_short *)(a4))->v), t240 == 0)) {
            (((struct oF0_ushort *)(a4))->v) = 0x1;
            FUN_0c08eba8(a4, 0x30);
            FUN_0c08deec(a4, 0x30);
        }
        t250 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t249 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a2080))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t250 = 0x71A8;
        }
        return t250;
    }
    FUN_0c09a808(a4, 0x4, 0x1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    FUN_0c09a828((*(int *)((a4 + 0x1C))), 0x4, 0x31);
    t259 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t259))->v) = 0x1;
    (((struct o71A8_uchar *)(t259))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    FUN_0c09c974(a4, 0x0, 150.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t268 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t268 + 0x1);
    return (t268 + 0x1);
}

int FUN_0c081204(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t0;
    register int t1;
    register int t4;
    register int t8;
    register float u10;
    register int t21;
    register int t26;
    register int t39;
    register int t42;
    register int t45;
    register int t49;
    register int t54;
    register int t53;
    register int t59;
    register int t24;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 7) {
            return FUN_0c067a68(a4, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0xA));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    return t1;
                }
                *(int *)((int)stk + 24) = a4;
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t4 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                    *(volatile short *)((a4 + 0xEC));
                    t8 = FUN_0c0e6e5c();
                    if (t8 == 0) {
                        u10 = 0.049999997f;
                        u10 = u10 + 0.0199999996f * (float)((((struct oEE_short *)(a4))->v));
                        FUN_0c03b4d0(a4, (((int)stk + 0) + 0x4), 0xF, 0x0, u10);
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    }
                }
                t21 = FUN_0c09a910(a4);
                if ((signed char)t21 != 0) {
                    t24 = (FUN_0c0a2080(a4, 0x0, 0x0, 0x0, a4));
                } else {
                    t24 = (FUN_0c09da1c(a4));
                }
                return t24;
            }
            *(int *)((int)stk + 24) = a4;
            t26 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t26 - 1);
            if ((int)(short)(t26 - 1) > 0) {
                (((struct o2D9_uchar *)(a4))->v) = 0x2;
            }
            if (0.0f > ((((struct o274_float *)(a4))->v))) {
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) / 2.0f);
            }
            FUN_0c09a910(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t39 = FUN_0c09e7b8(a4);
                if ((signed char)t39 != 0) {
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t42 = FUN_0c09c894(a4);
                        if ((signed char)t42 != 0) {
                            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            FUN_0c09a808(a4, 0x1, 0xFFFFFF98);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            t45 = *(signed char *)((a4 + 0xA));
                            *(unsigned char *)((a4 + 0xA)) = (t45 + 0x1);
                            return (t45 + 0x1);
                        }
                        return FUN_0c0a2e26(a4, 0x6, 0x0);
                    }
                    return FUN_0c0a2e26(a4, 0x6, 0x0);
                }
            }
            FUN_0c09d990(a4);
            return FUN_0c09d9bc(a4);
        }
        *(int *)((int)stk + 24) = a4;
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        FUN_0c09a910(a4);
        t49 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t49 - 1);
        t54 = 0xEC;
        if ((int)(short)(t49 - 1) <= 0) {
            (((struct o71BC_uchar *)(a4))->v) = 0x2;
            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
            FUN_0c0641a0(a4, 35.0f, -3.5f);
            FUN_0c09a808(a4, 0x1, 0xFFFFFF97);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x2;
            t53 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t53 + 0x1);
            t54 = (t53 + 0x1);
        }
        return t54;
    }
    t59 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC33785C));
    return ((int (*)(int, int, int, int))(t59))(a4, a5, a6, a7);
}

int FUN_0c0a5d68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    return ((int (*)(void))(0xC0A5CEA))();
                }
                return ((int (*)(void))(0xC0A5CB8))();
            }
            return FUN_0c0a5ae6(a4, a5, a6, a7);
        }
        return ((int (*)(void))(0xC0A55C6))();
    }
    return FUN_0c0a5086();
}

int FUN_0c09bcbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 0) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 3) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 4) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 6) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 9) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 25) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 27) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 28) {
        return ((int (*)(int, int, int, int))(0xC09C2BC))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21A) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21E) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21F) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x220) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x236) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x237) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x238) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x239) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x242) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x243) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x244) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x248) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x249) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24A) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150D89, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24F) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150D89, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x250) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x251) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x252) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x253) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x254) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x255) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x256) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x257) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x258) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x259) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DAA, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25C) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25D) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25F) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x264) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x265) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x266) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x267) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x268) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x269) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26B) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26D) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26E) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x271) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x272) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x276) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x277) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x278) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x279) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x27A) {
        return ((int (*)(int, int, int, int))(0xC09C224))(a4, a5, 0xC150DCB, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C2) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C3) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C4) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C5) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C6) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C7) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C8) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C9) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CA) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CB) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CC) {
        return ((int (*)(int, int, int, int))(0xC09C21C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CF) {
        return ((int (*)(int, int, int, int))(0xC09C222))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D0) {
        return ((int (*)(int, int, int, int))(0xC09C222))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D1) {
        return ((int (*)(int, int, int, int))(0xC09C228))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D3) {
        return ((int (*)(int, int, int, int))(0xC09C246))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D4) {
        return ((int (*)(int, int, int, int))(0xC09C24C))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D7) {
        return ((int (*)(int, int, int, int))(0xC09C252))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D8) {
        return ((int (*)(int, int, int, int))(0xC09C268))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D9) {
        return ((int (*)(int, int, int, int))(0xC09C26E))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DA) {
        return ((int (*)(int, int, int, int))(0xC09C292))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DB) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DC) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DD) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DE) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DF) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E0) {
        return ((int (*)(int, int, int, int))(0xC09C2B0))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E5) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E6) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E7) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E8) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E9) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EA) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EB) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EC) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2ED) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EE) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EF) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F0) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F1) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F2) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F3) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F4) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F5) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F6) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F7) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F8) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F9) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FA) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FB) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FC) {
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    if (((t1 << 8) + (unsigned char)t0) != 0x2FD) {
        if (((t1 << 8) + (unsigned char)t0) != 0x2FE) {
            if (((t1 << 8) + (unsigned char)t0) != 0x2FF) {
                return ((t1 << 8) + (unsigned char)t0);
            }
            return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09C2B6))(a4, a5, a6, a7);
}
