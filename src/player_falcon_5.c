/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c067d4c-0c068e10) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
int fx_spawn_effect_at_point(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);
struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c032262(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_angle_to_opponent(int);
int pl_landed(int);
int FUN_0c0a2666(int, int);
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int pl_apply_velocity(int);
int obj_set_record_char(int, int);
int FUN_0c0e7140(int);
int pl_end_action_choose_state(int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e24f0(int);
struct o274_float { char p[0x274]; float v; };
int hit_find_contact_direction(int);
int pl_detect_special_input(int, int);
struct o719E_short { char p[0x719E]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_032fd4(int, int);
int pl_falcon_aim_at_target(int);
int pl_start_hit_freeze(int);
int snd_play_char_voice(int, int);
int fx_spawn_0318e0(int, int);
int pl_apply_acceleration(int);
int fx_spawn_08(int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
int pl_falcon_state12_phase1(int);

int pl_falcon_attack_kind24_phase0(int a4);
int pl_falcon_attack_kind24_phase1(int a4);
int pl_falcon_attack_kind24_phase2(int a4);
int pl_falcon_attack_kind24_phase3(int a4);
int pl_falcon_wait_anim_end(int a4);
int pl_falcon_attack_kind68_phase0(int a4);
int pl_falcon_attack_kind57_phase0(int a4);
int pl_falcon_attack_kind57_phase1(int a4);
int pl_falcon_state12_phase0(int a4);
int pl_falcon_state31_phase0(int a4);
int pl_falcon_state31_phase1(int a4);

int pl_falcon_attack_kind24_phase0(int a4)
{
    int stk[3];
    register int t0;
    register int t25;
    register int t6;
    register float u9;
    register float u16;
    register float u21;

    t0 = *(int *)0xC7F307C;
    t25 = t0;
    if ((t0 & 7) != 0) {
        math_rand_float();
        
        t6 = FUN_0c0e6f24();
        u9 = (float)t6;
        if ((int)t6 < 0) {
            u9 = ((float)t6 + 4.2949673e+09f);
        }
        u16 = ((((struct o20_float *)(a4))->v));
        u16 = u16 + ((u9 + 100.0f)) * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 0)) = u16;
        u21 = ((((struct o28_float *)(a4))->v));
        u21 = u21 + ((u9 + 100.0f)) * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 8)) = u21;
        *(float *)(((int)stk + 4)) = ((((struct o2D4_float *)(a4))->v));
        t25 = (fx_spawn_effect_at_point((*(signed char *)((a4 + 0x3))), ((int)stk + 0)));
    }
    return t25;
}

int pl_falcon_attack_kind24_phase1(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC068064)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC068064)->v));
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        FUN_0c032262(a4, 0x2);
        FUN_0c032262(a4, 0x2);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_falcon_attack_kind24_phase2(int a4)
{
    int stk[6];
    register int t5;
    register int t45;
    register int t10;
    register int t21;
    register int t31;
    register int t38;

    FUN_0c0e7140(a4);
    pl_apply_velocity(a4);
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
    pl_falcon_attack_kind24_phase0(a4);
    t5 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t5 + 0x1);
    t45 = 0xEE;
    if ((int)(short)(t5 + 0x1) >= (int)0xA) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) + 0x38E);
        if ((int)((((struct oF0_short *)(a4))->v)) <= (int)0x2) {
            t38 = (obj_set_record_char(a4, 0x72));
        } else {
            t10 = 0x0;
            for (;;) {
                if ((int)(*(short *)((((int)stk + 0) + (((short)t10 << 1) << 1)))) <= (int)((((struct oEC_short *)(a4))->v))) {
                    t10 = (t10 + 0x1);
                    if ((int)(short)t10 >= (int)0x5) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((int)((((struct oF0_short *)(a4))->v)) <= (int)(*(short *)((((((short)t10 << 1) << 1) + ((int)stk + 0)) + 0x2)))) {
                obj_set_record_char(a4, 0x72);
                if ((short)t10 == 2) {
                    t21 = (((struct o71F4_short *)(a4))->v);
                    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t21 - 240.0f);
                    if ((int)(short)(int)((float)t21 - 240.0f) < 0) {
                        (((struct o71F4_ushort *)(a4))->v) = 0x0;
                    }
                    t38 = 0x71F4;
                } else {
                    t38 = (short)t10;
                }
            } else {
                obj_set_record_char(a4, 0x78);
                (((struct o48_float *)(a4))->v) = (*(float *)0xC0681C4);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t31 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t31 + 0x1);
                t38 = (t31 + 0x1);
            }
        }
        t45 = t38;
    }
    return t45;
}

int pl_falcon_attack_kind24_phase3(int a4)
{
    register int t0;

    pl_step_motion(a4);
    (((struct o101_uchar *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
    if ((((((struct o7248_int *)(a4))->v)) & 0x8000) == 0) {
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) - 0x16C);
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x61);
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    return (signed char)(FUN_0c0a2666(a4, 0x1));
}

int pl_falcon_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_falcon_attack_kind24(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_falcon_wait_anim_end(a4);
                }
                return pl_falcon_attack_kind24_phase3(a4);
            }
            return pl_falcon_attack_kind24_phase2(a4);
        }
        return pl_falcon_attack_kind24_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC067E1C))(a4, a5, a6, a7);
}

int pl_falcon_attack_kind13(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC068304))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC068284))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC068216))(a4, a5, a6, a7);
}

float FUN_0c068488(int a4)
{
    int stk[6];
    register float u4;
    register float t6;
    register float t9;
    register float t13;
    register float t19;

    math_vec3_sub((((int)stk + 0) + 0xC), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    u4 = 350.0f;
    if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
        u4 = 700.0f;
    }
    t6 = math_vec3_length((((int)stk + 0) + 0xC));
    if (!(u4 > t6)) {
        FUN_0c0e24f0((((int)stk + 0) + 0xC));
        t9 = math_sin_angle16((*(int *)((a4 + 0x30))));
        *(float *)(((int)stk + 0)) = (t9 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        t13 = math_cos_angle16((*(int *)((a4 + 0x30))));
        *(float *)(((int)stk + 8)) = (t13 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        *(float *)(((int)stk + 4)) = (-(math_sin_angle16((*(int *)((a4 + 0x2C))))));
        FUN_0c0e24f0(((int)stk + 0));
        t19 = FUN_0c0e2220(((int)stk + 0), (((int)stk + 0) + 0xC));
        if (!(t19 > 0.0f)) {
            return t19;
        }
        return t19;
    }
    return t6;
}

int FUN_0c068558(int a4)
{
    register int t0;

    t0 = hit_find_contact_direction(a4);
    if ((signed char)t0 != 0) {
        if ((signed char)t0 != 8) {
            *(unsigned int *)((a4 + 0x30)) = ((((((signed char)t0 - 4) << 8) << 2) << 2) << 2);
        }
        return 0x1;
    }
    if (((((struct o274_float *)(a4))->v)) != 0.0f) {
        *(unsigned int *)((a4 + 0x2C)) = (~(*(int *)((a4 + 0x2C))));
    }
    return 0x0;
}

int pl_falcon_attack_kind68_phase0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_falcon_attack_kind68_phase1(int a4)
{
    register int t13;

    pl_step_motion(a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 29) {
        pl_start_hit_freeze(a4);
    }
    t13 = 0x719E;
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x1E) {
        fx_spawn_032fd4(a4, 0x0);
        snd_play_char_voice(a4, 0x1B);
        snd_play_char_voice(a4, 0x30);
        pl_start_motion(a4, 0x1, 0x64);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xF)) = 0x0;
        pl_falcon_aim_at_target(a4);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        obj_set_record_char(a4, 0x75);
        (((struct oF2_ushort *)(a4))->v) = 0xE10;
        t13 = 0xF2;
    }
    return t13;
}

int pl_falcon_attack_kind68_phase3(int a4)
{
    register int t1;
    register int t7;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t1 = pl_step_motion(a4);
    t7 = (signed char)t1;
    if ((signed char)t1 != 0) {
        pl_falcon_aim_at_target(a4);
        pl_apply_velocity(a4);
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        obj_set_record_char(a4, 0x75);
        snd_play_char_voice(a4, 0x30);
        pl_start_motion(a4, 0x1, 0x64);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t7 = 0x71A8;
    }
    return t7;
}

int pl_falcon_attack_kind68_phase4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
    }
    return 0xEC;
}

int pl_falcon_attack_kind68_phase5(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return pl_end_action_choose_state(a4);
            }
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        return pl_end_action_choose_state(a4);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return pl_end_action_choose_state(a4);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_falcon_attack_kind68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return ((int (*)(int, int, int, int))(0xC068B14))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC068B10))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC068B0C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC068B08))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC068B04))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC068B00))(a4, a5, a6, a7);
    }
    return pl_falcon_attack_kind68_phase0(a4);
}

int pl_falcon_attack_kind57_phase0(int a4)
{
    register int t6;

    pl_start_motion(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1A);
    fx_spawn_08(a4, 0x0);
    fx_spawn_0318e0(a4, 0x0);
    fx_spawn_0318e0(a4, 0x1);
    snd_play_char_voice(a4, 0x33);
    t6 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
    return (t6 + 0x1);
}

int pl_falcon_attack_kind57_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 65) {
        pl_start_hit_freeze(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t0 == 75) {
        (((struct oEC_ushort *)(a4))->v) = 0x32;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t1 = 0x2;
        if ((*(signed char *)((a4 + 0x7223))) != 8) {
            t1 = 0x1;
        }
        fx_spawn_08(a4, t1);
        return snd_play_char_voice(a4, 0x32);
    }
    return (unsigned short)t0;
}

int pl_falcon_attack_kind57(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_falcon_attack_kind57_phase1(a4);
    }
    return pl_falcon_attack_kind57_phase0(a4);
}

int pl_falcon_state11_update(int a4)
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

int pl_falcon_state12_phase0(int a4)
{
    register int t6;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        pl_start_motion(a4, 0x3, 0x0);
        (((struct o710B_uchar *)(a4))->v) = 0x2;
        (((struct o710C_uchar *)(a4))->v) = 0x2;
    } else {
        pl_start_motion(a4, 0x3, 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t6 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
    return (t6 + 0x1);
}

int pl_falcon_state12_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_falcon_state12_phase1(a4);
    }
    return pl_falcon_state12_phase0(a4);
}

int pl_falcon_state31_phase0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_falcon_state31_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_falcon_state31_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_falcon_state31_phase1(a4);
    }
    return pl_falcon_state31_phase0(a4);
}

int pl_falcon_check_special_input(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC33699C);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC336988);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC3369B0);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

int pl_falcon_special_move_dispatch(int obj, int arg1, int arg2, int arg3)
{
    register int handler;

    handler = *(int *)((((*(signed char *)((obj + 0x7209))) << 2) + 0xC3369C4));
    return ((int (*)(int, int, int, int))(handler))(obj, arg1, arg2, arg3);
}
