/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_int { char p[0x9]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o9_uint { char p[0x9]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c01eb32(int, int, int, int);
int FUN_0c01ec30(int, int, int, int);
int FUN_0c05b400(int, float);
int FUN_0c0a2ee8(void);
int FUN_0c0a375c(void);
int FUN_0c0d6a28(int);
int FUN_0c0d7566(int, int, int, int);
int memset(int, int, int);
int obj_launch_owner_projectile(int);
int obj_set_mode_owner(int, int, int);
int pl_angle_to_opponent(int);
int snd_play_side_se(int, int);
int vmu_menu_draw_buttons(void);
int vmu_menu_pad_pressed(int);
int vmu_menu_update_objs(int, int, int, int);
int FUN_0c0d57a4(int a4, int a5, int a6, int a7);
int FUN_0c0d6a56(int a4);
int FUN_0c01e860(int a4, int a5, int a6, int a7);
int FUN_0c05b18c(int a4, float f4);
int pl_turn_to_opponent(int a4, int a5);

int FUN_0c0d57a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)0xC33F728;
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            if ((*(signed char *)0xC7F2F02) == 0) {
                (((struct o1_uchar *)0xC7F31B8)->v) = (*(signed char *)0xC7F31B8);
                if ((*(signed char *)0xC7F31B8) != 0) {
                    (((struct o0_uchar *)0xC7F31B8)->v) = 0x0;
                    FUN_0c0a375c();
                }
            }
            FUN_0c0a2ee8();
            t0 = 0x12B;
            if ((*(signed char *)0xC7F300B) == 0) {
                t2 = 0x12E;
                if ((*(signed char *)0xC7F300E) == 0) {
                    (((struct o3C_uint *)0xC7F31B8)->v) = ((((struct o38_int *)0xC7F31B8)->v));
                    (((struct o20_uint *)0xC7F31F8)->v) = ((((struct o1C_int *)0xC7F31F8)->v));
                    (((struct o38_uint *)0xC7F31B8)->v) = (unsigned short)((((struct o0_short *)0xC361BF8)->v));
                    (((struct o1C_uint *)0xC7F31F8)->v) = (unsigned short)((((struct o14_short *)0xC361BF8)->v));
                    (((struct o0_uint *)0xC7F31F8)->v) = ((~((((struct o3C_int *)0xC7F31B8)->v))) & ((((struct o38_int *)0xC7F31B8)->v)));
                    (((struct o24_uint *)0xC7F31F8)->v) = ((~((((struct o20_int *)0xC7F31F8)->v))) & ((((struct o1C_int *)0xC7F31F8)->v)));
                    (((struct o4_uint *)0xC7F31F8)->v) = ((~((((struct o38_int *)0xC7F31B8)->v))) & ((((struct o3C_int *)0xC7F31B8)->v)));
                    (((struct o28_uint *)0xC7F31F8)->v) = ((~((((struct o1C_int *)0xC7F31F8)->v))) & ((((struct o20_int *)0xC7F31F8)->v)));
                    (((struct oC_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3200);
                    (((struct oD_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3201);
                    (((struct oE_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3202);
                    (((struct oF_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3203);
                    (((struct o30_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3224);
                    (((struct o31_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3225);
                    (((struct o32_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3226);
                    (((struct o33_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3227);
                    (((struct o8_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C02);
                    (((struct o9_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C03);
                    (((struct oA_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C00);
                    (((struct oB_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C01);
                    (((struct o2C_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C16);
                    (((struct o2D_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C17);
                    (((struct o2E_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C14);
                    (((struct o2F_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C15);
                    (((struct o10_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3200) - (unsigned char)(*(signed char *)0xC7F3204));
                    (((struct o12_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3201) - (unsigned char)(*(signed char *)0xC7F3205));
                    (((struct o14_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3202) - (unsigned char)(*(signed char *)0xC7F3206));
                    (((struct o16_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3203) - (unsigned char)(*(signed char *)0xC7F3207));
                    (((struct o34_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3224) - (unsigned char)(*(signed char *)0xC7F3228));
                    (((struct o36_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3225) - (unsigned char)(*(signed char *)0xC7F3229));
                    (((struct o38_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3226) - (unsigned char)(*(signed char *)0xC7F322A));
                    (((struct o3A_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3227) - (unsigned char)(*(signed char *)0xC7F322B));
                    t3 = 0x0;
                    for (;;) {
                        if ((int)(unsigned char)(*(signed char *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x13))) > (int)0xA) {
                            *(unsigned int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0)) = ((*(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0))) | 0x20000);
                        }
                        if ((int)(unsigned char)(*(signed char *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x12))) > (int)0xA) {
                            *(unsigned int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0)) = ((*(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0))) | 0x10000);
                        }
                        t4 = *(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x4));
                        t5 = ((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0);
                        t3 = (t3 + 0x1);
                        *(unsigned int *)((t5 + 0x8)) = ((~t4) & (*(int *)((t5 + 0x0))));
                        *(unsigned int *)((t5 + 0xC)) = ((~(*(int *)((t5 + 0x0)))) & (*(int *)((t5 + 0x4))));
                        if ((int)t3 > (int)0x1) {
                            break;
                        }
                    }
                    (*(unsigned int *)0x0C7F3014) = (((*(int *)0x0C7F3014)) + 0x1);
                    t2 = 0x134;
                }
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)0xC33F728 = ((*(signed char *)0xC33F728) + 0x1);
        (((struct o28_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o24_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o20_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o1C_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o4_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o0_uint *)0xC7F31F8)->v) = 0x0;
        (((struct o3C_uint *)0xC7F31B8)->v) = 0x0;
        (((struct o38_uint *)0xC7F31B8)->v) = 0x0;
        memset(0xC7F31A0, 0x0, 0x1C);
        (((struct o1_uchar *)0xC7F300B)->v) = 0x0;
        (((struct o0_uchar *)0xC7F300B)->v) = 0x0;
        (((struct o2_uchar *)0xC7F300B)->v) = 0x0;
        if ((*(signed char *)0xC7F2F02) == 0) {
            (((struct o1_uchar *)0xC7F31B8)->v) = (*(signed char *)0xC7F31B8);
            if ((*(signed char *)0xC7F31B8) != 0) {
                (((struct o0_uchar *)0xC7F31B8)->v) = 0x0;
                FUN_0c0a375c();
            }
        }
        FUN_0c0a2ee8();
        t1 = 0x12B;
        if ((*(signed char *)0xC7F300B) == 0) {
            t2 = 0x12E;
            if ((*(signed char *)0xC7F300E) == 0) {
                (((struct o3C_uint *)0xC7F31B8)->v) = ((((struct o38_int *)0xC7F31B8)->v));
                (((struct o20_uint *)0xC7F31F8)->v) = ((((struct o1C_int *)0xC7F31F8)->v));
                (((struct o38_uint *)0xC7F31B8)->v) = (unsigned short)((((struct o0_short *)0xC361BF8)->v));
                (((struct o1C_uint *)0xC7F31F8)->v) = (unsigned short)((((struct o14_short *)0xC361BF8)->v));
                (((struct o0_uint *)0xC7F31F8)->v) = ((~((((struct o3C_int *)0xC7F31B8)->v))) & ((((struct o38_int *)0xC7F31B8)->v)));
                (((struct o24_uint *)0xC7F31F8)->v) = ((~((((struct o20_int *)0xC7F31F8)->v))) & ((((struct o1C_int *)0xC7F31F8)->v)));
                (((struct o4_uint *)0xC7F31F8)->v) = ((~((((struct o38_int *)0xC7F31B8)->v))) & ((((struct o3C_int *)0xC7F31B8)->v)));
                (((struct o28_uint *)0xC7F31F8)->v) = ((~((((struct o1C_int *)0xC7F31F8)->v))) & ((((struct o20_int *)0xC7F31F8)->v)));
                (((struct oC_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3200);
                (((struct oD_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3201);
                (((struct oE_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3202);
                (((struct oF_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3203);
                (((struct o30_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3224);
                (((struct o31_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3225);
                (((struct o32_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3226);
                (((struct o33_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC7F3227);
                (((struct o8_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C02);
                (((struct o9_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C03);
                (((struct oA_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C00);
                (((struct oB_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C01);
                (((struct o2C_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C16);
                (((struct o2D_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C17);
                (((struct o2E_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C14);
                (((struct o2F_uchar *)0xC7F31F8)->v) = (*(signed char *)0xC361C15);
                (((struct o10_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3200) - (unsigned char)(*(signed char *)0xC7F3204));
                (((struct o12_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3201) - (unsigned char)(*(signed char *)0xC7F3205));
                (((struct o14_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3202) - (unsigned char)(*(signed char *)0xC7F3206));
                (((struct o16_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3203) - (unsigned char)(*(signed char *)0xC7F3207));
                (((struct o34_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3224) - (unsigned char)(*(signed char *)0xC7F3228));
                (((struct o36_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3225) - (unsigned char)(*(signed char *)0xC7F3229));
                (((struct o38_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3226) - (unsigned char)(*(signed char *)0xC7F322A));
                (((struct o3A_ushort *)0xC7F31F8)->v) = ((unsigned char)(*(signed char *)0xC7F3227) - (unsigned char)(*(signed char *)0xC7F322B));
                t3 = 0x0;
                for (;;) {
                    if ((int)(unsigned char)(*(signed char *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x13))) > (int)0xA) {
                        *(unsigned int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0)) = ((*(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0))) | 0x20000);
                    }
                    if ((int)(unsigned char)(*(signed char *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x12))) > (int)0xA) {
                        *(unsigned int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0)) = ((*(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x0))) | 0x10000);
                    }
                    t4 = *(int *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0) + 0x4));
                    t5 = ((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC7F31F0);
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((t5 + 0x8)) = ((~t4) & (*(int *)((t5 + 0x0))));
                    *(unsigned int *)((t5 + 0xC)) = ((~(*(int *)((t5 + 0x0)))) & (*(int *)((t5 + 0x4))));
                    if ((int)t3 > (int)0x1) {
                        break;
                    }
                }
                (*(unsigned int *)0x0C7F3014) = (((*(int *)0x0C7F3014)) + 0x1);
                t2 = 0x134;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0d6a56(int a4)
{
    int t0;
    register int t11;
    register int t20;
    register int t42;
    register int t22;
    register int t39;
    register int t25;
    register int t26;
    register int t29;
    int t54;
    register int t57;
    register int t62;
    register int t78;
    register int t109;
    register int t84;
    register int t85;
    register int t88;
    register int t101;
    register int t120;
    register int t126;
    register int t144;
    register int t148;
    register int t153;
    register int t111;
    register int t40;
    register int t27;
    register int t28;
    register int t86;
    register int t87;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                if ((((((struct o6C_int *)(a4))->v)) & 192) != 0) {
                    snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                    t11 = 0x2C;
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t11 = 0x2B;
                    }
                    *(unsigned char *)((a4 + 0x4)) = t11;
                }
                *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
                t20 = FUN_0c0d6a28(a4);
                t42 = t20;
                if (t20 != 0) {
                    t22 = *(signed char *)((a4 + 0x4));
                    if (t22 == 43) {
                        *(unsigned short *)((a4 + 0xA)) = 0x1;
                        t40 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45));
                    } else {
                        t39 = t22;
                        if (t22 == 44) {
                            t25 = *(signed char *)((a4 + 0x3));
                            *(unsigned char *)((a4 + 0x3)) = (t25 - 1);
                            t26 = (t25 - 1);
                            t29 = 0x0;
                            for (;;) {
                                if ((int)t29 > (int)0x2C) {
                                    break;
                                }
                                t28 = 0x3;
                                t27 = a4;
                                t28 = (t28 + a4);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t27 = (t27 + 0x68);
                                t28 = (t28 + t27);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t26 = t29;
                                t27 = (*(signed char *)((0xC1550DA + t26)));
                                if (t28 == t27) {
                                    t26 = t29;
                                    *(unsigned char *)((a4 + 0x4)) = t26;
                                }
                                t29 = (t29 + 0x1);
                            }
                            t39 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x46));
                        }
                        t40 = t39;
                    }
                    t42 = t40;
                }
                t111 = t42;
            } else {
                t111 = t0;
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    *(unsigned char *)((a4 + 0x4)) = 0x2A;
                    (((struct o6B_uchar *)(a4))->v) = (*(signed char *)((0xC1550DA + (*(signed char *)((a4 + 0x4))))));
                    t111 = 0x6B;
                }
            }
        } else {
            t54 = (((struct o6C_int *)(a4))->v);
            if ((0x40 & t54) != 0) {
                snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                t57 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t57 - 1);
                if ((int)(signed char)(t57 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2C;
                }
            } else {
                if ((0x80 & t54) != 0) {
                    snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                    t62 = *(signed char *)((a4 + 0x4));
                    *(unsigned char *)((a4 + 0x4)) = (t62 + 0x1);
                    if ((int)(signed char)(t62 + 0x1) > (int)0x2C) {
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                    }
                }
            }
            *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
            t78 = FUN_0c0d6a28(a4);
            t109 = t78;
            if (t78 == 0) {
            } else {
                if ((*(signed char *)((a4 + 0x4))) != 43) {
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t84 = *(signed char *)((a4 + 0x3));
                        *(unsigned char *)((a4 + 0x3)) = (t84 - 1);
                        t85 = (t84 - 1);
                        t88 = 0x0;
                        for (;;) {
                            if ((int)t88 > (int)0x2C) {
                                break;
                            }
                            t87 = 0x3;
                            t86 = a4;
                            t87 = (t87 + a4);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t86 = (t86 + 0x68);
                            t87 = (t87 + t86);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t85 = t88;
                            t86 = (*(signed char *)((0xC1550DA + t85)));
                            if (t87 == t86) {
                                t85 = t88;
                                *(unsigned char *)((a4 + 0x4)) = t85;
                            }
                            t88 = (t88 + 0x1);
                        }
                        t109 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x46));
                    } else {
                        snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45);
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t101 = *(signed char *)((a4 + 0x3));
                        t109 = t101;
                        if (t101 == 3) {
                            *(unsigned char *)((a4 + 0x4)) = 0x2B;
                            t109 = 0x2B;
                        }
                    }
                } else {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    t109 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45));
                }
            }
            t111 = t109;
        }
        t153 = t111;
    } else {
        if ((0x40 & ((((struct o6C_int *)(a4))->v))) != 0) {
            snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
            t120 = *(signed char *)((a4 + 0x4));
            *(unsigned char *)((a4 + 0x4)) = (t120 - 1);
            if ((int)(signed char)(t120 - 1) < 0) {
                *(unsigned char *)((a4 + 0x4)) = 0x2B;
            }
        } else {
            if ((0x80 & ((((struct o6C_int *)(a4))->v))) != 0) {
                snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                t126 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t126 + 0x1);
                if ((int)(signed char)(t126 + 0x1) > (int)0x2B) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
        }
        *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
        t144 = FUN_0c0d6a28(a4);
        t153 = t144;
        if (t144 == 0) {
        } else {
            snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45);
            if ((*(signed char *)((a4 + 0x4))) == 43) {
                *(unsigned short *)((a4 + 0xA)) = 0x1;
                t153 = 0x1;
            } else {
                t148 = *(signed char *)((a4 + 0x3));
                *(unsigned char *)((a4 + 0x3)) = (t148 + 0x1);
                t153 = (t148 + 0x1);
            }
        }
    }
    return t153;
}

int FUN_0c01e860(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC362A50;
    switch (t0) {
    case 0:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct o1_uchar *)0xC362A50)->v) = 0x1;
        (((struct oA_ushort *)0xC362A50)->v) = 0x0;
        (((struct o2F_uchar *)0xC362A50)->v) = 0x1;
        (((struct o30_uchar *)0xC362A50)->v) = 0x1;
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        vmu_menu_update_objs(a4, a5, a6, a7);
        break;
    case 1:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        vmu_menu_update_objs(a4, a5, a6, a7);
        break;
    case 2:
        break;
    default:
        if (t0 != 3) {
            return FUN_0c0d7566(a4, a5, a6, a7);
        }
        t0 = *(signed char *)0xC362A51;
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c01ec30(0xC362A50, a5, a6, a7);
        }
        return FUN_0c01eb32(0xC362A50, a5, a6, a7);
    }
    t0 = vmu_menu_pad_pressed(0x40);
    if ((signed char)t0 != 0) {
        (((struct o1_uchar *)0xC362A50)->v) = 0x0;
        snd_play_side_se(0x0, 0x4C);
    } else {
        t0 = vmu_menu_pad_pressed(0x80);
        if ((signed char)t0 != 0) {
            (((struct o1_uchar *)0xC362A50)->v) = 0x1;
            snd_play_side_se(0x0, 0x4C);
        }
    }
    vmu_menu_draw_buttons();
    t0 = vmu_menu_pad_pressed(0x4);
    if ((signed char)t0 != 0) {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
        return snd_play_side_se(0x0, 0x4D);
    }
    t0 = vmu_menu_pad_pressed(0x8);
    if ((signed char)t0 != 0) {
        (((struct o0_uchar *)0xC362A50)->v) = 0x63;
        return snd_play_side_se(0x0, 0x4D);
    }
    return (signed char)t0;
}

int FUN_0c05b18c(int a4, float f4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c05b400(a4, f4);
        }
    } else {
        obj_launch_owner_projectile(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int pl_turn_to_opponent(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = pl_angle_to_opponent(a4);
    t1 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t3 >= (int)(-a5)) && ((int)t3 <= (int)a5)) {
        *(unsigned int *)((a4 + 0x30)) = t0;
    } else {
        if ((int)t3 > 0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - a5);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + a5);
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    }
    return t0;
}
