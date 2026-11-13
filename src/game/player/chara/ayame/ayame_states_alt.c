/* Ayame state11 update (large) and specials (0c07eb60-0c080804) */

int pl_step_motion(int);
int pl_end_action_choose_state(int);
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int obj_force_owner_state27(int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion_owner(int);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
extern int _quick_odd_mvn();

int pl_ayame_state22_phase1(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_ayame_victim_dispatch(int a4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if ((t0 != 0) && ((t0 != 1) && (t0 != 2))) {
        if (t0 != 3) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0xC));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    pl_step_motion(a4);
                    pl_apply_motion_translation(a4);
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        return pl_end_action_choose_state(a4);
                    }
                    return 0x71AA;
                }
                pl_apply_velocity(a4);
                t0 = pl_landed(a4);
                if ((signed char)t0 != 0) {
                    return obj_force_owner_state27((*(int *)((a4 + 0x1C))), 0x7C);
                }
                return (signed char)t0;
            }
            pl_step_motion_owner(a4);
            pl_apply_motion_translation(a4);
            t0 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC337368); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC337368); }
                (((struct o3C_float *)(a4))->v) = -20.0f;
                t0 = 0x3C;
            }
            return t0;
        }
        pl_start_motion_owner(a4, 0x1, 0x71);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x66) {
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        }
        if (((((struct oF2_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                return obj_force_owner_state27((*(int *)((a4 + 0x1C))), 0x32);
            }
        }
        t0 = *(signed char *)((a4 + 0xC));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    return pl_step_motion_owner(a4);
                }
                pl_start_motion_owner(a4, 0x4, 0x38);
                t0 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            pl_step_motion_owner(a4);
            pl_apply_motion_translation(a4);
            t0 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                t1 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        pl_start_motion_owner(a4, 0x4, 0x37);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o3C_float *)(a4))->v) = -15.0f;
        (((struct o48_float *)(a4))->v) = -2.0f;
    }
    t0 = *(signed char *)((a4 + 0xC));
    *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
    return (t0 + 0x1);
}
