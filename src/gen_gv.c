/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int FUN_0c03202c(int);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int FUN_0c032262(int a4, int a5, int a6, int a7);

int FUN_0c032262(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register float u21;
    register int t27;
    register int t29;
    register int t30;
    register int t31;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t48;
    register int t51;
    register int t6;
    register int t7;

    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c059132(0x5, 0x1, 0x4);
            if (t1 == 0) {
                return t1;
            }
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0x1F;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC0327E4;
            t3 = ((int (*)(void))(FUN_0c0e6fe8))();
            t4 = ((int (*)(void))(FUN_0c0e6fe8))();
            (((struct o50_float *)(t1))->v) = 1.0f;
            (((struct o54_float *)(t1))->v) = 1.0f;
            (((struct o58_float *)(t1))->v) = 1.0f;
            t5 = 0x58;
            t8 = t7;
            t9 = 0x0;
            t10 = 0x19;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t6 = 0x2E0;
                t10 = t9;
                t10 = (t10 << 2);
                t6 = (t6 + t1);
                t6 = (t6 + t10);
                t11 = *(int *)((t6 + 0x0));
                t6 = 0x2E0;
                *(unsigned char *)((t11 + 0x0)) = 0x1;
                t6 = (t6 + t1);
                t6 = (t6 + t10);
                t5 = 0x1F;
                *(unsigned short *)(((*(int *)((t6 + 0x0))) + 0x2)) = t5;
                t5 = (*(signed char *)((a4 + 0x3)));
                t8 = 0x2E0;
                t15 = t5;
                t5 = (t5 << 1);
                t5 = (t5 + t15);
                t5 = (t5 << 2);
                t5 = (t5 << 1);
                t8 = (t8 + t1);
                t8 = (t8 + t10);
                t8 = (*(int *)((t8 + 0x0)));
                t5 = (FUN_0c06233a(t8, ((signed char)t5 + 0xC6002D0), 0x7));
                t8 = 0x2E0;
                t5 = 0xC;
                t8 = (t8 + t1);
                t8 = (t8 + t10);
                t8 = (*(int *)((t8 + 0x0)));
                *(float *)((t8 + t5)) = 0.0f;
                t5 = 0x4;
                *(float *)((t8 + t5)) = 0.0f;
                t8 = t9;
                t6 = (*(int *)((((0x2E0 + t1) + t10) + 0x0)));
                t8 = (t8 << 2);
                t8 = (t8 + t9);
                t8 = (t8 << 2);
                t8 = (signed char)t8;
                t8 = (t8 + 0xC1495A0);
                t5 = 0x10;
                u21 = *(float *)((t8 + t5));
                t5 = 0x8;
                *(float *)((t6 + t5)) = u21;
                t6 = t8;
                *(volatile int *)((((0x2E0 + t1) + t10) + 0x0));
                t5 = 0xC;
                t5 = (((int (*)(int))(FUN_0c0e6fe8))(t8));
                t6 = 0x2E0;
                t9 = (t9 + 0x1);
                t6 = (t6 + t1);
                t10 = (t10 + t6);
                t6 = (*(int *)((t8 + 0xC)));
                *(unsigned int *)(((*(int *)((t10 + 0x0))) + 0x14)) = t6;
            }
            return ((int (*)(int, int, int, int))(0xC0327A0))(t8, a5, a6, a7);
        }
        if (t0 == 2) {
            t27 = FUN_0c059132(0x5, 0x1, 0xA);
            if (t27 == 0) {
                return t27;
            }
            *(unsigned char *)((t27 + 0x0)) = 0x1;
            *(unsigned char *)((t27 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t27 + 0x1)) = 0x1;
            *(unsigned short *)((t27 + 0x6)) = 0x1F;
            *(unsigned char *)((t27 + 0x5)) = 0x19;
            *(unsigned int *)((t27 + 0x10)) = 0xC0327E4;
            t29 = ((int (*)(void))(FUN_0c0e6fe8))();
            t30 = ((int (*)(void))(FUN_0c0e6fe8))();
            (((struct o58_float *)(t27))->v) = 1.0f;
            (((struct o54_float *)(t27))->v) = 1.0f;
            (((struct o50_float *)(t27))->v) = 1.0f;
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            return ((int (*)(void))(0xC032794))();
        }
        return t0;
    }
    t31 = FUN_0c059132(0x5, 0x1, 0xA);
    if (t31 == 0) {
        return t31;
    }
    *(unsigned char *)((t31 + 0x0)) = 0x1;
    *(unsigned char *)((t31 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((t31 + 0x1)) = 0x1;
    *(unsigned short *)((t31 + 0x6)) = 0x1F;
    *(unsigned char *)((t31 + 0x5)) = 0x19;
    *(unsigned int *)((t31 + 0x10)) = 0xC0327E4;
    t33 = ((int (*)(void))(FUN_0c0e6fe8))();
    t34 = ((int (*)(void))(FUN_0c0e6fe8))();
    (((struct o58_float *)(t31))->v) = 1.0f;
    (((struct o54_float *)(t31))->v) = 1.0f;
    (((struct o50_float *)(t31))->v) = 1.0f;
    t35 = 0x50;
    t36 = 0x0;
    t37 = 0x0;
    for (;;) {
        if ((int)t36 >= (int)0xA) {
            break;
        }
        t35 = 0x21F;
        *(unsigned char *)(((*(int *)((((0x2E0 + t31) + t37) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + t31) + t37) + 0x0))) + 0x2)) = t35;
        FUN_0c0df940();
        
        t35 = 0x64;
        t35 = (FUN_0c0e6f24());
        t35 = 0x3;
        t35 = (FUN_0c0e6f24());
        t48 = *(signed char *)((0xC1495F0 + t35));
        t35 = (*(signed char *)((a4 + 0x3)));
        t51 = t35;
        t35 = (t35 << 1);
        t35 = (t35 + t51);
        t35 = (t35 << 2);
        t35 = (t35 << 1);
        t35 = (FUN_0c06233a((*(int *)((((0x2E0 + t31) + t37) + 0x0))), ((signed char)t35 + 0xC6002D0), t48));
        t35 = (FUN_0c03202c((*(int *)((((0x2E0 + t31) + t37) + 0x0)))));
        t37 = (t37 + 0x4);
        t36 = (t36 + 0x1);
    }
    return ((int (*)(void))(0xC0327A0))();
}
