/* Straight-line functions with calls and guards (batch gen_dy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
int FUN_0c03bcac(int a4, int a5);

int FUN_0c03bcac(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t19;
    register float u4;
    register int t5;
    register int t6;
    register int t9;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0xA);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03BE40;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c0e6fe8(0x1);
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        u4 = *(float *)0xC03BE30;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x2)) = 0x23F;
            t9 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t6) + 0x0))), ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0xA);
            t5 = (t5 + 0x1);
            t14 = *(int *)((((0x2E0 + t0) + t6) + 0x0));
            (((struct o24_float *)(t14))->v) = u4;
            (((struct o20_float *)(t14))->v) = u4;
            (((struct o1C_float *)(t14))->v) = u4;
            (((struct o44_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = 1.0f;
            (((struct o48_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = 1.0f;
            (((struct o4C_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = 1.0f;
            t6 = (t6 + 0x4);
            if ((int)t5 >= (int)0xA) {
                break;
            }
        }
        t19 = 0x4C;
    }
    return t19;
}
