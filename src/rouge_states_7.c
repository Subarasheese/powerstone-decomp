/* Rouge state updates and specials (part 7 of 7 of the same module) (0c08376c-0c083ce0) */

int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);

int pl_rouge_special_id8(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t1;
}

int pl_rouge_special_id2(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3378F4 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int pl_rouge_special_id3(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC083B1C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0838F4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0837A2))(a4, a5, a6, a7);
}

int pl_rouge_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC083C72))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC083BAA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC083B7E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC083B6C))(a4, a5, a6, a7);
}
