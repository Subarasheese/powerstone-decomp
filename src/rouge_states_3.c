/* Rouge state updates and specials (part 3 of 7 of the same module) (0c0830e0-0c0833fa) */

int pl_step_motion(int);
int pl_detect_special_input(int, int);

int pl_rouge_state31_phase1(int a4);

int pl_rouge_state31_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_rouge_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_rouge_state31_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0830B4))(a4, a5, a6, a7);
}

int pl_rouge_get_state28_action(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC3378BC);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC3378A8);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC3378D0);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

int pl_rouge_special_move_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC3378E4));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
