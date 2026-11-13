/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_float { char p[0x308]; float v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71EE_uchar { char p[0x71EE]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_free_space_mask(void);
int opt_page1_spawn_menu_rows(int);
int opt_page1_run_objects_in_mask(int, int, int, int);
int opt_page1_pad_pressed(int);
int vmu_menu_step_notice_by_kind(int);
int vmu_menu_step_choose_yes_no(int);
int vmu_menu_state_save(int, int, int, int);
int vmu_menu_step_notice_wait_ok(int, int, int, int);
int FUN_0c01fb0c(void);
int ui_sprite_queue_add(int, int, int);
int logo_spawn_overlay(float);
int FUN_0c02c2d0(int);
int FUN_0c02c830(int);
int FUN_0c02c91a(int);
int FUN_0c02cb4a(int);
int ui_draw_text_stub(void);
int ui_fade_start(int, int, int, int);
int fx_spawn_effect_at_point(int, int);
int obj_create(int, int, int);
int fxslot_start(int, int, int, int, int, int);
int FUN_0c05fb58(int, float);
int FUN_0c06233a(int, int, int);
int FUN_0c096a64(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int, int, int);
int pl_apply_velocity(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int stage_obj_load_layout_pos(int);
int nlObjPutUseViewMatrix(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rsqrt_float(float);
float math_rand_float(void);
float math_sin_angle16(int);
int nlSelectMatrixStack(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlRotateAZ(int, float, float);
int FUN_0c0e2120(int);
int nlUnitMatrix(void);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int FUN_0c0ff1ac(int, int, int, int);
int write_sys(int);
int write_fat_1(int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int FUN_0c10a8a0(int, int);
int FUN_0c10aa80(int);
int FUN_0c10b3e0(int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int memset(int, int, int);
int FUN_0c029ec4(void);
int pl_state26_phase2(int a4, int a5, int a6, int a7);
int stage_spawn_type08(int a4);
int FUN_0c02cc18(float f4);
float pl_update_camera_side_flag(int a4);
int stage_spawn_type03(int a4);
int FUN_0c0ac900(int a4, int a5);
int FUN_0c0ffdfc(void);
int FUN_0c109020(void);
int ending_spawn_obj_t05(int a4);
int ui_draw_object_sprite(int a4);
int FUN_0c019d1c(int a4, int a5, int a6, int a7);
int FUN_0c02a9bc(float f4);
int FUN_0c02bcba(void);
int ui_draw_hud_cell_pair(void);
int FUN_0c05f4cc(int a4, int a5, int a6, int a7, int a8);
int stage_gimmick_36_spawn_b(int a4);
int FUN_0c0fd496(int a4, int a5, int a6, Stk2 s);
int FUN_0c01ee40(int a4, int a5, int a6, int a7);
int FUN_0c026f78(int a4, int a5);
int FUN_0c02a6c4(void);
int fx_spawn_03c5c0(int a4, int a5);
int game_tick_play_time(void);
int FUN_0c0c69e8(int a4);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int check_caps(int a4);
int write_fat(int a4, int a5, int a6, int a7);
int FUN_0c01b898(void);
int FUN_0c027028(int a4, int a5);
int pl_falcon_attack_kind24_phase0(int a4);
int FUN_0c09e7fc(int a4, int a5, int a6);
int FUN_0c10a7e0(int a4, int a5, int a6);
int FUN_0c01fa70(int a4);
int FUN_0c0239b6(int a4, int a5);
int FUN_0c02565a(int a4, int a5, int a6, int a7);
int FUN_0c0255ae(int a4, int a5, int a6, int a7);
int FUN_0c053720(int a4);
int keycfg_load_settings_to_screen(void);
int hit_list_save_positions(int a4, int a5, int a6, int a7);
int FUN_0c02c95c(int a4, int a5);

int FUN_0c0ffdfc(void)
{
    (((struct o0_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0x900, 0xC0FFC30, ((((struct o0_int *)0xC15B03C)->v)), 0x0));
    (((struct o4_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA00, 0xC0FFC72, ((((struct o4_int *)0xC15B03C)->v)), 0x0));
    (((struct o8_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA00, 0xC0FFD90, ((((struct o8_int *)0xC15B03C)->v)), 0x0));
    (((struct oC_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA20, 0xC0FFD98, ((((struct oC_int *)0xC15B03C)->v)), 0x0));
    *(unsigned int *)0xC8054C0 = 0x0;
    (((struct o0_uint *)0xC80570C)->v) = 0x0;
    (((struct o8_uint *)0xC80570C)->v) = 0x0;
    (((struct oC_uint *)0xC80570C)->v) = 0x0;
    (((struct o10_uint *)0xC80570C)->v) = 0x0;
    (((struct o18_uint *)0xC80570C)->v) = 0x0;
    (((struct o14_uint *)0xC80570C)->v) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC80570C)->v) = 0x0;
    (((struct o30_uint *)0xC80570C)->v) = 0x0;
    (((struct o34_uint *)0xC80570C)->v) = 0x0;
    memset(0xC805488, 0x0, 0x38);
    memset(0xC805248, 0x0, 0x240);
    memset(0xC8054C8, 0x0, 0x240);
    return (memset(0xC8051C8, 0x0, 0x80));
}

int FUN_0c109020(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o0_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o1C_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o14_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = 0xC8174A8;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        t0 = (t0 + 0x18);
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x18);
        if ((int)t1 >= (int)0x1000) {
            break;
        }
    }
    (((struct o0_uint *)0xC347648)->v) = 0x0;
    (((struct o4_uint *)0xC347648)->v) = 0x0;
    (((struct o8_uint *)0xC347648)->v) = 0x0;
    (((struct oC_uint *)0xC347648)->v) = 0x0;
    (((struct o10_uint *)0xC347648)->v) = 0x0;
    (((struct o14_uint *)0xC347648)->v) = 0x0;
    (((struct o18_uint *)0xC347648)->v) = 0x0;
    (((struct o1C_uint *)0xC347648)->v) = 0x0;
    (((struct o20_uint *)0xC347648)->v) = 0x0;
    (((struct o24_uint *)0xC347648)->v) = 0x0;
    t0 = (((struct o28_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x4));
            FUN_0c10b3e0(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    (((struct o28_uint *)0xC347648)->v) = 0x0;
    return 0x0;
}

int FUN_0c0fd496(int a4, int a5, int a6, Stk2 s)
{
    int stk[14];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t27;
    register int t28;
    register int t29;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    t0 = FUN_0c0fcea0(a6, a6);
    if ((int)a6 <= (int)0x2) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), (*(int *)((a4 + 0x1C))), 0x8);
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)((a5 + 0x0)));
        } else {
            t4 = ((((int)stk + 4) + 0x4) + 0x4);
            t5 = 0x0;
            t6 = a5;
            for (;;) {
                t7 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x2);
                *(unsigned char *)((t4 + 0x0)) = t7;
                t4 = (t4 + 0x1);
                t8 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                *(unsigned char *)((t4 + 0x0)) = t8;
                t4 = (t4 + 0x1);
                if ((int)t5 >= (int)0x4) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0fddce((((int)stk + 4) + 0x4));
        FUN_0c0fddce(((((int)stk + 4) + 0x4) + 0x20));
        t27 = (*(int *)(((int)stk + 4)));
        t28 = (((int)stk + 4) + 0x4);
        t29 = 0x8;
    } else {
        t29 = *(int *)(((t0 << 2) + 0xC15AC5C));
        *(unsigned int *)(((int)stk + 4)) = a5;
        t27 = ((*(int *)(((t0 << 2) + 0xC15AC30))) + (*(int *)((a4 + 0x1C))));
        t28 = a5;
    }
    kmiCopyToFrameBuffer(t27, t28, t29);
    return 0x0;
}

int nlLookAt(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register float u15;
    register float u16;
    register float t17;

    if ((unsigned short)a6 != 0) {
        nlRotateAZ((unsigned short)a6, f4, f5);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    u10 = (((struct o8_float *)(a5))->v);
    u11 = (((struct o8_float *)(a4))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u10 - u11);
    u12 = *(float *)((((int)stk + 0) + 0x0));
    u13 = ((u10 - u11) * (u10 - u11));
    u13 = u13 + u12 * u12;
    t14 = math_rsqrt_float(u13);
    u15 = (((struct o4_float *)(((int)stk + 0)))->v);
    u16 = u13;
    u16 = u16 + u15 * u15;
    t17 = math_rsqrt_float(u16);
    nlRotateXSC((-(((((struct o4_float *)(((int)stk + 0)))->v)) * t17)), (t17 / t14));
    nlRotateYSC(((*(float *)((((int)stk + 0) + 0x0))) * t14), (-(((((struct o8_float *)(((int)stk + 0)))->v)) * t14)));
    return (FUN_0c0e2120(a4));
}

int check_caps(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;

    t10 = *(int *)((a4 + 0x1C));
    t11 = *(int *)((t10 + 0x0));
    if (((int)t11 >= (int)0x1) && (((int)t11 <= (int)0x7FF) && ((t0 = *(int *)((t10 + 0x0)), t1 = *(int *)((t10 + 0x8)), t0 == t1) && ((t2 = *(int *)((t10 + 0xC)), (int)t2 >= 0) && ((t3 = *(int *)((t10 + 0x0)), (int)t2 < (int)t3) && ((t4 = *(int *)((t10 + 0x14)), (int)t4 >= 0) && ((t5 = *(int *)((t10 + 0x0)), (int)t4 < (int)t5) && ((t6 = *(int *)((t10 + 0x34)), (int)t6 >= 0) && ((t7 = *(int *)((t10 + 0x0)), (int)t6 <= (int)t7) && ((t8 = *(int *)((t10 + 0x38)), (int)t8 >= 0) && (t9 = *(int *)((t10 + 0x0)), (int)t8 <= (int)t9))))))))))) {
        if ((*(int *)(((*(int *)0xC80DBC4) + 0x8))) == 0) {
            if ((int)(*(short *)((a4 + 0x10))) >= (int)(*(int *)((t10 + 0x10)))) {
                if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(int *)((t10 + 0x18)))) {
                    t0 = *(int *)((t10 + 0x0));
                    if (t0 != 0xFF) {
                        if (t0 != 0x1FF) {
                            if (t0 != 0x3FF) {
                                if (t0 != 0x7FF) {
                                    return 0xFFFFFFFF;
                                }
                                *(unsigned int *)((a4 + 0x4)) = 0x3;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x4)) = 0x2;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                        return 0x0;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x0;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        t0 = *(int *)((t10 + 0x0));
        if (t0 != 0xFF) {
            if (t0 != 0x1FF) {
                if (t0 != 0x3FF) {
                    if (t0 != 0x7FF) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x4)) = 0x2;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int write_fat(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = write_fat_1(a4);
        if (t1 != 0xFFFFFF01) {
            if (t1 != 0xFFFFFF40) {
                break;
            }
            t0 = (search_subst_fat_top(a4));
            if ((int)t0 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC)) = t0;
            t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x46, t0, a7);
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10)))) {
                    break;
                }
                set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t0), 0xFFFA);
                t0 = (t0 + 0x1);
            }
            t0 = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if (t0 != 0) {
        write_sys(a4);
    }
    return 0x0;
}

int FUN_0c10a7e0(int a4, int a5, int a6)
{
    int stk[3];
    register int t43;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t3;
    register int t11;
    register int t12;
    int t13;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register int t22;
    int t25;
    register int t26;
    register int t27;
    register int t28;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t9 = *(int *)(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648));
    t8 = (((struct o0_int *)0xC347634)->v);
    t43 = 0x0;
    if (t9 != 0) {
        t2 = 0xC347648;
        t4 = a4;
        t5 = a5;
        t6 = a6;
        t7 = 0x0;
        for (;;) {
            t10 = *(short *)((t9 + 0x0));
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x180, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 4)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = ((((struct o8_int *)0xC347634)->v));
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 0);
                t2 = (FUN_0c10a8a0(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)(((int)stk + 8)), t26 = *(int *)((t2 + 0x14)), t4 = t26, t27 = *(int *)((t25 + 0x18)), t3 = t27, t28 = *(int *)((t4 + 0x18)), t4 = t28, t4 == t3)) {
                    t8 = (*(int *)((t9 + 0x10)));
                    t7 = t9;
                    t33 = t3;
                    t34 = t4;
                }
            } else {
                t33 = t3;
                t34 = t4;
                t37 = t5;
                t38 = t6;
            }
            t3 = t33;
            t9 = (*(int *)((t9 + 0x8)));
            t4 = t34;
            t5 = t37;
            t6 = t38;
            if (t9 == 0) {
                break;
            }
        }
        t43 = t7;
    }
    return t43;
}

