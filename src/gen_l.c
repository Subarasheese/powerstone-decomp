/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c02d9e0(void);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int, int, int, int);
int FUN_0c107432(int, int, int, int, int);
int FUN_0c10a2e0(int, int, int);
int FUN_0c10b5f2(int);
int FUN_0c1092e0(int a4, int a5);
int FUN_0c042150(int a4, int a5, int a6, int a7);
int FUN_0c1077d4(int a4);
int FUN_0c0150f8(void);

int FUN_0c1092e0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e6e5c(a4);
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    if (((((struct o20_int *)0xC347658)->v)) != t1) {
        if (((*(int *)0xC816FC8) & 4) != 0) {
            t0 = 0x0;
            if ((unsigned int)((((struct o0_int *)0xC347658)->v)) < (unsigned int)((((struct o14_int *)0xC347658)->v))) {
                t0 = 0x1;
            }
            t2 = (FUN_0c10a2e0(t0, (t1 << 1), a5));
        } else {
            t2 = (FUN_0c10a2e0(0x0, (t1 << 1), a5));
        }
        if (t2 == 0) {
            (((struct o20_uint *)0xC347658)->v) = t1;
            (((struct o1C_uint *)0xC347658)->v) = (*(int *)((a5 + 0x1C)));
            t0 = *(int *)((a5 + 0x1C));
            *(unsigned int *)((a5 + 0x14)) = t1;
            *(unsigned int *)((a5 + 0x1C)) = (FUN_0c10b5f2(t0));
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a5 + 0x14)) = t1;
        *(unsigned int *)((a5 + 0x1C)) = (FUN_0c10b5f2((((((struct o1C_int *)0xC347658)->v)) + 0x4)));
        (((struct o20_uint *)0xC347658)->v) = 0x0;
        (((struct o1C_uint *)0xC347658)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c042150(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t5;

    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x1;
    *(unsigned char *)((a4 + 0x4)) = a6;
    (((struct oEE_ushort *)(a4))->v) = a7;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = ((((short)a7 << 8) << 2) << 2);
    *(unsigned int *)((a4 + 0x10)) = 0xC042304;
    FUN_0c0e6fe8(0x1, a5, a6, ((((short)a7 << 8) << 2) << 2));
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))) + 0x0)) = 0x0;
        *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))) + 0x2)) = 0x1F;
        t5 = FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), 0xC4CFA68, (t1 + 0x3A));
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    return t5;
}

int FUN_0c1077d4(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((((((struct o54_int *)(a4))->v)) == 0) && (t0 = *(int *)((a4 + 0xC)), t0 != 0xAC44)) {
        t0 = 0xC815534;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t0 = 0xC815D34;
        }
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t2 = t1;
            *(volatile int *)((a4 + 0x30));
            t2 = (t2 << 2);
            t2 = (t2 + (a4 + 0x28));
            *(volatile int *)((a4 + 0x8));
            t2 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + (FUN_0c0e6d00()));
            FUN_0c107432(a4, t1, t0, t2, 0x4);
            t1 = (t1 + 0x1);
        }
    }
    *(volatile int *)((a4 + 0x5C));
    *(volatile int *)((a4 + 0x54));
    *(volatile int *)((a4 + 0x30));
    (((struct o54_uint *)(a4))->v) = (FUN_0c0e6e5c(a4));
    (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + ((((struct o5C_int *)(a4))->v)));
    return 0x58;
}

int FUN_0c0150f8(void)
{
    int stk[16];
    register int t24;

    t24 = *(signed char *)0xC7F302F;
    if (t24 != 0) {
        if (t24 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
        } else {
            if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
                (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
            }
            *(volatile int *)0xC17AFB0;
            FUN_0c02d9e0();
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 8.0f;
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            *(float *)(((int)stk + 52)) = 1.0f;
            *(unsigned int *)(((int)stk + 60)) = 0x1005;
            *(float *)(((int)stk + 28)) = 1.25f;
            *(float *)(((int)stk + 24)) = 1.25f;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            t24 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
        }
    } else {
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        (((struct oA_ushort *)0xC7F302C)->v) = 0x258;
        if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
            (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        }
        *(volatile int *)0xC17AFB0;
        FUN_0c02d9e0();
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 8.0f;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(unsigned int *)(((int)stk + 60)) = 0x1005;
        *(float *)(((int)stk + 28)) = 1.25f;
        *(float *)(((int)stk + 24)) = 1.25f;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t24 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
    }
    return t24;
}
