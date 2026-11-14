/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o72BC_short { char p[0x72BC]; short v; };
struct o72BC_ushort { char p[0x72BC]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_uchar { char p[0xEE]; unsigned char v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int FUN_0c0555c4(void);
int FUN_0c09bc3a(int, int);
int FUN_0c0f6128(int);
int FUN_0c0f9872(int);
int FUN_0c0fbfa2(int, int, int, int);
int fx_burst_create(int, int);
extern int fx_homing_shell_create();
int fx_spawn_03dca8(int);
int fx_spawn_03e354(int, int);
int fx_spawn_03ef18(int, int);
int fx_spawn_35(int, int);
int fx_spawn_eight_point_effect(int, int);
int fx_spawn_trail_chain(int, int);
int fx_thrown_object_create(int, int);
int kmiReadRegister(int);
int kmiStartRenderTextureEntry(int);
int kmiWriteRegister(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int mdl_scroll_uv_by_speed(int);
int obj_destroy(int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int);
int pl_landed(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int snd_play_char_voice(int, int);
int pl_valgas_attack_type2(int a4);
int FUN_0c0f7698(int a4);
int pl_valgas_attack_type3(int a4, int a5, int a6, int a7);
int pl_valgas_attack_type4(int a4);
int pl_valgas_attack_type6(int a4);
int pl_valgas_attack_type1(int a4);
int FUN_0c0b3bd0(int a4);

int pl_valgas_attack_type2(int a4)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t3;
    register int t11;
    register int t20;
    register int t30;
    register int t32;
    register int t41;
    register int t55;
    register int t52;
    register int t61;
    register int t73;
    register int t98;
    register int t114;
    register int t126;
    register int t152;
    register int t149;
    register int t156;
    register int t168;
    register int t167;
    register int t170;
    register int t182;
    register int t191;
    int t69;
    int t85;
    register int t105;
    register int t107;
    int t122;
    register float u186;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
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
                                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                                    return pl_end_action_choose_state(a4);
                                }
                                pl_step_motion(a4);
                                t4 = 0x71AA;
                                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                    t3 = *(signed char *)((a4 + 0xB));
                                    *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
                                    t4 = (t3 + 0x1);
                                }
                                return t4;
                            }
                            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                            pl_start_motion(a4, 0x0, 0x9);
                            FUN_0c09bc3a(a4, 0xC1505AE);
                            return fx_spawn_eight_point_effect((*(signed char *)((a4 + 0x3))), (a4 + 0x20));
                        }
                        if (((((struct oF0_short *)(a4))->v)) != 0) {
                            t11 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t11 - 1);
                            if ((short)(t11 - 1) == 0) {
                                (((struct o40_float *)(a4))->v) = 0.0f;
                                (((struct o38_float *)(a4))->v) = 0.0f;
                                (((struct o4C_float *)(a4))->v) = 0.0f;
                                (((struct o44_float *)(a4))->v) = 0.0f;
                            }
                        }
                        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 7) {
                            *(int *)((int)stk + 16) = 0xC15056C;
                            *(int *)((int)stk + 12) = 0xC150560;
                            *(int *)((int)stk + 8) = 0x72;
                            *(int *)((int)stk + 4) = 0x1E;
                            *(int *)((int)stk + 0) = 0x2;
                            t20 = *(signed char *)((a4 + 0x3));
                            (((struct o14_uchar *)(((int)stk + 0)))->v) = t20;
                            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0xE, ((signed char)((((t20 << 1) + t20) << 2) << 1) + 0xC6002D0), 0x2, 0x1E, 0x72, 0xC150560, 0xC15056C);
                        }
                        t30 = (((struct o719E_short *)(a4))->v);
                        if ((unsigned short)t30 != 7) {
                            if (((unsigned short)t30 != 8) && (((unsigned short)t30 != 9) && (((unsigned short)t30 != 11) && (((unsigned short)t30 != 12) && ((unsigned short)t30 != 14))))) {
                            } else {
                                t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(fx_homing_shell_create))(a4, ((((struct oF2_short *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20));
                                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                            }
                        } else {
                            snd_play_char_voice(a4, 0x32);
                            t41 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(fx_homing_shell_create))(a4, ((((struct oF2_short *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20));
                            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                        }
                        pl_step_motion(a4);
                        pl_apply_velocity(a4);
                        pl_apply_acceleration(a4);
                        t55 = 0x3C;
                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                            t52 = pl_landed(a4);
                            t55 = (signed char)t52;
                            if ((signed char)t52 != 0) {
                                *(unsigned char *)((a4 + 0xB)) = 0x6;
                                t55 = 0x6;
                            }
                        }
                        return t55;
                    }
                    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 7) {
                        t61 = ((int (*)(int, int))(fx_homing_shell_create))(a4, ((((struct oF2_short *)(a4))->v)));
                        snd_play_char_voice(a4, 0x32);
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                    }
                    if (((unsigned short)((((struct o719E_short *)(a4))->v)) == 5) && (t69 = (((struct o72BC_short *)(a4))->v), t69 == 0)) {
                        (((struct o72BC_ushort *)(a4))->v) = 0xC;
                    }
                    if (((((struct oF0_short *)(a4))->v)) != 0) {
                        t73 = (((struct oF0_short *)(a4))->v);
                        (((struct oF0_ushort *)(a4))->v) = (t73 - 1);
                        if ((short)(t73 - 1) == 0) {
                            (((struct o40_float *)(a4))->v) = 0.0f;
                            (((struct o38_float *)(a4))->v) = 0.0f;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            (((struct o44_float *)(a4))->v) = 0.0f;
                        }
                    }
                    pl_step_motion(a4);
                    pl_apply_velocity(a4);
                    pl_apply_acceleration(a4);
                    if (((unsigned short)((((struct o719E_short *)(a4))->v)) == 17) && (t85 = *(signed char *)(((0x72BC + a4) + 0x2)), t85 != 0)) {
                        *(unsigned char *)(((0x72BC + a4) + 0x2)) = 0x0;
                        (((struct o72BC_ushort *)(a4))->v) = 0x0;
                        *(unsigned char *)((a4 + 0xB)) = 0x5;
                        pl_start_motion(a4, 0x1, 0x64);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
                        (((struct o44_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
                        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
                        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
                        (((struct oF0_ushort *)(a4))->v) = (int)(_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
                        (((struct o3C_float *)(a4))->v) = 10.0f;
                        (((struct o48_float *)(a4))->v) = -1.0f;
                        t105 = 0x48;
                        t107 = (int)(_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
                        _builtin_fabsf(-0.399999976f);
                    } else {
                        t105 = 0x3C;
                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                            t98 = pl_landed(a4);
                            t105 = (signed char)t98;
                            if ((signed char)t98 != 0) {
                                *(unsigned char *)((a4 + 0xB)) = 0x6;
                                t105 = 0x6;
                            }
                        }
                    }
                    return t105;
                }
                if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 20) {
                    t114 = ((int (*)(int, int))(fx_homing_shell_create))(a4, ((((struct oF2_short *)(a4))->v)));
                    snd_play_char_voice(a4, 0x32);
                    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
                }
                if (((unsigned short)((((struct o719E_short *)(a4))->v)) == 19) && (t122 = (((struct o72BC_short *)(a4))->v), t122 == 0)) {
                    (((struct o72BC_ushort *)(a4))->v) = 0xE;
                }
                if (((((struct oF0_short *)(a4))->v)) != 0) {
                    t126 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t126 - 1);
                    if ((short)(t126 - 1) == 0) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o38_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o44_float *)(a4))->v) = 0.0f;
                    }
                }
                pl_step_motion(a4);
                pl_apply_velocity(a4);
                pl_apply_acceleration(a4);
                if ((*(signed char *)(((0x72BC + a4) + 0x2))) != 0) {
                    *(unsigned char *)(((0x72BC + a4) + 0x2)) = 0x0;
                    (((struct o72BC_ushort *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0xB)) = 0x4;
                    pl_start_motion(a4, 0x1, 0x63);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
                    (((struct o44_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
                    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
                    (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
                    (((struct oF0_ushort *)(a4))->v) = (int)(_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
                    (((struct o3C_float *)(a4))->v) = 10.0f;
                    (((struct o48_float *)(a4))->v) = -1.0f;
                    return fx_spawn_03dca8(a4);
                }
                t152 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t149 = pl_landed(a4);
                    t152 = (signed char)t149;
                    if ((signed char)t149 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = 0x6;
                        t152 = 0x6;
                    }
                }
                return t152;
            }
            t156 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t156 - 1);
            if ((short)(t156 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct o71BC_uchar *)(a4))->v) = 0x2;
                (((struct o3C_float *)(a4))->v) = 10.0f;
                (((struct o48_float *)(a4))->v) = -1.0f;
                fx_spawn_03dca8(a4);
            }
            pl_step_motion(a4);
            pl_apply_velocity(a4);
            pl_apply_motion_translation(a4);
            t168 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                t167 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t167 + 0x1);
                t168 = (t167 + 0x1);
            }
            return t168;
        }
        t170 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t170 - 1);
        t182 = (short)(t170 - 1);
        if ((short)(t170 - 1) == 0) {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
            (((struct o44_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 0.399999976f));
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            (((struct oF0_ushort *)(a4))->v) = (int)(_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
            t182 = (int)(_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
            _builtin_fabsf(-0.399999976f);
            u186 = (_builtin_fabsf(10.0f) / _builtin_fabsf(-0.399999976f));
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        return pl_apply_motion_translation(a4);
    }
    t191 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t191 - 240.0f);
    if ((int)(short)(int)((float)t191 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x62);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    (((struct oEE_ushort *)(a4))->v) = 0x13;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x72BC + a4) + 0x2)) = 0x0;
    (((struct o72BC_ushort *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c0f7698(int a4)
{
    int stk[11];

    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_0 = FUN_0c0f6128(v0_1);
    v0_1 = (v0_1);
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C0F7700;
    FUN_0c0f9872((*(int *)0xC346FF4));
    v0_4 = (v0_2);
    L_C0F78EC:;
    return v0_4;
    L_C0F7700:;
    (((struct o0_uint *)0xC803CEC)->v) = ((unsigned int)((unsigned int)((unsigned int)(((*(int *)((v0_1 + 0xC))) << 2) << 2) >> 2) >> 2) >> 2);
    (((struct o4_uint *)0xC803CEC)->v) = ((*(int *)((v0_1 + 0x1C))) | 0x1000000);
    v0_2 = (((struct o0_int *)0xC817314)->v);
    (((struct o14_uint *)0xC817314)->v) = 0x0;
    v0_4 = (0xC8171CC);
    v0_3 = (0xC803CE8);
    v0_0 = (0x0);
    R13 = (0x1);
    v0_2 = (v0_2);
    v0_5 = (0x0);
    if ((((((struct o4_int *)0xC8171C8)->v)) == 0)) goto L_C0F774E;
    L_C0F772E:;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_4 = (0xC8171E8);
    if (((unsigned int)((((struct o14_int *)0xC817314)->v)) <= (unsigned int)((((struct o20_int *)0xC8171C8)->v)))) goto L_C0F7746;
    v0_5 = (R13);
    L_C0F774E:;
    if ((v0_5 == 0)) goto L_C0F7756;
    goto L_C0F78EC;
    L_C0F7756:;
    (((struct o14_uint *)0xC817314)->v) = v0_0;
    v0_5 = (v0_0);
    if ((((((struct o0_int *)0xC8171C8)->v)) == 0)) goto L_C0F7784;
    L_C0F7764:;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_4 = (0xC8171E4);
    if (((unsigned int)((((struct o14_int *)0xC817314)->v)) <= (unsigned int)((((struct o1C_int *)0xC8171C8)->v)))) goto L_C0F777C;
    v0_5 = (R13);
    L_C0F7784:;
    if ((v0_5 == 0)) goto L_C0F778E;
    v0_1 = (0xC8171C8);
    L_C0F786E:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    goto L_C0F78EC;
    L_C0F778E:;
    (((struct o1C_uint *)0xC817314)->v) = R13;
    *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC81726C)->v));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC81726C)->v));
    v0_4 = *(int *)((v0_1 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    R6 = ((*(int *)((v0_1 + 0xC))));
    if (((unsigned int)v0_4 <= (unsigned int)((((struct o4_int *)0xC817008)->v)))) goto L_C0F77B2;
    R7 = (((((struct o4_int *)0xC817008)->v)));
    L_C0F77B4:;
    *(unsigned int *)(((int)stk + 4)) = R6;
    R5 = (0x0);
    if (((unsigned int)R6 <= (unsigned int)((((struct o0_int *)0xC817008)->v)))) goto L_C0F77C6;
    R6 = (((((struct o0_int *)0xC817008)->v)));
    L_C0F77C8:;
    FUN_0c0fbfa2(R5, R5, R6, R7);
    *(unsigned int *)((v0_3 + 0xC)) = ((((struct o0_int *)0xC81726C)->v));
    *(unsigned int *)((v0_3 + 0x10)) = ((((struct o4_int *)0xC81726C)->v));
    (((struct o0_uint *)0xC81726C)->v) = (*(int *)(((int)stk + 12)));
    (((struct o4_uint *)0xC81726C)->v) = (*(int *)(((int)stk + 0)));
    v0_1 = kmiStartRenderTextureEntry(0xC803CE8);
    (((struct o14_uint *)0xC817314)->v) = v0_0;
    v0_4 = (v0_1);
    v0_1 = (v0_0);
    if ((((((struct o0_int *)0xC8171C8)->v)) == 0)) goto L_C0F7868;
    L_C0F77FC:;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_4 = (0xC8171E4);
    if (((unsigned int)((((struct o14_int *)0xC817314)->v)) <= (unsigned int)((((struct o1C_int *)0xC8171C8)->v)))) goto L_C0F7860;
    v0_1 = (R13);
    L_C0F7868:;
    if ((v0_1 == 0)) goto L_C0F7872;
    v0_1 = (0xC817330);
    goto L_C0F786E;
    L_C0F7872:;
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0x124, (*(int *)((((((v0_2 & R13) << 2) << 2) << 1) + 0xC817430))));
    kmiWriteRegister(0x12C, (*(int *)((((((v0_2 & R13) << 2) << 2) << 1) + 0xC817434))));
    kmiWriteRegister(0x128, (*(int *)((((((v0_2 & R13) << 2) << 2) << 1) + 0xC81743C))));
    kmiWriteRegister(0x130, (*(int *)((((((v0_2 & R13) << 2) << 2) << 1) + 0xC817440))));
    kmiWriteRegister(0x164, (*(int *)((((((v0_2 & R13) << 2) << 2) << 1) + 0xC817438))));
    kmiWriteRegister(0x144, 0x80000000);
    kmiReadRegister(0x144);
    (((struct o10_uint *)0xC817314)->v) = 0x0;
    (((struct oC_uint *)0xC817314)->v) = (*(int *)0xC817420);
    (((struct o8_uint *)0xC817314)->v) = ((((struct o0_int *)0xC817314)->v));
    (((struct o4_uint *)0xC8171C8)->v) = R13;
    (((struct o20_uint *)0xC817314)->v) = R13;
    *(unsigned int *)(((((((struct o0_int *)0xC817314)->v)) << 2) + 0xC817304)) = 0x2;
    v0_4 = (0x0);
    v0_2 = ((v0_2 & R13));
    goto L_C0F78EC;
    L_C0F7860:;
    if ((((((struct o0_int *)0xC8171C8)->v)) != 0)) goto L_C0F77FC;
    goto L_C0F7868;
    L_C0F77C6:;
    R6 = ((*(int *)(((int)stk + 4))));
    goto L_C0F77C8;
    L_C0F77B2:;
    R7 = ((*(int *)(((int)stk + 8))));
    goto L_C0F77B4;
    L_C0F777C:;
    if ((((((struct o0_int *)0xC8171C8)->v)) != 0)) goto L_C0F7764;
    goto L_C0F7784;
    L_C0F7746:;
    if ((((((struct o4_int *)0xC8171C8)->v)) != 0)) goto L_C0F772E;
    goto L_C0F774E;
}

int pl_valgas_attack_type3(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                    return pl_end_action_choose_state(a4);
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                t0 = 0x71AA;
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    t1 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                    t0 = (t1 + 0x1);
                }
                return t0;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0x1;
            }
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                fx_spawn_trail_chain(a4, ((((struct oF0_short *)(a4))->v)));
                (((struct oEC_ushort *)(a4))->v) = 0x28;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
            }
        }
        pl_step_motion(a4);
        return pl_apply_motion_translation(a4);
    }
    if (!((((((struct o24_float *)(a4))->v)) + -100.0f) > ((((struct o2D4_float *)(a4))->v)))) {
        (((struct o7223_uchar *)(a4))->v) = 0x1;
        (((struct o7222_uchar *)(a4))->v) = 0x1;
        (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
        return ((int (*)(int, int, int, int))(0xC08831C))(a4, a5, a6, a7);
    }
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x61);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x10;
    (((struct oF0_ushort *)(a4))->v) = 0x1;
    if ((0xF0 & ((((struct o2DC_int *)(a4))->v))) != 0) {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    }
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    fx_spawn_03e354(a4, ((((struct oF0_short *)(a4))->v)));
    return fx_spawn_03ef18(a4, ((((struct oF0_short *)(a4))->v)));
}

int pl_valgas_attack_type4(int a4)
{
    int stk[8];
    register int t0;
    register int t8;
    int t23;
    register int t38;
    register int t37;
    register int t41;
    float u36;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            pl_end_action_choose_state(a4);
            (((struct o48_float *)(a4))->v) = ((((struct o18_float *)(((unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C) + (0xC339540 + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)))))->v));
            return 0x48;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        *(volatile short *)((a4 + 0xEC));
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 11) {
            *(int *)((int)stk + 16) = 0xC15056C;
            *(int *)((int)stk + 12) = 0xC150560;
            *(int *)((int)stk + 8) = 0x52;
            *(int *)((int)stk + 4) = 0x1A;
            *(int *)((int)stk + 0) = 0x2;
            t8 = *(signed char *)((a4 + 0x3));
            (((struct o14_uchar *)(((int)stk + 0)))->v) = t8;
            FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x0, 0xE, ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x2, 0x1A, 0x52, 0xC150560, 0xC15056C);
        }
        if (((((struct oEC_short *)(a4))->v)) == 23) {
            snd_play_char_voice(a4, 0x32);
        }
        t23 = (((struct oEC_short *)(a4))->v);
        if ((t23 != 23) && ((t23 != 25) && (t23 != 27))) {
        } else {
            fx_spawn_35(a4, (*(signed char *)((a4 + 0xEE))));
            (((struct oEE_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xEE))) + 0x1);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        t38 = 0x274;
        if (((*(signed char *)((a4 + 0x71AA))) == 0) && (u36 = (((struct o274_float *)(a4))->v), !(u36 > 0.0f))) {
        } else {
            t37 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t37 + 0x1);
            t38 = (t37 + 0x1);
        }
        return t38;
    }
    t41 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t41 - 240.0f);
    if ((int)(short)(int)((float)t41 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 16.0f);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 16.0f);
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) / 8.0f);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) / 64.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    return 0xEE;
}

int pl_valgas_attack_type6(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                (((struct o7223_uchar *)(a4))->v) = 0x0;
                return pl_end_action_choose_state(a4);
            }
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            t0 = 0x71AA;
            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                t1 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 18) {
            pl_start_hit_freeze(a4);
        }
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 24) {
            (((struct o710B_uchar *)(a4))->v) = 0x1;
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x2;
            fx_thrown_object_create(a4, 0x0);
        }
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x4;
            fx_burst_create(a4, 0x0);
        }
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            snd_play_char_voice(a4, 0x33);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            t0 = FUN_0c0555c4();
            t1 = t0;
            if (t0 == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                pl_start_motion(a4, 0x1, 0x6C);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o710B_uchar *)(a4))->v) = 0x0;
                (((struct o710C_uchar *)(a4))->v) = 0x0;
                t1 = 0x710C;
            }
            t0 = t1;
        } else {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            pl_start_motion(a4, 0x1, 0x6C);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o710B_uchar *)(a4))->v) = 0x0;
            (((struct o710C_uchar *)(a4))->v) = 0x0;
            t0 = 0x710C;
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x6A);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x1D;
    (((struct oEE_ushort *)(a4))->v) = 0x22;
    (((struct oF0_ushort *)(a4))->v) = 0x27;
    (((struct oF2_ushort *)(a4))->v) = 0x78;
    return 0xF2;
}

int pl_valgas_attack_type1(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        switch (t0) {
        case 1:
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                fx_spawn_trail_chain(a4, 0x0);
                (((struct oEC_ushort *)(a4))->v) = 0x2F;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
            }
            break;
        case 2:
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0x1;
            }
            break;
        case 3:
            break;
        default:
            if (t0 != 4) {
                return t0;
            }
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            return pl_end_action_choose_state(a4);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        t0 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            t1 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x60);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x12;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    fx_spawn_03e354(a4, 0x0);
    return fx_spawn_03ef18(a4, 0x0);
}

int FUN_0c0b3bd0(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t1 + 0x8))) != 0) && (t0 = *(signed char *)((a4 + 0x8)), t0 != 5)) {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
    }
    mdl_scroll_uv_by_speed(a4);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 == 5) {
                        return obj_destroy(a4);
                    }
                    return t0;
                }
                t0 = (((struct o2E0_int *)(a4))->v);
                u0 = (((struct o40_float *)(t0))->v);
                (((struct o40_float *)(t0))->v) = (u0 - 0.0166666657f);
                t0 = 0x40;
                if (!((u0 - 0.0166666657f) > 0.0f)) {
                    t2 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                return t0;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xEC;
            if ((short)(t0 - 1) != 0) {
            } else {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            return t2;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        t0 = (((struct o2E0_int *)(a4))->v);
        t2 = *(signed char *)((((((struct o308_int *)(t1))->v)) + 0x2));
        (((struct oC_float *)(t0))->v) = (*(float *)((0xC153008 + (signed char)((((t2 - 8) << 1) + (t2 - 8)) << 2))));
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        *(unsigned int *)((t0 + 0x18)) = 0x4000;
        (((struct o24_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o20_float *)(t0))->v) = 0.5f;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        (((struct o40_float *)(t0))->v) = 0.699999988f;
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t0))->v) = (*(float *)(((((((-((((struct oEC_short *)(a4))->v))) + 0x1E) << 2) << 1) + 0xC33A804) + 0x0)));
    (((struct o8_float *)(t0))->v) = ((((struct o4_float *)((0xC33A804 + ((((-((((struct oEC_short *)(a4))->v))) + 0x1E) << 2) << 1))))->v));
    *(unsigned int *)((t0 + 0x18)) = (int)((float)(*(int *)((t0 + 0x18))) - 546.133301f);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0166666657f);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x2);
        (((struct oEC_ushort *)(a4))->v) = 0x21C;
    }
    return 0xEC;
}
