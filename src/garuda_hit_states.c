/* Garuda state helpers (sub-step switches) (0c07d90c-0c07dd0c) */

int pl_apply_motion_translation(int);
int pl_step_motion_owner(int a4);
int pl_step_motion_owner(int);
int pl_change_state(int, int, int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion_owner(int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int pl_garuda_victim_phase9(int, int, int, int);
int pl_garuda_victim_phase7(int a4, int a5, int a6, int a7);

int pl_garuda_victim_phase0(int a4);
int pl_garuda_victim_phase1(int a4);
int pl_garuda_victim_phase2(int a4);
int pl_garuda_victim_phase3(int a4);
int pl_garuda_victim_phase4(int a4);
int pl_garuda_victim_phase5(int a4);
int pl_garuda_victim_phase6(int a4);
int pl_garuda_victim_phase8(int a4);

int pl_garuda_special_id8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07D8CA))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07D808))(a4, a5, a6, a7);
}

int pl_garuda_victim_phase0(int a4)
{
    pl_step_motion_owner(a4);
    return pl_apply_motion_translation(a4);
}

int pl_garuda_victim_phase1(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}

int pl_garuda_victim_phase2(int a4)
{
    register int t0;

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
        return t0;
    }
    pl_step_motion_owner(a4);
    return pl_apply_motion_translation(a4);
}

int pl_garuda_victim_phase3(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
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
    return pl_apply_motion_translation(a4);
}

int pl_garuda_victim_phase4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
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
    return pl_apply_motion_translation(a4);
}

int pl_garuda_victim_phase5(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                pl_step_motion_owner(a4);
                pl_apply_motion_translation(a4);
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    return pl_change_state(a4, 0xF, 0x0);
                }
                return 0x71AA;
            }
        } else {
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x3);
            snd_play_char_voice(a4, 0xC);
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        t1 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            pl_start_motion_owner(a4, 0x2, 0x63);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t2 = *(signed char *)((a4 + 0xC));
            *(unsigned char *)((a4 + 0xC)) = (t2 + 0x1);
            t1 = (t2 + 0x1);
        }
        return t1;
    }
    return t0;
}

int pl_garuda_victim_phase6(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 == 0) {
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            return pl_change_state(a4, 0xF, 0x1);
        }
        return 0x71AA;
    }
    return t0;
}

int pl_garuda_victim_phase8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 == 0) {
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            return pl_change_state(a4, 0xF, 0x1);
        }
        return 0x71AA;
    }
    return t0;
}

int pl_garuda_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        if (t0 != 9) {
                                            return t0;
                                        }
                                        return pl_garuda_victim_phase9(a4, a5, a6, a7);
                                    }
                                    return pl_garuda_victim_phase8(a4);
                                }
                                return pl_garuda_victim_phase7(a4, a5, a6, a7);
                            }
                            return pl_garuda_victim_phase6(a4);
                        }
                        return pl_garuda_victim_phase5(a4);
                    }
                    return pl_garuda_victim_phase4(a4);
                }
                return pl_garuda_victim_phase3(a4);
            }
            return pl_garuda_victim_phase2(a4);
        }
        return pl_garuda_victim_phase1(a4);
    }
    return pl_garuda_victim_phase0(a4);
}
