/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6e5c(int);
extern int FUN_0c0e6fe8();
int FUN_0c033442(int a4);
int FUN_0c03e918(int a4, int a5);

int FUN_0c033442(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t2 = (((struct o2E4_int *)(a4))->v);
    t3 = *(signed char *)((a4 + 0x9));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                t4 = t3;
            } else {
                (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
                (((struct o44_float *)(t2))->v) = (((((struct o44_float *)(t2))->v)) - 0.125f);
                (((struct o48_float *)(t2))->v) = (((((struct o48_float *)(t2))->v)) - 0.125f);
                (((struct o4C_float *)(t2))->v) = (((((struct o4C_float *)(t2))->v)) - 0.125f);
                t3 = 0x44;
                if (!(((((struct o44_float *)(t2))->v)) > 0.0f)) {
                    t5 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t5 + 0x1);
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                    t3 = (t5 + 0x1);
                }
                t4 = t3;
            }
            t3 = t4;
        } else {
            (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + ((((struct o30_float *)(t2))->v)));
            u0 = (((struct o24_float *)(t2))->v);
            u1 = (((struct o30_float *)(t2))->v);
            (((struct o24_float *)(t2))->v) = (u0 + u1);
            t4 = 0x24;
            if (!(1.0f > (u0 + u1))) {
                t5 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t5 + 0x1);
                t4 = (t5 + 0x1);
            }
            t3 = t4;
        }
        t4 = t3;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o30_float *)(t2))->v) = 0.125f;
        *(unsigned int *)((t2 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
        *(unsigned short *)((t2 + 0x2)) = 0x21F;
        FUN_0c0e6fe8(a4, t2, 0.125f);
        (((struct o1C_float *)(t4))->v) = (((((struct o1C_float *)(t4))->v)) + ((((struct o30_float *)(t4))->v)));
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + ((((struct o30_float *)(t4))->v)));
        u0 = (((struct o24_float *)(t4))->v);
        u1 = (((struct o30_float *)(t4))->v);
        (((struct o24_float *)(t4))->v) = (u0 + u1);
        t4 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t2 = *(signed char *)((t1 + 0x9));
            *(unsigned char *)((t1 + 0x9)) = (t2 + 0x1);
            t4 = (t2 + 0x1);
        }
    }
    return t4;
}

int FUN_0c03e918(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t19;
    register int t2;
    register int t4;
    register int t6;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t3;
    register int t5;
    register int t7;
    register int t8;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x4);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03EC80;
        t2 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x1);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t3);
        t6 = ((int (*)(int))(FUN_0c0e6fe8))(t5);
        (((struct o118_uint *)(t7))->v) = 0x0;
        *(unsigned int *)((t7 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t7))->v) = t8;
        *(volatile signed char *)(((int)stk + 0));
        (((struct oEE_ushort *)(t11))->v) = (FUN_0c0e6e5c(t7));
        (((struct oF0_ushort *)(t11))->v) = 0x0;
        t12 = (0x2E0 + t11);
        t13 = 0x0;
        for (;;) {
            t14 = *(int *)((t12 + 0x0));
            t12 = (t12 + 0x4);
            *(unsigned char *)((t14 + 0x0)) = 0x0;
            t15 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t14, ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x1B);
            t13 = (t13 + 0x1);
            *(unsigned short *)((t14 + 0x2)) = 0x1F;
            if ((int)t13 >= (int)0x4) {
                break;
            }
        }
        t19 = 0x1F;
    }
    return t19;
}
