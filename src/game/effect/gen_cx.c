/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_float { char p[0x30]; float v; };
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
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c06233a(int, int, int);
int FUN_0c0bfe20(int);
int FUN_0c0bfe76(int);
int fx_randomize_particle(int);
int fx_spawn_0416d8(int);
int fx_spawn_09(int, int);
int fx_spawn_double_ring(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int hit_probe_step_by_velocity(int, int, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_transform_point(int, int);
float math_rand_float(void);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int obj_destroy(int);
int obj_set_record_char(int, int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_get_hit_count_of_opponent(int);
int pl_ryoma_attack_kind2(int, int, int, int);
int pl_ryoma_attack_kind3(int, int, int, int);
int pl_ryoma_attack_kind4(int, int, int, int);
int pl_ryoma_attack_kind5(int, int, int, int);
int pl_ryoma_attack_kind68(int, int, int, int);
int pl_ryoma_attack_kind7(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_turn_to_opponent(int, int);
int snd_play_side_se(int, int);
int thunk_FUN_0c062242(int, int);
float FUN_0c0ca67e(int a4);
int FUN_0c0327e4(int a4);
int FUN_0c0bf86e(int a4);
int FUN_0c06acec(int a4, int a5, int a6, int a7);
int FUN_0c0c15be(int a4);

float FUN_0c0ca67e(int a4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    int R11;
    register float F0;
    register float F3;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    v0_5 = (FUN_0c0555dc()) != 1;
    v0_2 = (0x14);
    R11 = (0x8000);
    v0_3 = (0x1);
    v0_1 = (0x0);
    v0_0 = (v0_6);
    v0_4 = (0x2);
    if (v0_5) goto L_C0CA6B2;
    *(unsigned char *)((v0_0 + 0x8)) = 0xFFFFFFFF;
    L_C0CA6B2:;
    v0_6 = *(signed char *)((v0_0 + 0x8));
    v0_5 = (v0_6);
    w0_1 = (20.0f);
    w0_2 = (1.0f);
    w0_0 = (0.0f);
    w0_3 = (0.0199999996f);
    if ((v0_6 == 0)) goto L_C0CA708;
    if ((v0_5 == 1)) goto L_C0CA73C;
    if ((v0_5 == 2)) goto L_C0CA770;
    if ((v0_5 != 3)) goto L_C0CA6D4;
    v0_6 = *(signed char *)((v0_0 + 0xF));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CA8F0;
    if ((v0_5 == 1)) goto L_C0CA914;
    v0_5 = (((struct oEE_short *)(v0_0))->v);
    w0_0 = w0_1;
    w0_0 = w0_0 + 0.5f * (float)v0_5;
    w0_2 = (0.799999952f);
    w0_0 = (w0_0);
    FPUL_ = (v0_5);
    L_C0CA94C:;
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    if ((((((struct oF0_short *)(v0_0))->v)) == 0)) goto L_C0CA960;
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) - 1);
    L_C0CAAE0:;
    w0_1 = math_cos_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000));
    *(float *)(((int)stk + 0)) = w0_1;
    w0_1 = (w0_1 * (math_sin_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))));
    (((struct o38_float *)(v0_0))->v) = (w0_1 * w0_0);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000));
    *(float *)(((int)stk + 0)) = w0_1;
    w0_1 = (w0_1 * (math_sin_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))));
    (((struct o40_float *)(v0_0))->v) = (w0_1 * w0_0);
    w0_1 = math_cos_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    (((struct o3C_float *)(v0_0))->v) = (-(w0_1 * w0_0));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o40_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    F0 = ((-(w0_1 * w0_0)));
    if (((((((struct oEC_short *)(v0_0))->v)) & 3) != 0)) goto L_C0CAB6E;
    fx_spawn_0416d8(v0_0);
    L_C0CAB6E:;
    v0_5 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_5 + 0x1);
    if (!(((short)(v0_5 + 0x1) != 0xB4))) goto L_C0CAF9A;
    v0_6 = (v0_0);
    if ((!(((((struct o24_float *)(v0_0))->v)) > 100.0f))) goto L_C0CABC0;
    (((struct o107_uchar *)(v0_0))->v) = v0_4;
    goto L_C0CABC4;
    L_C0CAF9A:;
    v0_5 = (0xFFFFFFFF);
    L_C0CAF9C:;
    *(unsigned char *)((v0_0 + 0x8)) = v0_5;
    L_C0CAFE0:;
    return F0;
    L_C0CABC4:;
    v0_4 = (signed char)(pl_get_hit_count_of_opponent(v0_6)) == 0;
    if (v0_4) goto L_C0CABE4;
    snd_play_side_se((*(signed char *)((v0_0 + 0x3))), 0x22);
    *(unsigned char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0)) = v0_1;
    v0_5 = (0xA);
    goto L_C0CAF9C;
    L_C0CABE4:;
    v0_5 = (0x2D8);
    if (((*(signed char *)((v0_0 + 0x2D8))) != 0)) goto L_C0CABF0;
    goto L_C0CAFE0;
    L_C0CABF0:;
    *(unsigned char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((((((struct o2E8_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned char *)((((((struct o2EC_int *)(v0_0))->v)) + 0x0)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x2C)) = *(struct mv3 *)(0xC33C9A0); }
    snd_play_side_se((*(signed char *)((v0_0 + 0x3))), 0x22);
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oF0_ushort *)(v0_0))->v) = v0_2;
    (((struct oF2_ushort *)(v0_0))->v) = v0_3;
    L_C0CAC24:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    goto L_C0CAFE0;
    L_C0CABC0:;
    (((struct o107_uchar *)(v0_0))->v) = v0_1;
    goto L_C0CABC4;
    L_C0CA960:;
    v0_5 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-v0_5) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 12);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o20_float *)(v0_0))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o24_float *)(v0_0))->v)));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - ((((struct o28_float *)(v0_0))->v)));
    if (((*(float *)(((int)stk + 16))) != 0.0f)) goto L_C0CA9CC;
    *(float *)(((int)stk + 16)) = 9.99999997e-07f;
    L_C0CA9CC:;
    v0_5 = !(0.0f > (*(float *)(((int)stk + 16))));
    v0_6 = ((0xFFFF & (math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / (*(float *)(((int)stk + 16))))))));
    if (v0_5) goto L_C0CA9EE;
    v0_6 = ((v0_6 + R11));
    L_C0CA9EE:;
    v0_5 = *(int *)((v0_0 + 0x30));
    v0_7 = ((unsigned short)((unsigned short)(0x4000 + v0_6) - v0_5) & R11) == 0;
    v0_6 = ((unsigned short)((unsigned short)(0x4000 + v0_6) - v0_5));
    if (v0_7) goto L_C0CAA04;
    v0_6 = ((v0_6 | 0xFFFF0000));
    L_C0CAA04:;
    v0_5 = ((int)((w0_2 * 65536.0f) / 360.0f));
    FPUL_ = ((int)((w0_2 * 65536.0f) / 360.0f));
    if (((int)v0_6 <= 0)) goto L_C0CAA64;
    v0_6 = (v0_5);
    L_C0CAA66:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + v0_6);
    w0_1 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 12)) = w0_1;
    w0_2 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 8)) = w0_2;
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * (*(float *)(((int)stk + 12)));
    w0_1 = math_signed_sqrt(w0_2);
    v0_7 = !(0.0f > (*(float *)(((int)stk + 20))));
    v0_6 = ((math_atan_angle16(((-w0_1) / (*(float *)(((int)stk + 20)))))));
    if (v0_7) goto L_C0CAAAA;
    v0_6 = ((v0_6 + R11));
    L_C0CAAAA:;
    v0_7 = *(int *)((v0_0 + 0x2C));
    v0_8 = ((unsigned short)((-(unsigned short)(0x4000 + v0_6)) - v0_7) & R11) == 0;
    v0_6 = ((unsigned short)((-(unsigned short)(0x4000 + v0_6)) - v0_7));
    if (v0_8) goto L_C0CAAC4;
    v0_6 = ((v0_6 | 0xFFFF0000));
    L_C0CAAC4:;
    if (((int)v0_6 <= 0)) goto L_C0CAACC;
    v0_6 = (v0_5);
    L_C0CAACE:;
    *(unsigned int *)((v0_0 + 0x2C)) = (unsigned short)((*(int *)((v0_0 + 0x2C))) + v0_6);
    goto L_C0CAAE0;
    L_C0CAACC:;
    v0_6 = ((-v0_5));
    goto L_C0CAACE;
    L_C0CAA64:;
    v0_6 = ((-v0_5));
    goto L_C0CAA66;
    L_C0CA914:;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_1;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_1;
    (((struct o105_uchar *)(v0_0))->v) = v0_1;
    w0_2 = (5.0f);
    w0_0 = (w0_1);
    if ((((((struct oEC_short *)(v0_0))->v)) != 60)) goto L_C0CA94C;
    L_C0CA930:;
    *(unsigned char *)((v0_0 + 0xF)) = ((*(signed char *)((v0_0 + 0xF))) + 0x1);
    goto L_C0CA94C;
    L_C0CA8F0:;
    v0_5 = (((struct oEE_short *)(v0_0))->v);
    w0_0 = (((-((float)v0_5 * w0_2))) + 30.0f);
    w0_2 = (10.0f);
    w0_0 = w0_0;
    FPUL_ = (v0_5);
    if ((((((struct oEC_short *)(v0_0))->v)) == 20)) goto L_C0CA930;
    goto L_C0CA94C;
    L_C0CA6D4:;
    if ((v0_5 != 4)) goto L_C0CA6DC;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_4;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_4;
    (((struct o105_uchar *)(v0_0))->v) = v0_4;
    v0_3 = *(signed char *)((v0_0 + 0xA));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C0CAC48;
    if ((v0_5 == 1)) goto L_C0CACA0;
    L_C0CACA0:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C0CACB2;
    if ((v0_5 == 1)) goto L_C0CACEC;
    if ((v0_5 == 2)) goto L_C0CAD58;
    L_C0CAD58:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_1 - 1) == 0)) goto L_C0CAD6A;
    goto L_C0CAFE0;
    L_C0CAD6A:;
    goto L_C0CAF9A;
    L_C0CACEC:;
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_2))->v) = (((((struct o1C_float *)(v0_2))->v)) + 0.0399999991f);
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) + 0.00999999978f);
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    (((struct o24_float *)(v0_2))->v) = (((((struct o24_float *)(v0_2))->v)) + 0.0399999991f);
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    *(unsigned int *)((v0_2 + 0x14)) = ((*(int *)((v0_2 + 0x14))) + 0x1000);
    v0_2 = (((struct oF2_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = ((float)v0_2 / w0_1);
    w0_2 = (0.0f);
    FPUL_ = (v0_2);
    if ((((float)v0_2 / w0_1) > 0.0f)) goto L_C0CAD50;
    (((struct o40_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct o2EC_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    L_C0CAD50:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) - 1);
    goto L_C0CAD58;
    L_C0CACB2:;
    v0_1 = (((struct oF2_short *)(v0_0))->v);
    (((struct oF2_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xF2);
    if (((short)(v0_1 - 1) != 0)) goto L_C0CAD58;
    *(unsigned short *)((v0_0 + v0_5)) = v0_2;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    goto L_C0CAD58;
    L_C0CAC48:;
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_3))->v) = (((((struct o1C_float *)(v0_3))->v)) + w0_3);
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = (((((struct o20_float *)(v0_3))->v)) + w0_3);
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o24_float *)(v0_3))->v) = (((((struct o24_float *)(v0_3))->v)) + w0_3);
    v0_3 = (((struct oF0_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = ((float)v0_3 / w0_1);
    FPUL_ = (v0_3);
    if ((((float)v0_3 / w0_1) > 0.0f)) goto L_C0CAC98;
    (((struct o40_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct o2E8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    L_C0CAC98:;
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) - 1);
    goto L_C0CACA0;
    L_C0CA6DC:;
    if ((v0_5 != 10)) goto L_C0CA6E4;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_4;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_4;
    (((struct o105_uchar *)(v0_0))->v) = v0_4;
    v0_4 = *(signed char *)((v0_0 + 0x9));
    v0_5 = (v0_4);
    v0_6 = ((0x105 + v0_0));
    if ((v0_4 == 0)) goto L_C0CADA0;
    if (!((v0_5 != 1))) goto L_C0CAF7E;
    goto L_C0CAFE0;
    L_C0CAF7E:;
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    (((struct o5C_float *)(v0_0))->v) = ((float)v0_2 / w0_1);
    v0_5 = (0x5C);
    FPUL_ = (v0_2);
    if ((((float)v0_2 / w0_1) > 0.0f)) goto L_C0CAFA0;
    *(float *)((v0_0 + v0_5)) = w0_0;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    goto L_C0CAF9A;
    L_C0CAFA0:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + 0.049999997f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + 0.049999997f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + 0.049999997f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x400);
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x400);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + 0x400);
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) - 1);
    v0_5 = (0xEE);
    goto L_C0CAFE0;
    L_C0CADA0:;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06233a(((((struct o2E8_int *)(v0_0))->v)), ((signed char)((((v0_4 << 1) + v0_4) << 2) << 1) + 0xC6002D0), 0x2);
    *(unsigned char *)((((((struct o2E8_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((((((struct o2E8_int *)(v0_0))->v)) + 0x2)) = 0x1F;
    (((struct o40_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E8_int *)(v0_0))->v)) + 0x1C)) = *(struct mv3 *)(0xC15338C); }
    v0_4 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o24_float *)(v0_4))->v) = 2.0f;
    (((struct o20_float *)(v0_4))->v) = 2.0f;
    (((struct o1C_float *)(v0_4))->v) = 2.0f;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06233a(((((struct o2EC_int *)(v0_0))->v)), ((signed char)((((v0_4 << 1) + v0_4) << 2) << 1) + 0xC6002D0), 0x2);
    *(unsigned char *)((((((struct o2EC_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((((((struct o2EC_int *)(v0_0))->v)) + 0x2)) = 0x1F;
    (((struct o40_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2EC_int *)(v0_0))->v)) + 0x1C)) = *(struct mv3 *)(0xC15338C); }
    v0_4 = (((struct o2EC_int *)(v0_0))->v);
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - R11);
    v0_4 = (((struct o2EC_int *)(v0_0))->v);
    (((struct o24_float *)(v0_4))->v) = 2.0f;
    (((struct o20_float *)(v0_4))->v) = 2.0f;
    (((struct o1C_float *)(v0_4))->v) = 2.0f;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06233a(((((struct o2E0_int *)(v0_0))->v)), ((signed char)((((v0_4 << 1) + v0_4) << 2) << 1) + 0xC6002D0), 0x4);
    *(unsigned char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((((((struct o2E0_int *)(v0_0))->v)) + 0x2)) = 0x1F;
    (((struct o40_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(v0_0))->v)) + 0x1C)) = *(struct mv3 *)(0xC15338C); }
    v0_4 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_4))->v) = 2.0f;
    (((struct o20_float *)(v0_4))->v) = 2.0f;
    (((struct o1C_float *)(v0_4))->v) = 2.0f;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06233a(((((struct o2E4_int *)(v0_0))->v)), ((signed char)((((v0_4 << 1) + v0_4) << 2) << 1) + 0xC6002D0), 0x4);
    *(unsigned char *)((((((struct o2E4_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((((((struct o2E4_int *)(v0_0))->v)) + 0x2)) = 0x1F;
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E4_int *)(v0_0))->v)) + 0x1C)) = *(struct mv3 *)(0xC15338C); }
    v0_4 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - R11);
    v0_4 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o24_float *)(v0_4))->v) = 2.0f;
    (((struct o20_float *)(v0_4))->v) = 2.0f;
    (((struct o1C_float *)(v0_4))->v) = 2.0f;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06233a(((((struct o2F0_int *)(v0_0))->v)), ((signed char)((((v0_4 << 1) + v0_4) << 2) << 1) + 0xC6002D0), 0x1);
    *(unsigned char *)((((((struct o2F0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((((((struct o2F0_int *)(v0_0))->v)) + 0x2)) = 0x1F;
    (((struct o40_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2F0_int *)(v0_0))->v)) + 0x1C)) = *(struct mv3 *)(0xC15338C); }
    v0_3 = (((struct o2F0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_3))->v) = 2.0f;
    (((struct o20_float *)(v0_3))->v) = 2.0f;
    (((struct o1C_float *)(v0_3))->v) = 2.0f;
    (((struct o5C_float *)(v0_0))->v) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x50)) = *(struct mv3 *)(0xC153380); }
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    v0_5 = (0xEC);
    *(unsigned short *)((v0_0 + (v0_5 + 0x2))) = v0_2;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0CAF7E;
    L_C0CA6E4:;
    v0_5 = ((obj_destroy(v0_0)));
    goto L_C0CAFE0;
    L_C0CA770:;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_4;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_4;
    (((struct o105_uchar *)(v0_0))->v) = v0_4;
    v0_4 = *(signed char *)((v0_0 + 0x9));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C0CA7A4;
    if ((v0_5 == 1)) goto L_C0CA872;
    goto L_C0CAFE0;
    L_C0CA872:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = v0_1;
    *(unsigned char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    math_mat_transform_point((v0_0 + 0x20), ((((struct o118_int *)(v0_0))->v)));
    (((struct o118_uint *)(v0_0))->v) = v0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) - 0x5555);
    fx_spawn_double_ring((*(signed char *)((v0_0 + 0x3))), (v0_0 + 0x20));
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    (((struct oEE_ushort *)(v0_0))->v) = v0_3;
    (((struct oF0_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_1;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_1;
    (((struct o105_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (v0_1);
    goto L_C0CAFE0;
    L_C0CA7A4:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = ((float)v0_2 / 40.0f);
    w0_1 = (40.0f);
    FPUL_ = (v0_2);
    if ((((float)v0_2 / 40.0f) > 0.0f)) goto L_C0CA7D4;
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct o2E4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    L_C0CA7D4:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = ((float)v0_2 / w0_1);
    FPUL_ = (v0_2);
    if ((((float)v0_2 / w0_1) > 0.0f)) goto L_C0CA7FA;
    (((struct o40_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct o2F0_int *)(v0_0))->v)) + 0x0)) = v0_1;
    L_C0CA7FA:;
    v0_2 = (((struct o2F0_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_2))->v) = (((((struct o1C_float *)(v0_2))->v)) + w0_3);
    v0_2 = (((struct o2F0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) + w0_3);
    v0_2 = (((struct o2F0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_2))->v) = (((((struct o24_float *)(v0_2))->v)) + w0_3);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = ((float)v0_2 / w0_1);
    FPUL_ = (v0_2);
    if ((((float)v0_2 / w0_1) > 0.0f)) goto L_C0CA844;
    (((struct o40_float *)(((((struct o2F4_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct o2F4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    L_C0CA844:;
    v0_1 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) + w0_3);
    v0_1 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + w0_3);
    v0_1 = (((struct o2F4_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + w0_3);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_5 = (0xEC);
    goto L_C0CAFE0;
    L_C0CA73C:;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = v0_4;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = v0_4;
    (((struct o105_uchar *)(v0_0))->v) = v0_4;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_1 - 1) == 0)) goto L_C0CA75C;
    goto L_C0CAFE0;
    L_C0CA75C:;
    *(unsigned char *)((((((struct o2E4_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned char *)((((((struct o2F0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    (((struct oEC_ushort *)(v0_0))->v) = 0x28;
    goto L_C0CAC24;
    L_C0CA708:;
    w0_0 = math_rand_float();
    v0_5 = (0xC0CA798);
    F0 = (w0_0);
    w0_2 = (2.14748365e+09f);
    w0_1 = ((w0_0 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_0 * 255.0f))) goto L_C0CA724;
    w0_0 = (w0_1 - (w0_2 + w0_2));
    w0_2 = ((w0_2 + w0_2));
    w0_1 = w0_0;
    L_C0CA724:;
    (((struct oEC_ushort *)(v0_0))->v) = (((int)((unsigned int)(int)w0_1 % (unsigned int)0x1E)) + 0x5);
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    FPUL_ = ((int)w0_1);
    goto L_C0CA73C;
}

int FUN_0c0327e4(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R7;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_6 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_6);
    if (v0_1) goto L_C03280C;
    *(unsigned char *)((v0_0 + 0x8)) = 0x5;
    L_C03280C:;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_5 = (v0_3);
    v0_6 = (0xC0DF940);
    v0_1 = (0x10000);
    v0_2 = (0xA);
    v0_4 = (0xC0DF4D0);
    v0_4 = (0x0);
    w0_0 = (3.0f);
    w0_2 = (1.0f);
    w0_1 = (255.0f);
    if ((v0_3 == 0)) goto L_C03284A;
    if ((v0_5 != 1)) goto L_C03282E;
    v0_1 = *(int *)((v0_0 + 0x1C));
    v0_6 = (v0_1);
    if (!(((*(signed char *)((v0_1 + 0x71BA))) != 11))) goto L_C032F7A;
    if (((*(signed char *)((v0_6 + 0x7223))) == 2)) goto L_C032C94;
    if (((*(signed char *)((v0_6 + 0x7223))) == 4)) goto L_C032C94;
    goto L_C032F7A;
    L_C032F7A:;
    *(unsigned char *)((v0_0 + 0x8)) = 0x5;
    v0_5 = (0x5);
    L_C032FB8:;
    return v0_5;
    L_C032C94:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_5 = (v0_1);
    if ((v0_1 == 0)) goto L_C032CA2;
    if ((v0_5 == 1)) goto L_C032CEA;
    goto L_C032FB8;
    L_C032CEA:;
    w0_0 = (((struct o60_float *)(v0_0))->v);
    (((struct o60_float *)(v0_0))->v) = (w0_0 * 0.899999976f);
    (((struct o68_float *)(v0_0))->v) = (w0_0 * 0.899999976f);
    (((struct o64_float *)(v0_0))->v) = (w0_0 * 0.899999976f);
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + (((((struct o7248_short *)((*(int *)((v0_0 + 0x1C)))))->v)) << 1));
    FPUL_ = (0x3F666666);
    L_C032F6C:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_1 - 1) != 0)) goto L_C032FB8;
    goto L_C032F7A;
    L_C032CA2:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + 0x5B0);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) == 0)) goto L_C032CC8;
    v0_1 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0xA));
    v0_5 = (v0_1);
    if (((int)v0_1 > (int)0x2)) goto L_C032CC8;
    goto L_C032FB8;
    L_C032CC8:;
    *(unsigned short *)((v0_0 + 0x6)) = ((*(short *)((v0_0 + 0x6))) | 0x200);
    (((struct o60_float *)(v0_0))->v) = w0_2;
    (((struct o68_float *)(v0_0))->v) = w0_2;
    (((struct o64_float *)(v0_0))->v) = w0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x14;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    goto L_C032FB8;
    L_C03282E:;
    if ((v0_5 != 2)) goto L_C032836;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C032D24;
    if ((v0_5 != 1)) goto L_C032D20;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    *(unsigned int *)(((int)stk + 12)) = (0x2E0 + v0_0);
    *(unsigned int *)(((int)stk + 4)) = (0x2E0 + v0_0);
    v0_3 = (v0_4);
    v0_6 = ((0x2E0 + v0_0));
    L_C032F62:;
    if (((int)(*(int *)(((int)stk + 16))) >= (int)v0_2)) goto L_C032F6C;
    if (((*(signed char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) == 0)) goto L_C032F4E;
    w0_2 = math_rand_float();
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_2 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_2 * w0_1))) goto L_C032E70;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C032E70:;
    FPUL_ = ((int)w0_4);
    if ((((int)((unsigned int)(int)w0_4 % (unsigned int)v0_2)) != 0)) goto L_C032E88;
    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0)) = v0_4;
    L_C032E88:;
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)((v0_5 + 0x14)) = ((*(int *)((v0_5 + 0x14))) + (*(int *)((v0_5 + 0x38))));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    (((struct o8_float *)(v0_5))->v) = (((((struct o8_float *)(v0_5))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(int *)((int)stk + 0) = (0x28 + v0_5);
    w0_2 = math_rand_float();
    *(unsigned int *)(((int)stk + 0)) = (0x28 + v0_5);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_2 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_2 * w0_1))) goto L_C032ED0;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C032ED0:;
    v0_5 = (int)((unsigned int)(int)w0_4 % (unsigned int)0x3);
    w0_4 = ((float)v0_5);
    FPUL_ = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C032EEA;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C032EEA:;
    v0_5 = *(int *)((int)stk + 0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) + (w0_4 + w0_0));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(int *)((int)stk + 0) = (0x4 + v0_5);
    (((struct o4_float *)(v0_5))->v) = ((math_cos_angle16(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x14)))) + v0_1))) * ((((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0)))))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(int *)((int)stk + 0) = (0xC + v0_5);
    w0_2 = math_sin_angle16(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x14)))) + v0_1));
    w0_3 = (((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0)))))->v);
    (((struct oC_float *)(v0_5))->v) = (w0_2 * w0_3);
    w0_4 = ((w0_2 * w0_3));
    L_C032F4E:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    v0_3 = ((v0_3 + 0x4));
    goto L_C032F62;
    L_C032D20:;
    goto L_C032FB8;
    L_C032D24:;
    v0_3 = ((0x2E0 + v0_0));
    v0_6 = (0x0);
    L_C032DEC:;
    if (((int)v0_4 < (int)v0_2)) goto L_C032D40;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) == 0)) goto L_C032E24;
    if (((*(signed char *)((0x71BA + (*(int *)((v0_0 + 0x1C)))))) != 11)) goto L_C032E24;
    v0_1 = *(signed char *)((0x7223 + (*(int *)((v0_0 + 0x1C)))));
    v0_5 = (v0_1);
    if ((v0_1 != 2)) goto L_C032E16;
    goto L_C032FB8;
    L_C032E16:;
    v0_1 = *(signed char *)((0x7223 + (*(int *)((v0_0 + 0x1C)))));
    v0_5 = (v0_1);
    if ((v0_1 != 4)) goto L_C032E24;
    goto L_C032FB8;
    L_C032E24:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x14;
    v0_5 = (0xEC);
    goto L_C032FB8;
    L_C032D40:;
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    *(unsigned int *)((v0_5 + 0x14)) = ((*(int *)((v0_5 + 0x14))) + (*(int *)((v0_5 + 0x38))));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o8_float *)(v0_5))->v) = (((((struct o8_float *)(v0_5))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(int *)((int)stk + 0) = (0x4 + v0_5);
    (((struct o4_float *)(v0_5))->v) = ((math_cos_angle16(((-(*(int *)(((*(int *)(((int)stk + 4))) + 0x14)))) + v0_1))) * ((((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(int *)((int)stk + 0) = (0xC + v0_5);
    w0_1 = math_sin_angle16(((-(*(int *)(((*(int *)(((int)stk + 4))) + 0x14)))) + v0_1));
    w0_2 = (((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v);
    (((struct oC_float *)(v0_5))->v) = (w0_1 * w0_2);
    w0_0 = (((struct o8_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v);
    v0_4 = ((v0_4 + 0x1));
    w0_4 = ((w0_1 * w0_2));
    w0_4 = (w0_0);
    if ((!(w0_0 > (((((struct o24_float *)((*(int *)((v0_0 + 0x1C)))))->v)) + 300.0f)))) goto L_C032DE8;
    (((struct o8_float *)((*(int *)((v0_3 + 0x0)))))->v) = ((((struct o24_float *)(v0_0))->v));
    L_C032DE8:;
    v0_3 = ((v0_3 + 0x4));
    v0_6 = ((v0_6 + 0x4));
    goto L_C032DEC;
    L_C032836:;
    if (!((v0_5 != 4))) goto L_C032F80;
    if ((v0_5 != 5)) goto L_C032846;
    goto L_C032F80;
    L_C032F80:;
    return obj_destroy(v0_0);
    L_C032846:;
    goto L_C032FB8;
    L_C03284A:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_5 = (v0_3);
    w0_3 = (30.0f);
    if ((v0_3 == 0)) goto L_C032860;
    if ((v0_5 != 1)) goto L_C03285C;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = (0x2E0 + v0_0);
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    L_C032C64:;
    if (((int)(*(int *)(((int)stk + 8))) >= (int)v0_2)) goto L_C032C6E;
    v0_5 = *(int *)(((int)stk + 8));
    v0_3 = ((v0_5 << 2));
    if (!(((*(signed char *)(((*(int *)((((0x2E0 + v0_0) + (v0_5 << 2)) + 0x0))) + 0x0))) != 0))) goto L_C032C4C;
    w0_6 = math_rand_float();
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_1))) goto L_C032AB4;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    goto L_C032AB4;
    L_C032C4C:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    goto L_C032C64;
    L_C032AB4:;
    FPUL_ = ((int)w0_4);
    if ((((int)((unsigned int)(int)w0_4 % (unsigned int)v0_2)) != 0)) goto L_C032AD0;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0))) + 0x0)) = v0_4;
    L_C032AD0:;
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)((v0_5 + 0x14)) = ((*(int *)((v0_5 + 0x14))) + (*(int *)((v0_5 + 0x38))));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    (((struct o8_float *)(v0_5))->v) = (((((struct o8_float *)(v0_5))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(int *)((int)stk + 0) = (0x28 + v0_5);
    w0_6 = math_rand_float();
    *(unsigned int *)(((int)stk + 0)) = (0x28 + v0_5);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_1))) goto L_C032B18;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C032B18:;
    v0_5 = (int)((unsigned int)(int)w0_4 % (unsigned int)0x3);
    w0_4 = ((float)v0_5);
    FPUL_ = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C032B32;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C032B32:;
    v0_5 = *(int *)((int)stk + 0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) + (w0_4 + w0_0));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = v0_5;
    *(int *)((int)stk + 0) = (0x4 + v0_5);
    (((struct o4_float *)(v0_5))->v) = ((math_cos_angle16(((-(*(int *)(((*(int *)(((int)stk + 20))) + 0x14)))) + v0_1))) * ((((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0)))))->v)));
    v0_5 = *(int *)((((0x2E0 + v0_0) + v0_3) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = v0_5;
    *(int *)((int)stk + 0) = (0xC + v0_5);
    w0_4 = math_sin_angle16(((-(*(int *)(((*(int *)(((int)stk + 20))) + 0x14)))) + v0_1));
    w0_5 = (((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0)))))->v);
    (((struct oC_float *)(v0_5))->v) = (w0_4 * w0_5);
    w0_4 = ((w0_4 * w0_5));
    if ((!(((((struct o44_float *)((*(int *)((((0x2E0 + v0_0) + v0_3) + 0x0)))))->v)) > 0.0f))) goto L_C032C4C;
    v0_3 = *(int *)((((0x2E0 + v0_0) + (*(int *)(((int)stk + 4)))) + 0x0));
    *(int *)((int)stk + 0) = (0x44 + v0_3);
    w0_6 = math_rand_float();
    *(unsigned int *)(((int)stk + 0)) = (0x44 + v0_3);
    w0_4 = (w0_6);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_1))) goto L_C032BCC;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C032BCC:;
    v0_3 = (int)((unsigned int)(int)w0_4 % (unsigned int)v0_2);
    w0_4 = ((float)v0_3);
    FPUL_ = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C032BEA;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C032BEA:;
    v0_3 = ((*(int *)((int)stk + 0)));
    w0_4 = (((w0_4 + w0_2) / w0_3));
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) - w0_4);
    w0_4 = (0.0f);
    if ((!(0.0f > ((((struct o44_float *)((*(int *)((((0x2E0 + v0_0) + (*(int *)(((int)stk + 4)))) + 0x0)))))->v))))) goto L_C032C3C;
    (((struct o44_float *)((*(int *)((((0x2E0 + v0_0) + (*(int *)(((int)stk + 12)))) + 0x0)))))->v) = w0_4;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_0) + (*(int *)(((int)stk + 12)))) + 0x0))) + 0x0)) = v0_4;
    L_C032C3C:;
    v0_3 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    w0_4 = (((struct o44_float *)(v0_3))->v);
    (((struct o4C_float *)(v0_3))->v) = w0_4;
    (((struct o48_float *)(v0_3))->v) = w0_4;
    v0_6 = (v0_3);
    goto L_C032C4C;
    L_C032C6E:;
    goto L_C032F6C;
    L_C03285C:;
    goto L_C032FB8;
    L_C032860:;
    *(unsigned int *)(((int)stk + 12)) = (0x2E0 + v0_0);
    *(unsigned int *)(((int)stk + 16)) = (0x2E0 + v0_0);
    *(unsigned int *)(((int)stk + 4)) = (0x2E0 + v0_0);
    v0_3 = (v0_4);
    w0_0 = (5.0f);
    L_C032A00:;
    if (((int)v0_3 >= (int)v0_2)) goto L_C032A24;
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    *(unsigned int *)((v0_4 + 0x14)) = ((*(int *)((v0_4 + 0x14))) + (*(int *)((v0_4 + 0x38))));
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    (((struct o8_float *)(v0_4))->v) = (((((struct o8_float *)(v0_4))->v)) + ((((struct o2C_float *)(v0_4))->v)));
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(int *)((int)stk + 0) = (0x4 + v0_4);
    (((struct o4_float *)(v0_4))->v) = ((math_cos_angle16(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x14)))) + v0_1))) * ((((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0)))))->v)));
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(int *)((int)stk + 0) = (0xC + v0_4);
    w0_4 = math_sin_angle16(((-(*(int *)(((*(int *)(((int)stk + 8))) + 0x14)))) + v0_1));
    w0_5 = (((struct o28_float *)((*(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0)))))->v);
    (((struct oC_float *)(v0_4))->v) = (w0_4 * w0_5);
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    v0_5 = (0x28);
    v0_6 = (v0_4);
    w0_4 = ((w0_4 * w0_5));
    if ((!(((((struct o28_float *)(v0_4))->v)) > ((((struct o30_float *)(v0_4))->v))))) goto L_C03293E;
    v0_4 = *(int *)((((v0_3 << 2) + (0x2E0 + v0_0)) + 0x0));
    *(float *)((v0_4 + v0_5)) = ((*(float *)((v0_4 + v0_5))) + w0_0);
    L_C03293E:;
    v0_5 = (0x44);
    if ((!(w0_2 > ((((struct o44_float *)((*(int *)((((v0_3 << 2) + (0x2E0 + v0_0)) + 0x0)))))->v))))) goto L_C0329CE;
    v0_4 = *(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0));
    *(int *)((int)stk + 0) = (v0_5 + v0_4);
    w0_6 = math_rand_float();
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_4);
    v0_4 = ((v0_3 << 2));
    w0_4 = (w0_6);
    w0_5 = (2.14748365e+09f);
    w0_4 = ((w0_6 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_6 * w0_1))) goto L_C032976;
    w0_4 = ((w0_4 - (w0_5 + w0_5)));
    L_C032976:;
    v0_5 = (int)((unsigned int)(int)w0_4 % (unsigned int)v0_2);
    w0_4 = ((float)v0_5);
    FPUL_ = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C032994;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C032994:;
    v0_5 = *(int *)((int)stk + 0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) + ((w0_4 + w0_2) / w0_3));
    v0_5 = (0x44);
    if ((!(((((struct o44_float *)((*(int *)(((v0_4 + (0x2E0 + v0_0)) + 0x0)))))->v)) > w0_2))) goto L_C0329BE;
    *(float *)(((*(int *)((((v0_3 << 2) + (0x2E0 + v0_0)) + 0x0))) + v0_5)) = w0_2;
    L_C0329BE:;
    v0_4 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_4 = (((struct o44_float *)(v0_4))->v);
    (((struct o4C_float *)(v0_4))->v) = w0_4;
    (((struct o48_float *)(v0_4))->v) = w0_4;
    L_C0329CE:;
    w0_5 = (((struct o8_float *)((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))))->v);
    w0_4 = (w0_5);
    if ((!(w0_5 > (((((struct o24_float *)((*(int *)((v0_0 + 0x1C)))))->v)) + 300.0f)))) goto L_C0329EC;
    fx_randomize_particle((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    L_C0329EC:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    v0_3 = ((v0_3 + 0x1));
    goto L_C032A00;
    L_C032A24:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C032A36;
    goto L_C032E24;
    L_C032A36:;
    if (((*(signed char *)((0x71BA + (*(int *)((v0_0 + 0x1C)))))) == 11)) goto L_C032A44;
    goto L_C032E24;
    L_C032A44:;
    if (((*(signed char *)((0x7223 + (*(int *)((v0_0 + 0x1C)))))) == 2)) goto L_C032A5C;
    if (((*(signed char *)((0x7223 + (*(int *)((v0_0 + 0x1C)))))) == 4)) goto L_C032A5C;
    goto L_C032E24;
    L_C032A5C:;
    v0_1 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0xA));
    v0_5 = (v0_1);
    if (((int)v0_1 > (int)0x2)) goto L_C032A6A;
    goto L_C032FB8;
    L_C032A6A:;
    goto L_C032E24;
}

int FUN_0c0bf86e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(signed char *)((a4 + 0x9));
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 != 2) {
                            if (t1 != 3) {
                                t2 = t1;
                                if (t1 != 4) {
                                } else {
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                                    t1 = (((struct oEC_short *)(a4))->v);
                                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 60.0f);
                                    if (!(((float)t1 / 60.0f) > 0.0f)) {
                                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                                    }
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                                    t2 = 0xEC;
                                }
                                t1 = t2;
                            } else {
                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.5f);
                                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.5f);
                                t2 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                                t3 = 0xEE;
                                if ((short)(t2 - 1) == 0) {
                                    (((struct oEE_ushort *)(a4))->v) = 0x2;
                                    t2 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                    t3 = (t2 + 0x1);
                                }
                                t1 = t3;
                            }
                            t2 = t1;
                        } else {
                            t1 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                            t3 = 0xEE;
                            if ((short)(t1 - 1) == 0) {
                                (((struct oEE_ushort *)(a4))->v) = 0x3;
                                t1 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                                t3 = (t1 + 0x1);
                            }
                            t2 = t3;
                        }
                        t1 = t2;
                    } else {
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.5f);
                        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.5f);
                        t2 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                        t3 = 0xEE;
                        if ((short)(t2 - 1) != 0) {
                        } else {
                            (((struct oEE_ushort *)(a4))->v) = 0x2;
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t3 = (t2 + 0x1);
                        }
                        t1 = t3;
                    }
                    t2 = t1;
                } else {
                    (((struct oEE_ushort *)(a4))->v) = 0x2;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.5f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.5f);
                    t1 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                    t3 = 0xEE;
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct oEE_ushort *)(a4))->v) = 0x2;
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x200);
                return t2;
            }
            if (t0 == 3) {
                t1 = *(signed char *)((a4 + 0x9));
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 != 2) {
                            if (t1 != 3) {
                                t2 = t1;
                                if (t1 != 4) {
                                } else {
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                                    t1 = (((struct oEC_short *)(a4))->v);
                                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 60.0f);
                                    if (!(((float)t1 / 60.0f) > 0.0f)) {
                                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                                    }
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                                    t2 = 0xEC;
                                }
                                t1 = t2;
                            } else {
                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.5f);
                                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.5f);
                                t2 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                                t3 = 0xEE;
                                if ((short)(t2 - 1) == 0) {
                                    (((struct oEE_ushort *)(a4))->v) = 0x2;
                                    t2 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                    t3 = (t2 + 0x1);
                                }
                                t1 = t3;
                            }
                            t2 = t1;
                        } else {
                            t1 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                            t3 = 0xEE;
                            if ((short)(t1 - 1) == 0) {
                                (((struct oEE_ushort *)(a4))->v) = 0x3;
                                t1 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                                t3 = (t1 + 0x1);
                            }
                            t2 = t3;
                        }
                        t1 = t2;
                    } else {
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.5f);
                        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.5f);
                        t2 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                        t3 = 0xEE;
                        if ((short)(t2 - 1) != 0) {
                        } else {
                            (((struct oEE_ushort *)(a4))->v) = 0x2;
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t3 = (t2 + 0x1);
                        }
                        t1 = t3;
                    }
                    t2 = t1;
                } else {
                    (((struct oEE_ushort *)(a4))->v) = 0x2;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.5f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.5f);
                    t1 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                    t3 = 0xEE;
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct oEE_ushort *)(a4))->v) = 0x2;
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x400);
                return t2;
            }
            if (t0 == 4) {
                t1 = *(signed char *)((a4 + 0x9));
                if (t1 != 0) {
                    t2 = t1;
                    if (t1 != 1) {
                    } else {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x400);
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.0199999996f);
                        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.0199999996f);
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 30.0f);
                        if (((float)t1 / 30.0f) > 0.0f) {
                        } else {
                            *(unsigned char *)((a4 + 0x8)) = 0xA;
                        }
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        t2 = 0xEC;
                    }
                    t1 = t2;
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x200);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.00999999978f);
                    t2 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x1E;
                    }
                    t1 = 0xEC;
                }
                return t1;
            }
            if (t0 == 5) {
                t1 = *(signed char *)((a4 + 0x9));
                t2 = t1;
                if (t1 != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x400);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.00999999978f);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 60.0f);
                    if (((float)t1 / 60.0f) > 0.0f) {
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t2 = 0xEC;
                }
                return t2;
            }
            if (t0 == 6) {
                t1 = *(signed char *)((a4 + 0x9));
                t2 = t1;
                if (t1 != 0) {
                } else {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.00999999978f);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 60.0f);
                    if (((float)t1 / 60.0f) > 0.0f) {
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t2 = 0xEC;
                }
                return t2;
            }
            if (t0 == 7) {
                t1 = *(signed char *)((a4 + 0x9));
                t2 = t1;
                if (t1 != 0) {
                } else {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 0.000999999931f);
                    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + 0.000999999931f);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.000999999931f);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 60.0f);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t1 / 60.0f);
                    if (((float)t1 / 60.0f) > 0.0f) {
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t2 = 0xEC;
                }
                return t2;
            }
            if (t0 == 8) {
                t0 = *(signed char *)((a4 + 0x9));
                t1 = t0;
                if (t0 == 0) {
                    FUN_0c0bfe76(a4);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.0399999991f);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.0199999996f);
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.0399999991f);
                    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 20.0f);
                    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 20.0f);
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 20.0f);
                    if (!(((float)t0 / 20.0f) > 0.0f)) {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t1 = 0xEC;
                }
                return t1;
            }
            return obj_destroy(a4);
        }
        t0 = *(signed char *)((a4 + 0x9));
        t1 = t0;
        if (t0 != 0) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x4000);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0199999996f);
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 20.0f);
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 20.0f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 20.0f);
            if (!(((float)t0 / 20.0f) > 0.0f)) {
                *(unsigned char *)((a4 + 0x8)) = 0xA;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            t1 = 0xEC;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x800);
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 30.0f);
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 30.0f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 30.0f);
            if (((float)t0 / 30.0f) > 0.0f) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0xA;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            t1 = 0xEC;
        }
        t0 = t1;
    } else {
        FUN_0c0bfe20(a4);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x800);
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        t2 = 0xEC;
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1E;
            t1 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
            t2 = (t1 + 0x1);
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c06acec(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t10;
    register int t11;
    register int t46;
    register int t50;
    register int t51;
    register int t58;
    register int t183;
    int t25;
    register int t54;
    register int t55;
    register int t56;
    int t57;
    register int t80;
    register int t81;
    register int t82;
    register int t100;
    register int t101;
    register int t102;
    register int t105;

    t0 = *(signed char *)((a4 + 0x7223));
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
                                return pl_ryoma_attack_kind68(a4, a5, a6, a7);
                            }
                            return pl_ryoma_attack_kind7(a4, a5, a6, a7);
                        }
                        return pl_ryoma_attack_kind68(a4, a5, a6, a7);
                    }
                    return pl_ryoma_attack_kind5(a4, a5, a6, a7);
                }
                return pl_ryoma_attack_kind4(a4, a5, a6, a7);
            }
            return pl_ryoma_attack_kind3(a4, a5, a6, a7);
        }
        return pl_ryoma_attack_kind2(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0xB));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x5) {
            pl_turn_to_opponent(a4, 0x71C);
        }
        t10 = hit_probe_step_by_velocity(a4, (0x7254 + a4), 60.0f);
        if ((signed char)t10 == 2) {
            t11 = *(signed char *)((a4 + 0x7243));
            (((struct o7243_uchar *)(a4))->v) = (t11 - 1);
            if ((signed char)(t11 - 1) == 0) {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7254_float *)(a4))->v)));
                (((struct o7243_uchar *)(a4))->v) = 0x2;
            }
        } else {
            (((struct o7243_uchar *)(a4))->v) = 0x2;
        }
        if (!(((((struct o274_float *)(a4))->v)) > 0.0f) && (t25 = *(signed char *)((a4 + 0x2D9)), t25 != 2)) {
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
        } else {
            (((struct o3C_float *)(a4))->v) = 0.0f;
        }
        pl_apply_velocity(a4);
        pl_apply_motion_translation(a4);
        if (((((struct oEC_short *)(a4))->v)) == (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x10)))) {
            fx_spawn_09(a4, (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x14))));
        }
        t46 = pl_step_motion(a4);
        if ((signed char)t46 != 0) {
            pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        }
        t50 = (((struct oEC_short *)(a4))->v);
        t51 = (((struct oF0_short *)(a4))->v);
        if (((int)t50 >= (int)(*(int *)((((((t51 << 2) << 2) << 1) + 0xC14F02C) + 0x4)))) && ((t54 = *(int *)((((((t51 << 2) << 2) << 1) + 0xC14F02C) + 0x8)), (int)t50 <= (int)t54) && ((t55 = (((struct o2E4_int *)(a4))->v), (t55 & 0x400) != 0) && ((t56 = (((struct o71F4_short *)(a4))->v), (int)t56 > 0) && (t57 = (((struct oEE_short *)(a4))->v), t57 == 0))))) {
            t58 = (((struct o71F4_short *)(a4))->v);
            (((struct o71F4_ushort *)(a4))->v) = (int)((float)t58 - 240.0f);
            if ((int)(short)(int)((float)t58 - 240.0f) < 0) {
                (((struct o71F4_ushort *)(a4))->v) = 0x0;
            }
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        }
        if (((((struct oEC_short *)(a4))->v)) == (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x18)))) {
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                *(int *)((int)stk + 12) = 0xC14EECC;
                *(int *)((int)stk + 8) = 0xC14EEC0;
                *(int *)((int)stk + 4) = 0x52;
                t82 = (*(int *)(((0xC14F02C + (((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
                *(int *)((int)stk + 0) = t82;
                t80 = 0xC14EECC;
                t81 = 0xC14EEC0;
            } else {
                *(int *)((int)stk + 12) = 0xC14EEE4;
                *(int *)((int)stk + 8) = 0xC14EED8;
                *(int *)((int)stk + 4) = 0x52;
                t82 = (*(int *)(((0xC14F02C + (((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
                *(int *)((int)stk + 0) = t82;
                t80 = 0xC14EEE4;
                t81 = 0xC14EED8;
            }
            fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, t82, 0x52, t81, t80);
            if (((((struct oF0_short *)(a4))->v)) == 4) {
                if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                    *(int *)((int)stk + 12) = 0xC14EF2C;
                    *(int *)((int)stk + 8) = 0xC14EF20;
                    *(int *)((int)stk + 4) = 0x42;
                    t102 = (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x1C)));
                    *(int *)((int)stk + 0) = t102;
                    t100 = 0xC14EF2C;
                    t101 = 0xC14EF20;
                    t105 = 0x11;
                } else {
                    *(int *)((int)stk + 12) = 0xC14EF44;
                    *(int *)((int)stk + 8) = 0xC14EF38;
                    *(int *)((int)stk + 4) = 0x42;
                    t102 = (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x1C)));
                    *(int *)((int)stk + 0) = t102;
                    t100 = 0xC14EF44;
                    t101 = 0xC14EF38;
                    t105 = 0x1A;
                }
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, t105, 0x1, t102, 0x42, t101, t100);
                if (((((struct oF0_short *)(a4))->v)) == 4) {
                    if (((((struct oEC_short *)(a4))->v)) == 2) {
                        (((struct o40_uchar *)((0x1600 + (0x1E80 + a4))))->v) = 0x0;
                        (((struct o710C_uchar *)(a4))->v) = 0x3;
                    } else {
                        if (((((struct oEC_short *)(a4))->v)) == 69) {
                            (((struct o40_uchar *)((0x1600 + (0x1E80 + a4))))->v) = 0x1;
                            (((struct o710C_uchar *)(a4))->v) = 0x0;
                        }
                    }
                }
            }
        } else {
            if (((((struct oF0_short *)(a4))->v)) == 4) {
                if (((((struct oEC_short *)(a4))->v)) == 2) {
                    (((struct o40_uchar *)((0x1600 + (0x1E80 + a4))))->v) = 0x0;
                    (((struct o710C_uchar *)(a4))->v) = 0x3;
                } else {
                    if (((((struct oEC_short *)(a4))->v)) == 69) {
                        (((struct o40_uchar *)((0x1600 + (0x1E80 + a4))))->v) = 0x1;
                        (((struct o710C_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)(*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0xC)))) {
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                pl_start_motion(a4, 0x1, (*(int *)((((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C) + 0x0))));
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                return pl_turn_to_opponent(a4, 0x71C);
            }
            return 0xEE;
        }
        return 0xF0;
    }
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, (*(int *)(((((((((struct oF0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC14F02C))));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    t183 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t183 - 240.0f);
    if ((int)(short)(int)((float)t183 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    return 0x71F4;
}

int FUN_0c0c15be(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        if (((((struct oEC_short *)(a4))->v)) == 40) {
            obj_set_record_char(a4, 0x7B);
        } else {
            if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0xA)) != 0) {
                t0 = 0xC0E6E5C;
            } else {
                obj_set_record_char(a4, 0x70);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0xA)) == 0) {
            obj_set_record_char(a4, 0x70);
        } else {
            t1 = 0xC0E6E5C;
        }
        t0 = t1;
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        t2 = t0;
        if (t1 != 1) {
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x71C);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - 0.179999992f);
            if (!(((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            u0 = (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
            if (!(u0 > 0.0f)) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            t1 = (((struct oEC_short *)(a4))->v);
            t3 = t0;
            if ((int)t1 >= (int)0x16) {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t3 = t0;
            }
            t0 = t3;
            t3 = 0x16;
            t2 = t1;
            u1 = u0;
            u0 = 0.0f;
        }
        t1 = t0;
        t0 = t3;
        t3 = t2;
        u2 = u1;
        u1 = u0;
    } else {
        t2 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + 0x71C);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        u0 = (((struct o24_float *)(t2))->v);
        (((struct o24_float *)(t2))->v) = (u0 + 0.199999988f);
        t2 = (((struct oEC_short *)(a4))->v);
        if ((int)t2 < (int)0x11) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = 0x11;
        t3 = t2;
        u1 = (u0 + 0.199999988f);
    }
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.5f);
    } else {
        t2 = 0xC0C17A0;
        t4 = t1;
        t1 = t0;
        t0 = t3;
        t3 = 0x4;
        t5 = 0x1;
        u0 = u1;
        for (;;) {
            if ((int)t5 >= (int)0xA) {
                break;
            }
            t1 = 0x2E0;
            t2 = 0x1C;
            t5 = (t5 + 0x1);
            t1 = (t1 + a4);
            t1 = (t1 + t3);
            t0 = (*(int *)((t1 + 0x0)));
            t4 = (*(int *)((t0 + 0x14)));
            t4 = (t4 + 0xAAB);
            *(unsigned int *)((t0 + 0x14)) = t4;
            t0 = 0x2E0;
            t0 = (t0 + a4);
            t0 = (t0 + t3);
            t1 = (*(int *)((t0 + 0x0)));
            t0 = 0x2E0;
            u0 = (*(float *)((t1 + t2)));
            t0 = (t0 + a4);
            u0 = (u0 + 0.049999997f);
            t0 = (t0 + t3);
            t3 = (t3 + 0x4);
            *(float *)((t1 + t2)) = u0;
            t2 = 0x24;
            t1 = (*(int *)((t0 + 0x0)));
            u0 = (*(float *)((t1 + t2)));
            u0 = (u0 + 0.049999997f);
            *(float *)((t1 + t2)) = u0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        if ((int)t0 >= (int)0x15) {
            t1 = 0xEC;
            t2 = t0;
            t0 = 0x15;
            t3 = ((0x2E0 + a4) + 0x4);
            t4 = ((0x2E0 + a4) + 0x4);
            t5 = ((0x2E0 + a4) + 0x4);
            t6 = 0x1;
            t7 = ((0x2E0 + a4) + 0x4);
            u1 = u2;
            u2 = u0;
            for (;;) {
                if ((int)t6 >= (int)0xA) {
                    break;
                }
                t0 = 0x2E0;
                t7 = t6;
                t7 = (t7 << 2);
                t0 = (t0 + a4);
                t0 = (t0 + t7);
                t2 = (*(int *)((t0 + 0x0)));
                t1 = 0x44;
                t0 = 0x2E0;
                u2 = (*(float *)((t2 + t1)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t7);
                *(float *)((t2 + t1)) = u2;
                t1 = 0x48;
                t2 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t2 + t1)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t7);
                *(float *)((t2 + t1)) = u2;
                t1 = 0x4C;
                t2 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t2 + t1)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t7);
                *(float *)((t2 + t1)) = u2;
                t1 = 0x44;
                t2 = (*(int *)((t0 + 0x0)));
                u2 = 0.0f;
                u1 = (*(float *)((t2 + t1)));
                if (!(u1 > u2)) {
                    t2 = 0x2E0;
                    t2 = (t2 + a4);
                    t2 = (t2 + t7);
                    t0 = (*(int *)((t2 + 0x0)));
                    *(float *)((t0 + t1)) = 0.0f;
                }
                t0 = 0x2E0;
                t1 = 0x48;
                u2 = 0.0f;
                t0 = (t0 + a4);
                t0 = (t0 + t7);
                t2 = (*(int *)((t0 + 0x0)));
                u1 = (*(float *)((t2 + t1)));
                if (!(u1 > u2)) {
                    t2 = (*(int *)((t3 + 0x0)));
                    *(float *)((t2 + t1)) = 0.0f;
                }
                t0 = (*(int *)((t5 + 0x0)));
                t1 = 0x4C;
                u2 = 0.0f;
                u1 = (*(float *)((t0 + t1)));
                t6 = (t6 + 0x1);
                if (!(u1 > u2)) {
                    t2 = (*(int *)((t4 + 0x0)));
                    *(float *)((t2 + t1)) = 0.0f;
                }
                t3 = (t3 + 0x4);
                t5 = (t5 + 0x4);
                t4 = (t4 + 0x4);
            }
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x1E) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            t0 = 0x1E;
            t1 = (0x2E0 + a4);
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)0xA) {
                    break;
                }
                t0 = (*(int *)((t1 + 0x0)));
                t1 = (t1 + 0x4);
                t2 = (t2 + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x8);
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x31;
            (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        }
    }
    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x28) {
        return obj_destroy(a4);
    }
    return 0xEC;
}
