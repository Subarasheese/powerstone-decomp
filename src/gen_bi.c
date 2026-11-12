/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c01a800(int a4);
int FUN_0c0dfce0(int a4, int a5, int a6, int a7);
int FUN_0c0dfa50(int a4, int a5, int a6, int a7);
int FUN_0c0be74a(int a4);
int FUN_0c0bd5ae(int a4);

int FUN_0c01a800(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t11;
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t1 = 0x0;
    for (;;) {
        t2 = FUN_0c059132(0x5, 0x1, 0x1);
        t11 = t2;
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x10)) = 0xC01A74C;
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned char *)((t2 + 0x3)) = 0x2;
            *(unsigned char *)((t2 + 0x1)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            *(unsigned char *)((t2 + 0x5)) = 0x0;
            (((struct o58_float *)(t2))->v) = 1.0f;
            (((struct o54_float *)(t2))->v) = 1.0f;
            (((struct o50_float *)(t2))->v) = 1.0f;
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 << 2);
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            *(unsigned int *)((t2 + 0x30)) = 0x0;
            *(unsigned int *)((t2 + 0x2C)) = 0x0;
            (((struct oF2_ushort *)(t2))->v) = (*(short *)(((int)stk + 0)));
            t0 = (t0 + 0xC11C034);
            FUN_0c0e6fe8();
            *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x1)) = 0x0;
            *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
            FUN_0c06233a(((((struct o2E0_int *)(t2))->v)), 0xC664AC0, (*(signed char *)((t0 + 0xC))));
            *(unsigned char *)((t2 + 0xF)) = t1;
            t11 = t1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    return t11;
}



int FUN_0c0be74a(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 8.0f);
        if (!(((float)t0 / 8.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return FUN_0c059330(a4);
}

int FUN_0c0bd5ae(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
        if (!(((float)t0 / 10.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return FUN_0c059330(a4);
}
