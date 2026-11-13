/* state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 2 of 2 of the same module) (0c098160-0c098c48) */

int pl_step_motion(int);
int pl_end_action_choose_state(int);
int pl_state28_sub1_phase0(int);
int pl_state28_sub1_phase1(int);
int pl_state28_sub1_phase2(int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);

int pl_state28_sub1_phase3(int a4);

int pl_state28_sub1_phase3(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_state28_sub1_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_state28_sub1_phase3(a4);
            }
            return pl_state28_sub1_phase2(a4);
        }
        return pl_state28_sub1_phase1(a4);
    }
    return pl_state28_sub1_phase0(a4);
}

int FUN_0c09898c(int a4)
{
    register int t8;

    pl_step_motion(a4);
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    t8 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t8 - 1);
    if ((int)(short)(t8 - 1) <= 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}

int FUN_0c098a3c(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c098b02(int a4)
{
    register int t1;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}
