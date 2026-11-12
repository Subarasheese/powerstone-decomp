/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c03819e(int a4);
int FUN_0c0bcd5a(int a4);

int FUN_0c03819e(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c059330(a4);
        }
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o24_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x238E);
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

int FUN_0c0bcd5a(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
                    if (!(((float)t0 / 10.0f) > 0.0f)) {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t1 = 0xEC;
                }
                t0 = t1;
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.0699999928f);
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.0699999928f);
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.0699999928f);
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xEC;
                if ((short)(t1 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                t0 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        return t1;
    }
    return FUN_0c059330(a4);
}
