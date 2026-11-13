/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a12c-0c03a278) */

int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(void);

int FUN_0c03a12c(int a4, int a5, int a6)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t22;
    register int t24;
    register int t26;
    register int t0;
    register int t1;
    register int t2;
    register int t7;
    register int t8;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;

    t3 = a4;
    t4 = a5;
    t5 = a6;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x3) {
            break;
        }
        t4 = 0x1;
        t5 = 0x6;
        t3 = 0x5;
        t0 = (obj_create(t3, t4, t5));
        t8 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            t0 = 0x1;
            *(unsigned char *)((t8 + 0x1)) = t0;
            t0 = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t8 + 0x3)) = t0;
            t0 = 0x5;
            *(unsigned short *)((t8 + 0x6)) = t0;
            t0 = 0x19;
            *(unsigned char *)((t8 + 0x5)) = t0;
            t0 = 0x0;
            *(unsigned char *)((t8 + 0x8)) = t0;
            t1 = t8;
            *(unsigned char *)((t8 + 0x9)) = t0;
            t0 = 0xEC;
            t2 = 0xC0E6FE8;
            t1 = (t1 + 0x20);
            *(unsigned short *)((t8 + t0)) = 0x0;
            t0 = (t0 + 0x2);
            *(unsigned short *)((t8 + t0)) = 0x0;
            t0 = 0xC;
            t0 = (FUN_0c0e6fe8());
            t1 = t8;
            t1 = (t1 + 0x2C);
            t0 = 0xC;
            t0 = (FUN_0c0e6fe8());
            t1 = t8;
            t1 = (t1 + 0x50);
            t0 = 0xC;
            t0 = (FUN_0c0e6fe8());
            t0 = 0x118;
            t2 = 0xC0E6E5C;
            *(unsigned int *)((t8 + t0)) = 0x0;
            t0 = 0x3;
            t1 = t6;
            t0 = (FUN_0c0e6e5c());
            t1 = t0;
            t6 = t0;
            t0 = 0xC3215A0;
            t1 = (t1 << 2);
            t7 = 0x0;
            t2 = (*(int *)((t1 + t0)));
            *(unsigned int *)((t8 + 0x10)) = t2;
            for (;;) {
                t2 = 0x2E0;
                t5 = t7;
                t2 = (t2 + t8);
                t1 = (*(int *)((((t7 << 2) + t2) + 0x0)));
                t5 = (t5 + 0xC);
                *(unsigned int *)(((int)stk + 0)) = t1;
                t0 = (*(signed char *)((a4 + 0x3)));
                t2 = t0;
                t0 = (t0 << 1);
                t0 = (t0 + t2);
                t2 = 0xC6002D0;
                t0 = (t0 << 2);
                t0 = (t0 << 1);
                t4 = (signed char)t0;
                t4 = (t4 + t2);
                t3 = t1;
                t0 = (FUN_0c06233a(t3, t4, t5));
                t2 = (*(int *)(((int)stk + 0)));
                t7 = (t7 + 0x1);
                *(unsigned char *)((t2 + 0x0)) = 0x1;
                if ((int)t7 >= (int)0x6) {
                    break;
                }
            }
            t0 = 0x2E0;
            t3 = 0x4;
            t4 = 0xC3215AD;
            t5 = 0x1;
            t22 = *(int *)((t8 + t0));
            t0 = 0x90;
            *(unsigned int *)((t22 + t0)) = 0x0;
            t0 = 0x2E0;
            t2 = (*(int *)((t8 + t0)));
            t0 = 0x7;
            *(unsigned short *)((t2 + 0x2)) = t0;
            for (;;) {
                t0 = 0x2E0;
                t5 = (t5 + 0x1);
                t1 = 0x90;
                t0 = (t0 + t8);
                t24 = *(signed char *)((t4 + 0x0));
                t4 = (t4 + 0x1);
                t2 = (*(int *)((t3 + t0)));
                t1 = (t1 + t2);
                t2 = 0x2E0;
                t26 = *(int *)(((t24 << 2) + t0));
                t0 = 0xF;
                t2 = (t2 + t8);
                t2 = (t2 + t3);
                *(unsigned int *)((t1 + 0x0)) = (t26 + 0x50);
                *(unsigned short *)(((*(int *)((t2 + 0x0))) + 0x2)) = t0;
                t3 = (t3 + 0x4);
                if ((int)t5 >= (int)0x6) {
                    break;
                }
            }
            t28 = t1;
            t30 = t2;
            t31 = t3;
            t32 = t4;
            t33 = t5;
        }
        t1 = t28;
        t2 = t30;
        t3 = t31;
        t4 = t32;
        t5 = t33;
        t6 = (t6 + 0x1);
    }
    return t0;
}
