/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c03b5da(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c03b660(int a4, int a5, int a6, int a7);
int FUN_0c0584e8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0c8580(int a4, int a5, int a6, int a7);

int FUN_0c03b660(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    if (t1 == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    if (((*(signed char *)((a4 + 0x4))) == 1) && (t0 = *(signed char *)((0x71BA + t1)), t0 != 28)) {
        *(unsigned char *)((a4 + 0x8)) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            FUN_0c03b5da(a4);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = *(signed char *)((a4 + 0x4));
            if (t0 != 0) {
                if (t0 != 2) {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.199999988f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.199999988f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.199999988f);
                }
            } else {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            }
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            return 0x4C;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    FUN_0c03b5da(a4);
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x5;
            }
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
            return 0x24;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x5;
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
    return 0x24;
}

int FUN_0c0584e8(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC4CFA80, (*(signed char *)((((short)((short)(*(signed char *)((a4 + 0x4))) * (short)0x1C) + 0xC14BC24) + 0x18))));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(volatile int *)((a4 + 0x2E0));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(volatile int *)((a4 + 0x2E0));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x11F;
        FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), 0xC4CFA80, ((*(signed char *)((((short)((short)(*(signed char *)((a4 + 0x4))) * (short)0x1C) + 0xC14BC24) + 0x19))) + 0x1));
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(volatile int *)((a4 + 0x2E4));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(volatile int *)((a4 + 0x2E4));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x11F;
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        t0 = *(signed char *)0xC7F2EE4;
                        t2 = (unsigned char)t0;
                        if ((unsigned char)t0 != 7) {
                            t0 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                            t2 = (t0 + 0x1);
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0299999993f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                u0 = (((struct o4_float *)0xC058744)->v);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - u0);
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - u0);
                t0 = 0xC;
                if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o8_float *)0xC058744)->v)))) {
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o0_float *)0xC058744)->v));
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0c8580(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t6;
    register int t11;
    register int t55;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    int t0;
    register float u3;
    register float u4;
    register int t22;
    register int t24;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t1 = a4;
    t2 = 0x4;
    for (;;) {
        t6 = *(int *)((((t2 << 2) + (0x2E0 + (*(int *)(((int)stk + 4))))) + 0x0));
        if (t2 == 4) {
            *(unsigned int *)((t6 + 0x18)) = ((*(int *)((t6 + 0x18))) + 0x71C);
        } else {
            t0 = (*(int *)((t6 + 0x18)));
            t0 = (t0 - 0x71C);
            *(unsigned int *)((t6 + 0x18)) = t0;
        }
        t11 = *(signed char *)(((t6 + 0x34) + 0xA));
        *(unsigned char *)(((t6 + 0x34) + 0xA)) = (t11 - 1);
        if ((signed char)(t11 - 1) == 0) {
            *(unsigned char *)(((t6 + 0x34) + 0xA)) = 0x1;
            t0 = (*(signed char *)(((t6 + 0x34) + 0x9)));
            t0 = (t0 + 0x1);
            t0 = t6;
            t0 = (t0 + 0x44);
            *(unsigned char *)(((t6 + 0x34) + 0x9)) = (FUN_0c0e6e5c(t1));
            *(unsigned int *)(((int)stk + 0)) = t0;
            u4 = 255.0f;
            u3 = (FUN_0c0df940());
            u3 = (u3 * u4);
            if (!(2.14748365e+09f > u3)) {
                u3 = (u3 - (2.14748365e+09f + 2.14748365e+09f));
            }
            t0 = (int)u3;
            FUN_0c0e6f24();
            t0 = (*(int *)(((int)stk + 0)));
            FUN_0c0e6fe8();
        } else {
            t22 = t0;
            t24 = t1;
            u25 = u3;
            u26 = u4;
        }
        u3 = u25;
        u4 = u26;
        t0 = t22;
        t1 = t24;
        if ((*(signed char *)(((t6 + 0x34) + 0x8))) != 0) {
            u4 = ((((struct o1C_float *)(t6))->v));
            u4 = (u4 + 0.399999976f);
            (((struct o1C_float *)(t6))->v) = u4;
            u3 = ((((struct o20_float *)(t6))->v));
            u3 = (u3 + 0.399999976f);
            (((struct o20_float *)(t6))->v) = u3;
            u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
            if (!(u4 > u3)) {
                u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
                t0 = 0x3F4CCCCC;
                (((struct o1C_float *)(t6))->v) = u4;
                u4 = ((((struct o4_float *)((t6 + 0x34)))->v));
                (((struct o20_float *)(t6))->v) = u4;
                u4 = (*(float *)&(t0));
                *(unsigned char *)(((t6 + 0x34) + 0x8)) = ((*(signed char *)(((t6 + 0x34) + 0x8))) ^ 0x1);
                u3 = ((((struct o4_float *)((t6 + 0x34)))->v));
                u3 = (u3 + u4);
                (((struct o4_float *)((t6 + 0x34)))->v) = u3;
                if (!(3.0f > u3)) {
                    (((struct o4_float *)((t6 + 0x34)))->v) = 3.0f;
                }
            }
        } else {
            u4 = ((((struct o1C_float *)(t6))->v));
            u4 = (u4 - 0.399999976f);
            (((struct o1C_float *)(t6))->v) = u4;
            u3 = ((((struct o20_float *)(t6))->v));
            u3 = (u3 - 0.399999976f);
            (((struct o20_float *)(t6))->v) = u3;
            u4 = ((((struct o34_float *)(t6))->v));
            if (!(u3 > u4)) {
                u4 = ((((struct o34_float *)(t6))->v));
                (((struct o1C_float *)(t6))->v) = u4;
                u4 = ((((struct o34_float *)(t6))->v));
                (((struct o20_float *)(t6))->v) = u4;
                *(unsigned char *)(((t6 + 0x34) + 0x8)) = ((*(signed char *)(((t6 + 0x34) + 0x8))) ^ 0x1);
                u3 = ((((struct o34_float *)(t6))->v));
                u4 = 0.799999952f;
                u3 = (u3 + u4);
                (((struct o34_float *)(t6))->v) = u3;
                if (!(2.5999999f > u3)) {
                    (((struct o4_float *)((t6 + 0x34)))->v) = 2.5999999f;
                }
            }
        }
        u4 = ((((struct o1C_float *)(t6))->v));
        t2 = (t2 + 0x1);
        u4 = (u4 / 1.5f);
        (((struct o1C_float *)(t6))->v) = u4;
        u3 = ((((struct o20_float *)(t6))->v));
        u3 = (u3 / 1.5f);
        (((struct o20_float *)(t6))->v) = u3;
        u4 = ((((struct o24_float *)(t6))->v));
        u4 = (u4 / 1.5f);
        (((struct o24_float *)(t6))->v) = u4;
        if ((int)t2 < (int)0x6) continue;
        break;
    }
    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t55 = *(int *)(((int)stk + 4));
    if ((*(signed char *)((((((struct o2E0_int *)(t55))->v)) + 0x0))) != 0) {
        *(unsigned char *)(((int)stk + 8)) = ((*(signed char *)(((int)stk + 8))) + 0x1);
        t59 = (((struct o2E0_int *)(t55))->v);
        t60 = *(signed char *)(((t59 + 0x34) + 0x1));
        *(unsigned char *)(((t59 + 0x34) + 0x1)) = (t60 - 1);
        if ((signed char)(t60 - 1) == 0) {
            t61 = *(signed char *)(((t59 + 0x34) + 0x0));
            (((struct o34_uchar *)(t59))->v) = (t61 + 0x1);
            if ((int)(signed char)(t61 + 0x1) >= (int)0x4) {
                *(unsigned char *)((t59 + 0x0)) = 0x0;
                return ((int (*)(int, int, int, int))(0xC0C8780))(t59, a5, a6, a7);
            }
            *(unsigned char *)(((t59 + 0x34) + 0x1)) = 0x2;
            t62 = *(int *)(((int)stk + 4));
            t63 = *(signed char *)(((t59 + 0x34) + 0x0));
            *(volatile signed char *)((t62 + 0x3));
            return ((int (*)(int, int, int, int))(0xC0C8774))(t59, t62, (t63 + 0x1C), a7);
        }
        return ((int (*)(int, int, int, int))(0xC0C8780))(t59, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C8780))((t55 + 0x2E0), a5, a6, a7);
}
