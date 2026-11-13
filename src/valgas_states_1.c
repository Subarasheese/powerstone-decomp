/* Valgas attack update and state updates (part 1 of 3 of the same module) (0c08975c-0c089de8) */

struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_detect_special_input(int, int);
struct O7209 { char pad[0x7209]; signed char sel; };

int pl_valgas_state31_phase1(int a4);

int pl_valgas_state21_update(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if (((*(signed char *)((a4 + 0xB))) == 1) && (t0 = (((struct o719E_short *)(a4))->v), (unsigned short)t0 == 74)) {
            (((struct o710B_uchar *)(a4))->v) = 0x0;
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_start_motion(a4, 0x3, 0x2);
        break;
    case 1:
        pl_start_motion(a4, 0x3, 0x3);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
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
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_valgas_state22_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08982C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0897E6))(a4, a5, a6, a7);
}

int pl_valgas_state31_phase1(int a4)
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

int pl_valgas_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_valgas_state31_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC089888))(a4, a5, a6, a7);
}

int FUN_0c089b1a(int a4, int a5, int a6, int a7)
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
                    return ((int (*)(int, int, int, int))(0xC089B14))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0899BC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08997C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC089938))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0898E6))(a4, a5, a6, a7);
}

int pl_valgas_get_state28_action(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC338064);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC338050);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC338078);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

void pl_valgas_special_move_dispatch(struct O7209 *obj)
{
    void (**handlers)(struct O7209 *) = (void (**)(struct O7209 *))0xC33808C;
    handlers[obj->sel](obj);
}

int pl_valgas_special_id0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089C38))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089BCC))(a4, a5, a6, a7);
}

int pl_valgas_special_id2(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC338098 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
