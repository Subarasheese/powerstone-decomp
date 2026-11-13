/* option menu: state machine and item handler table (0c0d71f4-0c0d7f30) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
extern int res_switch_scene();
int bgm_stop_all(void);
int FUN_0c0d7032(int, int);
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int opt_page_leave_reset(void);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int game_clear_win_records(void);
int cam_init_records(void);
int cam_reset_shake(int, int, int, int);
int gfx_set_background_color(int, int, int);
int memset(int, int, int);
struct o2_uchar { char p[0x2]; unsigned char v; };
int attract_take_step3_flag(void);
int FUN_0c0d75bc(int, int, int, int);
int FUN_0c0d780c(void);
struct o1F_uchar { char p[0x1F]; unsigned char v; };
extern int FUN_0c02c9f6();
int ui_fade_reset(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int cam_request_mode(int, int, int);
struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o20_short { char p[0x20]; short v; };
struct oC_short { char p[0xC]; short v; };
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
int keycfg_menu_init(void);
int keycfg_menu_main(void);
int keycfg_settings_changed(void);
int logo_spawn_overlay(float);
int FUN_0c0a3062(int);
int memcpy(int, int, int);
int syCfgSetSoundMode(int, int, int);
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
int opt_game_settings_init(void);
int opt_game_settings_changed(void);
extern int opt_game_settings_main();
int vmu_menu_init(void);
int FUN_0c01e860(int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c01e970();

int FUN_0c0d71fa(void);
int FUN_0c0d7758(float f4);
int FUN_0c0d7a7c(void);
int FUN_0c0d7a9c(void);
int menu_option_run_item(void);

void FUN_0c0d71f4(int a4)
{
    *(unsigned int *)0xC494B08 = a4;
}

int FUN_0c0d71fa(void)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC7F3071 = 0x0;
    t0 = *(int *)0xC494B08;
    if (t0 != 1) {
        if (t0 != 2) {
            t0 = 0x0;
            if ((*(signed char *)0xC7F2F17) != 0) {
            } else {
                FUN_0c0d7032(0x0, 0x0);
                t0 = 0x1;
            }
            t1 = (FUN_0c0d7032(t0, 0x0));
        } else {
            t1 = (FUN_0c0d7032(0x1, 0x0));
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c0d7032(0x0, 0x0));
    }
    return t0;
}

int FUN_0c0d724a(int a4, float f4)
{
    int stk[1];
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
    (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
    memset(0xC7F4724, 0x0, 0x2C);
    game_clear_win_records();
    game_reset_objects();
    cam_init_records();
    FUN_0c05f2d4(0x3, 0x0);
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uchar *)0xC7F4724)->v) = 0x1;
    (((struct o1_uchar *)0xC7F4724)->v) = 0x4;
    (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4724)->v) = 0x0;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    cam_reset_shake(0x0, 0x0, 0x63, 0x0);
    t7 = *(signed char *)0xC7F4755;
    (((struct o15_uchar *)0xC7F4724)->v) = t7;
    if (t7 != 0) {
        (((struct o20_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o21_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o22_uchar *)0xC7F4724)->v) = 0x1;
        (((struct o23_uchar *)0xC7F4724)->v) = 0x1;
    }
    (((struct o16_uchar *)0xC7F4724)->v) = 0x1;
    opt_page_leave_reset();
    (((struct o14_uchar *)0xC7F4724)->v) = 0x5;
    (((struct o1A_uchar *)0xC7F4724)->v) = ((*(signed char *)(((int)stk + 0))) + 0x4);
    return 0x1A;
}

int menu_option_update(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4724;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o2_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                *(unsigned char *)0xC7F2F04 = 0x0;
                t1 = 0x42;
            }
            return t1;
        }
        t0 = *(signed char *)0xC7F4725;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            return t0;
                        }
                        return menu_option_run_item();
                    }
                    return FUN_0c0d780c();
                }
                return FUN_0c0d7758(f4);
            }
            return FUN_0c0d75bc(a4, a5, a6, a7);
        }
        game_reset_objects();
        (((struct o1_uchar *)0xC7F4724)->v) = ((*(signed char *)0xC7F4725) + 0x1);
        (((struct o2_uchar *)0xC7F4724)->v) = 0x0;
        (((struct o3_uchar *)0xC7F4724)->v) = 0x0;
        (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
        t0 = attract_take_step3_flag();
        t1 = t0;
        if (t0 != 0) {
            (((struct o1_uchar *)0xC7F4724)->v) = ((*(signed char *)0xC7F4725) + 0x1);
            (((struct o16_uchar *)0xC7F4724)->v) = 0x1;
            t1 = 0x16;
        }
        return t1;
    }
    game_reset_objects();
    (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o0_uchar *)0xC7F4724)->v) = 0x1;
    (((struct o4_uchar *)0xC7F4724)->v) = 0x0;
    return ((int (*)(int, int, int, int))(0xC0D7528))(0xC7F4724, 0x0, 0x63, 0x0);
}

int FUN_0c0d7566(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)0xC7F4738;
    if ((t0 != 2) && (t0 != 3)) {
        if (t0 != 5) {
            if (t0 != 6) {
                (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
            } else {
                (((struct o13_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4727);
                (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
            }
        } else {
            t0 = ((int (*)(int, int, int, int))(res_switch_scene))(0x2, a5, a6, a7);
            t0 = ((int (*)(int))(res_switch_scene))(0xD);
            bgm_stop_all();
            (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
        }
        t0 = 0x0;
    } else {
        t0 = ((*(signed char *)0xC7F4726) + 0x1);
    }
    (((struct o1_uchar *)0xC7F4725)->v) = t0;
    return t0;
}

int FUN_0c0d7758(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(float))(FUN_0c02c9f6))(f4);
            obj_tick_class(0x5);
            FUN_0c0593e0(0x5);
            t0 = *(signed char *)0xC7F4728;
            t2 = t0;
            if (t0 != 0) {
                t0 = *(signed char *)0xC7F4729;
                t3 = t0;
                if (t0 != 0) {
                    (((struct o0_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4725) + 0x1);
                    (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
                    (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
                    t3 = 0x0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o4_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o15_uchar *)0xC7F4725)->v) = 0x1;
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        game_reset_objects();
        cam_request_mode(0x1C, 0x0, 0xF0);
        ui_fade_reset();
        t1 = *(signed char *)0xC7F4755;
        (((struct o14_uchar *)0xC7F4725)->v) = t1;
        if (t1 != 0) {
            (((struct o1F_uchar *)0xC7F4725)->v) = 0x1;
            (((struct o20_uchar *)0xC7F4725)->v) = 0x1;
            (((struct o21_uchar *)0xC7F4725)->v) = 0x1;
            (((struct o22_uchar *)0xC7F4725)->v) = 0x1;
        }
        t1 = ((int (*)(void))(FUN_0c02c9f6))();
        obj_tick_class(0x5);
        FUN_0c0593e0(0x5);
        t1 = *(signed char *)0xC7F4728;
        t2 = t1;
        if (t1 != 0) {
            t1 = *(signed char *)0xC7F4729;
            t3 = t1;
            if (t1 != 0) {
                (((struct o0_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4725) + 0x1);
                (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
                (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
                (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
                t3 = 0x0;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d78fa(void)
{
    int stk[1];
    register int t7;
    register int t5;
    register int t6;
    int t10;
    int t16;
    int t23;
    int t28;

    if ((*(signed char *)0xC7F473B) == 0) {
        if (((*(signed char *)0xC7F4738) == 1) && ((t5 = (((struct o0_int *)0xC361BF0)->v), t5 == 0) || (t6 = (((struct o14_int *)0xC361BF0)->v), t6 == 0))) {
            t7 = *(signed char *)0xC7F472D;
            (((struct o3_uchar *)0xC7F4738)->v) = t7;
            if (t7 == 1) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
                return 0x14;
            }
            (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            return 0x14;
        }
        *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC7F4738);
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 0x10) == 0) && (t10 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t10 & 0x10) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) - 1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x1;
            if ((int)(*(signed char *)0xC7F4738) < 0) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x5;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t16 = *(signed char *)0xC7F4739, t16 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            }
        }
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 32) == 0) && (t23 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t23 & 32) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) + 0x1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x2;
            if ((int)(*(signed char *)0xC7F4738) > (int)0x5) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t28 = *(signed char *)0xC7F4739, t28 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x4;
            }
        }
        if ((*(signed char *)(((int)stk + 0))) == (*(signed char *)0xC7F4738)) {
            (((struct o3_uchar *)0xC7F4738)->v) = 0x0;
            return 0x17;
        }
        return ((int (*)(int, int, int, int))(0xC0D79F4))(0xC7F4724, 0xC361BF0, 0x0, 0xC361BF0);
    }
    return 0x17;
}

int FUN_0c0d7a0a(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x3;
        }
        if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x1;
        }
    }
    if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0d7a44(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) != 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x3;
        }
        if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
    }
    if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0d7a7c(void)
{
    *(unsigned char *)0xC7F4724 = 0x2;
    *(unsigned char *)0xC7F301C = 0x0;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return FUN_0c0d71fa();
}

int FUN_0c0d7a9c(void)
{
    *(unsigned char *)0xC7F4724 = 0x2;
    *(unsigned char *)0xC7F301C = 0x1;
    (((struct o0_uchar *)0xC7F4768)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4768)->v) = 0x0;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return FUN_0c0d71fa();
}

int menu_option_item_sound_mode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o3_uchar *)0xC7F2F0E)->v) = (*(signed char *)0xC7F470C);
                (((struct oA_uchar *)0xC7F2F0E)->v) = (*(signed char *)0xC7F470D);
                t0 = *(signed char *)0xC7F470E;
                (((struct o7_uchar *)0xC7F2F0E)->v) = t0;
                (((struct o6_uchar *)0xC7F2F0E)->v) = t0;
                (((struct o4_uchar *)0xC7F2F0E)->v) = (*(signed char *)0xC7F470F);
                if ((*(signed char *)0xC7F2F0E) != (*(signed char *)0xC7F4710)) {
                    t0 = *(signed char *)0xC7F4710;
                    (((struct o0_uchar *)0xC7F2F0E)->v) = t0;
                    t2 = 0x1;
                    if (t0 == 1) {
                        t2 = 0x0;
                    }
                    syCfgSetSoundMode(t2, a5, a6);
                    FUN_0c0a3062((*(signed char *)0xC7F2F0E));
                }
                (((struct oB_uchar *)0xC7F2F0E)->v) = (*(signed char *)0xC7F4711);
                memcpy(0xC7F476D, 0xC7F4714, 0x10);
                t0 = keycfg_settings_changed();
                if ((signed char)t0 != 0) {
                    (((struct o1B_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F4738);
                    (((struct o2C_uchar *)0xC7F470C)->v) = 0x6;
                } else {
                    (((struct o19_uchar *)0xC7F470C)->v) = 0x2;
                }
                (((struct o1A_uchar *)0xC7F470C)->v) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
    } else {
        (((struct o1A_uchar *)0xC7F470C)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        game_reset_objects();
        logo_spawn_overlay((*(float *)0xC0D7D64));
        keycfg_menu_init();
        (((struct o0_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F11);
        (((struct o1_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F18);
        (((struct o2_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F14);
        (((struct o3_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F12);
        (((struct o4_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F0E);
        (((struct o5_uchar *)0xC7F470C)->v) = (*(signed char *)0xC7F2F19);
        memcpy(0xC7F4714, 0xC7F476D, 0x10);
    }
    keycfg_menu_main();
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d7bf0(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o0_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474A);
                (((struct o1_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F4748);
                (((struct o2_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F4749);
                (((struct o3_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474B);
                (((struct o6_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474C);
                (((struct o7_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474D);
                (((struct o8_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474E);
                t0 = opt_game_settings_changed();
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4738);
                    (((struct o13_uchar *)0xC7F4725)->v) = 0x6;
                } else {
                    (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
                }
                (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
        t0 = ((int (*)(int))(opt_game_settings_main))(0xC7F4726);
    } else {
        (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        game_reset_objects();
        logo_spawn_overlay((*(float *)0xC0D7D64));
        opt_game_settings_init();
        (((struct o25_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4764);
        (((struct o23_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4765);
        (((struct o24_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4766);
        (((struct o26_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4767);
        (((struct o27_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476A);
        (((struct o28_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476B);
        (((struct o29_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476C);
        t0 = ((int (*)(void))(opt_game_settings_main))();
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d7cd8(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c01e860(0xC7F4726, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    } else {
        *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
        game_reset_objects();
        logo_spawn_overlay(0.5f);
        vmu_menu_init();
        FUN_0c01e860(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d7e5e(void)
{
    FUN_0c0d7a7c();
    *(unsigned char *)0xC7F4768 = 0x1;
    *(unsigned char *)0xC7F2F17 = 0x0;
    return 0xC7F2F17;
}

int FUN_0c0d7e74(void)
{
    register int t0;

    t0 = FUN_0c0d7a9c();
    *(unsigned char *)0xC7F4769 = 0x1;
    *(unsigned char *)0xC7F2F17 = 0x1;
    return t0;
}

int FUN_0c0d7e88(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = ((int (*)(int, int, int, int))(FUN_0c01e970))(0xC7F4726, a5, a6, a7);
    } else {
        *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
        game_reset_objects();
        logo_spawn_overlay((*(float *)0xC0D7F10));
        vmu_menu_init();
        t0 = ((int (*)(void))(FUN_0c01e970))();
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int menu_option_run_item(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC7F4738) << 2) + 0xC33F970));
    return ((int (*)(void))(t1))();
}
