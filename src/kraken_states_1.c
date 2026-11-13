/* Kraken attack update, class handlers and state updates (part 1 of 7 of the same module) (0c084310-0c084d0c) */

/* named globals (symbols.txt) */
extern char g_kraken_move_update_tab[];
int pl_mode01_03_update(char *player);
int pl_mode05_update(char *player);
int pl_mode06_update(char *player);
int pl_mode08_update(char *player);
int pl_mode09_update(char *player);
int pl_mode10_update(char *player);
int pl_mode11_update(char *player);
int pl_mode12_update(char *player);
int pl_mode13_update(char *player);
int pl_mode14_update(char *player);
int pl_mode15_update(char *player);
int pl_kraken_mode04_update(char *player);
int pl_kraken_mode07_update(char *player);
int pl_kraken_mode13_update_v1(char *player);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
float math_cos_angle16(int);
float math_sin_angle16(int);

int pl_kraken_attack_update(char *player)
{
    int sub_state;

    switch (*(unsigned char *)(player + 0x721F)) {
    case 1:
    case 3:
        return pl_mode01_03_update(player);
    case 4:
        return pl_kraken_mode04_update(player);
    case 5:
        return pl_mode05_update(player);
    case 6:
        return pl_mode06_update(player);
    case 7:
        return pl_kraken_mode07_update(player);
    case 8:
        return pl_mode08_update(player);
    case 9:
        return pl_mode09_update(player);
    case 10:
        return pl_mode10_update(player);
    case 11:
        return pl_mode11_update(player);
    case 12:
        return pl_mode12_update(player);
    case 13:
        sub_state = *(signed char *)(player + 0x721E);
        if (sub_state == 0) {
            return pl_mode13_update(player);
        }
        if (sub_state == 1) {
            return pl_kraken_mode13_update_v1(player);
        }
        return sub_state;
    case 14:
        return pl_mode14_update(player);
    case 15:
        return pl_mode15_update(player);
    default:
        return ((int (*)(char *))(*(int *)(((int)g_kraken_move_update_tab) + *(unsigned char *)(player + 0x7238) * 4)))(player);
    }
}

int pl_kraken_move_update_default(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_kraken_mode04_phase0(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -15.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_kraken_mode04_phase1(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    float u2;

    pl_step_motion(a4);
    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71BC))) != 2) && ((u0 = (((struct o24_float *)(a4))->v), u1 = (((struct o24_float *)(t0))->v), u0 > u1) && (u2 = *(float *)0xC494D1C, 200.0f > u2))) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 6.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x37);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x92);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        pl_spawn_hit_effect_with_se(a4);
        *(unsigned char *)((a4 + 0xA)) = 0x4;
        return 0x4;
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_kraken_mode04_phase2(int a4, float f4)
{
    register int t0;
    register float u0;
    register float u1;
    float u2;

    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71BC))) != 2) && ((u0 = (((struct o24_float *)(a4))->v), u1 = (((struct o24_float *)(t0))->v), u0 > u1) && (u2 = *(float *)0xC494D1C, 200.0f > u2))) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 6.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        if ((*(signed char *)((a4 + 0x108))) != 0) {
            t0 = pl_get_hit_count_of_opponent(a4);
            if ((signed char)t0 != 0) {
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.0f);
                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.0f);
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 20.0f;
                (((struct o48_float *)(a4))->v) = -1.5f;
                pl_start_motion(a4, 0x1, 0x38);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o710B_uchar *)(a4))->v) = 0x1;
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t0 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
        }
        *(unsigned char *)((a4 + 0xA)) = 0x4;
        (((struct o101_uchar *)(a4))->v) = 0x0;
        return 0x101;
    }
    return pl_apply_motion_translation(a4);
}

int pl_kraken_mode04_phase3(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x92);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            pl_spawn_hit_effect_with_se(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_kraken_mode04_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}
