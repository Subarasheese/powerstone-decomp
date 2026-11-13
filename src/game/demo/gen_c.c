/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o114_int { char p[0x114]; int v; };
struct o12_float { char p[0x12]; float v; };
struct o16_float { char p[0x16]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_float { char p[0xA]; float v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oE_float { char p[0xE]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0593e0(int);
int FUN_0c05f2d4(int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c062cf4(int, int);
int FUN_0c062d78(void);
int FUN_0c062da2(void);
int FUN_0c062da6(void);
int FUN_0c09939c(void);
int FUN_0c09bc6e(int, int, int);
extern int FUN_0c0a2f5c();
int FUN_0c0a3308(int);
int FUN_0c0b7998(int);
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(int, int, int, int);
int bgm_stop_streams(void);
int cam_force_mode(int, int, int);
int dbg_print_at(int, float, float);
int dbgedit_select_stage_object(int);
int dbgedit_set_start_positions(int);
int ending_show_mail_screen(void);
int ending_spawn_obj_t05(int);
int ending_spawn_obj_t07(void);
int ending_state_run_script(void);
int game_reset_objects(void);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int obj_create(int, int, int, int);
int obj_set_record_char(int, int);
int obj_tick_class(int, int, int);
int pl_init_player_record(int);
int pl_load_motion_attack_record(int, int);
int pl_load_motion_key(int, int);
int pl_load_motion_prev_key(int, int);
int pl_play_voice_at_frame(int, int, int);
int pl_start_motion(int, int, int);
int res_switch_scene(int);
int sprintf(int, int, ...);
int thunk_FUN_0c05fff4(void);
int thunk_FUN_0c062242(int, int);
int ui_sprite_queue_add(int, int, int, int, int, int);
int dbgedit_work_player_menu(int a4, int a5, int a6, int a7);
int FUN_0c09bcbc(int a4);
int ending_main(int a4, int a5, int a6);
float fx_spawn_08(int a4, int a5);
int FUN_0c0a3988(int a4);
int pl_step_motion_impl(int a4, int a5);

int dbgedit_work_player_menu(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x3));
            if (t1 != 0) {
                if (t1 == 1) {
                    if ((*(signed char *)((a4 + 0x4))) == 2) {
                        dbgedit_select_stage_object(a4);
                    } else {
                        sprintf(0xC7F36B8, 0xC15443C);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
                        sprintf(0xC7F36B8, 0xC1543D0);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x6))) + 0x11) << 2) << 1));
                        sprintf(0xC7F36B8, 0xC15444C);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
                        sprintf(0xC7F36B8, 0xC154454);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
                        sprintf(0xC7F36B8, 0xC15445C);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 152.0f);
                        sprintf(0xC7F36B8, 0xC154464);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 160.0f);
                        sprintf(0xC7F36B8, 0xC154470);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 168.0f);
                        sprintf(0xC7F36B8, 0xC154478);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 176.0f);
                        sprintf(0xC7F36B8, 0xC154484);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 184.0f);
                        sprintf(0xC7F36B8, 0xC15448C);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 192.0f);
                        sprintf(0xC7F36B8, 0xC154494);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 200.0f);
                        sprintf(0xC7F36B8, 0xC15449C);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 208.0f);
                        if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
                            t2 = *(signed char *)((a4 + 0x6));
                            *(unsigned char *)((a4 + 0x6)) = (t2 - 1);
                            if ((int)(signed char)(t2 - 1) < 0) {
                                *(unsigned char *)((a4 + 0x6)) = 0xA;
                            }
                        } else {
                            if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
                                t2 = *(signed char *)((a4 + 0x6));
                                *(unsigned char *)((a4 + 0x6)) = (t2 + 0x1);
                                if ((int)(signed char)(t2 + 0x1) > (int)0xA) {
                                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                                }
                            }
                        }
                    }
                    t2 = (((struct o48_int *)(a4))->v);
                    if ((t2 & 4) != 0) {
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        thunk_FUN_0c05fff4();
                        FUN_0c09939c();
                        *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x4)) = (*(signed char *)((a4 + 0x6)));
                        thunk_FUN_0c05fff4();
                        FUN_0c09939c();
                        pl_init_player_record((*(signed char *)((a4 + 0x5))));
                        FUN_0c05f2d4(0x0, 0x0);
                        *(unsigned char *)((a4 + 0x7)) = 0x0;
                        dbgedit_set_start_positions((*(int *)((a4 + 0x1C))));
                        return pl_start_motion((*(int *)((a4 + 0x1C))), (*(signed char *)((a4 + 0x8))), (*(signed char *)((a4 + 0x9))));
                    }
                    t3 = t2;
                    if ((t2 & 2) == 0) {
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        t3 = 0x0;
                    }
                    return t3;
                }
                if (t1 == 2) {
                    sprintf(0xC7F36B8, 0xC1544A4);
                    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
                    if ((*(signed char *)((a4 + 0x4))) == 2) {
                        FUN_0c062da6();
                        FUN_0c062d78();
                    } else {
                        *(volatile signed char *)((a4 + 0x6));
                        *(volatile signed char *)((a4 + 0x5));
                        FUN_0c062da2();
                        FUN_0c062cf4((*(signed char *)((a4 + 0x5))), (*(signed char *)((a4 + 0x6))));
                    }
                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                    t2 = 0x0;
                } else {
                    t3 = t1;
                    if (t1 == 3) {
                        sprintf(0xC7F36B8, 0xC1544AC);
                        dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
                        if ((*(signed char *)((a4 + 0x4))) == 2) {
                            FUN_0c062d78();
                        } else {
                            FUN_0c062cf4((*(signed char *)((a4 + 0x5))), (*(signed char *)((a4 + 0x6))));
                        }
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        *(unsigned char *)((a4 + 0x3)) = 0x0;
                        t3 = 0x0;
                    }
                    t2 = t3;
                }
                return t2;
            }
            sprintf(0xC7F36B8, 0xC154404);
            dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
            sprintf(0xC7F36B8, 0xC1543D0);
            dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x4))) + 0x11) << 2) << 1));
            sprintf(0xC7F36B8, 0xC154410);
            dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
            sprintf(0xC7F36B8, 0xC15441C);
            dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
            sprintf(0xC7F36B8, 0xC154430);
            dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 152.0f);
            if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
                t1 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2;
                }
            }
            if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
                t1 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t1 + 0x1);
                if ((int)(signed char)(t1 + 0x1) > (int)0x2) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
            t1 = *(signed char *)((a4 + 0x5));
            (((struct oA0_ushort *)(a4))->v) = (*(short *)(((((*(signed char *)((a4 + 0x4))) + ((t1 << 1) + t1)) << 1) + 0xC33F5E0)));
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x1)) = 0x0;
            t1 = *(int *)(((a4 + 0x20) + ((*(signed char *)((a4 + 0x4))) << 2)));
            *(unsigned int *)((a4 + 0x1C)) = t1;
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            t1 = (((struct o48_int *)(a4))->v);
            t2 = t1;
            if ((t1 & 4) != 0) {
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        return t0;
    }
    sprintf(0xC7F36B8, 0xC1543D0);
    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xA) << 2) << 1), (float)((((*(signed char *)((a4 + 0x3))) + 0xF) << 2) << 1));
    sprintf(0xC7F36B8, 0xC1543D4);
    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 120.0f);
    sprintf(0xC7F36B8, 0xC1543E4);
    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 128.0f);
    sprintf(0xC7F36B8, 0xC1543F4);
    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 136.0f);
    sprintf(0xC7F36B8, 0xC1543FC);
    dbg_print_at(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0xC) << 2) << 1), 144.0f);
    if ((0x10 & ((((struct o48_int *)(a4))->v))) != 0) {
        t0 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((a4 + 0x3)) = (t0 - 1);
        if ((int)(signed char)(t0 - 1) < 0) {
            *(unsigned char *)((a4 + 0x3)) = 0x3;
        }
    } else {
        if ((0x20 & ((((struct o48_int *)(a4))->v))) != 0) {
            t0 = *(signed char *)((a4 + 0x3));
            *(unsigned char *)((a4 + 0x3)) = (t0 + 0x1);
            if ((int)(signed char)(t0 + 0x1) > (int)0x3) {
                *(unsigned char *)((a4 + 0x3)) = 0x0;
            }
        }
    }
    t0 = (((struct o48_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 4) == 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        *(unsigned char *)((a4 + 0x2)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c09bcbc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 0) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 3) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 4) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 6) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 9) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 25) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 27) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 28) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D68);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21E) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21F) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x220) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x236) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x237) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x238) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x239) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23B) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x242) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x243) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x244) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x248) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x249) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24E) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D89);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24F) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150D89);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x250) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x251) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x252) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x253) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x254) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x255) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x256) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x257) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x258) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x259) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DAA);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25B) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25C) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25D) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25E) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x25F) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x264) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x265) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x266) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x267) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x268) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x269) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26B) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26D) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26E) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x271) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x272) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x276) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x277) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x278) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x279) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x27A) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DCB);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C2) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C3) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C4) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C5) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C6) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C7) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C8) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2C9) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CA) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CB) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CC) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150DEC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2CF) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150E0D);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D0) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150E0D);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D1) {
        FUN_0c09bc6e(a4, 0x0, 0xC150E70);
        FUN_0c09bc6e(a4, 0x13, 0xC150E4F);
        FUN_0c09bc6e(a4, 0x26, 0xC150E2E);
        return FUN_0c09bc6e(a4, 0x27, 0xC150E70);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D3) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150E91);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D4) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EB2);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D7) {
        FUN_0c09bc6e(a4, 0x0, 0xC150F15);
        FUN_0c09bc6e(a4, 0x7, 0xC150F36);
        return FUN_0c09bc6e(a4, 0xA, 0xC150F57);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D8) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150F78);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2D9) {
        FUN_0c09bc6e(a4, 0x0, 0xC150F99);
        FUN_0c09bc6e(a4, 0x1, 0xC150FBA);
        FUN_0c09bc6e(a4, 0xC, 0xC150FDB);
        return FUN_0c09bc6e(a4, 0xD, 0xC150FFC);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DA) {
        FUN_0c09bc6e(a4, 0x0, 0xC15101D);
        FUN_0c09bc6e(a4, 0x1, 0xC15103E);
        FUN_0c09bc6e(a4, 0xC, 0xC15105F);
        return FUN_0c09bc6e(a4, 0xD, 0xC151080);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DB) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DC) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DD) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DE) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2DF) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E0) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150ED3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E5) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E6) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E7) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E8) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2E9) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EA) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EB) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EC) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2ED) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EE) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2EF) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F0) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F1) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F2) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F3) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F4) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F5) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F6) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F7) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F8) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2F9) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FA) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FB) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2FC) {
        return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
    }
    if ((((t1 << 8) + (unsigned char)t0) != 0x2FD) && ((((t1 << 8) + (unsigned char)t0) != 0x2FE) && (((t1 << 8) + (unsigned char)t0) != 0x2FF))) {
        return ((t1 << 8) + (unsigned char)t0);
    }
    return FUN_0c09bc6e(a4, 0x0, 0xC150EF4);
}

int ending_main(int a4, int a5, int a6)
{

    register int R1;
    register int R3;
    register int R9;
    register float F1;
    register float F2;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_1 = a5;
    v0_0 = a6;
    v0_3 = R9;
    v0_2 = (*(signed char *)0xC7F300B) == 0;
    v0_6 = (0x12B);
    v0_4 = (0xC7F2EE0);
    if (v0_2) goto L_C0151DE;
    L_C01564C:;
    return v0_6;
    L_C0151DE:;
    v0_2 = (*(signed char *)((v0_4 + 0x12E))) == 0;
    v0_6 = (0x12E);
    if (v0_2) goto L_C0151EA;
    goto L_C01564C;
    L_C0151EA:;
    v0_9 = *(signed char *)0xC7F302C;
    v0_6 = (v0_9);
    v0_7 = (0xC361C58);
    v0_5 = (0xC361C60);
    v0_3 = (0x0);
    v0_2 = (0xC7F302C);
    v0_8 = (0xC7F302C);
    R9 = (0xC361C5C);
    F15 = (0.0f);
    if ((v0_9 == 0)) goto L_C015206;
    if ((v0_6 == 1)) goto L_C0152A8;
    v0_5 = (*(signed char *)((v0_4 + 0x22))) == 0;
    if (v0_5) goto L_C015600;
    *(unsigned char *)((v0_8 + 0x0)) = v0_3;
    L_C015630:;
    obj_tick_class(0x5, v0_1, v0_0);
    return FUN_0c0593e0(0x5);
    L_C015600:;
    v0_5 = (*(signed char *)((v0_4 + 0x13E))) == 0;
    v0_6 = (0x13E);
    if (v0_5) goto L_C015610;
    *(unsigned char *)((v0_4 + v0_6)) = ((*(signed char *)((v0_4 + v0_6))) + 0x1);
    goto L_C015630;
    L_C015610:;
    v0_2 = (*(signed char *)((v0_2 + 0x55))) != 10;
    v0_8 = ((v0_4 + 0x4));
    if (v0_2) goto L_C015620;
    v0_2 = (0x6);
    L_C015622:;
    *(unsigned char *)((v0_8 + 0x0)) = v0_2;
    *(unsigned char *)(((v0_4 + 0x4) + 0x2)) = v0_3;
    *(unsigned char *)(((v0_4 + 0x4) + 0x1)) = v0_3;
    v0_8 = ((v0_4 + 0x4));
    goto L_C015630;
    L_C015620:;
    v0_2 = (0x9);
    goto L_C015622;
    L_C0152A8:;
    v0_0 = (*(short *)(((v0_2 + 0x16) + 0x0))) == 0;
    v0_8 = ((v0_2 + 0x16));
    if (v0_0) goto L_C0152B8;
    *(unsigned short *)((v0_8 + 0x0)) = ((*(short *)((v0_8 + 0x0))) - 1);
    L_C0152B8:;
    v0_0 = (*(short *)(((v0_2 + 0x14) + 0x0))) == 0;
    v0_8 = ((v0_2 + 0x14));
    if (v0_0) goto L_C0152C8;
    *(unsigned short *)((v0_8 + 0x0)) = ((*(short *)((v0_8 + 0x0))) - 1);
    L_C0152C8:;
    v0_0 = *(signed char *)((R9 + 0x0));
    v0_1 = ((unsigned short)(*(short *)((0xC361BFC + (signed char)(((v0_0 << 2) + v0_0) << 2)))) & 8) == 0;
    v0_0 = (0x1E);
    if (v0_1) goto L_C0152E4;
    *(unsigned short *)((v0_2 + 0x1C)) = 0x1;
    L_C0152E4:;
    v0_9 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_9);
    v0_8 = ((v0_2 + 0x2));
    v0_1 = (0x14);
    w0_0 = (1.0f);
    if ((v0_9 == 0)) goto L_C015364;
    if ((v0_6 == 1)) goto L_C0153CC;
    if ((v0_6 != 2)) goto L_C0152FE;
    v0_4 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C015430;
    if ((v0_6 == 1)) goto L_C015438;
    if ((v0_6 == 2)) goto L_C015458;
    goto L_C015630;
    L_C015458:;
    v0_4 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C015468;
    goto L_C015630;
    L_C015468:;
    L_C0155DE:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_3;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    goto L_C015630;
    L_C015438:;
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) + -0.099999994f);
    v0_3 = !((*(float *)((v0_5 + 0x0))) > 0.0f);
    if (v0_3) goto L_C01544E;
    goto L_C015630;
    L_C01544E:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = v0_1;
    L_C015572:;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C015630;
    L_C015430:;
    *(float *)((v0_5 + 0x0)) = w0_0;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C015438;
    L_C0152FE:;
    if ((v0_6 != 3)) goto L_C015306;
    v0_4 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C01547A;
    if ((v0_6 == 1)) goto L_C01548C;
    goto L_C015630;
    L_C01548C:;
    v0_4 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C01549C;
    goto L_C0155DE;
    L_C01549C:;
    goto L_C015630;
    L_C01547A:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = v0_0;
    ending_spawn_obj_t05(0x0);
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01548C;
    L_C015306:;
    if ((v0_6 != 4)) goto L_C01530E;
    v0_7 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0154AE;
    if ((v0_6 == 1)) goto L_C0154BE;
    goto L_C015630;
    L_C0154BE:;
    v0_5 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) < 0)) goto L_C0154D6;
    v0_5 = (*(short *)0xC7F3048) != 0;
    if (v0_5) goto L_C0154D6;
    goto L_C015630;
    L_C0154D6:;
    v0_4 = (*(signed char *)((v0_4 + 0x13E))) != 0;
    if (v0_4) goto L_C0154E2;
    goto L_C0155DE;
    L_C0154E2:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    goto L_C0155DE;
    L_C0154AE:;
    *(float *)((v0_5 + 0x0)) = w0_0;
    v0_5 = ((int (*)(int, int, int))(FUN_0c0a2f5c))(v0_8, v0_1, v0_0);
    *(unsigned short *)((v0_2 + 0xC)) = 0x3C;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C0154BE;
    L_C01530E:;
    if ((v0_6 != 5)) goto L_C015316;
    v0_4 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C015508;
    if ((v0_6 == 1)) goto L_C015514;
    goto L_C015630;
    L_C015514:;
    v0_4 = (*(short *)((v0_2 + 0xC))) != 120;
    if (v0_4) goto L_C01551E;
    ending_spawn_obj_t07();
    L_C01551E:;
    v0_4 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C0155DE;
    v0_4 = (*(short *)0xC7F3048) != 0;
    if (v0_4) goto L_C015536;
    goto L_C015630;
    L_C015536:;
    goto L_C0155DE;
    L_C015508:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = 0x8C;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C015514;
    L_C015316:;
    if ((v0_6 != 6)) goto L_C01531E;
    v0_4 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C01554C;
    if ((v0_6 == 1)) goto L_C01555A;
    if ((v0_6 == 2)) goto L_C01557A;
    goto L_C015630;
    L_C01557A:;
    v0_4 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C01558E;
    v0_4 = (*(short *)0xC7F3048) == 0;
    if (v0_4) goto L_C015630;
    L_C01558E:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_3;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
    v0_8 = (0xC7F31BC);
    goto L_C015630;
    L_C01555A:;
    v0_3 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) < 0)) goto L_C01556E;
    v0_3 = (*(short *)0xC7F3048) == 0;
    if (v0_3) goto L_C015630;
    L_C01556E:;
    *(unsigned short *)((v0_2 + 0xC)) = 0x3C;
    goto L_C015572;
    L_C01554C:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = v0_0;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C01555A;
    L_C01531E:;
    if ((v0_6 != 7)) goto L_C015326;
    v0_7 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0155B0;
    if ((v0_6 == 1)) goto L_C0155D2;
    goto L_C015630;
    L_C0155D2:;
    v0_4 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C015630;
    goto L_C0155DE;
    L_C0155B0:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = 0x78;
    v0_5 = (*(signed char *)((v0_4 + 0x22))) != 0;
    if (v0_5) goto L_C0155C6;
    v0_4 = (*(signed char *)((v0_4 + 0x13E))) == 0;
    if (v0_4) goto L_C0155CC;
    L_C0155C6:;
    *(unsigned short *)((v0_2 + 0xC)) = v0_3;
    L_C0155CC:;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C0155D2;
    L_C015326:;
    goto L_C015630;
    L_C0153CC:;
    v0_4 = *(signed char *)((v0_8 + 0x0));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C0153DE;
    if ((v0_6 == 1)) goto L_C0153EC;
    if ((v0_6 == 2)) goto L_C015400;
    goto L_C015630;
    L_C015400:;
    w0_1 = *(float *)((v0_5 + 0x0));
    *(float *)((v0_5 + 0x0)) = (w0_1 + 0.099999994f);
    if ((!(w0_0 > (w0_1 + 0.099999994f)))) goto L_C015412;
    goto L_C015630;
    L_C015412:;
    *(float *)((v0_5 + 0x0)) = w0_0;
    goto L_C0155DE;
    L_C0153EC:;
    v0_3 = *(short *)((v0_2 + 0xC));
    *(unsigned short *)((v0_2 + 0xC)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) >= 0)) goto L_C0153FC;
    goto L_C015572;
    L_C0153FC:;
    goto L_C015630;
    L_C0153DE:;
    *(float *)((v0_5 + 0x0)) = F15;
    *(unsigned short *)((v0_2 + 0xC)) = v0_1;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    goto L_C0153EC;
    L_C015364:;
    v0_3 = *(signed char *)((v0_2 + 0x55));
    v0_6 = (v0_3);
    if ((v0_3 == 0)) goto L_C015398;
    if ((v0_6 == 1)) goto L_C015398;
    if ((v0_6 == 2)) goto L_C015398;
    if ((v0_6 == 3)) goto L_C015398;
    if ((v0_6 == 4)) goto L_C015398;
    if ((v0_6 == 5)) goto L_C015398;
    if ((v0_6 == 6)) goto L_C015398;
    if ((v0_6 == 7)) goto L_C015398;
    if ((v0_6 == 8)) goto L_C015398;
    if ((v0_6 == 9)) goto L_C015398;
    if ((v0_6 == 10)) goto L_C0153A0;
    L_C0153A4:;
    v0_3 = (int)(*(short *)(((v0_2 + 0xA) + 0x0))) <= 0;
    v0_8 = ((v0_2 + 0xA));
    if (v0_3) goto L_C0153B4;
    *(unsigned short *)((v0_8 + 0x0)) = ((*(short *)((v0_8 + 0x0))) - 1);
    L_C0153B4:;
    v0_3 = *(short *)((v0_7 + 0x0));
    *(unsigned short *)((v0_7 + 0x0)) = (v0_3 + 0x1);
    if (((int)(unsigned short)(v0_3 + 0x1) >= (int)0x7FFF)) goto L_C0153C6;
    goto L_C015630;
    L_C0153C6:;
    *(unsigned char *)((v0_2 + 0x3)) = 0x2;
    goto L_C015630;
    L_C0153A0:;
    ending_show_mail_screen();
    goto L_C0153A4;
    L_C015398:;
    ending_state_run_script();
    goto L_C0153A4;
    L_C015206:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) + 0x1);
    *(unsigned char *)((v0_2 + 0x1)) = v0_3;
    *(unsigned char *)((v0_2 + 0x2)) = v0_3;
    *(unsigned char *)((v0_2 + 0x3)) = v0_3;
    v0_0 = (*(signed char *)((v0_2 + 0x47))) == 0;
    v0_6 = (0x47);
    if (v0_0) goto L_C015240;
    *(unsigned char *)((R9 + 0x0)) = ((*(signed char *)((v0_2 + v0_6))) - 1);
    L_C015242:;
    *(unsigned short *)((v0_7 + 0x0)) = v0_3;
    (((struct o0_ushort *)0xC361C5A)->v) = v0_3;
    (((struct o3_uchar *)0xC361C5A)->v) = v0_3;
    *(unsigned short *)((v0_2 + 0xA)) = v0_3;
    *(unsigned short *)((v0_2 + 0x1C)) = v0_3;
    *(unsigned short *)((v0_2 + 0x1A)) = v0_3;
    *(unsigned short *)((v0_2 + 0x18)) = v0_3;
    *(unsigned short *)((v0_2 + 0x16)) = v0_3;
    *(unsigned short *)((v0_2 + 0x14)) = v0_3;
    (*(float *)0x0C361C70) = F15;
    (*(float *)0x0C361C6C) = F15;
    (*(float *)0x0C361C68) = F15;
    (*(float *)0x0C361C64) = F15;
    *(float *)((v0_5 + 0x0)) = F15;
    game_reset_objects();
    bgm_stop_streams();
    cam_force_mode(0x1C, 0x0, 0xF0);
    FUN_0c05f2d4(0x3, 0x0);
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    res_switch_scene(0x9);
    FUN_0c0a3308((*(signed char *)((v0_2 + 0x55))));
    (((struct o56_uchar *)(v0_2))->v) = 0x0;
    goto L_C0152A8;
    L_C015240:;
    *(unsigned char *)((R9 + 0x0)) = v0_3;
    goto L_C015242;
}

float fx_spawn_08(int a4, int a5)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F0;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_5 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned char *)(((int)stk + 12)) = v0_0;
    v0_2 = *(signed char *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_5 = (v0_2);
    v0_0 = (0x1);
    v0_1 = (0x0);
    if ((v0_2 == 0)) goto L_C0B7BD4;
    if ((v0_5 != 1)) goto L_C0B7BC0;
    L_C0B7CD4:;
    v0_3 = (0x14000);
    v0_4 = (v0_1);
    w0_0 = (1.0f);
    w0_1 = (35.0f);
    w0_2 = (65536.0f);
    w0_3 = (360.0f);
    L_C0B7CE6:;
    v0_6 = obj_create(0x1, 0x1, 0x2, 0x0);
    v0_5 = (v0_6);
    v0_2 = (v0_6);
    if (!((v0_6 != 0))) goto L_C0B7F58;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    *(unsigned char *)((v0_2 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned short *)((v0_2 + 0x6)) = 0xF;
    *(unsigned char *)((v0_2 + 0x5)) = 0x19;
    *(unsigned int *)((v0_2 + 0x10)) = 0xC0B8430;
    (((struct o58_float *)(v0_2))->v) = 2.0f;
    (((struct o54_float *)(v0_2))->v) = 2.0f;
    (((struct o50_float *)(v0_2))->v) = 2.0f;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
    thunk_FUN_0c062242(((short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + 0xC7E40C4))), (v0_2 + 0x20));
    v0_5 = (v0_1);
    goto L_C0B7D52;
    L_C0B7F58:;
    v0_2 = (int)(v0_4 + 0x1) >= (int)0x14;
    v0_4 = ((v0_4 + 0x1));
    if (v0_2) goto L_C0B7F64;
    goto L_C0B7CE6;
    L_C0B7F64:;
    return F0;
    L_C0B7D52:;
    v0_6 = ((v0_5 << 2));
    if ((v0_5 != 0)) goto L_C0B7D66;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_2) + v0_6) + 0x0))) + 0x0)) = v0_0;
    L_C0B7D70:;
    *(unsigned short *)(((*(int *)((((0x2E0 + v0_2) + v0_6) + 0x0))) + 0x2)) = 0x1F;
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
    FUN_0c06233a((*(int *)((((0x2E0 + v0_2) + v0_6) + 0x0))), ((signed char)((((v0_7 << 1) + v0_7) << 2) << 1) + 0xC6002D0), v0_5);
    v0_6 = *(int *)((((0x2E0 + v0_2) + v0_6) + 0x0));
    (((struct o24_float *)(v0_6))->v) = w0_0;
    (((struct o20_float *)(v0_6))->v) = w0_0;
    v0_7 = (int)(v0_5 + 0x1) < (int)0x2;
    (((struct o1C_float *)(v0_6))->v) = w0_0;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C0B7D52;
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)(((int)stk + 4)));
    v0_5 = ((v0_4 - 10));
    if (((*(int *)(((int)stk + 8))) != 1)) goto L_C0B7E4C;
    if (((int)v0_4 >= (int)0xA)) goto L_C0B7DE0;
    *(unsigned int *)((v0_2 + 0x2C)) = v0_1;
    FPUL_ = (((((v0_4 << 2) << 1) + v0_4) << 2));
    L_C0B7E76:;
    *(unsigned int *)((v0_2 + 0x30)) = (int)(((float)FPUL_ * w0_2) / w0_3);
    FPUL_ = ((int)(((float)FPUL_ * w0_2) / w0_3));
    L_C0B7EDA:;
    *(unsigned int *)((v0_2 + 0x34)) = v0_1;
    w0_4 = math_cos_angle16(((-(*(int *)((v0_2 + 0x30)))) + v0_3));
    *(float *)(((int)stk + 0)) = w0_4;
    w0_4 = (w0_4 * (math_sin_angle16(((-(*(int *)((v0_2 + 0x2C)))) + v0_3))));
    (((struct o38_float *)(v0_2))->v) = (w0_4 * w0_1);
    w0_4 = math_sin_angle16(((-(*(int *)((v0_2 + 0x30)))) + v0_3));
    *(float *)(((int)stk + 0)) = w0_4;
    w0_4 = (w0_4 * (math_sin_angle16(((-(*(int *)((v0_2 + 0x2C)))) + v0_3))));
    (((struct o40_float *)(v0_2))->v) = (w0_4 * w0_1);
    (((struct o3C_float *)(v0_2))->v) = (-((math_cos_angle16(((-(*(int *)((v0_2 + 0x2C)))) + v0_3))) * w0_1));
    (((struct o101_uchar *)(v0_2))->v) = v0_0;
    (((struct o102_uchar *)(v0_2))->v) = v0_0;
    obj_set_record_char(v0_2, 0x74);
    (((struct oEC_ushort *)(v0_2))->v) = v0_1;
    (((struct o308_uchar *)(v0_2))->v) = 0xF;
    *(unsigned char *)(((0x308 + v0_2) + 0x1)) = v0_1;
    (((struct oF2_ushort *)(v0_2))->v) = v0_4;
    v0_5 = *(signed char *)(((int)stk + 12));
    *(unsigned char *)((v0_2 + 0x8)) = v0_5;
    v0_5 = (v0_5);
    v0_5 = ((0x308 + v0_2));
    goto L_C0B7F58;
    L_C0B7DE0:;
    if (((int)v0_4 >= (int)0x10)) goto L_C0B7DF4;
    *(unsigned int *)((v0_2 + 0x2C)) = 0xFFFFEAAB;
    FPUL_ = ((v0_5 * 0x3C));
    L_C0B7E04:;
    *(unsigned int *)((v0_2 + 0x30)) = (int)(((float)FPUL_ * w0_2) / w0_3);
    FPUL_ = ((int)(((float)FPUL_ * w0_2) / w0_3));
    goto L_C0B7EDA;
    L_C0B7DF4:;
    *(unsigned int *)((v0_2 + 0x2C)) = 0xFFFFDC72;
    FPUL_ = (((v0_4 - 16) * 0x5A));
    goto L_C0B7E04;
    L_C0B7E4C:;
    if (((int)v0_4 >= (int)0x6)) goto L_C0B7E60;
    *(unsigned int *)((v0_2 + 0x2C)) = v0_1;
    FPUL_ = ((v0_4 * 0x3C));
    goto L_C0B7E76;
    L_C0B7E60:;
    if (((int)v0_4 >= (int)0xA)) goto L_C0B7E84;
    *(unsigned int *)((v0_2 + 0x2C)) = 0xFFFFEAAB;
    FPUL_ = (((v0_4 - 6) * 0x5A));
    goto L_C0B7E76;
    L_C0B7E84:;
    if (((int)v0_4 >= (int)0xD)) goto L_C0B7EA4;
    *(unsigned int *)((v0_2 + 0x2C)) = 0xFFFFDC72;
    w0_4 = (float)(v0_5 * 0x78);
    *(unsigned int *)((v0_2 + 0x30)) = (int)((w0_4 * w0_2) / w0_3);
    FPUL_ = ((int)((w0_4 * w0_2) / w0_3));
    goto L_C0B7EDA;
    L_C0B7EA4:;
    if (((int)v0_4 >= (int)0x11)) goto L_C0B7EBE;
    *(unsigned int *)((v0_2 + 0x2C)) = 0x1555;
    FPUL_ = (((v0_4 - 13) * 0x5A));
    L_C0B7ECE:;
    *(unsigned int *)((v0_2 + 0x30)) = (int)(((float)FPUL_ * w0_2) / w0_3);
    FPUL_ = ((int)(((float)FPUL_ * w0_2) / w0_3));
    goto L_C0B7EDA;
    L_C0B7EBE:;
    *(unsigned int *)((v0_2 + 0x2C)) = 0x238E;
    FPUL_ = (((v0_4 - 17) * 0x78));
    goto L_C0B7ECE;
    L_C0B7D66:;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_2) + v0_6) + 0x0))) + 0x0)) = v0_1;
    goto L_C0B7D70;
    L_C0B7BC0:;
    if ((v0_5 != 2)) goto L_C0B7BC8;
    goto L_C0B7CD4;
    L_C0B7BC8:;
    goto L_C0B7F64;
    L_C0B7BD4:;
    v0_3 = obj_create(0x5, 0x1, 0xA, 0x0);
    v0_5 = (v0_3);
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C0B7BEA;
    goto L_C0B7F64;
    L_C0B7BEA:;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_3 = *(int *)(((int)stk + 4));
    *(unsigned char *)((v0_2 + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned short *)((v0_2 + 0x6)) = 0xF;
    *(unsigned char *)((v0_2 + 0x5)) = 0x19;
    *(unsigned int *)((v0_2 + 0x10)) = 0xC0B8430;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x2C)) = *(struct mv3 *)((v0_3 + 0x2C)); }
    v0_3 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (v0_2 + 0x20));
    v0_3 = (v0_1);
    v0_4 = (v0_1);
    L_C0B7C42:;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_2) + v0_4) + 0x0))) + 0x0)) = v0_0;
    *(unsigned short *)(((*(int *)((((0x2E0 + v0_2) + v0_4) + 0x0))) + 0x2)) = 0x1F;
    v0_1 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
    FUN_0c06233a((*(int *)((((0x2E0 + v0_2) + v0_4) + 0x0))), ((signed char)((((v0_1 << 1) + v0_1) << 2) << 1) + 0xC6002D0), 0x4);
    FUN_0c0b7998((*(int *)((((0x2E0 + v0_2) + v0_4) + 0x0))));
    v0_1 = (int)(v0_3 + 0x1) < (int)0xA;
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((v0_4 + 0x4));
    if (v0_1) goto L_C0B7C42;
    *(unsigned char *)(((0x105 + v0_2) + 0x2)) = v0_0;
    *(unsigned char *)(((0x105 + v0_2) + 0x1)) = v0_0;
    (((struct o105_uchar *)(v0_2))->v) = v0_0;
    *(unsigned int *)((v0_2 + 0x1C)) = (*(int *)(((int)stk + 4)));
    (((struct oEC_ushort *)(v0_2))->v) = 0x41;
    v0_5 = (0xEC);
    goto L_C0B7F64;
}

int FUN_0c0a3988(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 83) {
        return pl_play_voice_at_frame(a4, 0x0, 0xF);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x154) {
        return pl_play_voice_at_frame(a4, 0xB, 0x8);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x200) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x203) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x206) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x209) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x20C) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x20F) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x212) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x21B) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x221) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x224) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x227) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x22A) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x22D) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x230) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x233) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23C) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x23F) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x245) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24A) {
        return pl_play_voice_at_frame(a4, 0x4, 0x5);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x24B) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x256) {
        return pl_play_voice_at_frame(a4, 0x9, 0x3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x258) {
        return pl_play_voice_at_frame(a4, 0x9, 0x3);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x260) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xC);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x265) {
        return pl_play_voice_at_frame(a4, 0x4, 0x5);
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x26C) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xC);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x270) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x274) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xC);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x280) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xC);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x298) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xC);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A0) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A1) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A2) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) == 0x2A3) {
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = 0xB;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                t2 = 0xA;
            }
            return pl_play_voice_at_frame(a4, 0x0, t2);
        }
        return 0x71D4;
    }
    if (((t1 << 8) + (unsigned char)t0) != 0x2AE) {
        if (((t1 << 8) + (unsigned char)t0) != 0x2B0) {
            if (((t1 << 8) + (unsigned char)t0) == 0x2B1) {
                if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                    u0 = math_rand_float();
                    u1 = (u0 * 255.0f);
                    if (!(2.14748365e+09f > (u0 * 255.0f))) {
                        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t2 = 0xB;
                    if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                        t2 = 0xA;
                    }
                    return pl_play_voice_at_frame(a4, 0x0, t2);
                }
                return 0x71D4;
            }
            if (((t1 << 8) + (unsigned char)t0) != 0x2B4) {
                if (((t1 << 8) + (unsigned char)t0) == 0x2B9) {
                    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                        u0 = math_rand_float();
                        u1 = (u0 * 255.0f);
                        if (!(2.14748365e+09f > (u0 * 255.0f))) {
                            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t2 = 0xB;
                        if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                            t2 = 0xA;
                        }
                        return pl_play_voice_at_frame(a4, 0x0, t2);
                    }
                    return 0x71D4;
                }
                if (((t1 << 8) + (unsigned char)t0) == 0x2BB) {
                    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                        u0 = math_rand_float();
                        u1 = (u0 * 255.0f);
                        if (!(2.14748365e+09f > (u0 * 255.0f))) {
                            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t2 = 0xB;
                        if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                            t2 = 0xA;
                        }
                        return pl_play_voice_at_frame(a4, 0x0, t2);
                    }
                    return 0x71D4;
                }
                if (((t1 << 8) + (unsigned char)t0) == 0x2BD) {
                    if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                        u0 = math_rand_float();
                        u1 = (u0 * 255.0f);
                        if (!(2.14748365e+09f > (u0 * 255.0f))) {
                            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t2 = 0xB;
                        if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                            t2 = 0xA;
                        }
                        return pl_play_voice_at_frame(a4, 0x0, t2);
                    }
                    return 0x71D4;
                }
                if (((t1 << 8) + (unsigned char)t0) != 0x2BF) {
                    if ((((t1 << 8) + (unsigned char)t0) != 0x2C5) && (((t1 << 8) + (unsigned char)t0) != 0x2C9)) {
                        if ((((t1 << 8) + (unsigned char)t0) != 0x2EB) && (((t1 << 8) + (unsigned char)t0) != 0x2EC)) {
                            if ((((t1 << 8) + (unsigned char)t0) != 0x2F3) && (((t1 << 8) + (unsigned char)t0) != 0x2F4)) {
                                if ((((t1 << 8) + (unsigned char)t0) != 0x2F5) && (((t1 << 8) + (unsigned char)t0) != 0x2F6)) {
                                    if ((((t1 << 8) + (unsigned char)t0) != 0x2FD) && (((t1 << 8) + (unsigned char)t0) != 0x2FE)) {
                                        if (((t1 << 8) + (unsigned char)t0) == 0x307) {
                                            return pl_play_voice_at_frame(a4, 0x0, 0x1);
                                        }
                                        return ((t1 << 8) + (unsigned char)t0);
                                    }
                                    return pl_play_voice_at_frame(a4, 0xA, 0x5);
                                }
                                return pl_play_voice_at_frame(a4, 0x5, 0x5);
                            }
                            return pl_play_voice_at_frame(a4, 0x16, 0x5);
                        }
                        return pl_play_voice_at_frame(a4, 0x10, 0x3);
                    }
                    return pl_play_voice_at_frame(a4, 0x4, 0x4);
                }
                if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
                    u0 = math_rand_float();
                    u1 = (u0 * 255.0f);
                    if (!(2.14748365e+09f > (u0 * 255.0f))) {
                        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t0 = 0xB;
                    if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) == 0) {
                        t0 = 0xA;
                    }
                    return pl_play_voice_at_frame(a4, 0x0, t0);
                }
                return 0x71D4;
            }
        }
        if ((int)((((struct o71D4_short *)(a4))->v)) >= 0) {
            return pl_play_voice_at_frame(a4, 0x0, 0xD);
        }
        return 0x71D4;
    }
    return pl_play_voice_at_frame(a4, 0x24, 0xE);
}

int pl_step_motion_impl(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) + 0x1);
    (((struct o71A6_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A6))) - 1);
    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x71A6))) != 0) {
    } else {
        if (((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4))) & 0xFFFFFF80) == 0) {
            t1 = *(signed char *)((a4 + 0x719C));
            if ((unsigned char)t1 != 0) {
                if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + (((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t1) - 1) << 2) << 1)) + 0x4))) & 64) != 0) {
                    pl_load_motion_prev_key(a4, a5);
                    (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                    t1 = 0x40;
                } else {
                    t2 = *(signed char *)((a4 + 0x719C));
                    if ((unsigned char)t2 == 0) {
                        if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + ((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t2) << 2) << 1)) + 0x4))) & 64) != 0) {
                            pl_load_motion_key(a4, a5);
                            (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                            (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                            (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                            (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                            (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                            t2 = 0x40;
                        } else {
                            pl_load_motion_key(a4, a5);
                            (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                            (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                            (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                            if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
                                (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                            }
                            t2 = 0x0;
                        }
                        t3 = t2;
                    } else {
                        pl_load_motion_key(a4, a5);
                        (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                        (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                        (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                        if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
                            (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                        }
                        t3 = 0x0;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                t1 = *(signed char *)((a4 + 0x719C));
                if ((unsigned char)t1 == 0) {
                    if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + ((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t1) << 2) << 1)) + 0x4))) & 64) != 0) {
                        pl_load_motion_key(a4, a5);
                        (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                        (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                        (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                        (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                        (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                        t1 = 0x40;
                    } else {
                        pl_load_motion_key(a4, a5);
                        (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                        (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                        (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                        if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
                            (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                        }
                        t1 = 0x0;
                    }
                    t3 = t1;
                } else {
                    pl_load_motion_key(a4, a5);
                    (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                    (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                    (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                    if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
                        (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                    }
                    t3 = 0x0;
                }
                t2 = t3;
            }
            t1 = t2;
        } else {
            (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
            (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
            (((struct o719C_uchar *)(a4))->v) = ((unsigned int)((unsigned int)((*(int *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)(((0x719C + a4) + 0x0)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x0))) & 0xFF000000) >> 16) >> 8);
            pl_load_motion_key(a4, a5);
            t2 = (((struct o7198_short *)(a4))->v);
            t3 = *(signed char *)((a4 + 0x719C));
            t4 = *(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0));
            (((struct o71A6_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)t2 + (unsigned char)t3) << 2) << 1) + t4) + 0x5)));
            t5 = *(signed char *)((a4 + 0x71A6));
            (((struct o71A7_uchar *)(a4))->v) = t5;
            (((struct o71A2_uchar *)(a4))->v) = 0x0;
            (((struct o719E_ushort *)(a4))->v) = 0x0;
            t6 = (((((unsigned short)t2 + (unsigned char)t3) << 2) << 1) + t4);
            t2 = t5;
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)(unsigned char)(*(signed char *)((a4 + 0x719C)))) {
                    break;
                }
                t6 = 0x7198;
                t2 = 0x71A4;
                t6 = (t6 + a4);
                t2 = (t2 + a4);
                t6 = (*(short *)((t6 + 0x0)));
                t2 = (*(signed char *)((t2 + 0x0)));
                t6 = (unsigned short)t6;
                t6 = (t6 + t3);
                t4 = 0x719E;
                t2 = (t2 << 2);
                t2 = (t2 + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50)));
                t2 = (*(int *)((t2 + 0x0)));
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + t2);
                t4 = (t4 + a4);
                t2 = (*(short *)((t4 + 0x0)));
                t3 = (t3 + 0x1);
                t2 = (t2 + (unsigned char)(*(signed char *)((t6 + 0x5))));
                *(unsigned short *)((t4 + 0x0)) = t2;
            }
            t2 = (((struct o719E_short *)(a4))->v);
            for (;;) {
                if ((int)((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1) >= (int)(unsigned short)t2) {
                    break;
                }
                (((struct o71A2_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A2))) + 0x1);
            }
            (((struct o71A3_uchar *)(a4))->v) = ((*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1);
            (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
            t1 = 0xFFFFFF80;
        }
        t0 = t1;
    }
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) > (int)(unsigned char)(*(signed char *)((a4 + 0x71A3)))) {
        (((struct o71A2_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A2))) + 0x1);
        pl_load_motion_attack_record(a4, a5);
    }
    return t0;
}

