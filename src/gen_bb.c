/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c02d9e4(int, int, float, float, float, float, float);
int FUN_0c030a1e(int, int, int, float);
int FUN_0c03c0fa(int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c09a910(int);
int FUN_0c09a91a(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2fd0(int, int, int, int);
int FUN_0c0abd20(int);
int FUN_0c0e6fe8(void);
int strlen(int);
int FUN_0c0b5a5c(int a4);
int FUN_0c030aec(int a4, int a5, int a6, float f4);
int FUN_0c0a73e2(int a4, int a5, int a6, int a7);
int FUN_0c067774(int a4);
int FUN_0c03c150(int a4, int a5, int a6, int a7);
int FUN_0c0b9710(int a4, int a5, int a6, int a7);
int FUN_0c012da2(int a4, int a5, int a6, int a7);
int FUN_0c01471a(int a4, int a5, int a6, int a7);
int FUN_0c04b7b4(int a4, int a5, int a6, int a7);

int FUN_0c0b5a5c(int a4)
{
    register int t0;
    register int t10;

    t0 = FUN_0c059132(0x4, 0x1, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5AFA;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t10 = 0xF;
    }
    return t10;
}

int FUN_0c030aec(int a4, int a5, int a6, float f4)
{
    int stk[8];
    register int t0;
    register int t30;
    register int t6;
    register float u7;
    int t8;
    register float u9;
    register float u17;
    register float u24;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(float *)(((int)stk + 12)) = f4;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = FUN_0c0555c4();
    t30 = t0;
    if (t0 != 0) {
        *(volatile int *)(((int)stk + 16));
        FUN_0c0e6fe8();
        FUN_0c030a1e((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), ((int)stk + 0), (*(float *)(((int)stk + 12))));
        t6 = strlen((*(int *)(((int)stk + 4))));
        u7 = *(float *)(((int)stk + 0));
        t8 = *(signed char *)(((int)stk + 8));
        if ((t8 != 0) && (t8 != 1)) {
            if (t8 != 2) {
            } else {
                u9 = (((float)t6 / 2.0f) * u7);
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((u9 * 32.0f)));
            }
        } else {
            u17 = (((float)t6 / 2.0f) * u7);
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((u17 * 16.0f)));
        }
        u24 = *(float *)(((int)stk + 0));
        t30 = (FUN_0c02d9e4((*(int *)(((int)stk + 4))), (*(signed char *)(((int)stk + 8))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), u24, u24, 9.0f));
    }
    return t30;
}

int FUN_0c0a73e2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, 0x5);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    return 0x50;
}

int FUN_0c067774(int a4)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t19;
    register int t29;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        return 0x71A8;
    }
    FUN_0c09da1c(a4);
    t4 = (((struct o719E_short *)(a4))->v);
    if (((int)(unsigned short)t4 >= (int)0x7) && ((int)(unsigned short)t4 <= (int)0x28)) {
        FUN_0c09a91a((*(int *)((a4 + 0x1C))));
        FUN_0c09da1c((*(int *)((a4 + 0x1C))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 40) {
        FUN_0c08eba8(a4, 0x33);
        FUN_0c08deec(a4, 0x33);
    }
    t19 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t19 - 1);
    t29 = 0xEE;
    if ((short)(t19 - 1) == 0) {
        t29 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t29 = 0x710A;
        }
    }
    return t29;
}

int FUN_0c03c150(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        FUN_0c03c0fa(a4);
        if (((((struct oEC_short *)(a4))->v)) != 0) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        }
        if (((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) == 22) && (t0 = (((struct oEC_short *)(a4))->v), t0 != 0)) {
            return 0xEC;
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return FUN_0c059330(a4, a5, a6, a7);
}

int FUN_0c0b9710(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x9))) == 0) {
        u0 = (((struct o50_float *)(a4))->v);
        (((struct o50_float *)(a4))->v) = (u0 + 1.19999993f);
        (((struct o58_float *)(a4))->v) = (u0 + 1.19999993f);
        (((struct o54_float *)(a4))->v) = (u0 + 1.19999993f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x5;
        }
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = FUN_0c0555dc();
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c012da2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC012ECC)->v));
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    u0 = (((struct o4_float *)0xC012ECC)->v);
    u1 = *(float *)0xC361C60;
    (((struct o5C_float *)(a4))->v) = (u1 * u0);
    if (!(1.0f > (u1 * u0))) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = 0x5C;
    if ((*(short *)0xC7F3042) != 0) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c01471a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (127.0f / (float)(*(signed char *)((a4 + 0x4)))));
        if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
            (((struct o38_float *)(a4))->v) = 0.0f;
        }
        (((struct oEC_ushort *)(a4))->v) = (int)((((struct o38_float *)(a4))->v));
        FUN_0c0a2fd0(0x0, ((((struct oEC_short *)(a4))->v)), a6, a7);
        t2 = 0xEC;
        if ((((((struct oEE_short *)(a4))->v)) == (unsigned char)(*(signed char *)0xC361C5D)) && (t0 = (((struct oEC_short *)(a4))->v), t0 != 0)) {
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct o38_float *)(a4))->v) = 127.0f;
    (((struct oEE_ushort *)(a4))->v) = (unsigned char)(*(signed char *)0xC361C5D);
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (127.0f / (float)(*(signed char *)((a4 + 0x4)))));
    if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    (((struct oEC_ushort *)(a4))->v) = (int)((((struct o38_float *)(a4))->v));
    FUN_0c0a2fd0(0x0, ((((struct oEC_short *)(a4))->v)), a6, a7);
    t0 = 0xEC;
    if ((((((struct oEE_short *)(a4))->v)) == (unsigned char)(*(signed char *)0xC361C5D)) && (t1 = (((struct oEC_short *)(a4))->v), t1 != 0)) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c04b7b4(int a4, int a5, int a6, int a7)
{
    register int t1;
    register float u5;
    register int t18;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t1 = (((struct o2E0_int *)(a4))->v);
        FUN_0c06233a(t1, 0xC4CFA68, (*(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC32203C))));
        u5 = *(float *)0xC04B8F8;
        (((struct o1C_float *)(t1))->v) = u5;
        (((struct o20_float *)(t1))->v) = u5;
        (((struct o24_float *)(t1))->v) = u5;
        *(unsigned int *)((t1 + 0x18)) = (*(int *)((a4 + 0x34)));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)((0xC32203C + ((((struct oEC_short *)(a4))->v))))) == -1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
        t18 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x7) {
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - u5);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - u5);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - u5);
            t18 = 0x4C;
        }
        return t18;
    }
    return FUN_0c059330(a4, a5, a6, a7);
}
