/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_int { char p[0x2DC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c09e7fc(int);
int FUN_0c09e910(int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_button_jump_pressed(int);
int pl_change_state(int, int, int, int);
int pl_check_dual_button_input(int);
int pl_check_power_form_attack_input(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_no_ground(int);
int pl_start_item_action(int);
int pl_start_power_form_attack(int);
int pl_step_motion(int);
int pl_try_dual_button_action(int);
int pl_try_start_move(int);
int FUN_0c09632c(int a4);

int FUN_0c09632c(int a4)
{
    int stk[3];
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t17;
    register int t19;
    register int t20;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t34;
    register int t36;
    register int t38;
    register int t39;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t53;
    register int t54;
    register int t55;
    register int t57;
    register int t59;
    register int t60;
    register int t64;
    register int t65;
    register int t66;
    register int t67;
    register int t74;
    register int t76;
    register int t78;
    register int t79;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t32;
    register int t51;
    register int t72;
    register int t91;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t7 = pl_step_motion(a4);
    if ((signed char)t7 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t11 = pl_check_power_form_attack_input(a4);
    if ((signed char)t11 != 0) {
        t12 = pl_start_power_form_attack(a4);
        if ((signed char)t12 == 0) {
            t13 = pl_check_dual_button_input(a4);
            if ((signed char)t13 != 0) {
                t14 = pl_try_dual_button_action(a4);
                if ((signed char)t14 == 0) {
                    t15 = pl_try_start_move(a4);
                    if (t15 != 0) {
                        return (pl_change_state(a4, 0xA, 0x0, 0x0));
                    }
                    t17 = pl_no_ground(a4);
                    if (t17 != 0) {
                        return (pl_change_state(a4, 0xE, 0x0, 0x0));
                    }
                    t19 = FUN_0c09e910(a4);
                    if ((signed char)t19 != 0) {
                        return pl_start_item_action(a4);
                    }
                    t20 = pl_button_jump_pressed(a4);
                    if (t20 != 0) {
                        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                        t32 = (pl_change_state(a4, 0x4, 0x0, 0x0));
                    } else {
                        t24 = (((struct o2DC_int *)(a4))->v);
                        t32 = t24;
                        if ((t24 & 240) != 0) {
                            t25 = FUN_0c09e7fc(a4);
                            t26 = 0x1F;
                            t27 = 0x1;
                            if ((signed char)t25 != 0) {
                                t26 = 0x2;
                                t27 = 0x0;
                            }
                            t32 = (pl_change_state(a4, t26, t27, 0x0));
                        }
                    }
                    return t32;
                }
                return (signed char)t14;
            }
            t34 = pl_try_start_move(a4);
            if (t34 != 0) {
                return (pl_change_state(a4, 0xA, 0x0, 0x0));
            }
            t36 = pl_no_ground(a4);
            if (t36 != 0) {
                return (pl_change_state(a4, 0xE, 0x0, 0x0));
            }
            t38 = FUN_0c09e910(a4);
            if ((signed char)t38 != 0) {
                return pl_start_item_action(a4);
            }
            t39 = pl_button_jump_pressed(a4);
            if (t39 != 0) {
                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                t51 = (pl_change_state(a4, 0x4, 0x0, 0x0));
            } else {
                t43 = (((struct o2DC_int *)(a4))->v);
                t51 = t43;
                if ((t43 & 240) != 0) {
                    t44 = FUN_0c09e7fc(a4);
                    t45 = 0x1F;
                    t46 = 0x1;
                    if ((signed char)t44 != 0) {
                        t45 = 0x2;
                        t46 = 0x0;
                    }
                    t51 = (pl_change_state(a4, t45, t46, 0x0));
                }
            }
            return t51;
        }
        return (signed char)t12;
    }
    t53 = pl_check_dual_button_input(a4);
    if ((signed char)t53 != 0) {
        t54 = pl_try_dual_button_action(a4);
        if ((signed char)t54 == 0) {
            t55 = pl_try_start_move(a4);
            if (t55 != 0) {
                return (pl_change_state(a4, 0xA, 0x0, 0x0));
            }
            t57 = pl_no_ground(a4);
            if (t57 != 0) {
                return (pl_change_state(a4, 0xE, 0x0, 0x0));
            }
            t59 = FUN_0c09e910(a4);
            if ((signed char)t59 != 0) {
                return pl_start_item_action(a4);
            }
            t60 = pl_button_jump_pressed(a4);
            if (t60 != 0) {
                *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                t72 = (pl_change_state(a4, 0x4, 0x0, 0x0));
            } else {
                t64 = (((struct o2DC_int *)(a4))->v);
                t72 = t64;
                if ((t64 & 240) != 0) {
                    t65 = FUN_0c09e7fc(a4);
                    t66 = 0x1F;
                    t67 = 0x1;
                    if ((signed char)t65 != 0) {
                        t66 = 0x2;
                        t67 = 0x0;
                    }
                    t72 = (pl_change_state(a4, t66, t67, 0x0));
                }
            }
            return t72;
        }
        return (signed char)t54;
    }
    t74 = pl_try_start_move(a4);
    if (t74 != 0) {
        return (pl_change_state(a4, 0xA, 0x0, 0x0));
    }
    t76 = pl_no_ground(a4);
    if (t76 != 0) {
        return (pl_change_state(a4, 0xE, 0x0, 0x0));
    }
    t78 = FUN_0c09e910(a4);
    if ((signed char)t78 != 0) {
        return pl_start_item_action(a4);
    }
    t79 = pl_button_jump_pressed(a4);
    if (t79 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        t91 = (pl_change_state(a4, 0x4, 0x0, 0x0));
    } else {
        t83 = (((struct o2DC_int *)(a4))->v);
        t91 = t83;
        if ((t83 & 240) != 0) {
            t84 = FUN_0c09e7fc(a4);
            t85 = 0x1F;
            t86 = 0x1;
            if ((signed char)t84 != 0) {
                t85 = 0x2;
                t86 = 0x0;
            }
            t91 = (pl_change_state(a4, t85, t86, 0x0));
        }
    }
    return t91;
}
