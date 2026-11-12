/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c06206e(int, int, int);
int FUN_0c0df920(void);
int FUN_0c0e6e5c(void);
extern int FUN_0c0e6fe8();
int FUN_0c0398fa(int a4, int a5, int a6, int a7);
float FUN_0c028b00(int a4, int a5, int a6, int a7);
int FUN_0c033114(int a4, int a5, int a6, int a7);

int FUN_0c0398fa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

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
        (((struct o8_float *)(t3))->v) = ((float)(FUN_0c0e6e5c()) + -25.0f);
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

float FUN_0c028b00(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_3 + 0x8));
    v0_2 = (v0_4);
    v0_0 = (v0_3);
    if ((v0_4 == 0)) goto L_C028B14;
    if ((v0_2 == 1)) goto L_C028B22;
    L_C028C74:;
    return F0;
    L_C028B22:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C028B34;
    if ((v0_2 == 1)) goto L_C028BBA;
    if (!((v0_2 == 2))) goto L_C028C66;
    v0_3 = *(signed char *)((v0_0 + 0xA));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C028C06;
    if ((v0_2 == 1)) goto L_C028C14;
    goto L_C028C66;
    L_C028C66:;
    (((struct o68_float *)(v0_0))->v) = 1.0f;
    (((struct o64_float *)(v0_0))->v) = 1.0f;
    (((struct o60_float *)(v0_0))->v) = 1.0f;
    v0_2 = (0x60);
    goto L_C028C74;
    L_C028C14:;
    if ((((((struct oF0_short *)(v0_0))->v)) == 0)) goto L_C028C4A;
    w0_1 = (((struct o3C_float *)(v0_0))->v);
    v0_2 = (((struct oF0_short *)(v0_0))->v);
    v0_4 = (((struct oF2_short *)(v0_0))->v);
    w0_0 = w0_1;
    w0_0 = w0_0 + ((float)((short)v0_2 - v0_4)) * (((((((struct o40_float *)(v0_0))->v)) - w0_1) / (float)(short)v0_2));
    (((struct o24_float *)(v0_0))->v) = w0_0;
    v0_3 = (v0_2);
    F0 = ((float)((short)v0_2 - v0_4));
    w0_0 = (w0_0);
    FPUL_ = (((short)v0_2 - v0_4));
    L_C028C52:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) - 1);
    if (((int)((((struct oF2_short *)(v0_0))->v)) > 0)) goto L_C028C66;
    FUN_0c059330(v0_0, a5, v0_1, a7);
    goto L_C028C66;
    L_C028C4A:;
    (((struct o24_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    goto L_C028C52;
    L_C028C06:;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    (((struct oF2_ushort *)(v0_0))->v) = ((((struct oF0_short *)(v0_0))->v));
    goto L_C028C14;
    L_C028BBA:;
    v0_1 = *(signed char *)((v0_0 + 0xA));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C028BC8;
    if ((v0_2 == 1)) goto L_C028BDE;
    goto L_C028C66;
    L_C028BDE:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) - 1);
    if (((int)((((struct oF2_short *)(v0_0))->v)) > 0)) goto L_C028C66;
    L_C028BEC:;
    *(unsigned char *)((v0_0 + 0xA)) = 0x0;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C028C66;
    L_C028BC8:;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    (((struct oF2_ushort *)(v0_0))->v) = ((((struct oEE_short *)(v0_0))->v));
    (((struct o24_float *)(v0_0))->v) = ((((struct o3C_float *)(v0_0))->v));
    goto L_C028BDE;
    L_C028B34:;
    v0_1 = *(signed char *)((v0_0 + 0xA));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C028B5C;
    if ((v0_2 == 1)) goto L_C028B6A;
    goto L_C028C66;
    L_C028B6A:;
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C028BA0;
    w0_0 = (((struct o38_float *)(v0_0))->v);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    v0_2 = (((struct oF2_short *)(v0_0))->v);
    w0_1 = w0_0;
    w0_1 = w0_1 + ((float)((short)v0_1 - v0_2)) * (((((((struct o3C_float *)(v0_0))->v)) - w0_0) / (float)(short)v0_1));
    (((struct o24_float *)(v0_0))->v) = w0_1;
    F0 = ((float)((short)v0_1 - v0_2));
    w0_0 = (w0_1);
    FPUL_ = (((short)v0_1 - v0_2));
    L_C028BA8:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) - 1);
    if (((int)((((struct oF2_short *)(v0_0))->v)) <= 0)) goto L_C028BEC;
    goto L_C028C66;
    L_C028BA0:;
    (((struct o24_float *)(v0_0))->v) = ((((struct o3C_float *)(v0_0))->v));
    goto L_C028BA8;
    L_C028B5C:;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    (((struct oF2_ushort *)(v0_0))->v) = ((((struct oEC_short *)(v0_0))->v));
    goto L_C028B6A;
    L_C028B14:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned short *)((v0_0 + 0x6)) = ((*(short *)((v0_0 + 0x6))) | 0x200);
    goto L_C028B22;
}

int FUN_0c033114(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if (((short)(t3 - 1) != 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x10B))) != 0) {
        return 0x10B;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0x5B0);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xA));
            t3 = t1;
            if (t1 == 2) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                *(unsigned char *)((a4 + 0x8)) = 0x0;
                t3 = 0x0;
            }
            return t3;
        }
        if (t0 == 4) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        if (t0 == 5) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        return t0;
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0xA))) == 2) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            t0 = (((struct o2E0_int *)(a4))->v);
            FUN_0c06206e((t0 + 0x1C), (t0 + 0x1C), 0xC14961C);
            if (!(((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.799999952f)) {
                *(volatile int *)((a4 + 0x2E0));
                t0 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
            }
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            FUN_0c062050((t0 + 0x1C), (t0 + 0x1C), 0xC14961C);
            if (!(1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
                *(volatile int *)((a4 + 0x2E0));
                t0 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
            }
        }
        if (1.0f > ((((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.199999988f);
        }
        t0 = 0x20;
    } else {
        *(volatile int *)((a4 + 0x2E0));
        t1 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x1)) = t2;
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
