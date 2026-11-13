/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD_short { char p[0xD]; short v; };
struct oD_ushort { char p[0xD]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int ADXPD_GetNumBlk(int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int res_load_file_unpack(int);
int res_load_file_raw_d(int);
int res_textures_register(int);
int math_mat_transform_point(int, int);
int FUN_0c06233a(int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int FUN_0c09cee4(int);
int FUN_0c09d818(int, int);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int);
int snd_play_char_voice(int, int);
int snd_play_announcer(int, int);
int menu_ui_spawn_32(int);
int menu_ui_spawn_33(void);
int stage_obj_load_layout_pos(int);
int dbg_print_at(int, float, float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
float FUN_0c0e2220(int, int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(void);
int vib_port_has_vibration(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c0fbfa2(int, int, int, int);
int FUN_0c101148(int, int);
int FUN_0c114598(int, int, int, int);
int FUN_0c1145cc(int, int, int, int);
int check_caps(int);
int kmiWriteRegister(int, int);
int memcpy(int, int, int);
int mpdrv_insertnop(int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_read(int, int, int);
int FUN_0c0e1460(int a4);
int fx_spawn_039aa0(int a4, int a5);
int fx_spawn_04b6b8(int a4, int a5, int a6, int a7, float f4);
int stage_spawn_type02(int a4);
int stage_gimmick_11_spawn_b(int a4, int a5);
int fx_spawn_04(int a4, int a5);
int FUN_0c0ce99a(int a4, int a5, int a6, int a7);
int FUN_0c0cb994(int a4, int a5);
int FUN_0c11163a(void);
int FUN_0c1145f4(int a4);
int pl_garuda_move12_update(int a4);
int fx_update_burst_sprites(int a4);
int fx_spawn_039ed8(int a4, int a5);
int fx_spawn_03b384(int a4, int a5);
int fx_spawn_045f9c(int a4);
int res_load_pl_effect(int a4, int a5, int a6, int a7);
int pl_vib_start_preset(int a4, int a5);
int menu_vs_announce_names(int a4, int a5, int a6, int a7);
int nlSetViewport(float f4, float f5, float f6, float f7);
int FUN_0c0fb160(int a4);
int vmsfs_connect(int a4);
int fx_tick_03743c(int a4);
int fx_spawn_0357e0(int a4, int a5);
int FUN_0c08bf90(int a4);
int FUN_0c08ebfa(int a4, int a5);
int menu_ui_task_15_bind_models(int a4, int a5);
int FUN_0c0a3824(int a4, int a5, int a6, int a7);

int FUN_0c0e1460(int a4)
{
    int stk[16];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 0)) = (u2 + 1.0f);
    u3 = (((struct o10_float *)(a4))->v);
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 20)) = (u5 + 1.0f);
    u6 = (((struct o14_float *)(a4))->v);
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 40)) = (u8 + 1.0f);
    u11 = (((((struct oC_float *)(a4))->v)) * ((((struct o10_float *)(a4))->v)));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    (((struct o10_float *)(((int)stk + 0)))->v) = u12;
    (((struct o4_float *)(((int)stk + 0)))->v) = u12;
    u15 = (((((struct oC_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    (((struct o20_float *)(((int)stk + 0)))->v) = u16;
    (((struct o8_float *)(((int)stk + 0)))->v) = u16;
    u19 = (((((struct o10_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    (((struct o24_float *)(((int)stk + 0)))->v) = u20;
    (((struct o18_float *)(((int)stk + 0)))->v) = u20;
    t21 = FUN_0c0e2220(a4, (a4 + 0xC));
    *(float *)(((int)stk + 48)) = ((t21 + t21) * ((((struct oC_float *)(a4))->v)));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * ((((struct o10_float *)(a4))->v)));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * ((((struct o14_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int FUN_0c11163a(void)
{
    register int t0;

    t0 = *(int *)0xC843924;
    if ((int)((((struct o10E4_int *)(t0))->v)) > 0) {
        mpdrv_insertnop(((((struct o10E4_int *)(t0))->v)));
    }
    return ((int (*)(void))(0xC11171C))();
}

int FUN_0c1145f4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)(((a4 + 0x50) + 0x20));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    t5 = (((struct o40_int *)(a4))->v);
    t6 = (((struct o44_int *)(a4))->v);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t10 = ADXPD_GetNumBlk((*(int *)((a4 + 0x8))));
    t12 = (int)((int)(t0 * t10) / (int)(*(int *)(((a4 + 0x50) + 0x8))));
    t14 = t12;
    if ((int)((int)((int)((t0 + t2) - 1) / (int)t0)) <= (int)t10) {
        t14 = (t12 - ((t0 - t8) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t14;
    (((struct oA4_uint *)(a4))->v) = (t1 * t10);
    if ((int)(t3 + t14) >= (int)t5) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return FUN_0c114598(t4, t5, t6, ((t3 + t14) - t5));
        }
        return FUN_0c1145cc(t4, t5, t6, ((t3 + t14) - t5));
    }
    return 0xA4;
}

int nlSetViewport(float f4, float f5, float f6, float f7)
{
    register float u7;
    register float u8;
    register float u9;

    (((struct o10_float *)0xC7FCF68)->v) = f4;
    (((struct o14_float *)0xC7FCF68)->v) = f5;
    (((struct o8_float *)0xC7FCF68)->v) = f6;
    (((struct oC_float *)0xC7FCF68)->v) = f7;
    (((struct o20_float *)0xC346AB0)->v) = f5;
    (((struct o18_float *)0xC346AB0)->v) = f7;
    if ((*(short *)0xC7FD4A2) != 0) {
        (((struct o1C_float *)0xC346AB0)->v) = (f4 * (1.0f + 1.0f));
        (((struct o14_float *)0xC346AB0)->v) = (f6 * (1.0f + 1.0f));
    } else {
        (((struct o1C_float *)0xC346AB0)->v) = f4;
        (((struct o14_float *)0xC346AB0)->v) = f6;
    }
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u7 = (((struct o18_float *)0xC346AB0)->v);
    u8 = (((struct o4_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u7 * u8);
    u9 = (((struct o0_float *)0xC7FCF68)->v);
    if (u9 > (u7 * u8)) {
        (((struct o8_float *)0xC346AB0)->v) = u9;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u7 * u8);
    }
    nlMakeProjConvMat(0xC7FCEE8);
    if ((*(int *)0xC7F88EC) == 4) {
        return FUN_0c0fbfa2((int)f4, (int)f5, (int)(f4 + f6), (int)(f5 + f7));
    }
    return ((int (*)(int, int, int, int))(0xC0E3296))((int)f4, (int)f5, (int)((f4 + f6) + -1.0f), (int)((f5 + f7) + -1.0f));
}

int FUN_0c0fb160(int a4)
{
    register int t0;
    register int t1;
    register int t25;
    register int t26;
    register int t28;
    int t30;
    register int t32;
    register int t3;
    register int t9;

    t0 = (((struct o30_int *)0xC816FE4)->v);
    t1 = (((struct o38_int *)0xC816FE4)->v);
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) && ((t3 = (((struct o0_int *)0xC816FE4)->v), (t3 & 44) != 0) && (0x1 != 0))) {
        t9 = ((unsigned int)((unsigned int)((((struct oC_int *)0xC81729C)->v)) >> 16) >> 1);
    } else {
        t9 = ((unsigned int)((((struct oC_int *)0xC81729C)->v)) >> 16);
    }
    t25 = (a4 + (t1 + t0));
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t25 = (a4 + (t1 + t0));
        if ((((((struct o0_int *)0xC816FE4)->v)) & 32) != 0) {
            t25 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
    }
    t26 = t25;
    if ((int)t25 < 0) {
        t26 = (t25 + t9);
    }
    t28 = t26;
    if ((int)t26 > (int)t9) {
        t28 = t9;
    }
    t30 = t28;
    if ((int)t28 < 0) {
        t30 = 0x0;
    }
    t32 = (((struct o0_int *)0xC81729C)->v);
    (((struct o0_uint *)0xC81729C)->v) = ((t32 & 0x3FF0000) | (0x3FF & t30));
    kmiWriteRegister(0xC8, ((t32 & 0x3FF0000) | (0x3FF & t30)));
    return 0x0;
}

int vmsfs_connect(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)) = ((a4 * 0x4C) + 0xC812628);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347248)));
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t1 + 0x1) - 1), t0);
    t0 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
    if ((int)t0 < 0) {
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
        t0 = 0xFFFFFF01;
    } else {
        t1 = check_caps(((a4 * 0x148) + 0xC80DBC8));
        t0 = 0xFFFFFF83;
        if ((int)t1 >= 0) {
            t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
            *(unsigned int *)((t1 + 0x30)) = (*(int *)((t1 + 0x1C)));
            t1 = vmsio_block_read(a4, 0x0, 0xC813CD4);
            t0 = 0xFFFFFF01;
            if ((int)t1 < 0) {
            } else {
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x1;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
                t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
                t0 = 0xF;
                if (t1 != 0) {
                    t0 = 0x21;
                    if (t1 != 1) {
                        t0 = 0x41;
                        if (t1 != 2) {
                            t0 = 0x7A;
                            if (t1 != 3) {
                                t0 = 0xFFFFFF83;
                            }
                        }
                    }
                }
            }
        }
    }
    return t0;
}

