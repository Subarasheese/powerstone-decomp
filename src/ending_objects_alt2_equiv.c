/* ending sequence: scripted objects, update table, spawners, ending state/script (0c0128a0-0c0158d8) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_apply_accel(int);
int obj_apply_velocity(int);
int obj_destroy(int, int, int, int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6e5c(void);

int ending_obj_update_t08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if ((*(signed char *)0xC7F302D) != 6) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    t0 = 0x0;
                } else {
                    t1 = (((struct o2E8_int *)(a4))->v);
                    (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + ((((struct o38_float *)(a4))->v)));
                    t1 = (((struct o2E8_int *)(a4))->v);
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + ((((struct o3C_float *)(a4))->v)));
                    t1 = (((struct o2E8_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + ((((struct o40_float *)(a4))->v)));
                    obj_apply_accel(a4);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 3.29999995f;
                        (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 2.5f;
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    }
                }
                t1 = t0;
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1E;
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o38_float *)(a4))->v) = 0.209999993f;
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = -0.00699999975f;
                    (((struct o48_float *)(a4))->v) = 0.00499999989f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            obj_apply_velocity(a4);
            obj_apply_accel(a4);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                (((struct o20_float *)(a4))->v) = 0.0f;
                (((struct o24_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
        t1 = t0;
    } else {
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = -400.0f;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 9.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.299999982f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct oC_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 45.0f;
        (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        obj_apply_velocity(a4);
        obj_apply_accel(a4);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1E;
            (((struct o20_float *)(a4))->v) = 0.0f;
            (((struct o24_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) - 182);
    t0 = math_atan2_angle16(t1, ((-((((struct o28_float *)(a4))->v))) + 640.0f), ((-((((struct o24_float *)(a4))->v))) + 0.0f));
    (((struct o8_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((math_cos_angle16(t0)) * 40.0f);
    (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((math_sin_angle16(t0)) * 40.0f);
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = ((((((((struct oF2_short *)(a4))->v)) & 2) == 0)) ? 1 : 0);
    *(volatile short *)((a4 + 0xF2));
    t0 = FUN_0c0e6e5c();
    switch (t0) {
    case 0:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.199999988f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.199999988f;
        break;
    case 1:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.212499991f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.212499991f;
        break;
    case 2:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.224999994f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.224999994f;
        break;
    case 3:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.237499997f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.237499997f;
        break;
    case 4:
        u0 = *(float *)0xC013DE0;
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
        break;
    case 5:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.237499997f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.237499997f;
        break;
    case 6:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.224999994f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.224999994f;
        break;
    case 7:
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.212499991f;
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.212499991f;
        break;
    }
    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
    return 0xF2;
}
