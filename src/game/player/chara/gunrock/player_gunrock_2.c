/* character 4 (Gunrock) (0c07746c-0c079386) */

/* named globals (symbols.txt) */
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
extern int FUN_0c0e6fe8();

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

int pl_gunrock_attack_state_update(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t6;
    register int t5;
    register int t10;
    register int t15;
    int t17;
    register int t20;
    register int t25;
    register int t28;
    register int t27;
    register int t38;
    register int t43;
    register int t60;
    register int t59;
    register int t82;
    register int t69;
    register int t78;
    register int t89;
    register int t97;
    register int t96;
    register int t107;
    register int t106;
    register int t114;
    register int t133;
    register int t132;
    register int t139;
    register int t144;
    register int t148;
    register int t150;
    register int t157;
    register int t193;
    register int t199;
    register int t198;
    register int t208;
    register int t203;
    register int t220;
    register int t215;
    register int t227;
    register int t235;
    register int t234;
    register int t245;
    register int t255;
    register int t263;
    register int t276;
    register int t281;
    register int t280;
    register int t285;
    register int t290;
    int t292;
    register int t295;
    register int t300;
    register int t303;
    register int t302;
    register int t313;
    register int t318;
    register int t335;
    register int t334;
    register int t357;
    register int t344;
    register int t353;
    register int t364;
    register int t372;
    register int t371;
    register int t382;
    register int t381;
    register int t392;
    register int t391;
    register int t398;
    register int t417;
    register int t416;
    register int t423;
    register int t428;
    register int t432;
    register int t434;
    register int t441;
    register int t477;
    register int t483;
    register int t482;
    register int t492;
    register int t487;
    register int t504;
    register int t499;
    register int t511;
    register int t519;
    register int t518;
    register int t529;
    register int t539;
    register int t547;
    register int t561;
    register int t566;
    register int t565;
    register int t574;
    register int t579;
    register int t594;
    register int t593;
    register int t612;
    register int t603;
    register int t608;
    register int t619;
    register int t622;
    register int t627;
    register int t626;
    register int t635;
    register int t640;
    register int t655;
    register int t654;
    register int t673;
    register int t664;
    register int t669;
    register int t684;
    register int t683;
    register int t689;
    register int t692;
    register int t696;
    register int t704;
    register int t703;
    register int t708;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                t1 = *(signed char *)((a4 + 0xB));
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        if (t1 != 6) {
                                                            if (t1 != 7) {
                                                                return t1;
                                                            }
                                                            (((struct o7223_uchar *)(a4))->v) = 0x0;
                                                            return pl_end_action_choose_state(a4);
                                                        }
                                                        pl_step_motion(a4);
                                                        pl_apply_motion_translation(a4);
                                                        t6 = 0x71AA;
                                                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                            t5 = *(signed char *)((a4 + 0xB));
                                                            *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
                                                            t6 = (t5 + 0x1);
                                                        }
                                                        return t6;
                                                    }
                                                    pl_step_motion(a4);
                                                    pl_apply_motion_translation(a4);
                                                    t10 = (((struct oF0_short *)(a4))->v);
                                                    (((struct oF0_ushort *)(a4))->v) = (t10 - 1);
                                                    if ((short)(t10 - 1) == 0) {
                                                        cam_set_shake_ramp(0xA, 0xA);
                                                        FUN_0c09c45a(a4);
                                                        (((struct oF0_ushort *)(a4))->v) = 0xC;
                                                    }
                                                    t15 = (((struct oEE_short *)(a4))->v);
                                                    (((struct oEE_ushort *)(a4))->v) = (t15 - 1);
                                                    if ((short)(t15 - 1) == 0) {
                                                        t17 = (((struct oF2_short *)(a4))->v);
                                                        t20 = 0x7F;
                                                        if ((t17 != 4) && ((t17 != 9) && ((t17 != 13) && ((t17 != 18) && (t17 != 23))))) {
                                                            t20 = ((((struct oF2_short *)(a4))->v));
                                                        }
                                                        FUN_0c0bd640(a4, t20);
                                                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                                                        (((struct oEE_ushort *)(a4))->v) = 0x4;
                                                    }
                                                    t25 = (((struct oEC_short *)(a4))->v);
                                                    (((struct oEC_ushort *)(a4))->v) = (t25 - 1);
                                                    t28 = 0xEC;
                                                    if ((short)(t25 - 1) == 0) {
                                                        pl_start_motion(a4, 0x1, 0x67);
                                                        t27 = *(signed char *)((a4 + 0xB));
                                                        *(unsigned char *)((a4 + 0xB)) = (t27 + 0x1);
                                                        t28 = (t27 + 0x1);
                                                    }
                                                    return t28;
                                                }
                                                pl_step_motion(a4);
                                                pl_apply_motion_translation(a4);
                                                if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 1) {
                                                    FUN_0c09c45a(a4);
                                                }
                                                t38 = (((struct oEC_short *)(a4))->v);
                                                (((struct oEC_ushort *)(a4))->v) = (t38 - 1);
                                                if ((short)(t38 - 1) == 0) {
                                                    (((struct oEC_ushort *)(a4))->v) = 0x14;
                                                    fx_spawn_19(a4, 0x1);
                                                }
                                                t43 = *(int *)((a4 + 0x1C));
                                                if ((((*(signed char *)((t43 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((t43 + 0x71A5)))) == 0x2AD) {
                                                    fx_spawn_17(a4, 0x3);
                                                    fx_spawn_hit_effect(((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x2C), ((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x1);
                                                }
                                                t60 = 0x71AA;
                                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                    pl_start_motion(a4, 0x1, 0x66);
                                                    snd_play_char_voice(a4, 0x1A);
                                                    FUN_0c0bd640(a4, 0x7F);
                                                    (((struct oEC_ushort *)(a4))->v) = 0x5A;
                                                    (((struct oEE_ushort *)(a4))->v) = 0xA;
                                                    (((struct oF0_ushort *)(a4))->v) = 0xC;
                                                    (((struct oF2_ushort *)(a4))->v) = 0x0;
                                                    t59 = *(signed char *)((a4 + 0xB));
                                                    *(unsigned char *)((a4 + 0xB)) = (t59 + 0x1);
                                                    t60 = (t59 + 0x1);
                                                }
                                                return t60;
                                            }
                                            pl_step_motion(a4);
                                            pl_apply_velocity(a4);
                                            pl_apply_acceleration(a4);
                                            t82 = 0x3C;
                                            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                                t69 = pl_landed(a4);
                                                t82 = (signed char)t69;
                                                if ((signed char)t69 != 0) {
                                                    cam_set_shake_ramp(0x3C, 0x3C);
                                                    FUN_0c0e6fe8();
                                                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 50.0f);
                                                    fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), ((int)stk + 0), 2.0f, 150.0f);
                                                    fx_spawn_19(a4, 0x0);
                                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                                    (((struct o48_float *)(a4))->v) = 0.0f;
                                                    (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                    pl_start_motion(a4, 0x1, 0x65);
                                                    FUN_0c08de3a(a4, 0x73);
                                                    (((struct oEC_ushort *)(a4))->v) = 0x14;
                                                    t78 = *(signed char *)((a4 + 0xB));
                                                    *(unsigned char *)((a4 + 0xB)) = (t78 + 0x1);
                                                    t82 = (t78 + 0x1);
                                                }
                                            }
                                            return t82;
                                        }
                                        pl_step_motion(a4);
                                        pl_apply_motion_translation(a4);
                                        t89 = (((struct oEC_short *)(a4))->v);
                                        (((struct oEC_ushort *)(a4))->v) = (t89 - 1);
                                        if ((short)(t89 - 1) == 0) {
                                            pl_start_hit_freeze(a4);
                                        }
                                        t97 = 0x71AA;
                                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                            pl_start_motion(a4, 0x1, 0x64);
                                            t96 = *(signed char *)((a4 + 0xB));
                                            *(unsigned char *)((a4 + 0xB)) = (t96 + 0x1);
                                            t97 = (t96 + 0x1);
                                        }
                                        return t97;
                                    }
                                    (((struct o105_uchar *)(a4))->v) = 0x2;
                                    pl_step_motion(a4);
                                    pl_apply_velocity(a4);
                                    pl_apply_acceleration(a4);
                                    t107 = 0x3C;
                                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                        pl_start_motion(a4, 0x1, 0x63);
                                        (((struct oEC_ushort *)(a4))->v) = 0x18;
                                        t106 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t106 + 0x1);
                                        t107 = (t106 + 0x1);
                                    }
                                    return t107;
                                }
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                (((struct o3C_float *)(a4))->v) = 77.3999939f;
                                (((struct o48_float *)(a4))->v) = -4.0f;
                                pl_start_motion(a4, 0x1, 0x64);
                                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                                return snd_play_char_voice(a4, 0x1B);
                            }
                            t114 = *(signed char *)((a4 + 0xB));
                            if (t114 != 0) {
                                switch (t114) {
                                case 1:
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    t263 = (((struct oEC_short *)(a4))->v);
                                    (((struct oEC_ushort *)(a4))->v) = (t263 - 1);
                                    if ((short)(t263 - 1) == 0) {
                                        pl_start_hit_freeze(a4);
                                        fx_spawn_18(a4, 0x0);
                                        snd_play_char_voice(a4, 0x1C);
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    }
                                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                                    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                                    break;
                                case 2:
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
                                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
                                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
                                    t255 = (((struct oEE_short *)(a4))->v);
                                    (((struct oEE_ushort *)(a4))->v) = (t255 - 1);
                                    if ((short)(t255 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    }
                                    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                                    break;
                                case 3:
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00999999978f);
                                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.00999999978f);
                                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.00999999978f);
                                    t245 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t245 - 1);
                                    if ((short)(t245 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                                    }
                                    break;
                                default:
                                    if (t114 != 4) {
                                        if (t114 != 5) {
                                            if (t114 != 6) {
                                                if (t114 != 7) {
                                                    return t114;
                                                }
                                                (((struct o7223_uchar *)(a4))->v) = 0x0;
                                                return pl_end_action_choose_state(a4);
                                            }
                                            pl_step_motion(a4);
                                            pl_apply_motion_translation(a4);
                                            if (!(((((struct o50_float *)(a4))->v)) > (*(float *)((0xC150C64 + (((*(signed char *)((a4 + 0x4))) << 2) << 1)))))) {
                                                pl_reset_scale(a4);
                                            } else {
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
                                                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.099999994f);
                                                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
                                            }
                                            t133 = 0x71AA;
                                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                t132 = *(signed char *)((a4 + 0xB));
                                                *(unsigned char *)((a4 + 0xB)) = (t132 + 0x1);
                                                t133 = (t132 + 0x1);
                                            }
                                            return t133;
                                        }
                                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                                        pl_step_motion(a4);
                                        pl_apply_velocity(a4);
                                        pl_apply_acceleration(a4);
                                        t139 = (((struct oEE_short *)(a4))->v);
                                        (((struct oEE_ushort *)(a4))->v) = (t139 - 1);
                                        if ((short)(t139 - 1) == 0) {
                                            (((struct oEE_ushort *)(a4))->v) = 0xA;
                                            obj_set_record_char(a4, 0x70);
                                        }
                                        t144 = *(signed char *)((a4 + 0xF));
                                        if (t144 != 16) {
                                            if (t144 != 17) {
                                                if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
                                                    *(unsigned char *)((a4 + 0xF)) = 0x10;
                                                }
                                                t148 = pl_no_ground(a4);
                                                if (t148 != 0) {
                                                    return pl_apply_gravity(a4);
                                                }
                                                fx_spawn_17(a4, 0x1);
                                                t150 = (((struct oF2_short *)(a4))->v);
                                                (((struct oF2_ushort *)(a4))->v) = (t150 - 1);
                                                if ((short)(t150 - 1) == 0) {
                                                    (((struct oF2_ushort *)(a4))->v) = 0xA;
                                                    cam_set_shake_ramp(0xA, 0xA);
                                                    fx_spawn_double_ring((*(signed char *)((a4 + 0x3))), (a4 + 0x20));
                                                }
                                                t157 = hit_probe_step_by_velocity(a4, (0x7254 + a4), 60.0f);
                                                if ((signed char)t157 == 2) {
                                                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                                }
                                                if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                                                    (((struct o7248_uint *)(a4))->v) = ((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0));
                                                    *(unsigned int *)((a4 + 0x30)) = ((((struct o7248_int *)(a4))->v));
                                                }
                                                if ((*(signed char *)((a4 + 0x71ED))) != 0) {
                                                    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                                    if ((unsigned char)(((((struct oEC_short *)(a4))->v)) & 0x1F) == 0) {
                                                        *(unsigned char *)((a4 + 0xF)) = 0x10;
                                                    }
                                                }
                                                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 16.0f);
                                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 16.0f);
                                                t193 = FUN_0c0555c4();
                                                if (t193 == 0) {
                                                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                                                }
                                                t199 = 0xEC;
                                                if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
                                                    pl_start_motion(a4, 0x1, 0x61);
                                                    t198 = *(signed char *)((a4 + 0xB));
                                                    *(unsigned char *)((a4 + 0xB)) = (t198 + 0x1);
                                                    t199 = (t198 + 0x1);
                                                }
                                                return t199;
                                            }
                                            t208 = 0x3C;
                                            if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
                                            } else {
                                                t203 = pl_landed(a4);
                                                t208 = (signed char)t203;
                                                if ((signed char)t203 == 0) {
                                                } else {
                                                    cam_set_shake_ramp(0x14, 0x14);
                                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                                    (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                    *(unsigned char *)((a4 + 0xF)) = 0x0;
                                                    t208 = 0x0;
                                                }
                                            }
                                            return t208;
                                        }
                                        (((struct o3C_float *)(a4))->v) = 38.6999969f;
                                        (((struct o48_float *)(a4))->v) = -2.0f;
                                        *(unsigned char *)((a4 + 0xF)) = ((*(signed char *)((a4 + 0xF))) + 0x1);
                                        (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                        t220 = 0x3C;
                                        if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
                                        } else {
                                            t215 = pl_landed(a4);
                                            t220 = (signed char)t215;
                                            if ((signed char)t215 == 0) {
                                            } else {
                                                cam_set_shake_ramp(0x14, 0x14);
                                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                                (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                *(unsigned char *)((a4 + 0xF)) = 0x0;
                                                t220 = 0x0;
                                            }
                                        }
                                        return t220;
                                    }
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    t227 = (((struct oF2_short *)(a4))->v);
                                    (((struct oF2_ushort *)(a4))->v) = (t227 - 1);
                                    t235 = 0xF2;
                                    if ((short)(t227 - 1) == 0) {
                                        obj_set_record_char(a4, 0x70);
                                        snd_play_char_voice(a4, 0x30);
                                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                                        (((struct oEC_ushort *)(a4))->v) = 0x7E;
                                        (((struct oEE_ushort *)(a4))->v) = 0xA;
                                        (((struct oF2_ushort *)(a4))->v) = 0xA;
                                        t234 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t234 + 0x1);
                                        t235 = (t234 + 0x1);
                                    }
                                    return t235;
                                }
                                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                                return 0xF2;
                            }
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            (((struct o3C_float *)(a4))->v) = 0.0f;
                            (((struct o40_float *)(a4))->v) = 0.0f;
                            (((struct o38_float *)(a4))->v) = 0.0f;
                            (((struct o48_float *)(a4))->v) = 0.0f;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            (((struct o44_float *)(a4))->v) = 0.0f;
                            (((struct o71BC_uchar *)(a4))->v) = 0x2;
                            pl_start_motion(a4, 0x1, 0x60);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            (((struct oEC_ushort *)(a4))->v) = 0x30;
                            (((struct oEE_ushort *)(a4))->v) = 0x3A;
                            (((struct oF0_ushort *)(a4))->v) = 0x41;
                            (((struct oF2_ushort *)(a4))->v) = 0x6F;
                            *(unsigned char *)((a4 + 0xF)) = 0x10;
                            return 0x10;
                        }
                        t276 = *(signed char *)((a4 + 0xB));
                        if (t276 != 0) {
                            if (t276 != 1) {
                                if (t276 != 2) {
                                    if (t276 != 3) {
                                        if (t276 != 4) {
                                            if (t276 != 5) {
                                                if (t276 != 6) {
                                                    if (t276 != 7) {
                                                        if (t276 != 8) {
                                                            return t276;
                                                        }
                                                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                                                        return pl_end_action_choose_state(a4);
                                                    }
                                                    pl_step_motion(a4);
                                                    pl_apply_motion_translation(a4);
                                                    t281 = 0x71AA;
                                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                        t280 = *(signed char *)((a4 + 0xB));
                                                        *(unsigned char *)((a4 + 0xB)) = (t280 + 0x1);
                                                        t281 = (t280 + 0x1);
                                                    }
                                                    return t281;
                                                }
                                                pl_step_motion(a4);
                                                pl_apply_motion_translation(a4);
                                                t285 = (((struct oF0_short *)(a4))->v);
                                                (((struct oF0_ushort *)(a4))->v) = (t285 - 1);
                                                if ((short)(t285 - 1) == 0) {
                                                    cam_set_shake_ramp(0xA, 0xA);
                                                    FUN_0c09c45a(a4);
                                                    (((struct oF0_ushort *)(a4))->v) = 0xC;
                                                }
                                                t290 = (((struct oEE_short *)(a4))->v);
                                                (((struct oEE_ushort *)(a4))->v) = (t290 - 1);
                                                if ((short)(t290 - 1) == 0) {
                                                    t292 = (((struct oF2_short *)(a4))->v);
                                                    t295 = 0x7F;
                                                    if ((t292 != 4) && ((t292 != 9) && ((t292 != 13) && ((t292 != 18) && (t292 != 23))))) {
                                                        t295 = ((((struct oF2_short *)(a4))->v));
                                                    }
                                                    FUN_0c0bd640(a4, t295);
                                                    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                                                    (((struct oEE_ushort *)(a4))->v) = 0x4;
                                                }
                                                t300 = (((struct oEC_short *)(a4))->v);
                                                (((struct oEC_ushort *)(a4))->v) = (t300 - 1);
                                                t303 = 0xEC;
                                                if ((short)(t300 - 1) == 0) {
                                                    pl_start_motion(a4, 0x1, 0x67);
                                                    t302 = *(signed char *)((a4 + 0xB));
                                                    *(unsigned char *)((a4 + 0xB)) = (t302 + 0x1);
                                                    t303 = (t302 + 0x1);
                                                }
                                                return t303;
                                            }
                                            pl_step_motion(a4);
                                            pl_apply_motion_translation(a4);
                                            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 1) {
                                                FUN_0c09c45a(a4);
                                            }
                                            t313 = (((struct oEC_short *)(a4))->v);
                                            (((struct oEC_ushort *)(a4))->v) = (t313 - 1);
                                            if ((short)(t313 - 1) == 0) {
                                                (((struct oEC_ushort *)(a4))->v) = 0x14;
                                                fx_spawn_19(a4, 0x1);
                                            }
                                            t318 = *(int *)((a4 + 0x1C));
                                            if ((((*(signed char *)((t318 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((t318 + 0x71A5)))) == 0x2AD) {
                                                fx_spawn_17(a4, 0x3);
                                                fx_spawn_hit_effect(((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x2C), ((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x1);
                                            }
                                            t335 = 0x71AA;
                                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                                pl_start_motion(a4, 0x1, 0x66);
                                                snd_play_char_voice(a4, 0x1A);
                                                FUN_0c0bd640(a4, 0x7F);
                                                (((struct oEC_ushort *)(a4))->v) = 0x5A;
                                                (((struct oEE_ushort *)(a4))->v) = 0xA;
                                                (((struct oF0_ushort *)(a4))->v) = 0xC;
                                                (((struct oF2_ushort *)(a4))->v) = 0x0;
                                                t334 = *(signed char *)((a4 + 0xB));
                                                *(unsigned char *)((a4 + 0xB)) = (t334 + 0x1);
                                                t335 = (t334 + 0x1);
                                            }
                                            return t335;
                                        }
                                        pl_step_motion(a4);
                                        pl_apply_velocity(a4);
                                        pl_apply_acceleration(a4);
                                        t357 = 0x3C;
                                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                            t344 = pl_landed(a4);
                                            t357 = (signed char)t344;
                                            if ((signed char)t344 != 0) {
                                                cam_set_shake_ramp(0x3C, 0x3C);
                                                FUN_0c0e6fe8();
                                                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 50.0f);
                                                fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), ((int)stk + 0), 2.0f, 150.0f);
                                                fx_spawn_19(a4, 0x0);
                                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                                (((struct o48_float *)(a4))->v) = 0.0f;
                                                (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                                pl_start_motion(a4, 0x1, 0x65);
                                                FUN_0c08de3a(a4, 0x73);
                                                (((struct oEC_ushort *)(a4))->v) = 0x14;
                                                t353 = *(signed char *)((a4 + 0xB));
                                                *(unsigned char *)((a4 + 0xB)) = (t353 + 0x1);
                                                t357 = (t353 + 0x1);
                                            }
                                        }
                                        return t357;
                                    }
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    t364 = (((struct oEC_short *)(a4))->v);
                                    (((struct oEC_ushort *)(a4))->v) = (t364 - 1);
                                    if ((short)(t364 - 1) == 0) {
                                        pl_start_hit_freeze(a4);
                                    }
                                    t372 = 0x71AA;
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        pl_start_motion(a4, 0x1, 0x64);
                                        t371 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t371 + 0x1);
                                        t372 = (t371 + 0x1);
                                    }
                                    return t372;
                                }
                                (((struct o105_uchar *)(a4))->v) = 0x2;
                                pl_step_motion(a4);
                                pl_apply_velocity(a4);
                                pl_apply_acceleration(a4);
                                t382 = 0x3C;
                                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                    pl_start_motion(a4, 0x1, 0x63);
                                    (((struct oEC_ushort *)(a4))->v) = 0x18;
                                    t381 = *(signed char *)((a4 + 0xB));
                                    *(unsigned char *)((a4 + 0xB)) = (t381 + 0x1);
                                    t382 = (t381 + 0x1);
                                }
                                return t382;
                            }
                            (((struct o105_uchar *)(a4))->v) = 0x2;
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            t392 = 0x71AA;
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                (((struct o3C_float *)(a4))->v) = 77.3999939f;
                                (((struct o48_float *)(a4))->v) = -4.0f;
                                pl_start_motion(a4, 0x1, 0x64);
                                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                t391 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t391 + 0x1);
                                t392 = (t391 + 0x1);
                            }
                            return t392;
                        }
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o44_float *)(a4))->v) = 0.0f;
                        (((struct o71BC_uchar *)(a4))->v) = 0x0;
                        pl_start_motion(a4, 0x1, 0xFFFFFF90);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        return snd_play_char_voice(a4, 0x1B);
                    }
                    t398 = *(signed char *)((a4 + 0xB));
                    if (t398 != 0) {
                        switch (t398) {
                        case 1:
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            t547 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t547 - 1);
                            if ((short)(t547 - 1) == 0) {
                                pl_start_hit_freeze(a4);
                                fx_spawn_18(a4, 0x0);
                                snd_play_char_voice(a4, 0x1C);
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            }
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                            break;
                        case 2:
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
                            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
                            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
                            t539 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t539 - 1);
                            if ((short)(t539 - 1) == 0) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            }
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                            break;
                        case 3:
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00999999978f);
                            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.00999999978f);
                            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.00999999978f);
                            t529 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t529 - 1);
                            if ((short)(t529 - 1) == 0) {
                                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            }
                            break;
                        default:
                            if (t398 != 4) {
                                if (t398 != 5) {
                                    if (t398 != 6) {
                                        if (t398 != 7) {
                                            return t398;
                                        }
                                        (((struct o7223_uchar *)(a4))->v) = 0x0;
                                        return pl_end_action_choose_state(a4);
                                    }
                                    pl_step_motion(a4);
                                    pl_apply_motion_translation(a4);
                                    if (!(((((struct o50_float *)(a4))->v)) > (*(float *)((0xC150C64 + (((*(signed char *)((a4 + 0x4))) << 2) << 1)))))) {
                                        pl_reset_scale(a4);
                                    } else {
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
                                        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.099999994f);
                                        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
                                    }
                                    t417 = 0x71AA;
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        t416 = *(signed char *)((a4 + 0xB));
                                        *(unsigned char *)((a4 + 0xB)) = (t416 + 0x1);
                                        t417 = (t416 + 0x1);
                                    }
                                    return t417;
                                }
                                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                                pl_step_motion(a4);
                                pl_apply_velocity(a4);
                                pl_apply_acceleration(a4);
                                t423 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t423 - 1);
                                if ((short)(t423 - 1) == 0) {
                                    (((struct oEE_ushort *)(a4))->v) = 0xA;
                                    obj_set_record_char(a4, 0x70);
                                }
                                t428 = *(signed char *)((a4 + 0xF));
                                if (t428 != 16) {
                                    if (t428 != 17) {
                                        if ((((((struct o2E4_int *)(a4))->v)) & 4) != 0) {
                                            *(unsigned char *)((a4 + 0xF)) = 0x10;
                                        }
                                        t432 = pl_no_ground(a4);
                                        if (t432 != 0) {
                                            return pl_apply_gravity(a4);
                                        }
                                        fx_spawn_17(a4, 0x1);
                                        t434 = (((struct oF2_short *)(a4))->v);
                                        (((struct oF2_ushort *)(a4))->v) = (t434 - 1);
                                        if ((short)(t434 - 1) == 0) {
                                            (((struct oF2_ushort *)(a4))->v) = 0xA;
                                            cam_set_shake_ramp(0xA, 0xA);
                                            fx_spawn_double_ring((*(signed char *)((a4 + 0x3))), (a4 + 0x20));
                                        }
                                        t441 = hit_probe_step_by_velocity(a4, (0x7254 + a4), 60.0f);
                                        if ((signed char)t441 == 2) {
                                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                                        }
                                        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                                            (((struct o7248_uint *)(a4))->v) = ((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0));
                                            *(unsigned int *)((a4 + 0x30)) = ((((struct o7248_int *)(a4))->v));
                                        }
                                        if ((*(signed char *)((a4 + 0x71ED))) != 0) {
                                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                                            if ((unsigned char)(((((struct oEC_short *)(a4))->v)) & 0x1F) == 0) {
                                                *(unsigned char *)((a4 + 0xF)) = 0x10;
                                            }
                                        }
                                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 16.0f);
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 16.0f);
                                        t477 = FUN_0c0555c4();
                                        if (t477 == 0) {
                                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        }
                                        t483 = 0xEC;
                                        if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
                                            pl_start_motion(a4, 0x1, 0x61);
                                            t482 = *(signed char *)((a4 + 0xB));
                                            *(unsigned char *)((a4 + 0xB)) = (t482 + 0x1);
                                            t483 = (t482 + 0x1);
                                        }
                                        return t483;
                                    }
                                    t492 = 0x3C;
                                    if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
                                    } else {
                                        t487 = pl_landed(a4);
                                        t492 = (signed char)t487;
                                        if ((signed char)t487 == 0) {
                                        } else {
                                            cam_set_shake_ramp(0x14, 0x14);
                                            (((struct o3C_float *)(a4))->v) = 0.0f;
                                            (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                            *(unsigned char *)((a4 + 0xF)) = 0x0;
                                            t492 = 0x0;
                                        }
                                    }
                                    return t492;
                                }
                                (((struct o3C_float *)(a4))->v) = 38.6999969f;
                                (((struct o48_float *)(a4))->v) = -2.0f;
                                *(unsigned char *)((a4 + 0xF)) = ((*(signed char *)((a4 + 0xF))) + 0x1);
                                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                                t504 = 0x3C;
                                if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
                                } else {
                                    t499 = pl_landed(a4);
                                    t504 = (signed char)t499;
                                    if ((signed char)t499 == 0) {
                                    } else {
                                        cam_set_shake_ramp(0x14, 0x14);
                                        (((struct o3C_float *)(a4))->v) = 0.0f;
                                        (((struct o71BC_uchar *)(a4))->v) = 0x0;
                                        *(unsigned char *)((a4 + 0xF)) = 0x0;
                                        t504 = 0x0;
                                    }
                                }
                                return t504;
                            }
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            t511 = (((struct oF2_short *)(a4))->v);
                            (((struct oF2_ushort *)(a4))->v) = (t511 - 1);
                            t519 = 0xF2;
                            if ((short)(t511 - 1) == 0) {
                                obj_set_record_char(a4, 0x70);
                                snd_play_char_voice(a4, 0x30);
                                (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                                (((struct o3C_float *)(a4))->v) = 0.0f;
                                (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 20.0f);
                                (((struct oEC_ushort *)(a4))->v) = 0x7E;
                                (((struct oEE_ushort *)(a4))->v) = 0xA;
                                (((struct oF2_ushort *)(a4))->v) = 0xA;
                                t518 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t518 + 0x1);
                                t519 = (t518 + 0x1);
                            }
                            return t519;
                        }
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                        return 0xF2;
                    }
                    *(unsigned int *)(((int)stk + 8)) = (0x72BC + a4);
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o38_float *)(a4))->v) = 0.0f;
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o71BC_uchar *)(a4))->v) = 0x0;
                    pl_start_motion(a4, 0x1, 0x60);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0xD)) = 0x1;
                    (((struct oEC_ushort *)(a4))->v) = 0x30;
                    (((struct oEE_ushort *)(a4))->v) = 0x3A;
                    (((struct oF0_ushort *)(a4))->v) = 0x41;
                    (((struct oF2_ushort *)(a4))->v) = 0x6F;
                    *(unsigned char *)((a4 + 0xF)) = 0x0;
                    return 0x0;
                }
                t561 = *(signed char *)((a4 + 0xB));
                if (t561 != 0) {
                    if (t561 != 1) {
                        if (t561 != 2) {
                            if (t561 != 3) {
                                if (t561 != 4) {
                                    return t561;
                                }
                                (((struct o7223_uchar *)(a4))->v) = 0x0;
                                return pl_end_action_choose_state(a4);
                            }
                            pl_step_motion(a4);
                            pl_apply_motion_translation(a4);
                            t566 = 0x71AA;
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                t565 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t565 + 0x1);
                                t566 = (t565 + 0x1);
                            }
                            return t566;
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 1) {
                            FUN_0c09c45a(a4);
                        }
                        t574 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t574 - 1);
                        if ((short)(t574 - 1) == 0) {
                            fx_spawn_19(a4, 0x1);
                        }
                        t579 = *(int *)((a4 + 0x1C));
                        if ((((*(signed char *)((t579 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((t579 + 0x71A5)))) == 0x2AD) {
                            fx_spawn_17(a4, 0x3);
                            fx_spawn_hit_effect(((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x2C), ((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x1);
                        }
                        t594 = 0x71AA;
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            pl_start_motion(a4, 0x1, 0x67);
                            t593 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t593 + 0x1);
                            t594 = (t593 + 0x1);
                        }
                        return t594;
                    }
                    pl_step_motion(a4);
                    pl_apply_velocity(a4);
                    pl_apply_acceleration(a4);
                    t612 = 0x3C;
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t603 = pl_landed(a4);
                        t612 = (signed char)t603;
                        if ((signed char)t603 != 0) {
                            cam_set_shake_ramp(0x3C, 0x3C);
                            fx_spawn_19(a4, 0x0);
                            (((struct o3C_float *)(a4))->v) = 0.0f;
                            (((struct o48_float *)(a4))->v) = 0.0f;
                            (((struct o71BC_uchar *)(a4))->v) = 0x0;
                            pl_start_motion(a4, 0x1, 0x65);
                            FUN_0c08de3a(a4, 0x73);
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                            t608 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t608 + 0x1);
                            t612 = (t608 + 0x1);
                        }
                    }
                    return t612;
                }
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct o3C_float *)(a4))->v) = 77.3999939f;
                (((struct o48_float *)(a4))->v) = -4.0f;
                pl_start_motion(a4, 0x1, 0x64);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t619 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t619 - 480.0f);
                if ((int)(short)(int)((float)t619 - 480.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
                return snd_play_char_voice(a4, 0x19);
            }
            return ((int (*)(int, int, int, int))(0xC079364))(a4, a5, a6, a7);
        }
        t622 = *(signed char *)((a4 + 0xB));
        if (t622 != 0) {
            if (t622 != 1) {
                if (t622 != 2) {
                    if (t622 != 3) {
                        if (t622 != 4) {
                            if (t622 != 5) {
                                return t622;
                            }
                            (((struct o7223_uchar *)(a4))->v) = 0x0;
                            return pl_end_action_choose_state(a4);
                        }
                        pl_step_motion(a4);
                        pl_apply_motion_translation(a4);
                        t627 = 0x71AA;
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            t626 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t626 + 0x1);
                            t627 = (t626 + 0x1);
                        }
                        return t627;
                    }
                    pl_step_motion(a4);
                    pl_apply_motion_translation(a4);
                    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 1) {
                        FUN_0c09c45a(a4);
                    }
                    t635 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t635 - 1);
                    if ((short)(t635 - 1) == 0) {
                        fx_spawn_19(a4, 0x1);
                    }
                    t640 = *(int *)((a4 + 0x1C));
                    if ((((*(signed char *)((t640 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((t640 + 0x71A5)))) == 0x2AD) {
                        fx_spawn_17(a4, 0x3);
                        fx_spawn_hit_effect(((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x2C), ((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x1);
                    }
                    t655 = 0x71AA;
                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                        pl_start_motion(a4, 0x1, 0x67);
                        t654 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t654 + 0x1);
                        t655 = (t654 + 0x1);
                    }
                    return t655;
                }
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                t673 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t664 = pl_landed(a4);
                    t673 = (signed char)t664;
                    if ((signed char)t664 != 0) {
                        cam_set_shake_ramp(0x3C, 0x3C);
                        fx_spawn_19(a4, 0x0);
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o71BC_uchar *)(a4))->v) = 0x0;
                        pl_start_motion(a4, 0x1, 0x65);
                        FUN_0c08de3a(a4, 0x73);
                        (((struct oEC_ushort *)(a4))->v) = 0x14;
                        t669 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t669 + 0x1);
                        t673 = (t669 + 0x1);
                    }
                }
                return t673;
            }
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            t684 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                (((struct o3C_float *)(a4))->v) = 77.3999939f;
                (((struct o48_float *)(a4))->v) = -4.0f;
                pl_start_motion(a4, 0x1, 0x64);
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                snd_play_char_voice(a4, 0x19);
                t683 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t683 + 0x1);
                t684 = (t683 + 0x1);
            }
            return t684;
        }
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        pl_start_motion(a4, 0x1, 0xFFFFFF90);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t689 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t689 - 480.0f);
        if ((int)(short)(int)((float)t689 - 480.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        return 0x71F4;
    }
    t692 = *(signed char *)((a4 + 0xB));
    if (t692 != 0) {
        if (t692 != 1) {
            if (t692 != 2) {
                return t692;
            }
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            return pl_end_action_choose_state(a4);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        t696 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t696 - 1);
        if ((short)(t696 - 1) == 0) {
            fx_spawn_gunrock_spark(a4, 0x0);
            snd_play_char_voice(a4, 0x19);
        }
        t704 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t703 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t703 + 0x1);
            t704 = (t703 + 0x1);
        }
        return t704;
    }
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x69);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t708 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t708 - 240.0f);
    if ((int)(short)(int)((float)t708 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct oEC_ushort *)(a4))->v) = 0xD;
    (((struct oEE_ushort *)(a4))->v) = 0x17;
    return 0xEE;
}
