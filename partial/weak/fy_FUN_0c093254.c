/* Generated straight-line translation (kept from the generator, checked on drawn cases): pl_update_frame. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720C_short { char p[0x720C]; short v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7215_uchar { char p[0x7215]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7241_uchar { char p[0x7241]; unsigned char v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72A0_ushort { char p[0x72A0]; unsigned short v; };
struct o72A2_ushort { char p[0x72A2]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_036a6c(int, int);
int fx_spawn_0375d4(int);
int fx_spawn_044e38(int);
int item_spawn_pickup_popup(int, int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c09375c(int);
int pl_clear_tint_flag(int);
int FUN_0c099a92(int);
int FUN_0c099ac6(int);
int FUN_0c099ae4(int);
int FUN_0c099afe(int);
int pl_start_motion(int, int, int);
int pl_get_held_item_class(int);
int pl_mash_reduce_counter(int, int);
int pl_get_hit_count_of_opponent(int);
int pl_check_item_pickup(void);
int pl_update_camera_side_flag(int);
int FUN_0c0a0074(int);
int obj_set_record_char(int, int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_clear_slot_contact(int);
int obj_collect_slot_contacts(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);
int fx_update_16(int a4);
int pl_update_frame(int a4, int a5, int a6, int a7);
int pl_update_frame(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    int t15;
    int t16;
    register int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    int t29;
    int t30;
    register int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    int t42;
    int t43;
    register int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    int t55;
    int t56;
    register int t57;
    int t58;
    int t59;
    register int t60;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;

    t60 = *(signed char *)((a4 + 0x8));
    if (t60 != 0) {
        if (t60 != 1) {
            return t60;
        }
        obj_clear_slot_contact((*(signed char *)((a4 + 0x3))));
        t60 = *(signed char *)((a4 + 0x9));
        if (((t60 == 0) && (t0 = *(signed char *)((a4 + 0x71BA)), t1 = *(signed char *)(((t0 << 2) + 0xC338D3B)), t1 != 0)) || ((t60 == 1) || ((t2 = *(signed char *)((a4 + 0x71BA)), t2 == 16) && (t3 = *(signed char *)((a4 + 0xA)), t3 == 1)))) {
            t0 = pl_get_held_item_class(a4);
            if ((signed char)t0 == 0) {
                obj_collect_slot_contacts(a4);
            }
        }
        if ((*(signed char *)((a4 + 0x9))) == 0) {
            t0 = FUN_0c0555c4();
            if (t0 != 0) {
                t0 = pl_check_item_pickup();
                if (((signed char)t0 != 1) && ((t4 = *(signed char *)((a4 + 0x71F1)), t4 != 0) || ((t5 = *(signed char *)((a4 + 0x71BA)), t5 == 23) || (t6 = *(signed char *)((a4 + 0x7230)), (int)t6 < (int)0x3)))) {
                    if ((*(signed char *)0xC7F3192) == 0) {
                        if (((((struct o720C_short *)(a4))->v)) != 0) {
                            (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7215))) != 0) {
                            t0 = *(signed char *)((a4 + 0x7215));
                            (((struct o7215_uchar *)(a4))->v) = (t0 - 1);
                            if ((unsigned char)(t0 - 1) == 0) {
                                (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                            }
                        }
                    }
                    if ((((((struct o7228_short *)(a4))->v)) == 0) && (t7 = *(signed char *)((a4 + 0x7226)), t7 == 0)) {
                        t0 = FUN_0c0555dc();
                        if (t0 != 0) {
                            t0 = *(signed char *)((a4 + 0x7226));
                            switch (t0) {
                            case 32:
                                FUN_0c099a92(a4);
                                pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t8 = (((struct o7228_short *)(a4))->v), (int)t8 > 0)) {
                                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                                    t0 = (((struct o7228_short *)(a4))->v);
                                    (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                                    if ((int)(short)(t0 - 30) <= 0) {
                                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                                    }
                                }
                                break;
                            case 64:
                                FUN_0c099ac6(a4);
                                break;
                            case 96:
                                FUN_0c099afe(a4);
                                break;
                            case 0x80:
                                FUN_0c099ae4(a4);
                                break;
                            }
                            t0 = (((struct o7228_short *)(a4))->v);
                            (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                            if ((int)(short)(t0 - 1) <= 0) {
                                (((struct o7226_uchar *)(a4))->v) = 0x0;
                                (((struct o7228_ushort *)(a4))->v) = 0x0;
                                pl_clear_tint_flag(a4);
                            }
                        } else {
                            pl_clear_tint_flag(a4);
                        }
                    } else {
                        t0 = *(signed char *)((a4 + 0x7226));
                        switch (t0) {
                        case 32:
                            FUN_0c099a92(a4);
                            pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                            if (((*(signed char *)((a4 + 0x7240))) == 0) && (t9 = (((struct o7228_short *)(a4))->v), (int)t9 > 0)) {
                                (((struct o7240_uchar *)(a4))->v) = 0x14;
                                t0 = (((struct o7228_short *)(a4))->v);
                                (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                                if ((int)(short)(t0 - 30) <= 0) {
                                    (((struct o7228_ushort *)(a4))->v) = 0x0;
                                }
                            }
                            break;
                        case 64:
                            FUN_0c099ac6(a4);
                            break;
                        case 96:
                            FUN_0c099afe(a4);
                            break;
                        case 0x80:
                            FUN_0c099ae4(a4);
                            break;
                        }
                        t0 = (((struct o7228_short *)(a4))->v);
                        (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                        if ((int)(short)(t0 - 1) <= 0) {
                            (((struct o7226_uchar *)(a4))->v) = 0x0;
                            (((struct o7228_ushort *)(a4))->v) = 0x0;
                            pl_clear_tint_flag(a4);
                        }
                    }
                    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
                        t0 = FUN_0c0555c4();
                        if (t0 != 0) {
                            if (((*(signed char *)((a4 + 0x71F1))) != 0) && ((t10 = (((struct o71F4_short *)(a4))->v), (int)t10 <= 0) && ((t11 = *(signed char *)((a4 + 0x9)), t11 == 0) && ((t12 = *(signed char *)((a4 + 0x71BA)), t12 != 10) && ((t13 = *(signed char *)((a4 + 0x71BA)), t13 != 11) && ((t14 = *(signed char *)((a4 + 0x71BA)), t14 != 23) && (t15 = *(signed char *)0xC7F3053, t15 == 0))))))) {
                                return pl_change_state(a4, 0x17, 0x0);
                            }
                            if (((((struct o71F4_short *)(a4))->v)) != 0) {
                                if ((*(signed char *)0xC7F4766) == 0) {
                                    (((struct o71F4_ushort *)(a4))->v) = (((((struct o71F4_short *)(a4))->v)) - 1);
                                }
                                if (((*(signed char *)((a4 + 0x1))) != 0) && (t16 = *(signed char *)0xC7F319E, t16 == 0)) {
                                    t0 = FUN_0c0555c4();
                                    if (t0 != 0) {
                                        if (((*(int *)0xC7F307C) & 7) != 0) {
                                        } else {
                                            fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                                        }
                                    }
                                }
                            }
                            pl_update_camera_side_flag(a4);
                            _quick_odd_mvn();
                            if ((*(signed char *)((a4 + 0x105))) != 0) {
                                (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x106))) != 0) {
                                (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x107))) != 0) {
                                (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x7241))) != 0) {
                                (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                            }
                            (((struct o2D9_uchar *)(a4))->v) = 0x0;
                            if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u0 = (((struct o729C_float *)(a4))->v), u0 == 0.0f)) {
                                t0 = FUN_0c0a0074(a4);
                                if ((signed char)t0 != 0) {
                                    (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                    (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                    (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                                }
                            }
                        } else {
                            pl_update_camera_side_flag(a4);
                            _quick_odd_mvn();
                            if ((*(signed char *)((a4 + 0x105))) != 0) {
                                (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x106))) != 0) {
                                (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x107))) != 0) {
                                (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x7241))) != 0) {
                                (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                            }
                            (((struct o2D9_uchar *)(a4))->v) = 0x0;
                            if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u1 = (((struct o729C_float *)(a4))->v), u1 == 0.0f)) {
                                t0 = FUN_0c0a0074(a4);
                                if ((signed char)t0 != 0) {
                                    (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                    (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                    (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                                }
                            }
                        }
                    } else {
                        if (((int)(*(signed char *)((a4 + 0x7230))) >= (int)0x2) && ((t17 = *(signed char *)((a4 + 0x1)), t17 != 0) && (t18 = *(signed char *)0xC7F319E, t18 == 0))) {
                            t0 = FUN_0c0555c4();
                            if ((t0 != 0) && (t19 = *(int *)0xC7F307C, (t19 & 7) == 0)) {
                                fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                            }
                        }
                        pl_update_camera_side_flag(a4);
                        _quick_odd_mvn();
                        if ((*(signed char *)((a4 + 0x105))) != 0) {
                            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x106))) != 0) {
                            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x107))) != 0) {
                            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7241))) != 0) {
                            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                        }
                        (((struct o2D9_uchar *)(a4))->v) = 0x0;
                        if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u2 = (((struct o729C_float *)(a4))->v), u2 == 0.0f)) {
                            t0 = FUN_0c0a0074(a4);
                            if ((signed char)t0 != 0) {
                                (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                            }
                        }
                    }
                } else {
                    if ((int)(*(signed char *)((a4 + 0x7230))) < (int)0x3) {
                        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x12);
                        item_spawn_pickup_popup(a4, 0x0);
                    }
                    if (((*(signed char *)((a4 + 0x71F1))) == 0) && (t20 = *(signed char *)((a4 + 0x7230)), (int)t20 >= (int)0x3)) {
                        return pl_change_state(a4, 0x17, 0x0);
                    }
                    if ((*(signed char *)0xC7F3192) == 0) {
                        if (((((struct o720C_short *)(a4))->v)) != 0) {
                            (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7215))) != 0) {
                            t0 = *(signed char *)((a4 + 0x7215));
                            (((struct o7215_uchar *)(a4))->v) = (t0 - 1);
                            if ((unsigned char)(t0 - 1) == 0) {
                                (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                            }
                        }
                    }
                    if ((((((struct o7228_short *)(a4))->v)) == 0) && (t21 = *(signed char *)((a4 + 0x7226)), t21 == 0)) {
                        t0 = FUN_0c0555dc();
                        if (t0 != 0) {
                            t0 = *(signed char *)((a4 + 0x7226));
                            switch (t0) {
                            case 32:
                                FUN_0c099a92(a4);
                                pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t22 = (((struct o7228_short *)(a4))->v), (int)t22 > 0)) {
                                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                                    t0 = (((struct o7228_short *)(a4))->v);
                                    (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                                    if ((int)(short)(t0 - 30) <= 0) {
                                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                                    }
                                }
                                break;
                            case 64:
                                FUN_0c099ac6(a4);
                                break;
                            case 96:
                                FUN_0c099afe(a4);
                                break;
                            case 0x80:
                                FUN_0c099ae4(a4);
                                break;
                            }
                            t0 = (((struct o7228_short *)(a4))->v);
                            (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                            if ((int)(short)(t0 - 1) <= 0) {
                                (((struct o7226_uchar *)(a4))->v) = 0x0;
                                (((struct o7228_ushort *)(a4))->v) = 0x0;
                                pl_clear_tint_flag(a4);
                            }
                        } else {
                            pl_clear_tint_flag(a4);
                        }
                    } else {
                        t0 = *(signed char *)((a4 + 0x7226));
                        switch (t0) {
                        case 32:
                            FUN_0c099a92(a4);
                            pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                            if (((*(signed char *)((a4 + 0x7240))) == 0) && (t23 = (((struct o7228_short *)(a4))->v), (int)t23 > 0)) {
                                (((struct o7240_uchar *)(a4))->v) = 0x14;
                                t0 = (((struct o7228_short *)(a4))->v);
                                (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                                if ((int)(short)(t0 - 30) <= 0) {
                                    (((struct o7228_ushort *)(a4))->v) = 0x0;
                                }
                            }
                            break;
                        case 64:
                            FUN_0c099ac6(a4);
                            break;
                        case 96:
                            FUN_0c099afe(a4);
                            break;
                        case 0x80:
                            FUN_0c099ae4(a4);
                            break;
                        }
                        t0 = (((struct o7228_short *)(a4))->v);
                        (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                        if ((int)(short)(t0 - 1) <= 0) {
                            (((struct o7226_uchar *)(a4))->v) = 0x0;
                            (((struct o7228_ushort *)(a4))->v) = 0x0;
                            pl_clear_tint_flag(a4);
                        }
                    }
                    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
                        t0 = FUN_0c0555c4();
                        if (t0 != 0) {
                            if (((*(signed char *)((a4 + 0x71F1))) != 0) && ((t24 = (((struct o71F4_short *)(a4))->v), (int)t24 <= 0) && ((t25 = *(signed char *)((a4 + 0x9)), t25 == 0) && ((t26 = *(signed char *)((a4 + 0x71BA)), t26 != 10) && ((t27 = *(signed char *)((a4 + 0x71BA)), t27 != 11) && ((t28 = *(signed char *)((a4 + 0x71BA)), t28 != 23) && (t29 = *(signed char *)0xC7F3053, t29 == 0))))))) {
                                return pl_change_state(a4, 0x17, 0x0);
                            }
                            if (((((struct o71F4_short *)(a4))->v)) != 0) {
                                if ((*(signed char *)0xC7F4766) == 0) {
                                    (((struct o71F4_ushort *)(a4))->v) = (((((struct o71F4_short *)(a4))->v)) - 1);
                                }
                                if (((*(signed char *)((a4 + 0x1))) != 0) && (t30 = *(signed char *)0xC7F319E, t30 == 0)) {
                                    t0 = FUN_0c0555c4();
                                    if (t0 != 0) {
                                        if (((*(int *)0xC7F307C) & 7) != 0) {
                                        } else {
                                            fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                                        }
                                    }
                                }
                            }
                            pl_update_camera_side_flag(a4);
                            _quick_odd_mvn();
                            if ((*(signed char *)((a4 + 0x105))) != 0) {
                                (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x106))) != 0) {
                                (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x107))) != 0) {
                                (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x7241))) != 0) {
                                (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                            }
                            (((struct o2D9_uchar *)(a4))->v) = 0x0;
                            if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u3 = (((struct o729C_float *)(a4))->v), u3 == 0.0f)) {
                                t0 = FUN_0c0a0074(a4);
                                if ((signed char)t0 != 0) {
                                    (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                    (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                    (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                                }
                            }
                        } else {
                            pl_update_camera_side_flag(a4);
                            _quick_odd_mvn();
                            if ((*(signed char *)((a4 + 0x105))) != 0) {
                                (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x106))) != 0) {
                                (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x107))) != 0) {
                                (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x7241))) != 0) {
                                (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                            }
                            (((struct o2D9_uchar *)(a4))->v) = 0x0;
                            if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u4 = (((struct o729C_float *)(a4))->v), u4 == 0.0f)) {
                                t0 = FUN_0c0a0074(a4);
                                if ((signed char)t0 != 0) {
                                    (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                    (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                    (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                                }
                            }
                        }
                    } else {
                        if (((int)(*(signed char *)((a4 + 0x7230))) >= (int)0x2) && ((t31 = *(signed char *)((a4 + 0x1)), t31 != 0) && (t32 = *(signed char *)0xC7F319E, t32 == 0))) {
                            t0 = FUN_0c0555c4();
                            if ((t0 != 0) && (t33 = *(int *)0xC7F307C, (t33 & 7) == 0)) {
                                fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                            }
                        }
                        pl_update_camera_side_flag(a4);
                        _quick_odd_mvn();
                        if ((*(signed char *)((a4 + 0x105))) != 0) {
                            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x106))) != 0) {
                            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x107))) != 0) {
                            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7241))) != 0) {
                            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                        }
                        (((struct o2D9_uchar *)(a4))->v) = 0x0;
                        if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u5 = (((struct o729C_float *)(a4))->v), u5 == 0.0f)) {
                            t0 = FUN_0c0a0074(a4);
                            if ((signed char)t0 != 0) {
                                (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                            }
                        }
                    }
                }
            } else {
                if ((*(signed char *)0xC7F3192) == 0) {
                    if (((((struct o720C_short *)(a4))->v)) != 0) {
                        (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x7215))) != 0) {
                        t0 = *(signed char *)((a4 + 0x7215));
                        (((struct o7215_uchar *)(a4))->v) = (t0 - 1);
                        if ((unsigned char)(t0 - 1) == 0) {
                            (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                        }
                    }
                }
                if ((((((struct o7228_short *)(a4))->v)) == 0) && (t34 = *(signed char *)((a4 + 0x7226)), t34 == 0)) {
                    t0 = FUN_0c0555dc();
                    if (t0 != 0) {
                        t0 = *(signed char *)((a4 + 0x7226));
                        switch (t0) {
                        case 32:
                            FUN_0c099a92(a4);
                            pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                            if (((*(signed char *)((a4 + 0x7240))) == 0) && (t35 = (((struct o7228_short *)(a4))->v), (int)t35 > 0)) {
                                (((struct o7240_uchar *)(a4))->v) = 0x14;
                                t0 = (((struct o7228_short *)(a4))->v);
                                (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                                if ((int)(short)(t0 - 30) <= 0) {
                                    (((struct o7228_ushort *)(a4))->v) = 0x0;
                                }
                            }
                            break;
                        case 64:
                            FUN_0c099ac6(a4);
                            break;
                        case 96:
                            FUN_0c099afe(a4);
                            break;
                        case 0x80:
                            FUN_0c099ae4(a4);
                            break;
                        }
                        t0 = (((struct o7228_short *)(a4))->v);
                        (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                        if ((int)(short)(t0 - 1) <= 0) {
                            (((struct o7226_uchar *)(a4))->v) = 0x0;
                            (((struct o7228_ushort *)(a4))->v) = 0x0;
                            pl_clear_tint_flag(a4);
                        }
                    } else {
                        pl_clear_tint_flag(a4);
                    }
                } else {
                    t0 = *(signed char *)((a4 + 0x7226));
                    switch (t0) {
                    case 32:
                        FUN_0c099a92(a4);
                        pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                        if (((*(signed char *)((a4 + 0x7240))) == 0) && (t36 = (((struct o7228_short *)(a4))->v), (int)t36 > 0)) {
                            (((struct o7240_uchar *)(a4))->v) = 0x14;
                            t0 = (((struct o7228_short *)(a4))->v);
                            (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                            if ((int)(short)(t0 - 30) <= 0) {
                                (((struct o7228_ushort *)(a4))->v) = 0x0;
                            }
                        }
                        break;
                    case 64:
                        FUN_0c099ac6(a4);
                        break;
                    case 96:
                        FUN_0c099afe(a4);
                        break;
                    case 0x80:
                        FUN_0c099ae4(a4);
                        break;
                    }
                    t0 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o7226_uchar *)(a4))->v) = 0x0;
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                        pl_clear_tint_flag(a4);
                    }
                }
                if ((*(signed char *)((a4 + 0x71F1))) != 0) {
                    t0 = FUN_0c0555c4();
                    if (t0 != 0) {
                        if (((*(signed char *)((a4 + 0x71F1))) != 0) && ((t37 = (((struct o71F4_short *)(a4))->v), (int)t37 <= 0) && ((t38 = *(signed char *)((a4 + 0x9)), t38 == 0) && ((t39 = *(signed char *)((a4 + 0x71BA)), t39 != 10) && ((t40 = *(signed char *)((a4 + 0x71BA)), t40 != 11) && ((t41 = *(signed char *)((a4 + 0x71BA)), t41 != 23) && (t42 = *(signed char *)0xC7F3053, t42 == 0))))))) {
                            return pl_change_state(a4, 0x17, 0x0);
                        }
                        if (((((struct o71F4_short *)(a4))->v)) != 0) {
                            if ((*(signed char *)0xC7F4766) == 0) {
                                (((struct o71F4_ushort *)(a4))->v) = (((((struct o71F4_short *)(a4))->v)) - 1);
                            }
                            if (((*(signed char *)((a4 + 0x1))) != 0) && (t43 = *(signed char *)0xC7F319E, t43 == 0)) {
                                t0 = FUN_0c0555c4();
                                if (t0 != 0) {
                                    if (((*(int *)0xC7F307C) & 7) != 0) {
                                    } else {
                                        fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                                    }
                                }
                            }
                        }
                        pl_update_camera_side_flag(a4);
                        _quick_odd_mvn();
                        if ((*(signed char *)((a4 + 0x105))) != 0) {
                            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x106))) != 0) {
                            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x107))) != 0) {
                            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7241))) != 0) {
                            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                        }
                        (((struct o2D9_uchar *)(a4))->v) = 0x0;
                        if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u6 = (((struct o729C_float *)(a4))->v), u6 == 0.0f)) {
                            t0 = FUN_0c0a0074(a4);
                            if ((signed char)t0 != 0) {
                                (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                            }
                        }
                    } else {
                        pl_update_camera_side_flag(a4);
                        _quick_odd_mvn();
                        if ((*(signed char *)((a4 + 0x105))) != 0) {
                            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x106))) != 0) {
                            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x107))) != 0) {
                            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x7241))) != 0) {
                            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                        }
                        (((struct o2D9_uchar *)(a4))->v) = 0x0;
                        if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u7 = (((struct o729C_float *)(a4))->v), u7 == 0.0f)) {
                            t0 = FUN_0c0a0074(a4);
                            if ((signed char)t0 != 0) {
                                (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                                (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                                (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                            }
                        }
                    }
                } else {
                    if (((int)(*(signed char *)((a4 + 0x7230))) >= (int)0x2) && ((t44 = *(signed char *)((a4 + 0x1)), t44 != 0) && (t45 = *(signed char *)0xC7F319E, t45 == 0))) {
                        t0 = FUN_0c0555c4();
                        if ((t0 != 0) && (t46 = *(int *)0xC7F307C, (t46 & 7) == 0)) {
                            fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                        }
                    }
                    pl_update_camera_side_flag(a4);
                    _quick_odd_mvn();
                    if ((*(signed char *)((a4 + 0x105))) != 0) {
                        (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x106))) != 0) {
                        (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x107))) != 0) {
                        (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x7241))) != 0) {
                        (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                    }
                    (((struct o2D9_uchar *)(a4))->v) = 0x0;
                    if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u8 = (((struct o729C_float *)(a4))->v), u8 == 0.0f)) {
                        t0 = FUN_0c0a0074(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                            (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                            (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                        }
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC7F3192) == 0) {
                if (((((struct o720C_short *)(a4))->v)) != 0) {
                    (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
                }
                if ((*(signed char *)((a4 + 0x7215))) != 0) {
                    t0 = *(signed char *)((a4 + 0x7215));
                    (((struct o7215_uchar *)(a4))->v) = (t0 - 1);
                    if ((unsigned char)(t0 - 1) == 0) {
                        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                    }
                }
            }
            if ((((((struct o7228_short *)(a4))->v)) == 0) && (t47 = *(signed char *)((a4 + 0x7226)), t47 == 0)) {
                t0 = FUN_0c0555dc();
                if (t0 != 0) {
                    t0 = *(signed char *)((a4 + 0x7226));
                    switch (t0) {
                    case 32:
                        FUN_0c099a92(a4);
                        pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                        if (((*(signed char *)((a4 + 0x7240))) == 0) && (t48 = (((struct o7228_short *)(a4))->v), (int)t48 > 0)) {
                            (((struct o7240_uchar *)(a4))->v) = 0x14;
                            t0 = (((struct o7228_short *)(a4))->v);
                            (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                            if ((int)(short)(t0 - 30) <= 0) {
                                (((struct o7228_ushort *)(a4))->v) = 0x0;
                            }
                        }
                        break;
                    case 64:
                        FUN_0c099ac6(a4);
                        break;
                    case 96:
                        FUN_0c099afe(a4);
                        break;
                    case 0x80:
                        FUN_0c099ae4(a4);
                        break;
                    }
                    t0 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o7226_uchar *)(a4))->v) = 0x0;
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                        pl_clear_tint_flag(a4);
                    }
                } else {
                    pl_clear_tint_flag(a4);
                }
            } else {
                t0 = *(signed char *)((a4 + 0x7226));
                switch (t0) {
                case 32:
                    FUN_0c099a92(a4);
                    pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                    if (((*(signed char *)((a4 + 0x7240))) == 0) && (t49 = (((struct o7228_short *)(a4))->v), (int)t49 > 0)) {
                        (((struct o7240_uchar *)(a4))->v) = 0x14;
                        t0 = (((struct o7228_short *)(a4))->v);
                        (((struct o7228_ushort *)(a4))->v) = (t0 - 30);
                        if ((int)(short)(t0 - 30) <= 0) {
                            (((struct o7228_ushort *)(a4))->v) = 0x0;
                        }
                    }
                    break;
                case 64:
                    FUN_0c099ac6(a4);
                    break;
                case 96:
                    FUN_0c099afe(a4);
                    break;
                case 0x80:
                    FUN_0c099ae4(a4);
                    break;
                }
                t0 = (((struct o7228_short *)(a4))->v);
                (((struct o7228_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o7226_uchar *)(a4))->v) = 0x0;
                    (((struct o7228_ushort *)(a4))->v) = 0x0;
                    pl_clear_tint_flag(a4);
                }
            }
            if ((*(signed char *)((a4 + 0x71F1))) != 0) {
                t0 = FUN_0c0555c4();
                if (t0 != 0) {
                    if (((*(signed char *)((a4 + 0x71F1))) != 0) && ((t50 = (((struct o71F4_short *)(a4))->v), (int)t50 <= 0) && ((t51 = *(signed char *)((a4 + 0x9)), t51 == 0) && ((t52 = *(signed char *)((a4 + 0x71BA)), t52 != 10) && ((t53 = *(signed char *)((a4 + 0x71BA)), t53 != 11) && ((t54 = *(signed char *)((a4 + 0x71BA)), t54 != 23) && (t55 = *(signed char *)0xC7F3053, t55 == 0))))))) {
                        return pl_change_state(a4, 0x17, 0x0);
                    }
                    if (((((struct o71F4_short *)(a4))->v)) != 0) {
                        if ((*(signed char *)0xC7F4766) == 0) {
                            (((struct o71F4_ushort *)(a4))->v) = (((((struct o71F4_short *)(a4))->v)) - 1);
                        }
                        if (((*(signed char *)((a4 + 0x1))) != 0) && (t56 = *(signed char *)0xC7F319E, t56 == 0)) {
                            t0 = FUN_0c0555c4();
                            if (t0 != 0) {
                                if (((*(int *)0xC7F307C) & 7) != 0) {
                                } else {
                                    fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                                }
                            }
                        }
                    }
                    pl_update_camera_side_flag(a4);
                    _quick_odd_mvn();
                    if ((*(signed char *)((a4 + 0x105))) != 0) {
                        (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x106))) != 0) {
                        (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x107))) != 0) {
                        (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x7241))) != 0) {
                        (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                    }
                    (((struct o2D9_uchar *)(a4))->v) = 0x0;
                    if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u9 = (((struct o729C_float *)(a4))->v), u9 == 0.0f)) {
                        t0 = FUN_0c0a0074(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                            (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                            (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                        }
                    }
                } else {
                    pl_update_camera_side_flag(a4);
                    _quick_odd_mvn();
                    if ((*(signed char *)((a4 + 0x105))) != 0) {
                        (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x106))) != 0) {
                        (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x107))) != 0) {
                        (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                    }
                    if ((*(signed char *)((a4 + 0x7241))) != 0) {
                        (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                    }
                    (((struct o2D9_uchar *)(a4))->v) = 0x0;
                    if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u10 = (((struct o729C_float *)(a4))->v), u10 == 0.0f)) {
                        t0 = FUN_0c0a0074(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                            (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                            (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                        }
                    }
                }
            } else {
                if (((int)(*(signed char *)((a4 + 0x7230))) >= (int)0x2) && ((t57 = *(signed char *)((a4 + 0x1)), t57 != 0) && (t58 = *(signed char *)0xC7F319E, t58 == 0))) {
                    t0 = FUN_0c0555c4();
                    if ((t0 != 0) && (t59 = *(int *)0xC7F307C, (t59 & 7) == 0)) {
                        fx_spawn_044e38((*(signed char *)((a4 + 0x3))));
                    }
                }
                pl_update_camera_side_flag(a4);
                _quick_odd_mvn();
                if ((*(signed char *)((a4 + 0x105))) != 0) {
                    (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
                }
                if ((*(signed char *)((a4 + 0x106))) != 0) {
                    (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
                }
                if ((*(signed char *)((a4 + 0x107))) != 0) {
                    (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
                }
                if ((*(signed char *)((a4 + 0x7241))) != 0) {
                    (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
                }
                (((struct o2D9_uchar *)(a4))->v) = 0x0;
                if (((*(signed char *)((a4 + 0x71BC))) == 2) && (u11 = (((struct o729C_float *)(a4))->v), u11 == 0.0f)) {
                    t0 = FUN_0c0a0074(a4);
                    if ((signed char)t0 != 0) {
                        (((struct o729C_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
                        (((struct o72A0_ushort *)(a4))->v) = (int)((((struct o20_float *)(a4))->v));
                        (((struct o72A2_ushort *)(a4))->v) = (int)((((struct o28_float *)(a4))->v));
                    }
                }
            }
        }
        t0 = ((int (*)(int, int, int, int))((*(int *)((0xC339070 + ((*(signed char *)((a4 + 0x4))) << 2))))))(a4, a5, a6, a7);
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return ((int (*)(void))(0xC0936AE))();
                    }
                    return ((int (*)(void))(0xC0936A8))();
                }
                return ((int (*)(void))(0xC09369E))();
            }
            return ((int (*)(void))(0xC093694))();
        }
        FUN_0c09375c(a4);
        return ((int (*)(void))(0xC0936AE))();
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o71BA_uchar *)(a4))->v) = 0x0;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x0, 0x0);
    (((struct o7194_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
    (((struct o7190_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
    return pl_change_state(a4, 0x0, 0x0);
}
