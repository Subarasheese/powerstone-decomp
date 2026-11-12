/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c015798(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c09a910(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int, int);
int FUN_0c0df920(void);
float FUN_0c0df940(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c072a4c(int a4);
int FUN_0c01425e(int a4, int a5, int a6, int a7);
int FUN_0c03b00a(int a4, int a5, int a6, int a7);

int FUN_0c072a4c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return FUN_0c0a2080(a4, 0x790, 0x580, 0x840);
                            }
                            return 0x71AA;
                        }
                        return t0;
                    }
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v) = (u0 - 1.5f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v) = (u0 - 1.5f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((0x790 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                    (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x840)))->v) = (1.0f / u0);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((0x4D0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                    (((struct o74_float *)((0x580 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                    t0 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                    t1 = 0xF0;
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = 0x5;
                        t1 = 0x5;
                    }
                    return t1;
                }
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = 0x4;
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                }
                return 0xF0;
            }
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v);
            (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v) = (u0 + 1.5f);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v);
            (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v) = (u0 + 1.5f);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((0x790 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
            (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x840)))->v) = (1.0f / u0);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((0x4D0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
            (((struct o74_float *)((0x580 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                (((struct oF0_ushort *)(a4))->v) = 0xA;
            }
            return 0xF0;
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x12;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x4;
    }
    return 0xF0;
}

int FUN_0c01425e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        FUN_0c015798(a4);
        u0 = *(float *)0xC361C60;
        if (u0 != 1.0f) {
            (((struct o5C_float *)(a4))->v) = u0;
        } else {
            if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
                u0 = (((struct o5C_float *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = (u0 - 0.0249999985f);
                if (0.0f > (u0 - 0.0249999985f)) {
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                }
            }
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x800);
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
        if ((*(float *)0xC014488) > ((((struct o24_float *)(a4))->v))) {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
        }
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        t3 = 0xEC;
        if (((short)(t2 - 1) != 0) && (t0 = *(short *)0xC7F3042, t0 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t3 = 0x2;
        }
        return t3;
    }
    FUN_0c0df940();
    
    t0 = FUN_0c0e6f24();
    FUN_0c0df940();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -35.0f);
    FUN_0c0df940();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o24_float *)(a4))->v) = (u0 + 58.0f);
    (((struct o28_float *)(a4))->v) = -14.3099995f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = -0.75f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (*(float *)(((((t0 << 2) << 1) + 0xC116880) + 0x0)));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((((t0 << 2) << 1) + 0xC116880)))->v));
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x28;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c015798(a4);
    u0 = *(float *)0xC361C60;
    if (u0 != 1.0f) {
        (((struct o5C_float *)(a4))->v) = u0;
    } else {
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            u0 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u0 - 0.0249999985f);
            if (0.0f > (u0 - 0.0249999985f)) {
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
        }
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x800);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
    if ((*(float *)0xC014488) > ((((struct o24_float *)(a4))->v))) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t2 = 0xEC;
    if (((short)(t0 - 1) != 0) && (t1 = *(short *)0xC7F3042, t1 == 0)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t2 = 0x2;
    }
    return t2;
}

int FUN_0c03b00a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 1.04999995f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 1.04999995f);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 1.04999995f);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
        t0 = 0x0;
        t1 = (0x2E0 + a4);
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x1);
            (((struct o4_float *)(t2))->v) = (((((struct o4_float *)(t2))->v)) * 1.0999999f);
            (((struct o8_float *)(t2))->v) = (((((struct o8_float *)(t2))->v)) - 0.5f);
            (((struct oC_float *)(t2))->v) = (((((struct oC_float *)(t2))->v)) * 1.0999999f);
            *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0xAAB);
            *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + 0x1555);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x1E) {
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0333333313f);
            if (!(((((struct o5C_float *)(a4))->v)) > 0.0f)) {
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        FUN_0c0df920();
        (((struct o4_float *)(t3))->v) = ((float)(FUN_0c0e6e5c()) + -25.0f);
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        FUN_0c0df920();
        (((struct o8_float *)(t3))->v) = ((float)(FUN_0c0e6e5c()) + 0.0f);
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        FUN_0c0df920();
        t2 = FUN_0c0e6e5c();
        t0 = (t0 + 0x1);
        (((struct oC_float *)(t3))->v) = ((float)t2 + -25.0f);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}
