/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0fcea0(int, int, int, int);
int FUN_0c0fddce(int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int FUN_0c0fd2ce(int a4, int a5, int a6, int a7);

int FUN_0c0fd2ce(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t31;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t50;
    register int t51;
    register int t52;
    register int t66;
    register int t67;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t72;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c0fcea0(a6, a6, a6, a7));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
    if ((int)a6 <= (int)0x4) {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
        kmiCopyFromFrameBuffer((((int)stk + 0) + 0x10), (*(int *)((a4 + 0x1C))), 0x10);
        t3 = *(int *)(((int)stk + 4));
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x1)) = (*(signed char *)((t3 + 0x0)));
        } else {
            if (a6 == 2) {
                t5 = ((((int)stk + 0) + 0x10) + 0x2);
                t6 = t3;
                t7 = 0x0;
                for (;;) {
                    t8 = *(signed char *)((t6 + 0x0));
                    t6 = (t6 + 0x1);
                    t7 = (t7 + 0x2);
                    *(unsigned char *)((t5 + 0x0)) = t8;
                    t5 = (t5 + 0x1);
                    t9 = *(signed char *)((t6 + 0x0));
                    t6 = (t6 + 0x1);
                    *(unsigned char *)((t5 + 0x0)) = t9;
                    t5 = (t5 + 0x1);
                    if ((int)t7 >= (int)0x2) {
                        break;
                    }
                }
            } else {
                t10 = ((((int)stk + 0) + 0x10) + 0x4);
                t11 = t3;
                t12 = 0x0;
                for (;;) {
                    t13 = *(signed char *)((t11 + 0x0));
                    t11 = (t11 + 0x1);
                    t12 = (t12 + 0x2);
                    *(unsigned char *)((t10 + 0x0)) = t13;
                    t10 = (t10 + 0x1);
                    t14 = *(signed char *)((t11 + 0x0));
                    t11 = (t11 + 0x1);
                    *(unsigned char *)((t10 + 0x0)) = t14;
                    t10 = (t10 + 0x1);
                    if ((int)t12 >= (int)0x8) {
                        break;
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0fddce((((int)stk + 0) + 0x10));
        FUN_0c0fddce(((((int)stk + 0) + 0x10) + 0x20));
        kmiCopyToFrameBuffer((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x10), 0x10);
    } else {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
        t31 = *(int *)(((int)stk + 8));
        kmiCopyFromFrameBuffer((*(int *)(((int)stk + 0))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC15AC88 + (t31 << 2)))) - 12)), 0x10);
        t37 = ((((int)stk + 0) + 0x10) + 0xC);
        t38 = 0x0;
        t39 = (*(int *)(((int)stk + 4)));
        for (;;) {
            t40 = *(signed char *)((t39 + 0x0));
            t39 = (t39 + 0x1);
            t38 = (t38 + 0x2);
            *(unsigned char *)((t37 + 0x0)) = t40;
            t37 = (t37 + 0x1);
            t41 = *(signed char *)((t39 + 0x0));
            t39 = (t39 + 0x1);
            *(unsigned char *)((t37 + 0x0)) = t41;
            t37 = (t37 + 0x1);
            if ((int)t38 >= (int)0x4) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x1C)));
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + ((*(int *)((0xC15AC88 + (t31 << 2)))) - 12));
        FUN_0c0fddce((((int)stk + 0) + 0x10));
        FUN_0c0fddce(((((int)stk + 0) + 0x10) + 0x20));
        kmiCopyToFrameBuffer((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10), 0x10);
        if ((unsigned int)((*(int *)((0xC15ACB4 + (t31 << 2)))) - 16) > (unsigned int)0x0) {
            t50 = *(int *)((0xC15AC88 + (t31 << 2)));
            t51 = *(int *)((a4 + 0x1C));
            t52 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 0)) = (t52 + 0x4);
            kmiCopyToFrameBuffer((t51 + (t50 + 0x4)), (t52 + 0x4), ((*(int *)((0xC15ACB4 + (t31 << 2)))) - 16));
        }
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
        kmiCopyFromFrameBuffer((((int)stk + 0) + 0x10), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC15AC88 + (((*(int *)(((int)stk + 8))) + 0x1) << 2)))) - 12)), 0x10);
        t66 = (*(int *)(((int)stk + 12)));
        t67 = 0x0;
        t68 = (((*(int *)(((t31 << 2) + 0xC15ACB4))) + (*(int *)(((int)stk + 4)))) - 12);
        for (;;) {
            t69 = *(signed char *)((t68 + 0x0));
            t68 = (t68 + 0x1);
            t67 = (t67 + 0x3);
            *(unsigned char *)((t66 + 0x0)) = t69;
            t66 = (t66 + 0x1);
            t70 = *(signed char *)((t68 + 0x0));
            t68 = (t68 + 0x1);
            *(unsigned char *)((t66 + 0x0)) = t70;
            t66 = (t66 + 0x1);
            t71 = *(signed char *)((t68 + 0x0));
            t68 = (t68 + 0x1);
            *(unsigned char *)((t66 + 0x0)) = t71;
            t66 = (t66 + 0x1);
            if ((int)t67 >= (int)0xC) {
                break;
            }
        }
        t72 = *(int *)(((int)stk + 8));
        *(volatile int *)((a4 + 0x1C));
        *(volatile int *)((0xC15AC88 + ((t72 + 0x1) << 2)));
        FUN_0c0fddce((((int)stk + 0) + 0x10));
    }
    return 0x0;
}
