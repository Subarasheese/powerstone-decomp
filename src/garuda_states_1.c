/* Garuda per-state update functions (states 11,21,22,31, specials) (part 1 of 6 of the same module) (0c07c3ea-0c07c8be) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_detect_special_input(int, int);

int pl_garuda_state31_phase0(int a4);
int pl_garuda_state31_phase1(int a4);

int FUN_0c07c3ea(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC07C392))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC07C360))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC07C32C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC07C290))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07C23E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07C1E4))(a4, a5, a6, a7);
}

int pl_garuda_state21_update(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            pl_step_motion(a4);
            t1 = (*(signed char *)((a4 + 0xB)));
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0xB));
        switch (t1) {
        case 0:
            pl_start_motion(a4, 0x3, 0x2);
            break;
        case 1:
            pl_start_motion(a4, 0x3, 0x3);
            break;
        case 2:
            pl_start_motion(a4, 0x3, 0x5);
            break;
        case 3:
            pl_start_motion(a4, 0x3, 0x6);
            break;
        }
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int pl_garuda_state22_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC07C4EC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07C4C2))(a4, a5, a6, a7);
}

int pl_garuda_state31_phase0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_garuda_state31_phase1(int a4)
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

int pl_garuda_state31_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_garuda_state31_phase1(a4);
    }
    return pl_garuda_state31_phase0(a4);
}

int pl_garuda_get_state28_action(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t4;

    if ((*(signed char *)((a4 + 0x71BA))) == 11) {
        t0 = *(signed char *)((a4 + 0x7223));
        if (t0 != 2) {
            if (t0 != 4) {
                t1 = 0x63;
                if ((t0 != 6) && (t0 != 8)) {
                } else {
                    t0 = pl_detect_special_input(a4, 0xC337294);
                    t2 = 0x63;
                    if ((signed char)t0 != 0) {
                        t2 = 0x5;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = pl_detect_special_input(a4, 0xC337280);
                t2 = 0x63;
                if ((signed char)t1 != 0) {
                    t2 = 0x4;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = pl_detect_special_input(a4, 0xC33726C);
            t2 = 0x63;
            if ((signed char)t0 != 0) {
                t2 = 0x3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        if ((*(signed char *)((a4 + 0x721F))) == 13) {
            t1 = pl_detect_special_input(a4, 0xC3372D0);
            t2 = 0x63;
            if ((signed char)t1 != 0) {
                t2 = 0x8;
            }
            t1 = t2;
        } else {
            t2 = *(signed char *)((a4 + 0x7238));
            if (t2 != 12) {
                if (t2 != 14) {
                    t2 = pl_detect_special_input(a4, 0xC337244);
                    t1 = 0x1;
                    if ((signed char)t2 != 0) {
                    } else {
                        t2 = pl_detect_special_input(a4, 0xC337230);
                        t4 = 0x0;
                        if ((signed char)t2 != 0) {
                        } else {
                            t2 = pl_detect_special_input(a4, 0xC337258);
                            t4 = 0x63;
                            if ((signed char)t2 != 0) {
                                t4 = 0x2;
                            }
                        }
                        t1 = t4;
                    }
                    t2 = t1;
                } else {
                    t1 = pl_detect_special_input(a4, 0xC3372BC);
                    t4 = 0x63;
                    if ((signed char)t1 != 0) {
                        t4 = 0x7;
                    }
                    t2 = t4;
                }
                t1 = t2;
            } else {
                t2 = pl_detect_special_input(a4, 0xC3372A8);
                t4 = 0x63;
                if ((signed char)t2 != 0) {
                    t4 = 0x6;
                }
                t1 = t4;
            }
        }
        t0 = t1;
    }
    return t0;
}

int pl_garuda_special_move_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)((a4 + 0x7209))) << 2) + 0xC3372E4));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
