/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0be25c-0c0be448) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int pl_tick_hitstop(int);

int fx_update_garuda_debris(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = (((struct oEE_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
                if (!(((float)t0 / 10.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t1 = 0xEE;
            }
            return t1;
        }
        return obj_destroy(a4);
    }
    t0 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x9));
        switch (t0) {
        case 0:
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        case 1:
            if (1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 1.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        case 2:
            if (1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.049999997f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 1.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            break;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0xA;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
    }
    return t1;
}
