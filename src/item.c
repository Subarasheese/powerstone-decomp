/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05a6e8-0c05a80c) */

struct o90_int { char p[0x90]; int v; };
int FUN_0c0ccf38(int, int, int);
int FUN_0c0e0ae0(int);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
extern int FUN_0c0e6fe8();
int nlCalcPoint(int, int);
int nlInvertMatrix(int);

int FUN_0c05a6e8(int a4)
{
    int stk[22];
    register int t3;
    register int t72;
    register int t6;
    register int t62;
    register int t11;
    register int t12;
    register int t13;
    register int t17;
    register int t18;
    register int t22;
    register int t58;
    register int t55;
    register int t8;
    register int t9;
    register int t10;
    register int t14;
    register int t16;
    int t26;
    register int t60;
    register int t61;
    int t34;
    register int t42;
    register int t43;

    t3 = *(signed char *)((a4 + 0x1));
    t17 = *(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC32E2C0 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    t72 = t3;
    if (t3 != 0) {
        t6 = *(signed char *)((a4 + 0x8));
        t62 = t6;
        if (t6 != 0) {
            FUN_0c0e1550(0x1);
            t11 = t10;
            t12 = 0xFFFFFFFF;
            t13 = 0xFFFFFFFF;
            for (;;) {
                t18 = *(int *)((t17 + 0x0));
                if (t18 == -1) {
                    break;
                }
                t11 = a4;
                t22 = *(int *)((t17 + 0xC));
                t16 = (FUN_0c0ccf38(t11, (*(int *)((t17 + 0x0))), (*(int *)((t17 + 0x4)))));
                t11 = a4;
                t14 = (FUN_0c0ccf38(t11, t22, (*(int *)((t17 + 0x10)))));
                t9 = (*(signed char *)((t16 + 0x40)));
                t58 = t14;
                if ((t9 != 0) && (t26 = *(signed char *)((t14 + 0x40)), t8 = t26, t8 != 0)) {
                    t9 = (*(int *)((t17 + 0x0)));
                    if ((t13 == t9) && (t34 = *(int *)((t17 + 0x4)), t12 == t34)) {
                        t42 = t8;
                        t43 = t9;
                    } else {
                        t11 = t16;
                        FUN_0c0e1240(t11);
                        t13 = 0xC0E0DA0;
                        t11 = 0x0;
                        nlInvertMatrix(t11);
                        t13 = 0xC0E0AE0;
                        t11 = ((int)stk + 0);
                        t11 = (t11 + 0x18);
                        FUN_0c0e0ae0(t11);
                        t12 = (*(int *)((t17 + 0x4)));
                        t13 = (*(int *)((t17 + 0x0)));
                    }
                    t8 = t42;
                    t9 = t43;
                    t11 = t14;
                    FUN_0c0e1240(t11);
                    t8 = (*(int *)((t17 + 0x14)));
                    t9 = ((((struct o90_int *)(t14))->v));
                    t8 = (t8 << 2);
                    t8 = (t8 + t9);
                    t9 = 0xC0E6FE8;
                    FUN_0c0e6fe8();
                    t14 = 0xC0E0910;
                    t11 = ((int)stk + 0);
                    t11 = (t11 + 0xC);
                    nlCalcPoint(t11, ((int)stk + 0));
                    t11 = ((int)stk + 0);
                    t11 = (t11 + 0x18);
                    FUN_0c0e1240(t11);
                    t11 = ((int)stk + 0);
                    nlCalcPoint(t11, (((int)stk + 0) + 0xC));
                    t8 = ((int)stk + 0);
                    *(volatile int *)((t17 + 0x8));
                    t8 = (t8 + 0xC);
                    t9 = ((((struct o90_int *)(t16))->v));
                    FUN_0c0e6fe8();
                    t11 = 0x1;
                    t9 = (*(int *)((t17 + 0x8)));
                    t55 = (((struct o90_int *)(t16))->v);
                    t9 = (t9 << 2);
                    t8 = (*(int *)((t9 + t55)));
                    t8 = (t8 | t11);
                    *(unsigned int *)((t9 + t55)) = t8;
                    t58 = 0xC0E0910;
                    t60 = t8;
                    t61 = t11;
                }
                t14 = t58;
                t17 = (t17 + 0x18);
                t8 = t60;
                t11 = t61;
            }
            t62 = t18;
        }
        t72 = t62;
    }
    return t72;
}
