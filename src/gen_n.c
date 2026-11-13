/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c042eac(int, float, float, float, float);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0ace56(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(void);
int FUN_0c0ae2fc(int a4);
int FUN_0c0ccbfe(void);
int FUN_0c04b114(int a4, int a5, int a6, int a7);


int FUN_0c0ccbfe(void)
{
    register int t0;
    register int t7;
    register int t4;
    register int t5;

    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x10)) = 0xC0CCC98;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t5, 0xC4CFA68, (t4 + 0x1));
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + 0x2)) = 0x1;
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t7 = 0x1;
    }
    return t7;
}

int FUN_0c04b114(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC04B1CC))(a4, 0xF, a6, a7);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0714285672f);
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
    }
    *(volatile short *)((a4 + 0xEC));
    FUN_0c0e6e5c(a4);
    return ((int (*)(void))(0xC04B1A8))();
}
