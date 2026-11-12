/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c044104(int);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b6368(int, int, int, float);
int FUN_0c0c6424(int, int, int, float);
int FUN_0c0e6fe8(void);
int FUN_0c02c830(int a4);
int FUN_0c0c62bc(int a4, int a5, int a6, int a7);
int FUN_0c04415a(int a4, int a5, int a6, int a7);

int FUN_0c02c830(int a4)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t2;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x6);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02C3C4;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0x41F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), 0xC664A00, (*(signed char *)((t2 + 0xC14915E))));
            *(volatile int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0));
            FUN_0c0e6fe8();
            t12 = (t2 << 2);
            t2 = (t2 + 0x1);
            (((struct o40_float *)((*(int *)(((t12 + (0x2E0 + t0)) + 0x0)))))->v) = 1.0f;
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        t14 = 0x40;
    }
    return t14;
}

int FUN_0c0c62bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return t3;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return FUN_0c059330(a4, a5, a6, a7);
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    FUN_0c0c6424(a4, 0x0, 0x1, ((float)((((struct oEC_short *)(a4))->v)) / (float)((((struct oF0_short *)(a4))->v))));
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if (((short)(t3 - 1) != 0) && ((t0 = *(signed char *)((a4 + 0x108)), t0 == 0) && ((t1 = *(signed char *)((a4 + 0x2A8)), t1 == 0) && (t2 = *(signed char *)((a4 + 0x2D8)), t2 == 0)))) {
        return 0x2D8;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return FUN_0c0b6368((a4 + 0x20), (*(signed char *)((a4 + 0x3))), ((*(signed char *)((a4 + 0x4))) + 0x55), 0.5f);
}

int FUN_0c04415a(int a4, int a5, int a6, int a7)
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
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o3C_float *)(a4))->v) = 0.299999982f;
        (((struct o38_float *)(a4))->v) = 0.299999982f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -0.0199999996f;
        (((struct o44_float *)(a4))->v) = -0.0199999996f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    FUN_0c044104(a4);
    if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
    }
    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + -0.0666666627f);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        t1 = 0x5C;
    }
    return t1;
}
