/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c036248-0c036598) */

struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int fx_tick_035d46(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
                (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 6553.59961f) / 360.0f));
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 65536.0f) / 360.0f));
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 32768.0f) / 360.0f));
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o50_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_sin_angle16(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                u1 = (u0 * (math_cos_angle16(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
                (((struct o4_float *)(t1))->v) = (-(u1 * 50.0f));
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o54_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_cos_angle16(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                (((struct o8_float *)(t1))->v) = (u0 * 50.0f);
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o58_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_sin_angle16(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
                (((struct oC_float *)(t1))->v) = (-(u1 * 50.0f));
                if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xEC;
                if ((short)(t1 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                return t2;
            }
            if (t0 == 3) {
                return obj_destroy(a4);
            }
            if (t0 == 4) {
                return obj_destroy(a4);
            }
            return t0;
        }
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.099999994f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.099999994f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 2.0f;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 6553.59961f) / 360.0f));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 32768.0f) / 360.0f));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00499999989f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00499999989f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + (((float)((((struct oF2_short *)(a4))->v)) / 100.0f) + 0.099999994f));
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o50_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_sin_angle16(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    u1 = (u0 * (math_cos_angle16(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
    (((struct o4_float *)(t0))->v) = (-(u1 * 50.0f));
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o54_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_cos_angle16(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    (((struct o8_float *)(t0))->v) = (u0 * 50.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o58_float *)((*(int *)((a4 + 0x1C)))))->v)) * (math_sin_angle16(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    u1 = (u0 * (math_sin_angle16(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
    (((struct oC_float *)(t0))->v) = (-(u1 * 50.0f));
    t0 = (((struct o2DC_int *)((*(int *)(((*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C))) + 0x1C)))))->v);
    t1 = t0;
    if ((t0 & 0x400) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
