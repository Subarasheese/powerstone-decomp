/* not identified yet (keep old name) (0c026c7c-0c0276c4) */

struct o2DC_int { char p[0x2DC]; int v; };

int FUN_0c026f36(int a4, int a5, int a6);
int FUN_0c026f78(int a4, int a5);
int FUN_0c027028(int a4, int a5);
int FUN_0c0270c6(int a4, int a5);
int FUN_0c027168(int a4, int a5);
int FUN_0c0271fe(int a4, int a5);
int FUN_0c0272a0(int a4, int a5);
int FUN_0c027336(int a4, int a5);
int FUN_0c0273c0(int a4, int a5);
int FUN_0c02743c(int a4, int a5);
int FUN_0c02754e(int a4, int a5);
int FUN_0c0275ac(int a4, int a5);

int FUN_0c026c7c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC362E70;
    t1 = 0x0;
    t2 = 0xC362AB0;
    for (;;) {
        t3 = (0x0 + t0);
        t4 = (0x0 + t2);
        t5 = 0x0;
        for (;;) {
            t5 = (t5 + 0x1);
            *(unsigned short *)((t4 + 0x2)) = 0x0;
            *(unsigned short *)((t4 + 0x0)) = 0x0;
            *(unsigned int *)((t4 + 0x4)) = 0x0;
            *(unsigned short *)((t4 + 0x8)) = 0x0;
            *(unsigned char *)((t3 + 0x4)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0x0;
            *(unsigned char *)((t3 + 0x5)) = 0x0;
            *(unsigned short *)((t3 + 0x0)) = 0x0;
            *(unsigned short *)((t3 + 0x6)) = 0x0;
            t3 = (t3 + 0xA);
            t4 = (t4 + 0xC);
            if ((int)(unsigned char)t5 >= (int)0x28) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x1E0);
        t0 = (t0 + 0x190);
        if ((int)(unsigned char)t1 >= (int)0x2) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c026ce0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t9;
    register int t4;
    register int t20;
    register int t35;
    register int t36;
    register int t37;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    register int t41;
    register int t42;
    register int t43;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(signed char *)((a4 + 0x4));
    t2 = (((struct o2DC_int *)(a4))->v);
    t9 = t2;
    if ((*(signed char *)((a4 + 0x71EE))) != 0) {
        t4 = (0x637 & t2);
        if ((t2 & 0x40) != 0) {
            t4 = ((0x637 & t2) | 0x80);
        }
        t9 = t4;
        if ((0x80 & t2) != 0) {
            t9 = (t4 | 0x40);
        }
    }
    *(unsigned short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)) = (*(short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x0)) = t9;
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)) = (*(short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x0)) = t2;
    t20 = *(signed char *)(((unsigned char)t1 + 0xC321038));
    t35 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    t36 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    t37 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    if ((int)(unsigned char)t20 > 0) {
        t21 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t22 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t23 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t24 = 0x0;
        for (;;) {
            if ((*(signed char *)((t23 + 0x4))) != 0) {
                t26 = *(short *)((t22 + 0x2));
                *(unsigned short *)((t22 + 0x2)) = (t26 - 1);
                if ((short)(t26 - 1) == 0) {
                    *(unsigned char *)((t21 + 0x4)) = 0x0;
                    *(unsigned short *)((t21 + 0x2)) = 0x0;
                    *(unsigned char *)((t21 + 0x5)) = 0x0;
                    *(unsigned short *)((t21 + 0x0)) = 0x0;
                    *(unsigned short *)((t21 + 0x6)) = 0x0;
                }
            }
            t24 = (t24 + 0x1);
            t21 = (t21 + 0xA);
            t22 = (t22 + 0xA);
            t23 = (t23 + 0xA);
            if ((int)(unsigned char)t24 >= (int)(unsigned char)t20) {
                break;
            }
        }
        t35 = t21;
        t36 = t22;
        t37 = t23;
    }
    if ((unsigned char)t20 == 0) {
        return ((int (*)(int, int, int, int))(0xC026F24))(0x0, t35, t36, t37);
    }
    t41 = *(short *)((((short)((short)(unsigned char)t0 * (short)0x1E0) + 0xC362AB0) + 0x0));
    if ((unsigned short)t41 != 0) {
        if ((unsigned short)t41 != 1) {
            if ((unsigned short)t41 != 2) {
                if ((unsigned short)t41 != 3) {
                    if ((unsigned short)t41 != 4) {
                        if ((unsigned short)t41 == 5) {
                            t42 = FUN_0c02743c(t0, 0x0);
                            if (t42 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        if ((unsigned short)t41 == 6) {
                            t43 = FUN_0c02754e(t0, 0x0);
                            if (t43 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        if ((unsigned short)t41 == 8) {
                            FUN_0c0275ac(t0, 0x0);
                            return ((int (*)(void))(0xC026F04))();
                        }
                        if ((unsigned short)t41 == 99) {
                            return ((int (*)(int, int, int, int))(0xC026F0C))(0x0, t35, t36, t37);
                        }
                        if ((unsigned short)t41 != 0xFC) {
                            if ((unsigned short)t41 != 0xFD) {
                                if ((unsigned short)t41 != 0xFE) {
                                    if ((unsigned short)t41 != 0xFF) {
                                        return ((int (*)(int, int, int, int))(0xC026F18))(0x0, t35, t36, t37);
                                    }
                                    t45 = FUN_0c027168(t0, 0x0);
                                    if (t45 != 0) {
                                        return ((int (*)(void))(0xC026F16))();
                                    }
                                    return ((int (*)(void))(0xC026F18))();
                                }
                                t46 = FUN_0c0270c6(t0, 0x0);
                                if (t46 != 0) {
                                    return ((int (*)(void))(0xC026F16))();
                                }
                                return ((int (*)(void))(0xC026F18))();
                            }
                            t47 = FUN_0c027028(t0, 0x0);
                            if (t47 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        t48 = FUN_0c026f78(t0, 0x0);
                        if (t48 != 0) {
                            return ((int (*)(void))(0xC026F16))();
                        }
                        return ((int (*)(void))(0xC026F18))();
                    }
                    t49 = FUN_0c0273c0(t0, 0x0);
                    if (t49 != 0) {
                        return ((int (*)(void))(0xC026F16))();
                    }
                    return ((int (*)(void))(0xC026F18))();
                }
                t50 = FUN_0c027336(t0, 0x0);
                if (t50 != 0) {
                    return ((int (*)(void))(0xC026F16))();
                }
                return ((int (*)(void))(0xC026F18))();
            }
            t51 = FUN_0c0272a0(t0, 0x0);
            if (t51 != 0) {
                return ((int (*)(void))(0xC026F16))();
            }
            return ((int (*)(void))(0xC026F18))();
        }
        t52 = FUN_0c0271fe(t0, 0x0);
        if (t52 == 0) {
            return ((int (*)(void))(0xC026F18))();
        }
        return ((int (*)(void))(0xC026F16))();
    }
    t53 = FUN_0c026f36(t0, t1, 0x0);
    if (t53 == 0) {
        return ((int (*)(void))(0xC026F18))();
    }
    return ((int (*)(void))(0xC026F16))();
}

int FUN_0c026f36(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)(((*(int *)((((unsigned char)a5 << 2) + 0xC32100C))) + ((unsigned char)a6 << 2)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a6 << 1) + (unsigned char)a6) << 2)) + 0x0)) = (*(short *)((t1 + 0x0)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a6 << 1) + (unsigned char)a6) << 2)) + 0x2)) = (*(short *)((t1 + 0x2)));
    *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a6 << 1) + (unsigned char)a6) << 2)) + 0x4)) = t1;
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a6 << 1) + (unsigned char)a6) << 2)) + 0x8)) = 0x0;
    return 0x0;
}

int FUN_0c026f78(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t14;
    register int t21;

    t4 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    *(unsigned short *)(((int)stk + 0)) = ((~(*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2)))) & (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t5 = *(short *)(((int)stk + 0));
    t6 = 0x0;
    if ((0x400 & (unsigned short)t5) != 0) {
        t6 = 0x1;
    }
    t8 = t6;
    if ((0x4 & (unsigned short)t5) != 0) {
        t8 = (t6 + 0x1);
    }
    t10 = t8;
    if (((unsigned short)t5 & 0x2) != 0) {
        t10 = (t8 + 0x1);
    }
    if ((int)(unsigned short)t10 > (int)0x2) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t4 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t4 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t4 + 0x10);
        t21 = 0x0;
    } else {
        t14 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t14 - 1);
        if ((short)(t14 - 1) == 0) {
            *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
        }
        t21 = 0x1;
    }
    return t21;
}

int FUN_0c027028(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t14;

    *(unsigned short *)(((int)stk + 0)) = ((~(*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2)))) & (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t4 = *(short *)(((int)stk + 0));
    t5 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)((t5 + 0x8))) & (unsigned short)t4) == (unsigned short)(*(short *)((t5 + 0x6)))) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t5 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t5 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t5 + 0x10);
        return 0x0;
    }
    if (((unsigned short)t4 & (unsigned short)(*(short *)((t5 + 0xC)))) != (unsigned short)(*(short *)((t5 + 0xA)))) {
        t14 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t14 - 1);
        if ((short)(t14 - 1) == 0) {
            *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
        }
    } else {
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
    }
    return 0x1;
}

int FUN_0c0270c6(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362A90)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C027122;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C027154:;
    return v0_0;
    L_C027122:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C02713E;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C027152;
    L_C02713E:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C027152:;
    v0_0 = (0x1);
    goto L_C027154;
}

int FUN_0c027168(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362AA0)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if (((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) & (unsigned short)(*(short *)((v0_4 + 0x6)))) == 0)) goto L_C0271C4;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C0271F6:;
    return v0_0;
    L_C0271C4:;
    if ((((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) & (unsigned short)(*(short *)((v0_2 + 0xA)))) != 0)) goto L_C0271E0;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C0271F4;
    L_C0271E0:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C0271F4:;
    v0_0 = (0x1);
    goto L_C0271F6;
}

int FUN_0c0271fe(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362AA0)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C02725A;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C02728C:;
    return v0_0;
    L_C02725A:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C027276;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C02728A;
    L_C027276:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C02728A:;
    v0_0 = (0x1);
    goto L_C02728C;
}

int FUN_0c0272a0(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)v0_0 << 2) << 1) + 0xC362A90)));
    v0_3 = *(short *)(((int)stk + 0));
    v0_4 = *(int *)(((((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)) + 0x4));
    v0_5 = (short)((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2);
    v0_1 = (((short)((short)(unsigned char)v0_0 * (short)0x1E0) + 0xC362AB0));
    v0_2 = (v0_4);
    v0_5 = v0_5;
    v0_6 = ((unsigned short)v0_3);
    if ((((unsigned short)(*(short *)((v0_4 + 0x8))) & (unsigned short)v0_3) != (unsigned short)(*(short *)((v0_4 + 0x6))))) goto L_C0272FC;
    *(unsigned short *)(((v0_1 + v0_5) + 0x0)) = (*(short *)(((v0_2 + 0x10) + 0x0)));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (*(short *)(((v0_2 + 0x10) + 0x2)));
    *(unsigned int *)(((v0_1 + v0_5) + 0x4)) = (v0_2 + 0x10);
    v0_0 = (0x0);
    L_C02732E:;
    return v0_0;
    L_C0272FC:;
    if (((v0_6 & (unsigned short)(*(short *)((v0_2 + 0xC)))) == (unsigned short)(*(short *)((v0_2 + 0xA))))) goto L_C027318;
    v0_2 = *(short *)(((v0_1 + v0_5) + 0x2));
    *(unsigned short *)(((v0_1 + v0_5) + 0x2)) = (v0_2 - 1);
    v0_1 = ((v0_1 + v0_5));
    if (((short)(v0_2 - 1) != 0)) goto L_C02732C;
    L_C027318:;
    *(unsigned short *)(((v0_5 + (0xC362AB0 + (short)((short)(unsigned char)v0_0 * (short)0x1E0))) + 0x0)) = 0x0;
    L_C02732C:;
    v0_0 = (0x1);
    goto L_C02732E;
}

int FUN_0c027336(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t7;

    *(unsigned short *)(((int)stk + 0)) = (*(short *)(((((unsigned char)a4 << 2) << 1) + 0xC362A90)));
    t4 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)(((int)stk + 0))) & (unsigned short)(*(short *)((t4 + 0x8)))) == (unsigned short)(*(short *)((t4 + 0x6)))) {
        t7 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t7 - 1);
        if ((short)(t7 - 1) == 0) {
            *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t4 + 0x10) + 0x0)));
            *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t4 + 0x10) + 0x2)));
            *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t4 + 0x10);
            return 0x0;
        }
        return 0x1;
    }
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = 0x0;
    return 0x1;
}

int FUN_0c0273c0(int a4, int a5)
{
    int stk[1];
    register int t5;
    register int t9;

    *(unsigned short *)(((int)stk + 0)) = ((*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2))) ^ (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t5 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)(((int)stk + 0))) & (unsigned short)(*(short *)((t5 + 0x8)))) != 0) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t5 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t5 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t5 + 0x10);
    } else {
        t9 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t9 - 1);
        if ((short)(t9 - 1) == 0) {
            *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = 0x0;
        }
    }
    return 0x1;
}

int FUN_0c02743c(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t26;
    register int t29;

    *(unsigned short *)(((int)stk + 0)) = ((*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2))) ^ (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t4 = *(short *)(((int)stk + 0));
    t5 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)((t5 + 0x8))) & (unsigned short)t4) != 0) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t5 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t5 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t5 + 0x10);
        if (0x0 != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x0;
        }
        if ((0x400 & (unsigned short)t4) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x1;
        }
        if ((0x4 & (unsigned short)t4) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x0;
        }
        t26 = a4;
        if (((unsigned short)t4 & 0x2) != 0) {
            *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x5)) = 0x1;
            t26 = (((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1));
        }
        return ((int (*)(int, int, int, int))(0xC027542))(t26, 0x1, (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1), (unsigned short)t4);
    }
    t29 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t29 - 1);
    if ((short)(t29 - 1) == 0) {
        return ((int (*)(int, int, int, int))(0xC02753A))((short)((short)(unsigned char)a4 * (short)0x1E0), a5, t5, (unsigned short)t4);
    }
    return ((int (*)(int, int, int, int))(0xC027540))(a4, a5, t5, (unsigned short)t4);
}

int FUN_0c02754e(int a4, int a5)
{
    register int t3;

    t3 = *(int *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x4));
    if (((unsigned short)(*(short *)(((((unsigned char)a4 << 2) << 1) + 0xC362A90))) & (unsigned short)(*(short *)((t3 + 0x8)))) != (unsigned short)(*(short *)((t3 + 0x6)))) {
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x0)) = (*(short *)(((t3 + 0x10) + 0x0)));
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x2)) = (*(short *)(((t3 + 0x10) + 0x2)));
        *(unsigned int *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + ((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0)) + 0x4)) = (t3 + 0x10);
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0275ac(int a4, int a5)
{
    register int t1;

    t1 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    *(unsigned char *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x4)) = 0x1;
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x2)) = (*(short *)((t1 + 0x2)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x0)) = (*(short *)((t1 + 0x0)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x190) + 0xC362E70) + (short)((((unsigned char)a5 << 2) + (unsigned char)a5) << 1)) + 0x6)) = (*(short *)((t1 + 0x4)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t1 + 0x12) + 0x0)));
    *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t1 + 0x12);
    return 0x0;
}

int FUN_0c02760a(int a4, int a5)
{
    register int t1;

    t1 = *(int *)(((*(int *)((((unsigned char)a4 << 2) + 0xC32100C))) + ((unsigned char)a5 << 2)));
    *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = t1;
    return 0x1;
}
