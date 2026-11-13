/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b4d0-0c03b86c) */

struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c03b5da(int);
int obj_destroy(int, int, int, int);
int thunk_math_mat_get_translate(int, int);

int fx_tick_03b4d0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    if (t1 == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    if (((*(signed char *)((a4 + 0x4))) == 1) && (t0 = *(signed char *)((0x71BA + t1)), t0 != 28)) {
        *(unsigned char *)((a4 + 0x8)) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            FUN_0c03b5da(a4);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = *(signed char *)((a4 + 0x4));
            if (t0 != 0) {
                if (t0 != 2) {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.199999988f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.199999988f);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.199999988f);
                }
            } else {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            }
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            return 0x4C;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    FUN_0c03b5da(a4);
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x5;
            }
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
            return 0x24;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), a4 + 0x20);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x5;
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
    return 0x24;
}
