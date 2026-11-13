/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
int FUN_0c01d0ec(int);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c01c850(int a4, int a5);

int FUN_0c01c850(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t31;
    register int t4;
    register int t11;
    register int t21;
    register int t29;
    register int t14;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x6);
    t31 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x1;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC1804FC + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = ((unsigned char)a5 + 0xC180522);
        *(unsigned int *)(((int)stk + 12)) = 0xC180531;
        *(unsigned int *)(((int)stk + 8)) = ((unsigned char)a5 + 0xC180532);
        *(unsigned int *)(((int)stk + 4)) = 0xC180541;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t4 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t4 << 2)) + 0x0))) + 0x2)) = 0x40F;
            (((struct o40_float *)((*(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0)))))->v) = 1.0f;
            if (t4 != 4) {
                if (t4 != 5) {
                    t29 = (FUN_0c06233a((*(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0))), 0xC664AA8, (*(signed char *)((t4 + 0xC18051C)))));
                } else {
                    t11 = FUN_0c01d0ec(a5);
                    if ((signed char)t11 != 0) {
                        t14 = (*(int *)(((int)stk + 8)));
                    } else {
                        t14 = (*(int *)(((int)stk + 4)));
                    }
                    t29 = (FUN_0c06233a((*(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0))), 0xC664AA8, (*(signed char *)((t14 + 0x0)))));
                }
            } else {
                t21 = FUN_0c01d0ec(a5);
                if ((signed char)t21 != 0) {
                    t24 = (*(int *)(((int)stk + 0)));
                } else {
                    t24 = (*(int *)(((int)stk + 12)));
                }
                t29 = (FUN_0c06233a((*(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0))), 0xC664AA8, (*(signed char *)((t24 + 0x0)))));
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        t31 = t29;
    }
    return t31;
}
