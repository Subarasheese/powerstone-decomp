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
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
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
extern int pl_end_action_choose_state();
int snd_play_side_se(int, int);
int cam_force_mode(int, int, int);
int cam_request_mode_03(int, int);
int _quick_odd_mvn(int);
int thunk_math_mat_get_translate(int, int);

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
    register int t118;
    register int t115;
    register int t136;
    register int t141;
    register int t151;
    register int t156;
    register int t186;
    register int t185;
    register int t204;
    register int t216;
    register int t220;
    register int t244;
    register int t243;
    register int t253;
    register int t262;
    int t3;
    register int t4;
    register int t5;
    int t27;
    register int t28;
    int t40;
    int t61;
    register int t62;
    register int t63;
    int t152;
    register int t153;
    register int t154;
    int t217;
    register int t218;
    int t234;

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
                        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t6) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(unsigned char)(*(signed char *)(((signed char)((t8 << 1) + t8) + 0xC337495))) * (short)0xB0)), (((int)stk + 20) + 0x8));
                        fx_spawn_hit_effect((((int)stk + 20) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x3, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
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
                            thunk_math_mat_get_translate(((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t45 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((int)stk + 20) + 0x8));
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
                        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t82 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (((int)stk + 20) + 0x8));
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
                    t118 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC337368); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC337368); }
                        t115 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        t118 = (cam_force_mode(0x0, (*(signed char *)((a4 + 0x3))), 0x40));
                    }
                    return t118;
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
            t136 = *(signed char *)((a4 + 0xA));
            if (t136 != 0) {
                if (t136 != 1) {
                    if (t136 != 2) {
                        if (t136 != 3) {
                            if (t136 != 4) {
                                return t136;
                            }
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return ((int (*)(int))(pl_end_action_choose_state))(a4);
                            }
                            return 0x71AA;
                        }
                        pl_step_motion(a4);
                        t141 = pl_landed(a4);
                        if ((signed char)t141 != 0) {
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
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC337368); }
                    (((struct o3C_float *)(a4))->v) = -7.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC337368); }
                    (((struct o48_float *)(a4))->v) = -1.0f;
                    return 0x48;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                t151 = (((struct oEE_short *)(a4))->v);
                if (((int)t151 < (int)0x6) && (t152 = (((struct oEC_short *)(a4))->v), t153 = (int)(((unsigned int)((short)t151 << 2)) >> 31), t154 = *(int *)(((((short)t151 << 2) << 1) + 0xC33745C)), t152 == t154)) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    t156 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t156) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)((-t156) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t156) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) << 1) + 0xC337460))) * (short)0xB0)), (((int)stk + 32) + 0x4));
                    fx_spawn_hit_effect((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
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
                t186 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t185 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t185 + 0x1);
                    t186 = (t185 + 0x1);
                }
                return t186;
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
    t204 = *(signed char *)((a4 + 0xA));
    if (t204 != 0) {
        if (t204 != 1) {
            return t204;
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            pl_step_motion_owner((*(int *)((a4 + 0x1C))));
            pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t216 = (((struct oEE_short *)(a4))->v);
        if (((int)t216 < (int)0x4) && (t217 = (((struct oEC_short *)(a4))->v), t218 = *(int *)((((short)t216 << 2) + 0xC337448)), t217 == t218)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            t220 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 32)) = ((unsigned short)((unsigned short)((-t220) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_math_mat_get_translate(((((unsigned short)((unsigned short)((-t220) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t220) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((int)stk + 32) + 0x4));
            fx_spawn_hit_effect((((int)stk + 32) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
            obj_set_owner_hit_record(a4, 0x31);
            snd_play_side_se(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
        }
        if ((((((struct oEC_short *)(a4))->v)) == (*(int *)0xC337458)) && (t234 = (((struct oF0_short *)(a4))->v), t234 == 0)) {
            (((struct oF0_ushort *)(a4))->v) = 0x1;
            obj_set_owner_hit_record(a4, 0x30);
            obj_force_owner_state27(a4, 0x30);
        }
        t244 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t243 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(pl_end_action_choose_state))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t244 = 0x71A8;
        }
        return t244;
    }
    pl_start_motion(a4, 0x4, 0x1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
    t253 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t253))->v) = 0x1;
    (((struct o71A8_uchar *)(t253))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    obj_place_linked_ahead(a4, 0x0, 150.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t262 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t262 + 0x1);
    return (t262 + 0x1);
}
