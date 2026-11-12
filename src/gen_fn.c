/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c026554(int);
int FUN_0c042eac(int, float, float, float, float);
int FUN_0c048ea4(int, float);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b6368(int, int, int, float);
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(void);
int thunk_FUN_0c062242(int);
int FUN_0c0b605c(int a4, int a5, int a6, int a7);
int FUN_0c038db6(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0b605c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t8;
    register int t9;
    register int t12;
    register int t14;
    register int t19;
    int t33;
    register int t35;
    register int t37;
    register int t39;
    register int t41;
    register float u44;
    register float u45;
    register float u47;
    register float t48;
    register int t50;
    register int t52;
    register int t54;
    register int t56;
    register int t58;
    register float t70;
    register float u73;
    register float t75;
    register float u78;
    register int t102;
    register int t103;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            t103 = (FUN_0c059330(a4, a5, a6, a7));
        } else {
            if ((*(signed char *)((a4 + 0x108))) != 0) {
                FUN_0c048ea4((a4 + 0x20), 3.0f);
                FUN_0c0b6368((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                t8 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t8 + 0x1);
                t103 = (t8 + 0x1);
            } else {
                t9 = FUN_0c026554(a4);
                if ((signed char)t9 != 0) {
                    FUN_0c0b6368((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                    t12 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t12 + 0x1);
                    t103 = (t12 + 0x1);
                } else {
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    t14 = FUN_0c0e6e5c();
                    if (t14 != 0) {
                        FUN_0c042eac((a4 + 0x20), 1.0f, 1.0f, 1.0f, 1.0f);
                    }
                    if (((((struct oF0_short *)(a4))->v)) == 0) {
                    } else {
                        t19 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                        thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
                        if ((*(float *)(((int)stk + 12))) == 0.0f) {
                            *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                        }
                        t33 = FUN_0c0df360(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
                        t35 = (0xFFFF & t33);
                        if (0.0f > (*(float *)(((int)stk + 12)))) {
                            t35 = ((0xFFFF & t33) + 0x8000);
                        }
                        t37 = *(int *)((a4 + 0x30));
                        t39 = (unsigned short)((unsigned short)(0x4000 + t35) - t37);
                        if (((unsigned short)((unsigned short)(0x4000 + t35) - t37) & 0x8000) != 0) {
                            t39 = ((unsigned short)((unsigned short)(0x4000 + t35) - t37) | 0xFFFF0000);
                        }
                        t41 = 0xFFFFFDDE;
                        if ((int)t39 > 0) {
                            t41 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t41);
                        u44 = *(float *)(((int)stk + 12));
                        *(float *)(((int)stk + 4)) = u44;
                        u45 = *(float *)(((int)stk + 20));
                        *(float *)(((int)stk + 8)) = u45;
                        u47 = (u45 * u45);
                        u47 = u47 + u44 * (*(float *)(((int)stk + 4)));
                        t48 = FUN_0c0df340(u47);
                        t50 = FUN_0c0df360(((-t48) / (*(float *)(((int)stk + 16)))));
                        t52 = t50;
                        if (0.0f > (*(float *)(((int)stk + 16)))) {
                            t52 = (t50 + 0x8000);
                        }
                        t54 = *(int *)((a4 + 0x2C));
                        t56 = (unsigned short)((-(unsigned short)(0x4000 + t52)) - t54);
                        if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t52)) - t54)) != 0) {
                            t56 = ((unsigned short)((-(unsigned short)(0x4000 + t52)) - t54) | 0xFFFF0000);
                        }
                        t58 = 0xFFFFFDDE;
                        if ((int)t56 > 0) {
                            t58 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x2C)) = (unsigned short)((*(int *)((a4 + 0x2C))) + t58);
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                    }
                    t70 = FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u73 = (t70 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o38_float *)(a4))->v) = (u73 * 20.0f);
                    t75 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u78 = (t75 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u78 * 20.0f);
                    (((struct o3C_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 20.0f));
                    FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                    t103 = (FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44)));
                }
            }
        }
    } else {
        FUN_0c042eac((a4 + 0x20), 1.0f, 1.0f, 1.0f, 3.0f);
        t102 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t102 + 0x1);
        t103 = (t102 + 0x1);
    }
    return t103;
}

int FUN_0c038db6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        t2 = (t0 + 0x1);
        if (t1 != 1) {
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x71C);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - 0.179999992f);
            if (!(((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            u0 = (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
            if (!(u0 > 0.0f)) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            t1 = (((struct oEC_short *)(a4))->v);
            t3 = t0;
            if ((int)t1 >= (int)0x16) {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t3 = t0;
            }
            t0 = t3;
            t3 = 0x16;
            t2 = t1;
            u1 = u0;
            u0 = 0.0f;
        }
        t1 = t0;
        t0 = t3;
        t3 = t2;
        u2 = u1;
        u1 = u0;
    } else {
        t2 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + 0x71C);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        u0 = (((struct o24_float *)(t2))->v);
        (((struct o24_float *)(t2))->v) = (u0 + 0.199999988f);
        t2 = (((struct oEC_short *)(a4))->v);
        if ((int)t2 < (int)0x11) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = 0x11;
        t3 = t2;
        u1 = (u0 + 0.199999988f);
    }
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.5f);
        t2 = a5;
        t4 = a6;
        t5 = a7;
    } else {
        t6 = 0xC038F3C;
        t7 = t1;
        t1 = t0;
        t0 = t3;
        t3 = 0x4;
        t8 = 0x1;
        u0 = u1;
        for (;;) {
            if ((int)t8 >= (int)0xA) {
                break;
            }
            t1 = 0x2E0;
            t6 = 0x1C;
            t8 = (t8 + 0x1);
            t1 = (t1 + a4);
            t1 = (t1 + t3);
            t0 = (*(int *)((t1 + 0x0)));
            t7 = (*(int *)((t0 + 0x14)));
            t7 = (t7 + 0xAAB);
            *(unsigned int *)((t0 + 0x14)) = t7;
            t0 = 0x2E0;
            t0 = (t0 + a4);
            t0 = (t0 + t3);
            t1 = (*(int *)((t0 + 0x0)));
            t0 = 0x2E0;
            u0 = (*(float *)((t1 + t6)));
            t0 = (t0 + a4);
            u0 = (u0 + 0.049999997f);
            t0 = (t0 + t3);
            t3 = (t3 + 0x4);
            *(float *)((t1 + t6)) = u0;
            t6 = 0x24;
            t1 = (*(int *)((t0 + 0x0)));
            u0 = (*(float *)((t1 + t6)));
            u0 = (u0 + 0.049999997f);
            *(float *)((t1 + t6)) = u0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        t1 = t3;
        t3 = t8;
        t6 = 0xAAB;
        if ((int)t0 >= (int)0x15) {
            t7 = 0xEC;
            t8 = t0;
            t0 = 0x15;
            t9 = ((0x2E0 + a4) + 0x4);
            t10 = ((0x2E0 + a4) + 0x4);
            t11 = 0x1;
            t12 = ((0x2E0 + a4) + 0x4);
            t13 = ((0x2E0 + a4) + 0x4);
            u1 = u2;
            u2 = u0;
            for (;;) {
                if ((int)t11 >= (int)0xA) {
                    break;
                }
                t0 = 0x2E0;
                t13 = t11;
                t13 = (t13 << 2);
                t0 = (t0 + a4);
                t0 = (t0 + t13);
                t8 = (*(int *)((t0 + 0x0)));
                t7 = 0x44;
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x48;
                t8 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x4C;
                t8 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x44;
                t8 = (*(int *)((t0 + 0x0)));
                u2 = 0.0f;
                u1 = (*(float *)((t8 + t7)));
                if (!(u1 > u2)) {
                    t8 = 0x2E0;
                    t8 = (t8 + a4);
                    t8 = (t8 + t13);
                    t0 = (*(int *)((t8 + 0x0)));
                    *(float *)((t0 + t7)) = 0.0f;
                }
                t0 = 0x2E0;
                t7 = 0x48;
                u2 = 0.0f;
                t0 = (t0 + a4);
                t0 = (t0 + t13);
                t8 = (*(int *)((t0 + 0x0)));
                u1 = (*(float *)((t8 + t7)));
                if (!(u1 > u2)) {
                    t8 = (*(int *)((t12 + 0x0)));
                    *(float *)((t8 + t7)) = 0.0f;
                }
                t0 = (*(int *)((t9 + 0x0)));
                t7 = 0x4C;
                u2 = 0.0f;
                u1 = (*(float *)((t0 + t7)));
                t11 = (t11 + 0x1);
                if (!(u1 > u2)) {
                    t8 = (*(int *)((t10 + 0x0)));
                    *(float *)((t8 + t7)) = 0.0f;
                }
                t12 = (t12 + 0x4);
                t9 = (t9 + 0x4);
                t10 = (t10 + 0x4);
            }
            t1 = t9;
            t3 = t10;
            t6 = t11;
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x1E) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            t0 = 0x1E;
            t7 = (0x2E0 + a4);
            t8 = 0x0;
            for (;;) {
                if ((int)t8 >= (int)0xA) {
                    break;
                }
                t0 = (*(int *)((t7 + 0x0)));
                t7 = (t7 + 0x4);
                t8 = (t8 + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x8);
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x31;
            (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 100.0f;
            (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        } else {
            t0 = t1;
            t1 = t3;
            t3 = t6;
        }
        t2 = t0;
        t4 = t1;
        t5 = t3;
    }
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x28) {
        return FUN_0c059330(a4, t2, t4, t5);
    }
    return 0xEC;
}
