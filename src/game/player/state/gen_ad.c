/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int hit_probe_step_list(int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c06358e(int a4);

int FUN_0c06358e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = pl_step_motion(a4);
                if ((signed char)t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                pl_step_motion(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = pl_landed(a4);
                    if ((signed char)t1 != 0) {
                        return pl_change_state(a4, 0x6, 0x0);
                    }
                }
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return t0;
        }
        pl_step_motion(a4);
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t1 = hit_probe_step_list(a4, (0x7254 + a4), 60.0f);
            if ((signed char)t1 == 1) {
                pl_start_motion(a4, 0x2, 0xCD);
                (((struct oEC_ushort *)(a4))->v) = 0x9;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                pl_start_motion(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o3C_float *)(a4))->v) = 14.0f;
                (((struct o48_float *)(a4))->v) = -2.5f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = pl_landed(a4);
            if ((signed char)t1 == 0) {
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return pl_change_state(a4, 0x6, 0x0);
        }
        if ((signed char)t0 == 2) {
            pl_start_motion(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o3C_float *)(a4))->v) = 14.0f;
            (((struct o48_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -17.5f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
