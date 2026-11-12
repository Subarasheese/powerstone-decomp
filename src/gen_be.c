/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0195a2(int);
int FUN_0c03e9e6(int);
int FUN_0c03ebf4(int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0a1d88(int, int);
int FUN_0c03ec80(int a4);
int FUN_0c0cb456(int a4);
int FUN_0c019334(int a4);

int FUN_0c03ec80(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t1 + 0x71BA))) != 11) && (t0 = *(signed char *)((a4 + 0x8)), (int)t0 <= 0)) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059330(a4);
        }
        FUN_0c03ebf4(a4);
        t0 = FUN_0c03ebf4(a4);
        t2 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    FUN_0c03e9e6(a4);
    FUN_0c03ebf4(a4);
    t0 = 0xEE;
    if (((((struct oEE_short *)(t1))->v)) == 0) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0cb456(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c059330(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return FUN_0c059330(a4);
        }
        u0 = (((struct o24_float *)(a4))->v);
        (((struct o24_float *)(a4))->v) = (u0 + 100.0f);
        t0 = 0x38;
        if (!(((((struct o38_float *)(a4))->v)) > (u0 + 100.0f))) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o105_uchar *)(a4))->v) = 0x0;
        return FUN_0c0a1d88(a4, 0x71);
    }
    return 0xEC;
}

int FUN_0c019334(int a4)
{
    register int t0;

    t0 = *(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x2));
    (((struct o20_float *)(a4))->v) = (*(float *)((((((signed char)t0 << 1) << 2) + 0xC11B784) + 0x0)));
    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)(((((signed char)t0 << 1) << 2) + 0xC11B784)))->v));
    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC01946C);
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = FUN_0c0195a2(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}
