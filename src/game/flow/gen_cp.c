/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42_uchar { char p[0x42]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c08e382(int);
int FUN_0c08e5b4(int);
int FUN_0c09c45a(int);
int FUN_0c0a3f30(int);
int bgm_play_continue(void);
int bgm_set_volume(int, int);
int cam_force_mode_10(int, int);
int cam_request_mode_04(int, int);
int cam_set_priority(int, int);
int cam_set_shake_ramp(int, int);
int fx_spawn_042514(int, int);
int fx_spawn_057da8(void);
int fx_spawn_0581b4(void);
int fx_spawn_hit_effect(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_choose_state(int);
int pl_landed(int);
int pl_ryoma_mode01_03_update_v0(int);
int pl_ryoma_mode01_03_update_v1(int);
int pl_set_power_form_off(int);
int pl_start_knockback_reaction(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int thunk_math_mat_get_translate(int, int);
int ui_disable_hud(void);
int FUN_0c054e46(void);
int FUN_0c0551b4(void);
int FUN_0c079b5c(int a4);
int FUN_0c08fea8(int a4);
int FUN_0c0922a4(int a4);
int FUN_0c090404(int a4);
int FUN_0c0911ce(int a4);
int FUN_0c08ffa0(int a4);
int FUN_0c0901d0(int a4);
int FUN_0c0921fa(int a4);
int FUN_0c090030(int a4);
int FUN_0c090260(int a4);
int FUN_0c090374(int a4);
int FUN_0c0904a4(int a4);
int FUN_0c09014c(int a4);
int FUN_0c091184(int a4);
int FUN_0c090104(int a4);
int FUN_0c06e984(int a4, int a5, int a6, int a7);
int FUN_0c09033c(int a4);
int FUN_0c082012(int a4, int a5, int a6, int a7);
int FUN_0c082466(int a4, int a5, int a6, int a7);
int FUN_0c082a18(int a4, int a5, int a6, int a7);
int FUN_0c082e5a(int a4, int a5, int a6, int a7);
int FUN_0c082b42(int a4, int a5, int a6, int a7);
int FUN_0c06a680(int a4);
int FUN_0c082574(int a4, int a5, int a6, int a7);
int FUN_0c079af4(int a4);

int FUN_0c054e46(void)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o1_uchar *)0xC7F306E)->v) = 0x0;
    *(unsigned char *)0xC7F2E3E = 0x0;
    *(unsigned char *)0xC7F2EB6 = 0x0;
    ui_disable_hud();
    v0_0 = (0x0);
    v0_1 = (0xC7F302C);
    v0_2 = (0xC7F2EE0);
    if (((*(signed char *)0xC7F2F0D) == 0)) goto L_C054EAC;
    bgm_play_continue();
    bgm_set_volume(0x0, 0x7F);
    FUN_0c0a3f30(0x1C);
    fx_spawn_057da8();
    fx_spawn_0581b4();
    L_C054EB8:;
    if (((*(signed char *)((v0_2 + 0x36))) == 0)) goto L_C054ED4;
    *(unsigned char *)((v0_1 + 0x0)) = 0x8;
    *(unsigned char *)((v0_1 + 0x1)) = v0_0;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    (((struct o42_uchar *)(v0_1))->v) = 0x1;
    v0_4 = (0x42);
    L_C055182:;
    return v0_4;
    L_C054ED4:;
    v0_5 = *(signed char *)((v0_1 + 0x47));
    v0_4 = ((unsigned char)v0_5);
    v0_3 = (0xC0A2E26);
    v0_3 = (0xC7E40C4);
    R4 = (0xC7E40C4);
    R5 = (v0_5);
    R6 = (0xC345DF4);
    R7 = (0xC345EE4);
    w0_0 = (-400.0f);
    if (((unsigned char)v0_5 == 0)) goto L_C054F58;
    if (!((v0_4 != 1))) goto L_C055004;
    if ((v0_4 != 2)) goto L_C054EFC;
    goto L_C055004;
    L_C055004:;
    *(unsigned char *)(((R4 + (unsigned short)((unsigned short)((-(unsigned char)R5) + 0x2) * (unsigned short)0x72D0)) + 0x1)) = v0_0;
    *(unsigned char *)((((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + 0xFFFF) * (unsigned short)0x72D0) + v0_3) + 0x1)) = 0x1;
    v0_4 = *(signed char *)((v0_1 + 0x25));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + 0xFFFF) * (unsigned short)0x72D0) + v0_3) + 0x20)) = *(struct mv3 *)(((((v0_4 << 1) + v0_4) << 2) + R6)); }
    v0_4 = *(signed char *)(((0x25 + v0_1) + 0x0));
    *(unsigned int *)((((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + 0xFFFF) * (unsigned short)0x72D0) + v0_3) + 0x30)) = (*(int *)(((R7 + (v0_4 << 2)) + 0x0)));
    v0_5 = *(signed char *)((v0_1 + 0x47));
    w0_1 = (((struct o20_float *)(((unsigned short)((unsigned short)((unsigned char)v0_5 + 0xFFFF) * (unsigned short)0x72D0) + v0_3)))->v);
    (((struct o20_float *)(((unsigned short)((unsigned short)((-(unsigned char)v0_5) + 0x2) * (unsigned short)0x72D0) + v0_3)))->v) = (w0_1 + w0_0);
    v0_5 = *(signed char *)((v0_1 + 0x47));
    w0_1 = (((struct o28_float *)(((unsigned short)((unsigned short)((unsigned char)v0_5 + 0xFFFF) * (unsigned short)0x72D0) + v0_3)))->v);
    (((struct o28_float *)(((unsigned short)((unsigned short)((-(unsigned char)v0_5) + 0x2) * (unsigned short)0x72D0) + v0_3)))->v) = (w0_1 + w0_0);
    v0_5 = (0xFFFF);
    v0_6 = (0x72D0);
    R7 = ((R7 + (v0_4 << 2)));
    if (((*(signed char *)((((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + 0xFFFF) * (unsigned short)0x72D0) + v0_3) + 0x71F3))) == 0)) goto L_C055104;
    pl_set_power_form_off(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + v0_5) * (unsigned short)v0_6) + v0_3));
    (((struct o7230_uchar *)(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + v0_5) * (unsigned short)0x72D0) + v0_3)))->v) = v0_0;
    L_C055104:;
    pl_change_state(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)((v0_1 + 0x47))) + v0_5) * (unsigned short)0x72D0) + v0_3), 0x15, 0x2, R7);
    pl_change_state(((unsigned short)((unsigned short)((-(unsigned char)(*(signed char *)((v0_1 + 0x47)))) + 0x2) * (unsigned short)0x72D0) + v0_3), 0x8, 0x0, 0x0);
    if (((*(signed char *)((v0_2 + 0x2D))) == 0)) goto L_C05515C;
    *(volatile signed char *)((v0_1 + 0x47));
    L_C055144:;
    return cam_force_mode_10(0xA, R5);
    L_C05515C:;
    cam_set_priority(0x0, 0x40);
    return cam_request_mode_04(0x7, ((*(signed char *)((v0_1 + 0x47))) - 1));
    L_C054EFC:;
    if ((v0_4 == 3)) goto L_C054F58;
    goto L_C055182;
    L_C054F58:;
    *(unsigned char *)(((0x72D0 + R4) + 0x1)) = v0_0;
    v0_4 = *(signed char *)((v0_1 + 0x25));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x20)) = *(struct mv3 *)(((((v0_4 << 1) + v0_4) << 2) + R6)); }
    *(unsigned int *)((v0_3 + 0x30)) = (*(int *)((R7 + ((*(signed char *)((v0_1 + 0x25))) << 2))));
    (((struct o20_float *)((0x72D0 + R4)))->v) = (((((struct o20_float *)(v0_3))->v)) + w0_0);
    (((struct o28_float *)((0x72D0 + R4)))->v) = (((((struct o28_float *)(v0_3))->v)) + w0_0);
    R4 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x71F3))) == 0)) goto L_C054FAC;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    pl_set_power_form_off(v0_3);
    (((struct o7230_uchar *)((*(int *)(((int)stk + 0)))))->v) = v0_0;
    L_C054FAC:;
    pl_change_state(v0_3, 0x15, 0x2, R7);
    pl_change_state((0x72D0 + v0_3), 0x8, 0x0, 0x0);
    if (((*(signed char *)((v0_2 + 0x2D))) == 0)) goto L_C054FCA;
    goto L_C055144;
    L_C054FCA:;
    cam_set_priority(0x0, 0x40);
    return cam_request_mode_04(0x7, 0x0);
    L_C054EAC:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x8;
    *(unsigned char *)((v0_1 + 0x1)) = v0_0;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    goto L_C054EB8;
}

int FUN_0c0551b4(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC7F2E3A) == (*(signed char *)0xC7F2EB2)) {
        if ((int)(*(signed char *)0xC7F2E3B) < (int)(*(signed char *)0xC7F2EB3)) {
            (((struct o0_uchar *)0xC7F306C)->v) = (*(signed char *)0xC7F2EB2);
            t0 = 0xC7F2E68;
        } else {
            (((struct o0_uchar *)0xC7F306C)->v) = (*(signed char *)0xC7F2E3A);
            t0 = 0xC7F2DF0;
        }
        (((struct o1_uchar *)0xC7F306C)->v) = (*(signed char *)((t0 + 0x4B)));
    } else {
        if ((int)(*(signed char *)0xC7F2E3A) < (int)(*(signed char *)0xC7F2EB2)) {
            (((struct o0_uchar *)0xC7F306C)->v) = (*(signed char *)0xC7F2EB2);
            t0 = 0xC7F2E68;
        } else {
            (((struct o0_uchar *)0xC7F306C)->v) = (*(signed char *)0xC7F2E3A);
            t0 = 0xC7F2DF0;
        }
        (((struct o1_uchar *)0xC7F306C)->v) = (*(signed char *)((t0 + 0x4B)));
    }
    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        t1 = t0;
    } else {
        t2 = t0;
        if ((int)(*(signed char *)0xC7F306C) <= (int)0x8) {
            (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
            t0 = *(signed char *)0xC7F3073;
            if ((unsigned char)t0 != 0) {
                if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
                    t2 = (unsigned char)t0;
                    if ((unsigned char)t0 != 3) {
                    } else {
                        t2 = (snd_play_char_voice(0xC7E40C4, 0x15));
                    }
                    t0 = t2;
                } else {
                    t0 = (snd_play_char_voice(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)0xC7F3073) + 0xFFFF) * (unsigned short)0x72D0) + 0xC7E40C4), 0x15));
                }
                t2 = t0;
            } else {
                t2 = (snd_play_char_voice(0xC7E40C4, 0x15));
            }
        }
        t1 = t2;
    }
    t0 = t1;
    if ((int)(*(signed char *)0xC7F306C) <= 0) {
        t1 = *(signed char *)0xC7F306D;
        t2 = t1;
        if ((int)t1 <= 0) {
            (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
            (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c079b5c(int a4)
{
    int stk[7];
    register int t0;
    register int t3;
    register int t21;
    register int t23;
    register int t33;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            t33 = t0;
            if (t0 != 2) {
            } else {
                cam_set_shake_ramp(0xA, 0xA);
                FUN_0c09c45a(a4);
                t3 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), (int)stk + 4);
                fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x3);
                snd_play_char_voice(a4, 0xC);
                obj_set_owner_hit_record((*(int *)((a4 + 0x1C))), 0x32);
                t33 = (obj_force_owner_state27((*(int *)((a4 + 0x1C))), 0x32));
            }
        } else {
            pl_step_motion_owner(a4);
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
            t21 = pl_landed(a4);
            t33 = (signed char)t21;
            if ((signed char)t21 != 0) {
                pl_start_motion_owner(a4, 0x2, 0xFFFFFF83);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t23 = *(signed char *)((a4 + 0xC));
                *(unsigned char *)((a4 + 0xC)) = (t23 + 0x1);
                t33 = (t23 + 0x1);
            }
        }
    } else {
        pl_step_motion_owner(a4);
        t33 = (pl_apply_motion_translation(a4));
    }
    return t33;
}

int FUN_0c08fea8(int a4)
{
    register int t0;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    t0 = *(signed char *)((a4 + 0x3));
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), a4 + 0x20);
    FUN_0c08e5b4(a4);
    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t0 = *(signed char *)((a4 + 0x7205));
                if (t0 != 0) {
                    if (t0 != 1) {
                        if ((t0 == 2) || (t0 == 3)) {
                            pl_start_motion(a4, 0x2, 0xAD);
                            (((struct o3C_float *)(a4))->v) = 15.0f;
                        }
                    } else {
                        pl_start_motion(a4, 0x2, 0xAB);
                        (((struct o3C_float *)(a4))->v) = 15.0f;
                    }
                } else {
                    pl_start_motion(a4, 0x2, 0xAD);
                    (((struct o3C_float *)(a4))->v) = 15.0f;
                }
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
            } else {
                pl_start_motion(a4, 0x2, 0xAB);
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
            }
        } else {
            pl_start_motion(a4, 0x2, 0xAD);
            (((struct o3C_float *)(a4))->v) = 15.0f;
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x7205));
        if (t0 != 0) {
            if (t0 != 1) {
                if ((t0 == 2) || (t0 == 3)) {
                    pl_start_motion(a4, 0x2, 0xAD);
                    (((struct o3C_float *)(a4))->v) = 15.0f;
                }
            } else {
                pl_start_motion(a4, 0x2, 0xAB);
                (((struct o3C_float *)(a4))->v) = 15.0f;
            }
        } else {
            pl_start_motion(a4, 0x2, 0xAD);
            (((struct o3C_float *)(a4))->v) = 15.0f;
        }
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    return 0x71BC;
}

int FUN_0c0922a4(int a4)
{
    register int t12;
    register int t15;
    register float u16;

    if (((((struct oEC_short *)(a4))->v)) == 0) {
        FUN_0c09c45a(a4);
        FUN_0c08e382(a4);
        if ((*(signed char *)((a4 + 0x27C))) != 2) {
            fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    }
    t12 = pl_start_knockback_reaction(a4);
    if ((signed char)t12 == 0) {
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t15 = pl_landed(a4);
            if ((signed char)t15 != 0) {
                u16 = (((struct o0_float *)0xC0923CC)->v);
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * u16);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * u16);
                (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC0923CC)->v));
                (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC0923CC)->v));
                pl_start_motion(a4, 0x2, 0x83);
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                cam_set_shake_ramp(0xA, 0xA);
                FUN_0c09c45a(a4);
                FUN_0c08e382(a4);
                if ((*(signed char *)((a4 + 0x27C))) != 2) {
                    fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
                }
            }
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        return pl_apply_acceleration(a4);
    }
    return (signed char)t12;
}

int FUN_0c090404(int a4)
{
    register int t0;
    register int t3;
    register float u4;

    t0 = pl_start_knockback_reaction(a4);
    if ((signed char)t0 == 0) {
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t3 = pl_landed(a4);
            if ((signed char)t3 != 0) {
                u4 = (((struct o0_float *)0xC090510)->v);
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * u4);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * u4);
                (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC090510)->v));
                (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC090510)->v));
                pl_start_motion(a4, 0x2, 0x83);
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                cam_set_shake_ramp(0xA, 0xA);
                (((struct o71BC_uchar *)(a4))->v) = 0x3;
                FUN_0c09c45a(a4);
                FUN_0c08e382(a4);
                if ((*(signed char *)((a4 + 0x27C))) != 2) {
                    fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
                }
            }
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        return pl_apply_acceleration(a4);
    }
    return (signed char)t0;
}

int FUN_0c0911ce(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    (((struct o102_uchar *)(a4))->v) = 0x40;
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        pl_start_motion(a4, 0x2, 0xB6);
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC0912D8)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC0912D8)->v));
        (((struct o38_float *)(a4))->v) = (((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC0912D8)->v))) / ((((struct o14_float *)0xC0912D8)->v)));
        (((struct o40_float *)(a4))->v) = (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC0912D8)->v))) / ((((struct o14_float *)0xC0912D8)->v)));
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        (((struct oEC_ushort *)(a4))->v) = 0x6;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08ffa0(int a4)
{
    register int t3;
    register float u4;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t3 = pl_landed(a4);
        if ((signed char)t3 != 0) {
            u4 = (((struct o0_float *)0xC0900AC)->v);
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * u4);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * u4);
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC0900AC)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC0900AC)->v));
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            cam_set_shake_ramp(0xA, 0xA);
            pl_start_motion(a4, 0x2, 0x63);
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x27C))) != 2) {
                fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
        }
    }
    return pl_step_motion(a4);
}

int FUN_0c0901d0(int a4)
{
    register int t2;
    register float u3;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            u3 = (((struct o0_float *)0xC0902D8)->v);
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * u3);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * u3);
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC0902D8)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC0902D8)->v));
            pl_start_motion(a4, 0x2, 0x83);
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            cam_set_shake_ramp(0xA, 0xA);
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x27C))) != 2) {
                fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c0921fa(int a4)
{
    int t0;

    pl_start_motion(a4, 0x2, 0x6F);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    cam_set_shake_ramp(0xA, 0xA);
    FUN_0c08e5b4(a4);
    (((struct o3C_float *)(a4))->v) = 16.666666f;
    (((struct o48_float *)(a4))->v) = -1.38888884f;
    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -5.0f);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    if (((int)((((struct o71D4_short *)(a4))->v)) < 0) && (t0 = *(signed char *)((a4 + 0x71F3)), t0 != 0)) {
        pl_set_power_form_off(a4);
        (((struct o7230_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c090030(int a4)
{
    int stk[2];
    register int t1;
    register int t6;

    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        if ((signed char)t1 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            pl_change_state(a4, 0xF, 0x0, 0x0);
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            t6 = *(signed char *)((a4 + 0x27C));
            if (t6 != 2) {
                return fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            return t6;
        }
    }
    pl_step_motion(a4);
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c090260(int a4)
{
    int stk[2];
    register int t2;
    register int t7;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            pl_change_state(a4, 0xF, 0x1, 0x0);
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            t7 = *(signed char *)((a4 + 0x27C));
            if (t7 != 2) {
                return fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            return t7;
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c090374(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x3));
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), a4 + 0x20);
        pl_start_motion(a4, 0x2, 0x75);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0904a4(int a4)
{
    int stk[2];
    register int t2;
    register int t6;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            pl_change_state(a4, 0xF, 0x1, 0x0);
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            t6 = *(signed char *)((a4 + 0x27C));
            if (t6 != 2) {
                return fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            return t6;
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c09014c(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        cam_set_shake_ramp(0xA, 0xA);
        pl_start_motion(a4, 0x2, 0x6F);
        FUN_0c09c45a(a4);
        FUN_0c08e382(a4);
        if ((*(signed char *)((a4 + 0x27C))) != 2) {
            fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
        }
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c091184(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x2, 0xB5);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o102_uchar *)(a4))->v) = 0x40;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xB4;
    (((struct o723E_uchar *)(a4))->v) = 0x1E;
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 100.0f);
    t2 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c090104(int a4)
{
    register int t5;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x2, 0x6C);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    FUN_0c08e5b4(a4);
    (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC0901B4)->v));
    (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC0901B4)->v));
    t5 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
    return (t5 + 0x1);
}

int FUN_0c06e984(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return ((int (*)(int, int, int, int))(0xC06E904))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC06E7D4))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC06E704))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC06E668))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06E59C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06E49C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06E444))(a4, a5, a6, a7);
}

int FUN_0c09033c(int a4)
{
    register int t3;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c08e5b4(a4);
    pl_start_motion(a4, 0x2, 0x74);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t3 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
    return (t3 + 0x1);
}

int FUN_0c082012(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC081FEC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC081FA4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC081DB2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC081BD8))(a4, a5, a6, a7);
}

int FUN_0c082466(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC082440))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0823F8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08222C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082058))(a4, a5, a6, a7);
}

int FUN_0c082a18(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return ((int (*)(int, int, int, int))(0xC082A0C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0829DA))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0827DC))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0825EE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08258E))(a4, a5, a6, a7);
}

int FUN_0c082e5a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return ((int (*)(int, int, int, int))(0xC082E34))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC082DEC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC082C2A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC082BEC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082B90))(a4, a5, a6, a7);
}

int FUN_0c082b42(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC082AFE))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC082AAC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082A5C))(a4, a5, a6, a7);
}

int FUN_0c06a680(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_ryoma_mode01_03_update_v1(a4);
    }
    return pl_ryoma_mode01_03_update_v0(a4);
}

int FUN_0c082574(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC082504))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082490))(a4, a5, a6, a7);
}

int FUN_0c079af4(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}
