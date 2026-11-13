/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03ba7a-0c03bcac) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int fx_tick_03b86c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
                if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                return ((int (*)(int, int, int, int, float))(0xC03BA28))(a4, a5, a6, a7, 0.099999994f);
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * (float)((*(signed char *)((a4 + 0x4))) << 1));
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * (float)((*(signed char *)((a4 + 0x4))) << 1));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.00999999978f;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    u0 = 0.049999997f;
    u0 = u0 + 0.0299999993f * (float)(*(signed char *)((a4 + 0x4)));
    if (u0 > ((((struct o58_float *)(a4))->v))) {
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o58_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
    (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x14) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o3C_float *)(a4))->v) = 2.0f;
    }
    return ((int (*)(int, int, int, int))(0xC03BA28))(a4, a5, a6, a7);
}
