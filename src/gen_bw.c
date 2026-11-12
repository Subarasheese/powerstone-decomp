/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c03cc48(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c058930(int a4, int a5, int a6, int a7);
int FUN_0c03ccf2(int a4, int a5, int a6, int a7);

int FUN_0c058930(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            t1 = t0;
                            if (t0 != 4) {
                            } else {
                                if ((*(int *)0xC3673F8) == 0) {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0799999982f;
                                } else {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                }
                                t1 = 0x20;
                            }
                            t0 = t1;
                        } else {
                            t1 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.049999997f);
                            t1 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t1 = (t2 + 0x1);
                            }
                            t0 = t1;
                        }
                        t1 = t0;
                    } else {
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                        t0 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
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
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
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
                if ((short)(t0 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xEC;
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC4CFA80, (*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0x18))));
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), 0xC4CFA80, ((*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0x19))) + 0x1));
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        if ((*(int *)0xC3673F8) == 0) {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0799999982f;
                        } else {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                        }
                        t1 = 0x20;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.049999997f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                t0 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
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
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
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
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c03ccf2(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(int *)((a4 + 0x1C));
    if (t0 == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        FUN_0c03cc48(a4);
        t1 = *(signed char *)((a4 + 0x4));
        if ((t1 != 0) && (t1 != 1)) {
            if (t1 != 2) {
                t2 = t1;
                if (t1 == 3) {
                    FUN_0c0e6fe8();
                    t1 = *(signed char *)((t0 + 0x3));
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 35.0f);
                    t1 = *(signed char *)((t0 + 0x71BA));
                    t3 = t1;
                    if (t1 != 21) {
                        t1 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                t1 = t2;
            } else {
                FUN_0c0e6fe8();
                t2 = *(signed char *)((t0 + 0x3));
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 28.0f);
                u0 = ((((struct o20_float *)(a4))->v));
                u0 = u0 + 30.0f * (FUN_0c0dfa50(((*(int *)((a4 + 0x30))) + 0x4000)));
                (((struct o20_float *)(a4))->v) = u0;
                u0 = ((((struct o28_float *)(a4))->v));
                u0 = u0 + 30.0f * (FUN_0c0df4d0(((*(int *)((a4 + 0x30))) + 0x4000)));
                (((struct o28_float *)(a4))->v) = u0;
                t2 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                if ((short)(t2 - 1) != 0) {
                    t2 = *(signed char *)((t0 + 0x71BA));
                    t3 = t2;
                    if (t2 != 22) {
                        t2 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    t2 = t3;
                } else {
                    t3 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                    t2 = (t3 + 0x1);
                }
                t1 = t2;
            }
            t2 = t1;
        } else {
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            if ((*(signed char *)((t0 + 0x71BA))) != 11) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t3 = (t1 + 0x1);
            } else {
                t1 = *(signed char *)((t0 + 0xA));
                t3 = t1;
                if ((int)t1 < (int)0x2) {
                } else {
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
            }
            t2 = t3;
        }
        return t2;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 0) && (t1 != 1)) {
        if (t1 != 2) {
            if (t1 != 3) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x258;
            }
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x46;
        }
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    FUN_0c03cc48(a4);
    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 0) && (t1 != 1)) {
        if (t1 != 2) {
            t2 = t1;
            if (t1 == 3) {
                FUN_0c0e6fe8();
                t1 = *(signed char *)((t0 + 0x3));
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 35.0f);
                t1 = *(signed char *)((t0 + 0x71BA));
                t3 = t1;
                if (t1 != 21) {
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t2 = t3;
            }
            t1 = t2;
        } else {
            FUN_0c0e6fe8();
            t2 = *(signed char *)((t0 + 0x3));
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 28.0f);
            u0 = ((((struct o20_float *)(a4))->v));
            u0 = u0 + 30.0f * (FUN_0c0dfa50(((*(int *)((a4 + 0x30))) + 0x4000)));
            (((struct o20_float *)(a4))->v) = u0;
            u0 = ((((struct o28_float *)(a4))->v));
            u0 = u0 + 30.0f * (FUN_0c0df4d0(((*(int *)((a4 + 0x30))) + 0x4000)));
            (((struct o28_float *)(a4))->v) = u0;
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
            if ((short)(t2 - 1) != 0) {
                t2 = *(signed char *)((t0 + 0x71BA));
                t3 = t2;
                if (t2 != 22) {
                    t2 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                    t3 = (t2 + 0x1);
                }
                t2 = t3;
            } else {
                t3 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                t2 = (t3 + 0x1);
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)((t0 + 0x71BA))) != 11) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t3 = (t1 + 0x1);
        } else {
            t1 = *(signed char *)((t0 + 0xA));
            t0 = t1;
            if ((int)t1 < (int)0x2) {
            } else {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            t3 = t0;
        }
        t2 = t3;
    }
    return t2;
}
