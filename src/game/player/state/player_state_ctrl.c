/* player state change (pl_change_state) power form flags input chords and character move hooks (0c0a18f8-0c0a2ee8) */

/* named globals (symbols.txt) */
int pl_start_power_form_attack(int a4, int a5, int a6, int a7);
int pl_detect_special_input(int a4, int a5, int a6, int a7);
extern char g_attack_record_tab[];
extern char g_pl_check_special_input_tbl[];
extern char g_pl_state_flags_tbl[];
struct o2DC_int { char p[0x2DC]; int v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720C_short { char p[0x720C]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_stick_dir_angle(int);
struct o71C8_int { char p[0x71C8]; int v; };
int pl_change_state(int, int, int, int, int, int, int, int, int);
int obj_touched_by_slot(int, int);
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o144_uchar { char p[0x144]; unsigned char v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o721D_uchar { char p[0x721D]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int FUN_0c059b48(int);
int FUN_0c059b5a(int);
int pl_timer_arm_forever(int);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71DF_uchar { char p[0x71DF]; unsigned char v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int fx_spawn_048aa0(int);
int fx_spawn_04a294(int);
int fx_spawn_04a4c4(int);
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
struct o274_float { char p[0x274]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o71F8_int { char p[0x71F8]; int v; };
int pl_get_held_item_class(int, int, int);
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o7209_uchar { char p[0x7209]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7242_uchar { char p[0x7242]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
int pl_set_power_form_off(int);
int FUN_0c0a3d16(int);
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0209c6(int, float);
int pl_angle_to_opponent(int);
int thunk_FUN_0c062242(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o7264_float { char p[0x7264]; float v; };
struct o7268_float { char p[0x7268]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o7270_float { char p[0x7270]; float v; };
struct o7274_float { char p[0x7274]; float v; };
struct o7278_float { char p[0x7278]; float v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
int hit_find_interactable_contact(int, int);
struct o71E4_float { char p[0x71E4]; float v; };
struct o7254_float { char p[0x7254]; float v; };
int hit_probe_step_by_velocity(int, int, float);
int pl_apply_acceleration(int);
int pl_no_ground(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int FUN_0c0a18f8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;

    if (((*(signed char *)((a4 + 0x7236))) == 0) && ((t0 = (((struct o720C_short *)(a4))->v), t0 == 0) && ((t1 = *(int *)((a4 + 0x1C)), t2 = (((struct o720C_short *)(t1))->v), t2 == 0) && ((t3 = *(signed char *)((a4 + 0x71BA)), t4 = *(signed char *)((((t3 << 2) + ((int)g_pl_state_flags_tbl)) + 0x1)), t4 != 0) && (t5 = *(int *)((a4 + 0x1C)), t6 = *(signed char *)((t5 + 0x71BA)), t7 = *(signed char *)((((t6 << 2) + ((int)g_pl_state_flags_tbl)) + 0x2)), t7 != 0))))) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((((int)g_pl_check_special_input_tbl) + ((*(signed char *)((a4 + 0x4))) << 2))))))(a4, a5, a6, a7);
        if ((signed char)t0 != 99) {
            if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                t0 = *(signed char *)((a4 + 0x4));
                if ((t0 != 4) && (t0 != 5)) {
                    (((struct o7248_uint *)(a4))->v) = (unsigned short)((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
                } else {
                    (((struct o7248_uint *)(a4))->v) = (unsigned short)(((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0)) + 0x8000);
                }
            } else {
                (((struct o7248_uint *)(a4))->v) = (*(int *)((a4 + 0x30)));
            }
            if ((*(signed char *)((a4 + 0x71BC))) == 2) {
                (((struct o7207_uchar *)(a4))->v) = 0x1;
                return 0x0;
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int pl_try_start_pickup_touched(int a4)
{
    int stk[3];
    register int t0;
    register int t52;
    register int t2;
    int t7;
    int t11;
    int t31;

    t0 = (((struct o71C8_int *)(a4))->v);
    t52 = 0x0;
    if (t0 != 0) {
        t2 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
        t52 = 0x0;
        if ((signed char)t2 != 0) {
            if ((*(signed char *)((t0 + 0x4))) == 6) {
                t7 = *(signed char *)((t0 + 0x30C));
                t52 = 0x0;
                if ((t7 != 15) && ((t7 != 16) && (t7 != 17))) {
                    if ((*(signed char *)((t0 + 0x30D))) == 0) {
                        t11 = *(signed char *)((t0 + 0x4));
                        t52 = 0x0;
                        if ((t11 != 1) && (t11 != 6)) {
                        } else {
                            pl_change_state(a4, 0x23, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                            t52 = 0x1;
                        }
                    } else {
                        t52 = 0x0;
                        if ((*(signed char *)((t0 + 0x4))) == 1) {
                            pl_change_state(a4, 0x19, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                            t52 = 0x1;
                        }
                    }
                }
            } else {
                if ((*(signed char *)((t0 + 0x30D))) == 0) {
                    t31 = *(signed char *)((t0 + 0x4));
                    t52 = 0x0;
                    if ((t31 != 1) && (t31 != 6)) {
                    } else {
                        pl_change_state(a4, 0x23, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                        t52 = 0x1;
                    }
                } else {
                    t52 = 0x0;
                    if ((*(signed char *)((t0 + 0x4))) == 1) {
                        pl_change_state(a4, 0x19, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                        t52 = 0x1;
                    }
                }
            }
        }
    }
    return t52;
}

int obj_set_record_char(int a4, int a5)
{
    register int t3;
    register int t4;

    (((struct o100_uchar *)(a4))->v) = a5;
    (((struct oF4_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((((*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)))) << 2) + ((int)g_attack_record_tab)))));
    (((struct o108_uchar *)(a4))->v) = 0x0;
    t3 = (0x11C + a4);
    t4 = 0x0;
    for (;;) {
        t4 = (t4 + 0x1);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        if ((int)t4 >= (int)0xA) {
            break;
        }
    }
    (((struct o144_uchar *)(a4))->v) = 0x0;
    return 0x144;
}

int obj_set_record(int a4, int a5)
{
    register int t0;
    register int t1;

    (((struct o100_uchar *)(a4))->v) = a5;
    (((struct oF4_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + 0xC33AB08);
    (((struct o108_uchar *)(a4))->v) = 0x0;
    t0 = (0x11C + a4);
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0xA) {
            break;
        }
    }
    (((struct o144_uchar *)(a4))->v) = 0x0;
    return 0x144;
}

int pl_enter_state_11_12(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0xB;
    (((struct o7223_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x7222)));
    pl_timer_arm_forever(a4);
    (((struct o7206_uchar *)(a4))->v) = 0x0;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    if (1680.0f > (float)((((struct o71F4_short *)(a4))->v))) {
        (((struct o721D_uchar *)(a4))->v) = 0x0;
    } else {
        if (1920.0f > (float)((((struct o71F4_short *)(a4))->v))) {
            (((struct o721D_uchar *)(a4))->v) = 0x1;
        } else {
            if (2160.0f > (float)((((struct o71F4_short *)(a4))->v))) {
                (((struct o721D_uchar *)(a4))->v) = 0x2;
            } else {
                (((struct o721D_uchar *)(a4))->v) = 0x3;
            }
        }
    }
    if ((int)(*(signed char *)((a4 + 0x7222))) < (int)0x5) {
        return FUN_0c059b48(a4);
    }
    return FUN_0c059b5a(a4);
}

int pl_enter_state_13(int a4, int a5)
{
    int stk[1];
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0xD;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71DF_uchar *)(a4))->v) = 0x1;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
    (((struct o723E_uchar *)(a4))->v) = (*(signed char *)((0xC338E1C + (*(signed char *)((a4 + 0x4))))));
    pl_start_motion(a4, 0x2, 0xAF);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0xB4;
    t10 = 0x0;
    if (((((struct oF8_int *)(a4))->v)) != 0) {
        t10 = ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x7))) & 0xC0);
    }
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    if ((*(signed char *)(((int)stk + 0))) == 96) {
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        pl_start_motion(a4, 0x2, 0xAE);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xB4;
        (((struct o723E_uchar *)(a4))->v) = 0x14;
        return fx_spawn_048aa0(a4);
    }
    if ((unsigned char)t10 != 0) {
        if (((unsigned char)t10 != 64) && ((unsigned char)t10 != 0x80)) {
            if ((unsigned char)(*(signed char *)((0xC338FAC + (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4)))))) != 64) {
                
                return fx_spawn_04a4c4((*(signed char *)((a4 + 0x3))));
            }
            return fx_spawn_04a294((*(signed char *)((a4 + 0x3))));
        }
        if ((unsigned char)t10 == 64) {
            return fx_spawn_04a294((*(signed char *)((a4 + 0x3))));
        }
        return fx_spawn_04a4c4((*(signed char *)((a4 + 0x3))));
    }
    if ((unsigned char)(*(signed char *)((0xC338FAC + (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4)))))) != 64) {
        
        return fx_spawn_04a4c4((*(signed char *)((a4 + 0x3))));
    }
    return fx_spawn_04a294((*(signed char *)((a4 + 0x3))));
}

int pl_check_dual_button_input(int a4)
{
    float u1;
    int t15;
    int t21;

    if (((*(signed char *)((a4 + 0x71BC))) != 2) && (u1 = (((struct o274_float *)(a4))->v), u1 == 0.0f)) {
        return 0x0;
    }
    if (((((((struct o2E4_int *)(a4))->v)) & 0x400) != 0) && (t15 = (((struct o2DC_int *)(a4))->v), (t15 & 0x200) != 0)) {
        return 0x1;
    }
    if (((((((struct o2E4_int *)(a4))->v)) & 0x200) != 0) && (t21 = (((struct o2DC_int *)(a4))->v), (t21 & 0x400) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int pl_check_power_form_attack_input(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 != 13) && ((t1 = *(signed char *)((a4 + 0x71F1)), t1 != 0) && ((t2 = (((struct o71F4_short *)(a4))->v), t2 != 0) && (((t3 = (((struct o2E4_int *)(a4))->v), (t3 & 4) != 0) && (t4 = (((struct o2DC_int *)(a4))->v), (t4 & 0x600) != 0)) || ((t5 = (((struct o71F8_int *)(a4))->v), t6 = (((struct o2E4_int *)(a4))->v), ((t6 | t5) & 0x404) == 0x404) || (t7 = (((struct o71F8_int *)(a4))->v), t8 = (((struct o2E4_int *)(a4))->v), ((t8 | t7) & 0x204) == 0x204)))))) {
        return 0x1;
    }
    return 0x0;
}


int pl_enter_state_27_28(int a4, int a5)
{
    int t0;

    *(unsigned char *)((a4 + 0x9)) = 0x2;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct o7243_uchar *)(a4))->v) = 0xA;
    (((struct o721E_uchar *)(a4))->v) = 0x0;
    if (((*(signed char *)((a4 + 0x720A))) == 0) && (t0 = *(signed char *)((a4 + 0x71BA)), t0 != 37)) {
        (((struct o7248_uint *)(a4))->v) = (*(int *)((a4 + 0x30)));
    }
    (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
    (((struct o71BA_uchar *)(a4))->v) = 0x1C;
    (((struct o7242_uchar *)(a4))->v) = 0x0;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    (((struct o7209_uchar *)(a4))->v) = a5;
    pl_timer_arm_forever(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x9)) = 0x3;
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((t0 + 0xD)) = 0x0;
    *(unsigned char *)((t0 + 0xC)) = 0x0;
    *(unsigned char *)((t0 + 0xB)) = 0x0;
    *(unsigned char *)((t0 + 0xA)) = 0x0;
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71BB_uchar *)(t0))->v) = (*(signed char *)((t0 + 0x71BA)));
    (((struct o71BA_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1D;
    (((struct o7216_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    pl_timer_arm_forever((*(int *)((a4 + 0x1C))));
    (((struct o720B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o7228_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o7236_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    pl_reset_pose((*(int *)((a4 + 0x1C))));
    if ((*(signed char *)((a4 + 0x720A))) != 2) {
        FUN_0c0a3d16((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))));
    }
    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        if ((*(signed char *)((a4 + 0x7230))) == 0) {
            return pl_set_power_form_off(a4);
        }
        return 0x7230;
    }
    return 0x71F1;
}

int FUN_0c0a2830(int a4)
{
    register int t0;

    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x9)) = 0x3;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x7;
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((t0 + 0xD)) = 0x0;
    *(unsigned char *)((t0 + 0xC)) = 0x0;
    *(unsigned char *)((t0 + 0xB)) = 0x0;
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71BB_uchar *)(t0))->v) = (*(signed char *)((t0 + 0x71BA)));
    (((struct o71BA_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1D;
    pl_timer_arm_forever((*(int *)((a4 + 0x1C))));
    (((struct o720B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o7228_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o7236_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    pl_reset_pose((*(int *)((a4 + 0x1C))));
    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        if ((*(signed char *)((a4 + 0x7230))) == 0) {
            return pl_set_power_form_off(a4);
        }
        return 0x7230;
    }
    return 0x71F1;
}


int pl_try_char_special_move(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t6;
    register int t4;

    (((struct o7207_uchar *)(a4))->v) = 0x0;
    (((struct o720A_uchar *)(a4))->v) = 0x0;
    t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((int)g_pl_check_special_input_tbl) + ((*(signed char *)((a4 + 0x4))) << 2))))))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t6 = (signed char)t2;
    if ((signed char)t2 != 99) {
        pl_change_state(a4, 0x1C, t2, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        t4 = *(signed char *)((a4 + 0x720E));
        (((struct o720E_uchar *)(a4))->v) = (t4 + 0x1);
        if ((int)(signed char)(t4 + 0x1) > (int)0x63) {
            (((struct o720E_uchar *)(a4))->v) = 0x63;
        }
        t6 = 0x1;
    }
    return t6;
}

int pl_update_pos_delta(int a4)
{
    (((struct o7270_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o7264_float *)(a4))->v)));
    (((struct o7274_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o7268_float *)(a4))->v)));
    (((struct o7278_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o726C_float *)(a4))->v)));
    return 0x7278;
}

int FUN_0c0a2c76(int a4, int a5)
{
    register int t0;

    t0 = hit_find_interactable_contact(a4, 0xA);
    if ((signed char)t0 != 0) {
        (((struct o30D_uchar *)(a5))->v) = 0x1;
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0a2cc4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    t0 = hit_probe_step_by_velocity(a4, (0x7254 + a4), 60.0f);
    if ((signed char)t0 == 2) {
        t0 = *(signed char *)((a4 + 0x7243));
        (((struct o7243_uchar *)(a4))->v) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) >= (int)0x4) {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
            (((struct o7243_uchar *)(a4))->v) = 0x4;
        }
    } else {
        (((struct o7243_uchar *)(a4))->v) = 0x0;
    }
    t0 = pl_no_ground(a4);
    if (t0 != 0) {
        pl_apply_acceleration(a4);
    } else {
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
    }
    t0 = (((struct o2DC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 240) != 0) {
        t0 = pl_stick_dir_angle(a4);
        t2 = *(int *)((a4 + 0x30));
        t3 = *(int *)0xC7F31E0;
        t1 = t0;
        t5 = (unsigned short)((t3 + t0) - t2);
        if ((0x8000 & (unsigned short)((t3 + t0) - t2)) != 0) {
            t1 = 0xFFFF0000;
            t5 = ((unsigned short)((t3 + t0) - t2) | 0xFFFF0000);
        }
        if ((int)t5 <= (int)0xFFFFFB06) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x4FA);
        } else {
            if ((int)t5 >= (int)0x4FA) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x4FA);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u))) >> 1));
            }
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    }
    return t1;
}

float pl_set_velocity_forward(int a4, int a5, float f4)
{
    int stk[2];
    register float t4;
    register float u5;
    register int t7;

    *(float *)(((int)stk + 0)) = f4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)(((int)stk + 0))));
    t4 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u5 = *(float *)(((int)stk + 0));
    (((struct o40_float *)(a4))->v) = (t4 * u5);
    t7 = *(signed char *)(((int)stk + 4));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / (float)t7);
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / (float)t7);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct oEC_ushort *)(a4))->v) = (*(signed char *)(((int)stk + 4)));
    return (t4 * u5);
}
