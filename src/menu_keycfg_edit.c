/* key config editing screen (state 0c362378, reset keys) (0c01d304-0c01e798) */

/* named globals (symbols.txt) */
extern char g_key_config[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int opt_reset_key_config(int);
int FUN_0c01dd08(int, int, int);
extern int FUN_0c01e264();
int snd_play_side_se(int, int);
extern int FUN_0c0e6e5c();
int FUN_0c01e5cc(void);
struct field_10_float { char p[0x10]; float field_10; };
struct field_14_float { char p[0x14]; float field_14; };
struct field_18_float { char p[0x18]; float field_18; };
struct field_1c_float { char p[0x1C]; float field_1c; };
struct field_20_float { char p[0x20]; float field_20; };
struct field_24_float { char p[0x24]; float field_24; };
int ui_sprite_queue_add(int, int, int, int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o0_float { float v; };
struct oC_float { char p[0xC]; float v; };
float math_sin_angle16(int);
int pad_get_type(int);
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };
struct o16_short { char p[0x16]; short v; };
struct o18_short { char p[0x18]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };

int ui_draw_element_sprite(int obj);
int FUN_0c01dc58(void);
int FUN_0c01e156(int a4, int a5, int a6);
int FUN_0c01e594(void);
int FUN_0c01e65e(int a4, int a5, int a6);
int FUN_0c01e6b4(int a4);
int FUN_0c01e75e(int a4, int a5);

int FUN_0c01d304(int a4)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    (((struct o6_uchar *)0xC362378)->v) = a4;
    return a4;
}

int FUN_0c01d31a(void)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    return 0x0;
}

int FUN_0c01d328(void)
{
    (((struct o3_uchar *)0xC362378)->v) = 0x0;
    (((struct o2_uchar *)0xC362378)->v) = 0x0;
    (((struct o1_uchar *)0xC362378)->v) = 0x0;
    (((struct o0_uchar *)0xC362378)->v) = 0x0;
    return 0x0;
}

int FUN_0c01d336(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
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
    register int t9;
    register int t10;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;

    t14 = *(signed char *)0xC362378;
    if ((unsigned char)t14 != 0) {
        if ((unsigned char)t14 != 1) {
            if ((unsigned char)t14 == 2) {
                return ((int (*)(void))(0xC01D7D6))();
            }
            if ((unsigned char)t14 == 3) {
                return ((int (*)(void))(0xC01D7D2))();
            }
            return ((int (*)(void))(0xC01D7D6))();
        }
        (((struct o10_uint *)0xC362378)->v) = (unsigned short)(((((struct o10_int *)0xC362378)->v)) + 0x5B0);
        t14 = *(signed char *)0xC362379;
        if ((unsigned char)t14 != 0) {
            if ((unsigned char)t14 == 1) {
                t15 = *(signed char *)0xC36237A;
                if ((unsigned char)t15 != 0) {
                    t16 = 0xC36237A;
                    if ((unsigned char)t15 == 1) {
                        t17 = (unsigned char)t15;
                        t15 = 0xC36237A;
                        t18 = 0x0;
                        t19 = 0x1;
                        for (;;) {
                            if ((int)(signed char)t18 < (int)0x2) {
                                t19 = (signed char)t18;
                                t15 = t18;
                                t17 = (FUN_0c01e65e(t15, 0x2, 0x20));
                                t17 = (signed char)t17;
                                if (t17 != 0) {
                                    t15 = 0x0;
                                    t17 = (snd_play_side_se(t15, 0x4B));
                                    t15 = 0xC362378;
                                    t15 = (t15 + 0x8);
                                    t15 = (t15 + t19);
                                    *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                    *(volatile signed char *)((t15 + 0x0));
                                    t17 = 0x8;
                                    t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                    *(unsigned char *)((t0 + 0x0)) = t17;
                                    t15 = t0;
                                    t20 = t15;
                                } else {
                                    t15 = t18;
                                    t17 = (FUN_0c01e65e(t15, 0x2, 0x10));
                                    t17 = (signed char)t17;
                                    if (t17 != 0) {
                                        t15 = 0x0;
                                        t17 = (snd_play_side_se(t15, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) - 1);
                                        if ((int)(*(signed char *)(((0xC362380 + t19) + 0x0))) >= 0) {
                                        } else {
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = 0x7;
                                        }
                                    } else {
                                        if ((int)(*(signed char *)(((0xC362380 + t19) + 0x0))) >= (int)0x6) {
                                        } else {
                                            t15 = t18;
                                            t17 = (FUN_0c01e65e(t15, 0x2, 0x80));
                                            t17 = (signed char)t17;
                                            if (t17 != 0) {
                                                t15 = 0x0;
                                                t17 = (snd_play_side_se(t15, 0x4C));
                                                t17 = 0xC7F4750;
                                                t17 = (t17 + 0x1D);
                                                t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                t21 = t17;
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                t17 = (signed char)t17;
                                                t17 = (t17 + t21);
                                                *(unsigned char *)((t17 + 0x0)) = ((*(signed char *)((t17 + 0x0))) + 0x1);
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                t17 = (signed char)t17;
                                                t17 = (t17 + (((int)g_key_config) + (((signed char)t18 << 2) << 1)));
                                                t21 = t17;
                                                t17 = 0xC7F4750;
                                                t17 = (t17 + 0x1D);
                                                t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                t22 = t17;
                                                t15 = t18;
                                                t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                *(volatile signed char *)((((signed char)t17 + t22) + 0x0));
                                                t17 = 0x9;
                                                t17 = (((int (*)(void))(FUN_0c0e6e5c))());
                                                *(unsigned char *)((t21 + 0x0)) = t17;
                                            } else {
                                                t15 = t18;
                                                t17 = (FUN_0c01e65e(t15, 0x2, 0x40));
                                                t17 = (signed char)t17;
                                                if (t17 != 0) {
                                                    t15 = 0x0;
                                                    t17 = (snd_play_side_se(t15, 0x4C));
                                                    t17 = 0xC7F4750;
                                                    t17 = (t17 + 0x1D);
                                                    t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                    t21 = t17;
                                                    t15 = t18;
                                                    t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                    t17 = (signed char)t17;
                                                    t17 = (t17 + t21);
                                                    *(unsigned char *)((t17 + 0x0)) = ((*(signed char *)((t17 + 0x0))) - 1);
                                                    t17 = 0xC7F4750;
                                                    t17 = (t17 + 0x1D);
                                                    t17 = (t17 + (((signed char)t18 << 2) << 1));
                                                    t21 = t17;
                                                    t15 = t18;
                                                    t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                    t17 = (signed char)t17;
                                                    t17 = (t17 + t21);
                                                    if ((int)(*(signed char *)((t17 + 0x0))) < 0) {
                                                        t15 = t18;
                                                        t17 = (FUN_0c01e75e(t15, (*(signed char *)(((0xC362380 + t19) + 0x0)))));
                                                        t17 = (signed char)t17;
                                                        t17 = (t17 + (((int)g_key_config) + (((signed char)t18 << 2) << 1)));
                                                        *(unsigned char *)((t17 + 0x0)) = 0x8;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t15 = t20;
                                t15 = t18;
                                t17 = (FUN_0c01e65e(t15, 0x2, 0x8));
                                t17 = (signed char)t17;
                                if (t17 == 0) {
                                    t15 = t18;
                                    t17 = (FUN_0c01e65e(t15, 0x2, 0x4));
                                    t17 = (signed char)t17;
                                    if (t17 != 0) {
                                        t17 = 0xC362378;
                                        t17 = (t17 + 0x8);
                                        t17 = (*(signed char *)((t19 + t17)));
                                        if (t17 == 7) {
                                            t15 = 0x0;
                                            t17 = (snd_play_side_se(t15, 0x4D));
                                            t15 = 0xC362378;
                                            t17 = 0x0;
                                            *(unsigned char *)((t15 + 0x2)) = t17;
                                            *(unsigned char *)((t15 + 0x1)) = t17;
                                            (((struct o5_uchar *)0xC362378)->v) = t17;
                                        } else {
                                            if (t17 == 6) {
                                                t15 = 0x0;
                                                t17 = (snd_play_side_se(t15, 0x4D));
                                                t15 = (signed char)t18;
                                                t17 = (opt_reset_key_config(t15));
                                                *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                            } else {
                                                t15 = 0x0;
                                                t17 = (snd_play_side_se(t15, 0x4B));
                                                *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                            }
                                            t15 = 0xC362378;
                                            t15 = (t15 + 0x8);
                                            t15 = (t15 + t19);
                                            *(volatile signed char *)((t15 + 0x0));
                                            t17 = 0x8;
                                            t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                            *(unsigned char *)((t1 + 0x0)) = t17;
                                            t15 = t1;
                                        }
                                        t20 = t15;
                                    }
                                    t21 = t20;
                                } else {
                                    t17 = 0xC362378;
                                    t17 = (t17 + 0x8);
                                    t17 = (*(signed char *)((t19 + t17)));
                                    if (t17 == 7) {
                                        t15 = 0x0;
                                        t17 = (snd_play_side_se(t15, 0x4D));
                                        t15 = 0xC362378;
                                        t17 = 0x0;
                                        *(unsigned char *)((t15 + 0x2)) = t17;
                                        *(unsigned char *)((t15 + 0x1)) = t17;
                                        (((struct o5_uchar *)0xC362378)->v) = t17;
                                    } else {
                                        if (t17 == 6) {
                                            t15 = 0x0;
                                            t17 = (snd_play_side_se(t15, 0x4D));
                                            t15 = (signed char)t18;
                                            t17 = (opt_reset_key_config(t15));
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                        } else {
                                            t15 = 0x0;
                                            t17 = (snd_play_side_se(t15, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t19) + 0x0)) = ((*(signed char *)(((0xC362380 + t19) + 0x0))) + 0x1);
                                        }
                                        t15 = 0xC362378;
                                        t15 = (t15 + 0x8);
                                        t15 = (t15 + t19);
                                        *(volatile signed char *)((t15 + 0x0));
                                        t17 = 0x8;
                                        t17 = (((int (*)(int))(FUN_0c0e6e5c))(t15));
                                        *(unsigned char *)((t2 + 0x0)) = t17;
                                        t15 = t2;
                                    }
                                    t21 = t15;
                                }
                                t18 = (t18 + 0x1);
                                t15 = t21;
                                continue;
                            }
                            break;
                        }
                        t16 = t15;
                    }
                    t0 = t16;
                } else {
                    FUN_0c01e156(0xC36237A, a5, a6);
                    t1 = *(signed char *)0xC36237A;
                    (((struct o2_uchar *)0xC362378)->v) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                    t1 = t3;
                    t3 = 0x0;
                    t15 = 0x1;
                    for (;;) {
                        if ((int)(signed char)t3 < (int)0x2) {
                            t15 = (signed char)t3;
                            t1 = t3;
                            t2 = (FUN_0c01e65e(t1, 0x2, 0x20));
                            t2 = (signed char)t2;
                            if (t2 != 0) {
                                t1 = 0x0;
                                t2 = (snd_play_side_se(t1, 0x4B));
                                t1 = 0xC362378;
                                t1 = (t1 + 0x8);
                                t1 = (t1 + t15);
                                *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                *(volatile signed char *)((t1 + 0x0));
                                t2 = 0x8;
                                t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                *(unsigned char *)((t4 + 0x0)) = t2;
                                t1 = t4;
                                t16 = t1;
                            } else {
                                t1 = t3;
                                t2 = (FUN_0c01e65e(t1, 0x2, 0x10));
                                t2 = (signed char)t2;
                                if (t2 != 0) {
                                    t1 = 0x0;
                                    t2 = (snd_play_side_se(t1, 0x4B));
                                    *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) - 1);
                                    if ((int)(*(signed char *)(((0xC362380 + t15) + 0x0))) >= 0) {
                                    } else {
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = 0x7;
                                    }
                                } else {
                                    if ((int)(*(signed char *)(((0xC362380 + t15) + 0x0))) >= (int)0x6) {
                                    } else {
                                        t1 = t3;
                                        t2 = (FUN_0c01e65e(t1, 0x2, 0x80));
                                        t2 = (signed char)t2;
                                        if (t2 != 0) {
                                            t1 = 0x0;
                                            t2 = (snd_play_side_se(t1, 0x4C));
                                            t2 = 0xC7F4750;
                                            t2 = (t2 + 0x1D);
                                            t2 = (t2 + (((signed char)t3 << 2) << 1));
                                            t17 = t2;
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            t2 = (signed char)t2;
                                            t2 = (t2 + t17);
                                            *(unsigned char *)((t2 + 0x0)) = ((*(signed char *)((t2 + 0x0))) + 0x1);
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            t2 = (signed char)t2;
                                            t2 = (t2 + (((int)g_key_config) + (((signed char)t3 << 2) << 1)));
                                            t17 = t2;
                                            t2 = 0xC7F4750;
                                            t2 = (t2 + 0x1D);
                                            t2 = (t2 + (((signed char)t3 << 2) << 1));
                                            t18 = t2;
                                            t1 = t3;
                                            t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                            *(volatile signed char *)((((signed char)t2 + t18) + 0x0));
                                            t2 = 0x9;
                                            t2 = (((int (*)(void))(FUN_0c0e6e5c))());
                                            *(unsigned char *)((t17 + 0x0)) = t2;
                                        } else {
                                            t1 = t3;
                                            t2 = (FUN_0c01e65e(t1, 0x2, 0x40));
                                            t2 = (signed char)t2;
                                            if (t2 != 0) {
                                                t1 = 0x0;
                                                t2 = (snd_play_side_se(t1, 0x4C));
                                                t2 = 0xC7F4750;
                                                t2 = (t2 + 0x1D);
                                                t2 = (t2 + (((signed char)t3 << 2) << 1));
                                                t17 = t2;
                                                t1 = t3;
                                                t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                t2 = (signed char)t2;
                                                t2 = (t2 + t17);
                                                *(unsigned char *)((t2 + 0x0)) = ((*(signed char *)((t2 + 0x0))) - 1);
                                                t2 = 0xC7F4750;
                                                t2 = (t2 + 0x1D);
                                                t2 = (t2 + (((signed char)t3 << 2) << 1));
                                                t17 = t2;
                                                t1 = t3;
                                                t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                t2 = (signed char)t2;
                                                t2 = (t2 + t17);
                                                if ((int)(*(signed char *)((t2 + 0x0))) < 0) {
                                                    t1 = t3;
                                                    t2 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t15) + 0x0)))));
                                                    t2 = (signed char)t2;
                                                    t2 = (t2 + (((int)g_key_config) + (((signed char)t3 << 2) << 1)));
                                                    *(unsigned char *)((t2 + 0x0)) = 0x8;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t1 = t16;
                            t1 = t3;
                            t2 = (FUN_0c01e65e(t1, 0x2, 0x8));
                            t2 = (signed char)t2;
                            if (t2 == 0) {
                                t1 = t3;
                                t2 = (FUN_0c01e65e(t1, 0x2, 0x4));
                                t2 = (signed char)t2;
                                if (t2 != 0) {
                                    t2 = 0xC362378;
                                    t2 = (t2 + 0x8);
                                    t2 = (*(signed char *)((t15 + t2)));
                                    if (t2 == 7) {
                                        t1 = 0x0;
                                        t2 = (snd_play_side_se(t1, 0x4D));
                                        t1 = 0xC362378;
                                        t2 = 0x0;
                                        *(unsigned char *)((t1 + 0x2)) = t2;
                                        *(unsigned char *)((t1 + 0x1)) = t2;
                                        (((struct o5_uchar *)0xC362378)->v) = t2;
                                    } else {
                                        if (t2 == 6) {
                                            t1 = 0x0;
                                            t2 = (snd_play_side_se(t1, 0x4D));
                                            t1 = (signed char)t3;
                                            t2 = (opt_reset_key_config(t1));
                                            *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                        } else {
                                            t1 = 0x0;
                                            t2 = (snd_play_side_se(t1, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                        }
                                        t1 = 0xC362378;
                                        t1 = (t1 + 0x8);
                                        t1 = (t1 + t15);
                                        *(volatile signed char *)((t1 + 0x0));
                                        t2 = 0x8;
                                        t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                        *(unsigned char *)((t5 + 0x0)) = t2;
                                        t1 = t5;
                                    }
                                    t16 = t1;
                                }
                                t17 = t16;
                            } else {
                                t2 = 0xC362378;
                                t2 = (t2 + 0x8);
                                t2 = (*(signed char *)((t15 + t2)));
                                if (t2 == 7) {
                                    t1 = 0x0;
                                    t2 = (snd_play_side_se(t1, 0x4D));
                                    t1 = 0xC362378;
                                    t2 = 0x0;
                                    *(unsigned char *)((t1 + 0x2)) = t2;
                                    *(unsigned char *)((t1 + 0x1)) = t2;
                                    (((struct o5_uchar *)0xC362378)->v) = t2;
                                } else {
                                    if (t2 == 6) {
                                        t1 = 0x0;
                                        t2 = (snd_play_side_se(t1, 0x4D));
                                        t1 = (signed char)t3;
                                        t2 = (opt_reset_key_config(t1));
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                    } else {
                                        t1 = 0x0;
                                        t2 = (snd_play_side_se(t1, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t15) + 0x0)) = ((*(signed char *)(((0xC362380 + t15) + 0x0))) + 0x1);
                                    }
                                    t1 = 0xC362378;
                                    t1 = (t1 + 0x8);
                                    t1 = (t1 + t15);
                                    *(volatile signed char *)((t1 + 0x0));
                                    t2 = 0x8;
                                    t2 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                    *(unsigned char *)((t6 + 0x0)) = t2;
                                    t1 = t6;
                                }
                                t17 = t1;
                            }
                            t3 = (t3 + 0x1);
                            t1 = t17;
                            continue;
                        }
                        break;
                    }
                    t0 = t1;
                }
                t1 = ((int (*)(int))(FUN_0c01e264))(t0);
                return ((int (*)(void))(0xC01D7D8))();
            }
            if ((unsigned char)t14 == 2) {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(void))(0xC01D7D6))();
                }
                t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o5_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC01D7BA))(0xC362378, 0xC362382, a6, a7);
                }
                return ((int (*)(void))(0xC01D7D8))();
            }
            return ((int (*)(int, int, int, int))(0xC01D7D8))(0xC36237A, a5, a6, a7);
        }
        t0 = *(signed char *)0xC36237A;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC36237A;
            t2 = a5;
            t3 = a6;
            if ((unsigned char)t0 != 1) {
            } else {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
                if ((signed char)t0 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                    snd_play_side_se(0x0, 0x4B);
                    *(volatile signed char *)0xC36237F;
                    (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
                } else {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                    if ((signed char)t0 != 0) {
                        (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                        snd_play_side_se(0x0, 0x4B);
                        if ((int)(*(signed char *)0xC36237F) < 0) {
                            (((struct o7_uchar *)0xC362378)->v) = 0x2;
                        }
                    }
                }
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 == 0) {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                    if ((signed char)t0 != 0) {
                        t0 = *(signed char *)0xC36237F;
                        switch (t0) {
                        case 0:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        case 1:
                            snd_play_side_se(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362378)->v) = 0x1;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x1;
                            break;
                        case 2:
                            (((struct o0_uchar *)0xC362378)->v) = 0x3;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        default:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        }
                    } else {
                        t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC362378)->v) = 0x2;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x2;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            (((struct oD_uchar *)0xC362378)->v) = 0x0;
                            (((struct oC_uchar *)0xC362378)->v) = 0x0;
                            (((struct oB_uchar *)0xC362378)->v) = 0x0;
                            (((struct oA_uchar *)0xC362378)->v) = 0x0;
                            t0 = 0xC362384;
                            t4 = 0xC362382;
                            t5 = 0xC362382;
                        }
                        t6 = t0;
                        t0 = t4;
                        t4 = t5;
                    }
                    t5 = t6;
                    t6 = t0;
                    t0 = t4;
                } else {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                }
                t1 = t5;
                t2 = t6;
                t3 = t0;
            }
            t0 = t1;
            t1 = t2;
            t2 = t3;
        } else {
            FUN_0c01dc58();
            (((struct o2_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237A) + 0x1);
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
            if ((signed char)t3 != 0) {
                (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                snd_play_side_se(0x0, 0x4B);
                *(volatile signed char *)0xC36237F;
                (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
            } else {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                if ((signed char)t3 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                    snd_play_side_se(0x0, 0x4B);
                    if ((int)(*(signed char *)0xC36237F) < 0) {
                        (((struct o7_uchar *)0xC362378)->v) = 0x2;
                    }
                }
            }
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
            if ((signed char)t3 == 0) {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                if ((signed char)t3 != 0) {
                    t3 = *(signed char *)0xC36237F;
                    switch (t3) {
                    case 0:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    case 1:
                        snd_play_side_se(0x0, 0x4D);
                        (((struct o1_uchar *)0xC362378)->v) = 0x1;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x1;
                        break;
                    case 2:
                        (((struct o0_uchar *)0xC362378)->v) = 0x3;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    default:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    }
                } else {
                    t3 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                    if ((signed char)t3 != 0) {
                        (((struct o1_uchar *)0xC362378)->v) = 0x2;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x2;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        (((struct oD_uchar *)0xC362378)->v) = 0x0;
                        (((struct oC_uchar *)0xC362378)->v) = 0x0;
                        (((struct oB_uchar *)0xC362378)->v) = 0x0;
                        (((struct oA_uchar *)0xC362378)->v) = 0x0;
                        t3 = 0xC362384;
                        t4 = 0xC362382;
                        t5 = 0xC362382;
                    }
                    t6 = t3;
                    t3 = t4;
                    t4 = t5;
                }
                t5 = t6;
                t6 = t3;
                t3 = t4;
            } else {
                (((struct o0_uchar *)0xC362378)->v) = 0x2;
                (((struct o1_uchar *)0xC362378)->v) = 0x0;
                (((struct o2_uchar *)0xC362378)->v) = 0x0;
                (((struct o4_uchar *)0xC362378)->v) = 0x0;
            }
            t0 = t5;
            t1 = t6;
            t2 = t3;
        }
    } else {
        (((struct o4_uchar *)0xC362378)->v) = 0x1;
        (((struct o5_uchar *)0xC362378)->v) = 0x0;
        (((struct o7_uchar *)0xC362378)->v) = 0x0;
        (((struct o8_uchar *)0xC362378)->v) = 0x7;
        (((struct o9_uchar *)0xC362378)->v) = 0x7;
        (((struct oD_uchar *)0xC362378)->v) = 0x0;
        (((struct oC_uchar *)0xC362378)->v) = 0x0;
        (((struct oB_uchar *)0xC362378)->v) = 0x0;
        (((struct oA_uchar *)0xC362378)->v) = 0x0;
        (((struct o10_uint *)0xC362378)->v) = 0x0;
        (((struct o0_uchar *)0xC362378)->v) = ((*(signed char *)0xC362378) + 0x1);
        (((struct o10_uint *)0xC362378)->v) = (unsigned short)(((((struct o10_int *)0xC362378)->v)) + 0x5B0);
        t0 = *(signed char *)0xC362379;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 == 1) {
                t1 = *(signed char *)0xC36237A;
                if ((unsigned char)t1 != 0) {
                    t2 = 0xC36237A;
                    if ((unsigned char)t1 == 1) {
                        t3 = (unsigned char)t1;
                        t1 = 0xC36237A;
                        t4 = 0x0;
                        t5 = 0x1;
                        for (;;) {
                            if ((int)(signed char)t4 < (int)0x2) {
                                t5 = (signed char)t4;
                                t1 = t4;
                                t3 = (FUN_0c01e65e(t1, 0x2, 0x20));
                                t3 = (signed char)t3;
                                if (t3 != 0) {
                                    t1 = 0x0;
                                    t3 = (snd_play_side_se(t1, 0x4B));
                                    t1 = 0xC362378;
                                    t1 = (t1 + 0x8);
                                    t1 = (t1 + t5);
                                    *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                    *(volatile signed char *)((t1 + 0x0));
                                    t3 = 0x8;
                                    t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                    *(unsigned char *)((t7 + 0x0)) = t3;
                                    t1 = t7;
                                    t6 = t1;
                                } else {
                                    t1 = t4;
                                    t3 = (FUN_0c01e65e(t1, 0x2, 0x10));
                                    t3 = (signed char)t3;
                                    if (t3 != 0) {
                                        t1 = 0x0;
                                        t3 = (snd_play_side_se(t1, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) - 1);
                                        if ((int)(*(signed char *)(((0xC362380 + t5) + 0x0))) >= 0) {
                                        } else {
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = 0x7;
                                        }
                                    } else {
                                        if ((int)(*(signed char *)(((0xC362380 + t5) + 0x0))) >= (int)0x6) {
                                        } else {
                                            t1 = t4;
                                            t3 = (FUN_0c01e65e(t1, 0x2, 0x80));
                                            t3 = (signed char)t3;
                                            if (t3 != 0) {
                                                t1 = 0x0;
                                                t3 = (snd_play_side_se(t1, 0x4C));
                                                t3 = 0xC7F4750;
                                                t3 = (t3 + 0x1D);
                                                t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                t14 = t3;
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                t3 = (signed char)t3;
                                                t3 = (t3 + t14);
                                                *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((t3 + 0x0))) + 0x1);
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                t3 = (signed char)t3;
                                                t3 = (t3 + (((int)g_key_config) + (((signed char)t4 << 2) << 1)));
                                                t14 = t3;
                                                t3 = 0xC7F4750;
                                                t3 = (t3 + 0x1D);
                                                t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                t15 = t3;
                                                t1 = t4;
                                                t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                *(volatile signed char *)((((signed char)t3 + t15) + 0x0));
                                                t3 = 0x9;
                                                t3 = (((int (*)(void))(FUN_0c0e6e5c))());
                                                *(unsigned char *)((t14 + 0x0)) = t3;
                                            } else {
                                                t1 = t4;
                                                t3 = (FUN_0c01e65e(t1, 0x2, 0x40));
                                                t3 = (signed char)t3;
                                                if (t3 != 0) {
                                                    t1 = 0x0;
                                                    t3 = (snd_play_side_se(t1, 0x4C));
                                                    t3 = 0xC7F4750;
                                                    t3 = (t3 + 0x1D);
                                                    t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                    t14 = t3;
                                                    t1 = t4;
                                                    t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                    t3 = (signed char)t3;
                                                    t3 = (t3 + t14);
                                                    *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((t3 + 0x0))) - 1);
                                                    t3 = 0xC7F4750;
                                                    t3 = (t3 + 0x1D);
                                                    t3 = (t3 + (((signed char)t4 << 2) << 1));
                                                    t14 = t3;
                                                    t1 = t4;
                                                    t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                    t3 = (signed char)t3;
                                                    t3 = (t3 + t14);
                                                    if ((int)(*(signed char *)((t3 + 0x0))) < 0) {
                                                        t1 = t4;
                                                        t3 = (FUN_0c01e75e(t1, (*(signed char *)(((0xC362380 + t5) + 0x0)))));
                                                        t3 = (signed char)t3;
                                                        t3 = (t3 + (((int)g_key_config) + (((signed char)t4 << 2) << 1)));
                                                        *(unsigned char *)((t3 + 0x0)) = 0x8;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t1 = t6;
                                t1 = t4;
                                t3 = (FUN_0c01e65e(t1, 0x2, 0x8));
                                t3 = (signed char)t3;
                                if (t3 == 0) {
                                    t1 = t4;
                                    t3 = (FUN_0c01e65e(t1, 0x2, 0x4));
                                    t3 = (signed char)t3;
                                    if (t3 != 0) {
                                        t3 = 0xC362378;
                                        t3 = (t3 + 0x8);
                                        t3 = (*(signed char *)((t5 + t3)));
                                        if (t3 == 7) {
                                            t1 = 0x0;
                                            t3 = (snd_play_side_se(t1, 0x4D));
                                            t1 = 0xC362378;
                                            t3 = 0x0;
                                            *(unsigned char *)((t1 + 0x2)) = t3;
                                            *(unsigned char *)((t1 + 0x1)) = t3;
                                            (((struct o5_uchar *)0xC362378)->v) = t3;
                                        } else {
                                            if (t3 == 6) {
                                                t1 = 0x0;
                                                t3 = (snd_play_side_se(t1, 0x4D));
                                                t1 = (signed char)t4;
                                                t3 = (opt_reset_key_config(t1));
                                                *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                            } else {
                                                t1 = 0x0;
                                                t3 = (snd_play_side_se(t1, 0x4B));
                                                *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                            }
                                            t1 = 0xC362378;
                                            t1 = (t1 + 0x8);
                                            t1 = (t1 + t5);
                                            *(volatile signed char *)((t1 + 0x0));
                                            t3 = 0x8;
                                            t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                            *(unsigned char *)((t8 + 0x0)) = t3;
                                            t1 = t8;
                                        }
                                        t6 = t1;
                                    }
                                    t14 = t6;
                                } else {
                                    t3 = 0xC362378;
                                    t3 = (t3 + 0x8);
                                    t3 = (*(signed char *)((t5 + t3)));
                                    if (t3 == 7) {
                                        t1 = 0x0;
                                        t3 = (snd_play_side_se(t1, 0x4D));
                                        t1 = 0xC362378;
                                        t3 = 0x0;
                                        *(unsigned char *)((t1 + 0x2)) = t3;
                                        *(unsigned char *)((t1 + 0x1)) = t3;
                                        (((struct o5_uchar *)0xC362378)->v) = t3;
                                    } else {
                                        if (t3 == 6) {
                                            t1 = 0x0;
                                            t3 = (snd_play_side_se(t1, 0x4D));
                                            t1 = (signed char)t4;
                                            t3 = (opt_reset_key_config(t1));
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                        } else {
                                            t1 = 0x0;
                                            t3 = (snd_play_side_se(t1, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t5) + 0x0)) = ((*(signed char *)(((0xC362380 + t5) + 0x0))) + 0x1);
                                        }
                                        t1 = 0xC362378;
                                        t1 = (t1 + 0x8);
                                        t1 = (t1 + t5);
                                        *(volatile signed char *)((t1 + 0x0));
                                        t3 = 0x8;
                                        t3 = (((int (*)(int))(FUN_0c0e6e5c))(t1));
                                        *(unsigned char *)((t9 + 0x0)) = t3;
                                        t1 = t9;
                                    }
                                    t14 = t1;
                                }
                                t4 = (t4 + 0x1);
                                t1 = t14;
                                continue;
                            }
                            break;
                        }
                        t2 = t1;
                    }
                    t1 = t2;
                    t2 = 0xC362384;
                    t3 = 0xC362382;
                } else {
                    FUN_0c01e156(0xC36237A, 0xC362384, 0xC362382);
                    t4 = *(signed char *)0xC36237A;
                    (((struct o2_uchar *)0xC362378)->v) = (t4 + 0x1);
                    t5 = (t4 + 0x1);
                    t4 = t10;
                    t6 = 0x0;
                    t7 = 0x1;
                    for (;;) {
                        if ((int)(signed char)t6 < (int)0x2) {
                            t7 = (signed char)t6;
                            t4 = t6;
                            t5 = (FUN_0c01e65e(t4, 0x2, 0x20));
                            t5 = (signed char)t5;
                            if (t5 != 0) {
                                t4 = 0x0;
                                t5 = (snd_play_side_se(t4, 0x4B));
                                t4 = 0xC362378;
                                t4 = (t4 + 0x8);
                                t4 = (t4 + t7);
                                *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                *(volatile signed char *)((t4 + 0x0));
                                t5 = 0x8;
                                t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                *(unsigned char *)((t4 + 0x0)) = t5;
                                t8 = t4;
                            } else {
                                t4 = t6;
                                t5 = (FUN_0c01e65e(t4, 0x2, 0x10));
                                t5 = (signed char)t5;
                                if (t5 != 0) {
                                    t4 = 0x0;
                                    t5 = (snd_play_side_se(t4, 0x4B));
                                    *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) - 1);
                                    if ((int)(*(signed char *)(((0xC362380 + t7) + 0x0))) >= 0) {
                                    } else {
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = 0x7;
                                    }
                                } else {
                                    if ((int)(*(signed char *)(((0xC362380 + t7) + 0x0))) >= (int)0x6) {
                                    } else {
                                        t4 = t6;
                                        t5 = (FUN_0c01e65e(t4, 0x2, 0x80));
                                        t5 = (signed char)t5;
                                        if (t5 != 0) {
                                            t4 = 0x0;
                                            t5 = (snd_play_side_se(t4, 0x4C));
                                            t5 = 0xC7F4750;
                                            t5 = (t5 + 0x1D);
                                            t5 = (t5 + (((signed char)t6 << 2) << 1));
                                            t9 = t5;
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            t5 = (signed char)t5;
                                            t5 = (t5 + t9);
                                            *(unsigned char *)((t5 + 0x0)) = ((*(signed char *)((t5 + 0x0))) + 0x1);
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            t5 = (signed char)t5;
                                            t5 = (t5 + (((int)g_key_config) + (((signed char)t6 << 2) << 1)));
                                            t9 = t5;
                                            t5 = 0xC7F4750;
                                            t5 = (t5 + 0x1D);
                                            t5 = (t5 + (((signed char)t6 << 2) << 1));
                                            t10 = t5;
                                            t4 = t6;
                                            t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                            *(volatile signed char *)((((signed char)t5 + t10) + 0x0));
                                            t5 = 0x9;
                                            t5 = (((int (*)(void))(FUN_0c0e6e5c))());
                                            *(unsigned char *)((t9 + 0x0)) = t5;
                                        } else {
                                            t4 = t6;
                                            t5 = (FUN_0c01e65e(t4, 0x2, 0x40));
                                            t5 = (signed char)t5;
                                            if (t5 != 0) {
                                                t4 = 0x0;
                                                t5 = (snd_play_side_se(t4, 0x4C));
                                                t5 = 0xC7F4750;
                                                t5 = (t5 + 0x1D);
                                                t5 = (t5 + (((signed char)t6 << 2) << 1));
                                                t9 = t5;
                                                t4 = t6;
                                                t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                t5 = (signed char)t5;
                                                t5 = (t5 + t9);
                                                *(unsigned char *)((t5 + 0x0)) = ((*(signed char *)((t5 + 0x0))) - 1);
                                                t5 = 0xC7F4750;
                                                t5 = (t5 + 0x1D);
                                                t5 = (t5 + (((signed char)t6 << 2) << 1));
                                                t9 = t5;
                                                t4 = t6;
                                                t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                t5 = (signed char)t5;
                                                t5 = (t5 + t9);
                                                if ((int)(*(signed char *)((t5 + 0x0))) < 0) {
                                                    t4 = t6;
                                                    t5 = (FUN_0c01e75e(t4, (*(signed char *)(((0xC362380 + t7) + 0x0)))));
                                                    t5 = (signed char)t5;
                                                    t5 = (t5 + (((int)g_key_config) + (((signed char)t6 << 2) << 1)));
                                                    *(unsigned char *)((t5 + 0x0)) = 0x8;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t4 = t8;
                            t4 = t6;
                            t5 = (FUN_0c01e65e(t4, 0x2, 0x8));
                            t5 = (signed char)t5;
                            if (t5 == 0) {
                                t4 = t6;
                                t5 = (FUN_0c01e65e(t4, 0x2, 0x4));
                                t5 = (signed char)t5;
                                if (t5 != 0) {
                                    t5 = 0xC362378;
                                    t5 = (t5 + 0x8);
                                    t5 = (*(signed char *)((t7 + t5)));
                                    if (t5 == 7) {
                                        t4 = 0x0;
                                        t5 = (snd_play_side_se(t4, 0x4D));
                                        t4 = 0xC362378;
                                        t5 = 0x0;
                                        *(unsigned char *)((t4 + 0x2)) = t5;
                                        *(unsigned char *)((t4 + 0x1)) = t5;
                                        (((struct o5_uchar *)0xC362378)->v) = t5;
                                    } else {
                                        if (t5 == 6) {
                                            t4 = 0x0;
                                            t5 = (snd_play_side_se(t4, 0x4D));
                                            t4 = (signed char)t6;
                                            t5 = (opt_reset_key_config(t4));
                                            *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                        } else {
                                            t4 = 0x0;
                                            t5 = (snd_play_side_se(t4, 0x4B));
                                            *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                        }
                                        t4 = 0xC362378;
                                        t4 = (t4 + 0x8);
                                        t4 = (t4 + t7);
                                        *(volatile signed char *)((t4 + 0x0));
                                        t5 = 0x8;
                                        t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                        *(unsigned char *)((t4 + 0x0)) = t5;
                                    }
                                    t8 = t4;
                                }
                                t9 = t8;
                            } else {
                                t5 = 0xC362378;
                                t5 = (t5 + 0x8);
                                t5 = (*(signed char *)((t7 + t5)));
                                if (t5 == 7) {
                                    t4 = 0x0;
                                    t5 = (snd_play_side_se(t4, 0x4D));
                                    t4 = 0xC362378;
                                    t5 = 0x0;
                                    *(unsigned char *)((t4 + 0x2)) = t5;
                                    *(unsigned char *)((t4 + 0x1)) = t5;
                                    (((struct o5_uchar *)0xC362378)->v) = t5;
                                } else {
                                    if (t5 == 6) {
                                        t4 = 0x0;
                                        t5 = (snd_play_side_se(t4, 0x4D));
                                        t4 = (signed char)t6;
                                        t5 = (opt_reset_key_config(t4));
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                    } else {
                                        t4 = 0x0;
                                        t5 = (snd_play_side_se(t4, 0x4B));
                                        *(unsigned char *)(((0xC362380 + t7) + 0x0)) = ((*(signed char *)(((0xC362380 + t7) + 0x0))) + 0x1);
                                    }
                                    t4 = 0xC362378;
                                    t4 = (t4 + 0x8);
                                    t4 = (t4 + t7);
                                    *(volatile signed char *)((t4 + 0x0));
                                    t5 = 0x8;
                                    t5 = (((int (*)(int))(FUN_0c0e6e5c))(t4));
                                    *(unsigned char *)((t4 + 0x0)) = t5;
                                }
                                t9 = t4;
                            }
                            t6 = (t6 + 0x1);
                            t4 = t9;
                            continue;
                        }
                        break;
                    }
                    t1 = t4;
                }
                t4 = ((int (*)(int, int, int))(FUN_0c01e264))(t1, t2, t3);
                return ((int (*)(void))(0xC01D7D8))();
            }
            if ((unsigned char)t0 == 2) {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(void))(0xC01D7D6))();
                }
                t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o5_uchar *)0xC362378)->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC01D7BA))(0xC362378, 0xC362382, a6, a7);
                }
                return ((int (*)(void))(0xC01D7D8))();
            }
            return ((int (*)(int, int, int, int))(0xC01D7D8))(0xC36237A, 0xC362384, 0xC362382, a7);
        }
        t0 = *(signed char *)0xC36237A;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC36237A;
            t2 = 0xC362384;
            t3 = 0xC362382;
            if ((unsigned char)t0 != 1) {
            } else {
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
                if ((signed char)t0 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                    snd_play_side_se(0x0, 0x4B);
                    *(volatile signed char *)0xC36237F;
                    (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
                } else {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                    if ((signed char)t0 != 0) {
                        (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                        snd_play_side_se(0x0, 0x4B);
                        if ((int)(*(signed char *)0xC36237F) < 0) {
                            (((struct o7_uchar *)0xC362378)->v) = 0x2;
                        }
                    }
                }
                t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
                if ((signed char)t0 == 0) {
                    t0 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                    if ((signed char)t0 != 0) {
                        t0 = *(signed char *)0xC36237F;
                        switch (t0) {
                        case 0:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        case 1:
                            snd_play_side_se(0x0, 0x4D);
                            (((struct o1_uchar *)0xC362378)->v) = 0x1;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x1;
                            break;
                        case 2:
                            (((struct o0_uchar *)0xC362378)->v) = 0x3;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        default:
                            (((struct o0_uchar *)0xC362378)->v) = 0x2;
                            (((struct o1_uchar *)0xC362378)->v) = 0x0;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            break;
                        }
                    } else {
                        t0 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC362378)->v) = 0x2;
                            (((struct o2_uchar *)0xC362378)->v) = 0x0;
                            (((struct o5_uchar *)0xC362378)->v) = 0x2;
                            (((struct o4_uchar *)0xC362378)->v) = 0x0;
                            (((struct oD_uchar *)0xC362378)->v) = 0x0;
                            (((struct oC_uchar *)0xC362378)->v) = 0x0;
                            (((struct oB_uchar *)0xC362378)->v) = 0x0;
                            (((struct oA_uchar *)0xC362378)->v) = 0x0;
                            t0 = 0xC362384;
                            t4 = 0xC362382;
                            t5 = 0xC362382;
                        }
                        t6 = t0;
                        t0 = t4;
                        t4 = t5;
                    }
                    t5 = t6;
                    t6 = t0;
                    t0 = t4;
                } else {
                    (((struct o0_uchar *)0xC362378)->v) = 0x2;
                    (((struct o1_uchar *)0xC362378)->v) = 0x0;
                    (((struct o2_uchar *)0xC362378)->v) = 0x0;
                    (((struct o4_uchar *)0xC362378)->v) = 0x0;
                }
                t1 = t5;
                t2 = t6;
                t3 = t0;
            }
            t0 = t1;
            t1 = t2;
            t2 = t3;
        } else {
            FUN_0c01dc58();
            (((struct o2_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237A) + 0x1);
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x20);
            if ((signed char)t3 != 0) {
                (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) + 0x1);
                snd_play_side_se(0x0, 0x4B);
                *(volatile signed char *)0xC36237F;
                (((struct o7_uchar *)0xC362378)->v) = (((int (*)(void))(FUN_0c0e6e5c))());
            } else {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x10);
                if ((signed char)t3 != 0) {
                    (((struct o7_uchar *)0xC362378)->v) = ((*(signed char *)0xC36237F) - 1);
                    snd_play_side_se(0x0, 0x4B);
                    if ((int)(*(signed char *)0xC36237F) < 0) {
                        (((struct o7_uchar *)0xC362378)->v) = 0x2;
                    }
                }
            }
            t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x8);
            if ((signed char)t3 == 0) {
                t3 = FUN_0c01e65e((*(signed char *)0xC36237E), 0x2, 0x4);
                if ((signed char)t3 != 0) {
                    t3 = *(signed char *)0xC36237F;
                    switch (t3) {
                    case 0:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    case 1:
                        snd_play_side_se(0x0, 0x4D);
                        (((struct o1_uchar *)0xC362378)->v) = 0x1;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x1;
                        break;
                    case 2:
                        (((struct o0_uchar *)0xC362378)->v) = 0x3;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    default:
                        (((struct o0_uchar *)0xC362378)->v) = 0x2;
                        (((struct o1_uchar *)0xC362378)->v) = 0x0;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        break;
                    }
                } else {
                    t3 = FUN_0c01e6b4((*(signed char *)0xC36237E));
                    if ((signed char)t3 != 0) {
                        (((struct o1_uchar *)0xC362378)->v) = 0x2;
                        (((struct o2_uchar *)0xC362378)->v) = 0x0;
                        (((struct o5_uchar *)0xC362378)->v) = 0x2;
                        (((struct o4_uchar *)0xC362378)->v) = 0x0;
                        (((struct oD_uchar *)0xC362378)->v) = 0x0;
                        (((struct oC_uchar *)0xC362378)->v) = 0x0;
                        (((struct oB_uchar *)0xC362378)->v) = 0x0;
                        (((struct oA_uchar *)0xC362378)->v) = 0x0;
                        t3 = 0xC362384;
                        t4 = 0xC362382;
                        t5 = 0xC362382;
                    }
                    t6 = t3;
                    t3 = t4;
                    t4 = t5;
                }
                t5 = t6;
                t6 = t3;
                t3 = t4;
            } else {
                (((struct o0_uchar *)0xC362378)->v) = 0x2;
                (((struct o1_uchar *)0xC362378)->v) = 0x0;
                (((struct o2_uchar *)0xC362378)->v) = 0x0;
                (((struct o4_uchar *)0xC362378)->v) = 0x0;
            }
            t0 = t5;
            t1 = t6;
            t2 = t3;
        }
    }
    FUN_0c01dd08(t0, t1, t2);
    return ((int (*)(void))(0xC01D7D8))();
}

int FUN_0c01d924(void)
{
    register int t0;

    t0 = *(signed char *)0xC362378;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            
            return (unsigned char)t0;
        }
    } else {
        FUN_0c01e594();
        (((struct o10_uint *)0xC362378)->v) = 0x0;
        (((struct o0_uchar *)0xC362378)->v) = ((*(signed char *)0xC362378) + 0x1);
    }
    (((struct o10_uint *)0xC362378)->v) = (unsigned short)(((((struct o10_int *)0xC362378)->v)) + 0x5B0);
    return FUN_0c01e5cc();
}

int ui_draw_element_sprite(int obj)
{
    int req_buf[16];
    register int entry;
    register int state;

    entry = *(int *)((obj + 0x2C));
    *(float *)(((int)req_buf + 12)) = (((((struct field_1c_float *)(obj))->field_1c)) + (float)(*(short *)((entry + 0x6))));
    *(float *)(((int)req_buf + 16)) = (((((struct field_20_float *)(obj))->field_20)) + (float)(*(short *)((entry + 0x8))));
    *(float *)(((int)req_buf + 20)) = ((((struct field_24_float *)(obj))->field_24));
    *(float *)(((int)req_buf + 24)) = ((((struct field_14_float *)(obj))->field_14));
    *(float *)(((int)req_buf + 28)) = ((((struct field_18_float *)(obj))->field_18));
    *(unsigned int *)(((int)req_buf + 48)) = (*(int *)((obj + 0x28)));
    *(float *)(((int)req_buf + 52)) = ((((struct field_10_float *)(obj))->field_10));
    *(unsigned int *)(((int)req_buf + 60)) = (unsigned short)(*(short *)((entry + 0x4)));
    *(int *)((int)req_buf + 4) = 0x0;
    state = (*(signed char *)((obj + 0xC)));
    *(int *)((int)req_buf + 0) = state;
    return (ui_sprite_queue_add((((int)req_buf + 0) + 0x8), 0xC17FDB0, (*(short *)((entry + 0x0))), (*(short *)((entry + 0x2))), state, 0x0));
}

int FUN_0c01d9e0(int a4, int a5, float f4)
{
    int t0;
    register int t1;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t1 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t1 << 1) + t1) << 2) + 0xC1807F4) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC1807F4)))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC1807F4)))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC180708) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t1 = *(signed char *)((a4 + 0x7));
    if ((t1 != 0) && (t0 = *(signed char *)0xC36237C, t0 != 0)) {
        if ((*(signed char *)0xC36237D) != 0) {
            return t1;
        }
        return ui_draw_element_sprite(a4);
    }
    return t1;
}

int FUN_0c01da70(int a4, int a5, float f4)
{
    register int t15;
    register int t16;
    int t17;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        (((struct o1C_float *)(a4))->v) = ((((struct o0_float *)0xC180830)->v));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)0xC180830)->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)0xC180830)->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)0xC36237E) << 2) + 0xC18071C) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t15 = *(signed char *)((a4 + 0x7));
    if ((t15 != 0) && ((t16 = *(signed char *)0xC36237C, t16 != 0) && (t17 = *(signed char *)0xC36237D, t17 == 0))) {
        return ui_draw_element_sprite(a4);
    }
    return t15;
}

int FUN_0c01dada(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0xC18058A;
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t2 = *(signed char *)0xC36237F;
    (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t2 << 2) + t2) << 2) + 0xC180938) + 0x0)));
    (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o14_float *)(a4))->v) = ((((struct oC_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    (((struct o18_float *)(a4))->v) = ((((struct o10_float *)(((signed char)(((t2 << 2) + t2) << 2) + 0xC180938)))->v));
    u0 = ((((struct o0_float *)0xC01DBE8)->v));
    u0 = u0 + ((((struct o4_float *)0xC01DBE8)->v)) * (math_sin_angle16((*(int *)0xC362388)));
    (((struct o10_float *)(a4))->v) = u0;
    t2 = *(signed char *)((a4 + 0x7));
    if ((t2 != 0) && ((t0 = *(signed char *)0xC36237C, t0 != 0) && (t1 = *(signed char *)0xC36237D, t1 == 0))) {
        return ui_draw_element_sprite(a4);
    }
    return t2;
}

int FUN_0c01db74(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o1C_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 9.99999997e-07f;
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = 0xC180698;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return ((int (*)(int, int, int, int, float, float))(0xC01DC42))(a4, 0x0, a6, a7, 1.0f, 0.0f);
            }
            return ((int (*)(int, int, int, int, float, float))(0xC01DC26))(a4, 0x0, a6, a7, 1.0f, 0.0f);
        }
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        (((struct o10_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    }
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = (t0 + 0x1);
    if ((int)t0 >= (int)0x4650) {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        return ((int (*)(int, int, int, int, float, float))(0xC01DC1E))(a4, 0x0, a6, a7, 1.0f, 0.0f);
    }
    return ((int (*)(int, int, int, int, float, float))(0xC01DC42))(a4, 0x0, a6, a7, 1.0f, 0.0f);
}

int FUN_0c01dc58(void)
{
    register int t0;
    register int t6;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x3)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x2)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x1)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x0)) = 0x0;
        if ((int)t0 < (int)0x5) {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x0;
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = t0;
            t6 = t0;
        } else {
            if ((int)t0 < (int)0x6) {
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x1;
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = (t0 + 0xFB);
                t6 = (t0 + 0xFB);
            } else {
                if ((int)t0 < (int)0x7) {
                    *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x2;
                    t2 = 0xFA;
                } else {
                    *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x4;
                    t2 = 0xF9;
                }
                *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x5)) = (t2 + t0);
                t6 = (t2 + t0);
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t6;
}

int FUN_0c01dd6a(int a4, int a5, float f4)
{
    int t0;
    register int t1;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t1 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t1 << 1) + t1) << 2) + 0xC18083C) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC18083C)))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC18083C)))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC180724) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t1 = *(signed char *)((a4 + 0x7));
    if ((t1 != 0) && (t0 = *(signed char *)0xC36237C, t0 != 0)) {
        t0 = *(signed char *)0xC36237D;
        if ((unsigned char)t0 == 1) {
            return ui_draw_element_sprite(a4);
        }
        return (unsigned char)t0;
    }
    return t1;
}

int FUN_0c01dde2(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t1 = *(signed char *)((a4 + 0x6));
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)((((signed char)((((t1 << 2) + t1) << 2) << 1) + 0xC180728) + ((unsigned char)(*(signed char *)((a4 + 0x5))) << 2))));
        t1 = *(signed char *)((a4 + 0x6));
        t2 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)(((((unsigned char)((unsigned short)t1 * (unsigned short)0x78) + 0xC180848) + (signed char)(((t2 << 1) + t2) << 2)) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)((((unsigned char)((unsigned short)t1 * (unsigned short)0x78) + 0xC180848) + (signed char)(((t2 << 1) + t2) << 2))))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)((((unsigned char)((unsigned short)t1 * (unsigned short)0x78) + 0xC180848) + (signed char)(((t2 << 1) + t2) << 2))))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
    }
    t1 = pad_get_type((*(signed char *)((a4 + 0x6))));
    switch (t1) {
    case 0:
        (((struct o10_float *)(a4))->v) = (*(float *)0xC01DF4C);
        break;
    case 1:
        t1 = *(signed char *)((a4 + 0x6));
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((signed char)((((t1 << 2) + t1) << 2) << 1) + 0xC180728) + ((unsigned char)(*(signed char *)((a4 + 0x5))) << 2)) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
        break;
    case 2:
        t1 = *(signed char *)((a4 + 0x6));
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)((((((signed char)((((t1 << 2) + t1) << 2) << 1) + 0xC180728) + 0x50) + ((unsigned char)(*(signed char *)((a4 + 0x5))) << 2)) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
        break;
    }
    t1 = *(signed char *)((a4 + 0x7));
    if ((t1 != 0) && (t0 = *(signed char *)0xC36237C, t0 != 0)) {
        t0 = *(signed char *)0xC36237D;
        if ((unsigned char)t0 == 1) {
            return ui_draw_element_sprite(a4);
        }
        return (unsigned char)t0;
    }
    return t1;
}

float FUN_0c01dee2(int a4)
{
    int stk[2];
    register int t10;
    register int t13;
    register int t15;
    register int t30;
    register int t36;
    register float u58;
    register float u59;
    register float u46;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x6))) << 2) + 0xC1807EC) + 0x0)));
    }
    t10 = pad_get_type((*(signed char *)((a4 + 0x6))));
    if (t10 != 0) {
        if ((t10 == 1) || (t10 == 2)) {
            *(unsigned char *)((a4 + 0x7)) = 0x1;
        }
    } else {
        *(unsigned char *)((a4 + 0x7)) = 0x0;
    }
    t13 = *(signed char *)((a4 + 0x6));
    t15 = *(signed char *)((((unsigned char)t13 + 0xC362380) + 0x0));
    (((struct o1C_float *)(a4))->v) = (*(float *)((((0xC180974 + (unsigned char)(((((t13 << 1) + t13) << 2) << 2) << 1)) + (signed char)(((t15 << 1) + t15) << 2)) + 0x0)));
    (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((0xC180974 + (unsigned char)(((((t13 << 1) + t13) << 2) << 2) << 1)) + (signed char)(((t15 << 1) + t15) << 2))))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((0xC180974 + (unsigned char)(((((t13 << 1) + t13) << 2) << 2) << 1)) + (signed char)(((t15 << 1) + t15) << 2))))->v));
    if ((*(signed char *)((0xC362380 + (unsigned char)(*(signed char *)((a4 + 0x6)))))) == 7) {
        (((struct o14_float *)(a4))->v) = ((((struct o0_float *)0xC01E198)->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
    } else {
        if ((*(signed char *)((0xC362380 + (unsigned char)(*(signed char *)((a4 + 0x6)))))) == 6) {
            (((struct o14_float *)(a4))->v) = ((((struct o4_float *)0xC01E198)->v));
            u46 = ((((struct o8_float *)0xC01E198)->v));
        } else {
            t30 = *(signed char *)((a4 + 0x6));
            *(unsigned char *)(((int)stk + 4)) = t30;
            *(unsigned int *)(((int)stk + 0)) = (unsigned char)t30;
            t36 = *(signed char *)(((((int)g_key_config) + (((unsigned char)t30 << 2) << 1)) + (signed char)(FUN_0c01e75e((*(signed char *)(((int)stk + 4))), (*(signed char *)(((0xC362380 + (*(int *)(((int)stk + 0)))) + 0x0)))))));
            (((struct o14_float *)(a4))->v) = (*(float *)(((0xC180A34 + ((t36 << 2) << 1)) + 0x0)));
            u46 = ((((struct o4_float *)((0xC180A34 + ((t36 << 2) << 1))))->v));
        }
        (((struct o18_float *)(a4))->v) = u46;
    }
    u58 = (((struct o1C_float *)0xC01E198)->v);
    u59 = ((((struct o18_float *)0xC01E198)->v));
    u59 = u59 + u58 * (math_sin_angle16((*(int *)0xC362388)));
    (((struct o10_float *)(a4))->v) = u59;
    if ((*(signed char *)((a4 + 0x7))) != 0) {
        *(volatile signed char *)0xC36237C;
    }
    return u58;
}

int FUN_0c01e05a(int a4)
{
    int stk[1];
    register int t2;
    register int t9;
    register int t12;
    register int t26;
    register int t27;
    register int t47;
    register int t51;
    int t48;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t2 = *(signed char *)((a4 + 0x6));
        *(unsigned char *)(((int)stk + 0)) = t2;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((*(signed char *)(((((int)g_key_config) + (((unsigned char)t2 << 2) << 1)) + (signed char)(FUN_0c01e75e((*(signed char *)(((int)stk + 0))), (*(signed char *)((a4 + 0x5)))))))) << 2) + 0xC1807C8) + 0x0)));
        t9 = *(signed char *)((a4 + 0x6));
        t12 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)(((((unsigned char)(((((t9 << 2) << 1) + t9) << 2) << 1) + 0xC180A7C) + (signed char)(((t12 << 1) + t12) << 2)) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)((((unsigned char)(((((t9 << 2) << 1) + t9) << 2) << 1) + 0xC180A7C) + (signed char)(((t12 << 1) + t12) << 2))))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)((((unsigned char)(((((t9 << 2) << 1) + t9) << 2) << 1) + 0xC180A7C) + (signed char)(((t12 << 1) + t12) << 2))))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
    }
    t26 = pad_get_type((*(signed char *)((a4 + 0x6))));
    if (t26 != 0) {
        if ((t26 == 1) || (t26 == 2)) {
            t27 = *(signed char *)((a4 + 0x6));
            *(unsigned char *)(((int)stk + 0)) = t27;
            *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((*(signed char *)(((((int)g_key_config) + (((unsigned char)t27 << 2) << 1)) + (signed char)(FUN_0c01e75e((*(signed char *)(((int)stk + 0))), (*(signed char *)((a4 + 0x5)))))))) << 2) + 0xC1807C8) + 0x0)));
            (((struct o10_float *)(a4))->v) = 1.0f;
        }
    } else {
        (((struct o10_float *)(a4))->v) = (*(float *)0xC01E1CC);
    }
    t47 = *(signed char *)((a4 + 0x7));
    if ((t47 != 0) && (t48 = *(signed char *)0xC36237C, t48 != 0)) {
        t51 = *(signed char *)0xC36237D;
        if ((unsigned char)t51 == 1) {
            return ui_draw_element_sprite(a4);
        }
        return (unsigned char)t51;
    }
    return t47;
}

int FUN_0c01e156(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0xC01E256))(a4, 0x0, a6, 0x0);
}

int FUN_0c01e2e4(int a4, int a5, float f4)
{
    register int t0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t0 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC180B18) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B18)))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B18)))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC180B0C) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x7));
    if (t0 != 0) {
        return ui_draw_element_sprite(a4);
    }
    return t0;
}

int FUN_0c01e444(void)
{
    register int t0;
    register int t5;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x3)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x2)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x1)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x0)) = 0x0;
        if ((int)t0 < (int)0x3) {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x0;
            t2 = t0;
        } else {
            *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x1;
            t2 = (t0 + 0xFD);
        }
        t5 = ((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t5 + 0x5)) = t2;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int FUN_0c01e4ea(int a4, float f4)
{
    register int t0;
    register float u0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t0 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C)))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C)))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC180B64) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    u0 = 0.75f;
    u0 = u0 + 0.25f * (math_sin_angle16((*(int *)0xC362388)));
    (((struct o10_float *)(a4))->v) = u0;
    t0 = *(signed char *)((a4 + 0x7));
    if (t0 != 0) {
        return ui_draw_element_sprite(a4);
    }
    return t0;
}

int FUN_0c01e594(void)
{
    register int t0;
    register int t2;
    register int t5;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x3)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x2)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x1)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x0)) = 0x0;
        *(unsigned char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4)) = 0x0;
        t2 = ((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C);
        t5 = t0;
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x5)) = t5;
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t5;
}

int FUN_0c01e606(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01e65e(int a4, int a5, int a6)
{
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
                return 0x0;
            }
            if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xC))) & a6) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xA))) & a6) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0x8))) & a6) == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01e6b4(int a4)
{
    if ((int)(unsigned char)(*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x0))) > 0) {
        *(unsigned char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x0)) = ((*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x0))) - 1);
    }
    if ((int)(unsigned char)(*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x1))) > 0) {
        *(unsigned char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x1)) = ((*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x1))) - 1);
    }
    if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xC))) & 0x400) != 0) {
        *(unsigned char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x0)) = 0x5;
    }
    if (((unsigned short)(*(short *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC361BF0) + 0xC))) & 0x200) != 0) {
        *(unsigned char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x1)) = 0x5;
    }
    if (((unsigned short)(unsigned char)(*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x0))) * (unsigned short)(unsigned char)(*(signed char *)(((((unsigned char)a4 << 1) + 0xC362382) + 0x1)))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01e75e(int a4, int a5)
{
    int t0;
    register int t3;

    t0 = pad_get_type(a4);
    t3 = a5;
    if ((t0 != 0) && ((t0 != 1) && (t0 == 2))) {
        t3 = (*(signed char *)(((signed char)a5 + 0xC11C618)));
    }
    return t3;
}
