/* Kraken attack update, class handlers and state updates (part 2 of 7 of the same module) (0c084d0c-0c085606) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3620_uchar { char p[0x3620]; unsigned char v; };
struct o36D0_uchar { char p[0x36D0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o5CA0_uchar { char p[0x5CA0]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
int hit_probe_step_by_velocity(int, int, float);
int pl_apply_velocity(int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_pow_float(float, float);
float math_sin_angle16(int);
extern float _builtin_sqrtf(float);
int thunk_FUN_0c062242(int, int);
int FUN_0c0852a6(int, int);
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int snd_play_char_voice(int, int);

int pl_kraken_attack_kind2_phase2(int a4)
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

int pl_kraken_attack_kind2_phase3(int a4)
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
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (int)stk + 8);
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
        pl_start_motion(a4, 0x1, 0x62);
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
                    pl_start_motion(a4, 0x1, 0x62);
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
                        pl_start_motion(a4, 0x1, 0x62);
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

int pl_kraken_attack_kind2_phase4(int a4)
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

int pl_kraken_attack_kind2_phase6(int a4)
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
        pl_start_motion(a4, 0x1, 0x62);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = 0x4;
        t6 = 0x4;
    }
    return t6;
}

int pl_kraken_attack_kind6_phase2(int a4)
{
    register int t1;
    register int t4;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    t4 = 0xEC;
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        pl_start_motion(a4, 0x1, 0x68);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = 0x71A8;
    }
    return t4;
}

int pl_kraken_attack_kind6_phase3(int a4)
{
    register int t1;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = (*(short *)((((*(signed char *)((a4 + 0x721D))) << 1) + 0xC337BA4)));
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        return snd_play_char_voice(a4, 0x30);
    }
    return 0xEC;
}

int pl_kraken_attack_kind6_phase4(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        pl_start_motion(a4, 0x1, 0x69);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c0852a6(a4, 0x0);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    return 0xEC;
}

int pl_kraken_attack_kind6_phase5(int a4)
{
    register int t3;
    register int t6;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    FUN_0c0852a6(a4, 0x0);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    t6 = 0xEC;
    if ((short)(t3 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        pl_start_motion(a4, 0x1, 0x6A);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t6 = 0x71A8;
    }
    return t6;
}

int pl_kraken_attack_kind6_phase6(int a4)
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
