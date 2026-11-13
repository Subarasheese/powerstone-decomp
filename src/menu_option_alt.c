/* option menu: state machine and item handler table (0c0d71f4-0c0d7f30) */

/* named globals (symbols.txt) */
extern char g_menu_option_work[];
struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int FUN_0c061f9c(int);
int game_clear_win_records(void);
int FUN_0c0d71f4(int);
int FUN_0c0d78fa(void);
int FUN_0c0d7a0a(void);
int FUN_0c0d7a44(int);
int cam_init_records(void);
int gfx_set_background_color(int, int, int, float);
int memset(int, int, int);
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
extern int FUN_0c02c95c();
int FUN_0c0593e0(int);
int obj_tick_class(int);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int cam_request_mode(int, int, int);

int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC0D73FC))();
        }
        return ((int (*)(void))(0xC0D73D0))();
    }
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000, f4);
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
    memset(((int)g_menu_option_work), 0x0, 0x2C);
    game_clear_win_records();
    game_reset_objects();
    cam_init_records();
    FUN_0c05f2d4(0x3, 0x0);
    *(unsigned char *)0xC7F4768 = 0x0;
    return ((int (*)(int, int, int, int))(0xC0D73CE))(0xC7F4750, a5, a6, a7);
}

int FUN_0c0d75bc(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t1 = ((int (*)(int, int, float))(FUN_0c02c95c))(0xC7F4726, a5, f4);
                    if ((*(signed char *)0xC7F4728) != 0) {
                        if ((*(signed char *)0xC7F4729) != 0) {
                            return (*(signed char *)0xC7F4725);
                        }
                        return ((int (*)(int, int, int, int))(0xC0D770A))(((int)g_menu_option_work), a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0D770A))(((int)g_menu_option_work), a5, a6, a7);
                }
                return t0;
            }
            t0 = ((int (*)(int, int, float))(FUN_0c02c95c))(0xC7F4726, a5, f4);
            t0 = FUN_0c0d7a0a();
            if (t0 != 0) {
                bgm_stop_all();
                snd_play_side_se(0x0, 0x43);
                (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
                (((struct o15_uchar *)0xC7F4725)->v) = 0x1;
            }
            t0 = *(int *)0xC494B0C;
            *(unsigned int *)0xC494B0C = (t0 - 1);
            if ((t0 - 1) == 0) {
                if ((*(signed char *)0xC7F473A) == 0) {
                    return FUN_0c061f9c(0x0);
                }
                return ((int (*)(void))(0xC0D770A))();
            }
            return ((int (*)(void))(0xC0D770A))();
        }
        t0 = ((int (*)(int, int, float))(FUN_0c02c95c))(0xC7F4726, a5, f4);
    } else {
        (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o4_uchar *)0xC7F4725)->v) = 0x0;
        (((struct o9_uchar *)0xC7F4725)->v) = 0x3C;
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        game_reset_objects();
        cam_request_mode(0x1C, 0x0, 0xF0);
        t0 = ((int (*)(void))(FUN_0c02c95c))();
    }
    obj_tick_class(0x5);
    FUN_0c0593e0(0x5);
    if ((*(signed char *)0xC7F472E) != 0) {
        (((struct o9_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F472E) - 1);
    }
    if ((*(signed char *)0xC7F472E) == 0) {
        t0 = FUN_0c0d7a0a();
        if (t0 != 0) {
            (((struct o0_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4725) + 0x1);
            (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
            (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
            (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
        }
    }
    t0 = *(signed char *)0xC7F4728;
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)0xC7F4726;
        (((struct o1_uchar *)0xC7F4725)->v) = (t0 + 0x1);
        *(unsigned int *)0xC494B0C = 0xE10;
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0d780c(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o0_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        (((struct o2_uchar *)0xC7F4726)->v) = 0x0;
        (((struct oD_uchar *)0xC7F4726)->v) = 0x0;
        *(unsigned int *)0xC494B0C = 0xE10;
    }
    FUN_0c0d78fa();
    t0 = *(int *)0xC494B0C;
    *(unsigned int *)0xC494B0C = (t0 - 1);
    if ((t0 - 1) != 0) {
        t0 = FUN_0c0d7a44(0x2);
        if (t0 != 0) {
            return FUN_0c061f9c(0x0);
        }
        if ((*(signed char *)0xC7F473B) == 0) {
            t0 = FUN_0c0d7a0a();
            t1 = FUN_0c0d7a44(0x4);
            if (t0 == 0) {
                if (t1 != 0) {
                    FUN_0c0d71f4((t0 | t1));
                    return ((*(signed char *)0xC7F4725) + 0x1);
                }
                return ((int (*)(void))(0xC0D78D8))();
            }
            FUN_0c0d71f4((t0 | t1));
            return ((*(signed char *)0xC7F4725) + 0x1);
        }
        return ((int (*)(void))(0xC0D78D8))();
    }
    return FUN_0c061f9c(0x0);
}
