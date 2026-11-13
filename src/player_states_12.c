/* state update functions of the player state machine (table 0xC3390D4) (part 12 of 14 of the same module) (0c0975c8-0c0976fc) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_step_motion(int);
int pl_angle_to_opponent(int);
int pl_end_action_choose_state(int);
int pl_stick_dir_angle(int);
int pl_change_state(int, int, int);

int pl_state40_phase0(int a4);
int pl_state40_phase1(int a4);
int pl_state40_phase2(int a4);

int pl_state40_phase0(int a4)
{
    register int t2;

    pl_step_motion(a4);
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x800);
    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    if ((int)(short)((t2 - 1) + 0x1) <= 0) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}

int pl_state40_phase1(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = pl_stick_dir_angle(a4);
    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)0xC7F31E0;
    t3 = (unsigned short)((t2 + t0) - t1);
    if ((0x8000 & (unsigned short)((t2 + t0) - t1)) != 0) {
        t3 = ((unsigned short)((t2 + t0) - t1) | 0xFFFF0000);
    }
    if ((int)t3 <= (int)0xFFFFFA50) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x5B0);
    } else {
        if ((int)t3 >= (int)0x5B0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x5B0);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        return pl_change_state(a4, 0xA, 0xF);
    }
    return (signed char)t0;
}

int pl_state40_phase2(int a4)
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

int pl_state40_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_state40_phase2(a4);
        }
        return pl_state40_phase1(a4);
    }
    return pl_state40_phase0(a4);
}
