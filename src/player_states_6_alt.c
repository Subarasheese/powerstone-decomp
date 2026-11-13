/* state update functions of the player state machine (table 0xC3390D4) (part 6 of 14 of the same module) (0c094a58-0c09511c) */

extern signed char hit_probe_step_max(char *fighter, char *p, float a);
extern int pl_stick_dir_angle(char *fighter);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern void pl_apply_velocity(char *fighter);
extern int pl_start_motion(char *fighter, int a, int b);
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_state16_phase0(int);
int pl_state16_phase1(int);
int pl_check_dual_button_input(int);
int pl_try_dual_button_action(int);
int pl_change_state(int, int, int);

int pl_state16_walk_step(char *fighter)
{
    int ang_diff, half_step;
    float speed;
    short timer;

    if (hit_probe_step_max(fighter, fighter + 0x7254, 60.0f) == 2) {
        fighter[0x7243] = fighter[0x7243] - 1;
        if (fighter[0x7243] == 0) {
            *(float *)(fighter + 36) = *(float *)(fighter + 36) + *(float *)(fighter + 0x7254);
            fighter[0x7243] = 4;
        }
    } else {
        fighter[0x7243] = 4;
    }
    if ((*(int *)(fighter + 732) & 240) == 0 && *(short *)(fighter + 238) == 0) {
        timer = *(short *)(fighter + 240) - 1;
        *(short *)(fighter + 240) = timer;
        if (timer > 0)
            goto end_step;
        pl_start_motion(fighter, 2, 159);
        fighter[0x71A9] = 1;
        fighter[0x71A8] = 1;
        fighter[11] = 2;
        return 1;
    }
    if (*(short *)(fighter + 238) == 0) {
        ang_diff = (short)(*(int *)0xC7F31E0 + pl_stick_dir_angle(fighter) - *(int *)(fighter + 48));
        if (ang_diff > -1456) {
            if (ang_diff >= 1456) {
                *(int *)(fighter + 48) = *(int *)(fighter + 48) + 1456;
            } else {
                half_step = (ang_diff + (0 > ang_diff)) >> 1;
                *(int *)(fighter + 48) = *(int *)(fighter + 48) + half_step;
            }
        } else {
            *(int *)(fighter + 48) = *(int *)(fighter + 48) - 1456;
        }
        *(int *)(fighter + 48) = *(int *)(fighter + 48) & 0xFFFF;
    }
    if (fighter[11] == 0)
        speed = 12.0f;
    else
        speed = 8.0f;
    *(float *)(fighter + 56) = math_cos_angle16(0x14000 - *(int *)(fighter + 48)) * speed;
    *(float *)(fighter + 64) = math_sin_angle16(0x14000 - *(int *)(fighter + 48)) * speed;
    pl_apply_velocity(fighter);
    *(short *)(fighter + 240) = 4;
end_step:
    if (*(short *)(fighter + 238) != 0)
        *(short *)(fighter + 238) = *(short *)(fighter + 238) - 1;
    return 0;
}

int pl_state16_phase_dispatch(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t2 = pl_check_dual_button_input(a4);
    if ((signed char)t2 != 0) {
        t2 = pl_try_dual_button_action(a4);
        if ((signed char)t2 == 0) {
            if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u0 = (((struct o274_float *)(a4))->v), !(u0 > 0.0f)) && (t0 = *(signed char *)((a4 + 0x2D9)), t0 != 2))) {
                (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) > (int)0xA) {
                    return pl_change_state(a4, 0x5, 0x6);
                }
            } else {
                (((struct o71E8_float *)(a4))->v) = 0.0f;
                (((struct oF2_ushort *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC094E44))(a4, a5, a6, a7);
                }
                return pl_state16_phase1(a4);
            }
            return pl_state16_phase0(a4);
        }
        return (signed char)t2;
    }
    if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u1 = (((struct o274_float *)(a4))->v), !(u1 > 0.0f)) && (t1 = *(signed char *)((a4 + 0x2D9)), t1 != 2))) {
        (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xA) {
            return pl_change_state(a4, 0x5, 0x6);
        }
    } else {
        (((struct o71E8_float *)(a4))->v) = 0.0f;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC094E44))(a4, a5, a6, a7);
        }
        return pl_state16_phase1(a4);
    }
    return pl_state16_phase0(a4);
}
