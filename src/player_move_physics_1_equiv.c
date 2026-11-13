/* velocity/acceleration/gravity, angle to opponent, stick direction (part 1 of 3 of the same module) (0c09d89c-0c09da1c) */

struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o7200_int { char p[0x7200]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
int pl_update_hitstop_shake(int);
struct o0_float { float v; };
struct o71EE_uchar { char p[0x71EE]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };

int pl_tick_hitstop(int a4)
{
    if ((*(signed char *)((a4 + 0x10B))) != 0) {
        (((struct o10B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x10B))) - 1);
        (((struct o7200_uint *)(a4))->v) = (((((struct o7200_int *)(a4))->v)) | ((((struct o2E4_int *)(a4))->v)));
        if ((*(signed char *)((a4 + 0x71F1))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) != 10) {
                if ((*(signed char *)((a4 + 0x71BA))) != 11) {
                    pl_update_hitstop_shake(a4);
                }
            }
        }
        return 0x1;
    }
    (((struct o7200_uint *)(a4))->v) = ((((struct o2E4_int *)(a4))->v));
    return 0x0;
}

float pl_update_camera_side_flag(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u1 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u2 = (((((struct o0_float *)0xC7F31E4)->v)) * u0);
    u3 = (((((struct o8_float *)0xC7F31E4)->v)) * u1);
    u4 = (u1 * u1);
    u4 = u4 + u0 * u0;
    u0 = math_signed_sqrt(u4);
    u1 = (((struct o0_float *)0xC7F31E4)->v);
    u4 = (((struct o8_float *)0xC7F31E4)->v);
    u5 = (u4 * u4);
    u5 = u5 + u1 * u1;
    u1 = math_signed_sqrt(u5);
    if (((u2 + u3) / (u0 * u1)) > 0.0f) {
        (((struct o71EE_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o71EE_uchar *)(a4))->v) = 0x1;
    }
    return u1;
}

int pl_apply_velocity(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    return 0x24;
}

int pl_apply_acceleration(int a4)
{
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    return 0x3C;
}

int pl_apply_gravity(int a4)
{
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
    return 0x3C;
}
