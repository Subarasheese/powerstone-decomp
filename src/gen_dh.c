/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c062210(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c0c1b64(int a4, int a5);
int FUN_0c03fb92(int a4);
int FUN_0c045354(int a4);

int FUN_0c0c1b64(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t5;
    register int t15;
    register int t16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C1D94;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.049999997f;
        (((struct o54_float *)(t0))->v) = 0.049999997f;
        (((struct o50_float *)(t0))->v) = 0.049999997f;
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        FUN_0c0df940();
        
        t15 = FUN_0c0e6f24();
        t16 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), (t15 + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x4;
        (((struct o102_uchar *)(t0))->v) = 0x4;
        FUN_0c0a1d88(t0, 0x71);
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
    }
    return t0;
}

int FUN_0c03fb92(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 30.0f;
    (((struct o28_float *)(a4))->v) = 30.0f;
    t0 = *(int *)((a4 + 0x1C));
    FUN_0c062210((a4 + 0x20), ((t0 + 0x300) + (short)((short)(*(signed char *)((t0 + 0x71F3))) * (short)0xDC0)));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059330(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0xE38);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 6.66666651f);
    t0 = (0x2E0 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x18)) = (unsigned short)(-(*(int *)((a4 + 0x34))));
        (((struct o4_float *)(t2))->v) = ((FUN_0c0df4d0((*(int *)((t2 + 0x3C))))) * ((((struct o40_float *)(a4))->v)));
        t1 = (t1 + 0x1);
        (((struct o8_float *)(t2))->v) = ((FUN_0c0dfa50((*(int *)((t2 + 0x3C))))) * ((((struct o40_float *)(a4))->v)));
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.0166666657f);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.0166666657f);
        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0166666657f);
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c045354(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        t0 = *(signed char *)0xC7F307C;
        t1 = ((0x2E0 + a4) + 0x4);
        t2 = 0x1;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.399999976f);
            (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.399999976f);
            (((struct o24_float *)(t3))->v) = (((((struct o24_float *)(t3))->v)) + 0.399999976f);
            FUN_0c06231c(t3, 0xC4CFA68, ((t0 & 0x1) + 0x7A));
            if ((*(signed char *)((a4 + 0x8))) == 2) {
                (((struct o44_float *)(t3))->v) = (((((struct o44_float *)(t3))->v)) - 0.099999994f);
                (((struct o48_float *)(t3))->v) = (((((struct o48_float *)(t3))->v)) - 0.099999994f);
                (((struct o4C_float *)(t3))->v) = (((((struct o4C_float *)(t3))->v)) - 0.099999994f);
            }
            t2 = (t2 + 0x1);
            if ((int)(signed char)t2 >= (int)0x3) {
                break;
            }
        }
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return FUN_0c059330(a4);
            }
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            t1 = 0x44;
            if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x8;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
