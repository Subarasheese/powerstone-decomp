/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042150-0c042514) */

int fx_init_subblock_effect(int, int, int, int);
int obj_create(int, int, int);
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c042256(int, int, int);
int FUN_0c0422b8(int, int);
int obj_destroy(int, int, int, int);

int FUN_0c042222(int a4, int a5);

int FUN_0c0421ee(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x8);
    if (t0 != 0) {
        return fx_init_subblock_effect(t0, (*(int *)(((int)stk + 0))), (*(signed char *)(((int)stk + 4))), 0x1);
    }
    return t0;
}

int FUN_0c042222(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x8);
    if (t0 != 0) {
        return fx_init_subblock_effect(t0, (*(int *)(((int)stk + 0))), (*(signed char *)(((int)stk + 4))), 0x0);
    }
    return t0;
}

int FUN_0c042304(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    u0 = *(float *)((0xC3217D0 + ((*(signed char *)((a4 + 0x4))) << 2)));
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    FUN_0c0422b8(a4, 0xC3217F0);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((-(u0 * 0.0333333313f))));
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((-(u0 * 0.0666666627f))));
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((-(u0 * 0.0333333313f))));
                    (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0333333313f);
                    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0333333313f);
                    (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0333333313f);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        (((struct o60_float *)(a4))->v) = 0.0f;
                        (((struct o64_float *)(a4))->v) = 0.0f;
                        (((struct o68_float *)(a4))->v) = 0.0f;
                        (((struct o50_float *)(a4))->v) = (u0 * 0.5f);
                        (((struct o54_float *)(a4))->v) = (-(u0 * 2.0f));
                        (((struct o58_float *)(a4))->v) = (u0 * 0.5f);
                        t2 = 0x58;
                    }
                    return t2;
                }
                return obj_destroy(a4, 0xC3217F0, a6, a7);
            }
            FUN_0c0422b8(a4, 0xC3217F0);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((u0 * 0.0192307681f)));
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((-(u0 * 0.0769230723f))));
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((u0 * 0.0192307681f)));
            if ((((((struct oEC_short *)(a4))->v)) == 52) && (t0 = (((struct oEE_short *)(a4))->v), t0 != 0)) {
                FUN_0c042222((a4 + 0x20), (*(signed char *)((a4 + 0x4))));
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 30) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
                (((struct o60_float *)(a4))->v) = 1.0f;
                (((struct o64_float *)(a4))->v) = 1.0f;
                (((struct o68_float *)(a4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = (u0 * 1.5f);
                (((struct o54_float *)(a4))->v) = (u0 * 0.0f);
                (((struct o58_float *)(a4))->v) = (u0 * 1.5f);
                t1 = 0x58;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        FUN_0c042256(a4, 0xC3217F0, 0x0);
        (((struct o50_float *)(a4))->v) = (u0 * 1.0f);
        (((struct o54_float *)(a4))->v) = (u0 * 0.5f);
        (((struct o58_float *)(a4))->v) = (u0 * 1.0f);
    }
    FUN_0c0422b8(a4, 0xC3217F0);
    u1 = ((((struct o54_float *)(a4))->v));
    u1 = u1 + 0.375f * u0;
    (((struct o54_float *)(a4))->v) = u1;
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 56) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o54_float *)(a4))->v) = (u0 * 2.0f);
        t1 = 0x54;
    }
    return t1;
}
