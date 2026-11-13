/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c06924c-0c069a98) */

struct vec3i { int x, y, z; };
struct at_00_float { float value; };
struct at_10_float { char pad[0x10]; float value; };
struct at_38_float { char pad[0x38]; float value; };
struct at_3c_float { char pad[0x3C]; float value; };
struct at_04_float { char pad[0x4]; float value; };
struct at_40_float { char pad[0x40]; float value; };
struct at_48_float { char pad[0x48]; float value; };
struct at_71a8_uchar { char pad[0x71A8]; unsigned char value; };
struct at_71a9_uchar { char pad[0x71A9]; unsigned char value; };
struct at_7248_short { char pad[0x7248]; short value; };
struct at_7248_uint { char pad[0x7248]; unsigned int value; };
struct at_ec_short { char pad[0xEC]; short value; };
struct at_ec_ushort { char pad[0xEC]; unsigned short value; };
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int cam_set_shake_ramp(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o3C_float { char p[0x3C]; float v; };
int pl_spawn_hit_effect_with_se(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_step_motion_owner(int);
int pl_change_state(int, int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion_owner(int, int, int);
extern void FUN_0c0a3824(char *);
extern void FUN_0c0a3988(char *);
extern void pl_play_side_se_at_frame(char *, int, int);
extern void pl_play_voice_at_frame(char *, int, int);

int pl_falcon_victim_phase1(int a4);
int pl_falcon_victim_phase2(int a4);

int pl_falcon_special2_phase2(int obj)
{
    register int tmp0;
    register int tmp1;

    pl_step_motion(obj);
    *(struct vec3i *)((*(int *)(obj + 0x1C)) + 0x20) = *(struct vec3i *)(obj + 0x20);
    tmp0 = (((struct at_ec_short *)(obj))->value);
    (((struct at_ec_ushort *)(obj))->value) = (tmp0 - 1);
    if ((int)(short)((tmp0 - 1) + 0x1) <= 0) {
        (((struct at_7248_uint *)(obj))->value) = (unsigned short)(((((struct at_7248_short *)(obj))->value)) + 0x160);
        tmp0 = (((struct at_7248_short *)(obj))->value);
        tmp1 = *(int *)((obj + 0x30));
        *(unsigned int *)((obj + 0x30)) = (unsigned short)(tmp1 + tmp0);
        *(unsigned int *)(((*(int *)((obj + 0x1C))) + 0x30)) = (unsigned short)((unsigned short)(tmp1 + tmp0) + 0x8000);
    }
    tmp0 = pl_landed(obj);
    if ((signed char)tmp0 != 0) {
        pl_start_motion(obj, 0x4, 0x3);
        (((struct at_71a9_uchar *)(obj))->value) = 0x1;
        (((struct at_71a8_uchar *)(obj))->value) = 0x1;
        (((struct at_3c_float *)(obj))->value) = ((((struct at_00_float *)0xC0693A8)->value));
        (((struct at_48_float *)(obj))->value) = ((((struct at_04_float *)0xC0693A8)->value));
        (((struct at_38_float *)(obj))->value) = ((math_cos_angle16(((-(*(int *)((obj + 0x30)))) + 0x14000))) * ((((struct at_10_float *)0xC0693A8)->value)));
        (((struct at_40_float *)(obj))->value) = ((math_sin_angle16(((-(*(int *)((obj + 0x30)))) + 0x14000))) * ((((struct at_10_float *)0xC0693A8)->value)));
        *(unsigned int *)((obj + 0x30)) = (unsigned short)((*(int *)((obj + 0x30))) + 0x8000);
        cam_set_shake_ramp(0xA, 0xA);
        obj_set_owner_hit_record(obj, 0x32);
        obj_force_owner_state27(obj, 0x32);
        tmp0 = *(signed char *)((obj + 0xA));
        *(unsigned char *)((obj + 0xA)) = (tmp0 + 0x1);
        return (tmp0 + 0x1);
    }
    pl_apply_velocity(obj);
    return pl_apply_acceleration(obj);
}

int pl_falcon_special2_phase3(int a4)
{
    register int t0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_spawn_hit_effect_with_se(a4);
            pl_start_motion(a4, 0x1, 0x92);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_falcon_special2_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_falcon_special2_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3369D0 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int pl_falcon_victim_phase1(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}

int pl_falcon_victim_phase2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                pl_step_motion_owner(a4);
                pl_apply_motion_translation(a4);
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    return pl_change_state(a4, 0xF, 0x0);
                }
                return 0x71AA;
            }
        } else {
            pl_start_motion_owner(a4, 0x4, 0x40);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o710B_uchar *)(a4))->v) = 0x1;
            (((struct o710C_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        t0 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            pl_start_motion_owner(a4, 0x2, 0x63);
            t1 = *(signed char *)((a4 + 0xC));
            *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    pl_step_motion_owner(a4);
    return (pl_apply_motion_translation(a4));
}

int pl_falcon_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_falcon_victim_phase2(a4);
        }
        return pl_falcon_victim_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC069414))(a4, a5, a6, a7);
}

void pl_falcon_motion_sfx(char *obj)
{
    int move_code;

    if (obj[0x72B0] == 1)
        return;
    FUN_0c0a3824(obj);
    FUN_0c0a3988(obj);
    move_code = (obj[0x71A4] << 8) + (unsigned char)obj[0x71A5];
    switch (move_code) {
    case 20:
    case 21:
    case 22:
    case 23:
        pl_play_side_se_at_frame(obj, 0, 15);
        break;
    case 55:
        pl_play_side_se_at_frame(obj, 12, 15);
        break;
    case 266:
    case 272:
    case 280:
    case 327:
        pl_play_side_se_at_frame(obj, 5, 7);
        break;
    case 268:
    case 276:
        pl_play_side_se_at_frame(obj, 5, 10);
        break;
    case 273:
    case 281:
        pl_play_side_se_at_frame(obj, 9, 8);
        break;
    case 274:
        pl_play_side_se_at_frame(obj, 8, 9);
        break;
    case 275:
        pl_play_side_se_at_frame(obj, 13, 10);
        break;
    case 277:
    case 407:
        pl_play_side_se_at_frame(obj, 10, 9);
        break;
    case 279:
        pl_play_side_se_at_frame(obj, 7, 8);
        break;
    case 282:
        pl_play_side_se_at_frame(obj, 12, 10);
        break;
    case 283:
        pl_play_side_se_at_frame(obj, 11, 9);
        break;
    case 286:
        pl_play_side_se_at_frame(obj, 11, 10);
        break;
    case 310:
        pl_play_side_se_at_frame(obj, 1, 8);
        break;
    case 311:
        pl_play_side_se_at_frame(obj, 15, 15);
        pl_play_side_se_at_frame(obj, 38, 9);
        break;
    case 313:
    case 330:
    case 413:
        pl_play_side_se_at_frame(obj, 5, 9);
        break;
    case 403:
        pl_play_side_se_at_frame(obj, 21, 11);
        break;
    case 404:
    case 416:
        pl_play_side_se_at_frame(obj, 0, 10);
        break;
    case 418:
        pl_play_side_se_at_frame(obj, 0, 11);
        break;
    case 775:
        pl_play_side_se_at_frame(obj, 11, 7);
        pl_play_side_se_at_frame(obj, 37, 7);
        pl_play_side_se_at_frame(obj, 62, 7);
        break;
    case 1024:
        pl_play_side_se_at_frame(obj, 12, 7);
        pl_play_side_se_at_frame(obj, 39, 7);
        pl_play_side_se_at_frame(obj, 66, 10);
        break;
    case 1026:
        pl_play_side_se_at_frame(obj, 32, 11);
        pl_play_side_se_at_frame(obj, 42, 11);
        pl_play_side_se_at_frame(obj, 52, 11);
        break;
    case 1031:
        pl_play_side_se_at_frame(obj, 16, 12);
        break;
    default:
        break;
    }
    move_code = (obj[0x71A4] << 8) + (unsigned char)obj[0x71A5];
    switch (move_code) {
    case 20:
    case 21:
    case 22:
    case 23:
    case 41:
        pl_play_voice_at_frame(obj, 0, 16);
        break;
    case 55:
        pl_play_voice_at_frame(obj, 0, 3);
        break;
    case 266:
    case 272:
    case 280:
        pl_play_voice_at_frame(obj, 10, 3);
        break;
    case 268:
    case 313:
    case 330:
    case 407:
    case 413:
        pl_play_voice_at_frame(obj, 10, 5);
        break;
    case 273:
    case 281:
        pl_play_voice_at_frame(obj, 10, 4);
        break;
    case 274:
        pl_play_voice_at_frame(obj, 8, 5);
        break;
    case 275:
        pl_play_voice_at_frame(obj, 14, 6);
        break;
    case 276:
    case 286:
        pl_play_voice_at_frame(obj, 12, 6);
        break;
    case 277:
        pl_play_voice_at_frame(obj, 11, 5);
        break;
    case 279:
        pl_play_voice_at_frame(obj, 8, 4);
        break;
    case 282:
        pl_play_voice_at_frame(obj, 10, 6);
        break;
    case 283:
        pl_play_voice_at_frame(obj, 12, 5);
        break;
    case 310:
        pl_play_voice_at_frame(obj, 1, 3);
        break;
    case 311:
        pl_play_voice_at_frame(obj, 38, 5);
        break;
    case 327:
        pl_play_voice_at_frame(obj, 5, 3);
        break;
    case 404:
    case 416:
        pl_play_voice_at_frame(obj, 0, 5);
        break;
    case 418:
        pl_play_voice_at_frame(obj, 25, 5);
        break;
    case 768:
        pl_play_voice_at_frame(obj, 0, 0);
        pl_play_voice_at_frame(obj, 10, 52);
        pl_play_voice_at_frame(obj, 64, 52);
        break;
    case 769:
        pl_play_voice_at_frame(obj, 0, 28);
        break;
    case 770:
        pl_play_voice_at_frame(obj, 0, 19);
        break;
    case 771:
        pl_play_voice_at_frame(obj, 0, 20);
        break;
    case 1024:
        pl_play_voice_at_frame(*(char **)(obj + 0x1C), 14, 10);
        pl_play_voice_at_frame(*(char **)(obj + 0x1C), 41, 10);
        pl_play_voice_at_frame(*(char **)(obj + 0x1C), 71, 12);
        break;
    case 1026:
        pl_play_voice_at_frame(obj, 20, 7);
        break;
    case 1027:
        pl_play_voice_at_frame(*(char **)(obj + 0x1C), 0, 12);
        break;
    case 1031:
        pl_play_voice_at_frame(*(char **)(obj + 0x1C), 31, 12);
        pl_play_voice_at_frame(obj, 33, 5);
        break;
    default:
        break;
    }}
