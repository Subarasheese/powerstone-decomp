/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a12c-0c03a278) */

int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _modls(void);
int _quick_odd_mvn(void);

int FUN_0c03a12c(int a4, int a5, int a6)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t19;
    register int t21;
    register int t23;
    register int t0;
    register int t1;
    register int t2;
    register int t7;
    register int t8;
    register int t25;
    register int t27;
    register int t28;
    register int t29;
    register int t30;

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
        t0 = (obj_create(t3, t4, t5, 0x0));
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
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((a4 + 0x20)); }
            t1 = t8;
            t1 = (t1 + 0x2C);
            t0 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((a4 + 0x2C)); }
            t1 = t8;
            t1 = (t1 + 0x50);
            t0 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(0xC3216E0); }
            t0 = 0x118;
            t2 = 0xC0E6E5C;
            *(unsigned int *)((t8 + t0)) = 0x0;
            t0 = 0x3;
            t1 = t6;
            t0 = ((int)((int)t1 % (int)t0));
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
            t19 = *(int *)((t8 + t0));
            t0 = 0x90;
            *(unsigned int *)((t19 + t0)) = 0x0;
            t0 = 0x2E0;
            t2 = (*(int *)((t8 + t0)));
            t0 = 0x7;
            *(unsigned short *)((t2 + 0x2)) = t0;
            for (;;) {
                t0 = 0x2E0;
                t5 = (t5 + 0x1);
                t1 = 0x90;
                t0 = (t0 + t8);
                t21 = *(signed char *)((t4 + 0x0));
                t4 = (t4 + 0x1);
                t2 = (*(int *)((t3 + t0)));
                t1 = (t1 + t2);
                t2 = 0x2E0;
                t23 = *(int *)(((t21 << 2) + t0));
                t0 = 0xF;
                t2 = (t2 + t8);
                t2 = (t2 + t3);
                *(unsigned int *)((t1 + 0x0)) = (t23 + 0x50);
                *(unsigned short *)(((*(int *)((t2 + 0x0))) + 0x2)) = t0;
                t3 = (t3 + 0x4);
                if ((int)t5 >= (int)0x6) {
                    break;
                }
            }
            t25 = t1;
            t27 = t2;
            t28 = t3;
            t29 = t4;
            t30 = t5;
        }
        t1 = t25;
        t2 = t27;
        t3 = t28;
        t4 = t29;
        t5 = t30;
        t6 = (t6 + 0x1);
    }
    return t0;
}
