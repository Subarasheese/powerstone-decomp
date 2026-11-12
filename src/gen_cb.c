/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c02d9e4(int, int, float, float, float, float, float);
int FUN_0c059330(int, int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0d33d6(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c03ba7a(int a4, int a5, int a6, int a7);
int FUN_0c034654(int a4, int a5, int a6);

int FUN_0c0d33d6(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = a5;
    w0_0 = f4;
    w0_0 = f6;
    w0_0 = f7;
    w0_0 = f8;
    v0_4 = *(signed char *)((v0_1 + 0x8));
    v0_3 = (v0_4);
    v0_2 = (0x0);
    v0_1 = (v0_1);
    if ((v0_4 == 0)) goto L_C0D33FC;
    if ((v0_3 == 1)) goto L_C0D3410;
    return FUN_0c059330(v0_1, v0_0, a6, a7);
    L_C0D3410:;
    v0_4 = *(signed char *)((v0_1 + 0x9));
    v0_3 = (v0_4);
    w0_1 = (2.0f);
    if ((v0_4 == 0)) goto L_C0D3426;
    if ((v0_3 == 1)) goto L_C0D3472;
    if (!((v0_3 == 2))) goto L_C0D34F8;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0D34F8;
    if ((v0_3 == 1)) goto L_C0D34D8;
    if ((v0_3 == 2)) goto L_C0D34D8;
    if ((v0_3 == 3)) goto L_C0D34D8;
    if ((v0_3 == 4)) goto L_C0D34D8;
    goto L_C0D34F8;
    L_C0D34F8:;
    v0_3 = (0xC0E71D4);
    v0_3 = (0xC7F36B8);
    v0_4 = (v0_2);
    v0_2 = (0xC7F302C);
    v0_5 = (0xC02D9E4);
    w0_0 = (7.0999999f);
    L_C0D357E:;
    if (((int)v0_4 < (int)0x3)) goto L_C0D353C;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    *(unsigned char *)(((int)stk + 20)) = v0_4;
    *(int *)((int)stk + 16) = (int)((float)(*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x4))) * ((((struct o0_float *)0xC0D3650)->v)));
    *(int *)((int)stk + 12) = ((*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x2))));
    *(int *)((int)stk + 8) = ((*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x0))));
    *(int *)((int)stk + 4) = ((*(int *)((((*(signed char *)(((int)stk + 20))) << 2) + 0xC33F6A0))));
    *(int *)((int)stk + 0) = 0xC154674;
    sprintf(v0_3, v0_0, a6, a7, 0xC154674);
    v0_3 = ((FUN_0c02d9e4(v0_3, 0x2, (((((struct o20_float *)(v0_1))->v)) + ((((struct oC_float *)0xC0D3650)->v))), ((((struct o24_float *)(v0_1))->v)), ((((struct o50_float *)(v0_1))->v)), ((((struct o54_float *)(v0_1))->v)), w0_0)));
    return v0_3;
    L_C0D353C:;
    *(int *)((int)stk + 16) = ((*(signed char *)((v0_4 + (((*(signed char *)((v0_1 + 0x4))) << 2) + (v0_2 + 0x61))))));
    *(int *)((int)stk + 12) = 0xC154670;
    sprintf(v0_3, v0_0, 0x0, 0x0, 0xC154670);
    FUN_0c02d9e4(v0_3, 0x2, (((((struct o20_float *)(v0_1))->v)) + (float)((((v0_4 + 0xF) << 2) << 2) << 1)), ((((struct o24_float *)(v0_1))->v)), ((((struct o50_float *)(v0_1))->v)), ((((struct o54_float *)(v0_1))->v)), w0_0);
    v0_4 = ((v0_4 + 0x1));
    goto L_C0D357E;
    L_C0D34D8:;
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + w0_1);
    if ((!(((((struct o24_float *)(v0_1))->v)) > 500.0f))) goto L_C0D34F8;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    *(unsigned char *)((v0_1 + 0x9)) = v0_2;
    goto L_C0D34F8;
    L_C0D3472:;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    w0_0 = (10.0f);
    if ((v0_4 == 0)) goto L_C0D34A2;
    if ((v0_3 == 1)) goto L_C0D3490;
    if ((v0_3 == 2)) goto L_C0D34A2;
    if ((v0_3 == 3)) goto L_C0D3490;
    if ((v0_3 == 4)) goto L_C0D34A2;
    goto L_C0D34F8;
    L_C0D34A2:;
    w0_1 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_1 - w0_0);
    if ((!(0.0f > (w0_1 - w0_0)))) goto L_C0D34F8;
    L_C0D34B0:;
    (((struct o20_float *)(v0_1))->v) = 0.0f;
    *(unsigned char *)((v0_1 + 0x9)) = ((*(signed char *)((v0_1 + 0x9))) + 0x1);
    goto L_C0D34F8;
    L_C0D3490:;
    w0_1 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_1 + w0_0);
    if (((w0_1 + w0_0) > 0.0f)) goto L_C0D34B0;
    goto L_C0D34F8;
    L_C0D3426:;
    *(unsigned char *)((v0_1 + 0x9)) = ((*(signed char *)((v0_1 + 0x9))) + 0x1);
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    w0_0 = (1.0f);
    if ((v0_4 == 0)) goto L_C0D3456;
    if ((v0_3 == 1)) goto L_C0D3448;
    if ((v0_3 == 2)) goto L_C0D3460;
    if ((v0_3 == 3)) goto L_C0D3448;
    if ((v0_3 == 4)) goto L_C0D3460;
    goto L_C0D34F8;
    L_C0D3460:;
    (((struct o54_float *)(v0_1))->v) = w0_0;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    L_C0D3468:;
    w0_0 = (640.0f);
    L_C0D346C:;
    (((struct o20_float *)(v0_1))->v) = w0_0;
    goto L_C0D34F8;
    L_C0D3448:;
    (((struct o54_float *)(v0_1))->v) = w0_0;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    w0_0 = (-640.0f);
    goto L_C0D346C;
    L_C0D3456:;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    (((struct o54_float *)(v0_1))->v) = w0_1;
    goto L_C0D3468;
    L_C0D33FC:;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    *(unsigned char *)((v0_1 + 0x9)) = v0_2;
    (((struct o24_float *)(v0_1))->v) = 240.0f;
    goto L_C0D3410;
}

int FUN_0c03ba7a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
                if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                return ((int (*)(int, int, int, int, float))(0xC03BA28))(a4, a5, a6, a7, 0.099999994f);
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * (float)((*(signed char *)((a4 + 0x4))) << 1));
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * (float)((*(signed char *)((a4 + 0x4))) << 1));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.00999999978f;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    u0 = 0.049999997f;
    u0 = u0 + 0.0299999993f * (float)(*(signed char *)((a4 + 0x4)));
    if (u0 > ((((struct o58_float *)(a4))->v))) {
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o58_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
    (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o3C_float *)(a4))->v) = 2.0f;
    }
    return ((int (*)(int, int, int, int))(0xC03BA28))(a4, a5, a6, a7);
}

int FUN_0c034654(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C034690;
    if ((v0_1 == 1)) goto L_C0346DA;
    if ((v0_1 != 2)) goto L_C034670;
    return FUN_0c059330(v0_0, R5, a6, R7);
    L_C034670:;
    L_C03486C:;
    return v0_1;
    L_C0346DA:;
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x1555);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) + 0.099999994f);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + 0.099999994f);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) - 0xE38);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) + 0.049999997f);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + 0.049999997f);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x71C);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) + 0.0599999987f);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + 0.0599999987f);
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    w0_0 = (0.099999994f);
    w0_1 = (1.0f);
    if ((v0_2 == 0)) goto L_C034762;
    if ((v0_1 == 1)) goto L_C0347F0;
    goto L_C03486C;
    L_C0347F0:;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - 0.199999988f);
    w0_2 = (((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v);
    w0_3 = (w0_2);
    w0_3 = (0.0f);
    FPUL_ = (0x3E4CCCCC);
    if ((w0_2 > 0.0f)) goto L_C03481E;
    (((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_3;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C03481E:;
    (((struct o20_float *)((*(int *)(((0x2E0 + v0_0) + 0x8)))))->v) = ((((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v));
    v0_1 = (0x20);
    if ((!(w0_1 > ((((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v))))) goto L_C03486C;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) - w0_0);
    v0_0 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0x40);
    goto L_C03486C;
    L_C034762:;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + w0_1);
    if ((!(((((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v)) > 3.0f))) goto L_C034784;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    L_C034784:;
    (((struct o20_float *)((*(int *)(((0x2E0 + v0_0) + 0x8)))))->v) = ((((struct o20_float *)(((((struct o2E0_int *)(v0_0))->v))))->v));
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + 0.299999982f);
    v0_1 = (0x20);
    FPUL_ = (0x3E999999);
    if ((!(((((struct o20_float *)(((((struct o2E4_int *)(v0_0))->v))))->v)) > w0_1))) goto L_C03486C;
    (((struct o20_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_1;
    v0_1 = (0x20);
    goto L_C03486C;
    L_C034690:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    (((struct o24_float *)(v0_0))->v) = (*(float *)((0xC7E4398 + (unsigned short)((unsigned short)(*(signed char *)((v0_0 + 0x3))) * (unsigned short)0x72D0))));
    goto L_C0346DA;
}
