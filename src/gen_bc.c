/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c042f48(int, int, int, int, int, int);
int FUN_0c059132(int, int, int);
int FUN_0c0e6fe8(int, int, float);
int FUN_0c042728(int a4, int a5, float f4);
int FUN_0c04463c(int a4, float f4);

int FUN_0c042728(int a4, int a5, float f4)
{
    int stk[7];
    register int t1;
    register int t3;
    register int t14;
    register int t6;

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    FUN_0c0e6fe8(a4, a5, f4);
    t1 = *(signed char *)0xC7F307C;
    *(int *)((int)stk + 4) = ((unsigned char)((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC14A110);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c042f48(0x2, 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, ((unsigned char)((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC14A110));
    t14 = t3;
    if (t3 != 0) {
        (((struct o40_float *)(((((struct o2E0_int *)(t3))->v))))->v) = 1.0f;
        t6 = *(signed char *)(((int)stk + 12));
        (((struct o44_float *)(((((struct o2E0_int *)(t3))->v))))->v) = (*(float *)((((signed char)(((t6 << 1) + t6) << 2) + 0xC14A290) + 0x0)));
        (((struct o48_float *)(((((struct o2E0_int *)(t3))->v))))->v) = ((((struct o4_float *)(((signed char)(((t6 << 1) + t6) << 2) + 0xC14A290)))->v));
        (((struct o4C_float *)(((((struct o2E0_int *)(t3))->v))))->v) = ((((struct o8_float *)(((signed char)(((t6 << 1) + t6) << 2) + 0xC14A290)))->v));
        (((struct o4_float *)((t3 + 0x308)))->v) = (*(float *)(((int)stk + 8)));
        t14 = 0x4;
    }
    return t14;
}

int FUN_0c04463c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = FUN_0c059132(0x6, 0x1, 0xA);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x5)) = 0x1;
        *(unsigned int *)((t2 + 0x10)) = 0xC044B40;
        (((struct o118_uint *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        *(unsigned int *)((t2 + 0x30)) = 0x0;
        *(unsigned int *)((t2 + 0x2C)) = 0x0;
        (((struct o58_float *)(t2))->v) = 1.0f;
        (((struct o54_float *)(t2))->v) = 1.0f;
        (((struct o50_float *)(t2))->v) = 1.0f;
        FUN_0c0e6fe8(t2, 0x0, 1.0f);
        (((struct o308_float *)(t0))->v) = ((((struct o4_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 500.0f);
        (((struct o5C_float *)(t0))->v) = f4;
        t2 = (0x2E0 + t0);
        t0 = t1;
        for (;;) {
            t0 = (t0 + 0x1);
            t4 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            *(unsigned char *)((t4 + 0x0)) = t1;
            if ((int)(signed char)t0 >= (int)0xA) {
                break;
            }
        }
        t3 = 0xA;
    }
    return t3;
}
