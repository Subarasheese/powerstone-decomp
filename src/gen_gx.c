/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c03ed0c(int);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c062da2(void);
int FUN_0c062da6(void);
int FUN_0c09939c(void);
int FUN_0c0993e4(int);
int FUN_0c09a808(int, int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0c8cea(int, int, int, float);
int FUN_0c0c91d2(int);
int FUN_0c0c9394(int);
int FUN_0c0c9526(int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d0024(int);
int FUN_0c0d1520(int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e1550(int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c05fff4(void);
int FUN_0c0d0674(int a4, int a5, int a6, int a7);
int FUN_0c05a164(int a4, int a5, int a6, int a7);
float FUN_0c0c8d80(int a4);

int FUN_0c0d0674(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x3));
            if (t0 != 0) {
                if (t0 == 1) {
                    if ((*(signed char *)((a4 + 0x4))) == 2) {
                        FUN_0c0d1520(a4);
                    } else {
                        sprintf(0xC7F36B8, a5, a6, a7, 0xC15443C);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543D0);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x6))) + 0x11) << 2) << 1));
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15444C);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154454);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15445C);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 152.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154464);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 160.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154470);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 168.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154478);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 176.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154484);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 184.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15448C);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 192.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154494);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 200.0f);
                        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15449C);
                        FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 208.0f);
                        if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
                            t1 = *(signed char *)((a4 + 0x6));
                            *(unsigned char *)((a4 + 0x6)) = (t1 - 1);
                            if ((int)(signed char)(t1 - 1) < 0) {
                                *(unsigned char *)((a4 + 0x6)) = 0xA;
                            }
                        } else {
                            if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
                                t1 = *(signed char *)((a4 + 0x6));
                                *(unsigned char *)((a4 + 0x6)) = (t1 + 0x1);
                                if ((int)(signed char)(t1 + 0x1) > (int)0xA) {
                                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                                }
                            }
                        }
                        t1 = 0xA;
                    }
                    t2 = (((struct o48_int *)(a4))->v);
                    if ((t2 & 4) != 0) {
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        thunk_FUN_0c05fff4();
                        FUN_0c09939c();
                        *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x4)) = (*(signed char *)((a4 + 0x6)));
                        thunk_FUN_0c05fff4();
                        FUN_0c09939c();
                        FUN_0c0993e4((*(signed char *)((a4 + 0x5))));
                        FUN_0c05f2d4(0x0, 0x0);
                        *(unsigned char *)((a4 + 0x7)) = 0x0;
                        FUN_0c0d0024((*(int *)((a4 + 0x1C))));
                        return FUN_0c09a808((*(int *)((a4 + 0x1C))), (*(signed char *)((a4 + 0x8))), (*(signed char *)((a4 + 0x9))));
                    }
                    if ((t2 & 2) == 0) {
                        return ((int (*)(int, int, int, int))(0xC0D0D64))(t1, a5, a6, a7);
                    }
                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC0D0D64))(t1, a5, a6, a7);
                }
                if (t0 == 2) {
                    sprintf(0xC7F36B8, a5, a6, a7, 0xC1544A4);
                    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
                    if ((*(signed char *)((a4 + 0x4))) == 2) {
                        FUN_0c062da6();
                        return ((int (*)(void))(0xC0D0D46))();
                    }
                    *(volatile signed char *)((a4 + 0x6));
                    *(volatile signed char *)((a4 + 0x5));
                    FUN_0c062da2();
                    return ((int (*)(void))(0xC0D0D50))();
                }
                if (t0 == 3) {
                    return ((int (*)(int, int, int, int))(0xC0D0D18))(0xC7F36B8, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0D0D64))(0xC7F36B8, a5, a6, a7);
            }
            sprintf(0xC7F36B8, a5, a6, a7, 0xC154404);
            FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
            sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543D0);
            FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x4))) + 0x11) << 2) << 1));
            sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154410);
            FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
            sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15441C);
            FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
            sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154430);
            FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 152.0f);
            if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t0 - 1);
                if ((int)(signed char)(t0 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2;
                }
            }
            if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
                t0 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t0 + 0x1);
                if ((int)(signed char)(t0 + 0x1) > (int)0x2) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
            t0 = *(signed char *)((a4 + 0x5));
            (((struct oA0_ushort *)(a4))->v) = (*(short *)(((((*(signed char *)((a4 + 0x4))) + ((t0 << 1) + t0)) << 1) + 0xC33F5E0)));
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x1)) = 0x0;
            t0 = *(int *)(((a4 + 0x20) + ((*(signed char *)((a4 + 0x4))) << 2)));
            *(unsigned int *)((a4 + 0x1C)) = t0;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            if ((((((struct o48_int *)(a4))->v)) & 4) != 0) {
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                return ((int (*)(void))(0xC0D0D64))();
            }
            return ((int (*)(void))(0xC0D0D64))();
        }
        return ((int (*)(int, int, int, int))(0xC0D0D64))(0xC7F36B8, a5, a6, a7);
    }
    sprintf(0xC7F36B8, a5, a6, a7, 0xC1543D0);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x3))) + 0xF) << 2) << 1));
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543D4);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543E4);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 128.0f);
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543F4);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1543FC);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
    if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
        t0 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((a4 + 0x3)) = (t0 - 1);
        if ((int)(signed char)(t0 - 1) < 0) {
            *(unsigned char *)((a4 + 0x3)) = 0x3;
        }
    } else {
        if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
            t0 = *(signed char *)((a4 + 0x3));
            *(unsigned char *)((a4 + 0x3)) = (t0 + 0x1);
            if ((int)(signed char)(t0 + 0x1) > (int)0x3) {
                *(unsigned char *)((a4 + 0x3)) = 0x0;
            }
        }
    }
    if ((((((struct o48_int *)(a4))->v)) & 4) == 0) {
        return ((int (*)(int, int, int, int))(0xC0D0D64))(0x3, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
    return ((int (*)(int, int, int, int))(0xC0D0D64))(0x3, a5, a6, a7);
}

int FUN_0c05a164(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((((t1 << 2) + (0xC3837F0 + (((signed char)t0 << 2) << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(signed char *)(((t1 + (0xC383800 + ((signed char)t0 << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)0xC7F307C) << 8) << 2);
    if ((*(signed char *)((a4 + 0x1))) == 0) {
        return ((int (*)(int, int, int, int))(0xC05A6C6))((t1 + (0xC383800 + ((signed char)t0 << 1))), t0, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        return ((int (*)(int, int, int, int))(0xC05A6C6))((t1 + (0xC383800 + ((signed char)t0 << 1))), t0, a6, a7);
    }
    FUN_0c0e1550(0x1);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 0)));
    return ((int (*)(void))(0xC05A6BA))();
}

float FUN_0c0c8d80(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register float F2;
    register float F3;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    v0_3 = (0x3);
    v0_0 = (v0_1);
    if (((*(signed char *)((0x71BA + (*(int *)((v0_1 + 0x1C)))))) == 11)) goto L_C0C8DAE;
    *(unsigned char *)((v0_0 + 0x8)) = v0_3;
    L_C0C8DAE:;
    v0_1 = (FUN_0c0555dc()) == 0;
    if (v0_1) goto L_C0C8DBE;
    *(unsigned char *)((v0_0 + 0x8)) = v0_3;
    L_C0C8DBE:;
    *(unsigned int *)(((int)stk + 4)) = (0x308 + v0_0);
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30)));
    (((struct o20_float *)(v0_0))->v) = ((((struct o20_float *)((*(int *)((v0_0 + 0x1C)))))->v));
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)((*(int *)((v0_0 + 0x1C)))))->v));
    v0_1 = *(signed char *)((v0_0 + 0xEE));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)((*(int *)((v0_0 + 0x1C)))))->v)) + ((((struct o4_float *)(((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC33C900)))->v)));
    w0_0 = FUN_0c0dfa50((*(int *)((v0_0 + 0x30))));
    *(float *)(((int)stk + 0)) = w0_0;
    v0_1 = *(signed char *)(((0xEE + v0_0) + 0x0));
    w0_1 = (((struct o8_float *)(((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC33C900)))->v);
    v0_1 = *(signed char *)(((0xEE + v0_0) + 0x0));
    w0_2 = ((FUN_0c0df4d0((*(int *)((v0_0 + 0x30))))) * (*(float *)((((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC33C900) + 0x0))));
    w0_2 = w0_2 + w0_1 * w0_0;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + w0_2);
    w0_0 = FUN_0c0df4d0((*(int *)((v0_0 + 0x30))));
    v0_1 = *(signed char *)(((0xEE + v0_0) + 0x0));
    w0_2 = (((struct o8_float *)(((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC33C900)))->v);
    w0_1 = FUN_0c0dfa50((*(int *)((v0_0 + 0x30))));
    v0_1 = *(signed char *)(((0xEE + v0_0) + 0x0));
    w0_3 = *(float *)((((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC33C900) + 0x0));
    w0_4 = (w0_1 * w0_3);
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + (((w0_0 * w0_2)) - w0_4));
    v0_3 = (0xEC);
    w0_0 = ((w0_1 * w0_3));
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C0C8EAA;
    v0_1 = *(short *)((v0_0 + v0_3));
    *(unsigned short *)((v0_0 + v0_3)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0C8EAA;
    FUN_0c03ed0c(v0_0);
    L_C0C8EAA:;
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_3 = (v0_4);
    v0_1 = (0xC059330);
    v0_1 = (0x1);
    v0_2 = (0x0);
    w0_1 = (0.099999994f);
    if ((v0_4 == 0)) goto L_C0C8EF8;
    if ((v0_3 == 1)) goto L_C0C8F8E;
    if ((v0_3 != 2)) goto L_C0C8EC6;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - w0_1);
    v0_3 = (0x1C);
    if ((((((struct o1C_float *)(((((struct o2E0_int *)(v0_0))->v))))->v)) > 0.0f)) goto L_C0C91B6;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_3 = ((v0_1 + 0x1));
    L_C0C91B6:;
    return w0_0;
    L_C0C8EC6:;
    if ((v0_3 != 3)) goto L_C0C8ECE;
    v0_3 = ((FUN_0c059330(v0_0, R5, R6)));
    goto L_C0C91B6;
    L_C0C8ECE:;
    goto L_C0C91B6;
    L_C0C8F8E:;
    if (((*(signed char *)((v0_0 + 0xB))) == 0)) goto L_C0C8F9A;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) - 1);
    L_C0C8F9A:;
    if (((*(signed char *)((v0_0 + 0xC))) == 0)) goto L_C0C8FA6;
    *(unsigned char *)((v0_0 + 0xC)) = ((*(signed char *)((v0_0 + 0xC))) - 1);
    L_C0C8FA6:;
    if (((*(signed char *)((v0_0 + 0xD))) == 0)) goto L_C0C8FB8;
    *(unsigned char *)((v0_0 + 0xD)) = ((*(signed char *)((v0_0 + 0xD))) - 1);
    *(unsigned char *)((v0_0 + 0xB)) = v0_1;
    L_C0C8FB8:;
    w0_2 = (100.0f);
    if (((*(signed char *)((v0_0 + 0xD))) != 0)) goto L_C0C902A;
    w0_3 = (((struct oF0_float *)(v0_0))->v);
    FUN_0c0c9394(v0_0);
    w0_3 = (w0_3);
    if (((*(signed char *)((v0_0 + 0xF))) != 0)) goto L_C0C9004;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x10B))) != 0)) goto L_C0C902A;
    (((struct oF0_float *)(v0_0))->v) = (((((struct oF0_float *)(v0_0))->v)) + w0_2);
    L_C0C902A:;
    w0_3 = ((((struct oF0_float *)(v0_0))->v));
    w0_3 = w0_3 + w0_2 * (*(float *)((0xC33C960 + (((((struct oEE_short *)(v0_0))->v)) << 2))));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = w0_3;
    FUN_0c0c8cea(v0_0, 0x0, 0x1, w0_3);
    FUN_0c0c8cea(v0_0, 0x1, 0x2, w0_3);
    FUN_0c0c8cea(v0_0, 0x2, 0x3, w0_3);
    FUN_0c0c91d2(v0_0);
    FUN_0c0c9526(v0_0);
    v0_3 = (0xC33C960);
    if ((((((struct o1C_float *)(((((struct o2E0_int *)(v0_0))->v))))->v)) > (*(float *)((0xC33C960 + (((((struct oEE_short *)(v0_0))->v)) << 2)))))) goto L_C0C9096;
    v0_4 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_4))->v) = (((((struct o1C_float *)(v0_4))->v)) + w0_1);
    v0_4 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_4))->v) = (((((struct o20_float *)(v0_4))->v)) + w0_1);
    L_C0C9096:;
    if ((((((struct o1C_float *)(((((struct o2E4_int *)(v0_0))->v))))->v)) > (*(float *)((v0_3 + (((((struct oEE_short *)(v0_0))->v)) << 2)))))) goto L_C0C90C2;
    v0_4 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_4))->v) = (((((struct o1C_float *)(v0_4))->v)) + w0_1);
    v0_4 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_4))->v) = (((((struct o20_float *)(v0_4))->v)) + w0_1);
    L_C0C90C2:;
    if ((((((struct o1C_float *)(((((struct o2E8_int *)(v0_0))->v))))->v)) > (*(float *)((v0_3 + (((((struct oEE_short *)(v0_0))->v)) << 2)))))) goto L_C0C90EE;
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_3))->v) = (((((struct o1C_float *)(v0_3))->v)) + w0_1);
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = (((((struct o20_float *)(v0_3))->v)) + w0_1);
    L_C0C90EE:;
    if (((*(signed char *)((v0_0 + 0xA))) != 0)) goto L_C0C9106;
    if (((int)((((struct oEC_short *)((*(int *)((v0_0 + 0x1C)))))->v)) >= (int)0xF)) goto L_C0C9106;
    *(unsigned char *)((v0_0 + 0xA)) = v0_1;
    L_C0C9106:;
    v0_3 = (0xEE);
    if ((((((struct oEE_short *)((*(int *)((v0_0 + 0x1C)))))->v)) == 0)) goto L_C0C91B6;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    v0_1 = (v0_2);
    v0_3 = ((*(int *)((v0_0 + 0x18))));
    v0_4 = (0xC0C9760);
    L_C0C9146:;
    if (((int)v0_1 < (int)(*(signed char *)((v0_0 + 0xE))))) goto L_C0C9138;
    *(unsigned char *)((((((struct o2EC_int *)(v0_0))->v)) + 0x0)) = v0_2;
    v0_3 = (0x2EC);
    goto L_C0C91B6;
    L_C0C9138:;
    if (((*(int *)((v0_3 + 0x10))) != v0_4)) goto L_C0C9142;
    FUN_0c059330(v0_3, R5, R6);
    L_C0C9142:;
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((*(int *)((v0_3 + 0x18))));
    goto L_C0C9146;
    L_C0C9004:;
    if (((*(signed char *)((v0_0 + 0xB))) == 0)) goto L_C0C902A;
    w0_4 = (((struct oF0_float *)(v0_0))->v);
    w0_5 = (((w0_4 - w0_3) + w0_2));
    if ((!(((w0_4 - w0_3) + w0_2) > 0.0f))) goto L_C0C902A;
    if ((!(200.0f > w0_5))) goto L_C0C902A;
    (((struct oF0_float *)(v0_0))->v) = w0_3;
    goto L_C0C902A;
    L_C0C8EF8:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    v0_3 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = 0.0f;
    (((struct o1C_float *)(v0_3))->v) = 0.0f;
    w0_2 = (0.0f);
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = w0_2;
    (((struct o1C_float *)(v0_3))->v) = w0_2;
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = w0_2;
    (((struct o1C_float *)(v0_3))->v) = w0_2;
    (((struct oF0_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)((v0_0 + 0xF)) = v0_2;
    *(unsigned char *)((v0_0 + 0xE)) = v0_2;
    *(unsigned char *)((v0_0 + 0xD)) = v0_2;
    *(unsigned char *)((v0_0 + 0xC)) = v0_2;
    *(unsigned char *)((v0_0 + 0xB)) = v0_2;
    *(unsigned char *)((v0_0 + 0xA)) = v0_2;
    FUN_0c0a3914((*(int *)((v0_0 + 0x1C))), (*(signed char *)((((((struct oEE_short *)(v0_0))->v)) + 0xC153356))));
    goto L_C0C8F8E;
}
