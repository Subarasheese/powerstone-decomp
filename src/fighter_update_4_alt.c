/* input snapshot, round-level update of the two fighters, per-player update (part 4 of 4 of the same module) (0c093254-0c093998) */

struct o24_float { char p[0x24]; float v; };
struct o71F0_uchar { char p[0x71F0]; unsigned char v; };
int FUN_0c0555c4(void);
int FUN_0c09c5f4(int);
int pl_tick_hitstop(int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
int FUN_0c0634b4(int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_try_start_move(int, int, int);
int pl_button_jump_pressed(int);
int pl_no_ground(int);
int FUN_0c09e7fc(int, int, int);
int FUN_0c09e89a(int, int, int);
int FUN_0c09e910(int, int, int);
int pl_start_item_action(int);
int pl_start_idle_motion(int);
int FUN_0c09fdf6(int);
int pl_check_dual_button_input(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_try_dual_button_action(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_change_state(int, int, int, int);

int FUN_0c09375c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x71F0))) != 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 == 0)) {
        (((struct o71F0_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71F0))) - 1);
    }
    t0 = *(signed char *)((a4 + 0x71BA));
    if ((t0 != 10) && (t0 != 11)) {
        t0 = pl_tick_hitstop(a4);
        if ((signed char)t0 == 0) {
            if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t1 = *(signed char *)((a4 + 0x71BA)), t1 != 11)) {
                t1 = FUN_0c0555c4();
                if (t1 != 0) {
                    t1 = FUN_0c09c5f4(a4);
                    if ((signed char)t1 != 0) {
                        t1 = *(signed char *)((a4 + 0x71BA));
                        if (t1 == 36) {
                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                            return 0x24;
                        }
                        return t1;
                    }
                }
            }
            t1 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC3390D4));
            return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
        }
        return (signed char)t0;
    }
    if (((*(signed char *)((a4 + 0x71F1))) != 0) && (t2 = *(signed char *)((a4 + 0x71BA)), t2 != 11)) {
        t0 = FUN_0c0555c4();
        if (t0 != 0) {
            t0 = FUN_0c09c5f4(a4);
            if ((signed char)t0 != 0) {
                t0 = *(signed char *)((a4 + 0x71BA));
                if (t0 == 36) {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 2.0f);
                    return 0x24;
                }
                return t0;
            }
        }
    }
    t0 = *(int *)((((*(signed char *)((a4 + 0x71BA))) << 2) + 0xC3390D4));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int pl_state_idle_update(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = R14;
    *(int *)((int)stk + 8) = v0_1;
    v0_2 = R13;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = (*(signed char *)((v0_0 + 0x7236))) == 0;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    R14 = (v0_0);
    if (v0_3) goto L_C09383A;
    v0_0 = (signed char)(FUN_0c09c782(R14)) == 0;
    if (v0_0) goto L_C09383A;
    FUN_0c0634b4(R14);
    pl_start_idle_motion(R14);
    L_C09383A:;
    pl_step_motion(R14);
    v0_0 = (pl_no_ground(R14)) == 0;
    R13 = (0xC0A2E26);
    if (v0_0) goto L_C09388C;
    R5 = (0xE);
    R6 = (0x0);
    L_C093936:;
    v0_0 = ((pl_change_state(R14, R5, R6, 0x0)));
    L_C09395E:;
    *(volatile int *)((int)stk + 0);
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_C09388C:;
    v0_0 = (signed char)(pl_check_power_form_attack_input(R14, R5, R6)) == 0;
    if (v0_0) goto L_C0938A4;
    v0_1 = pl_start_power_form_attack(R14, R5, R6);
    v0_0 = ((signed char)v0_1);
    if (((signed char)v0_1 != 0)) goto L_C09395E;
    L_C0938A4:;
    v0_0 = (signed char)(pl_check_dual_button_input(R14)) == 0;
    if (v0_0) goto L_C0938BC;
    v0_1 = pl_try_dual_button_action(R14, R5, R6);
    v0_0 = ((signed char)v0_1);
    if (((signed char)v0_1 != 0)) goto L_C09395E;
    L_C0938BC:;
    v0_0 = (pl_try_start_move(R14, R5, R6)) == 0;
    if (v0_0) goto L_C0938CC;
    R5 = (0xA);
    R6 = (0x0);
    goto L_C093936;
    L_C0938CC:;
    v0_0 = (signed char)(FUN_0c09e910(R14, R5, R6)) == 0;
    if (v0_0) goto L_C0938E4;
    *(volatile int *)((int)stk + 0);
    *(volatile int *)((int)stk + 4);
    return pl_start_item_action(R14);
    L_C0938E4:;
    v0_0 = (pl_button_jump_pressed(R14)) == 0;
    if (v0_0) goto L_C0938F4;
    R5 = (0x4);
    R6 = (0x0);
    goto L_C093936;
    L_C0938F4:;
    v0_0 = (signed char)(FUN_0c09e89a(R14, R5, R6)) == 0;
    if (v0_0) goto L_C093906;
    R5 = (0x1F);
    R6 = (0x0);
    goto L_C093936;
    L_C093906:;
    v0_0 = (((((struct o2DC_int *)(R14))->v)) & 240) == 0;
    if (v0_0) goto L_C093926;
    v0_0 = (signed char)(FUN_0c09e7fc(R14, R5, R6)) == 0;
    if (v0_0) goto L_C093920;
    R5 = (0x2);
    R6 = (0x0);
    goto L_C093936;
    L_C093920:;
    R5 = (0x1F);
    R6 = (0x1);
    goto L_C093936;
    L_C093926:;
    v0_0 = (signed char)(FUN_0c09fdf6(R14)) == 0;
    if (v0_0) goto L_C09393E;
    R5 = (0x21);
    R6 = (0x0);
    goto L_C093936;
    L_C09393E:;
    v0_1 = *(signed char *)((R14 + 0x71BC));
    v0_0 = (v0_1);
    if ((v0_1 != 1)) goto L_C09395E;
    (((struct o71BC_uchar *)(R14))->v) = 0x0;
    pl_change_state(R14, 0x0, 0x0, 0x0);
    (((struct o71A7_uchar *)(R14))->v) = 0xA;
    (((struct o71A6_uchar *)(R14))->v) = 0xA;
    v0_0 = (0x71A6);
    goto L_C09395E;
}
