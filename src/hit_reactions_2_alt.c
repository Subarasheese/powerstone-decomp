/* hit reaction handlers (table indexed by +71DD) and dispatcher (part 2 of 2 of the same module) (0c09153c-0c092814) */

struct o0_float { float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_hitreact_21_stick_vector(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int cam_set_shake_ramp(int, int);
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_change_state(int, int, int, int);
int snd_play_side_se(int, int);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
int FUN_0c08e4bc(int, int, int, int, int, int);
int pl_hitreact_start_vibration(int);
int FUN_0c091eee(void);
int pl_reset_pose(int);

int pl_hitreact_21_phase1(int a4)
{
    int t0;
    register int t1;

    t1 = pl_step_motion(a4);
    if (((signed char)t1 != 0) && (t0 = (((struct oEC_short *)(a4))->v), t0 == 0)) {
        pl_start_motion(a4, 0x2, 0xC1);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            cam_set_shake_ramp(0x5, 0x5);
            (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC091A04)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC091A04)->v));
            pl_start_motion(a4, 0x2, 0xB2);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            pl_hitreact_21_stick_vector(a4);
            (((struct o71BC_uchar *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_hitreact_21_phase2(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) <= (int)0x1) {
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                (((struct o3C_float *)(a4))->v) = (((-((float)((((struct oEC_short *)(a4))->v)) * 5.0f))) + 15.0f);
                pl_start_motion(a4, 0x2, 0xB2);
                pl_hitreact_21_stick_vector(a4);
            } else {
                pl_start_motion(a4, 0x2, 0x63);
                (((struct o71BC_uchar *)(a4))->v) = 0x3;
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            }
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_hitreact_24_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return pl_change_state(a4, 0xF, 0x1, a7);
                    }
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.199999988f);
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t1 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    return t1;
                }
                (((struct o50_float *)(a4))->v) = 1.0f;
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.299999982f);
                (((struct o58_float *)(a4))->v) = 1.0f;
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0xF2;
                if ((short)(t0 - 1) == 0) {
                    (((struct oF2_ushort *)(a4))->v) = 0x3;
                    t0 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
            (((struct o54_float *)(a4))->v) = 0.099999994f;
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xF2;
            if ((short)(t0 - 1) == 0) {
                (((struct oF2_ushort *)(a4))->v) = 0x5;
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x24);
                t0 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xF2;
        if ((short)(t0 - 1) == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x3;
            t0 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    cam_set_shake_ramp(0xA, 0xA);
    pl_start_motion(a4, 0x2, 0x91);
    (((struct oF2_ushort *)(a4))->v) = 0x3C;
    (((struct o50_float *)(a4))->v) = 1.29999995f;
    (((struct o54_float *)(a4))->v) = 0.099999994f;
    (((struct o58_float *)(a4))->v) = 1.29999995f;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_hitreact_finish(int a4)
{
    int stk[2];

    *(unsigned char *)((a4 + 0xA)) = 0x3;
    pl_reset_pose(a4);
    if ((*(signed char *)((a4 + 0x71F1))) == 0) {
        (((struct o710A_uchar *)(a4))->v) = 0x1;
    }
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    (((struct o7216_uchar *)(a4))->v) = 0x0;
    FUN_0c08e4bc(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    pl_hitreact_start_vibration(a4);
    (((struct o7225_uchar *)(a4))->v) = 0x0;
    return FUN_0c091eee();
}
