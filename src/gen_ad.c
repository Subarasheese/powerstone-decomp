/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c0e6fdc(int, int);
int FUN_0c0e6fe8(int, int);
int FUN_0c031388(void);
float FUN_0c02629e(int a4, int a5);
float FUN_0c0263b2(int a4, int a5);

int FUN_0c031388(void)
{
    int stk[16];
    register int t6;

    if ((*(signed char *)0xC7F4769) != 0) {
        *(float *)(((int)stk + 12)) = ((((struct o0_float *)0xC031440)->v));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = ((((struct o4_float *)0xC031440)->v));
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(float *)(((int)stk + 24)) = ((((struct o8_float *)0xC031440)->v));
        *(float *)(((int)stk + 28)) = ((((struct oC_float *)0xC031440)->v));
        *(unsigned int *)(((int)stk + 60)) = 0x6;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t6 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0xD, 0x0, 0x0, 0x0));
    }
    return t6;
}

float FUN_0c02629e(int a4, int a5)
{
    int stk[15];
    register float u24;
    register float u15;
    register float u6;
    register int t1;
    register int t10;
    register int t19;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                FUN_0c0e6fdc((((int)stk + 0) + 0x14), a5);
                u6 = (((((struct o4_float *)(t1))->v)) + ((((struct o10_float *)(t1))->v)));
            }
            u15 = u6;
        } else {
            FUN_0c0e6fe8(((int)stk + 0), a5);
            u15 = (((((struct o4_float *)(t10))->v)) + ((((struct o10_float *)(t10))->v)));
        }
        u24 = u15;
    } else {
        FUN_0c0e6fdc((((int)stk + 0) + 0x2C), a5);
        u24 = (((((struct o4_float *)(t19))->v)) + ((((struct oC_float *)(t19))->v)));
    }
    return u24;
}

