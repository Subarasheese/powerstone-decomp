/* state update functions of the player state machine (table 0xC3390D4) (part 11 of 14 of the same module) (0c096484-0c0975c8) */

extern int pl_step_motion(char *fighter);
extern int pl_start_motion(char *fighter, int a, int b);
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
float FUN_0c0262f8(int);
int FUN_0c02656e(int, int);
int FUN_0c0972b2(int);
int FUN_0c09ca88(int, int, int, int);
int pl_stick_dir_angle(int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_state26_phase0(int);
int pl_state26_phase1(int);
int pl_state26_phase2(int, int, int, int);
int pl_try_start_basic_attack(int);
int pl_button_jump_pressed(int);
int FUN_0c0a02d4(int, float);
int pl_change_state(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_state35_phase0(int);
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o729C_float { char p[0x729C]; float v; };
int pl_state36_phase0(int);
int pl_state36_phase1(int);
int pl_is_airborne(int);
int pl_try_start_move(int);
extern int FUN_0c09ff0c();
int pl_check_dual_button_input(int);

void pl_state34_phase0(char *fighter)
{
    char *opponent;
    int turn, ang_diff;
    float pos_self, pos_opp, dist, dist_abs;

    if ((signed char)pl_step_motion(fighter) != 0)
        pl_start_motion(fighter, 2, 212);
    if (*(int *)(fighter + 732) & 48) {
        fighter[29239] = 99;
        fighter[10] = 2;
    }
    if (*(int *)(fighter + 732) & 64)
        turn = 910;
    else if (*(int *)(fighter + 732) & 128)
        turn = -910;
    else
        turn = 0;
    opponent = *(char **)(fighter + 28);
    if (opponent[29114] == 34) {
        pos_self = *(float *)(fighter + 36);
        pos_opp = *(float *)(opponent + 36);
        dist = pos_self - pos_opp;
        dist_abs = dist;
        if (0.0f > dist)
            dist_abs = pos_opp - pos_self;
        if (!(dist_abs > 150.0f) && *(int *)(fighter + 29128) != 0 && *(int *)(opponent + 29128) != 0
            && *(int *)(fighter + 29128) == *(int *)(opponent + 29128)) {
            ang_diff = (short)(*(int *)(fighter + 48) + turn - *(int *)(opponent + 48));
            if (ang_diff <= 14563 && ang_diff >= -14563) {
                if (ang_diff > 13653 || ang_diff < -13653)
                    turn = 0;
                else if (ang_diff > 0)
                    turn = 910;
                else
                    turn = -910;
            }
        }
    }
    *(int *)(fighter + 48) = (unsigned short)(*(int *)(fighter + 48) + turn);
}

int FUN_0c0967a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[8];
    register int t2;
    register int t9;
    register int t13;
    register float u14;
    register int t15;
    register float u16;
    register int t17;
    register int t26;
    register float u21;
    register float u24;

    (((struct o14_uchar *)(((int)stk + 0)))->v) = (FUN_0c09ca88(a4, 0x2, a6, a7));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x18);
    FUN_0c02656e(a4, (((int)stk + 0) + 0x18));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x1C);
    t2 = *(signed char *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 16)) = ((t2 - 1) << 2);
    FUN_0c02656e((*(int *)(((((t2 - 1) << 2) + (0x294 + a4)) + 0x0))), (((int)stk + 0) + 0x1C));
    *(float *)(((int)stk + 8)) = (FUN_0c0262f8((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
    t9 = *(int *)(((int)stk + 12));
    *(volatile int *)((((0x294 + a4) + (*(int *)(((int)stk + 16)))) + 0x0));
    *(float *)(((int)stk + 0)) = (FUN_0c0262f8((*(int *)((t9 + 0x0)))));
    t13 = pl_stick_dir_angle(a4);
    u14 = *(float *)(((int)stk + 0));
    t15 = *(int *)0xC7F31E0;
    u16 = *(float *)(((int)stk + 8));
    t17 = FUN_0c0972b2(a4);
    if (t17 != 0) {
        if (((int)(unsigned short)(t15 + t13) >= (int)0x4000) && ((int)(unsigned short)(t15 + t13) <= (int)0xC000)) {
            u21 = (((((struct o28_float *)(a4))->v)) - ((u16 + u14) + 1.0f));
        } else {
            u21 = (((((struct o28_float *)(a4))->v)) + ((u16 + u14) + 1.0f));
        }
        (((struct o28_float *)(a4))->v) = u21;
        t26 = 0x28;
    } else {
        if ((int)(unsigned short)(t15 + t13) < (int)0x8000) {
            u24 = (((((struct o20_float *)(a4))->v)) + ((u16 + u14) + 1.0f));
        } else {
            u24 = (((((struct o20_float *)(a4))->v)) - ((u16 + u14) + 1.0f));
        }
        (((struct o20_float *)(a4))->v) = u24;
        t26 = 0x20;
    }
    return t26;
}

int pl_state26_update(int a4)
{
    int stk[4];
    register int t0;
    register float u23;
    register float u27;
    register int t29;
    register int t32;
    register int t42;
    register int t44;
    register int t52;
    register int t50;

    t0 = pl_button_jump_pressed(a4);
    if (t0 != 0) {
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            (((struct o7248_uint *)(a4))->v) = ((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0));
        } else {
            if ((*(signed char *)((a4 + 0x71EE))) != 0) {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0x4000);
            } else {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0xC000);
            }
        }
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) & 0xFFFF);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u23 = ((((struct o20_float *)(a4))->v));
        u23 = u23 + 50.0f * (math_cos_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x5000)));
        (((struct o20_float *)(a4))->v) = u23;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u27 = ((((struct o28_float *)(a4))->v));
        u27 = u27 + 50.0f * (math_sin_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000)));
        (((struct o28_float *)(a4))->v) = u27;
        t52 = (pl_change_state(a4, 0x5, 0x0, 0x0));
    } else {
        t29 = pl_try_start_basic_attack(a4);
        if ((signed char)t29 != 0) {
            t50 = (pl_change_state(a4, 0xA, 0xC, 0x0));
        } else {
            t32 = *(signed char *)((a4 + 0xA));
            switch (t32) {
            case 0:
                pl_state26_phase0(a4);
                break;
            case 1:
                pl_state26_phase1(a4);
                break;
            case 2:
                pl_state26_phase2(a4, 0x0, 0x0, 0x0);
                break;
            }
            t42 = *(signed char *)((a4 + 0x71BA));
            t50 = t42;
            if (t42 == 26) {
                t44 = FUN_0c0a02d4(a4, (*(float *)0xC096E74));
                t50 = (signed char)t44;
                if ((signed char)t44 != 0) {
                    t50 = (pl_change_state(a4, 0xE, 0x0, 0x0));
                }
            }
        }
        t52 = t50;
    }
    return t52;
}

int pl_state35_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC096DEC))(a4, a5, a6, a7);
    }
    return pl_state35_phase0(a4);
}

int pl_state36_update(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t2;
    register int t4;
    register int t5;
    register int t10;
    register int t12;
    register int t14;
    register int t17;
    register int t18;
    register int t21;
    register int t22;
    register int t25;
    register int t28;
    register int t29;
    register int t34;
    register int t36;
    register int t38;
    register int t41;
    register int t42;
    register int t45;
    register int t46;
    register int t49;
    int t1;
    int t11;
    int t35;

    if (((*(signed char *)0xC7F3051) == 1) && (t1 = *(signed char *)((a4 + 0x71BB)), t1 != 27)) {
        t2 = ((int (*)(int, int, int))(FUN_0c09ff0c))(a4, a5, a6);
        if ((signed char)t2 != 1) {
            return (pl_change_state(a4, 0x1E, 0x0, 0x0));
        }
        t4 = pl_button_jump_pressed(a4);
        if (t4 == 0) {
            t5 = ((int (*)(int))(FUN_0c09ff0c))(a4);
            if ((signed char)t5 == 0) {
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                pl_change_state(a4, 0x5, 0x6, 0x0);
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.00999999978f);
                (((struct o729C_float *)(a4))->v) = 0.0f;
                return 0x729C;
            }
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 1.0f);
            if ((*(signed char *)((a4 + 0xA))) != 0) {
                t10 = pl_check_dual_button_input(a4);
                if (((signed char)t10 != 0) && (t11 = *(signed char *)((a4 + 0x7204)), t11 != 1)) {
                    t12 = pl_is_airborne(a4);
                    if ((signed char)t12 != 0) {
                        return (pl_change_state(a4, 0xA, 0x4, 0x0));
                    }
                    t14 = pl_try_start_move(a4);
                    if (t14 != 0) {
                        return (pl_change_state(a4, 0xA, 0x8, 0x0));
                    }
                    t17 = *(signed char *)((a4 + 0xA));
                    if (t17 != 0) {
                        if (t17 != 1) {
                            if (t17 != 2) {
                                return t17;
                            }
                            return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                        }
                        return pl_state36_phase1(a4);
                    }
                    return pl_state36_phase0(a4);
                }
                t18 = pl_try_start_move(a4);
                if (t18 != 0) {
                    return (pl_change_state(a4, 0xA, 0x8, 0x0));
                }
                t21 = *(signed char *)((a4 + 0xA));
                if (t21 != 0) {
                    if (t21 != 1) {
                        if (t21 != 2) {
                            return t21;
                        }
                        return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                    }
                    return pl_state36_phase1(a4);
                }
                return pl_state36_phase0(a4);
            }
            t22 = pl_try_start_move(a4);
            if (t22 != 0) {
                return (pl_change_state(a4, 0xA, 0x8, 0x0));
            }
            t25 = *(signed char *)((a4 + 0xA));
            if (t25 != 0) {
                if (t25 != 1) {
                    if (t25 != 2) {
                        return t25;
                    }
                    return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                }
                return pl_state36_phase1(a4);
            }
            return pl_state36_phase0(a4);
        }
    } else {
        t28 = pl_button_jump_pressed(a4);
        if (t28 == 0) {
            t29 = ((int (*)(int))(FUN_0c09ff0c))(a4);
            if ((signed char)t29 == 0) {
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                pl_change_state(a4, 0x5, 0x6, 0x0);
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.00999999978f);
                (((struct o729C_float *)(a4))->v) = 0.0f;
                return 0x729C;
            }
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 1.0f);
            if ((*(signed char *)((a4 + 0xA))) != 0) {
                t34 = pl_check_dual_button_input(a4);
                if (((signed char)t34 != 0) && (t35 = *(signed char *)((a4 + 0x7204)), t35 != 1)) {
                    t36 = pl_is_airborne(a4);
                    if ((signed char)t36 != 0) {
                        return (pl_change_state(a4, 0xA, 0x4, 0x0));
                    }
                    t38 = pl_try_start_move(a4);
                    if (t38 != 0) {
                        return (pl_change_state(a4, 0xA, 0x8, 0x0));
                    }
                    t41 = *(signed char *)((a4 + 0xA));
                    if (t41 != 0) {
                        if (t41 != 1) {
                            if (t41 != 2) {
                                return t41;
                            }
                            return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                        }
                        return pl_state36_phase1(a4);
                    }
                    return pl_state36_phase0(a4);
                }
                t42 = pl_try_start_move(a4);
                if (t42 != 0) {
                    return (pl_change_state(a4, 0xA, 0x8, 0x0));
                }
                t45 = *(signed char *)((a4 + 0xA));
                if (t45 != 0) {
                    if (t45 != 1) {
                        if (t45 != 2) {
                            return t45;
                        }
                        return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                    }
                    return pl_state36_phase1(a4);
                }
                return pl_state36_phase0(a4);
            }
            t46 = pl_try_start_move(a4);
            if (t46 != 0) {
                return (pl_change_state(a4, 0xA, 0x8, 0x0));
            }
            t49 = *(signed char *)((a4 + 0xA));
            if (t49 != 0) {
                if (t49 != 1) {
                    if (t49 != 2) {
                        return t49;
                    }
                    return ((int (*)(int, int, int, int))(0xC096F38))(a4, a5, a6, a7);
                }
                return pl_state36_phase1(a4);
            }
            return pl_state36_phase0(a4);
        }
    }
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    pl_change_state(a4, 0x5, 0x6, 0x0);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.00999999978f);
    (((struct o729C_float *)(a4))->v) = 0.0f;
    return 0x729C;
}
