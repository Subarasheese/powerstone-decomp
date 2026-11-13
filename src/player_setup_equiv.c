/* player object setup: list search, tint, scale, spawn positions, model nodes (0c098c48-0c099c08) */

struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
int res_pl_textures_release_all(void);
struct o2DB_uchar { char p[0x2DB]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02f328(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_mash_reduce_counter(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_change_state(int, int, int, int);
struct o107_uchar { char p[0x107]; unsigned char v; };
int FUN_0c0d8fe8(int, int);
struct o54_float { char p[0x54]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
int cam_set_shake_ramp(int, int);
int res_load_pl_models(int);
int res_load_pl_motion_data(int, int);
int FUN_0c062cf4(int, int);
extern void pl_timer_arm_forever(unsigned char *);
extern void sys_nop_099a84(unsigned char *);
extern void pl_set_spawn_position(unsigned char *);
extern void pl_reset_pose(unsigned char *);
extern void pl_load_gravity(unsigned char *);
extern void FUN_0c0624ea(unsigned char *, int, int);
extern void pl_reset_model_parts(unsigned char *);
extern void pl_reset_for_new_round(unsigned char *);
struct Vec12i { int x, y, z; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o4_float { char p[0x4]; float v; };

int FUN_0c098c48(int a4);

int FUN_0c098c48(int a4)
{
    register int t0;
    int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) != 0) && (t6 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t7 = *(signed char *)((t6 + 0x4)), t7 == 14)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}

int sys_return_zero_098c82(void)
{
    return 0x0;
}

int FUN_0c098c86(int a4)
{
    register int t0;

    t0 = FUN_0c098c48(a4);
    if (t0 != 0) {
        (((struct o2DB_uchar *)(t0))->v) = 0x1;
        if ((*(signed char *)((t0 + 0x30E))) == 38) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x4;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 1) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x1;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 2) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x2;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) == 3) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x3;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        if ((*(signed char *)((t0 + 0x30E))) != 0) {
            (((struct o71DD_uchar *)(a4))->v) = 0xC;
            *(unsigned char *)((a4 + 0xB)) = 0x4;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c098d1e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return pl_change_state(a4, 0xF, 0x1, a7);
            }
            if (((((struct oF2_short *)(a4))->v)) != 0) {
                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
            }
            if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                pl_step_motion(a4);
                pl_mash_reduce_counter(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x3;
            return 0x3;
        }
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = pl_landed(a4);
            if ((signed char)t0 == 0) {
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                pl_mash_reduce_counter(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x2;
            pl_start_motion(a4, 0x2, 0x91);
            (((struct oF2_ushort *)(a4))->v) = 0xF0;
            return 0xF2;
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        pl_mash_reduce_counter(a4, (0xF0 + a4));
        return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    }
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    pl_start_motion(a4, 0x2, 0x98);
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = (*(float *)0xC098E44);
    (((struct oF0_ushort *)(a4))->v) = 0x28;
    return 0xF0;
}

int FUN_0c098e0a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            (((struct o107_uchar *)(a4))->v) = 0x0;
                            return pl_change_state(a4, 0xF, 0x1, a7);
                        }
                        return t0;
                    }
                    (((struct o107_uchar *)(a4))->v) = 0x0;
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t0 = pl_landed(a4);
                        if ((signed char)t0 == 0) {
                            pl_step_motion(a4);
                            pl_apply_velocity(a4);
                            pl_apply_acceleration(a4);
                            pl_mash_reduce_counter(a4, (0xF0 + a4));
                            return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                        }
                        *(unsigned char *)((a4 + 0xC)) = 0x5;
                        return 0x5;
                    }
                    pl_step_motion(a4);
                    pl_apply_velocity(a4);
                    pl_apply_acceleration(a4);
                    pl_mash_reduce_counter(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                (((struct o107_uchar *)(a4))->v) = 0x1;
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    pl_step_motion(a4);
                    pl_apply_velocity(a4);
                    pl_mash_reduce_counter(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                *(unsigned char *)((a4 + 0xC)) = 0x4;
                (((struct o3C_float *)(a4))->v) = -0.099999994f;
                (((struct o40_float *)(a4))->v) = 20.0f;
                (((struct o48_float *)(a4))->v) = -1.08799994f;
                return 0x48;
            }
            (((struct o107_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = 0x3;
                pl_start_motion(a4, 0x2, 0x91);
                (((struct o40_float *)(a4))->v) = 20.0f;
                (((struct oF2_ushort *)(a4))->v) = 0x14;
                return 0xF2;
            }
        } else {
            (((struct o107_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = 0x2;
                (((struct oF2_ushort *)(a4))->v) = 0x14;
                return 0xF2;
            }
            pl_step_motion(a4);
            pl_apply_velocity(a4);
        }
        pl_mash_reduce_counter(a4, (0xF0 + a4));
        return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    }
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    FUN_0c0d8fe8((*(signed char *)((a4 + 0x3))), 0x3);
    pl_start_motion(a4, 0x2, 0x98);
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = -20.0f;
    (((struct oF0_ushort *)(a4))->v) = 0x14;
    (((struct oF2_ushort *)(a4))->v) = 0x14;
    return 0xF2;
}

int FUN_0c098fbe(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        return pl_change_state(a4, 0xF, 0x1, a7);
                    }
                    return t1;
                }
                if (((((struct oF2_short *)(a4))->v)) != 0) {
                    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                }
                if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                    pl_mash_reduce_counter(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                *(unsigned char *)((a4 + 0xC)) = 0x4;
                (((struct o54_float *)(a4))->v) = 1.0f;
                return 0x54;
            }
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                pl_step_motion(a4);
                pl_mash_reduce_counter(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x3;
            (((struct o54_float *)(a4))->v) = 0.099999994f;
            (((struct oF2_ushort *)(a4))->v) = 0x78;
            return 0xF2;
        }
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = pl_landed(a4);
            if ((signed char)t0 == 0) {
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                pl_mash_reduce_counter(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x2;
            pl_start_motion(a4, 0x2, 0x91);
            (((struct oF2_ushort *)(a4))->v) = 0x3C;
            return 0xF2;
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        pl_mash_reduce_counter(a4, (0xF0 + a4));
        return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    }
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    pl_start_motion(a4, 0x2, 0x98);
    (((struct o38_float *)(a4))->v) = 10.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -2.17599988f;
    (((struct oF0_ushort *)(a4))->v) = 0x28;
    return 0xF0;
}

int FUN_0c0990fc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    if (((((struct oF2_short *)(a4))->v)) != 0) {
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                    }
                    if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                        pl_step_motion(a4);
                        pl_mash_reduce_counter(a4, (0xF0 + a4));
                        t0 = (FUN_0c02f328((*(signed char *)((a4 + 0x3)))));
                    } else {
                        (((struct o50_float *)(a4))->v) = 1.29999995f;
                        (((struct o54_float *)(a4))->v) = 0.099999994f;
                        (((struct o58_float *)(a4))->v) = 1.29999995f;
                        (((struct oF2_ushort *)(a4))->v) = 0x78;
                        *(unsigned char *)((a4 + 0xC)) = 0x4;
                        t0 = 0x4;
                    }
                    return t0;
                }
                if (t1 == 4) {
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x3;
                        *(unsigned char *)((a4 + 0xC)) = 0x5;
                        t2 = 0x5;
                    }
                    return t2;
                }
                if (t1 == 5) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
                    (((struct o54_float *)(a4))->v) = 0.099999994f;
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x5;
                        *(unsigned char *)((a4 + 0xC)) = 0x6;
                        t2 = 0x6;
                    }
                    return t2;
                }
                if (t1 == 6) {
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.299999982f);
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x3;
                        *(unsigned char *)((a4 + 0xC)) = 0x7;
                        t2 = 0x7;
                    }
                    return t2;
                }
                if (t1 == 7) {
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.199999988f);
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0xC)) = 0x8;
                        t2 = 0x8;
                    }
                    return t2;
                }
                if (t1 == 8) {
                    return pl_change_state(a4, 0xF, 0x1, a7);
                }
                return t1;
            }
            pl_step_motion(a4);
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
            pl_mash_reduce_counter(a4, (0xF0 + a4));
            FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            t0 = pl_landed(a4);
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
            } else {
                (((struct oF2_ushort *)(a4))->v) = 0x3C;
                *(unsigned char *)((a4 + 0xC)) = 0x3;
                t1 = 0x3;
            }
            return t1;
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        pl_mash_reduce_counter(a4, (0xF0 + a4));
        FUN_0c02f328((*(signed char *)((a4 + 0x3))));
        t0 = 0x3C;
        if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
        } else {
            *(unsigned char *)((a4 + 0xC)) = 0x2;
            t0 = 0x2;
        }
        return t0;
    }
    cam_set_shake_ramp(0xA, 0xA);
    pl_start_motion(a4, 0x2, 0xAB);
    (((struct o38_float *)(a4))->v) = (-(((((struct o38_float *)(a4))->v)) / 4.0f));
    (((struct o3C_float *)(a4))->v) = 20.0f;
    (((struct o40_float *)(a4))->v) = (-(((((struct o40_float *)(a4))->v)) / 4.0f));
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -1.08799994f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct oF0_ushort *)(a4))->v) = 0x12;
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    return 0x1;
}

int pl_hitreact_12_update(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC339360 + ((*(signed char *)((a4 + 0xB))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int thunk_FUN_0c05fff4(void)
{
    return res_pl_textures_release_all();
}

int FUN_0c09939c(void)
{
    res_load_pl_models(0x0);
    res_load_pl_models(0x1);
    res_load_pl_motion_data(0x0, (*(signed char *)0xC7E40C8));
    res_load_pl_motion_data(0x1, (*(signed char *)0xC7EB398));
    FUN_0c062cf4(0x0, (*(signed char *)0xC7E40C8));
    return FUN_0c062cf4(0x1, (*(signed char *)0xC7EB398));
}

void pl_init_player_record(char player_idx)
{
    int idx = player_idx;
    unsigned char *players = (unsigned char *)0xC7E40C4;
    unsigned char *player = players + (unsigned short)(idx * 0x72D0);
    unsigned char *opponent;
    unsigned char mode;
    int table_ptr;

    *(unsigned char **)(player + 28) = players + (unsigned short)((1 - (idx & 1)) * 0x72D0);
    mode = *(unsigned char *)0xC7F3071;
    if (mode == 0) {
        player[0x71ED] = 1;
        player[0x71EC] = 1;
        opponent = *(unsigned char **)(player + 28);
        if ((signed char)player[4] == (signed char)opponent[4] && opponent[0x71EC] == player[0x71EC])
            player[0x71EC] = (player[0x71EC] == 1) ? 2 : 1;
    } else if (mode == 3) {
        player[0x71ED] = 0;
    } else if (idx == mode - 1) {
        player[0x71ED] = 0;
    } else {
        player[0x71EC] = 1;
        opponent = *(unsigned char **)(player + 28);
        if ((signed char)player[4] == (signed char)opponent[4] && opponent[0x71EC] == player[0x71EC])
            player[0x71EC] = (player[0x71EC] == 1) ? 2 : 1;
        player[0x71ED] = 1;
    }
    player[0] = 1;
    player[1] = 1;
    *(short *)(player + 6) = 0;
    player[5] = (player[3] == 0) ? 26 : 28;
    player[3] = player_idx;
    player[13] = 0;
    player[12] = 0;
    player[11] = 0;
    player[10] = 0;
    player[9] = 0;
    player[8] = 0;
    player[0x71F1] = 0;
    player[0x7226] = 0;
    *(short *)(player + 0x7228) = 0;
    pl_timer_arm_forever(player);
    player[0x2DA] = 1;
    player[0x7236] = 0;
    sys_nop_099a84(player);
    pl_set_spawn_position(player);
    pl_reset_pose(player);
    pl_load_gravity(player);
    table_ptr = (short)((signed char)player[4] * 288) + 0xC34BBA0 + (short)(144 * (1 - (player[0x71EC] & 1)));
    FUN_0c0624ea(player, table_ptr, table_ptr + 72);
    pl_reset_model_parts(player);
    pl_reset_for_new_round(player);
}

/* Calls fn on every slot of the object's per-layer arrays (176-byte entries; layer counts 20, 30, 10, 10, 10) for layers first..last. */
void pl_for_each_part_slot(char *player, signed char first, signed char last, int fn)
{
    signed char loc[3];     /* [0] slot counter, [1] layer, [2] slot count of the layer */
    char *slot;
    int row, offs_a, offs_b, offs_c;

    row = (signed char)player[0x71F1];
    offs_a = (short)(row * 0xDC0);
    offs_b = (short)(row * 0x14A0);
    offs_c = (short)(row * 0x6E0);
    for (loc[1] = first; loc[1] <= last; loc[1]++) {
        switch (loc[1]) {
        case 0:
            slot = player + 0x300 + offs_a;
            loc[2] = 20;
            break;
        case 1:
            slot = player + 0x1E80 + offs_b;
            loc[2] = 30;
            break;
        case 2:
            slot = player + 0x47C0 + offs_c;
            loc[2] = 10;
            break;
        case 3:
            slot = player + 0x5580 + offs_c;
            loc[2] = 10;
            break;
        case 4:
            slot = player + 0x6340 + offs_c;
            loc[2] = 10;
            break;
        }
        for (loc[0] = 0; loc[0] < loc[2]; loc[0]++) {
            ((void (*)(char *, int, signed char *, int))fn)(slot, first, loc, fn);
            slot += 0xB0;
        }
    }
}

int obj_node_scale_one(int a4)
{
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o6C_float *)(a4))->v) = 1.0f;
    return 0x6C;
}

void pl_part_copy_pose_vectors(unsigned char *obj)
{
    obj[66] = obj[68];
    obj[67] = obj[69];
    *(struct Vec12i *)(obj + 152) = *(struct Vec12i *)(obj + 164);
    *(struct Vec12i *)(obj + 84) = *(struct Vec12i *)(obj + 96);
}

int pl_clear_tint_flag(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x6));
    *(unsigned short *)((a4 + 0x6)) = (t0 & 0xFDFF);
    return (t0 & 0xFDFF);
}

int FUN_0c099a92(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = 0.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    return 0x68;
}

int FUN_0c099ac6(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = (*(float *)0xC099B54);
    (((struct o68_float *)(a4))->v) = 0.0f;
    return 0x68;
}

int FUN_0c099ae4(int a4)
{
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o64_float *)(a4))->v) = 1.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    return 0x68;
}

int FUN_0c099afe(int a4)
{
    register int t1;

    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    t1 = *(int *)0xC7F307C;
    (((struct o60_float *)(a4))->v) = (*(float *)((((signed char)(((((unsigned int)(t1 & 0x6) >> 1) << 1) + ((unsigned int)(t1 & 0x6) >> 1)) << 2) + 0xC150ADC) + 0x0)));
    (((struct o64_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((((unsigned int)(t1 & 0x6) >> 1) << 1) + ((unsigned int)(t1 & 0x6) >> 1)) << 2) + 0xC150ADC)))->v));
    (((struct o68_float *)(a4))->v) = ((((struct o4_float *)((((signed char)(((((unsigned int)(t1 & 0x6) >> 1) << 1) + ((unsigned int)(t1 & 0x6) >> 1)) << 2) + 0xC150ADC) + 0x4)))->v));
    return 0x68;
}
