/* velocity/acceleration/gravity, angle to opponent, stick direction (part 3 of 3 of the same module) (0c09db78-0c09f6a8) */

/* named globals (symbols.txt) */
int pl_turn_to_opponent(int a4, int a5);
int FUN_0c09f2e2(int a4, int a5, int a6, int a7);
int FUN_0c09e4ac(int a4, int a5, int a6);
int FUN_0c09de5e(int a4, int a5, int a6, int a7);
extern char g_move_cmd_list_tab[];
extern char g_pl_char_param_tbl[];
struct o0_float { float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o8_float { char p[0x8]; float v; };
int math_atan_angle16(float);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o7264_float { char p[0x7264]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int pl_get_held_item_class(char *);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o274_float { char p[0x274]; float v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
int pl_change_state(int, int, int);
int pl_get_held_item_class(char *player);
int pl_start_motion(char *player, int mode, int val);
struct o1C_float { char p[0x1C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };

int pl_angle_to_opponent(int a4);
int pl_stick_dir_angle(int a4);
int pl_start_state28_item(int a4);
int FUN_0c09eb32(int a4, int a5);

int pl_angle_to_opponent(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((struct o0_float *)0xC7E40E4)->v);
    u1 = (((struct o0_float *)0xC7EB3B4)->v);
    u2 = (((struct o8_float *)0xC7EB3B4)->v);
    u3 = (((struct o8_float *)0xC7E40E4)->v);
    u4 = (u2 - u3);
    u5 = (u1 - u0);
    if ((*(signed char *)((a4 + 0x3))) == 1) {
        u6 = (u2 - u3);
        u6 = -u6;
        u2 = (u1 - u0);
        u2 = -u2;
        u4 = u6;
        u5 = u2;
    }
    u0 = u5;
    if (u5 == 0.0f) {
        u0 = (*(float *)0xC09DC9C);
    }
    t0 = math_atan_angle16(((-u4) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}

int pl_angle_to_target_pos(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o7264_float *)(t0))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o726C_float *)(t0))->v);
    u4 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u4 = (*(float *)0xC09DC9C);
    }
    u0 = (u3 - u2);
    u0 = -u0;
    t0 = math_atan_angle16((u0 / u4));
    t1 = t0;
    if (0.0f > u4) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}

int math_angle_between_points_xz(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u6;
    register float u8;
    int t9;
    register int t11;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o8_float *)(a5))->v);
    u3 = (((struct o8_float *)(a4))->v);
    u6 = (u0 - u1);
    if ((u0 - u1) == 0.0f) {
        u6 = (*(float *)0xC09DC9C);
    }
    u8 = (u2 - u3);
    u8 = -u8;
    t9 = math_atan_angle16((u8 / u6));
    t11 = (0xFFFF & t9);
    if (0.0f > u6) {
        t11 = ((0xFFFF & t9) + 0x8000);
    }
    return (unsigned short)(t11 + 0x4000);
}


int FUN_0c09dcd2(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = pl_angle_to_opponent(a4);
    t1 = *(int *)((a4 + 0x30));
    t2 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t2 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    t1 = t0;
    if (((int)t2 >= (int)(-a5)) && ((int)t2 <= (int)a5)) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        t0 = *(signed char *)((a4 + 0x721F));
        t2 = t0;
        if ((t0 != 2) && (t0 != 3)) {
        } else {
            u0 = (((struct o38_float *)(a4))->v);
            u1 = (((struct o40_float *)(a4))->v);
            u2 = (u1 * u1);
            u2 = u2 + u0 * u0;
            u0 = math_signed_sqrt(u2);
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0);
            t2 = 0x40;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c09dd88(int a4)
{
    register int t0;
    int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = 0x72AE;
    if ((*(signed char *)((a4 + 0x72AE))) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        t1 = *(signed char *)((a4 + 0x721F));
        t0 = t1;
        if ((t1 != 2) && (t1 != 3)) {
        } else {
            u0 = (((struct o38_float *)(a4))->v);
            u1 = (((struct o40_float *)(a4))->v);
            u2 = (u1 * u1);
            u2 = u2 + u0 * u0;
            u0 = math_signed_sqrt(u2);
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0);
            t0 = 0x40;
        }
    }
    return t0;
}

int pl_stick_dir_angle(int a4)
{
    register int t0;
    register int t19;

    t0 = (((struct o2DC_int *)(a4))->v);
    t19 = 0x8000;
    if ((t0 & 0xF0) == 16) {
    } else {
        t19 = 0x6000;
        if ((t0 & 0xF0) == 0x90) {
        } else {
            t19 = 0x4000;
            if ((t0 & 0xF0) == 0x80) {
            } else {
                t19 = 0x2000;
                if ((t0 & 0xF0) == 0xA0) {
                } else {
                    t19 = 0x0;
                    if ((t0 & 0xF0) == 32) {
                    } else {
                        t19 = 0xE000;
                        if ((t0 & 0xF0) == 96) {
                        } else {
                            t19 = 0xA000;
                            if ((t0 & 0xF0) == 64) {
                                t19 = 0xC000;
                            }
                        }
                    }
                }
            }
        }
    }
    return t19;
}


int pl_stick_zone(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
        return 0x4;
    }
    t1 = pl_stick_dir_angle(a4);
    t2 = *(short *)0xC7F31E0;
    t3 = *(int *)((a4 + 0x30));
    t5 = (unsigned short)((unsigned short)(t1 + t2) - t3);
    if ((0x8000 & (unsigned short)((unsigned short)(t1 + t2) - t3)) != 0) {
        t5 = ((unsigned short)((unsigned short)(t1 + t2) - t3) | 0xFFFF0000);
    }
    if (((int)t5 < (int)0x2000) && ((int)t5 > (int)0xFFFFE000)) {
        return 0x0;
    }
    if (((int)t5 < (int)0xFFFFE000) && ((int)t5 > (int)0xFFFFA000)) {
        return 0x1;
    }
    if (((int)t5 > (int)0x2000) && ((int)t5 < (int)0x6000)) {
        return 0x2;
    }
    return 0x3;
}

void pl_set_velocity_from_move_table(char *obj, int angle_in)
{
    char *speed_tbl = (char *)g_pl_char_param_tbl;
    int angle = 0x14000 - angle_in;
    int column;
    char *entry;

    *(float *)(obj + 76) = 0.0f;
    *(float *)(obj + 68) = 0.0f;
    switch ((signed char)pl_get_held_item_class(obj)) {
    case 1:
    case 2:
    case 3:
    case 15:
    case 16:
        column = 12;
        break;
    default:
        if (obj[0x7237] == 3)
            column = 8;
        else
            column = 4;
        break;
    }
    entry = speed_tbl + obj[4] * 152 + (unsigned char)(obj[0x71F1] * 76);
    *(float *)(obj + 56) = math_cos_angle16(angle) * *(float *)(entry + column);
    entry = speed_tbl + obj[4] * 152 + (unsigned char)(obj[0x71F1] * 76);
    *(float *)(obj + 64) = math_sin_angle16(angle) * *(float *)(entry + column);
}

int pl_load_gravity(int a4)
{
    (((struct o71E4_float *)(a4))->v) = (*(float *)((((unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C) + (((int)g_pl_char_param_tbl) + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98))) + 0x0)));
    return 0x71E4;
}

void pl_set_velocity_from_heading(char *player)
{
    char *motion_table;
    float *row;

    motion_table = (char *)g_pl_char_param_tbl;
    if (player[0x71EF] == 4) {
        *(float *)(player + 76) = 0.0f;
        *(float *)(player + 68) = 0.0f;
        *(float *)(player + 64) = 0.0f;
        *(float *)(player + 56) = 0.0f;
        row = (float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76));
        *(float *)(player + 60) = row[4];
        row = (float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76));
        *(float *)(player + 72) = row[6];
    } else {
        *(float *)(player + 76) = 0.0f;
        *(float *)(player + 68) = 0.0f;
        row = (float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76));
        *(float *)(player + 60) = row[4];
        row = (float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76));
        *(float *)(player + 72) = row[6];
        *(float *)(player + 56) = math_cos_angle16(0x14000 - *(int *)(player + 48)) * ((float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76)))[14];
        *(float *)(player + 64) = math_sin_angle16(0x14000 - *(int *)(player + 48)) * ((float *)(motion_table + player[4] * 152 + (unsigned char)(*(signed char *)(player + 0x71F1) * 76)))[14];
    }
}

float pl_launch_jump(int a4)
{
    register float u0;
    register float u1;

    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o28_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + ((int)g_pl_char_param_tbl)) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v));
    (((struct o48_float *)(a4))->v) = ((((struct o18_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + ((int)g_pl_char_param_tbl)) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v));
    u0 = (((struct o2C_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + ((int)g_pl_char_param_tbl)) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v);
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0);
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u1 = (((struct o2C_float *)(((((int)g_pl_char_param_tbl) + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)) + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x71F1))) * (unsigned short)0x4C))))->v);
    (((struct o40_float *)(a4))->v) = (u0 * u1);
    return (u0 * u1);
}

int pl_is_airborne(int a4)
{
    if (!((((((struct o2D4_float *)(a4))->v)) + (*(float *)0xC09E580)) > ((((struct o24_float *)(a4))->v)))) {
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) == 2) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}


int pl_find_move_input_any(int a4, int a5, int a6, int a7)
{
    register int t37;
    register int t5;
    register int t13;
    register int t7;
    register int t15;
    int t18;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    int t16;
    register int t32;
    register int t33;
    int t34;
    int t35;

    t37 = 0x0;
    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 0x600) != 0) {
        t5 = (((struct o2E4_int *)(a4))->v);
        t13 = (t5 & 0x600);
        if ((t5 & 0x600) == 0) {
            t7 = (((struct o71F8_int *)(a4))->v);
            t13 = (t7 & 0x600);
            if ((t7 & 0x600) == 0) {
                t13 = (((((struct o71FC_int *)(a4))->v)) & 0x600);
            }
        }
        t15 = (((struct o2DC_int *)(a4))->v);
        t18 = (t13 | (t15 & 0xF0));
        if ((((t13 | (t15 & 0xF0)) & 0xC0) != 0) && (t16 = *(signed char *)((a4 + 0x71EE)), t16 == 1)) {
            t18 = ((t13 | (t15 & 0xF0)) ^ 0xC0);
        }
        t20 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + ((int)g_move_cmd_list_tab)));
        t21 = t20;
        t22 = t20;
        t23 = 0x0;
        t24 = 0x1;
        for (;;) {
            if ((*(signed char *)((t20 + (((signed char)t23 << 2) << 2)))) == 99) {
                return 0x0;
            }
            if (((*(signed char *)((t22 + 0x0))) == 0) && ((t32 = *(int *)((t22 + 0x8)), t32 != 0) && ((t33 = *(int *)((t21 + 0x4)), t33 == (0x600 & t18)) && (t34 = *(int *)((t21 + 0x8)), t35 = *(int *)((t21 + 0x8)), (((t34 & t18) & t35) & 240) != 0)))) {
                break;
            }
            t21 = (t21 + 0x10);
            t22 = (t22 + 0x10);
            t23 = (t23 + 0x1);
            t24 = (t24 + 0x1);
        }
        if ((t18 & 0x400) != 0) {
            (((struct o721E_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o721E_uchar *)(a4))->v) = 0x1;
        }
        t37 = t24;
    }
    return t37;
}

int pl_button_jump_pressed(int a4)
{
    if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
        return 0x1;
    }
    return 0x0;
}

int pl_landed(int a4)
{
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int pl_no_ground(int a4)
{
    if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
        return 0x1;
    }
    return 0x0;
}

int pl_start_state28_item(int a4)
{
    (((struct o720A_uchar *)(a4))->v) = 0x2;
    pl_change_state(a4, 0x1C, 0x0);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x3;
    return 0x3;
}

int pl_start_item_action(int a4)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x7221));
    if (t0 != 9) {
        t3 = 0x5;
        t4 = 0x4;
        if (t0 != 12) {
            t3 = 0x7;
            t4 = (*(signed char *)((a4 + 0x7221)));
        }
        return pl_change_state(a4, t3, t4);
    }
    return pl_start_state28_item(a4);
}

int FUN_0c09eb32(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t6;
    int t7;

    t0 = (((struct o71F8_int *)(a4))->v);
    t1 = (((struct o2E4_int *)(a4))->v);
    t2 = (((struct o2DC_int *)(a4))->v);
    t4 = *(int *)((((int)g_move_cmd_list_tab) + ((*(signed char *)((a4 + 0x4))) << 2)));
    if (((*(signed char *)((((((signed char)a5 << 2) << 2) + t4) + 0x0))) != 99) && ((t6 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x8)), t6 == 0) && (t7 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x4)), ((t7 & (((t1 | t0) | (t2 & 0xF0)) & 0x6F0)) & 0x600) != 0))) {
        if (((((t1 | t0) | (t2 & 0xF0)) & 0x6F0) & 0x400) != 0) {
            (((struct o721E_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o721E_uchar *)(a4))->v) = 0x1;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09ebd4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x7238));
    t1 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E78));
    if ((*(signed char *)(((t1 + (t0 << 1)) + 0x0))) != 98) {
        t2 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x0))));
        if ((signed char)t2 != 0) {
            t2 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x0))) + 0x1);
        } else {
            t3 = 0x0;
            if ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) != 98) {
                t4 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x1))));
                t5 = 0x0;
                if ((signed char)t4 != 0) {
                    t5 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) + 0x1);
                }
                t3 = t5;
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = 0x0;
        if ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) != 98) {
            t4 = FUN_0c09eb32(a4, (*(signed char *)(((t1 + (t0 << 1)) + 0x1))));
            t5 = 0x0;
            if ((signed char)t4 != 0) {
                t5 = ((*(signed char *)(((t1 + (t0 << 1)) + 0x1))) + 0x1);
            }
            t2 = t5;
        }
        t3 = t2;
    }
    return t3;
}

int pl_start_idle_motion(char *player)
{
    signed char kind;
    int mode;
    int val;

    kind = pl_get_held_item_class(player);
    switch (kind) {
    case 0:
    case 17:
    case 18:
    case 19:
        mode = 0;
        val = 0;
        break;
    case 1:
    case 11:
        mode = 2;
        val = 220;
        break;
    case 2:
    case 3:
        mode = 2;
        val = 238;
        break;
    case 4:
    case 16:
        mode = 2;
        val = 81;
        break;
    case 5:
    case 6:
    case 7:
        mode = 2;
        val = 194;
        break;
    case 8:
        mode = 2;
        val = 248;
        break;
    case 9:
    case 10:
    case 12:
        mode = 2;
        val = 230;
        break;
    case 13:
        mode = 2;
        val = 55;
        break;
    case 14:
        mode = 2;
        val = 26;
        break;
    case 15:
        mode = 2;
        val = 104;
        break;
    default:
        return kind;
    }
    return pl_start_motion(player, mode, val);
}

int pl_start_fall_motion(char *player)
{
    signed char kind;
    int mode;
    int val;

    kind = pl_get_held_item_class(player);
    switch (kind) {
    case 0:
    case 17:
    case 18:
    case 19:
        mode = 0;
        val = 6;
        break;
    case 1:
    case 11:
        mode = 2;
        val = 223;
        break;
    case 2:
    case 3:
        mode = 2;
        val = 241;
        break;
    case 4:
    case 16:
        mode = 2;
        val = 84;
        break;
    case 5:
    case 6:
    case 7:
        mode = 2;
        val = 199;
        break;
    case 8:
        mode = 2;
        val = 251;
        break;
    case 9:
    case 10:
    case 12:
        mode = 2;
        val = 233;
        break;
    case 13:
        mode = 2;
        val = 93;
        break;
    case 14:
        mode = 2;
        val = 66;
        break;
    case 15:
        mode = 2;
        val = 107;
        break;
    default:
        return kind;
    }
    return pl_start_motion(player, mode, val);
}

