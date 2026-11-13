/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05a6e8-0c05a80c) */

struct o90_int { char p[0x90]; int v; };
int FUN_0c0ccf38(int, int, int);
int nlStoreMatrix(int);
int nlLoadMatrix(int);
int nlSelectMatrixStack(int);
extern int _quick_odd_mvn();
int nlCalcPoint(int, int);
int nlInvertMatrix(int);

int FUN_0c05a6e8(int a4)
{
    int stk[22];
    register int t3;
    register int t73;
    register int t6;
    register int t62;
    register int t12;
    register int t13;
    register int t14;
    register int t18;
    register int t19;
    register int t23;
    register int t58;
    register int t54;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register int t17;
    int t27;
    register int t57;
    register int t60;
    register int t61;
    int t35;
    register int t42;
    register int t43;
    register int t44;

    t3 = *(signed char *)((a4 + 0x1));
    t18 = *(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC32E2C0 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    t73 = t3;
    if (t3 != 0) {
        t6 = *(signed char *)((a4 + 0x8));
        t62 = t6;
        if (t6 != 0) {
            nlSelectMatrixStack(0x1);
            t12 = t11;
            t13 = 0xFFFFFFFF;
            t14 = 0xFFFFFFFF;
            for (;;) {
                t19 = *(int *)((t18 + 0x0));
                if (t19 == -1) {
                    break;
                }
                t12 = a4;
                t23 = *(int *)((t18 + 0xC));
                t17 = (FUN_0c0ccf38(t12, (*(int *)((t18 + 0x0))), (*(int *)((t18 + 0x4)))));
                t12 = a4;
                t15 = (FUN_0c0ccf38(t12, t23, (*(int *)((t18 + 0x10)))));
                t10 = (*(signed char *)((t17 + 0x40)));
                t58 = t15;
                if ((t10 != 0) && (t27 = *(signed char *)((t15 + 0x40)), t9 = t27, t9 != 0)) {
                    t10 = (*(int *)((t18 + 0x0)));
                    if ((t14 == t10) && (t35 = *(int *)((t18 + 0x4)), t8 = t35, t13 == t8)) {
                        t42 = t8;
                        t43 = t9;
                        t44 = t10;
                    } else {
                        t12 = t17;
                        nlLoadMatrix(t12);
                        t14 = 0xC0E0DA0;
                        t12 = 0x0;
                        nlInvertMatrix(t12);
                        t14 = 0xC0E0AE0;
                        t12 = ((int)stk + 0);
                        t12 = (t12 + 0x18);
                        nlStoreMatrix(t12);
                        t13 = (*(int *)((t18 + 0x4)));
                        t14 = (*(int *)((t18 + 0x0)));
                    }
                    t8 = t42;
                    t9 = t43;
                    t10 = t44;
                    t12 = t15;
                    nlLoadMatrix(t12);
                    t8 = ((int)stk + 0);
                    t9 = (*(int *)((t18 + 0x14)));
                    t8 = (t8 + 0xC);
                    t10 = ((((struct o90_int *)(t15))->v));
                    t9 = (t9 << 2);
                    t9 = (t9 + t10);
                    t10 = 0xC0E6FE8;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(t9); }
                    t15 = 0xC0E0910;
                    t12 = ((int)stk + 0);
                    t12 = (t12 + 0xC);
                    nlCalcPoint(t12, ((int)stk + 0));
                    t12 = ((int)stk + 0);
                    t12 = (t12 + 0x18);
                    nlLoadMatrix(t12);
                    t12 = ((int)stk + 0);
                    nlCalcPoint(t12, (((int)stk + 0) + 0xC));
                    t9 = ((int)stk + 0);
                    t8 = (*(int *)((t18 + 0x8)));
                    t9 = (t9 + 0xC);
                    t10 = ((((struct o90_int *)(t17))->v));
                    t8 = (t8 << 2);
                    t8 = (t8 + t10);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(t9); }
                    t12 = 0x1;
                    t10 = (*(int *)((t18 + 0x8)));
                    t54 = (((struct o90_int *)(t17))->v);
                    t10 = (t10 << 2);
                    t9 = (*(int *)((t10 + t54)));
                    t9 = (t9 | t12);
                    *(unsigned int *)((t10 + t54)) = t9;
                    t57 = t8;
                    t58 = 0xC0E0910;
                    t60 = t9;
                    t61 = t12;
                }
                t8 = t57;
                t15 = t58;
                t18 = (t18 + 0x18);
                t9 = t60;
                t12 = t61;
            }
            t62 = t19;
        }
        t73 = t62;
    }
    return t73;
}
