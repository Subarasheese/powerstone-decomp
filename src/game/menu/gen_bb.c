/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c01eee0(int, int, int, int);
int FUN_0c01f48c(int, int);
int FUN_0c01f874(int);
int FUN_0c01fe52(int);
int FUN_0c02828e(void);
int FUN_0c0282cc(void);
int FUN_0c02d420(void);
int FUN_0c02d458(void);
int FUN_0c031388(void);
int FUN_0c0421ee(int, int);
int FUN_0c0634b4(int);
int FUN_0c096a64(int);
int FUN_0c09c782(int);
int FUN_0c0a3e10(int, int, int);
int FUN_0c0dca60(int, int, int, int, int);
int FUN_0c0dcac0(int, int);
int FUN_0c0dcd20(float, float, float);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int FUN_0c0e2110(float, float, float);
int FUN_0c0e2790(int, float, float, float);
int fx_spawn_042514(int, int);
int fx_spawn_eight_point_effect(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int gfx_set_background_color(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlUnitMatrix(void);
int obj_set_mode_owner(int, int, int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int snd_play_side_se(int, int);
int stage_draw_lights(void);
int ui_draw_hud(void);
int ui_fade_draw(void);
int vmu_menu_pad_pressed(int);
int vmu_menu_scan_port_masks(void);
int vmu_menu_spawn_message(int);
extern int vmu_menu_update_objs();
int game_draw_frame(void);
int pl_mode15_cls08_f0(int a4);
int pl_state26_phase2(int a4);
int FUN_0c02018e(int a4, int a5, int a6, int a7);

int game_draw_frame(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;

    t7 = FUN_0c02d458();
    if (t7 != 0) {
        return FUN_0c02828e();
    }
    if ((*(signed char *)0xC7F31D0) != 0) {
        if (((*(signed char *)0xC7F300B) == 0) && ((t0 = *(signed char *)0xC7F300E, t0 == 0) && (t1 = *(signed char *)0xC494D20, t1 == 0))) {
            (((struct o15_uchar *)0xC7F31BC)->v) = ((*(signed char *)0xC7F31D1) - 1);
        }
        t0 = *(signed char *)0xC7F31D0;
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                gfx_set_background_color(0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            }
        } else {
            gfx_set_background_color(0xFFC0C0C0, 0xFFC0C0C0, 0xFFC0C0C0);
        }
        if ((int)(*(signed char *)0xC7F31D1) > 0) {
        } else {
            (((struct o15_uchar *)0xC7F31BC)->v) = 0x0;
            (((struct o14_uchar *)0xC7F31BC)->v) = 0x0;
        }
    } else {
        gfx_set_background_color(((((struct o0_int *)0xC7F31BC)->v)), ((((struct o4_int *)0xC7F31BC)->v)), ((((struct o8_int *)0xC7F31BC)->v)));
        if ((*(signed char *)0xC7F319E) == 0) {
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2790(0x1D28, 1.33333325f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            FUN_0c02d420();
        } else {
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(-0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            *(unsigned int *)0xC321190 = 0x2;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x2);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2C20);
            *(unsigned int *)0xC321190 = 0x3;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x3);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c031388();
            FUN_0c0dcac0(0xF, 0x0);
        }
    }
    if (((unsigned char)(*(signed char *)0xC7F2EE4) == 4) && ((t2 = *(signed char *)0xC7F302C, (int)t2 >= (int)0x1) && ((t3 = *(signed char *)0xC7F2F03, t3 == 0) && ((t4 = *(signed char *)0xC7F300B, t4 == 0) && ((t5 = *(signed char *)0xC7F300E, t5 == 0) && (t6 = *(signed char *)0xC494D20, t6 == 0)))))) {
        ui_draw_hud();
    }
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    stage_draw_lights();
    FUN_0c0282cc();
    return ui_fade_draw();
}

int pl_mode15_cls08_f0(int a4)
{
    int stk[9];
    register int t0;
    register int t2;
    register float u27;
    register float u32;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t2 = FUN_0c09c782(a4);
        if ((signed char)t2 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
        }
        return (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 20) {
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
        *(int *)((int)stk + 12) = 0xC14EB88;
        *(int *)((int)stk + 8) = 0xC14EB7C;
        *(int *)((int)stk + 4) = 0x43;
        *(int *)((int)stk + 0) = 0x14;
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB7C, 0xC14EB88);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 19) {
        u27 = ((((struct o20_float *)(a4))->v));
        u27 = u27 + (*(float *)0xC0662C8) * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 16)) = u27;
        u32 = ((((struct o28_float *)(a4))->v));
        u32 = u32 + (*(float *)0xC0662C8) * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 24)) = u32;
        *(float *)(((int)stk + 20)) = ((((struct o24_float *)(a4))->v));
        if ((*(signed char *)((a4 + 0x27C))) == 2) {
            FUN_0c0421ee(((int)stk + 16), 0x1);
        } else {
            fx_spawn_eight_point_effect((*(signed char *)((a4 + 0x3))), ((int)stk + 16));
            fx_spawn_042514(((int)stk + 16), (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000));
        }
    }
    return (pl_apply_motion_translation(a4));
}

int pl_state26_phase2(int a4)
{
    int stk[2];
    register int t1;

    if ((((((struct o2DC_int *)(a4))->v)) & 48) != 0) {
        t1 = FUN_0c096a64(a4);
        if ((signed char)t1 != 1) {
            if ((signed char)t1 != 2) {
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                if (((((struct oF2_short *)(a4))->v)) == 0) {
                    FUN_0c0a3e10((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))), 0x0);
                    (((struct oF2_ushort *)(a4))->v) = 0x18;
                }
                if (((((struct oF2_short *)(a4))->v)) == 12) {
                    FUN_0c0a3e10((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))), 0x1);
                }
                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                return 0xF2;
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
            return pl_change_state(a4, 0x5, 0x5);
        }
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_start_motion(a4, 0x2, 0xD8);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int FUN_0c02018e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c01eee0(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t0 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x4);
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        FUN_0c01f874(0x1);
    }
    t0 = vmu_menu_scan_port_masks();
    if ((signed char)t0 == 0) {
        FUN_0c01fe52(a4);
        t1 = vmu_menu_pad_pressed(0x2);
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(vmu_menu_update_objs))();
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC362A80);
            return snd_play_side_se(0x0, 0x4E);
        }
        t1 = vmu_menu_pad_pressed(0x4);
        if ((signed char)t1 != 0) {
            t2 = 0x4E;
            if ((((int)0x1 << (int)(((*(signed char *)((a4 + 0x2C))) << 1) + (*(signed char *)((a4 + 0x2D))))) & (*(int *)((a4 + 0xC)))) != 0) {
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                (((struct o31_uchar *)(a4))->v) = 0x0;
                FUN_0c01f48c((*(signed char *)((a4 + 0x2C))), (*(signed char *)((a4 + 0x2D))));
                t2 = 0x4D;
            }
            return snd_play_side_se(0x0, t2);
        }
        return (signed char)t1;
    }
    return (signed char)t0;
}
