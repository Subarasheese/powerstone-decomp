/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3544-0c0c571c) */

int FUN_0c0c3ab2(int a4, int a5, int a6, int a7);
struct Vec3i { int x, y, z; };
struct at_20_float { char pad[0x20]; float field_20; };
struct at_24_float { char pad[0x24]; float field_24; };
struct at_28_float { char pad[0x28]; float field_28; };
struct at_4_float { char pad[0x4]; float field_4; };
struct at_8_float { char pad[0x8]; float field_8; };
struct at_c_float { char pad[0xC]; float field_c; };
struct at_ee_short { char pad[0xEE]; short field_ee; };
struct at_ee_ushort { char pad[0xEE]; unsigned short field_ee; };
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);
struct v3 { int x, y, z; };
struct pos_x_float { char pad[0x20]; float value; };
struct pos_y_float { char pad[0x24]; float value; };
struct pos_z_float { char pad[0x28]; float value; };
struct fld4_float { char pad[0x4]; float value; };
struct fld8_float { char pad[0x8]; float value; };
struct fldC_float { char pad[0xC]; float value; };
struct fldEE_short { char pad[0xEE]; short value; };
struct fldEE_ushort { char pad[0xEE]; unsigned short value; };
struct at_10_float { char pad[0x10]; float field_10; };
struct at_0_float { float field_0; };
struct at_14_float { char pad[0x14]; float field_14; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct pos_x_float_r10 { char p[0x20]; float pos_x; };
struct pos_y_float_r11 { char p[0x24]; float pos_y; };
struct pos_z_float_r12 { char p[0x28]; float pos_z; };
struct child1_int { char p[0x2E4]; int child1; };
struct target_x_float { char p[0x38]; float target_x; };
struct target_y_float { char p[0x3C]; float target_y; };
struct target_z_float { char p[0x40]; float target_z; };
struct scale_x_float { char p[0x50]; float scale_x; };
struct scale_y_float { char p[0x54]; float scale_y; };
struct scale_z_float { char p[0x58]; float scale_z; };
struct timer_a_ushort { char p[0xF0]; unsigned short timer_a; };
struct timer_b_short { char p[0xF2]; short timer_b; };
struct timer_b_ushort { char p[0xF2]; unsigned short timer_b; };
int pl_angle_to_opponent(int);
int snd_play_char_voice(int, int);
int FUN_0c0c3408(int, int);
int fx31_steer_toward_target(int, int);
int fx_spawn_33(int, int, int, int);
int cam_set_shake_ramp(int, int);
struct V { float x, y, z; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int FUN_0c0c339a(int);
int fx31_spin_kid_angles(int);
int fx31_mode_attack(int);
int fx31_mode_three(int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
extern int _quick_odd_mvn();
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_03(int, int, int, float);
extern int _modls();
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
float math_rand_float(void);
float math_tan_angle16(int);
int _modlu(void);
struct o0_float { float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
int snd_play_side_se(int, int);

int fx31_orbit_idle(int obj);
int fx31_pick_mode1_from_owner(int a4);
int fx31_pick_mode2_from_owner(int a4);
int fx31_pick_mode3_from_owner(int a4);
int fx31_mode_idle(int a4);
int fx31_mode_two(int a4);
int fx_spawn_32(int a4, int a5);

int fx31_orbit_idle(int obj)
{
    int frame[4];
    register int link_player;
    register float offset_y;

    link_player = *(signed char *)(((*(int *)((obj + 0x1C))) + 0x3));
    *(unsigned int *)(((int)frame + 0)) = ((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)frame + 0) + 0x4));
    *(struct Vec3i *)(obj + 0x2C) = *(struct Vec3i *)((*(int *)(obj + 0x1C)) + 0x2C);
    *(float *)(((int)frame + 4)) = ((*(float *)(((int)frame + 4))) - (((math_sin_angle16((*(int *)((obj + 0x30))))) * 50.0f)));
    *(float *)(((int)frame + 12)) = ((*(float *)(((int)frame + 12))) - (((math_cos_angle16((*(int *)((obj + 0x30))))) * 50.0f)));
    offset_y = 50.0f;
    offset_y = offset_y + 80.0f * (math_sin_angle16(((((struct at_ee_short *)(obj))->field_ee))));
    *(float *)(((int)frame + 8)) = ((*(float *)(((int)frame + 8))) + offset_y);
    (((struct at_ee_ushort *)(obj))->field_ee) = (((((struct at_ee_short *)(obj))->field_ee)) + 0x400);
    (((struct at_20_float *)(obj))->field_20) = (((((struct at_20_float *)(obj))->field_20)) + ((((((struct at_4_float *)(((int)frame + 0)))->field_4)) - ((((struct at_20_float *)(obj))->field_20))) / 20.0f));
    (((struct at_24_float *)(obj))->field_24) = (((((struct at_24_float *)(obj))->field_24)) + ((((((struct at_8_float *)(((int)frame + 0)))->field_8)) - ((((struct at_24_float *)(obj))->field_24))) / 20.0f));
    (((struct at_28_float *)(obj))->field_28) = (((((struct at_28_float *)(obj))->field_28)) + ((((((struct at_c_float *)(((int)frame + 0)))->field_c)) - ((((struct at_28_float *)(obj))->field_28))) / 20.0f));
    return 0x28;
}

int fx31_orbit_attack(int obj)
{
    int stack_args[4];
    register int tmp1;
    register float ftmp15;

    tmp1 = *(signed char *)(((*(int *)((obj + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stack_args + 0)) = ((unsigned short)((unsigned short)tmp1 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)tmp1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)tmp1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stack_args + 0) + 0x4));
    *(struct v3 *)(obj + 0x2C) = *(struct v3 *)((*(int *)(obj + 0x1C)) + 0x2C);
    *(float *)(((int)stack_args + 4)) = ((*(float *)(((int)stack_args + 4))) - (((math_sin_angle16((*(int *)((obj + 0x30))))) * 50.0f)));
    *(float *)(((int)stack_args + 12)) = ((*(float *)(((int)stack_args + 12))) - (((math_cos_angle16((*(int *)((obj + 0x30))))) * 50.0f)));
    ftmp15 = 50.0f;
    ftmp15 = ftmp15 + 80.0f * (math_sin_angle16(((((struct fldEE_short *)(obj))->value))));
    *(float *)(((int)stack_args + 8)) = ((*(float *)(((int)stack_args + 8))) + ftmp15);
    (((struct fldEE_ushort *)(obj))->value) = (((((struct fldEE_short *)(obj))->value)) + 0x400);
    (((struct pos_x_float *)(obj))->value) = (((((struct pos_x_float *)(obj))->value)) + ((((((struct fld4_float *)(((int)stack_args + 0)))->value)) - ((((struct pos_x_float *)(obj))->value))) / 20.0f));
    (((struct pos_y_float *)(obj))->value) = (((((struct pos_y_float *)(obj))->value)) + ((((((struct fld8_float *)(((int)stack_args + 0)))->value)) - ((((struct pos_y_float *)(obj))->value))) / 20.0f));
    (((struct pos_z_float *)(obj))->value) = (((((struct pos_z_float *)(obj))->value)) + ((((((struct fldC_float *)(((int)stack_args + 0)))->value)) - ((((struct pos_z_float *)(obj))->value))) / 20.0f));
    return 0x28;
}

int fx31_follow_phase_a(int obj)
{
    int frame[5];
    register int link;
    register int link_player;
    register int yaw;
    register float orbit_x;
    register float orbit_z;

    link = *(int *)((obj + 0x1C));
    *(unsigned int *)(((int)frame + 4)) = link;
    link_player = *(signed char *)((link + 0x3));
    *(unsigned int *)(((int)frame + 0)) = ((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)frame + 0) + 0x8));
    *(float *)(((int)frame + 12)) = ((*(float *)(((int)frame + 12))) + 50.0f);
    *(unsigned int *)((obj + 0x30)) = ((*(int *)((obj + 0x30))) + 0x400);
    yaw = *(int *)((obj + 0x30));
    *(unsigned int *)((obj + 0x30)) = (yaw & 0xFFFF);
    orbit_x = (*(float *)(((int)frame + 8)));
    orbit_x = orbit_x + 120.0f * (math_sin_angle16((yaw & 0xFFFF)));
    *(float *)(((int)frame + 8)) = orbit_x;
    orbit_z = (*(float *)(((int)frame + 16)));
    orbit_z = orbit_z + 120.0f * (math_cos_angle16((*(int *)((obj + 0x30)))));
    *(float *)(((int)frame + 16)) = orbit_z;
    (((struct at_20_float *)(obj))->field_20) = (((((struct at_20_float *)(obj))->field_20)) + ((((((struct at_8_float *)(((int)frame + 0)))->field_8)) - ((((struct at_20_float *)(obj))->field_20))) / 20.0f));
    (((struct at_24_float *)(obj))->field_24) = (((((struct at_24_float *)(obj))->field_24)) + ((((((struct at_c_float *)(((int)frame + 0)))->field_c)) - ((((struct at_24_float *)(obj))->field_24))) / 20.0f));
    (((struct at_28_float *)(obj))->field_28) = (((((struct at_28_float *)(obj))->field_28)) + ((((((struct at_10_float *)(((int)frame + 0)))->field_10)) - ((((struct at_28_float *)(obj))->field_28))) / 20.0f));
    return 0x28;
}

float fx31_follow_phase_b(int obj)
{
    int frame[5];
    register int link;
    register int link_player;
    register int yaw;
    register float orbit_x;
    register float radius;
    register float orbit_z;
    register float blend_div;

    link = *(int *)((obj + 0x1C));
    *(unsigned int *)(((int)frame + 4)) = link;
    link_player = *(signed char *)((link + 0x3));
    *(unsigned int *)(((int)frame + 0)) = ((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)link_player * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (((int)frame + 0) + 0x8));
    *(float *)(((int)frame + 12)) = ((*(float *)(((int)frame + 12))) + ((((struct at_0_float *)0xC0C3AE0)->field_0)));
    *(unsigned int *)((obj + 0x30)) = ((*(int *)((obj + 0x30))) + 0x800);
    yaw = *(int *)((obj + 0x30));
    *(unsigned int *)((obj + 0x30)) = (yaw & 0xFFFF);
    orbit_x = (*(float *)(((int)frame + 8)));
    orbit_x = orbit_x + ((((struct at_c_float *)0xC0C3AE0)->field_c)) * (math_sin_angle16((yaw & 0xFFFF)));
    *(float *)(((int)frame + 8)) = orbit_x;
    radius = (((struct at_c_float *)0xC0C3AE0)->field_c);
    orbit_z = (*(float *)(((int)frame + 16)));
    orbit_z = orbit_z + radius * (math_cos_angle16((*(int *)((obj + 0x30)))));
    *(float *)(((int)frame + 16)) = orbit_z;
    blend_div = (((struct at_14_float *)0xC0C3AE0)->field_14);
    (((struct at_20_float *)(obj))->field_20) = (((((struct at_20_float *)(obj))->field_20)) + ((((((struct at_8_float *)(((int)frame + 0)))->field_8)) - ((((struct at_20_float *)(obj))->field_20))) / blend_div));
    (((struct at_24_float *)(obj))->field_24) = (((((struct at_24_float *)(obj))->field_24)) + ((((((struct at_c_float *)(((int)frame + 0)))->field_c)) - ((((struct at_24_float *)(obj))->field_24))) / blend_div));
    (((struct at_28_float *)(obj))->field_28) = (((((struct at_28_float *)(obj))->field_28)) + ((((((struct at_10_float *)(((int)frame + 0)))->field_10)) - ((((struct at_28_float *)(obj))->field_28))) / blend_div));
    return radius;
}

int fx31_pick_mode1_from_owner(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) == 11) {
        if ((*(signed char *)(((a4 + 0x308) + 0x2))) == 0) {
            *(unsigned char *)(((a4 + 0x308) + 0x2)) = (*(signed char *)((t0 + 0x7223)));
        }
    } else {
        if ((*(signed char *)((t0 + 0x71BA))) == 28) {
            if ((*(signed char *)(((a4 + 0x308) + 0x2))) == 0) {
                *(unsigned char *)(((a4 + 0x308) + 0x2)) = 0x63;
            }
        } else {
            *(unsigned char *)(((a4 + 0x308) + 0x2)) = 0x0;
        }
    }
    return (*(signed char *)(((a4 + 0x308) + 0x2)));
}


int fx31_pick_mode2_from_owner(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x10A))) != 0) {
        return (*(signed char *)((t0 + 0x7213)));
    }
    return 0x0;
}

int fx31_pick_mode3_from_owner(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) == 21) {
        if ((int)(*(signed char *)((t0 + 0xB))) <= (int)0x1) {
            return 0x1;
        }
        return 0x2;
    }
    if ((*(signed char *)((t0 + 0x71BA))) == 33) {
        return 0x3;
    }
    return 0x0;
}

int fx31_mode_idle(int a4)
{
    register int t0;
    float u0;

    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    u0 = (((struct o50_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    u0 = (((struct o54_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o54_float *)(a4))->v) = 1.0f;
    }
    u0 = (((struct o58_float *)(a4))->v);
    if ((1.0999999f > u0) && (u0 > 0.899999976f)) {
        (((struct o58_float *)(a4))->v) = 1.0f;
    }
    if (((((struct o50_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o50_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    if (((((struct o54_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o54_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    if (((((struct o58_float *)(a4))->v)) != 1.0f) {
        u0 = (((struct o58_float *)(a4))->v);
        if (u0 > 1.0f) {
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
        } else {
            if (1.0f > u0) {
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
            }
        }
    }
    t0 = fx31_pick_mode1_from_owner(a4);
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x9)) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = t0;
    } else {
        t0 = fx31_pick_mode2_from_owner(a4);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x9)) = 0x2;
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            *(unsigned char *)((a4 + 0xB)) = t0;
        } else {
            t0 = fx31_pick_mode3_from_owner(a4);
            if (t0 != 0) {
                *(unsigned char *)((a4 + 0x9)) = 0x3;
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                *(unsigned char *)((a4 + 0xB)) = t0;
            }
        }
    }
    return fx31_orbit_idle(a4);
}

void fx31_thrown_update(int arg_obj)
{
    int frame_buf[10];

    register int spare_r1;
    register int spare_r2;
    register int spare_r3;
    register int spare_r5;
    register int spare_r6;
    register int spare_r7;
    register float spare_f0;
    register float spare_f2;
    register float spare_f3;
    register float spare_f6;
    register int spare_t;
    register int obj;
    register int flag;
    register int tmp_a;
    register int tmp_b;
    register int tmp_c;
    register int tmp_d;
    register float fval_a;
    register float fval_b;
    tmp_a = arg_obj;
    tmp_d = *(signed char *)((tmp_a + 0xC));
    tmp_b = (tmp_d);
    tmp_c = ((*(int *)((tmp_a + 0x1C))));
    flag = (0x0);
    obj = (tmp_a);
    if ((tmp_d == 0)) goto L_C0C4508;
    if ((tmp_b == 1)) goto L_C0C4518;
    L_C0C48BA:;
    return;
    L_C0C4518:;
    tmp_b = *(signed char *)((tmp_c + 0x3));
    *(unsigned int *)(((int)frame_buf + 0)) = ((unsigned short)((unsigned short)tmp_b * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)tmp_b * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)tmp_b * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (((int)frame_buf + 0) + 0x1C));
    *(struct V *)(obj + 0x38) = *(struct V *)(tmp_c + 0x20);
    (((struct target_y_float *)(obj))->target_y) = ((*(float *)(((int)frame_buf + 32))) + 100.0f);
    tmp_d = *(signed char *)((obj + 0xD));
    tmp_b = (tmp_d);
    fval_a = (100.0f);
    fval_b = (0.099999994f);
    if ((tmp_d == 0)) goto L_C0C4592;
    if ((tmp_b == 1)) goto L_C0C45C0;
    if ((tmp_b == 2)) goto L_C0C4658;
    if ((tmp_b != 3)) goto L_C0C457E;
    if (((*(signed char *)((obj + 0xE))) != 0)) goto L_C0C474C;
    *(unsigned char *)((obj + 0xE)) = ((*(signed char *)((obj + 0xE))) + 0x1);
    (((struct timer_a_ushort *)(obj))->timer_a) = 0x5;
    (((struct timer_b_ushort *)(obj))->timer_b) = 0x14;
    L_C0C474C:;
    fx31_steer_toward_target(obj, 0x3);
    tmp_d = (((struct timer_b_short *)(obj))->timer_b);
    (((struct timer_b_ushort *)(obj))->timer_b) = (tmp_d - 1);
    tmp_b = (0xF2);
    if (((short)(tmp_d - 1) != 0)) goto L_C0C47B0;
    *(unsigned short *)((obj + tmp_b)) = 0x14;
    tmp_d = *(short *)((obj + (tmp_b - 2)));
    *(unsigned short *)((obj + (tmp_b - 2))) = (tmp_d - 1);
    tmp_b = (0x20);
    if (((short)(tmp_d - 1) != 0)) goto L_C0C4780;
    *(unsigned char *)((obj + 0xD)) = ((*(signed char *)((obj + 0xD))) + 0x1);
    *(unsigned char *)((obj + 0xE)) = flag;
    L_C0C4780:;
    *(float *)(((tmp_b + obj) + 0x0)) = ((*(float *)(((tmp_b + obj) + 0x0))) - (((math_sin_angle16((*(int *)((obj + 0x30))))) * fval_a)));
    (((struct pos_z_float_r12 *)(obj))->pos_z) = (((((struct pos_z_float_r12 *)(obj))->pos_z)) - (((math_cos_angle16((*(int *)((obj + 0x30))))) * fval_a)));
    fx_spawn_32(obj, 0x0);
    snd_play_char_voice(tmp_c, 0x37);
    L_C0C47B0:;
    flag = (((struct timer_b_short *)(obj))->timer_b % 6) != 0;
    if (flag) goto L_C0C486E;
    *(float *)(((int)frame_buf + 12)) = 0.199999988f;
    *(float *)(((int)frame_buf + 8)) = 0.199999988f;
    *(float *)(((int)frame_buf + 4)) = 0.199999988f;
    L_C0C47CE:;
    fx_spawn_33(obj, 0x1, (obj + 0x20), (((int)frame_buf + 0) + 0x4));
    L_C0C486E:;
    fval_a = *(float *)0xC0C49CC;
    (((struct pos_x_float_r10 *)(obj))->pos_x) = (((((struct pos_x_float_r10 *)(obj))->pos_x)) + ((((((struct target_x_float *)(obj))->target_x)) - ((((struct pos_x_float_r10 *)(obj))->pos_x))) / fval_a));
    (((struct pos_y_float_r11 *)(obj))->pos_y) = (((((struct pos_y_float_r11 *)(obj))->pos_y)) + ((((((struct target_y_float *)(obj))->target_y)) - ((((struct pos_y_float_r11 *)(obj))->pos_y))) / fval_a));
    (((struct pos_z_float_r12 *)(obj))->pos_z) = (((((struct pos_z_float_r12 *)(obj))->pos_z)) + ((((((struct target_z_float *)(obj))->target_z)) - ((((struct pos_z_float_r12 *)(obj))->pos_z))) / fval_a));
    tmp_b = (0x28);
    goto L_C0C48BA;
    L_C0C457E:;
    if ((tmp_b != 4)) goto L_C0C4586;
    tmp_a = (((struct child1_int *)(obj))->child1);
    *(unsigned int *)((tmp_a + 0x10)) = ((*(int *)((tmp_a + 0x10))) - 0x222);
    if (((int)(*(int *)((((((struct child1_int *)(obj))->child1)) + 0x10))) >= 0)) goto L_C0C486E;
    *(unsigned char *)((obj + 0xD)) = ((*(signed char *)((obj + 0xD))) + 0x1);
    *(unsigned char *)((obj + 0xE)) = flag;
    *(unsigned int *)((((((struct child1_int *)(obj))->child1)) + 0x10)) = flag;
    goto L_C0C486E;
    L_C0C4586:;
    if ((tmp_b != 5)) goto L_C0C458E;
    fval_a = (((struct scale_z_float *)(obj))->scale_z);
    (((struct scale_z_float *)(obj))->scale_z) = (fval_a - fval_b);
    tmp_b = (0x58);
    if ((!(fval_b > (fval_a - fval_b)))) goto L_C0C482C;
    *(float *)((obj + tmp_b)) = fval_b;
    *(unsigned char *)((obj + 0xD)) = ((*(signed char *)((obj + 0xD))) + 0x1);
    *(unsigned char *)((obj + 0xE)) = flag;
    FUN_0c0c3408(obj, 0x0);
    L_C0C482C:;
    fval_a = (((struct scale_z_float *)(obj))->scale_z);
    (((struct scale_y_float *)(obj))->scale_y) = fval_a;
    (((struct scale_x_float *)(obj))->scale_x) = fval_a;
    goto L_C0C486E;
    L_C0C458E:;
    *(unsigned char *)((obj + 0xC)) = ((*(signed char *)((obj + 0xC))) + 0x1);
    tmp_b = (flag);
    L_C0C4866:;
    *(unsigned char *)((obj + 0xD)) = tmp_b;
    *(unsigned char *)((obj + 0xE)) = flag;
    goto L_C0C486E;
    L_C0C4658:;
    tmp_c = *(signed char *)((obj + 0xE));
    tmp_b = (tmp_c);
    if ((tmp_c == 0)) goto L_C0C466A;
    if ((tmp_b == 1)) goto L_C0C4674;
    if ((tmp_b == 2)) goto L_C0C46BC;
    tmp_b = (((*(signed char *)((obj + 0xD))) + 0x1));
    goto L_C0C4866;
    L_C0C46BC:;
    (((struct timer_b_ushort *)(obj))->timer_b) = (((((struct timer_b_short *)(obj))->timer_b)) + 0x1);
    tmp_a = (((struct timer_b_short *)(obj))->timer_b % 3) != 0;
    if (tmp_a) goto L_C0C46EE;
    *(float *)(((int)frame_buf + 12)) = 0.199999988f;
    *(float *)(((int)frame_buf + 8)) = 0.199999988f;
    *(float *)(((int)frame_buf + 4)) = 0.199999988f;
    fx_spawn_33(obj, 0x1, (obj + 0x20), (((int)frame_buf + 0) + 0x4));
    L_C0C46EE:;
    tmp_a = (((struct child1_int *)(obj))->child1);
    *(unsigned int *)((tmp_a + 0x10)) = ((*(int *)((tmp_a + 0x10))) + 0x222);
    tmp_b = (0x2E4);
    tmp_a = (0x1555);
    if (((int)(*(int *)((((((struct child1_int *)(obj))->child1)) + 0x10))) >= (int)0x1555)) goto L_C0C4708;
    goto L_C0C486E;
    L_C0C4708:;
    *(unsigned int *)(((*(int *)((obj + tmp_b))) + 0x10)) = tmp_a;
    *(unsigned char *)((obj + 0xE)) = ((*(signed char *)((obj + 0xE))) + 0x1);
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    goto L_C0C486E;
    L_C0C4674:;
    fx31_steer_toward_target(obj, 0x3);
    tmp_b = (((struct timer_b_short *)(obj))->timer_b);
    (((struct timer_b_ushort *)(obj))->timer_b) = (tmp_b + 0x1);
    if (((short)(tmp_b + 0x1) != 30)) goto L_C0C4692;
    *(unsigned char *)((obj + 0xE)) = ((*(signed char *)((obj + 0xE))) + 0x1);
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    L_C0C4692:;
    flag = (((struct timer_b_short *)(obj))->timer_b % 3) == 0;
    if (flag) goto L_C0C46A4;
    goto L_C0C486E;
    L_C0C46A4:;
    fval_a = (((struct scale_x_float *)(obj))->scale_x);
    *(float *)(((int)frame_buf + 12)) = (fval_a * 0.049999997f);
    *(float *)(((int)frame_buf + 8)) = (fval_a * 0.049999997f);
    *(float *)(((int)frame_buf + 4)) = (fval_a * 0.049999997f);
    goto L_C0C47CE;
    L_C0C466A:;
    *(unsigned char *)((obj + 0xE)) = ((*(signed char *)((obj + 0xE))) + 0x1);
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    goto L_C0C4674;
    L_C0C45C0:;
    *(unsigned int *)((obj + 0x30)) = ((*(int *)((obj + 0x30))) + 0x71C);
    *(unsigned int *)((obj + 0x30)) = ((*(int *)((obj + 0x30))) & 0xFFFF);
    (((struct scale_z_float *)(obj))->scale_z) = (((((struct scale_z_float *)(obj))->scale_z)) + fval_b);
    (((struct timer_b_ushort *)(obj))->timer_b) = (((((struct timer_b_short *)(obj))->timer_b)) + 0x1);
    cam_set_shake_ramp(0x5, 0x5);
    tmp_b = (0x58);
    fval_b = (3.0f);
    if ((!(((((struct scale_z_float *)(obj))->scale_z)) > 3.0f))) goto L_C0C4612;
    *(float *)((obj + tmp_b)) = fval_b;
    *(unsigned int *)((obj + 0x30)) = (pl_angle_to_opponent(tmp_c));
    *(unsigned int *)((obj + 0x34)) = flag;
    *(unsigned int *)((obj + 0x2C)) = flag;
    *(unsigned char *)((obj + 0xD)) = ((*(signed char *)((obj + 0xD))) + 0x1);
    *(unsigned char *)((obj + 0xE)) = flag;
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    L_C0C4612:;
    fval_a = (((struct scale_z_float *)(obj))->scale_z);
    (((struct scale_y_float *)(obj))->scale_y) = fval_a;
    (((struct scale_x_float *)(obj))->scale_x) = fval_a;
    goto L_C0C46A4;
    L_C0C4592:;
    fval_a = (((struct scale_z_float *)(obj))->scale_z);
    (((struct scale_z_float *)(obj))->scale_z) = (fval_a - fval_b);
    tmp_b = (0x58);
    if ((fval_b > (fval_a - fval_b))) goto L_C0C45A4;
    goto L_C0C482C;
    L_C0C45A4:;
    *(float *)((obj + tmp_b)) = fval_b;
    *(unsigned char *)((obj + 0xD)) = ((*(signed char *)((obj + 0xD))) + 0x1);
    *(unsigned char *)((obj + 0xE)) = flag;
    FUN_0c0c3408(obj, 0x1);
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    goto L_C0C482C;
    L_C0C4508:;
    *(unsigned char *)((obj + 0xC)) = ((*(signed char *)((obj + 0xC))) + 0x1);
    *(unsigned char *)((obj + 0xD)) = flag;
    (((struct timer_b_ushort *)(obj))->timer_b) = flag;
    goto L_C0C4518;
}

int fx31_mode_two(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            return FUN_0c0c3408(a4, 0x0);
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oF0_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
        *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
        (((struct o105_uchar *)(a4))->v) = 0x1;
        FUN_0c0c3408(a4, 0x0);
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
    u0 = *(float *)0xC0C4BB0;
    if (u0 > ((((struct o58_float *)(a4))->v))) {
        (((struct o58_float *)(a4))->v) = u0;
    }
    u0 = (((struct o58_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    return 0x50;
}

int fx_update_31(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t8;
    register int t31;

    t0 = *(int *)((a4 + 0x1C));
    if (t0 == 0) {
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4);
        }
        if ((*(signed char *)((t0 + 0x71F1))) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t8 = *(signed char *)((a4 + 0x9));
        switch (t8) {
        case 0:
            fx31_spin_kid_angles(a4);
            fx31_mode_idle(a4);
            break;
        case 1:
            fx31_mode_attack(a4);
            break;
        case 2:
            fx31_spin_kid_angles(a4);
            fx31_mode_two(a4);
            break;
        case 3:
            fx31_spin_kid_angles(a4);
            fx31_mode_three(a4);
            break;
        default:
            fx31_spin_kid_angles(a4);
            fx31_mode_idle(a4);
            break;
        }
        return FUN_0c0c339a(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    if ((*(signed char *)((t0 + 0x71F1))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t31 = *(signed char *)((a4 + 0x9));
    switch (t31) {
    case 0:
        fx31_spin_kid_angles(a4);
        fx31_mode_idle(a4);
        break;
    case 1:
        fx31_mode_attack(a4);
        break;
    case 2:
        fx31_spin_kid_angles(a4);
        fx31_mode_two(a4);
        break;
    case 3:
        fx31_spin_kid_angles(a4);
        fx31_mode_three(a4);
        break;
    default:
        fx31_spin_kid_angles(a4);
        fx31_mode_idle(a4);
        break;
    }
    return FUN_0c0c339a(a4);
}

int fx_spawn_32(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t13;
    register int t5;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C4E28;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o58_float *)(t0))->v) = 0.199999988f;
        (((struct o54_float *)(t0))->v) = 0.199999988f;
        (((struct o50_float *)(t0))->v) = 0.199999988f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t5 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x31);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 50.0f);
        t11 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t11))->v) = 1.0f;
        (((struct o20_float *)(t11))->v) = 1.0f;
        (((struct o1C_float *)(t11))->v) = 1.0f;
        (((struct o101_uchar *)(t0))->v) = 0x6;
        (((struct o102_uchar *)(t0))->v) = 0x6;
        obj_set_record_char(t0, 0x79);
        (((struct o106_uchar *)(t0))->v) = 0x1;
        t13 = 0x106;
    }
    return t13;
}

int fx_update_32(int a4)
{
    int stk[6];
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t27;
    register float t54;
    register float u57;
    register float t59;
    register float u62;
    register int t78;
    register int t94;
    int t26;
    int t77;

    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x1)));
    t2 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0x1555);
    t4 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t4 + 0x10)) = ((*(int *)((t4 + 0x10))) & 0xFFFF);
    t6 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t6 + 0x14)) = ((*(int *)((t6 + 0x14))) + 0x71C);
    t8 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t8 + 0x14)) = ((*(int *)((t8 + 0x14))) & 0xFFFF);
    t10 = *(signed char *)((a4 + 0x8));
    if (t10 != 0) {
        if (t10 != 1) {
            t94 = (obj_destroy(a4));
        } else {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            if ((int)((((struct oEE_short *)(a4))->v)) <= (int)0x5) {
                (((struct o107_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o107_uchar *)(a4))->v) = 0x0;
            }
            if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x4)) == 0) {
                *(float *)(((int)stk + 8)) = 0.199999988f;
                *(float *)(((int)stk + 4)) = 0.199999988f;
                *(float *)(((int)stk + 0)) = 0.199999988f;
                fx_spawn_33(a4, 0x0, (a4 + 0x20), ((int)stk + 0));
            }
            if (((*(signed char *)((a4 + 0x2A8))) == 0) && (t26 = *(signed char *)((a4 + 0x2D8)), t26 == 0)) {
                t27 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t27 - 1);
                if ((short)(t27 - 1) == 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x57, 0.399999976f);
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            t94 = 0x24;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t54 = math_sin_angle16((*(int *)((a4 + 0x30))));
        u57 = (t54 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o38_float *)(a4))->v) = (u57 * 50.0f);
        t59 = math_cos_angle16((*(int *)((a4 + 0x30))));
        u62 = (t59 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o40_float *)(a4))->v) = (u62 * 50.0f);
        (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 50.0f));
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEE_short *)(a4))->v)) <= (int)0x5) {
            (((struct o107_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o107_uchar *)(a4))->v) = 0x0;
        }
        if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x4)) == 0) {
            *(float *)(((int)stk + 8)) = 0.199999988f;
            *(float *)(((int)stk + 4)) = 0.199999988f;
            *(float *)(((int)stk + 0)) = 0.199999988f;
            fx_spawn_33(a4, 0x0, (a4 + 0x20), ((int)stk + 0));
        }
        if (((*(signed char *)((a4 + 0x2A8))) == 0) && (t77 = *(signed char *)((a4 + 0x2D8)), t77 == 0)) {
            t78 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t78 - 1);
            if ((short)(t78 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x57, 0.399999976f);
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t94 = 0x24;
    }
    return t94;
}

int fx_update_33(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = ((int (*)(int, int, int, int))(0xC0C5108))(a4, a5, a6, a7);
            if ((*(signed char *)((a4 + 0x4))) != 0) {
                if (((((struct o3C_float *)(a4))->v)) > 10.0f) {
                    (((struct o3C_float *)(a4))->v) = 10.0f;
                    (((struct o48_float *)(a4))->v) = 0.0f;
                }
            }
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xF;
                (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
                (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
                (((struct o3C_float *)(a4))->v) = 2.0f;
                t1 = 0x3C;
            } else {
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                t1 = 0x28;
            }
            return t1;
        }
        if (t0 == 2) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            u0 = *(float *)0xC0C54FC;
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - u0);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            return ((int (*)(int, int, int, int, float))(0xC0C5108))(a4, a5, a6, a7, u0);
        }
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 50.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x5A);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = math_sin_angle16((0xFFFF & (((int)((u0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30)))) - 8192)));
        (((struct o38_float *)(a4))->v) = (u1 * 20.0f);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x5A);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = math_cos_angle16((0xFFFF & (((int)((u0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30)))) - 8192)));
        (((struct o40_float *)(a4))->v) = (u1 * 20.0f);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x2);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o48_float *)(a4))->v) = (u0 + 0.5f);
        (((struct o3C_float *)(a4))->v) = (-((math_tan_angle16((*(int *)((a4 + 0x2C))))) * 20.0f));
        if (-10.0f > ((((struct o3C_float *)(a4))->v))) {
            (((struct o3C_float *)(a4))->v) = -10.0f;
        }
        u0 = -10.0f;
    } else {
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        u0 = f4;
    }
    t0 = ((int (*)(int, int, int, int, float))(0xC0C5108))(a4, a5, a6, a7, u0);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        if (((((struct o3C_float *)(a4))->v)) > 10.0f) {
            (((struct o3C_float *)(a4))->v) = 10.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o3C_float *)(a4))->v) = 2.0f;
        t0 = 0x3C;
    } else {
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t0 = 0x28;
    }
    return t0;
}

int FUN_0c0c54b8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o48_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) / 10.0f);
        t0 = 0x20;
        if (!(((((struct o44_float *)(a4))->v)) > 0.299999982f)) {
        } else {
            t1 = 0x22;
            if (!(((((struct o44_float *)(a4))->v)) > ((((struct o0_float *)0xC0C5634)->v)))) {
                t1 = 0x21;
            }
            t0 = t1;
        }
        snd_play_side_se((*(signed char *)((a4 + 0x3))), t0);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x6D);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
            t0 = 0x60;
            if (!(((((struct o60_float *)(a4))->v)) > 0.0f)) {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t0 = (t2 + 0x1);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = 0x50;
        if (!(((((struct o44_float *)(a4))->v)) > ((((struct o50_float *)(a4))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o38_float *)(a4))->v) = ((((struct o8_float *)0xC0C5634)->v));
            t1 = 0x38;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0c55cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4);
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            return 0x28;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o3C_float *)(a4))->v) = 2.0f;
        t1 = 0x3C;
    }
    return t1;
}
