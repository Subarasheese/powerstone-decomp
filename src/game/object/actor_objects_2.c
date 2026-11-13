/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 2 of 6 of the same module) (0c08a7d4-0c08bf90) */

int FUN_0c08a9a8(int a4, int a5, int a6, int a7);
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int FUN_0c0421ee(int, int);
int math_mat_transform_point(int, int);
int FUN_0c08b7d6(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_motion_translation(int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3d5c(int, int);
struct o7223_uchar { char p[0x7223]; unsigned char v; };
int pl_end_action_reset(int);
int math_vec3_sub(int, int, int);
int math_atan_angle16(float);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
float math_vec3_length(int);
struct o24_float { char p[0x24]; float v; };
struct o7244_int { char p[0x7244]; int v; };
struct o7244_uint { char p[0x7244]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_03fd08(int);
int FUN_0c0c9834(int, int);
int FUN_0c0ca268(int, int);
float math_signed_sqrt(float);
float math_rand_float(void);
int _modlu(void);
extern int _quick_odd_mvn();
struct o720A_uchar { char p[0x720A]; unsigned char v; };
int pl_get_hit_count_of_opponent(int);
int FUN_0c0a2830(int, int, int, int, int, int);
int FUN_0c08b9c2(int);
int FUN_0c08bbce(int);

int FUN_0c08a846(int a4);
int pl_rel_angle_to_linked(int a4);
int FUN_0c08b81e(int a4);
int FUN_0c08b844(int a4);
int FUN_0c08b8b8(int a4);
int FUN_0c08b8fc(int a4);
int FUN_0c08b96e(int a4);
int FUN_0c08bab6(int a4);
int FUN_0c08bb22(int a4);
int FUN_0c08bb46(int a4);
int FUN_0c08bb84(int a4);
int FUN_0c08bc16(int a4);
int FUN_0c08bcd4(int a4);
int FUN_0c08bd78(int a4);
int FUN_0c08bde8(int a4);
int FUN_0c08bea0(int a4);
int FUN_0c08bef8(int a4);
int FUN_0c08bf28(int a4, int a5, int a6, int a7);

int FUN_0c08a7d4(int a4, int a5)
{
    int stk[3];
    register int t0;

    t0 = 0x8;
    if ((signed char)a5 != 0) {
        t0 = 0xC;
    }
    FUN_0c0a3d5c((*(signed char *)((a4 + 0x3))), 0x2);
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = (*(float *)0xC08A90C);
    *(float *)(((int)stk + 8)) = 0.0f;
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (short)((short)t0 * (short)0xB0)));
    *(float *)(((int)stk + 4)) = 0.0f;
    return (FUN_0c0421ee(((int)stk + 0), 0x2));
}

int FUN_0c08a842(int a4)
{
    return FUN_0c08a846(a4);
}

int FUN_0c08a846(int a4)
{
    int stk[3];
    register int t8;
    register int t10;
    register int t11;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    if ((*(float *)(((int)stk + 8))) == 0.0f) {
        *(float *)(((int)stk + 8)) = (*(float *)0xC08A91C);
    }
    t8 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
    t10 = *(int *)((a4 + 0x30));
    t11 = t8;
    if (0.0f > (*(float *)(((int)stk + 8)))) {
        t11 = (t8 + 0x8000);
    }
    if ((int)(unsigned short)(t11 - t10) >= (int)0x8000) {
        return 0x0;
    }
    return 0x1;
}

int pl_rel_angle_to_linked(int a4)
{
    int stk[3];
    register int t7;
    register int t10;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    if ((*(float *)(((int)stk + 8))) == 0.0f) {
        *(float *)(((int)stk + 8)) = 9.99999975e-05f;
    }
    t7 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
    t10 = t7;
    if (0.0f > (*(float *)(((int)stk + 8)))) {
        t10 = (t7 + 0x8000);
    }
    return (unsigned short)(t10 - (*(int *)((a4 + 0x30))));
}

int FUN_0c08a928(int a4)
{
    int stk[3];
    register float t2;
    register int t11;
    register int t14;

    math_vec3_sub(((int)stk + 0), ((*(int *)((a4 + 0x1C))) + 0x20), (a4 + 0x20));
    *(float *)(((int)stk + 4)) = 0.0f;
    t2 = math_vec3_length(((int)stk + 0));
    if (((((struct o0_float *)0xC08AA08)->v)) > t2) {
        if ((*(float *)(((int)stk + 8))) == 0.0f) {
            *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC08AA08)->v));
        }
        t11 = math_atan_angle16(((*(float *)(((int)stk + 0))) / (*(float *)(((int)stk + 8)))));
        t14 = t11;
        if (0.0f > (*(float *)(((int)stk + 8)))) {
            t14 = (t11 + 0x8000);
        }
        if ((int)(unsigned short)((unsigned short)(t14 - (*(int *)((a4 + 0x30)))) + 0x2000) <= (int)0x4000) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


int FUN_0c08b81e(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    pl_start_motion(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08b844(int a4)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t18;
    register int t17;
    int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        if (((signed char)t1 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x32);
            t6 = *(int *)((a4 + 0x1C));
            (((struct o71A9_uchar *)(t6))->v) = 0x1;
            (((struct o71A8_uchar *)(t6))->v) = 0x1;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            FUN_0c0a2830(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
            FUN_0c08b7d6(a4);
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t18 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int FUN_0c08b8b8(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c08b8fc(int a4)
{
    register int t12;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    FUN_0c08b7d6(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x3E) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x30);
        t12 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t12))->v) = 0x1;
        (((struct o71A8_uchar *)(t12))->v) = 0x1;
        return obj_place_linked_ahead(a4, 0x0, (*(float *)0xC08BA2C));
    }
    return 0x719E;
}

int FUN_0c08b96e(int a4)
{
    int stk[6];

    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((((struct o0_float *)0xC08BA34)->v));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC08BA34)->v));
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x2C0));
    return (fx_spawn_hit_effect(((int)stk + 0), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x6, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c08bab6(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 16) {
        snd_play_side_se((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x14);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
        obj_set_owner_hit_record(a4, 0x32);
        FUN_0c08b96e(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 104) {
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08bb22(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c08bb46(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c08bb84(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return FUN_0c08bb46(a4);
                            }
                            return FUN_0c08bb22(a4);
                        }
                        return FUN_0c08bab6(a4);
                    }
                    return FUN_0c08b9c2(a4);
                }
                return FUN_0c08b8fc(a4);
            }
            return FUN_0c08b8b8(a4);
        }
        return FUN_0c08b844(a4);
    }
    return FUN_0c08b81e(a4);
}

int FUN_0c08bc16(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c08bcd4(int a4)
{
    register int t12;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    FUN_0c08bbce(a4);
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x3E) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x1);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
        t12 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t12))->v) = 0x1;
        (((struct o71A8_uchar *)(t12))->v) = 0x1;
        return obj_place_linked_ahead(a4, 0x0, 150.0f);
    }
    return 0x719E;
}

int FUN_0c08bd78(int a4)
{
    int stk[3];

    FUN_0c0a3d5c((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x2);
    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xB);
    FUN_0c0a3762((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x3);
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = 50.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    math_mat_transform_point(((int)stk + 0), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x840));
    *(float *)(((int)stk + 4)) = 0.0f;
    return (FUN_0c0421ee(((int)stk + 0), 0x2));
}

int FUN_0c08bde8(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    t0 = (((struct o719E_short *)(a4))->v);
    if (((unsigned short)t0 == 66) || ((unsigned short)t0 == 123)) {
        obj_set_owner_hit_record(a4, 0x33);
        FUN_0c08bd78(a4);
    }
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x4, 0x5);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x34);
        t1 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t1))->v) = 0x1;
        (((struct o71A8_uchar *)(t1))->v) = 0x1;
        t0 = 0x71A8;
    }
    return t0;
}

int FUN_0c08bea0(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 26) {
        obj_set_owner_hit_record(a4, 0x33);
        FUN_0c08bd78(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 107) {
        obj_set_owner_hit_record(a4, 0x31);
        obj_force_owner_state27(a4, 0x31);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08bef8(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c08bf28(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC08BF1C))(a4, a5, a6, a7);
                            }
                            return FUN_0c08bef8(a4);
                        }
                        return FUN_0c08bea0(a4);
                    }
                    return FUN_0c08bde8(a4);
                }
                return FUN_0c08bcd4(a4);
            }
            return ((int (*)(int, int, int, int))(0xC08BCC8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08BC54))(a4, a5, a6, a7);
    }
    return FUN_0c08bc16(a4);
}
