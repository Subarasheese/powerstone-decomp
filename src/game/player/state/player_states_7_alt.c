/* state update functions of the player state machine (table 0xC3390D4) (part 7 of 14 of the same module) (0c09511c-0c095430) */

struct o2DC_int { char p[0x2DC]; int v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_button_jump_pressed(int);
int pl_end_action_choose_state(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int);
int pl_change_state(int, int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };

int pl_state17_phase2(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t11;
    register int t21;
    register int t29;
    register int t30;
    int t12;
    int t31;

    t0 = pl_check_power_form_attack_input(a4, a5, a6);
    if ((signed char)t0 != 0) {
        t1 = pl_start_power_form_attack(a4);
        if ((signed char)t1 == 0) {
            t2 = pl_button_jump_pressed(a4);
            if (t2 != 0) {
                return (pl_change_state(a4, 0x4, 0x0, 0x0));
            }
            if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
                (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
            }
            t10 = pl_step_motion(a4);
            if ((signed char)t10 == 0) {
                t11 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t11 - 1);
                if (((int)(short)(t11 - 1) <= 0) && (t12 = (((struct oF0_short *)(a4))->v), t12 == 0)) {
                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                    if (((((struct oF0_short *)(a4))->v)) != 0) {
                        return pl_end_action_choose_state(a4);
                    }
                    return (pl_change_state(a4, 0x1F, ((((*(signed char *)((a4 + 0x4))) == 3)) ? 1 : 0), 0x0));
                }
                return pl_apply_motion_translation(a4);
            }
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                return pl_end_action_choose_state(a4);
            }
            return (pl_change_state(a4, 0x1F, ((((*(signed char *)((a4 + 0x4))) == 3)) ? 1 : 0), 0x0));
        }
        return (signed char)t1;
    }
    t21 = pl_button_jump_pressed(a4);
    if (t21 != 0) {
        return (pl_change_state(a4, 0x4, 0x0, 0x0));
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    }
    t29 = pl_step_motion(a4);
    if ((signed char)t29 == 0) {
        t30 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t30 - 1);
        if (((int)(short)(t30 - 1) <= 0) && (t31 = (((struct oF0_short *)(a4))->v), t31 == 0)) {
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                return pl_end_action_choose_state(a4);
            }
            return (pl_change_state(a4, 0x1F, ((((*(signed char *)((a4 + 0x4))) == 3)) ? 1 : 0), 0x0));
        }
        return pl_apply_motion_translation(a4);
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    if (((((struct oF0_short *)(a4))->v)) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (pl_change_state(a4, 0x1F, ((((*(signed char *)((a4 + 0x4))) == 3)) ? 1 : 0), 0x0));
}

int pl_state18_update(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)((t0 - 1) + 0x1) <= 0) {
            return pl_end_action_choose_state(a4);
        }
        return 0xEC;
    }
    return pl_end_action_choose_state(a4);
}
