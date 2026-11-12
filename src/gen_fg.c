/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b7998(int);
int FUN_0c0be698(int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c0b7b88(int a4, int a5, int a6, int a7);
int FUN_0c0bdc20(int a4);
int FUN_0c060018(int a4);

int FUN_0c0b7b88(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register int t16;
    register int t21;
    register int t22;
    register float u41;
    register float u42;
    register float u43;
    register float t86;
    register float u89;
    register int t94;
    register int t98;
    register int t101;
    register int t109;
    register int t114;
    register int t115;
    register float u134;
    register float u135;
    register float u136;
    register float t179;
    register float u182;
    register int t187;
    register int t188;
    register int t191;
    register int t194;
    register int t195;
    register int t199;
    register int t29;
    register int t46;
    register int t122;
    register int t139;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    t0 = *(signed char *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c059132(0x1, 0x1, 0x2);
            if (t1 == 0) {
                return ((int (*)(void))(0xC0B7F58))();
            }
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC0B8430;
            (((struct o58_float *)(t1))->v) = 2.0f;
            (((struct o54_float *)(t1))->v) = 2.0f;
            (((struct o50_float *)(t1))->v) = 2.0f;
            t5 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            thunk_FUN_0c062242(((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4))));
            t8 = 0x0;
            for (;;) {
                if (t8 == 0) {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x0)) = 0x0;
                }
                *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t16 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))), ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), t8);
                t21 = (t8 << 2);
                t8 = (t8 + 0x1);
                t22 = *(int *)((((0x2E0 + t1) + t21) + 0x0));
                (((struct o24_float *)(t22))->v) = 1.0f;
                (((struct o20_float *)(t22))->v) = 1.0f;
                (((struct o1C_float *)(t22))->v) = 1.0f;
                if ((int)t8 >= (int)0x2) {
                    break;
                }
            }
            *(unsigned int *)((t1 + 0x1C)) = (*(int *)(((int)stk + 4)));
            if ((*(int *)(((int)stk + 8))) == 1) {
                if ((int)0x0 < (int)0xA) {
                    *(unsigned int *)((t1 + 0x2C)) = 0x0;
                    *(unsigned int *)((t1 + 0x30)) = (int)(((float)0x0 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0x10) {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFEAAB;
                        t29 = (0xFFFFFFF6 * 0x3C);
                    } else {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFDC72;
                        t29 = (0xFFFFFFF0 * 0x5A);
                    }
                    *(unsigned int *)((t1 + 0x30)) = (int)(((float)t29 * 65536.0f) / 360.0f);
                }
            } else {
                if ((int)0x0 < (int)0x6) {
                    *(unsigned int *)((t1 + 0x2C)) = 0x0;
                    u41 = (float)(0x0 * 0x3C);
                    *(unsigned int *)((t1 + 0x30)) = (int)((u41 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0xA) {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFEAAB;
                        u42 = (float)(int)(0xFFFFFFFA * 0x5A);
                        *(unsigned int *)((t1 + 0x30)) = (int)((u42 * 65536.0f) / 360.0f);
                    } else {
                        if ((int)0x0 < (int)0xD) {
                            *(unsigned int *)((t1 + 0x2C)) = 0xFFFFDC72;
                            u43 = (float)(int)(0xFFFFFFF6 * 0x78);
                            *(unsigned int *)((t1 + 0x30)) = (int)((u43 * 65536.0f) / 360.0f);
                        } else {
                            if ((int)0x0 < (int)0x11) {
                                *(unsigned int *)((t1 + 0x2C)) = 0x1555;
                                t46 = (0xFFFFFFF3 * 0x5A);
                            } else {
                                *(unsigned int *)((t1 + 0x2C)) = 0x238E;
                                t46 = (0xFFFFFFEF * 0x78);
                            }
                            *(unsigned int *)((t1 + 0x30)) = (int)(((float)t46 * 65536.0f) / 360.0f);
                        }
                    }
                }
            }
            *(unsigned int *)((t1 + 0x34)) = 0x0;
            t86 = FUN_0c0df4d0(((-(*(int *)((t1 + 0x30)))) + 0x14000));
            *(float *)(((int)stk + 0)) = t86;
            u89 = (t86 * (FUN_0c0dfa50(((-(*(int *)((t1 + 0x2C)))) + 0x14000))));
            (((struct o38_float *)(t1))->v) = (u89 * 35.0f);
            *(float *)(((int)stk + 0)) = (FUN_0c0dfa50(((-(*(int *)((t1 + 0x30)))) + 0x14000)));
            FUN_0c0dfa50(((-(*(int *)((t1 + 0x2C)))) + 0x14000));
            return ((int (*)(void))(0xC0B7F14))();
        }
        if (t0 == 2) {
            t94 = FUN_0c059132(0x1, 0x1, 0x2);
            if (t94 == 0) {
                return ((int (*)(void))(0xC0B7F58))();
            }
            *(unsigned char *)((t94 + 0x0)) = 0x1;
            *(unsigned char *)((t94 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
            *(unsigned char *)((t94 + 0x1)) = 0x1;
            *(unsigned short *)((t94 + 0x6)) = 0xF;
            *(unsigned char *)((t94 + 0x5)) = 0x19;
            *(unsigned int *)((t94 + 0x10)) = 0xC0B8430;
            (((struct o58_float *)(t94))->v) = 2.0f;
            (((struct o54_float *)(t94))->v) = 2.0f;
            (((struct o50_float *)(t94))->v) = 2.0f;
            t98 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            thunk_FUN_0c062242(((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t98 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t98 * (unsigned short)0x72D0) + 0xC7E40C4))));
            t101 = 0x0;
            for (;;) {
                if (t101 == 0) {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x0)) = 0x0;
                }
                *(unsigned short *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t109 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))), ((signed char)((((t109 << 1) + t109) << 2) << 1) + 0xC6002D0), t101);
                t114 = (t101 << 2);
                t101 = (t101 + 0x1);
                t115 = *(int *)((((0x2E0 + t94) + t114) + 0x0));
                (((struct o24_float *)(t115))->v) = 1.0f;
                (((struct o20_float *)(t115))->v) = 1.0f;
                (((struct o1C_float *)(t115))->v) = 1.0f;
                if ((int)t101 >= (int)0x2) {
                    break;
                }
            }
            *(unsigned int *)((t94 + 0x1C)) = (*(int *)(((int)stk + 4)));
            if ((*(int *)(((int)stk + 8))) == 1) {
                if ((int)0x0 < (int)0xA) {
                    *(unsigned int *)((t94 + 0x2C)) = 0x0;
                    *(unsigned int *)((t94 + 0x30)) = (int)(((float)0x0 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0x10) {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFEAAB;
                        t122 = (0xFFFFFFF6 * 0x3C);
                    } else {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFDC72;
                        t122 = (0xFFFFFFF0 * 0x5A);
                    }
                    *(unsigned int *)((t94 + 0x30)) = (int)(((float)t122 * 65536.0f) / 360.0f);
                }
            } else {
                if ((int)0x0 < (int)0x6) {
                    *(unsigned int *)((t94 + 0x2C)) = 0x0;
                    u134 = (float)(0x0 * 0x3C);
                    *(unsigned int *)((t94 + 0x30)) = (int)((u134 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0xA) {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFEAAB;
                        u135 = (float)(int)(0xFFFFFFFA * 0x5A);
                        *(unsigned int *)((t94 + 0x30)) = (int)((u135 * 65536.0f) / 360.0f);
                    } else {
                        if ((int)0x0 < (int)0xD) {
                            *(unsigned int *)((t94 + 0x2C)) = 0xFFFFDC72;
                            u136 = (float)(int)(0xFFFFFFF6 * 0x78);
                            *(unsigned int *)((t94 + 0x30)) = (int)((u136 * 65536.0f) / 360.0f);
                        } else {
                            if ((int)0x0 < (int)0x11) {
                                *(unsigned int *)((t94 + 0x2C)) = 0x1555;
                                t139 = (0xFFFFFFF3 * 0x5A);
                            } else {
                                *(unsigned int *)((t94 + 0x2C)) = 0x238E;
                                t139 = (0xFFFFFFEF * 0x78);
                            }
                            *(unsigned int *)((t94 + 0x30)) = (int)(((float)t139 * 65536.0f) / 360.0f);
                        }
                    }
                }
            }
            *(unsigned int *)((t94 + 0x34)) = 0x0;
            t179 = FUN_0c0df4d0(((-(*(int *)((t94 + 0x30)))) + 0x14000));
            *(float *)(((int)stk + 0)) = t179;
            u182 = (t179 * (FUN_0c0dfa50(((-(*(int *)((t94 + 0x2C)))) + 0x14000))));
            (((struct o38_float *)(t94))->v) = (u182 * 35.0f);
            *(float *)(((int)stk + 0)) = (FUN_0c0dfa50(((-(*(int *)((t94 + 0x30)))) + 0x14000)));
            FUN_0c0dfa50(((-(*(int *)((t94 + 0x2C)))) + 0x14000));
            return ((int (*)(void))(0xC0B7F14))();
        }
        return ((int (*)(int, int, int, int))(0xC0B7F64))(a4, a5, a6, a7);
    }
    t187 = FUN_0c059132(0x5, 0x1, 0xA);
    if (t187 == 0) {
        return ((int (*)(void))(0xC0B7F64))();
    }
    *(unsigned char *)((t187 + 0x0)) = 0x1;
    t188 = *(int *)(((int)stk + 4));
    *(unsigned char *)((t187 + 0x3)) = (*(signed char *)((t188 + 0x3)));
    *(unsigned char *)((t187 + 0x1)) = 0x1;
    *(unsigned short *)((t187 + 0x6)) = 0xF;
    *(unsigned char *)((t187 + 0x5)) = 0x19;
    *(unsigned int *)((t187 + 0x10)) = 0xC0B8430;
    FUN_0c0e6fe8();
    t191 = *(signed char *)((t188 + 0x3));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    t194 = 0x0;
    t195 = 0x0;
    for (;;) {
        *(unsigned char *)(((*(int *)((((0x2E0 + t187) + t195) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + t187) + t195) + 0x0))) + 0x2)) = 0x1F;
        t199 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
        FUN_0c06233a((*(int *)((((0x2E0 + t187) + t195) + 0x0))), ((signed char)((((t199 << 1) + t199) << 2) << 1) + 0xC6002D0), 0x4);
        FUN_0c0b7998((*(int *)((((0x2E0 + t187) + t195) + 0x0))));
        t194 = (t194 + 0x1);
        t195 = (t195 + 0x4);
        if ((int)t194 >= (int)0xA) {
            break;
        }
    }
    *(unsigned char *)(((0x105 + t187) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + t187) + 0x1)) = 0x1;
    (((struct o105_uchar *)(t187))->v) = 0x1;
    *(unsigned int *)((t187 + 0x1C)) = (*(int *)(((int)stk + 4)));
    (((struct oEC_ushort *)(t187))->v) = 0x41;
    return ((int (*)(int, int, int, int))(0xC0B7F64))((0x105 + t187), a5, a6, a7);
}

int FUN_0c0bdc20(int a4)
{
    int stk[6];
    register int t0;
    register int t3;
    register int t7;
    register int t8;
    register int t13;
    register int t37;
    register int t43;
    int t57;
    register int t59;
    register int t61;
    register int t63;
    register int t65;
    register float u68;
    register float u69;
    register float u71;
    register float t72;
    register int t91;
    register float u93;
    register float t95;
    register float u98;
    register float t100;
    register float u103;
    register int t119;
    register int t126;
    register int t129;
    register int t134;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 == 1) {
            *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + (*(int *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0xF) << 2) + 0xC33C4D8)))) & 0xFFFF);
            t7 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t7 - 1);
            t134 = 0xEC;
            if ((short)(t7 - 1) == 0) {
                (((struct oEE_ushort *)(a4))->v) = 0xA;
                t8 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t8 + 0x1);
                t134 = (t8 + 0x1);
            }
        } else {
            if (t3 == 2) {
                t13 = (((struct oEE_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t13 / 10.0f);
                if (!(((float)t13 / 10.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t134 = 0xEE;
            } else {
                t134 = (FUN_0c059330(a4));
            }
        }
    } else {
        t37 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t37 - 1);
        if ((short)(t37 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0xFF;
        }
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        } else {
            t43 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
            if ((*(float *)(((int)stk + 12))) == 0.0f) {
                *(float *)(((int)stk + 12)) = 9.99999997e-07f;
            }
            t57 = FUN_0c0df360(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
            t59 = (0xFFFF & t57);
            if (0.0f > (*(float *)(((int)stk + 12)))) {
                t59 = ((0xFFFF & t57) + 0x8000);
            }
            t61 = *(int *)((a4 + 0x30));
            t63 = (unsigned short)((unsigned short)(0x4000 + t59) - t61);
            if (((unsigned short)((unsigned short)(0x4000 + t59) - t61) & 0x8000) != 0) {
                t63 = ((unsigned short)((unsigned short)(0x4000 + t59) - t61) | 0xFFFF0000);
            }
            t65 = 0xFFFFFDDE;
            if ((int)t63 > 0) {
                t65 = 0x222;
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t65);
            u68 = *(float *)(((int)stk + 12));
            *(float *)(((int)stk + 8)) = u68;
            u69 = *(float *)(((int)stk + 20));
            *(float *)(((int)stk + 4)) = u69;
            u71 = (u69 * u69);
            u71 = u71 + u68 * (*(float *)(((int)stk + 8)));
            t72 = FUN_0c0df340(u71);
            FUN_0c0df360(((-t72) / (*(float *)(((int)stk + 16)))));
            *(volatile float *)(((int)stk + 16));
            *(volatile int *)((a4 + 0x2C));
        }
        t91 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        u93 = 30.0f;
        u93 = u93 + 0.5f * (float)t91;
        t95 = FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u98 = (t95 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o38_float *)(a4))->v) = (u98 * u93);
        t100 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u103 = (t100 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o40_float *)(a4))->v) = (u103 * u93);
        (((struct o3C_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * u93));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        if ((((((struct oEC_short *)(a4))->v)) & 3) == 0) {
            FUN_0c0be698(a4);
        }
        t119 = (((struct oEC_short *)(a4))->v);
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        t126 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t126 - 1);
        if (((short)(t126 - 1) != 0) && (t134 = *(signed char *)((a4 + 0x2D8)), t134 == 0)) {
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
            *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0xF;
            t129 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t129 + 0x1);
            t134 = (t129 + 0x1);
        }
    }
    return t134;
}

int FUN_0c060018(int a4)
{
    int stk[18];
    register int t0;
    register int t1;
    int t2;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = *(signed char *)(((int)stk + 8));
    t1 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
    t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC));
    t4 = *(signed char *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 0)) = (0xC4CFAB0 + (short)((short)(signed char)t4 * (short)0xF0));
    *(unsigned int *)(((int)stk + 68)) = (0xC14DA54 + ((t1 << 2) << 1));
    *(unsigned int *)(((int)stk + 20)) = (0xC4D02D0 + ((signed char)t4 * 0x98000));
    *(unsigned int *)(((int)stk + 64)) = (0xC4CFAB0 + (short)((short)(signed char)t4 * (short)0xF0));
    *(unsigned int *)(((int)stk + 52)) = (0xC4CFC90 + (short)((short)(signed char)t4 * (short)0x320));
    *(unsigned int *)(((int)stk + 56)) = ((0xC14DACC + ((t1 << 2) << 2)) + ((((-(0x1 & t2)) + 0x1) << 2) << 1));
    *(unsigned int *)(((int)stk + 60)) = ((0xC14DBBC + ((t1 << 2) << 2)) + ((((-(0x1 & t2)) + 0x1) << 2) << 1));
    *(unsigned int *)(((int)stk + 44)) = (((((-(0x1 & t2)) + 0x1) << 2) << 1) + (0xC14DCAC + ((t1 << 2) << 2)));
    *(unsigned int *)(((int)stk + 48)) = ((signed char)((((t4 << 2) + t4) << 2) << 1) + 0xC336578);
    return ((int (*)(int, int, int, int))(0xC060340))(t1, ((-(0x1 & t2)) + 0x1), (((((-(0x1 & t2)) + 0x1) << 2) << 1) + (0xC14DCAC + ((t1 << 2) << 2))), ((t1 << 2) << 2));
}
