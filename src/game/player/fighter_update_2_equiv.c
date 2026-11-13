/* input snapshot, round-level update of the two fighters, per-player update (part 2 of 4 of the same module) (0c092894-0c092908) */

int pl_step_motion(int);
int pl_end_action_choose_state(int);
int pl_start_motion(int a4, int a5, int a6);

int obj_start_motion_2_0(int a4);
int obj_wait_motion_end_then_end_move(int a4);

int FUN_0c092894(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4)))) {
            return t0;
        }
        return obj_wait_motion_end_then_end_move(a4);
    }
    return obj_start_motion_2_0(a4);
}

int obj_start_motion_2_0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x2, 0x0);
    t1 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int obj_wait_motion_end_then_end_move(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}
