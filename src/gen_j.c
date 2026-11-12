/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oF0_short { char p[0xF0]; short v; };
int FUN_0c062050(int, int, int);
int FUN_0c0e6fe8(int);
int FUN_0c040410(int a4);

int FUN_0c040410(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = 0xC0404E8;
    t1 = (0x2E0 + a4);
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    t4 = (0x2E0 + a4);
    for (;;) {
        if ((*(signed char *)(((*(int *)((t4 + 0x0))) + 0x0))) != 0) {
            t5 = (*(int *)((t3 + 0x0)));
            t0 = 0x44;
            t6 = t1;
            if (1.0f > (*(float *)((t5 + t0)))) {
                *(float *)((t5 + t0)) = ((*(float *)((t5 + t0))) + 0.125f);
                t0 = 0x48;
                *(float *)((t5 + t0)) = ((*(float *)((t5 + t0))) + 0.125f);
                t0 = 0x4C;
                u0 = *(float *)((t5 + t0));
                *(float *)((t5 + t0)) = (u0 + 0.125f);
                if (!(1.0f > (u0 + 0.125f))) {
                    t0 = 0xC;
                    t0 = (FUN_0c0e6fe8(t1));
                } else {
                    t6 = t1;
                }
            }
            t1 = t6;
            t1 = t5;
            t1 = (t1 + 0x4);
            t0 = (FUN_0c062050(t1, (t5 + 0x4), (t5 + 0x28)));
            t6 = *(int *)((t5 + 0x10));
            *(unsigned int *)((t5 + 0x10)) = (t6 - 1);
            if ((t6 - 1) == 0) {
                t0 = 0xF0;
                *(unsigned char *)((t5 + 0x0)) = 0x0;
                *(unsigned short *)((a4 + t0)) = ((*(short *)((a4 + t0))) - 1);
            }
        } else {
            t5 = t1;
        }
        t2 = (t2 + 0x1);
        t1 = t5;
        t3 = (t3 + 0x4);
        t4 = (t4 + 0x4);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    return ((((struct oF0_short *)(a4))->v));
}
