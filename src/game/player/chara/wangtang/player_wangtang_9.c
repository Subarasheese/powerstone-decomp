/* character 2 (Wang Tang) (0c0712d8-0c07164c) */

int pl_wangtang_attack_kind24_phase2(int a4, int a5, int a6, int a7);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
int fx_spawn_036598(int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_set_velocity_toward_target(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_angle_to_target_pos(int);
int pl_stick_dir_angle(int);
int pl_set_velocity_from_move_table(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int pl_end_action_choose_state(int);

int pl_wangtang_attack_kind24_phase0(int a4);
int pl_wangtang_attack_kind24_phase1(int a4);
int pl_wangtang_attack_kind24_phase2(int a4, int a5, int a6, int a7);
int pl_wangtang_wait_anim_end_f(int a4);

int pl_wangtang_attack_kind24_phase0(int a4)
{
    register int t0;

    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 360.0f);
    if ((int)(short)(int)((float)t0 - 360.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_wangtang_attack_kind24_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_set_velocity_toward_target(a4);
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 2.0f);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 2.0f);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            fx_spawn_036598(a4, 0x0);
            fx_spawn_036598(a4, 0x1);
            fx_spawn_036598(a4, 0x2);
            t0 = 0x3;
        } else {
            fx_spawn_036598(a4, 0x0);
            fx_spawn_036598(a4, 0x1);
            t0 = 0x2;
        }
        fx_spawn_036598(a4, t0);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}


int pl_wangtang_wait_anim_end_f(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_wangtang_attack_kind24(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_wangtang_wait_anim_end_f(a4);
            }
            return pl_wangtang_attack_kind24_phase2(a4, a5, a6, a7);
        }
        return pl_wangtang_attack_kind24_phase1(a4);
    }
    return pl_wangtang_attack_kind24_phase0(a4);
}

int pl_wangtang_state11_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    switch (t0) {
    case 0:
        pl_start_motion(a4, 0x3, 0x2);
        break;
    case 1:
        pl_start_motion(a4, 0x3, 0x3);
        break;
    case 2:
        pl_start_motion(a4, 0x3, 0x5);
        break;
    case 3:
        pl_start_motion(a4, 0x3, 0x6);
        break;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}
