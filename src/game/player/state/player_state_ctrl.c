/* player state change (pl_change_state) power form flags input chords and character move hooks (0c0a18f8-0c0a2ee8) */

/* named globals (symbols.txt) */
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

int pl_start_power_form_attack(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o2DC_int *)(a4))->v))) | ((((struct o71F8_int *)(a4))->v))) & 0x400) != 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x5;
            return ((int (*)(int, int, int, int))(0xC0A265A))(a4, 0x400, a6, a7);
        }
        (((struct o7222_uchar *)(a4))->v) = 0x6;
        return ((int (*)(int, int, int, int))(0xC0A265A))(a4, 0x400, a6, a7);
    }
    *(volatile int *)((a4 + 0x2DC));
    return ((int (*)(int, int, int, int))(0xC0A263E))(a4, 0x400, a6, a7);
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

int pl_detect_special_input(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t31;
    register int t52;
    register int t68;
    register float u70;
    register float u71;
    register float u72;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t83;
    register int t84;
    register int t85;
    register float u88;
    register float u89;
    register float u90;
    register int t92;
    register int t93;
    register int t94;
    register int t95;
    register int t101;
    register int t102;
    register int t103;
    register int t110;
    register float u112;
    register float u113;
    register float u115;
    register float u116;
    register int t125;
    register int t129;
    register float u135;
    register int t137;
    int t142;
    register float u146;
    register float u147;
    register float u148;
    register int t151;
    register float u153;
    register float u154;
    register float u155;
    register int t158;
    register int t159;
    register int t175;
    register float u177;
    register float u178;
    register float u179;
    register int t181;
    register int t182;
    register int t183;
    register int t184;
    register int t190;
    register int t191;
    register int t192;
    register float u195;
    register float u196;
    register float u197;
    register int t199;
    register int t200;
    register int t201;
    register int t202;
    register int t208;
    register int t209;
    register int t210;
    register int t217;
    register float u219;
    register float u220;
    register float u222;
    register float u223;
    register int t232;
    register int t236;
    register float u242;
    register int t244;
    int t249;
    register float u253;
    register float u254;
    register float u255;
    register int t258;
    register float u260;
    register float u261;
    register float u262;
    register int t265;
    register int t282;
    register int t303;
    register int t319;
    register float u321;
    register float u322;
    register float u323;
    register int t325;
    register int t326;
    register int t327;
    register int t328;
    register int t334;
    register int t335;
    register int t336;
    register float u339;
    register float u340;
    register float u341;
    register int t343;
    register int t344;
    register int t345;
    register int t346;
    register int t352;
    register int t353;
    register int t354;
    register int t361;
    register float u363;
    register float u364;
    register float u366;
    register float u367;
    register int t376;
    register int t380;
    register float u386;
    register int t388;
    int t393;
    register float u397;
    register float u398;
    register float u399;
    register int t402;
    register float u404;
    register float u405;
    register float u406;
    register int t409;
    register int t410;
    register int t426;
    register float u428;
    register float u429;
    register float u430;
    register int t432;
    register int t433;
    register int t434;
    register int t435;
    register int t441;
    register int t442;
    register int t443;
    register float u446;
    register float u447;
    register float u448;
    register int t450;
    register int t451;
    register int t452;
    register int t453;
    register int t459;
    register int t460;
    register int t461;
    register int t468;
    register float u470;
    register float u471;
    register float u473;
    register float u474;
    register int t483;
    register int t487;
    register float u493;
    register int t495;
    int t500;
    register float u504;
    register float u505;
    register float u506;
    register int t509;
    register float u511;
    register float u512;
    register float u513;
    register int t516;
    int t12;
    register int t13;
    int t51;
    int t302;

    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) == 10) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) == 3) && (t12 = *(int *)((a4 + 0x1C)), t13 = *(signed char *)((0x71BA + t12)), t13 == 24)) {
        if ((*(signed char *)(((((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA))) << 2) + ((int)g_pl_state_flags_tbl)) + 0x2))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))(((int)g_pl_state_flags_tbl), a5, a6, a7);
        }
        t31 = *(signed char *)((a4 + 0x71BA));
        if ((*(signed char *)(((((int)g_pl_state_flags_tbl) + (t31 << 2)) + 0x1))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x71BA))) == 10) {
            if ((*(signed char *)((((*(signed char *)((a4 + 0x721F))) << 1) + 0xC338DE9))) == 0) {
                return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7);
            }
            if (((*(signed char *)((a4 + 0x71BA))) == 10) && (t51 = *(signed char *)((a4 + 0x721F)), t51 == 2)) {
                return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7);
            }
            t52 = *(signed char *)((a5 + 0x0));
            if ((unsigned char)t52 != 0) {
                if ((unsigned char)t52 != 1) {
                    if ((unsigned char)t52 == 2) {
                        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                        }
                        t68 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                        if (t68 != 0) {
                            if (t68 == 1) {
                                u70 = (((struct o24_float *)(a4))->v);
                                u71 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                u72 = (u70 - u71);
                                if (0.0f > (u70 - u71)) {
                                    u72 = (u71 - u70);
                                }
                                if (100.0f > u72) {
                                    t74 = *(int *)((a4 + 0x30));
                                    t75 = pl_angle_to_opponent(a4);
                                    t76 = *(int *)((a5 + 0x10));
                                    t77 = (unsigned short)(t74 - t75);
                                    if (((unsigned short)(t74 - t75) & 0x8000) != 0) {
                                        t77 = ((unsigned short)(t74 - t75) | 0xFFFF0000);
                                    }
                                    if ((int)t77 >= (int)(-t76)) {
                                        if ((int)t77 <= (int)t76) {
                                            t83 = *(int *)((a4 + 0x30));
                                            t84 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                            t85 = (unsigned short)(t83 - t84);
                                            if ((0x8000 & (unsigned short)(t83 - t84)) != 0) {
                                                t85 = ((unsigned short)(t83 - t84) | 0xFFFF0000);
                                            }
                                            if ((int)t85 >= (int)0xFFFFD556) {
                                                if ((int)t85 <= (int)0x2AAA) {
                                                    return ((int (*)(int, int, int, int))(0xC0A2BD0))(t85, t76, a6, a7);
                                                }
                                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t85, t76, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t85, t76, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t77, t76, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t77, t76, a6, a7);
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f, u71, u70, (u70 - u71));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f);
                        }
                        u88 = (((struct o24_float *)(a4))->v);
                        u89 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        u90 = (u88 - u89);
                        if (0.0f > (u88 - u89)) {
                            u90 = (u89 - u88);
                        }
                        if (100.0f > u90) {
                            t92 = *(int *)((a4 + 0x30));
                            t93 = pl_angle_to_opponent(a4);
                            t94 = *(int *)((a5 + 0x10));
                            t95 = (unsigned short)(t92 - t93);
                            if (((unsigned short)(t92 - t93) & 0x8000) != 0) {
                                t95 = ((unsigned short)(t92 - t93) | 0xFFFF0000);
                            }
                            if ((int)t95 >= (int)(-t94)) {
                                if ((int)t95 <= (int)t94) {
                                    t101 = *(int *)((a4 + 0x30));
                                    t102 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                    t103 = (unsigned short)(t101 - t102);
                                    if ((0x8000 & (unsigned short)(t101 - t102)) != 0) {
                                        t103 = ((unsigned short)(t101 - t102) | 0xFFFF0000);
                                    }
                                    if ((int)t103 >= (int)0xFFFFD556) {
                                        if ((int)t103 <= (int)0x2AAA) {
                                            return ((int (*)(int, int, int, int))(0xC0A2BD0))(t103, t94, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t103, t94, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t103, t94, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t95, t94, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t95, t94, a6, a7);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t68, a5, a6, a7, 100.0f, u89, u88, (u88 - u89));
                    }
                    if ((unsigned char)t52 == 3) {
                        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                                t110 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                                if (t110 != 0) {
                                    if (t110 == 1) {
                                        u112 = (((struct o24_float *)(a4))->v);
                                        u113 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                        if (0.0f > (u112 - u113)) {
                                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t110, a5, a6, a7, 100.0f, u112, u113, (u112 - u113));
                                        }
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t110, a5, a6, a7, 100.0f, u112, u113, (u112 - u113));
                                    }
                                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t110, a5, a6, a7, 100.0f);
                                }
                                u115 = (((struct o24_float *)(a4))->v);
                                u116 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                if (0.0f > (u115 - u116)) {
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t110, a5, a6, a7, 100.0f, u115, u116, (u115 - u116));
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t110, a5, a6, a7, 100.0f, u115, u116, (u115 - u116));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                if (50.0f > ((((struct o24_float *)(a4))->v))) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                t125 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t125 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                t129 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t129 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                u135 = (((struct oC_float *)(a5))->v);
                if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u135) > (u135 * 2.0f)) {
                    return ((int (*)(float))(0xC0A2BE2))(u135);
                }
                t137 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
                if (t137 == 0) {
                    return ((int (*)(void))(0xC0A2BE2))();
                }
                return ((int (*)(void))(0xC0A2BDE))();
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            t142 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
            if ((t142 != 0) && (t142 != 1)) {
                if (t142 != 2) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f);
                }
                if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f);
                }
                u146 = (((struct o24_float *)(a4))->v);
                u147 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                u148 = (u146 - u147);
                if (0.0f > (u146 - u147)) {
                    u148 = (u147 - u146);
                }
                if (!(100.0f > u148)) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f, (u146 - u147), u146, u147);
                }
                t151 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
                if (t151 == 0) {
                    return ((int (*)(void))(0xC0A2BE2))();
                }
                return ((int (*)(void))(0xC0A2BDE))();
            }
            u153 = (((struct o24_float *)(a4))->v);
            u154 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u155 = (u153 - u154);
            if (0.0f > (u153 - u154)) {
                u155 = (u154 - u153);
            }
            if (!(100.0f > u155)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t142, a5, a6, a7, 100.0f, (u153 - u154), u153, u154);
            }
            t158 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t158 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        t159 = *(signed char *)((a5 + 0x0));
        if ((unsigned char)t159 != 0) {
            if ((unsigned char)t159 != 1) {
                if ((unsigned char)t159 == 2) {
                    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    t175 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                    if (t175 != 0) {
                        if (t175 == 1) {
                            u177 = (((struct o24_float *)(a4))->v);
                            u178 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            u179 = (u177 - u178);
                            if (0.0f > (u177 - u178)) {
                                u179 = (u178 - u177);
                            }
                            if (100.0f > u179) {
                                t181 = *(int *)((a4 + 0x30));
                                t182 = pl_angle_to_opponent(a4);
                                t183 = *(int *)((a5 + 0x10));
                                t184 = (unsigned short)(t181 - t182);
                                if (((unsigned short)(t181 - t182) & 0x8000) != 0) {
                                    t184 = ((unsigned short)(t181 - t182) | 0xFFFF0000);
                                }
                                if ((int)t184 >= (int)(-t183)) {
                                    if ((int)t184 <= (int)t183) {
                                        t190 = *(int *)((a4 + 0x30));
                                        t191 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                        t192 = (unsigned short)(t190 - t191);
                                        if ((0x8000 & (unsigned short)(t190 - t191)) != 0) {
                                            t192 = ((unsigned short)(t190 - t191) | 0xFFFF0000);
                                        }
                                        if ((int)t192 >= (int)0xFFFFD556) {
                                            if ((int)t192 <= (int)0x2AAA) {
                                                return ((int (*)(int, int, int, int))(0xC0A2BD0))(t192, t183, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t192, t183, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t192, t183, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t184, t183, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t184, t183, a6, a7);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f, u178, u177, (u177 - u178));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f);
                    }
                    u195 = (((struct o24_float *)(a4))->v);
                    u196 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                    u197 = (u195 - u196);
                    if (0.0f > (u195 - u196)) {
                        u197 = (u196 - u195);
                    }
                    if (100.0f > u197) {
                        t199 = *(int *)((a4 + 0x30));
                        t200 = pl_angle_to_opponent(a4);
                        t201 = *(int *)((a5 + 0x10));
                        t202 = (unsigned short)(t199 - t200);
                        if (((unsigned short)(t199 - t200) & 0x8000) != 0) {
                            t202 = ((unsigned short)(t199 - t200) | 0xFFFF0000);
                        }
                        if ((int)t202 >= (int)(-t201)) {
                            if ((int)t202 <= (int)t201) {
                                t208 = *(int *)((a4 + 0x30));
                                t209 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                t210 = (unsigned short)(t208 - t209);
                                if ((0x8000 & (unsigned short)(t208 - t209)) != 0) {
                                    t210 = ((unsigned short)(t208 - t209) | 0xFFFF0000);
                                }
                                if ((int)t210 >= (int)0xFFFFD556) {
                                    if ((int)t210 <= (int)0x2AAA) {
                                        return ((int (*)(int, int, int, int))(0xC0A2BD0))(t210, t201, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t210, t201, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t210, t201, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t202, t201, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t202, t201, a6, a7);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t175, a5, a6, a7, 100.0f, u196, u195, (u195 - u196));
                }
                if ((unsigned char)t159 == 3) {
                    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t217 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                            if (t217 != 0) {
                                if (t217 == 1) {
                                    u219 = (((struct o24_float *)(a4))->v);
                                    u220 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                    if (0.0f > (u219 - u220)) {
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t217, a5, a6, a7, 100.0f, u219, u220, (u219 - u220));
                                    }
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t217, a5, a6, a7, 100.0f, u219, u220, (u219 - u220));
                                }
                                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t217, a5, a6, a7, 100.0f);
                            }
                            u222 = (((struct o24_float *)(a4))->v);
                            u223 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            if (0.0f > (u222 - u223)) {
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t217, a5, a6, a7, 100.0f, u222, u223, (u222 - u223));
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t217, a5, a6, a7, 100.0f, u222, u223, (u222 - u223));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            if (50.0f > ((((struct o24_float *)(a4))->v))) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
            }
            t232 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t232 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            t236 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t236 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            u242 = (((struct oC_float *)(a5))->v);
            if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u242) > (u242 * 2.0f)) {
                return ((int (*)(float))(0xC0A2BE2))(u242);
            }
            t244 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t244 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t31 << 2)), a5, a6, a7, 100.0f);
        }
        t249 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
        if ((t249 != 0) && (t249 != 1)) {
            if (t249 != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f);
            }
            if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f);
            }
            u253 = (((struct o24_float *)(a4))->v);
            u254 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u255 = (u253 - u254);
            if (0.0f > (u253 - u254)) {
                u255 = (u254 - u253);
            }
            if (!(100.0f > u255)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f, (u253 - u254), u253, u254);
            }
            t258 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t258 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        u260 = (((struct o24_float *)(a4))->v);
        u261 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u262 = (u260 - u261);
        if (0.0f > (u260 - u261)) {
            u262 = (u261 - u260);
        }
        if (!(100.0f > u262)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t249, a5, a6, a7, 100.0f, (u260 - u261), u260, u261);
        }
        t265 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t265 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    if (((((struct o720C_short *)(a4))->v)) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if (((((struct o720C_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(a4, a5, a6, a7);
    }
    if ((*(signed char *)(((((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BA))) << 2) + ((int)g_pl_state_flags_tbl)) + 0x2))) == 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))(((int)g_pl_state_flags_tbl), a5, a6, a7);
    }
    t282 = *(signed char *)((a4 + 0x71BA));
    if ((*(signed char *)(((((int)g_pl_state_flags_tbl) + (t282 << 2)) + 0x1))) == 0) {
        return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x71BA))) == 10) {
        if ((*(signed char *)((((*(signed char *)((a4 + 0x721F))) << 1) + 0xC338DE9))) == 0) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x71BA))) == 10) && (t302 = *(signed char *)((a4 + 0x721F)), t302 == 2)) {
            return ((int (*)(int, int, int, int))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7);
        }
        t303 = *(signed char *)((a5 + 0x0));
        if ((unsigned char)t303 != 0) {
            if ((unsigned char)t303 != 1) {
                if ((unsigned char)t303 == 2) {
                    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
                    }
                    t319 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                    if (t319 != 0) {
                        if (t319 == 1) {
                            u321 = (((struct o24_float *)(a4))->v);
                            u322 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            u323 = (u321 - u322);
                            if (0.0f > (u321 - u322)) {
                                u323 = (u322 - u321);
                            }
                            if (100.0f > u323) {
                                t325 = *(int *)((a4 + 0x30));
                                t326 = pl_angle_to_opponent(a4);
                                t327 = *(int *)((a5 + 0x10));
                                t328 = (unsigned short)(t325 - t326);
                                if (((unsigned short)(t325 - t326) & 0x8000) != 0) {
                                    t328 = ((unsigned short)(t325 - t326) | 0xFFFF0000);
                                }
                                if ((int)t328 >= (int)(-t327)) {
                                    if ((int)t328 <= (int)t327) {
                                        t334 = *(int *)((a4 + 0x30));
                                        t335 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                        t336 = (unsigned short)(t334 - t335);
                                        if ((0x8000 & (unsigned short)(t334 - t335)) != 0) {
                                            t336 = ((unsigned short)(t334 - t335) | 0xFFFF0000);
                                        }
                                        if ((int)t336 >= (int)0xFFFFD556) {
                                            if ((int)t336 <= (int)0x2AAA) {
                                                return ((int (*)(int, int, int, int))(0xC0A2BD0))(t336, t327, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t336, t327, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t336, t327, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t328, t327, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t328, t327, a6, a7);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f, u322, u321, (u321 - u322));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f);
                    }
                    u339 = (((struct o24_float *)(a4))->v);
                    u340 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                    u341 = (u339 - u340);
                    if (0.0f > (u339 - u340)) {
                        u341 = (u340 - u339);
                    }
                    if (100.0f > u341) {
                        t343 = *(int *)((a4 + 0x30));
                        t344 = pl_angle_to_opponent(a4);
                        t345 = *(int *)((a5 + 0x10));
                        t346 = (unsigned short)(t343 - t344);
                        if (((unsigned short)(t343 - t344) & 0x8000) != 0) {
                            t346 = ((unsigned short)(t343 - t344) | 0xFFFF0000);
                        }
                        if ((int)t346 >= (int)(-t345)) {
                            if ((int)t346 <= (int)t345) {
                                t352 = *(int *)((a4 + 0x30));
                                t353 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                t354 = (unsigned short)(t352 - t353);
                                if ((0x8000 & (unsigned short)(t352 - t353)) != 0) {
                                    t354 = ((unsigned short)(t352 - t353) | 0xFFFF0000);
                                }
                                if ((int)t354 >= (int)0xFFFFD556) {
                                    if ((int)t354 <= (int)0x2AAA) {
                                        return ((int (*)(int, int, int, int))(0xC0A2BD0))(t354, t345, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t354, t345, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t354, t345, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t346, t345, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t346, t345, a6, a7);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t319, a5, a6, a7, 100.0f, u340, u339, (u339 - u340));
                }
                if ((unsigned char)t303 == 3) {
                    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            t361 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                            if (t361 != 0) {
                                if (t361 == 1) {
                                    u363 = (((struct o24_float *)(a4))->v);
                                    u364 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                    if (0.0f > (u363 - u364)) {
                                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t361, a5, a6, a7, 100.0f, u363, u364, (u363 - u364));
                                    }
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t361, a5, a6, a7, 100.0f, u363, u364, (u363 - u364));
                                }
                                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t361, a5, a6, a7, 100.0f);
                            }
                            u366 = (((struct o24_float *)(a4))->v);
                            u367 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                            if (0.0f > (u366 - u367)) {
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t361, a5, a6, a7, 100.0f, u366, u367, (u366 - u367));
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t361, a5, a6, a7, 100.0f, u366, u367, (u366 - u367));
                        }
                        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            if (50.0f > ((((struct o24_float *)(a4))->v))) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            t376 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t376 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            t380 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t380 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            u386 = (((struct oC_float *)(a5))->v);
            if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u386) > (u386 * 2.0f)) {
                return ((int (*)(float))(0xC0A2BE2))(u386);
            }
            t388 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t388 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 0) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        t393 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
        if ((t393 != 0) && (t393 != 1)) {
            if (t393 != 2) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f);
            }
            if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f);
            }
            u397 = (((struct o24_float *)(a4))->v);
            u398 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
            u399 = (u397 - u398);
            if (0.0f > (u397 - u398)) {
                u399 = (u398 - u397);
            }
            if (!(100.0f > u399)) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f, (u397 - u398), u397, u398);
            }
            t402 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
            if (t402 == 0) {
                return ((int (*)(void))(0xC0A2BE2))();
            }
            return ((int (*)(void))(0xC0A2BDE))();
        }
        u404 = (((struct o24_float *)(a4))->v);
        u405 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u406 = (u404 - u405);
        if (0.0f > (u404 - u405)) {
            u406 = (u405 - u404);
        }
        if (!(100.0f > u406)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t393, a5, a6, a7, 100.0f, (u404 - u405), u404, u405);
        }
        t409 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t409 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    t410 = *(signed char *)((a5 + 0x0));
    if ((unsigned char)t410 != 0) {
        if ((unsigned char)t410 != 1) {
            if ((unsigned char)t410 == 2) {
                if ((*(signed char *)((a4 + 0x71BC))) != 0) {
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                t426 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                if (t426 != 0) {
                    if (t426 == 1) {
                        u428 = (((struct o24_float *)(a4))->v);
                        u429 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        u430 = (u428 - u429);
                        if (0.0f > (u428 - u429)) {
                            u430 = (u429 - u428);
                        }
                        if (100.0f > u430) {
                            t432 = *(int *)((a4 + 0x30));
                            t433 = pl_angle_to_opponent(a4);
                            t434 = *(int *)((a5 + 0x10));
                            t435 = (unsigned short)(t432 - t433);
                            if (((unsigned short)(t432 - t433) & 0x8000) != 0) {
                                t435 = ((unsigned short)(t432 - t433) | 0xFFFF0000);
                            }
                            if ((int)t435 >= (int)(-t434)) {
                                if ((int)t435 <= (int)t434) {
                                    t441 = *(int *)((a4 + 0x30));
                                    t442 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                                    t443 = (unsigned short)(t441 - t442);
                                    if ((0x8000 & (unsigned short)(t441 - t442)) != 0) {
                                        t443 = ((unsigned short)(t441 - t442) | 0xFFFF0000);
                                    }
                                    if ((int)t443 >= (int)0xFFFFD556) {
                                        if ((int)t443 <= (int)0x2AAA) {
                                            return ((int (*)(int, int, int, int))(0xC0A2BD0))(t443, t434, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t443, t434, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t443, t434, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t435, t434, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t435, t434, a6, a7);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f, u429, u428, (u428 - u429));
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f);
                }
                u446 = (((struct o24_float *)(a4))->v);
                u447 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                u448 = (u446 - u447);
                if (0.0f > (u446 - u447)) {
                    u448 = (u447 - u446);
                }
                if (100.0f > u448) {
                    t450 = *(int *)((a4 + 0x30));
                    t451 = pl_angle_to_opponent(a4);
                    t452 = *(int *)((a5 + 0x10));
                    t453 = (unsigned short)(t450 - t451);
                    if (((unsigned short)(t450 - t451) & 0x8000) != 0) {
                        t453 = ((unsigned short)(t450 - t451) | 0xFFFF0000);
                    }
                    if ((int)t453 >= (int)(-t452)) {
                        if ((int)t453 <= (int)t452) {
                            t459 = *(int *)((a4 + 0x30));
                            t460 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x30));
                            t461 = (unsigned short)(t459 - t460);
                            if ((0x8000 & (unsigned short)(t459 - t460)) != 0) {
                                t461 = ((unsigned short)(t459 - t460) | 0xFFFF0000);
                            }
                            if ((int)t461 >= (int)0xFFFFD556) {
                                if ((int)t461 <= (int)0x2AAA) {
                                    return ((int (*)(int, int, int, int))(0xC0A2BD0))(t461, t452, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0A2BE2))(t461, t452, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A2BE2))(t461, t452, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2BE2))(t453, t452, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A2BE2))(t453, t452, a6, a7);
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t426, a5, a6, a7, 100.0f, u447, u446, (u446 - u447));
            }
            if ((unsigned char)t410 == 3) {
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                        t468 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
                        if (t468 != 0) {
                            if (t468 == 1) {
                                u470 = (((struct o24_float *)(a4))->v);
                                u471 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                                if (0.0f > (u470 - u471)) {
                                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t468, a5, a6, a7, 100.0f, u470, u471, (u470 - u471));
                                }
                                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t468, a5, a6, a7, 100.0f, u470, u471, (u470 - u471));
                            }
                            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t468, a5, a6, a7, 100.0f);
                        }
                        u473 = (((struct o24_float *)(a4))->v);
                        u474 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
                        if (0.0f > (u473 - u474)) {
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAE))(t468, a5, a6, a7, 100.0f, u473, u474, (u473 - u474));
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BAC))(t468, a5, a6, a7, 100.0f, u473, u474, (u473 - u474));
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
            }
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        if (50.0f > ((((struct o24_float *)(a4))->v))) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
        }
        t483 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t483 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        t487 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t487 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        u493 = (((struct oC_float *)(a5))->v);
        if (((((*(float *)(((int)stk + 20))) + ((((struct o8_float *)(a5))->v))) - (*(float *)(((int)stk + 8)))) + u493) > (u493 * 2.0f)) {
            return ((int (*)(float))(0xC0A2BE2))(u493);
        }
        t495 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t495 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    if ((*(signed char *)((a4 + 0x71BC))) != 0) {
        return ((int (*)(int, int, int, int, float))(0xC0A2BE2))((((int)g_pl_state_flags_tbl) + (t282 << 2)), a5, a6, a7, 100.0f);
    }
    t500 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71BC));
    if ((t500 != 0) && (t500 != 1)) {
        if (t500 != 2) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f);
        }
        if (((((struct o24_float *)(a4))->v)) > (((((struct o2D4_float *)(a4))->v)) + 50.0f)) {
            return ((int (*)(int, int, int, int, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f);
        }
        u504 = (((struct o24_float *)(a4))->v);
        u505 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
        u506 = (u504 - u505);
        if (0.0f > (u504 - u505)) {
            u506 = (u505 - u504);
        }
        if (!(100.0f > u506)) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f, (u504 - u505), u504, u505);
        }
        t509 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
        if (t509 == 0) {
            return ((int (*)(void))(0xC0A2BE2))();
        }
        return ((int (*)(void))(0xC0A2BDE))();
    }
    u511 = (((struct o24_float *)(a4))->v);
    u512 = (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v);
    u513 = (u511 - u512);
    if (0.0f > (u511 - u512)) {
        u513 = (u512 - u511);
    }
    if (!(100.0f > u513)) {
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0A2BE2))(t500, a5, a6, a7, 100.0f, (u511 - u512), u511, u512);
    }
    t516 = FUN_0c0209c6(a4, ((((struct o4_float *)(a5))->v)));
    if (t516 == 0) {
        return ((int (*)(void))(0xC0A2BE2))();
    }
    return ((int (*)(void))(0xC0A2BDE))();
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
