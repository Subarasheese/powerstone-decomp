/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08f310(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c08ebfa(int, int);
int FUN_0c09c45a(int);
int cam_set_shake_ramp(int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int, int);
int pl_landed(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c094b02(int a4, int a5);
int FUN_0c08f2e4(int a4);
int FUN_0c083baa(int a4);

int FUN_0c094b02(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = a5;
    if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x10) {
        t2 = *(int *)((a4 + 0x30));
        t3 = pl_angle_to_opponent(a4);
        t4 = (unsigned short)(t2 - t3);
        if ((0x8000 & (unsigned short)(t2 - t3)) != 0) {
            t4 = ((unsigned short)(t2 - t3) | 0xFFFF0000);
        }
        if (((int)t4 <= (int)0xFFFFF8E4) || ((int)t4 >= (int)0x71C)) {
            if ((int)t4 < 0) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x71C);
            }
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            t2 = 0x71C;
        }
        t1 = t2;
    }
    if (((((struct oEE_short *)(a4))->v)) == 0) {
        t2 = pl_step_motion(a4);
        if ((signed char)t2 != 0) {
            pl_start_motion(a4, 0x0, 0x0);
            (((struct o71A8_uchar *)(a4))->v) = 0x0;
            (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEC)));
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        }
    } else {
        t2 = t1;
    }
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if (((int)(short)(t1 - 1) > 0) && (t0 = (((struct o2E4_int *)(a4))->v), (t0 & 4) == 0)) {
        return t0;
    }
    if ((*(signed char *)((a4 + 0x7214))) != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4, t2);
    }
    return pl_change_state(a4, 0xD, 0x0);
}

int FUN_0c08f2e4(int a4)
{
    pl_start_motion(a4, 0x2, ((*(signed char *)((a4 + 0xEC))) + 0x1));
    (((struct o71A8_uchar *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEE)));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    return FUN_0c08f310(a4);
}

int FUN_0c083baa(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            pl_step_motion_owner(a4);
            pl_apply_motion_translation(a4);
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                return pl_change_state(a4, 0xF, 0x0);
            }
            return 0x71AA;
        }
        pl_step_motion_owner(a4);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        t0 = pl_landed(a4);
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            pl_start_motion_owner(a4, 0x2, 0x63);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            obj_set_owner_hit_record((*(int *)((a4 + 0x1C))), 0x32);
            obj_force_owner_state27((*(int *)((a4 + 0x1C))), 0x32);
            FUN_0c09c45a(a4);
            cam_set_shake_ramp(0xA, 0xA);
            t0 = *(signed char *)((a4 + 0xC));
            *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    pl_step_motion_owner(a4);
    return pl_apply_motion_translation(a4);
}
