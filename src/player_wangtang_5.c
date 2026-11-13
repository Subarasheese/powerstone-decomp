/* character 2 (Wang Tang) (0c06f4f0-0c06f8a8) */

struct o3C_float { char p[0x3C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
struct o0_float { float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o4_float { char p[0x4]; float v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_set_record_char(int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o7200_int { char p[0x7200]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
int pl_end_action_choose_state(int);

int FUN_0c06f4f0(int a4)
{
    register int t6;
    register int t5;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t6 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_start_motion(a4, 0x1, 0x63);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        t5 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
        t6 = (t5 + 0x1);
    }
    return t6;
}

int FUN_0c06f52e(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_start_motion(a4, 0x1, 0x65);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c06f56c(int a4)
{
    register float u6;
    register int t10;

    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06F64C)->v)));
    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC06F64C)->v)));
    u6 = (((struct o8_float *)0xC06F64C)->v);
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / u6);
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / u6);
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o72BC_uchar *)(a4))->v) = 0xF;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t10 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t10 + 0x1);
    return (t10 + 0x1);
}

int FUN_0c06f600(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((*(signed char *)(((0x72BC + a4) + 0x0))) != 0) {
        (((struct o72BC_uchar *)(a4))->v) = ((*(signed char *)(((0x72BC + a4) + 0x0))) - 1);
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC06F754)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC06F754)->v));
        pl_start_motion(a4, 0x1, 0x64);
        obj_set_record_char(a4, 0x73);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x6;
        (((struct oF2_ushort *)(a4))->v) = 0x3;
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        (((struct o7200_uint *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06f6ca(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    pl_apply_velocity(a4);
    if ((*(signed char *)(((0x72BC + a4) + 0x0))) != 0) {
        (((struct o72BC_uchar *)(a4))->v) = ((*(signed char *)(((0x72BC + a4) + 0x0))) - 1);
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    if ((((((struct o2E4_int *)(a4))->v)) & 0x400) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    }
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        pl_start_motion(a4, 0x1, 0x64);
    }
    t2 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t2 - 1);
    t3 = 0xF0;
    if ((int)(short)(t2 - 1) <= 0) {
        if (((((struct oEC_short *)(a4))->v)) != 0) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            obj_set_record_char(a4, 0x73);
            (((struct o7200_uint *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            (((struct oF0_ushort *)(a4))->v) = 0x6;
            t2 = 0xF0;
        } else {
            if ((((((struct oF2_short *)(a4))->v)) != 0) && ((t2 = (((struct oEE_short *)(a4))->v), t2 != 0) || (t1 = (((struct o7200_int *)(a4))->v), (t1 & 0x400) != 0))) {
                t2 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t2 - 1);
                if ((int)(short)(t2 - 1) <= 0) {
                    pl_start_motion(a4, 0x1, 0x66);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    (((struct oEC_ushort *)(a4))->v) = 0x19;
                    t2 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                } else {
                    obj_set_record_char(a4, 0x73);
                    (((struct o7200_uint *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    (((struct oF0_ushort *)(a4))->v) = 0x6;
                    t1 = 0xF0;
                }
                t2 = t1;
            } else {
                pl_start_motion(a4, 0x1, 0x65);
                *(unsigned char *)((a4 + 0xB)) = 0x4;
                t2 = 0x4;
            }
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c06f818(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    pl_step_motion(a4);
    t0 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 != 0) {
            pl_start_motion(a4, 0x1, 0x6C);
            t1 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int pl_wangtang_wait_anim_end_c(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}
