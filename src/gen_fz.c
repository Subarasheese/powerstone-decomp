/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c062954(int, int);
int FUN_0c06297a(void);
int FUN_0c062a7e(int);
int FUN_0c062abe(int);
int FUN_0c0a3796(int, int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(int);
int FUN_0c01349c(int a4, int a5, int a6, int a7);
int FUN_0c031daa(int a4, int a5, int a6, int a7);

int FUN_0c01349c(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_3 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_3 + 0x8));
    v0_1 = (v0_6);
    v0_0 = (v0_3);
    if ((v0_6 == 0)) goto L_C0134E0;
    if ((v0_1 == 1)) goto L_C01351A;
    v0_1 = ((FUN_0c059330(v0_0, v0_4, v0_2, v0_5)));
    L_C013706:;
    return v0_1;
    L_C01351A:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01352C;
    if ((v0_1 == 1)) goto L_C013538;
    if (!((v0_1 == 2))) goto L_C01357A;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) + 0.0666666627f);
    FPUL_ = (0x3D888888);
    goto L_C01357A;
    L_C01357A:;
    v0_1 = (0xC17E568);
    L_C013582:;
    if (((int)((((struct oEC_short *)(v0_0))->v)) > (int)(unsigned short)(*(short *)((v0_1 + 0x0))))) goto L_C013580;
    FUN_0c062954((*(int *)(((*(int *)0xC6649D8) + 0x24))), ((((struct o9C_int *)(((((struct o2E4_int *)(v0_0))->v))))->v)));
    v0_4 = *(short *)((v0_1 + 0x0));
    v0_2 = (0xC062ABE);
    v0_2 = (0xC06297A);
    v0_2 = (0x18);
    v0_5 = ((unsigned short)v0_4);
    v0_3 = (0xC116588);
    v0_6 = (0xC062A7E);
    if ((((((struct oEC_short *)(v0_0))->v)) != (unsigned short)v0_4)) goto L_C01363C;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_3 = (v0_3);
    L_C0135BC:;
    FUN_0c06297a();
    FUN_0c062a7e((((int)stk + 0) + 0x10));
    *(float *)(((int)stk + 16)) = (*(float *)((((((*(signed char *)((v0_3 + 0x0))) << 2) << 1) + (v0_1 + 0x4)) + 0x0)));
    *(float *)(((int)stk + 24)) = ((((struct o4_float *)(((((*(signed char *)((v0_3 + 0x0))) << 2) << 1) + (v0_1 + 0x4))))->v));
    FUN_0c062abe((((int)stk + 0) + 0x10));
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    v0_3 = ((v0_3 + 0x1));
    if (((int)(v0_4 + 0x1) < (int)v0_2)) goto L_C0135BC;
    L_C0136DE:;
    if (((*(signed char *)0xC7F302D) != 3)) goto L_C0136F8;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    v0_1 = (0xEC);
    if (((int)(short)((v0_2 + 0x1) - 1) < (int)0x1E)) goto L_C013706;
    L_C0136F8:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013706;
    L_C01363C:;
    v0_4 = *(short *)(((v0_1 - 100) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (v0_5 - (unsigned short)v0_4);
    *(unsigned int *)(((int)stk + 12)) = (((((struct oEC_short *)(v0_0))->v)) - (unsigned short)v0_4);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_4 = ((unsigned short)v0_4);
    v0_3 = ((v0_1 - 100));
    L_C013656:;
    FUN_0c06297a();
    FUN_0c062a7e((((int)stk + 0) + 0x10));
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_4 = *(int *)(((int)stk + 0));
    w0_0 = *(float *)((((v0_3 + 0x4) + ((v0_6 << 2) << 1)) + 0x0));
    v0_5 = *(int *)(((int)stk + 12));
    *(float *)(((int)stk + 16)) = (w0_0 + (((float)v0_5 * (((*(float *)((((v0_1 + 0x4) + ((v0_6 << 2) << 1)) + 0x0))) - w0_0) / (float)v0_4))));
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_0 = (((struct o4_float *)(((v0_3 + 0x4) + ((v0_6 << 2) << 1))))->v);
    *(float *)(((int)stk + 24)) = (w0_0 + (((float)v0_5 * ((((((struct o4_float *)(((v0_1 + 0x4) + ((v0_6 << 2) << 1))))->v)) - w0_0) / (float)v0_4))));
    FUN_0c062abe((((int)stk + 0) + 0x10));
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    if (((int)(v0_4 + 0x1) < (int)v0_2)) goto L_C013656;
    goto L_C0136DE;
    L_C013580:;
    v0_1 = ((v0_1 + 0x64));
    goto L_C013582;
    L_C013538:;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) + -0.0666666627f);
    FPUL_ = (0xBD888888);
    if (((int)((((struct oEC_short *)(v0_0))->v)) < (int)0xF)) goto L_C01357A;
    (((struct o1C_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = -1.0f;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01357A;
    L_C01352C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013538;
    L_C0134E0:;
    (((struct o20_float *)(v0_0))->v) = 0.0f;
    (((struct o24_float *)(v0_0))->v) = 0.0f;
    (((struct o28_float *)(v0_0))->v) = -1760.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = 0xFFFFCE39;
    *(unsigned int *)((v0_0 + 0x30)) = 0xFFFFF1C8;
    (((struct o40_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = 1.0f;
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = 1.0f;
    FUN_0c0a3796(0x0, 0x4F);
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01351A;
}

int FUN_0c031daa(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x37);
                u0 = FUN_0c0dfa50((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                if ((int)((((struct oEE_short *)(a4))->v)) > (int)0x1E) {
                    u1 = (((u0 + 1.0f) / 2.0f) * 0.199999988f);
                    (((struct o58_float *)(a4))->v) = (u1 + 1.0f);
                    (((struct o50_float *)(a4))->v) = (u1 + 1.0f);
                    u1 = (((((u0 + 1.0f) / 2.0f) * 0.799999952f)) + 1.0f);
                } else {
                    u2 = (((u0 + 1.0f) / 2.0f) * 0.199999988f);
                    (((struct o58_float *)(a4))->v) = (u2 + 0.5f);
                    (((struct o50_float *)(a4))->v) = (u2 + 0.5f);
                    u1 = (((((u0 + 1.0f) / 2.0f) * 0.799999952f)) + 0.799999952f);
                }
                (((struct o54_float *)(a4))->v) = u1;
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x4321);
                t3 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t3 - 1);
                if ((short)(t3 - 1) != 0) {
                    t3 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
                    t4 = t3;
                    if (t3 != 5) {
                        *(unsigned char *)((a4 + 0x8)) = 0x5;
                        t4 = 0x5;
                    }
                    t3 = t4;
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0x5;
                    t3 = 0x5;
                }
                return t3;
            }
            if (t2 == 3) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
                t3 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
                if (((int)(short)(t3 - 1) > 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
                    t0 = t1;
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0x5;
                    t0 = 0x5;
                }
                return t0;
            }
            if (t2 == 4) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if (t2 == 5) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            t0 = t2;
            if (t2 == 10) {
                if (((((struct o71C8_int *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
                    *(volatile int *)(((*(int *)((a4 + 0x1C))) + 0x71C8));
                    t1 = (FUN_0c0e6fe8(a4));
                } else {
                    (((struct o28_float *)(a4))->v) = 0.0f;
                    (((struct o24_float *)(a4))->v) = 0.0f;
                    (((struct o20_float *)(a4))->v) = 0.0f;
                    t1 = 0x20;
                }
                t0 = t1;
            }
            return t0;
        }
        t0 = 0xC031F50;
        t1 = (0x2E0 + a4);
        t2 = (0x2E0 + a4);
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x6) {
                break;
            }
            t0 = 0xEC;
            t4 = (*(short *)((a4 + t0)));
            if ((int)t4 < (int)0x1E) {
                t4 = (*(int *)((t2 + 0x0)));
                t0 = 0x20;
                u0 = (*(float *)((t4 + t0)));
                u0 = (u0 + 0.0333333313f);
                *(float *)((t4 + t0)) = u0;
            } else {
                if ((int)t4 > (int)0x64) {
                    t4 = (*(int *)((t1 + 0x0)));
                    t0 = 0x20;
                    u0 = (*(float *)((t4 + t0)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t4 + t0)) = u0;
                }
            }
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            t3 = (t3 + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)((t0 + 0x1) - 1) > (int)0x78) {
            *(unsigned char *)((a4 + 0x8)) = 0x5;
            t0 = 0x5;
        } else {
            t1 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
            t2 = t1;
            if (t1 == 11) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x5;
                t2 = 0x5;
            }
            t0 = t2;
        }
        return t0;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x37);
    u0 = FUN_0c0dfa50((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
    u1 = 0.799999952f;
    u1 = u1 + (((u0 + 1.0f) / 2.0f)) * 0.199999988f;
    (((struct o58_float *)(a4))->v) = u1;
    (((struct o50_float *)(a4))->v) = u1;
    u1 = 0.799999952f;
    u1 = u1 + (((u0 + 1.0f) / 2.0f)) * 0.799999952f;
    (((struct o54_float *)(a4))->v) = u1;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x4321);
    t0 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
    t1 = t0;
    if (t0 != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
        t1 = 0x5;
    }
    return t1;
}
