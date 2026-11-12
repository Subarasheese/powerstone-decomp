/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0ac600(int);
int FUN_0c0b2dc0(int, int);
int FUN_0c0dc18e(int);
int FUN_0c0e6fe8(void);
int FUN_0c0c2342(int a4);
int FUN_0c01c4dc(int a4, int a5, int a6, int a7);
int FUN_0c03df0a(int a4, int a5, int a6, int a7);
int FUN_0c0b2cfe(int a4, int a5, int a6, int a7);

int FUN_0c0c2342(int a4)
{
    register int t0;
    register int t6;

    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C2140;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x3F;
        t6 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x1);
        *(volatile int *)((t0 + 0x2E0));
        FUN_0c0e6fe8();
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        return FUN_0c0a1d88(t0, 0x78);
    }
    return t0;
}

int FUN_0c01c4dc(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (1.0f);
    if ((v0_2 == 0)) goto L_C01C4EC;
    if ((v0_1 == 1)) goto L_C01C51A;
    return FUN_0c059330(v0_0, R5, R6, a7);
    L_C01C51A:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01C55C;
    if ((v0_1 == 1)) goto L_C01C568;
    if ((v0_1 == 2)) goto L_C01C596;
    L_C01C596:;
    return v0_1;
    L_C01C568:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + 0.0333333313f);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    FPUL_ = (0x3D088888);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C596;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C01C596;
    L_C01C55C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01C568;
    L_C01C4EC:;
    (((struct o20_float *)(v0_0))->v) = 0.0f;
    (((struct o24_float *)(v0_0))->v) = 0.0f;
    (((struct o28_float *)(v0_0))->v) = 200.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = 0x0;
    *(unsigned int *)((v0_0 + 0x30)) = 0x0;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01C51A;
}

int FUN_0c03df0a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 4.0f);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return FUN_0c059330(a4, t0, a6, a7);
            }
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.125f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.125f);
            u0 = (((struct o4C_float *)(t0))->v);
            (((struct o4C_float *)(t0))->v) = (u0 - 0.125f);
            t0 = 0x4C;
            if (!((u0 - 0.125f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x4;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0b2cfe(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A714))));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            FUN_0c0dc18e(0x14);
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = FUN_0c0ac600(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = 0xA;
        for (;;) {
            if (t0 == 0) {
                break;
            }
            FUN_0c0b2dc0(a4, 0x2);
            t0 = (t0 - 1);
        }
        (((struct oEC_ushort *)(a4))->v) = 0x50;
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
