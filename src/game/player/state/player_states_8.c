/* state update functions of the player state machine (table 0xC3390D4) (part 8 of 14 of the same module) (0c095430-0c095ef8) */

/* named globals (symbols.txt) */
int pl_state23_phase1(int a4, int a5, int a6, int a7);
int pl_state23_phase0(int a4, int a5, int a6, int a7);
extern char g_char_state21_update_tab[];
extern char g_char_state22_update_tab[];
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
struct o274_float { char p[0x274]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555c4(void);
int pl_reset_model_parts(int);
int pl_start_motion(int, int, int);
int pl_apply_velocity(int);
int pl_apply_gravity(int);
int pl_landed(int);
int pl_set_power_form_on(int);
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
int snd_spawn_delayed_sound(int, int, int);
int fx_spawn_045f9c(int);
int FUN_0c05cb42(int, int, int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int pl_set_power_form_off(int);
int snd_play_side_se(int, int);
int FUN_0c0cc7fc(int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
struct o2DC_int { char p[0x2DC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int pl_apply_acceleration(int);
extern int pl_try_start_move();
int pl_button_jump_pressed(int);
int pl_no_ground(int);
int FUN_0c09e7fc(int);
int FUN_0c09e89a(int);
int pl_change_state(int, int, int, int);

int pl_state19_update(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_state21_update(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((int)g_char_state21_update_tab) + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

/* Dispatcher: tail-calls the handler picked by byte 4 of the object from a table */
void pl_state22_update(char *obj)
{
    void (**handlers)(char *) = (void (**)(char *))((int)g_char_state22_update_tab);
    handlers[obj[4]](obj);
}

int FUN_0c095472(void)
{
    int t1;
    int t22;
    int t28;

    if (((*(signed char *)0xC7EB27E) != 23) && (t1 = *(signed char *)0xC7F254E, t1 != 23)) {
        if ((*(signed char *)0xC7EB2B7) == 0) {
            if ((*(signed char *)0xC7F2587) == 0) {
                return 0x0;
            }
            return 0x2;
        }
        return 0x1;
    }
    if (((*(signed char *)0xC7EB27E) == 23) && (t22 = *(signed char *)0xC7E40CE, t22 != 0)) {
        return 0x1;
    }
    if (((*(signed char *)0xC7F254E) == 23) && (t28 = *(signed char *)0xC7EB39E, t28 != 0)) {
        return 0x2;
    }
    return 0x0;
}



int pl_state24_update(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t14;
    register int t9;
    register int t19;
    register int t20;
    register int t21;
    register int t23;
    register int t25;
    register int t31;
    register int t33;
    register int t35;
    register int t38;
    register int t39;
    register int t40;
    register int t43;
    register int t50;
    register int t59;
    register int t61;
    register int t67;
    register int t78;
    register int t79;
    register int t80;
    register int t82;
    register int t84;
    register int t90;
    register int t92;
    register int t94;
    register int t97;
    register int t98;
    register int t99;
    register int t102;
    register int t109;
    register int t57;
    register int t75;
    register int t116;

    t0 = (((struct oF0_short *)(a4))->v);
    if (t0 != 0) {
        if (t0 == 1) {
            pl_step_motion(a4);
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                return pl_end_action_choose_state(a4);
            }
            return 0x71AA;
        }
        if (t0 != 2) {
            if (t0 == 3) {
                pl_step_motion(a4);
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    return pl_end_action_choose_state(a4);
                }
                return 0x71AA;
            }
            if (t0 == 4) {
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                t14 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t9 = pl_landed(a4);
                    t14 = (signed char)t9;
                    if ((signed char)t9 != 0) {
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        t14 = (pl_change_state(a4, 0x6, 0x0, 0x0));
                    }
                }
                return t14;
            }
            pl_step_motion(a4);
            t19 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t19 - 1);
            if ((int)(short)(t19 - 1) <= 0) {
                return pl_end_action_choose_state(a4);
            }
            t20 = pl_angle_to_opponent(a4);
            t21 = *(int *)((a4 + 0x30));
            t23 = (unsigned short)(t21 - t20);
            if ((0x8000 & (unsigned short)(t21 - t20)) != 0) {
                t23 = ((unsigned short)(t21 - t20) | 0xFFFF0000);
            }
            if (((int)t23 <= (int)0xFFFFF8E4) || ((int)t23 >= (int)0x71C)) {
                t25 = 0x38E;
                if ((int)t23 > 0) {
                    t25 = 0xFFFFFC72;
                }
                *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t25) & 0xFFFF);
            }
            t31 = pl_no_ground(a4);
            if (t31 != 0) {
                t57 = (pl_change_state(a4, 0xE, 0x0, 0x0));
            } else {
                t33 = pl_button_jump_pressed(a4);
                if (t33 != 0) {
                    t57 = (pl_change_state(a4, 0x4, 0x0, 0x0));
                } else {
                    t35 = ((int (*)(int))(pl_try_start_move))(a4);
                    if (t35 == 0) {
                        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                            t38 = FUN_0c09e7fc(a4);
                            t39 = 0x1F;
                            t40 = 0x1;
                            if ((signed char)t38 != 0) {
                                t39 = 0x2;
                                t40 = 0x0;
                            }
                            t57 = (pl_change_state(a4, t39, t40, 0x0));
                        } else {
                            t43 = FUN_0c09e89a(a4);
                            t57 = (signed char)t43;
                            if ((signed char)t43 != 0) {
                                t57 = (pl_change_state(a4, 0x1F, 0x1, 0x0));
                            }
                        }
                    } else {
                        t50 = 0x1;
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            t50 = 0x0;
                        }
                        t57 = (pl_change_state(a4, 0xA, t50, 0x0));
                    }
                }
            }
            return t57;
        }
        t59 = ((int (*)(int, int, int))(pl_try_start_move))(a4, a5, a6);
        if (t59 != 0) {
            t61 = 0x1;
            if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                t61 = 0x0;
            }
            t75 = (pl_change_state(a4, 0xA, t61, 0x0));
        } else {
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t67 = pl_landed(a4);
                if ((signed char)t67 == 0) {
                    t75 = (pl_step_motion(a4));
                } else {
                    t75 = (pl_change_state(a4, 0x6, 0x0, 0x0));
                }
            } else {
                t75 = (pl_step_motion(a4));
            }
        }
        return t75;
    }
    pl_step_motion(a4);
    t78 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t78 - 1);
    if ((int)(short)(t78 - 1) <= 0) {
        return pl_end_action_choose_state(a4);
    }
    t79 = pl_angle_to_opponent(a4);
    t80 = *(int *)((a4 + 0x30));
    t82 = (unsigned short)(t80 - t79);
    if ((0x8000 & (unsigned short)(t80 - t79)) != 0) {
        t82 = ((unsigned short)(t80 - t79) | 0xFFFF0000);
    }
    if (((int)t82 <= (int)0xFFFFF8E4) || ((int)t82 >= (int)0x71C)) {
        t84 = 0x38E;
        if ((int)t82 > 0) {
            t84 = 0xFFFFFC72;
        }
        *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t84) & 0xFFFF);
    }
    t90 = pl_no_ground(a4);
    if (t90 != 0) {
        t116 = (pl_change_state(a4, 0xE, 0x0, 0x0));
    } else {
        t92 = pl_button_jump_pressed(a4);
        if (t92 != 0) {
            t116 = (pl_change_state(a4, 0x4, 0x0, 0x0));
        } else {
            t94 = ((int (*)(int))(pl_try_start_move))(a4);
            if (t94 == 0) {
                if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                    t97 = FUN_0c09e7fc(a4);
                    t98 = 0x1F;
                    t99 = 0x1;
                    if ((signed char)t97 != 0) {
                        t98 = 0x2;
                        t99 = 0x0;
                    }
                    t116 = (pl_change_state(a4, t98, t99, 0x0));
                } else {
                    t102 = FUN_0c09e89a(a4);
                    t116 = (signed char)t102;
                    if ((signed char)t102 != 0) {
                        t116 = (pl_change_state(a4, 0x1F, 0x1, 0x0));
                    }
                }
            } else {
                t109 = 0x1;
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t109 = 0x0;
                }
                t116 = (pl_change_state(a4, 0xA, t109, 0x0));
            }
        }
    }
    return t116;
}

int pl_state25_update(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}
