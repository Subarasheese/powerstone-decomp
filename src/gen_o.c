/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int FUN_0c042f48(int, int, int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c0e6fe8(int, int);
int FUN_0c0428ca(int a4, int a5);

int FUN_0c0428ca(int a4, int a5)
{
    int stk[6];
    int t1;
    register int t5;
    register int t8;
    register int t13;

    *(unsigned char *)(((int)stk + 8)) = a4;
    FUN_0c0e6fe8(a4, a5);
    t1 = *(int *)0xC7F3014;
    FUN_0c062050((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x4), ((signed char)((((0x7 & (t1 >> 1)) << 1) + (0x7 & (t1 >> 1))) << 2) + 0xC149DF4));
    t5 = *(signed char *)0xC7F3014;
    *(int *)((int)stk + 4) = ((signed char)((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC149E54);
    *(int *)((int)stk + 0) = 0x0;
    t8 = FUN_0c042f48((*(signed char *)(((int)stk + 8))), 0x1, 0x1, (((int)stk + 0) + 0xC), 0x0, ((signed char)((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC149E54));
    t13 = t8;
    if (t8 != 0) {
        (((struct o40_float *)(((((struct o2E0_int *)(t8))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(t8))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t8))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t8))->v))))->v) = 1.0f;
        (((struct o4_float *)((0x308 + t8)))->v) = 1.0f;
        t13 = 0x4;
    }
    return t13;
}
