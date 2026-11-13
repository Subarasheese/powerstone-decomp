/* character 4 (Gunrock) (0c07746c-0c079386) */

/* named globals (symbols.txt) */
int pl_gunrock_attack_state_update(int a4, int a5, int a6, int a7);
extern char g_pl_gunrock_start_action_tbl[];
extern char g_pl_gunrock_update_action_tbl[];
extern void pl_gunrock_mode01_03_enter(char *obj);
extern void pl_gunrock_mode04_enter(char *obj);
extern void pl_mode05_enter(char *obj);
extern void pl_mode06_enter(char *obj);
extern void pl_mode07_enter(char *obj);
extern void pl_mode08_enter(char *obj);
extern void pl_mode09_enter(char *obj);
extern void pl_mode10_enter(char *obj);
extern void pl_mode11_enter(char *obj);
extern void pl_mode12_enter(char *obj);
extern void pl_mode13_enter(char *obj);
extern void pl_mode14_enter(char *obj);
extern void pl_mode15_enter(char *obj);
int pl_gunrock_start_motion_reset_slots(int, int, int);
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_gunrock_step_scale_script(int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode07_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode12_update(int, int, int, int);
int pl_mode13_update(int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int pl_start_motion(int, int, int);
int thunk_FUN_0c062242(int);
int pl_apply_motion_translation(int);
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c09c45a(int);
int cam_set_shake_ramp(int, int);
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
int pl_turn_to_opponent(int, int);
int pl_set_velocity_forward(int, int, float);
int hit_probe_step_two_lists(int, int, float);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_double_ring(int, int);
int fx_spawn_spark_rings(int, int, float, float);
int fx_spawn_hit_effect(int, int, int, int);
int FUN_0c0555c4(void);
int FUN_0c08de3a(int, int);
int pl_reset_scale(int);
int pl_start_hit_freeze(int);
int hit_probe_step_by_velocity(int, int, float);
int pl_apply_gravity(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_no_ground(int);
int obj_set_record_char(int, int);
int snd_play_char_voice(int, int);
int fx_spawn_gunrock_spark(int, int);
int fx_spawn_17(int, int);
int fx_spawn_18(int, int);
int fx_spawn_19(int, int);
int FUN_0c0bd640(int, int);
extern int _quick_odd_mvn();

void pl_gunrock_state_enter(char *obj)
{
    switch ((unsigned char)obj[0x721F]) {
    case 0:
    case 2:
        *(short *)(obj + 240) = 0;
        (*(void (**)(char *))(((int)g_pl_gunrock_start_action_tbl) + obj[0x7238] * 4))(obj);
        break;
    case 1:
    case 3:
        pl_gunrock_mode01_03_enter(obj);
        break;
    case 4:
        pl_gunrock_mode04_enter(obj);
        break;
    case 5:
        pl_mode05_enter(obj);
        break;
    case 6:
        pl_mode06_enter(obj);
        break;
    case 7:
        pl_mode07_enter(obj);
        break;
    case 8:
        pl_mode08_enter(obj);
        break;
    case 9:
        pl_mode09_enter(obj);
        break;
    case 10:
        pl_mode10_enter(obj);
        break;
    case 11:
        pl_mode11_enter(obj);
        break;
    case 12:
        pl_mode12_enter(obj);
        break;
    case 13:
        pl_mode13_enter(obj);
        break;
    case 14:
        pl_mode14_enter(obj);
        break;
    case 15:
        pl_mode15_enter(obj);
        break;
    }
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
}

int pl_gunrock_start_motion_16(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x10);
}

int pl_gunrock_start_motion_24(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x18);
}

float pl_gunrock_start_motion_19(int a4)
{
    register float t11;
    register float u12;

    pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x13);
    (((struct oEC_ushort *)(a4))->v) = 0x5;
    (((struct oEE_ushort *)(a4))->v) = 0xD;
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC077674)->v)));
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC077674)->v)));
    (((struct o44_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o8_float *)0xC077674)->v))));
    (((struct o48_float *)(a4))->v) = 0.0f;
    t11 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u12 = (((struct o8_float *)0xC077674)->v);
    (((struct o4C_float *)(a4))->v) = (-(t11 * u12));
    return (-(t11 * u12));
}

int pl_gunrock_start_motion_25(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x19);
}

int pl_gunrock_start_motion_20(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x14);
}

int pl_gunrock_start_motion_1(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x1);
}

int pl_gunrock_start_motion_26(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x1A);
}

int pl_gunrock_start_motion_17(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x11);
}

int pl_gunrock_start_motion_15(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0xF);
}

int pl_gunrock_start_motion_28(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x1C);
}

int pl_gunrock_start_motion_18(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0x12);
}

int pl_gunrock_start_motion_14(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0xE);
}

int pl_gunrock_state_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t3 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + ((int)g_pl_gunrock_update_action_tbl)));
                return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                return ((int (*)(int, int, int, int))(0xC07823C))(a4, a5, a6, a7);
            }
            case 8:
            {
                return ((int (*)(int, int, int, int))(0xC077A48))(a4, a5, a6, a7);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_mode07_update(a4);
            }
            case 16:
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC077DD4))(a4, a5, a6, a7);
            }
            case 20:
            {
                return pl_mode10_update(a4, a5, a6, a7);
            }
            case 22:
            {
                return ((int (*)(int, int, int, int))(0xC077EBA))(a4, a5, a6, a7);
            }
            case 24:
            {
                return pl_mode12_update(a4, a5, a6, a7);
            }
            case 26:
            {
                return pl_mode13_update(a4);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return t0;
}

int pl_gunrock_update_action_default(int a4)
{
    pl_gunrock_step_scale_script(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_gunrock_update_action_2(int a4)
{
    register int t3;

    pl_gunrock_step_scale_script(a4);
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    } else {
        t3 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
        if ((int)(short)(t3 - 1) >= 0) {
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
        }
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_gunrock_mode04_phase1(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (200.0f > (*(float *)0xC494D1C)) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                t0 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_gunrock_mode04_phase2(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            cam_set_shake_ramp(0x1E, 0x1E);
            pl_start_motion(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c45a(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_gunrock_mode04_phase3(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)0xC077A94));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (*(float *)0xC077A94));
        pl_start_motion(a4, 0x1, 0x38);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_gunrock_mode04_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_gunrock_mode08_09_update_v0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        *(volatile float *)0xC494D1C;
        
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -20.0f;
        (((struct o48_float *)(a4))->v) = -2.0f;
        pl_start_motion(a4, 0x1, 0xFFFFFFA3);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oEE_ushort *)(a4))->v) = 0x4;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_gunrock_mode08_09_update_v1(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u0 * 1.29999995f);
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u0 * 1.29999995f);
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u0 * 1.29999995f);
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u0 * 1.29999995f);
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u0 * 1.29999995f);
        t0 = *(signed char *)((a4 + 0x71F1));
        u0 = (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u0 * 1.29999995f);
    }
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFFA4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        cam_set_shake_ramp(0x14, 0x14);
        FUN_0c09c45a(a4);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_gunrock_mode11_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFF9D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x1555);
        pl_set_velocity_forward(a4, 0x2C, (*(float *)0xC077F28));
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_gunrock_mode11_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int pl_gunrock_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_gunrock_mode01_03_enter_v0(int a4)
{
    return pl_gunrock_start_motion_reset_slots(a4, 0x1, 0xA);
}

int pl_gunrock_mode01_03_update_v0(int a4)
{
    register int t0;

    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_gunrock_step_scale_script(a4);
    if (t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return t0;
}

int pl_gunrock_mode01_03_enter_v1(int a4)
{
    pl_gunrock_start_motion_reset_slots(a4, 0x1, 0xC);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int pl_gunrock_mode01_03_update_v1(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = pl_gunrock_step_scale_script(a4);
                if (t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                return t1;
            }
            if (t0 == 3) {
                pl_gunrock_step_scale_script(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = pl_landed(a4);
                    if ((signed char)t1 != 0) {
                        return pl_change_state(a4, 0x6, 0x0);
                    }
                }
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return t0;
        }
        pl_gunrock_step_scale_script(a4);
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t1 = hit_probe_step_two_lists(a4, (0x7254 + a4), 0.0f);
            if ((signed char)t1 != 0) {
                pl_start_motion(a4, 0x2, 0xFFFFFFCD);
                (((struct oEC_ushort *)(a4))->v) = 0x3;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                pl_start_motion(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o3C_float *)(a4))->v) = 14.0f;
                (((struct o48_float *)(a4))->v) = -2.5f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = pl_landed(a4);
            if ((signed char)t1 == 0) {
                pl_apply_velocity(a4);
                return pl_apply_acceleration(a4);
            }
            return pl_change_state(a4, 0x6, 0x0);
        }
        if ((signed char)t0 == 2) {
            pl_start_motion(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o3C_float *)(a4))->v) = 14.0f;
            (((struct o48_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_gunrock_step_scale_script(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -20.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 20.0f * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 20.0f * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

