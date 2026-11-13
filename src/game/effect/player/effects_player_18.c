/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bcc64-0c0bce68) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_18(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t28;
    register int t4;
    register int t5;
    register int t16;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1);
    t28 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x43F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BCD5A;
        FUN_0c0e6fe8(0x1);
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x8)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        t4 = *(signed char *)(((int)stk + 0));
        t28 = t4;
        if (t4 == 0) {
            t5 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x1);
            *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x0;
            *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
            (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
            (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
            (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
            t16 = (((struct o2E0_int *)(t0))->v);
            (((struct o8_float *)(t16))->v) = (((((struct o8_float *)(t16))->v)) + 150.0f);
            t18 = (((struct o2E0_int *)(t0))->v);
            (((struct oC_float *)(t18))->v) = (((((struct oC_float *)(t18))->v)) + 200.0f);
            *(unsigned int *)((t0 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t0))->v) = 0x4;
            t28 = 0xEC;
        }
    }
    return t28;
}

int fx_update_18(int a4)
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
    return obj_destroy(a4);
}
