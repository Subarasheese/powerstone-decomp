/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c03b9f0(int, int);
int FUN_0c044408(int, int);
int FUN_0c08e3f2(int, int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3d5c(int, int);
int FUN_0c0a3e64(int, int);
int fx_spawn_03b4d0(int, int, int, int, float);
int fx_spawn_15(int, int);
int fx_spawn_double_ring(int, int);
int fx_spawn_hit_effect(int, int, int, int);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_gravity(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_landed(int);
int pl_no_ground(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int thunk_math_mat_get_translate(int, int);
int FUN_0c08321c(int a4);
int FUN_0c0942dc(int a4);
int FUN_0c089c38(int a4);
int FUN_0c070a06(int a4);

int FUN_0c08321c(int a4)
{
    int stk[9];
    register int t7;
    register int t17;
    register int t62;
    register int t64;
    register int t67;
    int t8;
    register int t9;
    int t50;
    register int t78;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    t7 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t7 - 1);
    if (((short)(t7 - 1) == 0) && (t8 = *(int *)((a4 + 0x1C)), t9 = *(signed char *)((t8 + 0x71F1)), t9 == 0)) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x28) {
        if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x2)) == 0) {
            t17 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t17 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t17 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t17 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
            fx_spawn_03b4d0(a4, (((int)stk + 0) + 0x4), 0xF, 0x0, 0.049999997f);
        }
    }
    if (((((struct oEC_short *)(a4))->v)) == 11) {
        obj_set_owner_hit_record(a4, 0x31);
        FUN_0c08e3f2((*(int *)((a4 + 0x1C))), 0x40);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x2);
    }
    if (((((struct oEC_short *)(a4))->v)) == 41) {
        FUN_0c03b9f0(a4, 0x0);
    }
    if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t50 = (((struct oF0_short *)(a4))->v), t50 == 0)) {
        (((struct oF0_ushort *)(a4))->v) = 0x1;
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t78 = 0x71A8;
    } else {
        t62 = (((struct oEC_short *)(a4))->v);
        t78 = t62;
        if (t62 == 1) {
            t64 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t64 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t64 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t64 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 4);
            t67 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 0)) = t67;
            fx_spawn_hit_effect((((int)stk + 0) + 0x4), ((*(int *)(((int)stk + 0))) + 0x2C), (*(signed char *)((t67 + 0x3))), 0x1);
            t78 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
        }
    }
    return t78;
}

int FUN_0c0942dc(int a4)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t54;
    register int t59;
    register int t72;
    register int t76;
    register int t79;
    register int t95;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_step_motion(a4);
    t2 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t3 = *(signed char *)((a4 + 0x71A4));
    if (((t3 << 8) + (unsigned char)t2) != 20) {
        if (((t3 << 8) + (unsigned char)t2) != 21) {
            if (((t3 << 8) + (unsigned char)t2) != 22) {
                if (((t3 << 8) + (unsigned char)t2) != 23) {
                } else {
                    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
                        FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
                    }
                }
            } else {
                if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
                    FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
                }
            }
        } else {
            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 15) {
                FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
            }
        }
    } else {
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) != 15) {
        } else {
            FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
        }
    }
    t54 = *(signed char *)((a4 + 0xB));
    if (t54 != 0) {
        if (t54 != 1) {
        } else {
            pl_apply_gravity(a4);
            pl_apply_velocity(a4);
            pl_step_motion(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t59 = pl_landed(a4);
                if ((signed char)t59 != 0) {
                    pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                }
            }
        }
    } else {
        t72 = pl_no_ground(a4);
        if (t72 != 0) {
            pl_apply_gravity(a4);
        } else {
            (((struct o3C_float *)(a4))->v) = 0.0f;
        }
        t76 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t76 - 1);
        if ((int)(short)(t76 - 1) > 0) {
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
        } else {
            t79 = pl_no_ground(a4);
            if (t79 != 0) {
                pl_start_motion(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            } else {
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            }
        }
    }
    t95 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t95 == 1) {
        return FUN_0c044408((*(signed char *)((a4 + 0x3))), 0x1);
    }
    return (unsigned short)t95;
}

int FUN_0c089c38(int a4)
{
    int stk[8];
    register int t6;
    register int t13;
    register int t14;
    register int t26;
    register int t48;
    int t7;
    register int t8;
    int t39;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    t6 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
    if (((short)(t6 - 1) == 0) && (t7 = *(int *)((a4 + 0x1C)), t8 = *(signed char *)((t7 + 0x71F1)), t8 == 0)) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t13 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t13 != 3) {
        if ((unsigned short)t13 != 55) {
        } else {
            t14 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 0)) = t14;
            fx_spawn_double_ring((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3))), (t14 + 0x20));
            FUN_0c0a3d5c(((-(*(signed char *)((a4 + 0x3)))) + 0x1), (*(signed char *)((a4 + 0x27C))));
            obj_set_owner_hit_record(a4, 0x34);
        }
    } else {
        t26 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
        fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
    }
    if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t39 = (((struct oEC_short *)(a4))->v), t39 == 0)) {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
    }
    t48 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t48 = 0x71A8;
    }
    return t48;
}

int FUN_0c070a06(int a4)
{
    int stk[5];
    register float u5;
    register int t13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u23;
    register float u25;
    register int t27;
    register int t29;
    register float u32;
    register float t33;
    register int t34;
    register int t36;
    register int t42;
    register int t46;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    u5 = 10.0f;
    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
    } else {
        u5 = ((((struct o0_float *)0xC070B64)->v));
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (((((struct o38_float *)(a4))->v)) / u5));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - (((((struct o3C_float *)(a4))->v)) / u5));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - (((((struct o40_float *)(a4))->v)) / u5));
    t13 = *(int *)((a4 + 0x1C));
    u14 = (((struct o20_float *)(a4))->v);
    u15 = (((struct o20_float *)(t13))->v);
    u16 = (((struct o24_float *)(t13))->v);
    u17 = (((struct o24_float *)(a4))->v);
    u18 = (((struct o28_float *)(t13))->v);
    u19 = (((struct o28_float *)(a4))->v);
    u20 = (((struct o4_float *)0xC070B64)->v);
    u21 = (u15 - u14);
    if ((u15 - u14) == 0.0f) {
        u21 = u20;
    }
    u23 = (u16 - u17);
    if ((u16 - u17) == 0.0f) {
        u23 = u20;
    }
    u25 = (u18 - u19);
    if ((u18 - u19) == 0.0f) {
        u25 = u20;
    }
    t27 = math_atan_angle16(((-u25) / u21));
    t29 = t27;
    if (0.0f > u21) {
        t29 = (t27 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t29 + 0x4000);
    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
        u32 = (u25 * u25);
        u32 = u32 + u21 * u21;
        t33 = math_signed_sqrt(u32);
        t34 = math_atan_angle16(((-t33) / u23));
        t36 = t34;
        if (0.0f > u23) {
            t36 = (t34 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t36 + 0x4000));
    }
    t42 = pl_step_motion(a4);
    if ((signed char)t42 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t46 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t46 + 0x1);
    if ((short)(t46 + 0x1) == 29) {
        return fx_spawn_15(a4, 0x2);
    }
    return (short)(t46 + 0x1);
}
