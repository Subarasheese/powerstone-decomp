/* same module (0c0dd600-0c0dd880) */

int FUN_0c0ddd10(int, int);
int FUN_0c0ddee0(int);
int FUN_0c0ddbc0(int);
int res_texture_slot_tick_release(int);
int FUN_0c0fca2e(int);

int FUN_0c0dd600(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = *(int *)((a4 + 0x0));
    t2 = 0x0;
    if (((int)t1 >= 0) && (t0 = *(int *)((a4 + 0x18)), t0 != 0)) {
        t0 = t1;
        t1 = a4;
        t3 = 0x0;
        t4 = (a4 + 0x18);
        for (;;) {
            t5 = *(int *)((t4 + 0x20));
            t6 = t4;
            t4 = (t4 + 0x50);
            t7 = t5;
            if ((int)t5 >= 0) {
                t8 = 0xC7FD490;
                t9 = 0xC7F87C8;
                t0 = (*(int *)((t8 + 0x0)));
                t1 = (t5 + t0);
                t1 = (t1 << 2);
                t1 = (t1 << 1);
                t1 = (t1 + (*(int *)((t9 + 0x0))));
                t0 = (*(int *)((t1 + 0x0)));
                if (t0 == 0) {
                    t3 = 0x1;
                    t5 = 0xFFFFFFFF;
                } else {
                    t5 = (*(int *)((t1 + 0x4)));
                }
                t7 = t5;
            }
            t5 = *(int *)((t6 + 0xC));
            if ((int)t7 >= 0) {
                t0 = 0xC0DDD10;
                t1 = t6;
                t9 = (FUN_0c0ddd10(t1, t7));
            } else {
                t0 = 0xC0DDEE0;
                t1 = t6;
                t9 = (FUN_0c0ddee0(t1));
            }
            t9 = 0x4C;
            t8 = (*(int *)((t6 + 0xC)));
            t8 = (t8 | (t5 & 0x7E00000));
            *(unsigned int *)((t6 + 0xC)) = t8;
            t0 = (*(int *)((t6 + t9)));
            t4 = (t4 + t0);
            t1 = (*(int *)((t4 + 0x0)));
            if (t1 == 0) {
                break;
            }
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c0dd6c0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t73;
    register int t3;
    int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t62;
    int t2;
    register int t6;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t44;
    register int t45;
    register int t30;
    register int t31;
    register int t57;
    register int t58;
    register int t59;
    register int t50;

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t4 = *(int *)((a4 + 0x0));
    t73 = a4;
    if (((int)t4 >= 0) && (t3 = *(int *)((a4 + 0x18)), t3 != 0)) {
        t5 = 0x0;
        t7 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t7 + 0x20));
            t10 = t7;
            t7 = (t7 + 0x50);
            if (((int)t9 >= 0) && (t4 = 0xC7FD490, t11 = *(int *)0xC7F87C8, t3 = t11, t12 = *(int *)((t4 + 0x0)), t5 = t12, t8 = (t9 + t5), t8 = (t8 << 2), t13 = (int)(((unsigned int)t8) >> 31), t8 = (t8 << 1), t3 = (t3 + t8), t14 = *(int *)((t3 + 0x0)), t2 = t14, t15 = (t9 + t5), t5 = 0x0, (unsigned int)t2 > (unsigned int)t5)) {
                t3 = (*(int *)0xC7F87C8);
                t3 = (t3 + t8);
                t2 = (*(int *)((t3 + 0x0)));
                t2 = (t2 - 1);
                *(unsigned int *)((t3 + 0x0)) = t2;
                t3 = (*(int *)0xC7F87C8);
                t3 = (t3 + t8);
                t2 = (*(int *)((t3 + 0x0)));
                if (t2 == 0) {
                    t2 = (*(int *)0xC7F87C8);
                    t2 = (t2 + t8);
                    t3 = (*(int *)((t2 + 0x4)));
                    *(unsigned int *)(((int)stk + 0)) = t3;
                    t3 = 0x3C;
                    t2 = (*(int *)(((int)stk + 0)));
                    t4 = (*(int *)0xC7FC4F0);
                    t6 = (t2 * t3);
                    t4 = (t4 + t6);
                    t2 = (*(int *)((t4 + 0x28)));
                    if (t2 == 0) {
                        t4 = 0xC0FCA2E;
                        t2 = (FUN_0c0fca2e(((*(int *)0xC7FC4F0) + t6)));
                        if (t2 != 0) {
                            t4 = 0x1;
                            *(unsigned int *)(((int)stk + 4)) = t4;
                            t31 = t4;
                        }
                    } else {
                        t30 = t3;
                        t31 = t4;
                    }
                    t3 = t30;
                    t4 = t31;
                    t5 = (*(int *)0xC7FC4F0);
                    t4 = 0x0;
                    t5 = (t5 + t6);
                    *(unsigned int *)((t5 + 0x2C)) = t4;
                    t5 = (*(int *)0xC7FC4F0);
                    t5 = (t5 + t6);
                    *(unsigned int *)((t5 + 0x38)) = 0xFFFFFFFF;
                    t5 = 0xC0DDBC0;
                    t2 = (FUN_0c0ddbc0((*(int *)(((int)stk + 0)))));
                    t4 = (*(int *)0xC7F87C8);
                    t4 = (t4 + t8);
                    *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                } else {
                    t44 = t3;
                    t45 = t5;
                }
            } else {
                t44 = t3;
                t45 = t5;
            }
            t3 = t44;
            t4 = 0xC346B68;
            t5 = t45;
            t5 = (*(int *)((t4 + 0x0)));
            if (t5 == 0) {
                t2 = (*(int *)((t10 + 0xC)));
                t5 = 0xFFFFFFE5;
                t2 = ((unsigned int)t2 << (int)t5);
                t5 = 0xC7F87C0;
                t3 = (*(int *)((t5 + 0x0)));
                if ((t3 != 0) && ((t50 = (0x7 & t2), t2 = (0x7 & t2), t2 == 5) || (t2 = t50, t2 == 6))) {
                    t5 = 0xC0EAD50;
                    t2 = (res_texture_slot_tick_release((*(int *)((t10 + 0x3C)))));
                } else {
                    t57 = t3;
                    t58 = t4;
                    t59 = t5;
                }
            } else {
                t57 = t3;
                t58 = t4;
                t59 = t5;
            }
            t2 = 0x4C;
            t3 = t57;
            t4 = t58;
            t5 = t59;
            t4 = (*(int *)((t10 + t2)));
            t7 = (t7 + t4);
            t62 = *(int *)((t7 + 0x0));
            if (t62 == 0) {
                break;
            }
        }
        *(volatile int *)(((int)stk + 4));
        t73 = t62;
    }
    return ((int (*)(int, int, int, int))(0xC0DD7BE))(t73, a5, a6, a7);
}

void FUN_0c0dd7d0(int a4)
{
    *(unsigned int *)0xC7F87C0 = a4;
}
