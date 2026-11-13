/* state update functions of the player state machine (table 0xC3390D4) (part 8 of 14 of the same module) (0c095430-0c095ef8) */

/* named globals (symbols.txt) */
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
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
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

int pl_state23_phase0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = a4;
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0xF) {
            if ((((((struct oEE_short *)(a4))->v)) & 0x1) != 0) {
                (((struct o71F1_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o71F1_uchar *)(a4))->v) = 0x0;
            }
            pl_reset_model_parts(a4);
        } else {
            t2 = a4;
        }
        t3 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t3 - 1);
        if ((short)(t3 - 1) == 0) {
            pl_set_power_form_on(a4);
            (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
            t3 = FUN_0c0555c4();
            if ((t3 != 0) && (t0 = *(signed char *)((a4 + 0x71ED)), t0 == 0)) {
                t0 = *(signed char *)((a4 + 0x4));
                *(unsigned int *)(((0xC7F2F60 + (t0 << 2)) + 0x0)) = ((*(int *)((0xC7F2F60 + (t0 << 2)))) + 0x1);
            }
        } else {
            t0 = t2;
        }
        t1 = t0;
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0xB));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    return t2;
                }
                return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
            }
            pl_apply_gravity(a4);
            return (pl_apply_velocity(a4));
        }
        t2 = pl_step_motion(a4);
        if ((signed char)t2 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return ((int (*)(void))(0xC09583E))();
        }
        return ((int (*)(void))(0xC09583E))();
    }
    if (t0 != 1) {
        if (t0 == 2) {
            t2 = *(signed char *)((a4 + 0xB));
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
                    }
                    return t2;
                }
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t2 = pl_landed(a4);
                    if ((signed char)t2 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return pl_start_motion(a4, 0x3, 0xB);
                    }
                    return (signed char)t2;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t2 = pl_step_motion(a4);
                t3 = (signed char)t2;
                if ((signed char)t2 == 0) {
                } else {
                    pl_start_motion(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t3 = 0x2;
                }
                return t3;
            }
            t2 = pl_step_motion(a4);
            if ((signed char)t2 != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            return ((int (*)(void))(0xC09583E))();
        }
        if (t0 == 3) {
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
                    }
                    return t0;
                }
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t0 = pl_landed(a4);
                    if ((signed char)t0 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return pl_start_motion(a4, 0x3, 0xB);
                    }
                    return (signed char)t0;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t0 = pl_step_motion(a4);
                t2 = (signed char)t0;
                if ((signed char)t0 == 0) {
                } else {
                    pl_start_motion(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t2 = 0x2;
                }
                return t2;
            }
            t0 = pl_step_motion(a4);
            if ((signed char)t0 != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            return ((int (*)(void))(0xC09583E))();
        }
        
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
            }
            pl_apply_gravity(a4);
            return (pl_apply_velocity(a4));
        }
        t0 = pl_step_motion(a4);
        if ((signed char)t0 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return ((int (*)(void))(0xC09583E))();
        }
        return ((int (*)(void))(0xC09583E))();
    }
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        t0 = pl_step_motion(a4);
        if ((signed char)t0 != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
        (((struct o710C_uchar *)(a4))->v) = 0x0;
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 <= (int)0x96) {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = pl_step_motion(a4);
                if ((signed char)t0 != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
                (((struct o710C_uchar *)(a4))->v) = 0x0;
                t0 = (((struct o719E_short *)(a4))->v);
                if (((int)(unsigned short)t0 >= (int)0x3) && ((int)(unsigned short)t0 <= (int)0x19)) {
                    (((struct o710C_uchar *)(a4))->v) = 0x1;
                }
                t0 = (((struct o719E_short *)(a4))->v);
                t2 = 0x719E;
                if ((int)(unsigned short)t0 < (int)0x45) {
                } else {
                    t3 = 0x719E;
                    if ((int)(unsigned short)t0 > (int)0x50) {
                    } else {
                        (((struct o710C_uchar *)(a4))->v) = 0x1;
                        t3 = 0x710C;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            return t1;
        }
        pl_apply_gravity(a4);
        pl_apply_velocity(a4);
        pl_step_motion(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                return ((int (*)(void))(0xC095800))();
            }
        }
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 > (int)0x96) {
            } else {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    pl_step_motion(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 != 30) {
    } else {
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state23_phase1(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t11;
    register int t14;
    register int t20;
    register int t28;
    register int t66;
    register int t67;
    register int t72;
    register int t75;
    register int t76;
    register int t79;
    register int t83;
    register int t84;
    register int t87;
    register int t88;
    register int t93;
    register int t96;
    register int t97;
    register int t100;
    register int t104;
    register int t105;
    register int t64;
    register int t39;
    int t23;
    int t30;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t64 = a4;
    } else {
        pl_set_power_form_off(a4);
        (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x13);
        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        if ((int)(*(signed char *)((a4 + 0x7230))) < (int)0x3) {
        } else {
            FUN_0c0e6fe8();
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 100.0f);
            if ((*(float *)0xC494D1C) > 500.0f) {
                t11 = pl_angle_to_opponent(a4);
                *(volatile float *)0xC494D1C;
                FUN_0c05cb42((((int)stk + 0) + 0x10), t11, 0x0);
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t14 = math_angle_between_points_xz((a4 + 0x20), (((int)stk + 0) + 0x4));
                *(unsigned int *)(((int)stk + 0)) = t14;
                math_rand_float();
                t20 = FUN_0c0e6f24();
                *(volatile float *)0xC494D1C;
                if (((*(signed char *)0xC7F4765) != 0) && (t23 = *(signed char *)0xC7F4755, t23 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x1);
                    t39 = 0x2;
                }
            } else {
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t28 = math_angle_between_points_xz((a4 + 0x20), (((int)stk + 0) + 0x4));
                if (((*(signed char *)0xC7F4765) != 0) && (t30 = *(signed char *)0xC7F4755, t30 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x1);
                    t39 = 0x2;
                }
            }
            FUN_0c0cc7fc(t39);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x11);
            snd_spawn_delayed_sound((*(signed char *)((a4 + 0x3))), 0x11, 0x3);
            snd_spawn_delayed_sound((*(signed char *)((a4 + 0x3))), 0x11, 0x6);
            (((struct o7230_uchar *)(a4))->v) = 0x0;
            (((struct o7231_uchar *)(a4))->v) = 0x0;
            fx_spawn_045f9c(a4);
        }
    }
    t66 = *(signed char *)((a4 + 0x4));
    if (t66 != 0) {
        if (t66 != 1) {
            t67 = *(signed char *)((a4 + 0xB));
            if (t67 != 0) {
                if (t67 != 1) {
                    if (t67 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
                    }
                    return t67;
                }
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t72 = pl_landed(a4);
                    if ((signed char)t72 != 0) {
                        t75 = 0x0;
                        t76 = 0x9;
                        if ((*(signed char *)((a4 + 0x4))) == 4) {
                            t75 = 0x3;
                            t76 = 0xA;
                        }
                        pl_start_motion(a4, t75, t76);
                        return ((int (*)(void))(0xC095B9E))();
                    }
                    return (signed char)t72;
                }
                return 0x3C;
            }
            t79 = pl_step_motion(a4);
            if ((signed char)t79 == 0) {
                return (signed char)t79;
            }
            if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                t83 = 0x0;
                t84 = 0x9;
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    t83 = 0x3;
                    t84 = 0xA;
                }
                pl_start_motion(a4, t83, t84);
                return ((int (*)(void))(0xC095B68))();
            }
            return ((int (*)(void))(0xC095B9E))();
        }
        t87 = *(signed char *)((a4 + 0xB));
        if (t87 != 0) {
            if (t87 != 1) {
                if (t87 != 2) {
                    return t87;
                }
                return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC095B6E))(t64, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC095B4C))(t64, a5, a6, a7);
    }
    t88 = *(signed char *)((a4 + 0xB));
    if (t88 != 0) {
        if (t88 != 1) {
            if (t88 == 2) {
                return ((int (*)(int, int, int, int))(0xC095BA6))(t64, a5, a6, a7);
            }
            return t88;
        }
        pl_apply_gravity(a4);
        pl_apply_velocity(a4);
        pl_step_motion(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t93 = pl_landed(a4);
            if ((signed char)t93 != 0) {
                t96 = 0x0;
                t97 = 0x9;
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    t96 = 0x3;
                    t97 = 0xA;
                }
                pl_start_motion(a4, t96, t97);
                return ((int (*)(void))(0xC095B9E))();
            }
            return (signed char)t93;
        }
        return 0x3C;
    }
    t100 = pl_step_motion(a4);
    if ((signed char)t100 == 0) {
        return (signed char)t100;
    }
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        t104 = 0x0;
        t105 = 0x9;
        if ((*(signed char *)((a4 + 0x4))) == 4) {
            t104 = 0x3;
            t105 = 0xA;
        }
        pl_start_motion(a4, t104, t105);
        return ((int (*)(void))(0xC095B68))();
    }
    return ((int (*)(void))(0xC095B9E))();
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
