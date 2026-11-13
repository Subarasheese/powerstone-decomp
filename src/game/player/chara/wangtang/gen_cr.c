/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
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
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c03c9f2(int);
int FUN_0c09d710(int, int, float);
int fx29_spawn_burst8(int, int);
int fx_spawn_03cb28(int, int);
int fx_spawn_30(int);
int fx_spawn_with_params(int, float, float, float, float);
float math_cos_angle16(int);
extern float math_rand_float();
float math_sin_angle16(int);
int obj_set_record_char(int, int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_gravity(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int);
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
int pl_no_ground(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int snd_play_char_voice(int, int);
int FUN_0c0827dc(int a4);
int FUN_0c081bd8(int a4);
int FUN_0c0825ee(int a4);
int FUN_0c082058(int a4);
int FUN_0c082c2a(int a4);
int FUN_0c081db2(int a4);
float FUN_0c08222c(int a4);
int FUN_0c06e7d4(int a4);
int FUN_0c06e704(int a4);
int FUN_0c06e59c(int a4);
int FUN_0c06e49c(int a4);
int FUN_0c082504(int a4);
int FUN_0c06e668(int a4);
int FUN_0c08258e(int a4);
int FUN_0c082b90(int a4);
int FUN_0c06e444(int a4);
int FUN_0c082aac(int a4);
int FUN_0c082490(int a4);
int FUN_0c082a5c(int a4);
int FUN_0c081fa4(int a4);
int FUN_0c0823f8(int a4);
int FUN_0c082dec(int a4);
int FUN_0c082afe(int a4);
int FUN_0c082bec(int a4);
int FUN_0c06e904(int a4);
int FUN_0c0829da(int a4);
int FUN_0c081fec(int a4);
int FUN_0c082440(int a4);
int FUN_0c082e34(int a4);
int FUN_0c082a0c(int a4);

int FUN_0c0827dc(int a4)
{
    int stk[3];
    register int t12;
    register int t68;
    register int t13;
    register float t14;
    register float u17;
    register int t19;
    register float u22;
    register float t26;
    register float u29;
    register int t31;
    register float u34;
    register int t40;
    register float t42;
    register float u45;
    register int t47;
    register float u50;
    register float t54;
    register float u57;
    register int t59;
    register float u62;
    register int t67;

    (((struct o106_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xFFFFFFFF;
    pl_step_motion(a4);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) == 90) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        *(unsigned char *)((a4 + 0xB)) = 0x0;
    }
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x3C) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x1)) = 0x0;
    }
    t12 = (((struct oEC_short *)(a4))->v);
    t68 = t12;
    if (t12 != 60) {
    } else {
        t13 = 0x4;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x20)); }
            t14 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
            u17 = (t14 * 255.0f);
            if (!(2.14748365e+09f > (t14 * 255.0f))) {
                u17 = (((t14 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t19 = (int)((unsigned int)(int)u17 % (unsigned int)0x32);
            u22 = (float)t19;
            if ((int)t19 < 0) {
                u22 = ((float)t19 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u22);
            t26 = ((float (*)(void))(math_rand_float))();
            u29 = (t26 * 255.0f);
            if (!(2.14748365e+09f > (t26 * 255.0f))) {
                u29 = (((t26 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t31 = (int)((unsigned int)(int)u29 % (unsigned int)0x32);
            u34 = (float)t31;
            if ((int)t31 < 0) {
                u34 = ((float)t31 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u34);
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
            fx_spawn_with_params(((int)stk + 0), 1.0f, 1.0f, 1.0f, 4.0f);
            t13 = (t13 - 0x1);
            if (t13 == 0) {
                break;
            }
        }
        t40 = 0x4;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)); }
            t42 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
            u45 = (t42 * 255.0f);
            if (!(2.14748365e+09f > (t42 * 255.0f))) {
                u45 = (((t42 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t47 = (int)((unsigned int)(int)u45 % (unsigned int)0x32);
            u50 = (float)t47;
            if ((int)t47 < 0) {
                u50 = ((float)t47 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u50);
            t54 = ((float (*)(void))(math_rand_float))();
            u57 = (t54 * 255.0f);
            if (!(2.14748365e+09f > (t54 * 255.0f))) {
                u57 = (((t54 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t59 = (int)((unsigned int)(int)u57 % (unsigned int)0x32);
            u62 = (float)t59;
            if ((int)t59 < 0) {
                u62 = ((float)t59 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u62);
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
            t67 = fx_spawn_with_params(((int)stk + 0), 1.0f, 1.0f, 1.0f, 4.0f);
            t40 = (t40 - 0x1);
            if (t40 == 0) {
                break;
            }
        }
        t68 = t67;
    }
    return t68;
}

int FUN_0c081bd8(int a4)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t12;
    register float t13;
    register float u16;
    register int t18;
    register float u21;
    register float t25;
    register float u28;
    register int t30;
    register float u33;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t1 - 240.0f);
    if ((int)(short)(int)((float)t1 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    t3 = pl_angle_to_opponent(a4);
    *(unsigned int *)((a4 + 0x30)) = t3;
    (((struct o38_float *)(a4))->v) = ((math_sin_angle16(t3)) * 17.0f);
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 17.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 100.0f);
    (((struct o3C_float *)(a4))->v) = -10.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x64);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x19);
    snd_play_char_voice(a4, 0x35);
    fx_spawn_03cb28(a4, 0x0);
    t12 = 0x4;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x20)); }
        t13 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
        u16 = (t13 * 255.0f);
        if (!(2.14748365e+09f > (t13 * 255.0f))) {
            u16 = (((t13 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t18 = (int)((unsigned int)(int)u16 % (unsigned int)0x32);
        u21 = (float)t18;
        if ((int)t18 < 0) {
            u21 = ((float)t18 + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u21);
        t25 = ((float (*)(void))(math_rand_float))();
        u28 = (t25 * 255.0f);
        if (!(2.14748365e+09f > (t25 * 255.0f))) {
            u28 = (((t25 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t30 = (int)((unsigned int)(int)u28 % (unsigned int)0x32);
        u33 = (float)t30;
        if ((int)t30 < 0) {
            u33 = ((float)t30 + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u33);
        fx_spawn_with_params(((int)stk + 0), 1.0f, 1.0f, 1.0f, 4.0f);
        t12 = (t12 - 0x1);
        if (t12 == 0) {
            break;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    return (obj_set_record_char(a4, 0x73));
}

int FUN_0c0825ee(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    pl_step_motion(a4);
    if ((*(signed char *)((a4 + 0xB))) == 0) {
        t2 = (((struct oEC_short *)(a4))->v);
        t3 = t2;
        if (t2 != 5) {
        } else {
            pl_start_hit_freeze(a4);
            t2 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
            t3 = (t2 + 0x1);
        }
        t2 = t3;
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 8) {
            snd_play_char_voice(a4, 0x34);
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x888);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x5) {
            if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x8)) == 0) {
                fx_spawn_30(a4);
            }
        }
        t3 = pl_no_ground(a4);
        if (t3 != 0) {
            pl_apply_gravity(a4);
        } else {
            t3 = FUN_0c09d710(a4, (0x7254 + a4), 60.0f);
            if ((signed char)t3 == 2) {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
            }
            if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                t3 = pl_stick_dir_angle(a4);
                t4 = *(int *)0xC7F31E0;
                (((struct o38_float *)(a4))->v) = ((math_sin_angle16((t4 + t3))) * 5.0f);
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = ((math_cos_angle16((t4 + t3))) * 5.0f);
            } else {
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
            }
        }
        if (((*(signed char *)((a4 + 0x108))) != 0) && (t2 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t2 + 0x4)), t1 != 10)) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            pl_start_motion(a4, 0x1, 0x6B);
            snd_play_char_voice(a4, 0x1C);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            FUN_0c03c9f2(a4);
            (((struct o106_uchar *)(a4))->v) = 0xFFFFFFFF;
            (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xFFFFFFFF;
            t2 = 0x106;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            t3 = t1;
            if (t1 == 120) {
                *(unsigned char *)((a4 + 0xA)) = 0x63;
                *(unsigned char *)((a4 + 0xB)) = 0x0;
                t3 = 0x0;
            }
            t2 = t3;
        }
    }
    return t2;
}

int FUN_0c082058(int a4)
{
    int stk[3];
    register int t1;
    register int t14;
    register float t15;
    register float u18;
    register int t20;
    register float u23;
    register float t27;
    register float u30;
    register int t32;
    register float u35;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t1 - 240.0f);
    if ((int)(short)(int)((float)t1 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x1555);
    (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 17.0f);
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 17.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -0.5f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x66);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x19);
    snd_play_char_voice(a4, 0x35);
    fx_spawn_03cb28(a4, 0x1);
    t14 = 0x4;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x20)); }
        t15 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
        u18 = (t15 * 255.0f);
        if (!(2.14748365e+09f > (t15 * 255.0f))) {
            u18 = (((t15 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t20 = (int)((unsigned int)(int)u18 % (unsigned int)0x32);
        u23 = (float)t20;
        if ((int)t20 < 0) {
            u23 = ((float)t20 + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u23);
        t27 = ((float (*)(void))(math_rand_float))();
        u30 = (t27 * 255.0f);
        if (!(2.14748365e+09f > (t27 * 255.0f))) {
            u30 = (((t27 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t32 = (int)((unsigned int)(int)u30 % (unsigned int)0x32);
        u35 = (float)t32;
        if ((int)t32 < 0) {
            u35 = ((float)t32 + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u35);
        fx_spawn_with_params(((int)stk + 0), 1.0f, 1.0f, 1.0f, 4.0f);
        t14 = (t14 - 0x1);
        if (t14 == 0) {
            break;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    return (obj_set_record_char(a4, 0x74));
}

int FUN_0c082c2a(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((((struct o38_float *)(a4))->v)) > 10.0f) {
        (((struct o38_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o38_float *)(a4))->v))) {
        (((struct o38_float *)(a4))->v) = -10.0f;
    }
    if (((((struct o3C_float *)(a4))->v)) > 10.0f) {
        (((struct o3C_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o3C_float *)(a4))->v))) {
        (((struct o3C_float *)(a4))->v) = -10.0f;
    }
    if (((((struct o40_float *)(a4))->v)) > 10.0f) {
        (((struct o40_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o40_float *)(a4))->v))) {
        (((struct o40_float *)(a4))->v) = -10.0f;
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = pl_stick_dir_angle(a4);
        t1 = *(int *)0xC7F31E0;
        (((struct o44_float *)(a4))->v) = ((math_sin_angle16((t1 + t0))) * 1.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16((t1 + t0))) * 1.0f);
    } else {
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        u0 = (((struct o38_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o38_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o38_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 0.5f);
                }
            }
        }
        u0 = (((struct o3C_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o3C_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + 0.5f);
                }
            }
        }
        u0 = (((struct o40_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o40_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o40_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                }
            }
        }
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = 0xEC;
    if (((((struct oEC_short *)(a4))->v)) == 0xB4) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x0, 0x8);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = (*(float *)0xC082E94);
        t0 = 0x48;
    }
    return t0;
}

int FUN_0c081db2(int a4)
{
    int stk[3];
    register int t11;
    register int t18;
    register int t53;
    register int t27;
    register float t28;
    register float u31;
    register int t33;
    register float u36;
    register float t40;
    register float u43;
    register int t45;
    register float u48;
    register int t52;
    int t8;
    register int t19;
    int t20;

    pl_apply_acceleration(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (((((struct o3C_float *)(a4))->v)) > 20.0f) {
        (((struct o48_float *)(a4))->v) = 0.0f;
    }
    if (((*(signed char *)((a4 + 0x108))) != 0) && (t8 = (((struct oEE_short *)(a4))->v), (int)t8 < (int)0x3)) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        t11 = 0x73;
        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x2) {
            t11 = 0x7A;
        }
        obj_set_record_char(a4, t11);
    }
    t18 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t18 - 1);
    t53 = 0x2D8;
    if (((short)(t18 - 1) != 0) && ((t19 = (((struct oEE_short *)(a4))->v), (int)t19 < (int)0x3) && (t20 = *(signed char *)((a4 + 0x2D8)), t20 == 0))) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x1, 0x65);
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o38_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x30))))) * 5.0f));
        (((struct o40_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x30))))) * 5.0f));
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 15.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        t27 = 0x4;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x20)); }
            t28 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
            u31 = (t28 * 255.0f);
            if (!(2.14748365e+09f > (t28 * 255.0f))) {
                u31 = (((t28 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t33 = (int)((unsigned int)(int)u31 % (unsigned int)0x32);
            u36 = (float)t33;
            if ((int)t33 < 0) {
                u36 = ((float)t33 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u36);
            t40 = ((float (*)(void))(math_rand_float))();
            u43 = (t40 * 255.0f);
            if (!(2.14748365e+09f > (t40 * 255.0f))) {
                u43 = (((t40 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t45 = (int)((unsigned int)(int)u43 % (unsigned int)0x32);
            u48 = (float)t45;
            if ((int)t45 < 0) {
                u48 = ((float)t45 + 4.2949673e+09f);
            }
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u48);
            t52 = fx_spawn_with_params(((int)stk + 0), 1.0f, 1.0f, 1.0f, 4.0f);
            t27 = (t27 - 0x1);
            if (t27 == 0) {
                break;
            }
        }
        t53 = t52;
    }
    return t53;
}

float FUN_0c08222c(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register float F0;
    register float F1;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    pl_apply_acceleration(v0_1);
    pl_apply_velocity(v0_1);
    pl_step_motion(v0_1);
    v0_0 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x108))) == 0)) goto L_C082298;
    v0_3 = (0xEE);
    if (((int)((((struct oEE_short *)(v0_0))->v)) >= (int)0x3)) goto L_C0822AA;
    *(unsigned short *)((v0_0 + v0_3)) = ((*(short *)((v0_0 + v0_3))) + 0x1);
    v0_1 = (v0_0);
    if (((int)(*(short *)((v0_0 + v0_3))) < (int)0x2)) goto L_C082290;
    v0_2 = (0x7B);
    L_C082292:;
    obj_set_record_char(v0_1, v0_2);
    L_C082298:;
    if (((int)((((struct oEE_short *)(v0_0))->v)) >= (int)0x3)) goto L_C0822AA;
    v0_3 = (0x2D8);
    if (((*(signed char *)((v0_0 + 0x2D8))) == 0)) goto L_C0823A0;
    L_C0822AA:;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    pl_start_motion(v0_0, 0x1, 0x65);
    *(unsigned int *)((v0_0 + 0x2C)) = 0x0;
    (((struct o38_float *)(v0_0))->v) = (-((math_sin_angle16((*(int *)((v0_0 + 0x30))))) * 5.0f));
    (((struct o40_float *)(v0_0))->v) = (-((math_cos_angle16((*(int *)((v0_0 + 0x30))))) * 5.0f));
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o3C_float *)(v0_0))->v) = 15.0f;
    (((struct o48_float *)(v0_0))->v) = -1.0f;
    v0_3 = (0xC0823E4);
    v0_1 = (0xC042EAC);
    v0_1 = (0x4);
    v0_2 = (0xC0DF940);
    v0_2 = (0x32);
    w0_0 = (4.0f);
    w0_1 = (255.0f);
    w0_2 = (1.0f);
    L_C08230E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x20)); }
    w0_5 = ((float (*)(Stk3))(math_rand_float))(*(Stk3 *)(((int)stk + 0)));
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_1))) goto L_C082330;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C082330:;
    v0_3 = (int)((unsigned int)(int)w0_3 % (unsigned int)v0_2);
    w0_3 = ((float)v0_3);
    FPUL_ = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C08234E;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C08234E:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + w0_3);
    w0_5 = ((float (*)(void))(math_rand_float))();
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_1))) goto L_C082368;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C082368:;
    v0_3 = (int)((unsigned int)(int)w0_3 % (unsigned int)v0_2);
    w0_3 = ((float)v0_3);
    FPUL_ = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C082386;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C082386:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_3);
    v0_4 = (v0_1 - 0x1) != 0;
    v0_3 = ((fx_spawn_with_params(((int)stk + 0), w0_2, w0_2, w0_2, w0_0)));
    v0_1 = ((v0_1 - 0x1));
    if (v0_4) goto L_C08230E;
    L_C0823A0:;
    return F0;
    L_C082290:;
    v0_2 = (0x74);
    goto L_C082292;
}

int FUN_0c06e7d4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (((((struct o0_float *)0xC06E950)->v)) > (*(float *)0xC494D1C)) {
        u0 = (((struct o8_float *)0xC06E950)->v);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / u0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
    }
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o18_float *)0xC06E950)->v)));
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o18_float *)0xC06E950)->v)));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = ((((struct o20_float *)0xC06E950)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o24_float *)0xC06E950)->v));
            pl_start_motion(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int FUN_0c06e704(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0x6, 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_step_motion(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    if (((((struct o0_float *)0xC06E808)->v)) > (*(float *)0xC494D1C)) {
        u0 = (((struct o8_float *)0xC06E808)->v);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / u0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            pl_start_motion(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            obj_set_record_char(a4, 0x58);
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int FUN_0c06e59c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0x6, 0x0);
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (((((struct o0_float *)0xC06E6E8)->v)) > (*(float *)0xC494D1C)) {
        u0 = (((struct o8_float *)0xC06E6E8)->v);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / u0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
    }
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            (((struct o3C_float *)(a4))->v) = ((((struct o10_float *)0xC06E6E8)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o14_float *)0xC06E6E8)->v));
            pl_start_motion(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x18;
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int FUN_0c06e49c(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0x6, 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_step_motion(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    if (200.0f > (*(float *)0xC494D1C)) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            pl_start_motion(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
    }
    return t0;
}

int FUN_0c082504(int a4)
{
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) == 31) {
        fx29_spawn_burst8(a4, 0x0);
        snd_play_char_voice(a4, 0x36);
    }
    if (((((struct oEC_short *)(a4))->v)) == 19) {
        snd_play_char_voice(a4, 0x1B);
    }
    if (((((struct oEC_short *)(a4))->v)) == 18) {
        pl_start_hit_freeze(a4);
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x50) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}

int FUN_0c06e668(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08258e(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x67);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1B);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct o108_uchar *)(a4))->v) = 0x0;
    return 0x108;
}

int FUN_0c082b90(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x6A);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1C);
    snd_play_char_voice(a4, 0x38);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    return 0xEC;
}

int FUN_0c06e444(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC06E570)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC06E570)->v));
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c082aac(int a4)
{
    register int t12;
    register int t15;

    pl_step_motion(a4);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) == 18) {
        pl_start_hit_freeze(a4);
    }
    if (((((struct oEC_short *)(a4))->v)) == 19) {
        snd_play_char_voice(a4, 0x1B);
    }
    t12 = (((struct oEC_short *)(a4))->v);
    t15 = t12;
    if (t12 == 72) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = (*(float *)0xC082B7C);
        t15 = 0x48;
    }
    return t15;
}

int FUN_0c082490(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x69);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1C);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    return 0xEC;
}

int FUN_0c082a5c(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x6A);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1C);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    return 0xEC;
}

int FUN_0c081fa4(int a4)
{
    register int t4;

    pl_apply_acceleration(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            return pl_start_motion(a4, 0x0, 0x9);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c0823f8(int a4)
{
    register int t4;

    pl_apply_acceleration(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            return pl_start_motion(a4, 0x0, 0x9);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c082dec(int a4)
{
    register int t4;

    pl_apply_acceleration(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            return pl_start_motion(a4, 0x0, 0x9);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c082afe(int a4)
{
    register int t4;

    pl_apply_acceleration(a4);
    pl_apply_velocity(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            (((struct o7223_uchar *)(a4))->v) = 0x0;
            return pl_end_action_choose_state(a4);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c082bec(int a4)
{
    register int t3;
    register int t6;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_step_motion(a4);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t3 = (((struct oEC_short *)(a4))->v);
    t6 = t3;
    if (t3 == 18) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_hit_freeze(a4);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        t6 = 0xEC;
    }
    return t6;
}

int FUN_0c06e904(int a4)
{
    register int t3;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = pl_landed(a4);
    if ((signed char)t3 != 0) {
        return pl_change_state(a4, 0x6, 0x0);
    }
    return (signed char)t3;
}

int FUN_0c0829da(int a4)
{
    (((struct o106_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xFFFFFFFF;
    (((struct o720A_uchar *)(a4))->v) = 0x0;
    pl_enter_state_27_28(a4, 0x3);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x1)) = 0x0;
    return 0x0;
}

int FUN_0c081fec(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c082440(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c082e34(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c082a0c(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}
