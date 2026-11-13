/* ending sequence: scripted objects, update table, spawners, ending state/script (0c0128a0-0c0158d8) */

/* named globals (symbols.txt) */
int ending_main(int a4, int a5, int a6, int a7);
extern char g_ending_character[];
extern char g_ending_event_script_tab[];
extern char g_ending_script_tab[];
extern char g_game_substate[];
extern char g_res_ending[];
int bgm_play_by_index(int, int, int, int);
int FUN_0c0a3eec(int);
struct Cmd {
    short wait;             /* 0x00 */
    unsigned char op;       /* 0x02 */
    unsigned char arg3;     /* 0x03 */
    float vec[3];             /* 0x04 */
    int ival;                  /* 0x10 */
};
struct o0_float { float v; };
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_destroy(int, int, int, int);
struct o38_float { char p[0x38]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int bgm_set_volume(int, int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int snd_play_side_se(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_pow_float(float, float);
float math_sin_angle16(int);
extern float _builtin_sqrtf(float);
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o10_float { char p[0x10]; float v; };
int ending_exec_command(int);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c06233a(int a4, int a5, int a6);
int FUN_0c06233a(int, int, int);
struct o0_uchar { unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int ui_sprite_queue_add(int, int, int, int, int, int);
int ui_draw_text_stub(void);
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
extern int FUN_0c0a2f5c();
int bgm_stop_streams(void);
int FUN_0c0a3308(int);
int cam_force_mode(int, int, int);
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };

int ending_spawn_obj_t05(int a4);
int ending_spawn_obj_t07(void);
int ending_spawn_obj_typed_b(int a4, int a5, int a6);
int ending_script_update(int a4);
int ending_state_run_script(void);
int ending_show_mail_screen(void);
int obj_apply_accel(int a4);
int obj_apply_velocity(int a4);

void ending_obj_run_script(char *obj, int param_a, int param_b, int param_c)
{
    struct Cmd *cmd;
    char *child;
    int done;

    cmd = (struct Cmd *)(*(char **)(((int)g_ending_script_tab) + obj[4] * 4) + obj[0xD] * 20);
    done = 0;
    do {
        *(short *)(obj + 0xEE) = cmd->wait;
        obj[0xE] = cmd->op;
        obj[0xF] = cmd->arg3;
        child = *(char **)(obj + 0x2E0);
        switch (cmd->op) {
        case 0:
            *(float *)(obj + 0x20) = cmd->vec[0]; *(float *)(obj + 0x24) = cmd->vec[1]; *(float *)(obj + 0x28) = cmd->vec[2];
            break;
        case 1:
            *(float *)(obj + 0x38) = cmd->vec[0]; *(float *)(obj + 0x3C) = cmd->vec[1]; *(float *)(obj + 0x40) = cmd->vec[2];
            break;
        case 2:
            *(float *)(obj + 0x50) = cmd->vec[0]; *(float *)(obj + 0x54) = cmd->vec[1]; *(float *)(obj + 0x58) = cmd->vec[2];
            break;
        case 3:
            *(float *)(obj + 0x44) = cmd->vec[0]; *(float *)(obj + 0x48) = cmd->vec[1]; *(float *)(obj + 0x4C) = cmd->vec[2];
            break;
        case 4:
            *(int *)(obj + 0x2C) = cmd->ival;
            break;
        case 5:
            *(int *)(obj + 0x30) = cmd->ival;
            break;
        case 6:
            *(int *)(obj + 0x34) = cmd->ival;
            break;
        case 16:
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 4) = cmd->vec[0];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 8) = cmd->vec[1];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0xC) = cmd->vec[2];
            break;
        case 17:
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x28) = cmd->vec[0];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x2C) = cmd->vec[1];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x30) = cmd->vec[2];
            break;
        case 18:
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x1C) = cmd->vec[0];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x20) = cmd->vec[1];
            child = *(char **)(obj + 0x2E0);
            *(float *)(child + 0x24) = cmd->vec[2];
            break;
        case 20:
            *(int *)(*(char **)(obj + 0x2E0) + 0x10) = cmd->ival;
            break;
        case 21:
            *(int *)(*(char **)(obj + 0x2E0) + 0x14) = cmd->ival;
            break;
        case 22:
            *(int *)(*(char **)(obj + 0x2E0) + 0x18) = cmd->ival;
            break;
        case 23:
            *(float *)(obj + 0x60) = cmd->vec[0]; *(float *)(obj + 0x64) = cmd->vec[1]; *(float *)(obj + 0x68) = cmd->vec[2];
            break;
        case 24:
            *(float *)(obj + 0x5C) = cmd->vec[0];
            break;
        case 25:
            obj[0xC] = cmd->ival;
            break;
        case 32:
            obj[1] = cmd->ival;
            break;
        case 0xF4:
            bgm_play_by_index(cmd->ival, param_a, param_b, param_c);
            break;
        case 0xF5:
            FUN_0c0a3eec(cmd->ival);
            break;
        case 0xFF:
            obj[9] = obj[9] + 1;
            done = 1;
            break;
        }
        if (done == 0) {
            obj[0xD] = obj[0xD] + 1;
        }
        if (done != 0) {
            break;
        }
        cmd++;
    } while (*(short *)(obj + 0xEE) == 0);
}

int ending_obj_update_t01(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, 0xC7F302C, a6, a7);
        }
    } else {
        (((struct o2_ushort *)0xC7F3042)->v) = 0x1;
        (((struct o20_float *)(a4))->v) = ((((struct o0_float *)0xC012DD0)->v));
        (((struct o24_float *)(a4))->v) = ((((struct o4_float *)0xC012DD0)->v));
        (((struct o28_float *)(a4))->v) = ((((struct o8_float *)0xC012DD0)->v));
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
    if (((((struct o0_short *)0xC7F3042)->v)) != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = (((struct o2_short *)0xC7F3042)->v);
    t1 = t0;
    if (t0 == 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int ending_obj_update_t02(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC012ECC)->v));
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    u0 = (((struct o4_float *)0xC012ECC)->v);
    u1 = *(float *)0xC361C60;
    (((struct o5C_float *)(a4))->v) = (u1 * u0);
    if (!(1.0f > (u1 * u0))) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = 0x5C;
    if ((*(short *)0xC7F3042) != 0) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int ending_obj_update_t03(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_2 = a4;
    v0_0 = R13;
    v0_1 = R12;
    v0_4 = R11;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_1 = (v0_3);
    R12 = (0xC7F302C);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C012E4A;
    if ((v0_1 == 1)) goto L_C012E50;
    return obj_destroy(v0_0, R5, R6, R7);
    L_C012E50:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_1 = (v0_3);
    R11 = (0xFFFFF1C8);
    R13 = (0x0);
    v0_2 = (0x4000);
    R5 = (0x3CA0);
    R6 = (0xFFFFC360);
    R7 = (0xFFFFCE39);
    w0_6 = (-340.0f);
    w0_7 = (-140.0f);
    w0_0 = (0.0f);
    w0_2 = (-66.4439926f);
    w0_3 = (-16.421999f);
    w0_4 = (76.0759964f);
    w0_5 = (-76.0759964f);
    w0_1 = (-1760.0f);
    if ((v0_3 == 1)) goto L_C012EAC;
    if ((v0_1 != 2)) goto L_C012E88;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01300C;
    if ((v0_1 == 1)) goto L_C013070;
    if ((v0_1 != 2)) goto L_C012FE4;
    L_C01325A:;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) != v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C013268;
    L_C013430:;
    return v0_1;
    L_C013268:;
    L_C013418:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013430;
    L_C012FE4:;
    goto L_C013430;
    L_C013070:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + 9.83333302f);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + 4.33333302f);
    w0_2 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_2 + -53.3333321f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) - 424);
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) - 121);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    w0_2 = ((w0_2 + -53.3333321f));
    w0_2 = (-53.3333321f);
    FPUL_ = (0xC2555555);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0130BA;
    goto L_C013430;
    L_C0130BA:;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    L_C0130CA:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013430;
    L_C01300C:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = -295.0f;
    (((struct o24_float *)(v0_0))->v) = -130.0f;
    (((struct o28_float *)(v0_0))->v) = -160.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013070;
    L_C012E88:;
    if ((v0_1 != 3)) goto L_C012E90;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0130E0;
    if ((v0_1 == 1)) goto L_C013132;
    goto L_C013430;
    L_C013132:;
    v0_2 = *(signed char *)((R12 + 0x1));
    v0_1 = (v0_2);
    if ((v0_2 != 3)) goto L_C01313C;
    goto L_C013430;
    L_C01313C:;
    goto L_C013418;
    L_C0130E0:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013132;
    L_C012E90:;
    if ((v0_1 != 4)) goto L_C012E98;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C013186;
    if ((v0_1 == 1)) goto L_C0131E4;
    if ((v0_1 == 2)) goto L_C01320C;
    if ((v0_1 == 3)) goto L_C01322E;
    if ((v0_1 == 4)) goto L_C01323A;
    if ((v0_1 == 5)) goto L_C013242;
    if ((v0_1 == 6)) goto L_C01324E;
    goto L_C01325A;
    L_C01324E:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    L_C013254:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01325A;
    L_C013242:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = 0xFFFFFF4A;
    goto L_C013254;
    L_C01323A:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    goto L_C013254;
    L_C01322E:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = 0xFFFFFDDE;
    goto L_C013254;
    L_C01320C:;
    v0_1 = (((struct o2F0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x610);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C01325A;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    goto L_C013254;
    L_C0131E4:;
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x333);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C01325A;
    *(unsigned int *)((((((struct o2E8_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    goto L_C013254;
    L_C013186:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    *(unsigned char *)((((((struct o2F4_int *)(v0_0))->v)) + 0x0)) = R13;
    (((struct o20_float *)(v0_0))->v) = w0_6;
    (((struct o24_float *)(v0_0))->v) = w0_7;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x14;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0131E4;
    L_C012E98:;
    if ((v0_1 != 5)) goto L_C012EA0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C01328C;
    if ((v0_1 == 1)) goto L_C013340;
    L_C01340E:;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) == v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C013430;
    goto L_C013418;
    L_C013340:;
    obj_apply_velocity(v0_0);
    obj_apply_accel(v0_0);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + ((((struct oEE_short *)(v0_0))->v)));
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + ((((struct oF0_short *)(v0_0))->v)));
    v0_2 = (int)((((struct oEE_short *)(v0_0))->v)) < 0;
    v0_1 = (0xEE);
    if (v0_2) goto L_C01336E;
    *(unsigned short *)((v0_0 + v0_1)) = R13;
    *(unsigned short *)((v0_0 + (v0_1 + 0x2))) = R13;
    L_C01336E:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C013408;
    goto L_C01340E;
    L_C013408:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01340E;
    L_C01328C:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_0;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned int *)((((((struct o2E0_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_5;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = R13;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    *(unsigned int *)((((((struct o2E8_int *)(v0_0))->v)) + 0x14)) = 0x8000;
    (((struct o4_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o4_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = v0_2;
    *(unsigned int *)((((((struct o2F4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o20_float *)(v0_0))->v) = w0_6;
    (((struct o24_float *)(v0_0))->v) = w0_7;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    *(unsigned int *)((v0_0 + 0x34)) = R13;
    (((struct o38_float *)(v0_0))->v) = w0_0;
    (((struct o3C_float *)(v0_0))->v) = 4.0f;
    (((struct o40_float *)(v0_0))->v) = -10.7142849f;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o48_float *)(v0_0))->v) = -0.174999997f;
    (((struct o4C_float *)(v0_0))->v) = w0_0;
    (((struct oEE_ushort *)(v0_0))->v) = 0xFFFFFE0C;
    (((struct oF0_ushort *)(v0_0))->v) = 0x8;
    (((struct oEC_ushort *)(v0_0))->v) = 0x8C;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013340;
    L_C012EA0:;
    if ((v0_1 != 7)) goto L_C012EA8;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0133BC;
    if ((v0_1 == 1)) goto L_C01340E;
    goto L_C013430;
    L_C0133BC:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    goto L_C013408;
    L_C012EA8:;
    goto L_C013430;
    L_C012EAC:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012F00;
    if ((v0_1 == 1)) goto L_C012F58;
    if ((v0_1 != 2)) goto L_C012EBE;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) == v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C012FCE;
    goto L_C013418;
    L_C012FCE:;
    goto L_C013430;
    L_C012EBE:;
    goto L_C013430;
    L_C012F58:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + -9.83333302f);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + -4.33333302f);
    w0_0 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_0 + 53.3333321f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x1A8);
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x79);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    w0_2 = ((w0_0 + 53.3333321f));
    w0_2 = (53.3333321f);
    FPUL_ = (0x42555555);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C012FA2;
    goto L_C013430;
    L_C012FA2:;
    (((struct o20_float *)(v0_0))->v) = -295.0f;
    (((struct o24_float *)(v0_0))->v) = -130.0f;
    (((struct o28_float *)(v0_0))->v) = -160.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    goto L_C0130CA;
    L_C012F00:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1D;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C012F58;
    L_C012E4A:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C012E50;
}

int ending_obj_update_t04(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC0134CC)->v));
        u3 = (((struct o4_float *)0xC0134CC)->v);
        (((struct o50_float *)(a4))->v) = u3;
        (((struct o54_float *)(a4))->v) = u3;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o60_float *)(a4))->v) = 1.0f;
        (((struct o64_float *)(a4))->v) = ((((struct o8_float *)0xC0134CC)->v));
        (((struct o68_float *)(a4))->v) = ((((struct oC_float *)0xC0134CC)->v));
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
    return 0x5C;
}

int ending_obj_update_t05(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_3 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_3 + 0x8));
    v0_1 = (v0_6);
    v0_0 = (v0_3);
    if ((v0_6 == 0)) goto L_C0134E0;
    if ((v0_1 == 1)) goto L_C01351A;
    v0_1 = ((obj_destroy(v0_0, v0_4, v0_2, v0_5)));
    L_C013706:;
    return v0_1;
    L_C01351A:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01352C;
    if ((v0_1 == 1)) goto L_C013538;
    if (!((v0_1 == 2))) goto L_C01357A;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) + 0.0666666627f);
    FPUL_ = (0x3D888888);
    goto L_C01357A;
    L_C01357A:;
    v0_1 = (0xC17E568);
    L_C013582:;
    if (((int)((((struct oEC_short *)(v0_0))->v)) > (int)(unsigned short)(*(short *)((v0_1 + 0x0))))) goto L_C013580;
    mdl_vtx_iter_begin((*(int *)(((*(int *)0xC6649D8) + 0x24))), ((((struct o9C_int *)(((((struct o2E4_int *)(v0_0))->v))))->v)));
    v0_4 = *(short *)((v0_1 + 0x0));
    v0_2 = (0xC062ABE);
    v0_2 = (0xC06297A);
    v0_2 = (0x18);
    v0_5 = ((unsigned short)v0_4);
    v0_3 = (0xC116588);
    v0_6 = (0xC062A7E);
    if ((((((struct oEC_short *)(v0_0))->v)) != (unsigned short)v0_4)) goto L_C01363C;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_3 = (v0_3);
    L_C0135BC:;
    mdl_vtx_iter_next();
    mdl_vtx_get_pos((((int)stk + 0) + 0x10));
    *(float *)(((int)stk + 16)) = (*(float *)((((((*(signed char *)((v0_3 + 0x0))) << 2) << 1) + (v0_1 + 0x4)) + 0x0)));
    *(float *)(((int)stk + 24)) = ((((struct o4_float *)(((((*(signed char *)((v0_3 + 0x0))) << 2) << 1) + (v0_1 + 0x4))))->v));
    mdl_vtx_set_pos((((int)stk + 0) + 0x10));
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    v0_3 = ((v0_3 + 0x1));
    if (((int)(v0_4 + 0x1) < (int)v0_2)) goto L_C0135BC;
    L_C0136DE:;
    if (((*(signed char *)g_game_substate) != 3)) goto L_C0136F8;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    v0_1 = (0xEC);
    if (((int)(short)((v0_2 + 0x1) - 1) < (int)0x1E)) goto L_C013706;
    L_C0136F8:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013706;
    L_C01363C:;
    v0_4 = *(short *)(((v0_1 - 100) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (v0_5 - (unsigned short)v0_4);
    *(unsigned int *)(((int)stk + 12)) = (((((struct oEC_short *)(v0_0))->v)) - (unsigned short)v0_4);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_4 = ((unsigned short)v0_4);
    v0_3 = ((v0_1 - 100));
    L_C013656:;
    mdl_vtx_iter_next();
    mdl_vtx_get_pos((((int)stk + 0) + 0x10));
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_4 = *(int *)(((int)stk + 0));
    w0_0 = *(float *)((((v0_3 + 0x4) + ((v0_6 << 2) << 1)) + 0x0));
    v0_5 = *(int *)(((int)stk + 12));
    *(float *)(((int)stk + 16)) = (w0_0 + (((float)v0_5 * (((*(float *)((((v0_1 + 0x4) + ((v0_6 << 2) << 1)) + 0x0))) - w0_0) / (float)v0_4))));
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_0 = (((struct o4_float *)(((v0_3 + 0x4) + ((v0_6 << 2) << 1))))->v);
    *(float *)(((int)stk + 24)) = (w0_0 + (((float)v0_5 * ((((((struct o4_float *)(((v0_1 + 0x4) + ((v0_6 << 2) << 1))))->v)) - w0_0) / (float)v0_4))));
    mdl_vtx_set_pos((((int)stk + 0) + 0x10));
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    if (((int)(v0_4 + 0x1) < (int)v0_2)) goto L_C013656;
    goto L_C0136DE;
    L_C013580:;
    v0_1 = ((v0_1 + 0x64));
    goto L_C013582;
    L_C013538:;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) + -0.0666666627f);
    FPUL_ = (0xBD888888);
    if (((int)((((struct oEC_short *)(v0_0))->v)) < (int)0xF)) goto L_C01357A;
    (((struct o1C_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = -1.0f;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01357A;
    L_C01352C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013538;
    L_C0134E0:;
    (((struct o20_float *)(v0_0))->v) = 0.0f;
    (((struct o24_float *)(v0_0))->v) = 0.0f;
    (((struct o28_float *)(v0_0))->v) = -1760.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = 0xFFFFCE39;
    *(unsigned int *)((v0_0 + 0x30)) = 0xFFFFF1C8;
    (((struct o40_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = 1.0f;
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = 1.0f;
    snd_play_side_se(0x0, 0x4F);
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01351A;
}

int ending_obj_update_t06(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R12;
    register float F2;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_1);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_1 == 0)) goto L_C01372C;
    if ((v0_2 == 1)) goto L_C013776;
    return obj_destroy(v0_0, R5, a6, R7);
    L_C013776:;
    w0_3 = *(float *)0xC361C60;
    R5 = (0xC361C60);
    w0_2 = (w0_3);
    if ((w0_3 == w0_0)) goto L_C0137AC;
    (((struct o60_float *)(v0_0))->v) = w0_2;
    (((struct o64_float *)(v0_0))->v) = (*(float *)((R5 + 0x0)));
    (((struct o68_float *)(v0_0))->v) = (*(float *)((R5 + 0x0)));
    L_C01381E:;
    if (((*(signed char *)((v0_0 + 0x4))) == 11)) goto L_C013836;
    R5 = (0xC7F3036);
    if ((((((struct o0_short *)0xC7F3040)->v)) != 0)) goto L_C01384E;
    if (((*(short *)((R5 + 0xC))) == 0)) goto L_C013854;
    L_C01384E:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C013854:;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) - 91);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) & 0xFFFF);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_2 = (0xEC);
    return v0_2;
    L_C013836:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    FPUL_ = (v0_1);
    if ((!(((((struct o8_float *)0xC0138A4)->v)) > (float)v0_1))) goto L_C01384E;
    if ((((((struct o2_short *)0xC7F3040)->v)) == 0)) goto L_C013854;
    goto L_C01384E;
    L_C0137AC:;
    (((struct o60_float *)(v0_0))->v) = (((((struct o60_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o64_float *)(v0_0))->v) = (((((struct o64_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o68_float *)(v0_0))->v) = (((((struct o68_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    w0_3 = (0.0f);
    w0_2 = (((((struct o0_float *)0xC0138A4)->v)));
    if ((!(0.0f > ((((struct o38_float *)(v0_0))->v))))) goto L_C013802;
    if ((((((struct o60_float *)(v0_0))->v)) > w0_3)) goto L_C01381E;
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) * w0_2);
    (((struct o68_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    goto L_C01381E;
    L_C013802:;
    if ((w0_0 > ((((struct o60_float *)(v0_0))->v)))) goto L_C01381E;
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) * w0_2);
    (((struct o68_float *)(v0_0))->v) = w0_0;
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o60_float *)(v0_0))->v) = w0_0;
    goto L_C01381E;
    L_C01372C:;
    (((struct o20_float *)(v0_0))->v) = (*(float *)((0xC1165A0 + (((*(signed char *)((v0_0 + 0x4))) << 2) << 1))));
    (((struct o24_float *)(v0_0))->v) = ((((struct o4_float *)((0xC1165A0 + (((*(signed char *)((v0_0 + 0x4))) << 2) << 1))))->v));
    (((struct o28_float *)(v0_0))->v) = -14.3099995f;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct o68_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    (((struct o38_float *)(v0_0))->v) = 0.0249999985f;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C013776;
}

int ending_obj_update_t07(int a4, int a5, int a6, int a7)
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

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.25f;
        (((struct o54_float *)(a4))->v) = 0.25f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(int *)0xC361C74;
    u0 = ((((struct o28_float *)((*(int *)0xC361C74)))->v));
    u0 = u0 + 100.0f * (math_cos_angle16(((*(int *)(((*(int *)0xC361C74) + 0x2C))) + 0x4000)));
    u1 = (((struct o24_float *)(t0))->v);
    t0 = *(int *)0xC361C74;
    u2 = ((math_sin_angle16(((*(int *)(((*(int *)0xC361C74) + 0x2C))) + 0x4000))) * 100.0f);
    u3 = u0;
    u3 = u3 + 76.0759964f * (math_cos_angle16((*(int *)((t0 + 0x2C)))));
    u0 = (((struct o20_float *)((*(int *)0xC361C74)))->v);
    u4 = ((math_sin_angle16((*(int *)(((*(int *)0xC361C74) + 0x2C))))) * 76.0759964f);
    u5 = math_pow_float(((-u0) + -325.0f), 2.0f);
    u6 = math_pow_float((640.0f - u3), 2.0f);
    t0 = math_atan2_angle16((0.0f - ((u1 - u2) - u4)), _builtin_sqrtf((u5 + u6)));
    t1 = math_atan2_angle16(((-u0) + -325.0f), (640.0f - u3));
    u0 = math_cos_angle16(t0);
    u5 = (u0 * 400.0f);
    u6 = ((((struct o20_float *)((*(int *)0xC361C74)))->v));
    u6 = u6 + u5 * (math_sin_angle16(t1));
    (((struct o20_float *)(a4))->v) = (u6 + 325.0f);
    u5 = (u0 * 400.0f);
    u0 = u3;
    u0 = u0 + u5 * (math_cos_angle16(t1));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = ((u1 - u2) - u4);
    u0 = u0 + 400.0f * (math_sin_angle16(t0));
    (((struct o24_float *)(a4))->v) = u0;
    (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.0199999996f);
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.0199999996f);
    (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.0199999996f);
    if (((((struct o60_float *)(a4))->v)) > 1.0f) {
        (((struct o60_float *)(a4))->v) = 1.0f;
        (((struct o64_float *)(a4))->v) = 1.0f;
        (((struct o68_float *)(a4))->v) = 1.0f;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0124999993f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.0124999993f);
    t0 = *(signed char *)g_game_substate;
    t1 = t0;
    if (t0 != 5) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int ending_obj_update_t09(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 == 1) {
            obj_apply_velocity(a4);
            *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + ((((struct oEE_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + ((((struct oF0_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct oF2_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) & 0xFFFF);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
            t4 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
            t5 = 0xC7F3040;
            if (((short)(t4 - 1) != 0) && ((t0 = (((struct o0_short *)0xC7F3040)->v), t0 == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0))) {
            } else {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t5 = (t0 + 0x1);
            }
            return t5;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)t0;
    if ((int)t0 < 0) {
        u0 = ((float)t0 + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -128.0f);
    (((struct o24_float *)(a4))->v) = 168.0f;
    (((struct o28_float *)(a4))->v) = -14.3099995f;
    math_rand_float();
    
    (((struct oEE_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    math_rand_float();
    
    (((struct oF0_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    math_rand_float();
    
    (((struct oF2_ushort *)(a4))->v) = ((FUN_0c0e6f24()) - 256);
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    (((struct o38_float *)(a4))->v) = (*(float *)(((((t0 << 2) << 1) + 0xC116700) + 0x0)));
    (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)((((t0 << 2) << 1) + 0xC116700)))->v));
    (((struct o40_float *)(a4))->v) = 0.0f;
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    if (t0 != 0) {
        u0 = ((((struct o38_float *)(a4))->v));
        u0 *= -1.0f;
        (((struct o38_float *)(a4))->v) = u0;
    }
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    (((struct o50_float *)(a4))->v) = (*(float *)((((t0 << 2) << 1) + ((((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1) + 0xC116600))));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((((((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1) + 0xC116600) + ((t0 << 2) << 1))))->v));
    (((struct o58_float *)(a4))->v) = ((((struct o4_float *)(((0xC116600 + (((((*(signed char *)((a4 + 0x4))) << 2) << 2) << 2) << 1)) + ((t0 << 2) << 1))))->v));
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    obj_apply_velocity(a4);
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + ((((struct oEE_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + ((((struct oF0_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct oF2_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) & 0xFFFF);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC361C60);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xC7F3040;
    if (((short)(t0 - 1) != 0) && ((t2 = (((struct o0_short *)0xC7F3040)->v), t2 == 0) && (t3 = (((struct o2_short *)0xC7F3040)->v), t3 == 0))) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int ending_obj_update_t0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct oC_float *)0xC361C60)->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o10_float *)0xC361C60)->v)));
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)0xC361C60)->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o8_float *)0xC361C60)->v)));
            obj_apply_velocity(a4);
            if (-120.0f > ((((struct o24_float *)(a4))->v))) {
                *(unsigned char *)((a4 + 0x8)) = 0x2;
            }
            (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC361C60)->v));
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = 0xC7F3042;
                if ((*(short *)0xC7F3042) != 0) {
                    *(unsigned char *)((a4 + 0x8)) = 0x2;
                    t0 = 0x2;
                }
                t1 = t0;
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x2;
                t1 = 0x2;
            }
            return t1;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    math_rand_float();
    
    t1 = FUN_0c0e6f24();
    u0 = (float)(t1 << 1);
    if ((int)(t1 << 1) < 0) {
        u0 = ((float)(t1 << 1) + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -240.0f);
    (((struct o24_float *)(a4))->v) = 208.0f;
    (((struct o28_float *)(a4))->v) = ((*(float *)(((0xC116800 + ((t0 << 2) << 1)) + 0x0))) + -24.3599911f);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)((0xC116800 + ((t0 << 2) << 1))))->v));
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (*(float *)(((0xC116780 + ((t0 << 2) << 1)) + 0x0)));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((0xC116780 + ((t0 << 2) << 1))))->v));
    (((struct o58_float *)(a4))->v) = 1.0f;
    math_rand_float();
    
    *(unsigned int *)((a4 + 0x34)) = (((FUN_0c0e6f24()) << 8) << 2);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct oC_float *)0xC361C60)->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o10_float *)0xC361C60)->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)0xC361C60)->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o8_float *)0xC361C60)->v)));
    obj_apply_velocity(a4);
    if (-120.0f > ((((struct o24_float *)(a4))->v))) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC361C60)->v));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t0 = 0xC7F3042;
        if ((*(short *)0xC7F3042) != 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t0 = 0x2;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t1 = 0x2;
    }
    return t1;
}

int ending_obj_update_t0d(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        obj_apply_velocity(a4);
        u0 = *(float *)0xC361C60;
        if (u0 != 1.0f) {
            (((struct o5C_float *)(a4))->v) = u0;
        } else {
            if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
                u0 = (((struct o5C_float *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = (u0 - 0.0249999985f);
                if (0.0f > (u0 - 0.0249999985f)) {
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                }
            }
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x800);
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
        if ((*(float *)0xC014488) > ((((struct o24_float *)(a4))->v))) {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
        }
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        t3 = 0xEC;
        if (((short)(t2 - 1) != 0) && (t0 = *(short *)0xC7F3042, t0 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t3 = 0x2;
        }
        return t3;
    }
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    math_rand_float();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o20_float *)(a4))->v) = (u0 + -35.0f);
    math_rand_float();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o24_float *)(a4))->v) = (u0 + 58.0f);
    (((struct o28_float *)(a4))->v) = -14.3099995f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = -0.75f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (*(float *)(((((t0 << 2) << 1) + 0xC116880) + 0x0)));
    (((struct o54_float *)(a4))->v) = ((((struct o4_float *)((((t0 << 2) << 1) + 0xC116880)))->v));
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x28;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    obj_apply_velocity(a4);
    u0 = *(float *)0xC361C60;
    if (u0 != 1.0f) {
        (((struct o5C_float *)(a4))->v) = u0;
    } else {
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            u0 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u0 - 0.0249999985f);
            if (0.0f > (u0 - 0.0249999985f)) {
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
        }
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x800);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
    if ((*(float *)0xC014488) > ((((struct o24_float *)(a4))->v))) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t2 = 0xEC;
    if (((short)(t0 - 1) != 0) && (t1 = *(short *)0xC7F3042, t1 == 0)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t2 = 0x2;
    }
    return t2;
}

int ending_obj_update_t0a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) != 0) {
        } else {
            t2 = *(signed char *)((a4 + 0x4));
            switch (t2) {
            case 0:
                math_rand_float();
                t2 = FUN_0c0e6f24();
                t3 = 0x8;
                if (t2 != 0) {
                    t3 = 0x7;
                }
                ending_spawn_obj_typed_b(0x9, 0x0, t3);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x3);
                break;
            case 1:
                ending_spawn_obj_typed_b(0x9, 0x1, 0x8);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            case 2:
                ending_spawn_obj_typed_b(0x9, 0x1, 0x5);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            case 3:
                ending_spawn_obj_typed_b(0xC, 0x0, 0x4);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x8);
                break;
            case 4:
                ending_spawn_obj_typed_b(0xD, 0x0, 0x8);
                math_rand_float();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            }
        }
        if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t0 = (((struct o2_short *)0xC7F3040)->v), t0 == 0)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x4));
        switch (t0) {
        case 0:
            math_rand_float();
            t0 = FUN_0c0e6f24();
            t2 = 0x8;
            if (t0 != 0) {
                t2 = 0x7;
            }
            ending_spawn_obj_typed_b(0x9, 0x0, t2);
            math_rand_float();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x3);
            break;
        case 1:
            ending_spawn_obj_typed_b(0x9, 0x1, 0x8);
            math_rand_float();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        case 2:
            ending_spawn_obj_typed_b(0x9, 0x1, 0x5);
            math_rand_float();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        case 3:
            ending_spawn_obj_typed_b(0xC, 0x0, 0x4);
            math_rand_float();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x8);
            break;
        case 4:
            ending_spawn_obj_typed_b(0xD, 0x0, 0x8);
            math_rand_float();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        }
    }
    if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int ending_obj_update_t0b(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        (((struct o8_float *)0xC361C64)->v) = ((((struct o0_float *)0xC361C64)->v));
        (((struct oC_float *)0xC361C64)->v) = ((((struct o4_float *)0xC361C64)->v));
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            t2 = *(signed char *)((a4 + 0x4));
            if (t2 != 0) {
                if (t2 != 1) {
                } else {
                    (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116980) + 0x0)));
                    (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116980 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0x1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                        math_rand_float();
                        t2 = ((FUN_0c0e6f24()) + 0x1E);
                    } else {
                        math_rand_float();
                        t2 = ((FUN_0c0e6f24()) + 0x2);
                    }
                    (((struct oEE_ushort *)(a4))->v) = t2;
                }
            } else {
                (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116900) + 0x0)));
                (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116900 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
            }
        } else {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        }
        if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t0 = (((struct o2_short *)0xC7F3040)->v), t0 == 0)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            (((struct oC_float *)0xC361C64)->v) = 0.0f;
            (((struct o8_float *)0xC361C64)->v) = 0.0f;
            (((struct o4_float *)0xC361C64)->v) = 0.0f;
            (((struct o0_float *)0xC361C64)->v) = 0.0f;
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o8_float *)0xC361C64)->v) = ((((struct o0_float *)0xC361C64)->v));
    (((struct oC_float *)0xC361C64)->v) = ((((struct o4_float *)0xC361C64)->v));
    if (((((struct oEE_short *)(a4))->v)) == 0) {
        t0 = *(signed char *)((a4 + 0x4));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116980) + 0x0)));
                (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116980 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0x1);
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    math_rand_float();
                    t0 = ((FUN_0c0e6f24()) + 0x1E);
                } else {
                    math_rand_float();
                    t0 = ((FUN_0c0e6f24()) + 0x2);
                }
                (((struct oEE_ushort *)(a4))->v) = t0;
            }
        } else {
            (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116900) + 0x0)));
            (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116900 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
        }
    } else {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        (((struct oC_float *)0xC361C64)->v) = 0.0f;
        (((struct o8_float *)0xC361C64)->v) = 0.0f;
        (((struct o4_float *)0xC361C64)->v) = 0.0f;
        (((struct o0_float *)0xC361C64)->v) = 0.0f;
        t0 = (t1 + 0x1);
    }
    return t0;
}

int ending_obj_update_t0e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (127.0f / (float)(*(signed char *)((a4 + 0x4)))));
        if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
            (((struct o38_float *)(a4))->v) = 0.0f;
        }
        (((struct oEC_ushort *)(a4))->v) = (int)((((struct o38_float *)(a4))->v));
        bgm_set_volume(0x0, ((((struct oEC_short *)(a4))->v)), a6, a7);
        t2 = 0xEC;
        if ((((((struct oEE_short *)(a4))->v)) == (unsigned char)(*(signed char *)0xC361C5D)) && (t0 = (((struct oEC_short *)(a4))->v), t0 != 0)) {
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct o38_float *)(a4))->v) = 127.0f;
    (((struct oEE_ushort *)(a4))->v) = (unsigned char)(*(signed char *)0xC361C5D);
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (127.0f / (float)(*(signed char *)((a4 + 0x4)))));
    if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    (((struct oEC_ushort *)(a4))->v) = (int)((((struct o38_float *)(a4))->v));
    bgm_set_volume(0x0, ((((struct oEC_short *)(a4))->v)), a6, a7);
    t0 = 0xEC;
    if ((((((struct oEE_short *)(a4))->v)) == (unsigned char)(*(signed char *)0xC361C5D)) && (t1 = (((struct oEC_short *)(a4))->v), t1 != 0)) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int ending_spawn_obj_typed(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t10;
    register int t11;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x61F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct o68_float *)(t0))->v) = 1.0f;
        (((struct o64_float *)(t0))->v) = 1.0f;
        (((struct o60_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        if ((*(signed char *)(((int)stk + 12))) != 0) {
            t10 = ((int)g_res_ending);
            t11 = (*(signed char *)(((int)stk + 0)));
        } else {
            t10 = 0xC6649D0;
            t11 = (*(signed char *)(((int)stk + 0)));
        }
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), t10, t11);
    }
    return t0;
}

int ending_spawn_obj_t02(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC6649D0, 0x1);
    }
    return t0;
}

int ending_spawn_obj_t03(int a4)
{
    int stk[1];
    register int t0;
    register int t15;
    register int t7;
    register int t8;
    register int t9;
    register int t12;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)0xC361C74 = 0x0;
    t0 = obj_create(0x5, 0x1, 0x6);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t7 = 0xC17E8CA;
        if ((*(signed char *)(((int)stk + 0))) != 5) {
            t7 = 0xC17E8C4;
        }
        t8 = 0x0;
        t9 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t9) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t9) + 0x0))) + 0x2)) = 0xF;
            t12 = *(signed char *)((t7 + 0x0));
            t7 = (t7 + 0x1);
            t14 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t9) + 0x0))), 0xC6649D0, t12);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x4);
            if ((int)t8 >= (int)0x6) {
                break;
            }
        }
        *(unsigned int *)0xC361C74 = t0;
        t15 = t14;
    }
    return t15;
}

int ending_spawn_obj_t05(int a4)
{
    int stk[1];
    register int t0;
    register int t12;
    register int t4;
    register int t5;
    register int t6;
    register int t9;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x2);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x5;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t4 = 0x0;
        t5 = 0xC17E8D0;
        t6 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x2)) = 0x41F;
            t9 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            t11 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t6) + 0x0))), 0xC6649D0, t9);
            t4 = (t4 + 0x1);
            t6 = (t6 + 0x4);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t12 = t11;
    }
    return t12;
}

int ending_spawn_obj_t04(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x61F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC6649D0, 0xB);
    }
    return t0;
}

int ending_spawn_obj_t06(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x6;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x60F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC6649D0, 0x3);
    }
    return t0;
}

int ending_spawn_obj_t07(void)
{
    register int t0;

    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x7;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC6649D0, 0x14);
    }
    return t0;
}

int ending_spawn_obj_t08(void)
{
    register int t0;
    register int t11;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t10;

    t0 = obj_create(0x5, 0x1, 0x3);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x8;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t3 = 0x0;
        t4 = 0xC17E8D2;
        t5 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t5) + 0x0))) + 0x2)) = 0x1F;
            t8 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t10 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t5) + 0x0))), 0xC6649D0, t8);
            t3 = (t3 + 0x1);
            t5 = (t5 + 0x4);
            if ((int)t3 >= (int)0x3) {
                break;
            }
        }
        t11 = t10;
    }
    return t11;
}

int ending_spawn_obj_typed_b(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t10;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    t0 = obj_create(0x5, 0x1, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t10 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_ending), (*(signed char *)(((int)stk + 4)))));
    }
    return t10;
}

int ending_spawn_obj_t0a(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0xA;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int ending_spawn_obj_t0b(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0xB;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int ending_spawn_obj_t0e(int a4)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0xE;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t2 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + (t2 << 2))));
        t4 = (t2 << 2);
    }
    return t4;
}

int ending_script_update(int a4)
{

    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_2 = R13;
    v0_3 = R12;
    v0_0 = *(short *)0xC361C5A;
    v0_4 = *(short *)0xC7F3046;
    v0_2 = (v0_4);
    R12 = (0xC7F302C);
    R13 = (0xC361C5A);
    v0_0 = ((v0_1 + (((unsigned short)v0_0 << 2) << 1)));
    v0_3 = (0x0);
    v0_5 = (0x0);
    if ((v0_4 == 0)) goto L_C0150A0;
    v0_1 = *(short *)((R12 + 0x1C));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0150A0;
    v0_2 = (0xFF);
    L_C015026:;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    v0_1 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == v0_2)) goto L_C015034;
    if (!((v0_1 != 0xFB))) goto L_C015034;
    *(unsigned short *)((R13 + 0x0)) = ((*(short *)((R13 + 0x0))) + 0x1);
    v0_0 = ((v0_0 + 0x8));
    goto L_C015026;
    L_C015034:;
    *(unsigned short *)((R12 + 0x1C)) = v0_5;
    *(unsigned short *)((R12 + 0xA)) = v0_5;
    v0_2 = (v0_5);
    L_C0150A0:;
    v0_4 = (*(short *)(((R12 + 0xA) + 0x0))) == 0;
    v0_1 = ((R12 + 0xA));
    if (!(v0_4)) goto L_C0150AA;
    *(unsigned short *)((v0_1 + 0x0)) = (*(short *)((v0_0 + 0x0)));
    v0_1 = *(signed char *)0xC7F2F08;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_2 = ((unsigned char)v0_4);
    v0_1 = ((unsigned char)v0_1);
    if (((unsigned char)v0_4 == 1)) goto L_C015062;
    if ((v0_2 == 2)) goto L_C01506A;
    if ((v0_2 == 3)) goto L_C015076;
    if ((v0_2 == 4)) goto L_C01507E;
    v0_1 = ending_exec_command(v0_0);
    v0_2 = (v0_1);
    v0_3 = (v0_1);
    goto L_C015094;
    L_C0150AA:;
    return v0_2;
    L_C015094:;
    if ((v0_3 != 0)) goto L_C0150AA;
    *(unsigned short *)((R13 + 0x0)) = ((*(short *)((R13 + 0x0))) + 0x1);
    v0_0 = ((v0_0 + 0x8));
    goto L_C0150A0;
    L_C01507E:;
    v0_2 = (v0_1);
    if ((v0_1 == 1)) goto L_C015094;
    L_C015086:;
    v0_1 = ending_exec_command(v0_0);
    v0_2 = (v0_1);
    v0_3 = (v0_1);
    goto L_C015094;
    L_C015076:;
    if ((v0_1 == 0)) goto L_C015094;
    goto L_C015086;
    L_C01506A:;
    v0_2 = (v0_1);
    if ((v0_1 == 1)) goto L_C015086;
    goto L_C015094;
    L_C015062:;
    if ((v0_1 == 0)) goto L_C015086;
    goto L_C015094;
}

int ending_state_run_script(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302F;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
            return t0;
        }
        return ending_script_update((*(int *)((((*(signed char *)g_ending_character) << 2) + ((int)g_ending_event_script_tab)))));
    }
    (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
    return ending_script_update((*(int *)((((*(signed char *)g_ending_character) << 2) + ((int)g_ending_event_script_tab)))));
}

int ending_show_mail_screen(void)
{
    int stk[16];
    register int t24;

    t24 = *(signed char *)0xC7F302F;
    if (t24 != 0) {
        if (t24 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
        } else {
            if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
                (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
            }
            *(volatile int *)0xC17AFB0;
            ui_draw_text_stub();
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 8.0f;
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            *(float *)(((int)stk + 52)) = 1.0f;
            *(unsigned int *)(((int)stk + 60)) = 0x1005;
            *(float *)(((int)stk + 28)) = 1.25f;
            *(float *)(((int)stk + 24)) = 1.25f;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            t24 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
        }
    } else {
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        (((struct oA_ushort *)0xC7F302C)->v) = 0x258;
        if (((((struct oA_short *)0xC7F302C)->v)) == 0) {
            (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        }
        *(volatile int *)0xC17AFB0;
        ui_draw_text_stub();
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 8.0f;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(unsigned int *)(((int)stk + 60)) = 0x1005;
        *(float *)(((int)stk + 28)) = 1.25f;
        *(float *)(((int)stk + 24)) = 1.25f;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t24 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FE70, 0x0, 0x0, 0x0, 0x0));
    }
    return t24;
}


int obj_apply_accel(int a4)
{
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int obj_apply_velocity(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    return 0x28;
}

int obj_child_color_a_step(int a4)
{
    register int t0;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t0))->v) = (((((struct o4_float *)(t0))->v)) + ((((struct o28_float *)(t0))->v)));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
    return 0xC;
}

int obj_apply_scale_rate(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    return 0x58;
}

int obj_child_color_b_step(int a4)
{
    register int t0;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o28_float *)(t0))->v)));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
    return 0x24;
}
