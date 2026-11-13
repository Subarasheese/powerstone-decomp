/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c045968-0c045f9c) */

/* named globals (symbols.txt) */
extern char g_res_capcom_logo[];
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c045968(int);
int FUN_0c0459d6(int, int, int, int);
int FUN_0c045a4e(int);
int obj_destroy(int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int _quick_odd_mvn();

void fx_tick_0457d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0xC00);
            (((struct o28_float *)(t0))->v) = -19.5f;
            (((struct o30_float *)(t0))->v) = 19.5499992f;
            (((struct o2C_float *)(t0))->v) = 0.0f;
            (((struct o40_float *)(t0))->v) = 1.0f;
            return;
        }
        case 2:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                *(unsigned int *)((t0 + 0x38)) = 0xFFFFF99A;
            }
            FUN_0c045968(a4);
    return;
        }
        case 4:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + (*(int *)((t0 + 0x38))));
            u0 = ((((struct o4_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_sin_angle16(((*(int *)((t0 + 0x14))) - 16384)));
            (((struct o4_float *)(t0))->v) = u0;
            u0 = ((((struct oC_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_cos_angle16(((*(int *)((t0 + 0x14))) - 16384)));
            (((struct oC_float *)(t0))->v) = u0;
            if (!(500.0f > ((((struct oC_float *)(t0))->v)))) {
                (((struct oC_float *)(t0))->v) = 500.0f;
            }
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                (((struct o28_float *)(t0))->v) = (-(((((struct o4_float *)(t0))->v)) / 30.0f));
                (((struct o30_float *)(t0))->v) = (-(((((struct oC_float *)(t0))->v)) / 30.0f));
                (((struct o2C_float *)(t0))->v) = 0.0f;
                *(unsigned int *)((t0 + 0x38)) = 0xFFFFF889;
            }
            FUN_0c045968(a4);
    return;
        }
        case 6:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + (*(int *)((t0 + 0x38))));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x14;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4)) = *(struct mv3 *)(0xC14A678); }
                (((struct oC_float *)(t0))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x10)) = *(struct mv3 *)(0xC14A690); }
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct o2E8_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x400);
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            FUN_0c045968(a4);
    return;
        }
        case 8:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.049999997f);
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) + 0.049999997f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o2C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -20.0f;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 10:
        {
            t0 = (((struct o2EC_int *)(a4))->v);
            (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o8_float *)(t0))->v) = 0.0f;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
            }
            return;
        }
        case 12:
        {
            t0 = *(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC14A714));
            t1 = (((struct o2E8_int *)(a4))->v);
            (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) - (float)t0);
            t1 = (((struct o2EC_int *)(a4))->v);
            u0 = ((((struct o8_float *)(t1))->v));
            u0 = u0 + 2.0f * (float)t0;
            (((struct o8_float *)(t1))->v) = u0;
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            if ((float)t0 != 0.0f) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o8_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o30_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -49.8999977f;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 14:
        {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 16:
        {
            t0 = (((struct o2EC_int *)(a4))->v);
            (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            FUN_0c0459d6(a4, a5, a6, a7);
            FUN_0c045a4e(a4);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oC_float *)(t0))->v) = 0.099999994f;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o30_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -0.0166666657f;
                t0 = (((struct o2E4_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x410);
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 41.0f;
                *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct o2F0_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x400);
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 1.0f;
                (((struct oEE_ushort *)(a4))->v) = 0x28;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            return;
        }
        case 18:
        {
            FUN_0c045a4e(a4);
            if (((((struct o0_int *)0xC7F31BC)->v)) != -1) {
                (((struct o0_uint *)0xC7F31BC)->v) = (((((struct o0_int *)0xC7F31BC)->v)) + 0x11111111);
                (((struct o4_uint *)0xC7F31BC)->v) = (((((struct o4_int *)0xC7F31BC)->v)) + 0x11111111);
                (((struct o8_uint *)0xC7F31BC)->v) = (((((struct o8_int *)0xC7F31BC)->v)) + 0x11111111);
                if (((((struct o0_int *)0xC7F31BC)->v)) == -1) {
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                    FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), 0xC664A18, 0x6);
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                }
            }
            if (((((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v)) != 1.0f) {
                t0 = (((struct o2E4_int *)(a4))->v);
                u0 = (((struct o40_float *)(t0))->v);
                (((struct o40_float *)(t0))->v) = (u0 + 0.0625f);
                if (!(1.0f > (u0 + 0.0625f))) {
                    (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                }
            }
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            } else {
                if (((((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v)) > 0.0f) {
                    t0 = (((struct o2F0_int *)(a4))->v);
                    u0 = (((struct o40_float *)(t0))->v);
                    (((struct o40_float *)(t0))->v) = (u0 - 0.0625f);
                    if (!((u0 - 0.0625f) > 0.0f)) {
                        (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 0.0f;
                    }
                }
            }
            t0 = (((struct o2E4_int *)(a4))->v);
            u0 = (((struct o24_float *)(t0))->v);
            u1 = (((struct o30_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = (u0 + u1);
            if (!((u0 + u1) > 0.0f)) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            return;
        }
        case 20:
        {
            return;
        }
        default:
        {
            obj_destroy(a4);
    return;
        }
    }
}
