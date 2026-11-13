/* character 3 (Jack) (0c07282c-0c0742fc) */

int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_jack_mode12_phase1(int);
int pl_jack_mode12_phase2(int);

int pl_jack_wait_anim_end_b(int a4);

int pl_jack_update_action_14(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_jack_update_action_default(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_jack_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_jack_wait_anim_end_b(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_jack_mode12_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_jack_wait_anim_end_b(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0734A8))(a4, a5, a6, a7);
            }
            return pl_jack_mode12_phase2(a4);
        }
        return pl_jack_mode12_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0732D8))(a4, a5, a6, a7);
}
