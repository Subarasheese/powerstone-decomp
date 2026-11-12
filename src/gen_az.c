/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3ebc(int, int, int);
int FUN_0c0abe44(int, int, int);
int FUN_0c0e6fe8(int);
int FUN_0c043730(int a4, int a5);
int FUN_0c0645f6(int a4);
int FUN_0c0aa3c2(int a4, int a5, int a6, int a7);
int FUN_0c0a5ef6(int a4, int a5, int a6, int a7);
int FUN_0c0a6fa0(int a4, int a5, int a6, int a7);

int FUN_0c043730(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = FUN_0c059132(0x5, 0x1, 0x3);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x20F;
        *(unsigned char *)((t1 + 0x5)) = 0x1;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        *(unsigned int *)((t1 + 0x2C)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0438A4;
        FUN_0c0e6fe8(0x0);
        *(unsigned int *)((t1 + 0x30)) = a5;
        t3 = t0;
        t0 = 0xC14A5D0;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x2)) = 0x3F;
            t6 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t5 = FUN_0c06233a((*(int *)((((0x2E0 + t1) + t4) + 0x0))), 0xC4CFA68, t6);
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)(signed char)t3 >= (int)0x3) {
                break;
            }
        }
        t2 = t5;
    }
    return t2;
}

int FUN_0c0645f6(int a4)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t9;
    int t10;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x2, 0x5B);
        t5 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t5 + 0x1);
        return (t5 + 0x1);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 9) {
        t9 = (((struct o71CC_int *)(a4))->v);
        if ((t9 != 0) && (t10 = *(signed char *)((t9 + 0x30D)), t10 == 5)) {
            FUN_0c0abe44(((((struct o71CC_int *)(a4))->v)), 0x12, (*(signed char *)((a4 + 0x3))));
            FUN_0c0a3ebc(0x0, (*(signed char *)((a4 + 0x3))), 0x0);
        } else {
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xE);
    }
    return FUN_0c09da1c(a4);
}

int FUN_0c0aa3c2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x1E);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    }
    t0 = *(signed char *)0xC7F2EE6;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        t0 = *(signed char *)0xC7F2EE7;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 3) {
            *(unsigned char *)((a4 + 0x8)) = 0x63;
            t1 = 0x63;
        }
    }
    return t1;
}

int FUN_0c0a5ef6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        t1 = t0;
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    t0 = 0x50;
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0a6fa0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x4));
        t1 = t0;
        if (t0 == 0) {
            t0 = (((struct o2E0_int *)(a4))->v);
            t2 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (t2 ^ 0x1);
            t1 = (t2 ^ 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x2;
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        t0 = 0x0;
    }
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, t0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    return 0x50;
}
