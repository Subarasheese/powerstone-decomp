/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3620_uchar { char p[0x3620]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5CA0_uchar { char p[0x5CA0]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c06233a(int, int, int);
int FUN_0c097eb6(int);
int FUN_0c0bf488(int, int);
int FUN_0c0c571c(int, int);
int math_vec3_accumulate(int, int);
extern float _builtin_sqrtf(float);
int cam_request_mode_03(int, int);
int cam_set_shake_ramp(int, int);
int fx_spawn_03d254(int, int);
int fx_spawn_03dfd0(int, int);
int fx_spawn_03e354(int, int);
int fx_spawn_03ef18(int, int);
int fx_spawn_hit_effect(int, int, int, int);
int fx_spawn_item_sparkle(int);
int hit_probe_step_by_velocity(int, int, float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int math_mat_transform_point(int, int);
float math_pow_float(float, float);
int math_rand_next(void);
float math_sin_angle16(int);
int obj_create_beside(int, int, int, int, int);
int obj_destroy(int);
int obj_place_linked_ahead(int, int, float);
int obj_set_mode_owner(int, int, int);
int pl_angle_to_opponent(int);
int pl_angle_to_target_pos(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_landed(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int snd_play_char_voice(int, int);
int thunk_math_mat_get_translate(int, int);
int FUN_0c086070(int a4);
int FUN_0c05e244(int a4);
int FUN_0c05dd38(int a4);
int FUN_0c085e8a(int a4);
void FUN_0c0aff3c(int a4);
int FUN_0c07cf8e(int a4);
int FUN_0c07d0c0(int a4);
int FUN_0c041c3a(int a4);
int FUN_0c07cdf8(int a4);
int FUN_0c041d14(int a4);
int FUN_0c085df8(int a4);
int FUN_0c041b3a(int a4);
int FUN_0c041bc0(int a4);
int FUN_0c0862b4(int a4);
int FUN_0c088fb2(int a4);
int FUN_0c085fd2(int a4);
int FUN_0c07ceb2(int a4);
int FUN_0c05ba04(int a4);
int FUN_0c086284(int a4);
int FUN_0c097eb0(int a4);

int FUN_0c086070(int a4)
{
    int stk[6];
    register int t0;
    register int t2;
    register float t12;
    register float t14;
    register float t16;
    register float t17;
    register float u21;
    register float u25;
    register int t27;
    register int t30;
    register int t36;
    register int t37;
    register int t39;
    register int t44;
    register int t47;
    register int t49;
    register int t83;

    t0 = *(int *)(((0x72BC + a4) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (0x308 + t0);
    pl_step_motion(a4);
    t2 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (int)stk + 8);
    *(float *)(((int)stk + 12)) = (((((struct o20_float *)(t0))->v)) - (*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 16)) = (((((struct o24_float *)(t0))->v)) - (*(float *)(((int)stk + 16))));
    *(float *)(((int)stk + 20)) = (((((struct o28_float *)(t0))->v)) - (*(float *)(((int)stk + 20))));
    t12 = math_pow_float((*(float *)(((int)stk + 12))), 2.0f);
    t14 = math_pow_float((*(float *)(((int)stk + 20))), 2.0f);
    t16 = math_pow_float((*(float *)(((int)stk + 16))), 2.0f);
    t17 = math_pow_float(_builtin_sqrtf((t12 + t14)), 2.0f);
    if (!(_builtin_sqrtf((t12 + t14)) > 30.0f)) {
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u21 = ((((struct o20_float *)(a4))->v));
        u21 = u21 + (_builtin_sqrtf((t16 + t17))) * (math_sin_angle16(((int)stk + 0)));
        (((struct o20_float *)(a4))->v) = u21;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u25 = ((((struct o28_float *)(a4))->v));
        u25 = u25 + (_builtin_sqrtf((t16 + t17))) * (math_cos_angle16(((int)stk + 0)));
        (((struct o28_float *)(a4))->v) = u25;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3620_uchar *)(a4))->v) = 0x1;
        (((struct o36D0_uchar *)(a4))->v) = 0x1;
        (((struct o5CA0_uchar *)(a4))->v) = 0x1;
        pl_start_motion(a4, 0x1, 0x6D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t27 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t27 + 0x1);
        t83 = (t27 + 0x1);
    } else {
        t30 = math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20))));
        math_atan2_angle16((*(float *)(((int)stk + 16))), _builtin_sqrtf((t12 + t14)));
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16(t30)) * 30.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16(t30)) * 30.0f);
        pl_apply_velocity(a4);
        t36 = hit_probe_step_by_velocity(a4, (0x7254 + a4), 60.0f);
        if ((signed char)t36 != 1) {
            if ((signed char)t36 != 2) {
                (((struct o7243_uchar *)(a4))->v) = 0x4;
                t37 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t37 - 1);
                t83 = 0xEC;
                if ((short)(t37 - 1) == 0) {
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    (((struct o38_float *)(a4))->v) = 0.0f;
                    (((struct o3620_uchar *)(a4))->v) = 0x1;
                    (((struct o36D0_uchar *)(a4))->v) = 0x1;
                    (((struct o5CA0_uchar *)(a4))->v) = 0x1;
                    pl_start_motion(a4, 0x1, 0x6D);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    t39 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t39 + 0x1);
                    t83 = (t39 + 0x1);
                }
            } else {
                t44 = *(signed char *)((a4 + 0x7243));
                (((struct o7243_uchar *)(a4))->v) = (t44 - 1);
                t83 = 0x7243;
                if ((signed char)(t44 - 1) == 0) {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                    (((struct o7243_uchar *)(a4))->v) = 0x4;
                    t47 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t47 - 1);
                    t83 = 0xEC;
                    if ((short)(t47 - 1) == 0) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o3C_float *)(a4))->v) = 0.0f;
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        (((struct o3620_uchar *)(a4))->v) = 0x1;
                        (((struct o36D0_uchar *)(a4))->v) = 0x1;
                        (((struct o5CA0_uchar *)(a4))->v) = 0x1;
                        pl_start_motion(a4, 0x1, 0x6D);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        t49 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t49 + 0x1);
                        t83 = (t49 + 0x1);
                    }
                }
            }
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1E;
            *(unsigned char *)((a4 + 0xB)) = 0x6;
            *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x9;
            t83 = 0x6;
        }
    }
    return t83;
}

int FUN_0c05e244(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t1 = (((struct o2E0_int *)(a4))->v);
    t2 = (((struct oEC_short *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)((t2 << 1) + (t2 << 2)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    (((struct o8_float *)(t1))->v) = (u0 * 10.0f);
    t1 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0xB6);
    (((struct o8_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = ((((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v));
    *(unsigned int *)(((*(int *)(((0x2E0 + a4) + 0x4))) + 0x14)) = (*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)));
    t1 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x1E);
    t2 = (int)((int)(math_rand_next()) % (int)0x1E);
    if (t1 == t2) {
        fx_spawn_item_sparkle((a4 + 0x20));
    }
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    if (((*(signed char *)(((0x310 + a4) + 0x0))) == 0) && (t0 = *(signed char *)(((0x310 + a4) + 0x1)), t0 == 0)) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x12C) {
            if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x168) {
                (((struct o0_uchar *)0xC7F2979)->v) = (*(signed char *)((a4 + 0xD)));
                (((struct o1_uchar *)0xC7F2979)->v) = 0x1;
                return obj_set_mode_owner(a4, 0x3, 0x2);
            }
            *(unsigned char *)((a4 + 0x1)) = ((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x2));
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
    return math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
}

int FUN_0c05dd38(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t1 = (((struct o2E0_int *)(a4))->v);
    t2 = (((struct oEC_short *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)((t2 << 1) + (t2 << 2)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    u1 = -30.0f;
    u1 = u1 + 10.0f * u0;
    (((struct o8_float *)(t1))->v) = u1;
    t1 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0xB6);
    t1 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x1E);
    t2 = (int)((int)(math_rand_next()) % (int)0x1E);
    if (t1 == t2) {
        fx_spawn_item_sparkle((a4 + 0x20));
    }
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    if (((*(signed char *)(((0x310 + a4) + 0x0))) == 0) && (t0 = *(signed char *)(((0x310 + a4) + 0x1)), t0 == 0)) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x12C) {
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x168) {
                (((struct o0_uchar *)0xC7F2979)->v) = (*(signed char *)((a4 + 0xD)));
                (((struct o1_uchar *)0xC7F2979)->v) = 0x1;
                return obj_set_mode_owner(a4, 0x3, 0x2);
            }
            *(unsigned char *)((a4 + 0x1)) = ((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x2));
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
    return math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
}

int FUN_0c085e8a(int a4)
{
    int stk[7];
    register int t9;
    register int t10;
    register int t31;
    register int t34;
    register int t35;
    register int t36;
    register int t38;
    register int t41;

    *(unsigned int *)(((int)stk + 0)) = (0x72BC + a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 11) {
        (((struct o54_uint *)(((0x1E80 + a4) + 0x1760)))->v) = (((((struct o54_int *)(((0x1E80 + a4) + 0x1760)))->v)) - 0x4000);
        (((struct o54_uint *)(((0x1E80 + a4) + 0x1810)))->v) = (((((struct o54_int *)(((0x1E80 + a4) + 0x1810)))->v)) + 0x4000);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 13) {
        t9 = *(int *)(((int)stk + 0));
        t10 = FUN_0c0c571c(a4, 0x1);
        *(unsigned int *)(((t9 + 0x8) + 0x0)) = t10;
        if (t10 != 0) {
            fx_spawn_03d254(a4, 0x0);
            (((struct o54_uint *)(((0x1E80 + a4) + 0x1760)))->v) = 0x0;
            (((struct o54_uint *)(((0x1E80 + a4) + 0x1810)))->v) = 0x0;
            (((struct o40_uchar *)((0x1760 + (0x1E80 + a4))))->v) = 0x0;
            (((struct o40_uchar *)((0x1810 + (0x1E80 + a4))))->v) = 0x0;
            (((struct o5CA0_uchar *)(a4))->v) = 0x0;
            snd_play_char_voice(a4, 0x32);
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xB4;
        } else {
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t31 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t31 - 1);
    if ((short)(t31 - 1) == 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x1;
    }
    t34 = *(int *)((a4 + 0x30));
    t35 = (((struct o7248_short *)(a4))->v);
    t36 = *(int *)((a4 + 0x30));
    t38 = (unsigned short)(t35 - t34);
    if ((0x8000 & (unsigned short)(t35 - t34)) != 0) {
        t38 = ((unsigned short)(t35 - t34) | 0xFFFF0000);
    }
    t41 = (int)((int)t38 / (int)((((struct oF0_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t36 + t41);
    return t41;
}

void FUN_0c0aff3c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create_beside(0x2, a4, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B0048;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A2A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A28C); }
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t2, 0xC664958, (t1 + 0x4));
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4)) = *(struct mv3 *)((((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + (((t1 << 1) + t1) << 2)) + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + (((t1 << 1) + t1) << 2)) + 0x30)); }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
    }
}

int FUN_0c07cf8e(int a4)
{
    int stk[9];
    register int t4;
    register int t13;

    obj_place_linked_ahead(a4, 0x0, 0.0f);
    pl_start_motion(a4, 0x4, 0x5);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x35);
    t4 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t4))->v) = 0x1;
    (((struct o71A8_uchar *)(t4))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t13 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t13 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t13 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t13 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    FUN_0c0bf488(a4, 0x8);
    cam_request_mode_03(0x1C, (*(signed char *)((a4 + 0x3))));
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 60.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x28;
    (((struct oEE_ushort *)(a4))->v) = 0x1;
    (((struct oF0_ushort *)(a4))->v) = 0x2;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x5;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c07d0c0(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        pl_start_hit_freeze(a4);
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        snd_play_char_voice(a4, 0x1C);
    }
    (((struct o107_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x2;
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        pl_start_motion(a4, 0x4, 0x6);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x36);
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC07D214)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC07D214)->v));
        FUN_0c0bf488(a4, 0x0);
        cam_request_mode_03(0x1D, (*(signed char *)((a4 + 0x3))));
        *(unsigned char *)((a4 + 0xF)) = ((*(signed char *)((a4 + 0xF))) + 0x1);
        (((struct o20_float *)(a4))->v) = (*(float *)((0xC33730C + (((*(signed char *)0xC7F3051) << 1) << 2))));
        (((struct o28_float *)(a4))->v) = ((((struct o4_float *)((0xC33730C + (((*(signed char *)0xC7F3051) << 1) << 2))))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c041c3a(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) - 0.125f);
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - 0.125f);
            u0 = (((struct o68_float *)(a4))->v);
            (((struct o68_float *)(a4))->v) = (u0 - 0.125f);
            t0 = 0x68;
            if (!((u0 - 0.125f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.399999976f;
    (((struct o38_float *)(a4))->v) = (-(((((struct o3C_float *)(a4))->v)) / 15.0f));
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int FUN_0c07cdf8(int a4)
{
    int stk[8];
    register int t6;
    register int t9;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    pl_start_motion(a4, 0x4, 0x8);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x37);
    t6 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t6))->v) = 0x1;
    (((struct o71A8_uchar *)(t6))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    t9 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t9 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t9 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t9 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x4;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c041d14(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x2C)); }
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC041DFC)->v));
    (((struct o28_float *)(a4))->v) = ((((struct o4_float *)0xC041DFC)->v));
    math_mat_transform_point((a4 + 0x20), ((*(int *)((a4 + 0x1C))) + 0xF60));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.049999997f);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            u0 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u0 - 0.099999994f);
            t0 = 0x5C;
            if (!((u0 - 0.099999994f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c085df8(int a4)
{
    register int t0;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = ((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
    } else {
        t0 = (pl_angle_to_target_pos(a4));
    }
    (((struct o7248_uint *)(a4))->v) = (unsigned short)t0;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 120.0f);
    if ((int)(short)(int)((float)t0 - 120.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    (((struct oF0_ushort *)(a4))->v) = 0xD;
    return FUN_0c085e8a(a4);
}

int FUN_0c041b3a(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    u0 = *(float *)0xC041C0C;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + u0);
            u1 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u1 - u0);
            t0 = 0x5C;
            if (!((u1 - u0) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x5;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + u0);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c041bc0(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            u0 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u0 - 0.099999994f);
            t0 = 0x5C;
            if (!((u0 - 0.099999994f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    return 0xEC;
}

int FUN_0c0862b4(int a4)
{
    register int t0;
    register int t3;
    register int t6;
    int t4;

    t0 = *(int *)(((0x72BC + a4) + 0x8));
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    t6 = 0xEC;
    if (((short)(t3 - 1) != 0) && (t4 = *(signed char *)(((0x308 + t0) + 0x0)), t4 != 0)) {
    } else {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3620_uchar *)(a4))->v) = 0x1;
        (((struct o36D0_uchar *)(a4))->v) = 0x1;
        (((struct o5CA0_uchar *)(a4))->v) = 0x1;
        pl_start_motion(a4, 0x1, 0x6D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = 0x4;
        t6 = 0x4;
    }
    return t6;
}

int FUN_0c088fb2(int a4)
{
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x66);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x25;
    fx_spawn_03dfd0(a4, 0x39);
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    fx_spawn_03e354(a4, 0x3);
    fx_spawn_03ef18(a4, 0x3);
    return snd_play_char_voice(a4, 0x34);
}

int FUN_0c085fd2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((0x72BC + a4) + 0x8));
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)(((0x308 + t1) + 0x0))) == 2) {
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        pl_start_motion(a4, 0x1, 0x61);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct o7243_uchar *)(a4))->v) = 0x4;
        t2 = 0x7243;
    } else {
        t3 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
        if (((short)(t3 - 1) != 0) && (t0 = *(signed char *)(((0x308 + t1) + 0x0)), t0 != 3)) {
            t1 = t0;
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1E;
            *(unsigned char *)((a4 + 0xB)) = 0x6;
            t1 = 0x6;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c07ceb2(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x4, 0x9);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x38);
        cam_set_shake_ramp(0x1E, 0x14);
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c05ba04(int a4)
{
    register int t0;

    t0 = *(int *)(((0x2E0 + a4) + 0x4));
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v)));
    t0 = *(int *)(((0x2E0 + a4) + 0x8));
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v)));
    return 0x8;
}

int FUN_0c086284(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c097eb0(int a4)
{
    (((struct o7237_uchar *)(a4))->v) = 0x63;
    return FUN_0c097eb6(a4);
}
