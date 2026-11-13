/* Ayame state11 update (large) and specials (0c07eb60-0c080804) */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_0396bc(int, int);
int fx_spawn_039aa0(int, int);
int FUN_0c039c6c(int, int, int);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int);
int pl_special_a_dispatch(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_motion_translation(int);
int pl_landed(int);
int pl_end_action_choose_state(int, int, int, int, int);
int snd_play_side_se(int, int);
int cam_force_mode(int, int, int);
int cam_request_mode_03(int, int);
int FUN_0c0e6fe8(int);
int thunk_FUN_0c062242(int);

int pl_ayame_special_move_dispatch(int a4)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t8;
    register int t15;
    register int t16;
    register int t19;
    register int t26;
    register int t30;
    register int t42;
    register int t45;
    register int t60;
    register int t66;
    register int t68;
    register int t69;
    register int t82;
    register int t121;
    register int t118;
    register int t139;
    register int t144;
    register int t157;
    register int t162;
    register int t192;
    register int t191;
    register int t210;
    register int t222;
    register int t226;
    register int t250;
    register int t249;
    register int t259;
    register int t268;
    int t3;
    register int t4;
    register int t5;
    int t27;
    register int t28;
    int t40;
    int t61;
    register int t62;
    register int t63;
    register int t116;
    register int t154;
    int t158;
    register int t159;
    register int t160;
    int t223;
    register int t224;
    int t240;

    t0 = *(signed char *)((a4 + 0x7209));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                t1 = *(signed char *)((a4 + 0xA));
                if (t1 != 0) {
                    if (t1 != 1) {
                        return t1;
                    }
                    t2 = (((struct oEE_short *)(a4))->v);
                    if (((int)t2 < (int)0x9) && (t3 = (int)(((unsigned int)t2) >> 31), t4 = (((struct oEC_short *)(a4))->v), t5 = *(signed char *)(((signed char)((t2 << 1) + t2) + 0xC337494)), t4 == (unsigned char)t5)) {
                        t6 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                        t8 = *(signed char *)((a4 + 0xEE));
                        thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(unsigned char)(*(signed char *)(((signed char)((t8 << 1) + t8) + 0xC337495))) * (short)0xB0)));
                        fx_spawn_hit_effect((((int)stk + 20) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x3);
                        t15 = *(signed char *)((a4 + 0x3));
                        t16 = 0x14;
                        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x6) {
                            t16 = 0x3;
                        }
                        snd_play_side_se(((-t15) + 0x1), t16);
                        t19 = *(signed char *)((a4 + 0xEE));
                        obj_set_owner_hit_record(a4, (*(signed char *)(((signed char)((t19 << 1) + t19) + 0xC337496))));
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    }
                    t26 = (((struct oF0_short *)(a4))->v);
                    if (((int)t26 < (int)0x6) && (t27 = (((struct oEC_short *)(a4))->v), t28 = *(int *)((((short)t26 << 2) + 0xC337540)), t27 == t28)) {
                        t30 = *(signed char *)0xC7F3051;
                        cam_request_mode_03((*(signed char *)(((((((struct oF0_short *)(a4))->v)) + (0xC337558 + (signed char)((t30 << 1) + (t30 << 2)))) + 0x0))), (*(signed char *)((a4 + 0x3))));
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                    }
                    if (((int)((((struct oF2_short *)(a4))->v)) < (int)0x7) && (t40 = (((struct oF2_short *)(a4))->v), (int)t40 > 0)) {
                        t42 = *(signed char *)((a4 + 0xF2));
                        if (((((struct oEC_short *)(a4))->v)) == ((*(int *)(((signed char)(((t42 << 1) + t42) << 2) + 0xC3374B0))) - 1)) {
                            t45 = *(signed char *)((a4 + 0x3));
                            *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4);
                            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                            fx_spawn_0396bc(a4, (((int)stk + 20) + 0x8));
                        }
                    }
                    t60 = (((struct oF2_short *)(a4))->v);
                    if (((int)t60 < (int)0x9) && (t61 = (int)(((unsigned int)t60) >> 31), t62 = (((struct oEC_short *)(a4))->v), t63 = *(int *)(((signed char)(((t60 << 1) + t60) << 2) + 0xC3374B0)), t62 == t63)) {
                        *(float *)0xC3375C8 = (*(float *)(((((((struct oF2_short *)(a4))->v)) << 2) + 0xC33751C)));
                        *(int *)((int)stk + 16) = 0xC3375C4;
                        *(int *)((int)stk + 12) = 0xC3375B8;
                        *(int *)((int)stk + 8) = 0x52;
                        t66 = *(signed char *)((a4 + 0xF2));
                        *(unsigned int *)(((int)stk + 24)) = (0xC3374B0 + (signed char)(((t66 << 1) + t66) << 2));
                        t68 = *(int *)(((0xC3374B0 + (signed char)(((t66 << 1) + t66) << 2)) + 0x8));
                        *(int *)((int)stk + 4) = (signed char)t68;
                        *(int *)((int)stk + 0) = 0x16;
                        t69 = *(signed char *)((a4 + 0x3));
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = t69;
                        FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, (*(int *)(((*(int *)(((int)stk + 24))) + 0x4))), ((signed char)((((t69 << 1) + t69) << 2) << 1) + 0xC6002D0), 0x16, (signed char)t68, 0x52, 0xC3375B8, 0xC3375C4);
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xC4) {
                        t82 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 20)) = ((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4);
                        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
                        fx_spawn_039aa0((((int)stk + 20) + 0x8), (*(signed char *)((a4 + 0x3))));
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xC3) {
                        FUN_0c039c6c((a4 + 0x20), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))));
                    }
                    if (((((struct oEC_short *)(a4))->v)) == 0xCD) {
                        FUN_0c039c6c((a4 + 0x20), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))));
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    pl_step_motion(a4);
                    pl_apply_motion_translation(a4);
                    t121 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        FUN_0c0e6fe8(0xC337368);
                        FUN_0c0e6fe8(t116);
                        t118 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        t121 = (cam_force_mode(0x0, (*(signed char *)((a4 + 0x3))), 0x40));
                    }
                    return t121;
                }
                obj_place_linked_ahead(a4, 0x0, 142.0f);
                (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
                pl_start_motion(a4, 0x1, 0x70);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
                    (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                }
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x0;
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x3;
                *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                (((struct oF2_ushort *)(a4))->v) = 0x0;
                return 0xF2;
            }
            t139 = *(signed char *)((a4 + 0xA));
            if (t139 != 0) {
                if (t139 != 1) {
                    if (t139 != 2) {
                        if (t139 != 3) {
                            if (t139 != 4) {
                                return t139;
                            }
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return ((int (*)(int))(pl_end_action_choose_state))(a4);
                            }
                            return 0x71AA;
                        }
                        pl_step_motion(a4);
                        t144 = pl_landed(a4);
                        if ((signed char)t144 != 0) {
                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                            pl_start_motion(a4, 0x1, 0x92);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            return 0x71A8;
                        }
                        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                        return 0x24;
                    }
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    pl_start_motion(a4, 0x4, 0x4);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    FUN_0c0e6fe8(0xC337368);
                    (((struct o3C_float *)(a4))->v) = -7.0f;
                    FUN_0c0e6fe8(t154);
                    (((struct o48_float *)(a4))->v) = -1.0f;
                    return 0x48;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t157 = (((struct oEE_short *)(a4))->v);
                if (((int)t157 < (int)0x6) && (t158 = (((struct oEC_short *)(a4))->v), t159 = (int)(((unsigned int)((short)t157 << 2)) >> 31), t160 = *(int *)(((((short)t157 << 2) << 1) + 0xC33745C)), t158 == t160)) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    t162 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t162) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) << 1) + 0xC337460))) * (short)0xB0)));
                    fx_spawn_hit_effect((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
                    if (((((struct oEE_short *)(a4))->v)) != 0) {
                        if (((((struct oEE_short *)(a4))->v)) == 6) {
                            obj_set_owner_hit_record(a4, 0x34);
                            (((struct oF2_ushort *)(a4))->v) = 0x1;
                        } else {
                            obj_set_owner_hit_record(a4, 0x32);
                        }
                    }
                    snd_play_side_se(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                t192 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t191 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t191 + 0x1);
                    t192 = (t191 + 0x1);
                }
                return t192;
            }
            obj_place_linked_ahead(a4, 0x0, 0.0f);
            (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
            pl_start_motion(a4, 0x4, 0x3);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
                (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            }
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x0;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
            (((struct oEC_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
            (((struct oEE_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
            return 0xEE;
        }
        return pl_special_a_dispatch(a4);
    }
    t210 = *(signed char *)((a4 + 0xA));
    if (t210 != 0) {
        if (t210 != 1) {
            return t210;
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            pl_step_motion_owner((*(int *)((a4 + 0x1C))));
            pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t222 = (((struct oEE_short *)(a4))->v);
        if (((int)t222 < (int)0x4) && (t223 = (((struct oEC_short *)(a4))->v), t224 = *(int *)((((short)t222 << 2) + 0xC337448)), t223 == t224)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            t226 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t226) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            fx_spawn_hit_effect((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
            obj_set_owner_hit_record(a4, 0x31);
            snd_play_side_se(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
        }
        if ((((((struct oEC_short *)(a4))->v)) == (*(int *)0xC337458)) && (t240 = (((struct oF0_short *)(a4))->v), t240 == 0)) {
            (((struct oF0_ushort *)(a4))->v) = 0x1;
            obj_set_owner_hit_record(a4, 0x30);
            obj_force_owner_state27(a4, 0x30);
        }
        t250 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t249 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t250 = 0x71A8;
        }
        return t250;
    }
    pl_start_motion(a4, 0x4, 0x1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
    t259 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t259))->v) = 0x1;
    (((struct o71A8_uchar *)(t259))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    obj_place_linked_ahead(a4, 0x0, 150.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t268 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t268 + 0x1);
    return (t268 + 0x1);
}
