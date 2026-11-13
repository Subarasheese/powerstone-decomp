/* character 3 (Jack) (0c076a90-0c076d98) */

struct vec3 { int x, y, z; };
struct float_at_00 { float field_00; };
struct float_at_10 { char p[0x10]; float field_10; };
struct float_at_38 { char p[0x38]; float field_38; };
struct float_at_3c { char p[0x3C]; float field_3c; };
struct float_at_04 { char p[0x4]; float field_04; };
struct float_at_40 { char p[0x40]; float field_40; };
struct float_at_48 { char p[0x48]; float field_48; };
struct u8_at_71a8 { char p[0x71A8]; unsigned char field_71a8; };
struct u8_at_71a9 { char p[0x71A9]; unsigned char field_71a9; };
struct short_at_7248 { char p[0x7248]; short field_7248; };
struct uint_at_7248 { char p[0x7248]; unsigned int field_7248; };
struct short_at_ec { char p[0xEC]; short timer; };
struct ushort_at_ec { char p[0xEC]; unsigned short timer; };
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);
int cam_set_shake_ramp(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o3C_float { char p[0x3C]; float v; };
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_step_motion_owner(int);
int pl_change_state(int, int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion_owner(int, int, int);

int pl_jack_victim_phase1(int a4);
int pl_jack_victim_phase2(int a4);

int pl_jack_special2_phase2(int obj)
{
    register int tmp0;
    register int tmp1;

    pl_step_motion(obj);
    *(struct vec3 *)((*(int *)(obj + 0x1C)) + 0x20) = *(struct vec3 *)(obj + 0x20);
    tmp0 = (((struct short_at_ec *)(obj))->timer);
    (((struct ushort_at_ec *)(obj))->timer) = (tmp0 - 1);
    if ((int)(short)((tmp0 - 1) + 0x1) <= 0) {
        (((struct uint_at_7248 *)(obj))->field_7248) = (unsigned short)(((((struct short_at_7248 *)(obj))->field_7248)) + 0x160);
        tmp0 = (((struct short_at_7248 *)(obj))->field_7248);
        tmp1 = *(int *)((obj + 0x30));
        *(unsigned int *)((obj + 0x30)) = (unsigned short)(tmp1 + tmp0);
        *(unsigned int *)(((*(int *)((obj + 0x1C))) + 0x30)) = (unsigned short)((unsigned short)(tmp1 + tmp0) + 0x8000);
    }
    tmp0 = pl_landed(obj);
    if ((signed char)tmp0 != 0) {
        cam_set_shake_ramp(0xA, 0xA);
        *(unsigned int *)((obj + 0x30)) = (unsigned short)(*(int *)((obj + 0x30)));
        pl_start_motion(obj, 0x4, 0x4);
        (((struct u8_at_71a9 *)(obj))->field_71a9) = 0x1;
        (((struct u8_at_71a8 *)(obj))->field_71a8) = 0x1;
        FUN_0c0a3762(((-(*(signed char *)((obj + 0x3)))) + 0x1), 0x3);
        snd_play_char_voice((*(int *)((obj + 0x1C))), 0xC);
        obj_set_owner_hit_record(obj, 0x32);
        obj_force_owner_state27(obj, 0x32);
        (((struct float_at_3c *)(obj))->field_3c) = ((((struct float_at_00 *)0xC076C00)->field_00));
        (((struct float_at_48 *)(obj))->field_48) = ((((struct float_at_04 *)0xC076C00)->field_04));
        (((struct float_at_38 *)(obj))->field_38) = (-((math_cos_angle16(((-(*(int *)((obj + 0x30)))) + 0x14000))) * ((((struct float_at_10 *)0xC076C00)->field_10))));
        (((struct float_at_40 *)(obj))->field_40) = (-((math_sin_angle16(((-(*(int *)((obj + 0x30)))) + 0x14000))) * ((((struct float_at_10 *)0xC076C00)->field_10))));
        tmp0 = *(signed char *)((obj + 0xA));
        *(unsigned char *)((obj + 0xA)) = (tmp0 + 0x1);
        return (tmp0 + 0x1);
    }
    pl_apply_velocity(obj);
    return pl_apply_acceleration(obj);
}

int pl_jack_special2_phase3(int a4)
{
    register int t0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0xFFFFFF92);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_jack_special2_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_jack_special2_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC3370C8 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int pl_jack_victim_phase1(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}

int pl_jack_victim_phase2(int a4)
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
            pl_start_motion_owner(a4, 0x4, 0x3C);
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

int pl_jack_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_jack_victim_phase2(a4);
        }
        return pl_jack_victim_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC076C6C))(a4, a5, a6, a7);
}
