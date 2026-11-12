/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c0624c4(int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e24f0(int, int, int, int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int, int, int, float, float, float);
int FUN_0c0c6424(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0acc54(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int FUN_0c0c6424(int a4, int a5, int a6, int a7, float f4)
{
    int stk[1];
    register float u2;
    register float u9;
    register int t28;
    register int t47;
    register float u48;
    register float u61;
    register float u66;
    register float u74;
    register float u93;
    register float u98;
    register float u106;
    register float u24;
    register float u25;
    register float u16;
    register int t38;
    register int t39;
    register int t40;
    register float u43;
    register float u44;
    register float u45;
    register int t112;

    *(unsigned char *)(((int)stk + 0)) = a6;
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
            } else {
                u2 = -25.0f;
                u2 = u2 + 30.0f * ((f4 + -1.0f));
                (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u2;
            }
            u16 = f4;
        } else {
            u9 = 12.0f;
            u9 = u9 + 12.0f * ((f4 + -1.0f));
            (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u9;
            u16 = 12.0f;
        }
        u24 = u16;
        u25 = (f4 + -1.0f);
    } else {
        (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((f4 + -1.0f) * 30.0f);
        u24 = f4;
        u25 = ((f4 + -1.0f) * 30.0f);
    }
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        return ((int (*)(int, int, int, int, float, float, float))(0xC0C6602))(a4, a5, a6, a7, u24, u25, 30.0f);
    }
    t28 = (((struct o2E4_int *)(a4))->v);
    if ((int)((((struct o28_float *)(t28))->v)) == 0) {
        FUN_0c0624c4((0x9C + t28), 0xC664988, (*(signed char *)(((((signed char)a5 << 1) + (*(signed char *)(((int)stk + 0)))) + 0xC33C7A8))));
        (((struct o28_float *)(t28))->v) = (((((struct o28_float *)(t28))->v)) + 1.0f);
    } else {
        t38 = a4;
        t39 = a5;
        t40 = a6;
        u43 = u24;
        u44 = u25;
        u45 = 30.0f;
    }
    t47 = (((struct o2E8_int *)(a4))->v);
    u48 = (((struct o28_float *)(t47))->v);
    if ((int)u48 != 0) {
        if ((int)u48 != 1) {
            FUN_0c0df940();
            *(unsigned int *)((t47 + 0x14)) = ((*(int *)((t47 + 0x14))) + ((((FUN_0c0e6f24()) << 8) << 2) << 1));
            *(volatile int *)((t47 + 0x14));
            t112 = 0x28;
        } else {
            *(volatile int *)((a4 + 0x2E4));
            FUN_0c0e6fe8(t38, t39, t40, u43, u44, u45);
            u61 = 93.0f;
            if ((signed char)a5 == 1) {
                u61 = 35.1999969f;
            }
            (((struct o8_float *)(t47))->v) = (((((struct o8_float *)(t47))->v)) + u61);
            u66 = 0.299999982f;
            if ((signed char)a5 == 0) {
                u66 = 0.5f;
            }
            (((struct o1C_float *)(t47))->v) = (((((struct o1C_float *)(t47))->v)) + u66);
            (((struct o20_float *)(t47))->v) = (((((struct o20_float *)(t47))->v)) + u66);
            (((struct o24_float *)(t47))->v) = (((((struct o24_float *)(t47))->v)) + u66);
            (((struct o44_float *)(t47))->v) = (((((struct o44_float *)(t47))->v)) + -0.199999988f);
            (((struct o48_float *)(t47))->v) = (((((struct o48_float *)(t47))->v)) + -0.199999988f);
            (((struct o4C_float *)(t47))->v) = (((((struct o4C_float *)(t47))->v)) + -0.199999988f);
            u74 = (((struct o2C_float *)(t47))->v);
            (((struct o2C_float *)(t47))->v) = (u74 - 1.0f);
            t112 = 0x2C;
            if (!((u74 - 1.0f) > 0.0f)) {
                *(unsigned char *)((t47 + 0x0)) = 0x0;
                (((struct o28_float *)(t47))->v) = (((((struct o28_float *)(t47))->v)) + 1.0f);
                t112 = 0x28;
            }
        }
    } else {
        *(unsigned char *)((t47 + 0x0)) = 0x1;
        (((struct o24_float *)(t47))->v) = 0.0f;
        (((struct o20_float *)(t47))->v) = 0.0f;
        (((struct o1C_float *)(t47))->v) = 0.0f;
        (((struct o4C_float *)(t47))->v) = 1.0f;
        (((struct o48_float *)(t47))->v) = 1.0f;
        (((struct o44_float *)(t47))->v) = 1.0f;
        (((struct o2C_float *)(t47))->v) = 5.0f;
        (((struct o28_float *)(t47))->v) = (((((struct o28_float *)(t47))->v)) + 1.0f);
        *(volatile int *)((a4 + 0x2E4));
        FUN_0c0e6fe8(t38, t39, t40, u43, u44, u45);
        u93 = 93.0f;
        if ((signed char)a5 == 1) {
            u93 = 35.1999969f;
        }
        (((struct o8_float *)(t47))->v) = (((((struct o8_float *)(t47))->v)) + u93);
        u98 = 0.299999982f;
        if ((signed char)a5 == 0) {
            u98 = 0.5f;
        }
        (((struct o1C_float *)(t47))->v) = (((((struct o1C_float *)(t47))->v)) + u98);
        (((struct o20_float *)(t47))->v) = (((((struct o20_float *)(t47))->v)) + u98);
        (((struct o24_float *)(t47))->v) = (((((struct o24_float *)(t47))->v)) + u98);
        (((struct o44_float *)(t47))->v) = (((((struct o44_float *)(t47))->v)) + -0.199999988f);
        (((struct o48_float *)(t47))->v) = (((((struct o48_float *)(t47))->v)) + -0.199999988f);
        (((struct o4C_float *)(t47))->v) = (((((struct o4C_float *)(t47))->v)) + -0.199999988f);
        u106 = (((struct o2C_float *)(t47))->v);
        (((struct o2C_float *)(t47))->v) = (u106 - 1.0f);
        t112 = 0x2C;
        if (!((u106 - 1.0f) > 0.0f)) {
            *(unsigned char *)((t47 + 0x0)) = 0x0;
            (((struct o28_float *)(t47))->v) = (((((struct o28_float *)(t47))->v)) + 1.0f);
            t112 = 0x28;
        }
    }
    return t112;
}

int FUN_0c0acc54(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t27;
    register int t28;
    register int t29;
    register int t36;
    register int t41;
    register int t38;
    register int t39;
    register int t40;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t66;
    register int t70;
    register int t78;
    register int t46;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = 0x0;
                t2 = (0x2E0 + a4);
                for (;;) {
                    t3 = *(int *)((t2 + 0x0));
                    t2 = (t2 + 0x4);
                    t1 = (t1 + 0x1);
                    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + -1.0f);
                    (((struct o8_float *)(t3))->v) = (((((struct o8_float *)(t3))->v)) + ((((struct o2C_float *)(t3))->v)));
                    (((struct o40_float *)(t3))->v) = (((((struct o40_float *)(t3))->v)) - ((((((struct o40_float *)(t3))->v)) * 0.049999997f)));
                    if ((int)t1 >= (int)0xA) {
                        break;
                    }
                }
                t10 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t10 + 0x1);
                t46 = 0xEC;
                if ((int)(short)(t10 + 0x1) >= (int)0x1E) {
                    t11 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t11 + 0x1);
                    t46 = (t11 + 0x1);
                }
            } else {
                t46 = (FUN_0c059330(a4, 0x0, a6, a7));
            }
        } else {
            t27 = 0x0;
            t28 = (0x2E0 + a4);
            for (;;) {
                t29 = *(int *)((t28 + 0x0));
                t28 = (t28 + 0x4);
                t27 = (t27 + 0x1);
                (((struct o4_float *)(t29))->v) = (((((struct o4_float *)(t29))->v)) + ((((struct o28_float *)(t29))->v)));
                (((struct o8_float *)(t29))->v) = (((((struct o8_float *)(t29))->v)) + ((((struct o2C_float *)(t29))->v)));
                (((struct oC_float *)(t29))->v) = (((((struct oC_float *)(t29))->v)) + ((((struct o30_float *)(t29))->v)));
                if ((int)t27 >= (int)0xA) {
                    break;
                }
            }
            t36 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t36 + 0x1);
            t41 = 0xEC;
            if ((int)(short)(t36 + 0x1) > (int)0xA) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t38 = 0x0;
                t39 = (0x2E0 + a4);
                for (;;) {
                    t40 = *(int *)((t39 + 0x0));
                    t39 = (t39 + 0x4);
                    t38 = (t38 + 0x1);
                    (((struct o28_float *)(t40))->v) = 0.0f;
                    (((struct o2C_float *)(t40))->v) = 0.0f;
                    (((struct o30_float *)(t40))->v) = 0.0f;
                    if ((int)t38 >= (int)0xA) {
                        break;
                    }
                }
                t41 = 0x30;
            }
            t46 = t41;
        }
        t78 = t46;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t59 = (0x2E0 + a4);
        t60 = 0x0;
        for (;;) {
            t61 = *(int *)((t59 + 0x0));
            t59 = (t59 + 0x4);
            t62 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 0)) = (((((struct o4_float *)(t61))->v)) - (*(float *)((((signed char)(((t62 << 1) + t62) << 2) + 0xC339DA4) + 0x0))));
            t66 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 4)) = (((((struct o8_float *)(t61))->v)) - ((((struct o4_float *)(((signed char)(((t66 << 1) + t66) << 2) + 0xC339DA4)))->v)));
            t70 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 8)) = (((((struct oC_float *)(t61))->v)) - ((((struct o8_float *)(((signed char)(((t70 << 1) + t70) << 2) + 0xC339DA4)))->v)));
            FUN_0c0e24f0(((int)stk + 0), 0x0, a6, a7);
            t60 = (t60 + 0x1);
            (((struct o28_float *)(t61))->v) = ((*(float *)(((int)stk + 0))) * 10.0f);
            (((struct o2C_float *)(t61))->v) = ((*(float *)(((int)stk + 4))) * 10.0f);
            (((struct o30_float *)(t61))->v) = ((*(float *)(((int)stk + 8))) * 10.0f);
            if ((int)t60 >= (int)0xA) {
                break;
            }
        }
        t78 = 0x30;
    }
    return t78;
}
