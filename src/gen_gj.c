/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c024298(int, float, float, float, float, float);
int FUN_0c024300(int, float, float, float, float);
int FUN_0c0243b0(int, int, float, float, float);
int FUN_0c0e6fdc(void);
int FUN_0c0e6fe8(void);
int FUN_0c023d8e(void);

int FUN_0c023d8e(void)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t10;
    register int t11;
    register int t20;
    register int t21;
    register int t23;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t1 << 1) + t1) + 0xC33EC20) + 0x1)))) {
            break;
        }
        *(volatile int *)((0xC33EB20 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fdc();
        FUN_0c0243b0((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0xC), 1.0f, 0.0f, 1.0f);
        t0 = (t0 + 0x1);
    }
    t10 = 0x0;
    for (;;) {
        t11 = *(signed char *)0xC7F3051;
        if ((int)t10 >= (int)(*(signed char *)(((((t11 << 1) + t11) + 0xC33EC20) + 0x0)))) {
            break;
        }
        *(volatile int *)((0xC33EAA0 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fe8();
        FUN_0c024298(((int)stk + 0), ((((struct o10_float *)(((int)stk + 0)))->v)), ((((struct oC_float *)(((int)stk + 0)))->v)), 1.0f, 0.0f, 1.0f);
        t10 = (t10 + 0x1);
    }
    t20 = 0x0;
    for (;;) {
        t21 = *(signed char *)0xC7F3051;
        t23 = *(signed char *)(((((t21 << 1) + t21) + 0xC33EC20) + 0x2));
        if ((int)t20 >= (int)t23) {
            break;
        }
        *(volatile int *)((0xC33EBA0 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fdc();
        FUN_0c024300((((int)stk + 0) + 0x2C), ((((struct oC_float *)((((int)stk + 0) + 0x2C)))->v)), 1.0f, 0.0f, 1.0f);
        t20 = (t20 + 0x1);
    }
    return t23;
}
