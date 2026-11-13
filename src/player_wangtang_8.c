/* character 2 (Wang Tang) (0c071264-0c0712d8) */

int pl_step_motion(int);
int pl_end_action_choose_state(int);

int pl_wangtang_wait_anim_end_e(int a4);

int pl_wangtang_wait_anim_end_e(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_wangtang_attack_kind57(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_wangtang_wait_anim_end_e(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0711B4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0710A8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC070FD0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC070F52))(a4, a5, a6, a7);
}
