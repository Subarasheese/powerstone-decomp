/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_short { char p[0x14]; short v; };
struct o16_short { char p[0x16]; short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_short { char p[0x18]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o72AD_uchar { char p[0x72AD]; unsigned char v; };
struct o72AE_uchar { char p[0x72AE]; unsigned char v; };
struct o72AF_uchar { char p[0x72AF]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o75C_float { char p[0x75C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c01f164(int);
int FUN_0c01f350(int, int, int, int);
int FUN_0c01fd48(int);
int FUN_0c0207a2(int, int);
int FUN_0c020cc2(int, int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c059c44(int, int);
int FUN_0c059cec(int, int, int);
int FUN_0c05d254(int);
int FUN_0c0646fe(int);
int FUN_0c0647f0(int, int);
int FUN_0c0648d4(int);
int FUN_0c0d0e50(int, int, int, int);
int FUN_0c0d2424(int);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int);
int conv_s16x4_to_f32(int, int);
int conv_s16x5_to_f32(int, int);
int fx_spawn_0454b4(int, int);
int hit_any_part_pair_overlap(int, int);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
float math_signed_sqrt(float);
int math_vec3_add(int, int, int);
float math_vec3_length(int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3_sub(int, int, int);
int nlCalcPoint(int, int);
int obj_destroy(int);
int obj_set_mode_owner(int, int, int);
int obj_update_distance_cull(int);
int obj_update_distance_cull_b(int);
int pl_change_state(int, int, int, int);
int pl_falcon_attack_kind68_phase0(int);
int pl_falcon_attack_kind68_phase1(int);
int pl_falcon_attack_kind68_phase2(int);
int pl_falcon_attack_kind68_phase3(int);
int pl_falcon_attack_kind68_phase4(int);
int pl_falcon_attack_kind68_phase5(int);
int pl_jack_mode04_phase0(int);
int pl_jack_mode04_phase1(int);
int pl_jack_mode04_phase2(int);
int pl_jack_wait_anim_end(int);
int pl_mode08_09_enter_v0(int);
int pl_mode08_09_enter_v1(int);
int pl_wait_anim_end_b(int);
int ui_draw_text_stub(int, int, float, float, float, float);
int vmu_menu_state_load(int, int, int, int);
int vmu_menu_step_notice_wait_ok_flag(int, int, int, int);
int fx_tick_model_effect(int a4);
int FUN_0c059d7e(int a4, int a5, int a6, int a7);
int FUN_0c024fe4(int a4, int a5, int a6);
int FUN_0c025332(int a4, int a5, int a6);
int FUN_0c05d0d8(int a4);
int FUN_0c0906e6(int a4);
int FUN_0c02fffc(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0207ca(int a4, int a5);
int FUN_0c033390(int a4);
int FUN_0c0246b2(int a4);
int FUN_0c01eee0(int a4, int a5, int a6, int a7);
int FUN_0c02bc0e(int a4);
int FUN_0c020be0(int a4, int a5, int a6);
int FUN_0c028ea0(int a4, int a5, float f4);
int FUN_0c05ae26(int a4);
int FUN_0c0d0d80(int a4, int a5, int a6, int a7);
int FUN_0c053dcc(void);
int FUN_0c09c2ce(void);
int FUN_0c0ac4d0(float f4);
int FUN_0c09c80e(int a4);
int FUN_0c09de5e(int a4);
int pl_start_power_form_attack(int a4, int a5, int a6, int a7);
int pl_set_effect_at_frame(int a4, int a5, int a6, int a7);
int FUN_0c01b4f2(int a4, int a5);
int pl_mode10_update(int a4);
int stage_point_in_box(int a4, int a5);
int vmu_menu_update_objs(int a4, int a5, int a6, int a7);
int FUN_0c04ca94(int a4);
int FUN_0c0ccb60(void);
int FUN_0c0ccfba(int a4, int a5, int a6, int a7);
int FUN_0c0c3ab2(int a4);
int FUN_0c09ca88(int a4, int a5);
int pl_falcon_attack_kind68(int a4);
int pl_jack_mode04_update(int a4);
int FUN_0c0ac5c4(int a4);
int pl_mode09_enter(int a4);

int fx_tick_model_effect(int a4)
{
    int stk[28];
    register int t0;
    register int t1;
    register int t8;
    register float u9;
    register int t753;
    register int t31;
    register int t33;
    register int t48;
    register int t53;
    register int t59;
    register int t60;
    register float u64;
    register int t70;
    register int t79;
    register int t88;
    register int t97;
    register int t103;
    register int t106;
    register int t125;
    register int t126;
    register int t127;
    register float u129;
    register float u130;
    register int t136;
    register int t145;
    register float u153;
    register float u154;
    register float u155;
    register int t160;
    register int t169;
    register int t175;
    register int t178;
    register int t197;
    register int t198;
    register float u201;
    register int t207;
    register int t216;
    register int t217;
    register int t222;
    register int t225;
    register int t244;
    register int t245;
    register int t246;
    register float u248;
    register float u249;
    register int t255;
    register int t263;
    register int t269;
    register int t270;
    register int t276;
    register int t277;
    register int t281;
    register int t288;
    register int t312;
    register int t313;
    register int t317;
    register int t318;
    register float u321;
    register int t323;
    register int t342;
    register int t343;
    register int t349;
    register int t358;
    register int t367;
    register int t376;
    register int t382;
    register int t455;
    register int t474;
    register int t475;
    register float u478;
    register int t484;
    register int t493;
    register int t502;
    register int t511;
    register int t517;
    register int t533;
    register int t552;
    register int t553;
    register int t569;
    register int t571;
    register int t572;
    register int t573;
    register int t574;
    register int t575;
    register float u577;
    register float u578;
    register int t587;
    register int t591;
    register int t597;
    register int t611;
    register int t620;
    register int t624;
    register int t630;
    register int t641;
    register float u657;
    register float u660;
    register int t676;
    register float u682;
    register float u685;
    register int t698;
    register float u705;
    register float u708;
    register int t717;
    register float t723;
    register float t724;
    register int t732;
    register int t737;
    register float u739;
    register float u741;
    register float u743;
    register int t784;
    register int t786;
    register int t787;
    register int t789;
    register int t791;
    register int t797;
    register int t798;
    register int t800;
    register int t802;
    register int t803;
    register int t806;
    register int t822;
    register int t829;
    register int t831;
    register int t832;
    register int t837;
    register int t838;
    register int t842;
    register int t846;
    register int t847;
    register int t848;
    register int t851;
    register int t858;
    register int t860;
    register int t864;
    register int t867;
    register int t868;
    register int t873;
    register int t877;
    register int t886;
    register int t897;
    register int t904;
    register int t905;
    register int t908;
    register int t909;
    register int t913;
    register int t915;
    register int t920;
    register int t11;
    register int t12;
    register float u13;
    register float u14;
    register int t15;
    register int t16;
    register float u17;
    register float u18;
    register int t19;
    register int t20;
    register float u21;
    register float u22;
    register int t23;
    register int t24;
    register float u25;
    register float u26;
    int t27;
    register int t28;
    register float u29;
    register float u30;
    register float u565;
    register float u530;
    register float u452;
    int t62;
    register int t63;
    register int t65;
    register float u439;
    int t128;
    register int t131;
    register float u426;
    int t200;
    register int t202;
    register float u415;
    int t247;
    register int t250;
    register float u405;
    register int t311;
    register int t287;
    register float u396;
    register int t320;
    register int t322;
    register int t344;
    int t477;
    register int t479;
    register float u576;
    register int t916;

    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 == 1) {
            FUN_0c0e1550(0x1);
            FUN_0c0e1240(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            t8 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 8)) = (0x75C + t0);
            u9 = *(float *)((t8 + 0x0));
            t753 = 0x8;
            if ((u9 == ((((struct o75C_float *)(t0))->v))) && ((t11 = *(int *)(((int)stk + 8)), t12 = *(int *)(((int)stk + 0)), u13 = (((struct o4_float *)(t11))->v), u14 = (((struct o4_float *)(t12))->v), u14 == u13) && ((t15 = *(int *)(((int)stk + 8)), t16 = *(int *)(((int)stk + 0)), u17 = (((struct o8_float *)(t15))->v), u18 = (((struct o8_float *)(t16))->v), u18 == u17) && ((t19 = *(int *)(((int)stk + 8)), t20 = *(int *)(((int)stk + 4)), u21 = *(float *)((t20 + 0x0)), u22 = (((struct oC_float *)(t19))->v), u21 == u22) && ((t23 = *(int *)(((int)stk + 8)), t24 = *(int *)(((int)stk + 4)), u25 = (((struct o4_float *)(t24))->v), u26 = (((struct o4_float *)((t23 + 0xC)))->v), u25 == u26) && (t27 = *(int *)(((int)stk + 8)), t28 = *(int *)(((int)stk + 4)), u29 = (((struct o8_float *)(t28))->v), u30 = (((struct o8_float *)((t27 + 0xC)))->v), u29 == u30)))))) {
            } else {
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                t31 = *(signed char *)((a4 + 0xA));
                if ((t31 & 0x70) != 0) {
                    if ((t31 & 0x70) != 16) {
                        if ((t31 & 0x70) == 32) {
                            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                            t33 = (t31 & 0x70);
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                *(unsigned int *)(((int)stk + 4)) = (0x75C + t0);
                                t33 = (*(int *)(((int)stk + 4)));
                                t33 = 0xC;
                                t33 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                t33 = (*(int *)(((int)stk + 0)));
                                t33 = (*(signed char *)((t33 + 0x0)));
                                *(unsigned short *)(((int)stk + 4)) = t33;
                                t48 = t33;
                                t33 = (t33 << 1);
                                t33 = (t33 + t48);
                                t33 = (t33 << 2);
                                t33 = (t33 << 1);
                                t33 = (*(short *)(((int)stk + 4)));
                                t33 = (t33 - 1);
                                t53 = t33;
                                t33 = (t33 << 1);
                                t33 = (t33 + t53);
                                t33 = (t33 << 2);
                                t33 = (t33 << 1);
                                t33 = 0xC;
                                t33 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, 0x0, (0x75C + t0)));
                                t33 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t33 + 0x0)) = ((*(signed char *)((t33 + 0x0))) - 1);
                            }
                            t59 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                            t60 = ((int (*)(void))(FUN_0c0e6fe8))();
                            u64 = *(float *)((t63 + (((*(signed char *)((a4 + 0xA))) & t62) << 2)));
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                            (((struct o6C_uchar *)(((int)stk + 0)))->v) = t65;
                            *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                t70 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                *(unsigned int *)(((int)stk + 12)) = ((short)((((t70 << 1) + t70) << 2) << 1) + (0x75C + t0));
                                math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t70 << 1) + t70) << 2) << 1) + (0x75C + t0)) + 0xC));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                t79 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t79 << 1) + t79) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u64, u64, u64);
                                t88 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_add(((short)((((t88 << 1) + t88) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                t97 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_add((((short)((((t97 << 1) + t97) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                t103 = *(int *)(((int)stk + 0));
                                *(unsigned char *)((t103 + 0x0)) = ((*(signed char *)((t103 + 0x0))) - 1);
                            }
                        } else {
                            if ((t31 & 0x70) == 48) {
                                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                t106 = (t31 & 0x70);
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                        break;
                                    }
                                    t106 = 0xC;
                                    t106 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, (0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                    t106 = 0xC;
                                    t106 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, (0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                    t106 = (*(int *)(((int)stk + 0)));
                                    *(unsigned char *)((t106 + 0x0)) = ((*(signed char *)((t106 + 0x0))) - 1);
                                }
                                t125 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                                t126 = ((int (*)(void))(FUN_0c0e6fe8))();
                                t127 = *(signed char *)((a4 + 0xA));
                                u129 = *(float *)((((t127 & t128) << 2) + 0xC14A898));
                                u130 = *(float *)((((t127 & t128) << 2) + 0xC14A8A4));
                                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                (((struct o6C_uchar *)(((int)stk + 0)))->v) = t131;
                                *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < 0) {
                                        break;
                                    }
                                    t136 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    *(unsigned int *)(((int)stk + 12)) = ((short)((((t136 << 1) + t136) << 2) << 1) + (0x75C + t0));
                                    math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t136 << 1) + t136) << 2) << 1) + (0x75C + t0)) + 0xC));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                    t145 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t145 << 1) + t145) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                                    u153 = u129;
                                    u154 = u129;
                                    u155 = u129;
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > (int)0x1) {
                                        u153 = u130;
                                        u154 = u130;
                                        u155 = u130;
                                    }
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u153, u154, u155);
                                    t160 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_add(((short)((((t160 << 1) + t160) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                    t169 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_add((((short)((((t169 << 1) + t169) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    t175 = *(int *)(((int)stk + 0));
                                    *(unsigned char *)((t175 + 0x0)) = ((*(signed char *)((t175 + 0x0))) - 1);
                                }
                            } else {
                                if ((t31 & 0x70) == 64) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                    t178 = (t31 & 0x70);
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t178 = 0xC;
                                        t178 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0)));
                                        t178 = 0xC;
                                        t178 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0)));
                                        t178 = (*(int *)(((int)stk + 0)));
                                        *(unsigned char *)((t178 + 0x0)) = ((*(signed char *)((t178 + 0x0))) - 1);
                                    }
                                    t197 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                                    t198 = ((int (*)(void))(FUN_0c0e6fe8))();
                                    u201 = *(float *)((0xC14A8B0 + (((*(signed char *)((a4 + 0xA))) & t200) << 2)));
                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = t202;
                                    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t207 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        *(unsigned int *)(((int)stk + 8)) = ((short)((((t207 << 1) + t207) << 2) << 1) + (0x75C + t0));
                                        math_vec3_sub((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (((short)((((t207 << 1) + t207) << 2) << 1) + (0x75C + t0)) + 0xC));
                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u201, u201, u201);
                                        t216 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t217 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 8)) = ((short)((((t216 << 1) + t216) << 2) << 1) + (0x75C + t0));
                                        math_vec3_add((*(int *)(((int)stk + 8))), (((short)((((t216 << 1) + t216) << 2) << 1) + (0x75C + t0)) + 0xC), t217);
                                        t222 = *(int *)(((int)stk + 0));
                                        *(unsigned char *)((t222 + 0x0)) = ((*(signed char *)((t222 + 0x0))) - 1);
                                    }
                                } else {
                                    if ((t31 & 0x70) == 80) {
                                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                        t225 = (t31 & 0x70);
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            t225 = 0xC;
                                            t225 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, (0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                            t225 = 0xC;
                                            t225 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, (0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                            t225 = (*(int *)(((int)stk + 0)));
                                            *(unsigned char *)((t225 + 0x0)) = ((*(signed char *)((t225 + 0x0))) - 1);
                                        }
                                        t244 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                                        t245 = ((int (*)(void))(FUN_0c0e6fe8))();
                                        t246 = *(signed char *)((a4 + 0xA));
                                        u248 = *(float *)((((t246 & t247) << 2) + 0xC14A8C8));
                                        u249 = *(float *)((((t246 & t247) << 2) + 0xC14A8E0));
                                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = t250;
                                        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            t255 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t255 << 1) + t255) << 2) << 1) + (0x75C + t0));
                                            math_vec3_sub((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t255 << 1) + t255) << 2) << 1) + (0x75C + t0)) + 0xC));
                                            *(volatile int *)(((int)stk + 4));
                                            *(volatile int *)(((int)stk + 8));
                                            t263 = ((int (*)(void))(FUN_0c0e6fe8))();
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u248, u248, u248);
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u249, u249, u249);
                                            t269 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t270 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t269 << 1) + t269) << 2) << 1) + (0x75C + t0));
                                            math_vec3_add((*(int *)(((int)stk + 12))), (((short)((((t269 << 1) + t269) << 2) << 1) + (0x75C + t0)) + 0xC), t270);
                                            t276 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t277 = *(int *)(((int)stk + 8));
                                            *(unsigned int *)(((int)stk + 12)) = (((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC);
                                            math_vec3_add((((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC), t277);
                                            t281 = *(int *)(((int)stk + 0));
                                            *(unsigned char *)((t281 + 0x0)) = ((*(signed char *)((t281 + 0x0))) - 1);
                                        }
                                    } else {
                                        if ((t31 & 0x70) == 96) {
                                            *(volatile short *)((a4 + 0xEE));
                                            *(volatile signed char *)((a4 + 0xA));
                                            t288 = FUN_0c0e6e5c(0x5);
                                            if (t288 == 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = t287;
                                                for (;;) {
                                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                        break;
                                                    }
                                                    t288 = 0xC;
                                                    t288 = (((int (*)(int, int))(FUN_0c0e6fe8))((0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                                    t288 = 0xC;
                                                    t288 = (((int (*)(int, int))(FUN_0c0e6fe8))((0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                                    t288 = (*(int *)(((int)stk + 0)));
                                                    *(unsigned char *)((t288 + 0x0)) = ((*(signed char *)((t288 + 0x0))) - 1);
                                                }
                                                t311 = t287;
                                            }
                                            t312 = ((int (*)(int))(FUN_0c0e6fe8))(t311);
                                            t313 = ((int (*)(void))(FUN_0c0e6fe8))();
                                        } else {
                                            if ((t31 & 0x70) == 112) {
                                                *(volatile short *)((a4 + 0xEE));
                                                *(volatile signed char *)((a4 + 0xA));
                                                t323 = FUN_0c0e6e5c(0x5);
                                                if (t323 != 0) {
                                                    t317 = ((int (*)(void))(FUN_0c0e6fe8))();
                                                    t318 = ((int (*)(void))(FUN_0c0e6fe8))();
                                                } else {
                                                    u321 = *(float *)((t320 + 0x0));
                                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = t322;
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t323 = 0xC;
                                                        t323 = (((int (*)(int, int, int))(FUN_0c0e6fe8))(t322, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0)));
                                                        t323 = 0xC;
                                                        t323 = (((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0)));
                                                        t323 = (*(int *)(((int)stk + 0)));
                                                        *(unsigned char *)((t323 + 0x0)) = ((*(signed char *)((t323 + 0x0))) - 1);
                                                    }
                                                    t342 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t322, 0x0, t320);
                                                    t343 = ((int (*)(void))(FUN_0c0e6fe8))();
                                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = t344;
                                                    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                                    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t349 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        *(unsigned int *)(((int)stk + 12)) = ((short)((((t349 << 1) + t349) << 2) << 1) + (0x75C + t0));
                                                        math_vec3_add((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t349 << 1) + t349) << 2) << 1) + (0x75C + t0)) + 0xC));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.5f, 0.5f, 0.5f);
                                                        t358 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_sub((*(int *)(((int)stk + 8))), ((short)((((t358 << 1) + t358) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u321, u321, u321);
                                                        t367 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_add(((short)((((t367 << 1) + t367) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 8))), -1.0f, -1.0f, -1.0f);
                                                        t376 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_add((((short)((((t376 << 1) + t376) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                        t382 = *(int *)(((int)stk + 0));
                                                        *(unsigned char *)((t382 + 0x0)) = ((*(signed char *)((t382 + 0x0))) - 1);
                                                    }
                                                }
                                            } else {
                                                u396 = u9;
                                            }
                                            u405 = u396;
                                        }
                                        u415 = u405;
                                    }
                                    u426 = u415;
                                }
                                u439 = u426;
                            }
                            u452 = u439;
                        }
                        u530 = u452;
                    } else {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                        t455 = (t31 & 0x70);
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t455 = 0xC;
                            t455 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, (0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                            t455 = 0xC;
                            t455 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0)));
                            t455 = (*(int *)(((int)stk + 0)));
                            *(unsigned char *)((t455 + 0x0)) = ((*(signed char *)((t455 + 0x0))) - 1);
                        }
                        t474 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                        t475 = ((int (*)(void))(FUN_0c0e6fe8))();
                        u478 = *(float *)((0xC14A86C + (((*(signed char *)((a4 + 0xA))) & t477) << 2)));
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = t479;
                        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t484 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t484 << 1) + t484) << 2) << 1) + (0x75C + t0));
                            math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t484 << 1) + t484) << 2) << 1) + (0x75C + t0)) + 0xC));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                            t493 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t493 << 1) + t493) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u478, u478, u478);
                            t502 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_add(((short)((((t502 << 1) + t502) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                            t511 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_add((((short)((((t511 << 1) + t511) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                            t517 = *(int *)(((int)stk + 0));
                            *(unsigned char *)((t517 + 0x0)) = ((*(signed char *)((t517 + 0x0))) - 1);
                        }
                    }
                    u565 = u530;
                } else {
                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                    t533 = (t31 & 0x70);
                    for (;;) {
                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                            break;
                        }
                        t533 = 0xC;
                        t533 = (((int (*)(int, int, int))(FUN_0c0e6fe8))((0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), 0xC14A880));
                        t533 = 0xC;
                        t533 = (((int (*)(int, int))(FUN_0c0e6fe8))((0x75C + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                        t533 = (*(int *)(((int)stk + 0)));
                        *(unsigned char *)((t533 + 0x0)) = ((*(signed char *)((t533 + 0x0))) - 1);
                    }
                    t552 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x5, 0xF, 0xC14A880);
                    t553 = ((int (*)(void))(FUN_0c0e6fe8))();
                }
                *(float *)(((int)stk + 56)) = -99999.0f;
                *(float *)(((int)stk + 52)) = -99999.0f;
                *(float *)(((int)stk + 48)) = -99999.0f;
                *(float *)(((int)stk + 44)) = 99999.0f;
                *(float *)(((int)stk + 40)) = 99999.0f;
                *(float *)(((int)stk + 36)) = 99999.0f;
                *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x6C);
                (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x6E);
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6D);
                t574 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = t574;
                t575 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = t575;
                *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x3C);
                *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 0) + 0x3C) + 0xC);
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x3C) + 0x18);
                t569 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = t569;
                *(unsigned int *)(((int)stk + 4)) = t575;
                *(unsigned int *)(((int)stk + 12)) = t569;
                *(unsigned int *)(((int)stk + 4)) = t575;
                t573 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 8)) = t574;
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 12)) = t569;
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 8)) = t574;
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 4)) = t575;
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 8)) = t574;
                *(unsigned int *)(((int)stk + 0)) = t573;
                *(unsigned int *)(((int)stk + 8)) = t574;
                t571 = 0x24;
                t572 = (((int)stk + 0) + 0x3C);
                u577 = u565;
                u578 = 99999.0f;
                for (;;) {
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) < (int)0x4) {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < (int)0x2) {
                                if ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) != 0) {
                                    t571 = 0x20;
                                    t575 = 0x75C;
                                    t575 = (t575 + t0);
                                    *(unsigned int *)(((int)stk + 24)) = t575;
                                    t587 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                    *(unsigned short *)((((int)stk + 0) + t571)) = t587;
                                    t571 = (*(int *)(((int)stk + 0)));
                                    t571 = (*(signed char *)((t571 + 0x0)));
                                    *(unsigned short *)(((int)stk + 28)) = t571;
                                    t591 = (((t587 + 0x1) << 1) + t571);
                                    t571 = 0x20;
                                    t574 = (*(short *)((((int)stk + 0) + t571)));
                                    t571 = (*(short *)(((int)stk + 28)));
                                    t574 = (t574 << 1);
                                    t571 = (t571 + t574);
                                    t597 = t571;
                                    t571 = (t571 << 1);
                                    t571 = (t571 + t597);
                                    t571 = (t571 << 2);
                                    t574 = (short)t571;
                                    t574 = (t574 + (*(int *)(((int)stk + 24))));
                                    t575 = (t575 + (short)(((t591 << 1) + t591) << 2));
                                    t573 = (*(int *)(((int)stk + 12)));
                                    t571 = (math_vec3_add(t573, t574, t575));
                                    t573 = (*(int *)(((int)stk + 12)));
                                    t571 = (math_vec3_mul_xyz(t573, 0.5f, 0.5f, 0.5f));
                                } else {
                                    t571 = 0x75C;
                                    *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t571 = (t571 + t0);
                                    t572 = (*(int *)(((int)stk + 12)));
                                    t571 = 0xC;
                                    t571 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t573, t574, t575, t569));
                                }
                                t611 = *(int *)(((int)stk + 0));
                                *(volatile signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                *(volatile signed char *)((t611 + 0x0));
                                t571 = 0x75C;
                                t572 = (*(int *)(((int)stk + 20)));
                                t571 = (t571 + t0);
                                t571 = 0xC;
                                t571 = (((int (*)(void))(FUN_0c0e6fe8))());
                                t571 = 0x20;
                                t575 = 0x75C;
                                t575 = (t575 + t0);
                                *(unsigned int *)(((int)stk + 28)) = t575;
                                t620 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                *(unsigned short *)((((int)stk + 0) + t571)) = t620;
                                t571 = (*(int *)(((int)stk + 0)));
                                t571 = (*(signed char *)((t571 + 0x0)));
                                *(unsigned short *)(((int)stk + 24)) = t571;
                                t624 = (((t620 + 0x2) << 1) + t571);
                                t571 = 0x20;
                                t574 = (*(short *)((((int)stk + 0) + t571)));
                                t571 = (*(short *)(((int)stk + 24)));
                                t574 = (t574 + 0x1);
                                t574 = (t574 << 1);
                                t571 = (t571 + t574);
                                t630 = t571;
                                t571 = (t571 << 1);
                                t571 = (t571 + t630);
                                t571 = (t571 << 2);
                                t574 = (short)t571;
                                t574 = (t574 + (*(int *)(((int)stk + 28))));
                                t575 = (t575 + (short)(((t624 << 1) + t624) << 2));
                                t573 = (*(int *)(((int)stk + 16)));
                                t571 = (math_vec3_add(t573, t574, t575));
                                t573 = (*(int *)(((int)stk + 16)));
                                t571 = (math_vec3_mul_xyz(t573, 0.5f, 0.5f, 0.5f));
                                *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) < (int)0x6) {
                                        t575 = (*(int *)(((int)stk + 4)));
                                        t641 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                        t573 = (*(int *)(((int)stk + 0)));
                                        t575 = (*(signed char *)((t575 + 0x0)));
                                        t573 = (*(signed char *)((t573 + 0x0)));
                                        t571 = 0x9C;
                                        t574 = t575;
                                        t572 = 0xC14A824;
                                        t573 = (t573 - (((t641 << 1) + t641) << 2));
                                        t573 = (t573 - ((signed char)t575 << 1));
                                        t573 = (t573 + 0x2E);
                                        t573 = (t573 << 2);
                                        t573 = (t573 << 1);
                                        t573 = (t573 << 2);
                                        t573 = (t573 + (*(int *)((t0 + t571))));
                                        t574 = (t574 << 1);
                                        t574 = (t574 + t575);
                                        t574 = (t574 << 2);
                                        t574 = (signed char)t574;
                                        t574 = (t574 + t572);
                                        t573 = (t573 + 0x70);
                                        t571 = 0x4;
                                        u578 = (*(float *)(((*(int *)(((int)stk + 20))) + 0x0)));
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x8;
                                        u577 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                                        u578 = (u578 * u576);
                                        u576 = (*(float *)((t574 + 0x0)));
                                        u657 = u578;
                                        u657 = u657 + u576 * u577;
                                        u578 = u657;
                                        u577 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x30;
                                        u660 = u578;
                                        u660 = u660 + u576 * u577;
                                        u578 = u660;
                                        *(float *)((t573 + 0x0)) = u578;
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u578 > u577) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x30;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t571 = 0x24;
                                        u578 = (*(float *)((t573 + 0x0)));
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u577 > u578) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x24;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t571 = 0x4;
                                        t572 = 0xC14A824;
                                        *(unsigned int *)((t573 + 0x0)) = ((*(int *)((t573 + 0x0))) | 0x1);
                                        t573 = (t573 + 0x4);
                                        t574 = (*(int *)(((int)stk + 4)));
                                        t574 = (*(signed char *)((t574 + 0x0)));
                                        u577 = (*(float *)(((*(int *)(((int)stk + 12))) + t571)));
                                        t676 = t574;
                                        t574 = (t574 << 1);
                                        t574 = (t574 + t676);
                                        t574 = (t574 << 2);
                                        t574 = (signed char)t574;
                                        u578 = (*(float *)(((*(int *)(((int)stk + 20))) + t571)));
                                        t574 = (t574 + t572);
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x8;
                                        u578 = (u578 * u576);
                                        u576 = (*(float *)((t574 + 0x0)));
                                        u682 = u578;
                                        u682 = u682 + u576 * u577;
                                        u578 = u682;
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x4;
                                        u577 = (*(float *)(((*(int *)(((int)stk + 16))) + t571)));
                                        t571 = 0x34;
                                        u685 = u578;
                                        u685 = u685 + u576 * u577;
                                        u578 = u685;
                                        *(float *)((t573 + 0x0)) = u578;
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u578 > u577) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x34;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t571 = 0x28;
                                        u578 = (*(float *)((t573 + 0x0)));
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u577 > u578) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x28;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t574 = (*(int *)(((int)stk + 4)));
                                        t571 = 0x4;
                                        t572 = 0xC14A824;
                                        t573 = (t573 + 0x4);
                                        t574 = (*(signed char *)((t574 + 0x0)));
                                        t698 = t574;
                                        t574 = (t574 << 1);
                                        t574 = (t574 + t698);
                                        t574 = (t574 << 2);
                                        t574 = (signed char)t574;
                                        t574 = (t574 + t572);
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x8;
                                        u578 = (*(float *)(((*(int *)(((int)stk + 20))) + t571)));
                                        u577 = (*(float *)(((*(int *)(((int)stk + 12))) + t571)));
                                        t571 = 0x8;
                                        u578 = (u578 * u576);
                                        u576 = (*(float *)((t574 + 0x0)));
                                        u705 = u578;
                                        u705 = u705 + u576 * u577;
                                        u578 = u705;
                                        u577 = (*(float *)(((*(int *)(((int)stk + 16))) + t571)));
                                        u576 = (*(float *)((t574 + t571)));
                                        t571 = 0x38;
                                        u708 = u578;
                                        u708 = u708 + u576 * u577;
                                        u578 = u708;
                                        *(float *)((t573 + 0x0)) = u578;
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u578 > u577) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x38;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t571 = 0x2C;
                                        u578 = (*(float *)((t573 + 0x0)));
                                        u577 = (*(float *)((((int)stk + 0) + t571)));
                                        if (u577 > u578) {
                                            u578 = (*(float *)((t573 + 0x0)));
                                            t571 = 0x2C;
                                            *(float *)((((int)stk + 0) + t571)) = u578;
                                        }
                                        t717 = *(int *)(((int)stk + 4));
                                        *(unsigned char *)((t717 + 0x0)) = ((*(signed char *)((t717 + 0x0))) + 0x1);
                                        continue;
                                    }
                                    break;
                                }
                                t572 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t572 + 0x0)) = ((*(signed char *)((t572 + 0x0))) + 0x1);
                                continue;
                            }
                            break;
                        }
                        t572 = (*(int *)(((int)stk + 8)));
                        *(unsigned char *)((t572 + 0x0)) = ((*(signed char *)((t572 + 0x0))) + 0x1);
                        continue;
                    }
                    break;
                }
                t723 = math_vec3_length((((int)stk + 0) + 0x30));
                t724 = math_vec3_length((((int)stk + 0) + 0x24));
                if (t723 > t724) {
                    (((struct o14_float *)(((((struct o9C_int *)(t0))->v))))->v) = t723;
                    (((struct o34_float *)(((((struct o9C_int *)(t0))->v))))->v) = t723;
                } else {
                    (((struct o14_float *)(((((struct o9C_int *)(t0))->v))))->v) = t724;
                    (((struct o34_float *)(((((struct o9C_int *)(t0))->v))))->v) = t724;
                }
                t732 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t732 - 1);
                if ((int)(short)(t732 - 1) <= 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t753 = 0xEE;
                if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x8) {
                    t737 = (((struct oEE_short *)(a4))->v);
                    (((struct o5C_float *)(a4))->v) = ((float)(((t737 << 2) << 2) << 1) / 255.0f);
                    u739 = (((struct o60_float *)(a4))->v);
                    (((struct o60_float *)(a4))->v) = (u739 - ((float)((t737 << 2) << 2) / 255.0f));
                    if (0.0f > (u739 - ((float)((t737 << 2) << 2) / 255.0f))) {
                        (((struct o60_float *)(a4))->v) = 0.0f;
                    }
                    u741 = (((struct o64_float *)(a4))->v);
                    (((struct o64_float *)(a4))->v) = (u741 - ((float)((t737 << 2) << 2) / 255.0f));
                    if (0.0f > (u741 - ((float)((t737 << 2) << 2) / 255.0f))) {
                        (((struct o64_float *)(a4))->v) = 0.0f;
                    }
                    u743 = (((struct o68_float *)(a4))->v);
                    (((struct o68_float *)(a4))->v) = (u743 - ((float)((t737 << 2) << 2) / 255.0f));
                    if (0.0f > (u743 - ((float)((t737 << 2) << 2) / 255.0f))) {
                        (((struct o68_float *)(a4))->v) = 0.0f;
                    }
                    t753 = 0x68;
                }
            }
            t920 = t753;
        } else {
            t920 = (obj_destroy(a4));
        }
    } else {
        if ((*(signed char *)((a4 + 0x9))) == 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            FUN_0c0e1550(0x1);
            FUN_0c0e1240(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            *(volatile int *)(((int)stk + 0));
            t784 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(volatile int *)(((int)stk + 4));
            t786 = ((int (*)(void))(FUN_0c0e6fe8))();
            t787 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t787 + 0x0)) = ((*(int *)((t787 + 0x0))) | 0x1);
            t789 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t789 + 0x0)) = ((*(int *)((t789 + 0x0))) | 0x1);
            t791 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t791 + 0x1);
            t916 = (t791 + 0x1);
        } else {
            FUN_0c0e1550(0x1);
            FUN_0c0e1240(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0x18);
            t797 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t798 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(volatile int *)(((int)stk + 8));
            t800 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(volatile int *)(((int)stk + 12));
            t802 = ((int (*)(void))(FUN_0c0e6fe8))();
            t803 = *(int *)(((int)stk + 0));
            math_vec3_sub(t803, t803, (*(int *)(((int)stk + 8))));
            t806 = *(int *)(((int)stk + 4));
            math_vec3_sub(t806, t806, (*(int *)(((int)stk + 12))));
            math_vec3_mul_xyz((*(int *)(((int)stk + 0))), 0.199999988f, 0.199999988f, 0.199999988f);
            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.199999988f, 0.199999988f, 0.199999988f);
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x18);
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x24);
            for (;;) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x6) {
                    break;
                }
                t822 = ((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0));
                t829 = ((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0));
                t831 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t832 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 12)) = ((short)((((t831 << 1) + t831) << 2) << 1) + (0x75C + t0));
                math_vec3_add(((short)((((t831 << 1) + t831) << 2) << 1) + (0x75C + t0)), ((short)((((t831 << 1) + t831) << 2) << 1) + (0x75C + t0)), t832);
                t837 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t838 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 12)) = (((short)((((t837 << 1) + t837) << 2) << 1) + (0x75C + t0)) + 0xC);
                math_vec3_add((((short)((((t837 << 1) + t837) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t837 << 1) + t837) << 2) << 1) + (0x75C + t0)) + 0xC), t838);
                t842 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t842 + 0x0)) = ((*(signed char *)((t842 + 0x0))) + 0x1);
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            t846 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t847 = ((int (*)(void))(FUN_0c0e6fe8))();
            t848 = *(int *)(((int)stk + 8));
            math_vec3_sub(t848, t848, (*(int *)(((int)stk + 4))));
            t851 = *(int *)(((int)stk + 12));
            math_vec3_sub(t851, t851, (*(int *)(((int)stk + 0))));
            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.043478258f, 0.043478258f, 0.043478258f);
            math_vec3_mul_xyz((*(int *)(((int)stk + 12))), 0.043478258f, 0.043478258f, 0.043478258f);
            t858 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t858 + 0x0)) = ((*(int *)((t858 + 0x0))) | 0x1);
            t860 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t860 + 0x0)) = ((*(int *)((t860 + 0x0))) | 0x1);
            *(volatile int *)((t0 + 0x9C));
            *(volatile int *)(((int)stk + 4));
            t864 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(volatile int *)(((int)stk + 0));
            *(volatile int *)((t0 + 0x9C));
            t867 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t868 = (((int)stk + 0) + 0x6C);
            for (;;) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x18) {
                    break;
                }
                t868 = 0x9C;
                t873 = *(int *)((t0 + t868));
                t868 = 0xC;
                t868 = (((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), t873));
                t868 = 0x9C;
                t877 = *(int *)((t0 + t868));
                t868 = 0xC;
                t868 = (((int (*)(int, int))(FUN_0c0e6fe8))(t877, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                t868 = 0x9C;
                t886 = *(int *)((t0 + t868));
                t868 = 0x9C;
                t868 = (math_vec3_add(((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + (*(int *)((t0 + t868)))) + 0x70), ((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + t886) + 0x70), (*(int *)(((int)stk + 8)))));
                t868 = 0x9C;
                t897 = *(int *)((t0 + t868));
                t868 = 0x9C;
                t868 = (math_vec3_add(((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + (*(int *)((t0 + t868)))) + 0x70), ((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + t897) + 0x70), (*(int *)(((int)stk + 4)))));
                t868 = 0x9C;
                t904 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t905 = *(int *)((t0 + t868));
                t868 = ((((struct o70_int *)(((((t904 << 2) << 2) << 2) + t905)))->v));
                t868 = (t868 | 0x1);
                (((struct o70_uint *)(((((t904 << 2) << 2) << 2) + t905)))->v) = t868;
                t868 = 0x9C;
                t908 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t909 = *(int *)((t0 + t868));
                t868 = ((((struct o70_int *)(((((((t908 << 1) + 0x1) << 2) << 1) << 2) + t909)))->v));
                t868 = (t868 | 0x1);
                (((struct o70_uint *)(((((((t908 << 1) + 0x1) << 2) << 1) << 2) + t909)))->v) = t868;
                t913 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t913 + 0x0)) = ((*(signed char *)((t913 + 0x0))) + 0x1);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t915 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t915 + 0x1);
            t916 = (t915 + 0x1);
        }
        t920 = t916;
    }
    return t920;
}

int FUN_0c059d7e(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t25;
    register int t28;
    register int t61;
    register int t63;
    register float t92;
    register float t100;
    register float t105;
    register int t147;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u12;
    register int t149;
    register int t106;
    register int t107;
    register int t117;

    t0 = 0xC059DDC;
    t1 = 0x0;
    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = a7;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = t1;
        if ((int)t1 < (int)0x2) {
            t0 = (*(signed char *)((a4 + 0x4)));
            t2 = (*(int *)(((int)stk + 0)));
            t9 = 0xC32E248;
            t0 = (t0 << 2);
            t0 = (t0 << 1);
            t9 = (t9 + t0);
            t2 = (t2 << 2);
            t9 = (t9 + t2);
            t9 = (*(int *)((t9 + 0x0)));
            if (t9 == 0) {
                t0 = (*(signed char *)((a4 + 0x3)));
                t1 = (*(int *)(((int)stk + 0)));
                t0 = (t0 << 1);
                t149 = ((0xC383800 + t0) + t1);
                t0 = 0x0;
            } else {
                t0 = (*(signed char *)((a4 + 0x3)));
                t0 = (t0 << 2);
                t1 = 0xC3837F0;
                t0 = (t0 << 1);
                t1 = (t1 + t0);
                t2 = (t2 + t1);
                t1 = 0xC3831EC;
                t25 = (((((*(int *)0xC3837EC) << 2) << 2) << 2) + t1);
                t1 = 0x14A0;
                *(unsigned int *)((t2 + 0x0)) = t25;
                t0 = 0x0;
                *(unsigned int *)(((int)stk + 8)) = t0;
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)(((int)stk + 20)) = (short)((short)t2 * (short)0xDC0);
                t1 = ((short)t2 * (short)t1);
                t1 = (short)t1;
                *(unsigned int *)(((int)stk + 16)) = t1;
                *(unsigned int *)(((int)stk + 4)) = (short)((short)t2 * (short)0x6E0);
                t28 = (short)((short)t2 * (short)0x6E0);
                for (;;) {
                    if ((int)(*(signed char *)((t9 + 0x0))) >= 0) {
                        t0 = (*(signed char *)((t9 + 0x0)));
                        switch (t0) {
                        case 0:
                            t8 = 0x300;
                            t1 = (*(int *)(((int)stk + 20)));
                            t8 = (t8 + a4);
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t8 = (t8 + t1);
                            t1 = 0xB0;
                            t0 = ((short)t0 * (short)t1);
                            t0 = (short)t0;
                            t8 = (t8 + t0);
                            break;
                        case 1:
                            t8 = 0x1E80;
                            t1 = (*(int *)(((int)stk + 16)));
                            t8 = (t8 + a4);
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t8 = (t8 + t1);
                            t1 = 0xB0;
                            t0 = ((short)t0 * (short)t1);
                            t0 = (short)t0;
                            t8 = (t8 + t0);
                            break;
                        case 2:
                            t8 = 0x47C0;
                            t1 = (*(int *)(((int)stk + 4)));
                            t8 = (t8 + a4);
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t8 = (t8 + t1);
                            t1 = 0xB0;
                            t0 = ((short)t0 * (short)t1);
                            t0 = (short)t0;
                            t8 = (t8 + t0);
                            break;
                        case 3:
                            t8 = 0x5580;
                            t1 = (*(int *)(((int)stk + 4)));
                            t8 = (t8 + a4);
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t8 = (t8 + t1);
                            t1 = 0xB0;
                            t0 = ((short)t0 * (short)t1);
                            t0 = (short)t0;
                            t8 = (t8 + t0);
                            break;
                        case 4:
                            t8 = 0x6340;
                            t1 = (*(int *)(((int)stk + 4)));
                            t8 = (t8 + a4);
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t8 = (t8 + t1);
                            t1 = 0xB0;
                            t0 = ((short)t0 * (short)t1);
                            t0 = (short)t0;
                            t8 = (t8 + t0);
                            break;
                        }
                        t0 = 0x90;
                        t1 = (*(int *)((t8 + t0)));
                        if (t1 == 0) {
                            t9 = (t9 + 0x20);
                        } else {
                            t1 = 0xC3837EC;
                            t10 = (*(int *)((t1 + 0x0)));
                            t28 = (*(int *)0xC37E1E8);
                            t10 = (t10 << 2);
                            t10 = (t10 << 2);
                            t10 = (t10 << 2);
                            t10 = (t10 + 0xC3831EC);
                            t0 = t28;
                            t28 = (t28 << 1);
                            t28 = (t28 + t0);
                            t0 = 0xC37E1EC;
                            t28 = (t28 << 2);
                            t28 = (short)t28;
                            t28 = (t28 + t0);
                            *(unsigned int *)((t10 + 0x2C)) = t28;
                            t1 = (*(int *)0xC37E1E8);
                            t28 = 0xC37F9EC;
                            t1 = (t1 << 2);
                            t1 = (t1 + t28);
                            *(unsigned int *)((t10 + 0x30)) = t1;
                            t61 = *(int *)0xC37E1E8;
                            t1 = t61;
                            t63 = ((t61 << 1) + t1);
                            t1 = 0xC3801EC;
                            *(unsigned int *)((t10 + 0x34)) = ((short)(t63 << 2) + t1);
                            t0 = (*(int *)0xC37E1E8);
                            t0 = (t0 << 1);
                            t0 = (t0 + 0xC3819EC);
                            *(unsigned int *)((t10 + 0x20)) = t0;
                            t28 = (*(int *)0xC37E1E8);
                            t0 = 0xC381DEC;
                            t28 = (t28 << 1);
                            t28 = (t28 + t0);
                            *(unsigned int *)((t10 + 0x24)) = t28;
                            t1 = (*(int *)0xC37E1E8);
                            t28 = 0xC3821EC;
                            t1 = (t1 << 2);
                            t28 = (t28 + t1);
                            *(unsigned int *)((t10 + 0x38)) = t28;
                            t1 = (*(int *)0xC37E1E8);
                            t28 = 0xC3829EC;
                            t1 = (t1 << 2);
                            t28 = (t28 + t1);
                            *(unsigned int *)((t10 + 0x3C)) = t28;
                            t28 = t10;
                            t1 = (*(signed char *)((t9 + 0x0)));
                            t28 = (t28 + 0x4);
                            *(unsigned char *)((t10 + 0x0)) = t1;
                            t0 = (*(signed char *)((t9 + 0x1)));
                            t1 = 0xC0E6FE8;
                            *(unsigned char *)((t10 + 0x1)) = t0;
                            t0 = (*(signed char *)((t9 + 0x2)));
                            *(unsigned char *)((t10 + 0x2)) = t0;
                            t0 = (*(signed char *)((t9 + 0x3)));
                            *(unsigned char *)((t10 + 0x3)) = t0;
                            t0 = 0xC;
                            t0 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t2, t3, t4, t5));
                            t0 = 0x10;
                            u12 = (*(float *)((t9 + t0)));
                            *(float *)((t10 + t0)) = u12;
                            t0 = 0x14;
                            u12 = (*(float *)((t9 + t0)));
                            t0 = 0x18;
                            *(float *)((t10 + t0)) = u12;
                            u12 = (*(float *)((t9 + t0)));
                            t0 = 0x1C;
                            *(float *)((t10 + t0)) = u12;
                            u12 = (*(float *)((t9 + t0)));
                            t0 = 0x14;
                            *(float *)((t10 + t0)) = u12;
                            t0 = (t0 + 0x7C);
                            t3 = (*(int *)((t10 + 0x30)));
                            t4 = (*(int *)((t8 + t0)));
                            t2 = (*(int *)((t10 + 0x2C)));
                            t0 = (FUN_0c059cec(t2, t3, t4));
                            *(unsigned int *)((t10 + 0x28)) = t0;
                            t7 = 0x0;
                            for (;;) {
                                if ((int)t7 < (int)(*(int *)((t10 + 0x28)))) {
                                    t28 = ((int)stk + 0);
                                    t0 = 0xC37E1EC;
                                    t28 = (t28 + 0x24);
                                    t1 = (*(int *)0xC37E1E8);
                                    t0 = 0xC;
                                    t0 = (((int (*)(void))(FUN_0c0e6fe8))());
                                    t0 = (*(signed char *)((t10 + 0x2)));
                                    if (t0 != 0) {
                                        if (t0 != 1) {
                                            if (t0 != 2) {
                                                t106 = t0;
                                            } else {
                                                t28 = ((int)stk + 0);
                                                t28 = (t28 + 0x18);
                                                t0 = 0xC;
                                                t0 = (((int (*)(void))(FUN_0c0e6fe8))());
                                                t3 = ((int)stk + 0);
                                                t4 = ((int)stk + 0);
                                                t2 = ((int)stk + 0);
                                                t4 = (t4 + 0x18);
                                                t3 = (t3 + 0x24);
                                                t2 = (t2 + 0x24);
                                                t0 = (math_vec3_sub(t2, t3, t4));
                                                t6 = (*(int *)0xC37E1E8);
                                                t2 = ((int)stk + 0);
                                                t1 = 0xC0620A4;
                                                t6 = (t6 << 2);
                                                t2 = (t2 + 0x24);
                                                t92 = math_vec3_length(t2);
                                                t1 = 0xC3821EC;
                                                t1 = (t1 + t6);
                                                *(float *)((t1 + 0x0)) = t92;
                                                t1 = 0xC3829EC;
                                                t1 = (t1 + t6);
                                                *(float *)((t1 + 0x0)) = t92;
                                                t107 = t1;
                                            }
                                        } else {
                                            t28 = ((int)stk + 0);
                                            t1 = 0xC0E6FE8;
                                            t28 = (t28 + 0x18);
                                            t0 = 0xC;
                                            t0 = (((int (*)(void))(FUN_0c0e6fe8))());
                                            t2 = ((int)stk + 0);
                                            t2 = (t2 + 0x18);
                                            t0 = (math_vec3_mul_xyz(t2, -1.0f, -1.0f, -1.0f));
                                            t3 = ((int)stk + 0);
                                            t1 = 0xC06206E;
                                            t4 = ((int)stk + 0);
                                            t2 = ((int)stk + 0);
                                            t4 = (t4 + 0x18);
                                            t3 = (t3 + 0x24);
                                            t2 = (t2 + 0x24);
                                            t0 = (math_vec3_sub(t2, t3, t4));
                                            t6 = (*(int *)0xC37E1E8);
                                            t2 = ((int)stk + 0);
                                            t1 = 0xC0620A4;
                                            t6 = (t6 << 2);
                                            t2 = (t2 + 0x24);
                                            t100 = math_vec3_length(t2);
                                            t1 = 0xC3821EC;
                                            t1 = (t1 + t6);
                                            *(float *)((t1 + 0x0)) = t100;
                                            t1 = 0xC3829EC;
                                            t1 = (t1 + t6);
                                            *(float *)((t1 + 0x0)) = t100;
                                            t107 = t1;
                                        }
                                    } else {
                                        t6 = (*(int *)0xC37E1E8);
                                        t2 = ((int)stk + 0);
                                        t6 = (t6 << 2);
                                        t2 = (t2 + 0x24);
                                        t105 = math_vec3_length(t2);
                                        t1 = 0xC3821EC;
                                        t1 = (t1 + t6);
                                        *(float *)((t1 + 0x0)) = t105;
                                        t1 = 0xC3829EC;
                                        t1 = (t1 + t6);
                                        *(float *)((t1 + 0x0)) = t105;
                                        t107 = t1;
                                    }
                                    t0 = t106;
                                    t1 = t107;
                                    t1 = 0xFFFFFFFF;
                                    t0 = 0xC3819EC;
                                    *(unsigned short *)((((*(int *)0xC37E1E8) << 1) + t0)) = t1;
                                    t0 = (*(int *)((t10 + 0x24)));
                                    *(unsigned short *)(((t7 << 1) + t0)) = t7;
                                    t7 = (t7 + 0x1);
                                    t1 = (*(int *)0xC37E1E8);
                                    t1 = (t1 + 0x1);
                                    *(unsigned int *)0xC37E1E8 = t1;
                                    continue;
                                }
                                break;
                            }
                            t0 = 0x90;
                            t3 = t10;
                            t2 = (*(int *)((t8 + t0)));
                            t0 = (FUN_0c059c44(t2, t3));
                            t2 = 0x0;
                            for (;;) {
                                t1 = (*(int *)((t10 + 0x28)));
                                t1 = (t1 - 1);
                                if ((int)t2 >= (int)t1) {
                                    break;
                                }
                                t3 = t2;
                                t6 = t2;
                                t3 = (t3 + 0x1);
                                t6 = (t6 << 1);
                                for (;;) {
                                    t1 = (*(int *)((t10 + 0x28)));
                                    if ((int)t3 >= (int)t1) {
                                        break;
                                    }
                                    t5 = (*(int *)((t10 + 0x38)));
                                    t7 = t3;
                                    t4 = (*(int *)((t10 + 0x24)));
                                    t7 = (t7 << 1);
                                    t0 = t4;
                                    t117 = (*(short *)((t7 + t0)));
                                    t1 = (*(short *)((t6 + t0)));
                                    t117 = (t117 << 2);
                                    t1 = (t1 << 2);
                                    t117 = (t117 + t5);
                                    t1 = (t1 + t5);
                                    u12 = (*(float *)((t117 + 0x0)));
                                    t3 = (t3 + 0x1);
                                    if (((*(float *)((t1 + 0x0)))) > u12) {
                                        t4 = (*(int *)((t10 + 0x24)));
                                        t5 = t4;
                                        t5 = (t5 + t6);
                                        t4 = (t4 + t7);
                                        *(unsigned int *)(((int)stk + 12)) = t5;
                                        t117 = (*(short *)((t4 + 0x0)));
                                        t5 = (*(short *)((t5 + 0x0)));
                                        t1 = (*(int *)(((int)stk + 12)));
                                        *(unsigned short *)((t1 + 0x0)) = t117;
                                        t0 = (*(int *)((t10 + 0x24)));
                                        *(unsigned short *)((t7 + t0)) = t5;
                                    }
                                }
                                t2 = (t2 + 0x1);
                            }
                            t1 = 0xC3837EC;
                            t9 = (t9 + 0x20);
                            *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
                            t1 = (*(int *)(((int)stk + 8)));
                            t1 = (t1 + 0x1);
                            *(unsigned int *)(((int)stk + 8)) = t1;
                        }
                        continue;
                    }
                    break;
                }
                t0 = (*(signed char *)((a4 + 0x3)));
                t0 = (t0 << 1);
                t1 = (*(int *)(((int)stk + 0)));
                t147 = (0xC383800 + t0);
                t0 = (*(int *)(((int)stk + 8)));
                t149 = (t147 + t1);
            }
            *(unsigned char *)((t149 + 0x0)) = t0;
            t1 = (*(int *)(((int)stk + 0)));
            t1 = (t1 + 0x1);
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c024fe4(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register int t64;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u39;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct oC_float *)(a6))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    t64 = 0x0;
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        t64 = 0x1;
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)));
            if (t16 > ((u0 + u1) - t9)) {
                u29 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u29 = -u29;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u29);
                u32 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u32 = -u32;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u32);
                t64 = 0x8;
            } else {
                u33 = (((struct o4_float *)(a6))->v);
                u34 = (((struct o4_float *)(a4))->v);
                if (u34 > u33) {
                    u39 = ((u34 - ((((struct o10_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
                } else {
                    u39 = ((u34 + ((((struct o10_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
                }
                (((struct o24_float *)(a5))->v) = ((u39 - u33) + ((((struct o24_float *)(a5))->v)));
                t64 = 0x2;
                if (((((struct o4_float *)(a4))->v)) > ((((struct o4_float *)(a6))->v))) {
                    t64 = 0x3;
                }
            }
        }
    }
    return t64;
}

int FUN_0c025332(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register int t47;
    register float u34;
    register float u37;
    float u25;
    register float u26;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct oC_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    t47 = 0x0;
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        t47 = 0x1;
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
            if (!(t16 > ((u0 + u1) - t9)) && (u25 = (((struct o4_float *)(a4))->v), u26 = (((struct o4_float *)(a6))->v), u25 > u26)) {
                (((struct o24_float *)(a5))->v) = ((((((((struct o4_float *)(a4))->v)) - ((((struct oC_float *)(a4))->v))) - ((((struct o10_float *)(a6))->v))) - ((((struct o4_float *)(a6))->v))) + ((((struct o24_float *)(a5))->v)));
                t47 = 0x3;
            } else {
                u34 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u34 = -u34;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u34);
                u37 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u37 = -u37;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u37);
                t47 = 0x8;
            }
        }
    }
    return t47;
}

int FUN_0c05d0d8(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 2.0f);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xEAAC);
        t0 = (((struct o2E0_int *)(a4))->v);
        u0 = *(float *)0xC05D23C;
        u1 = (((struct o1C_float *)(t0))->v);
        (((struct o1C_float *)(t0))->v) = (u1 * u0);
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (u1 * u0);
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (u1 * u0);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((short)(t0 + 0x1) == 20) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            *(unsigned char *)((a4 + 0xD)) = 0xFFFFFFFF;
            return obj_set_mode_owner(a4, 0x3, 0x2);
        }
        return (short)(t0 + 0x1);
    }
    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x1;
    return fx_spawn_0454b4((a4 + 0x20), (*(signed char *)((a4 + 0xE))));
}

int FUN_0c0906e6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((((signed char)t0 << 2) << 2) + 0xC150800) + 0x0))) > (int)((((struct oEC_short *)(a4))->v))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = (((struct oEC_short *)(a4))->v);
    t2 = *(signed char *)((a4 + 0x71F1));
    t3 = *(short *)((((((signed char)t0 << 2) << 2) + 0xC150800) + 0x0));
    u0 = (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    u1 = (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v) = (u1 + ((((((struct o4_float *)(((((signed char)t0 << 2) << 2) + 0xC150800)))->v)) - u0) / (float)(t3 - t1)));
    t2 = *(signed char *)((a4 + 0x71F1));
    u0 = (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    u1 = (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v) = (u1 + ((((((struct o8_float *)(((((signed char)t0 << 2) << 2) + 0xC150800)))->v)) - u0) / (float)(t3 - t1)));
    t2 = *(signed char *)((a4 + 0x71F1));
    u0 = (((struct o74_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    u1 = (((struct o74_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    (((struct o74_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v) = (u1 + ((((((struct oC_float *)(((((signed char)t0 << 2) << 2) + 0xC150800)))->v)) - u0) / (float)(t3 - t1)));
    return 0x74;
}

int FUN_0c02fffc(int a4, float f4, float f5, float f6, float f7, float f8)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = 16.0f;
    if ((*(signed char *)((a4 + 0x3))) == 2) {
        u0 = 32.0f;
    }
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        u1 = (((struct o4_float *)(a4))->v);
        u2 = u1;
        u2 = u2 + ((((struct o10_float *)(a4))->v)) * u0;
        u3 = (u1 - ((((-((float)(*(signed char *)((a4 + 0x2))) / (float)(*(signed char *)((a4 + 0x1))))) + 1.0f) * u2)));
    } else {
        u1 = (((struct o4_float *)(a4))->v);
        u2 = (((struct o10_float *)(a4))->v);
        u4 = (((u0 * u2)) + u1);
        u5 = ((-u1) - ((u0 * u2)));
        u5 = u5 + u4 * (((-((float)(*(signed char *)((a4 + 0x2))) / (float)(*(signed char *)((a4 + 0x1))))) + 1.0f));
        u3 = (u5 + (*(float *)0xC030318));
    }
    return ui_draw_text_stub((*(int *)((a4 + 0xC))), (*(signed char *)((a4 + 0x3))), u3, ((((struct o8_float *)(a4))->v)), ((((struct o14_float *)(a4))->v)), ((((struct o18_float *)(a4))->v)));
}

int FUN_0c0207ca(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t21;
    register int t24;
    register int t25;
    register int t28;

    t10 = a4;
    t11 = a5;
    t12 = a5;
    for (;;) {
        if (t12 == 0) {
            break;
        }
        t14 = t0;
        t15 = t10;
        t16 = t11;
        if (a4 != t12) {
            t13 = 0xFC;
            t17 = (*(int *)((t12 + t13)));
            t18 = t0;
            t15 = t10;
            t16 = t11;
            if (t17 == 0) {
                t13 = 0x106;
                t17 = (*(signed char *)((t12 + t13)));
                t21 = t0;
                t15 = t10;
                t16 = t11;
                if (t17 == 0) {
                    t13 = (*(signed char *)((a4 + 0x3)));
                    t24 = t0;
                    if ((t13 != 2) && ((t1 = *(signed char *)((t12 + 0x3)), t2 = (t13 == 2), t13 = t1, t13 != 2) && ((t3 = *(signed char *)((a4 + 0x3)), t4 = (t13 == 2), t13 = t3, t13 != 3) && ((t5 = *(signed char *)((t12 + 0x3)), t6 = (t13 == 2), t13 = t5, t13 != 3) && (t7 = *(signed char *)((a4 + 0x3)), t8 = (t13 == 2), t13 = t7, t17 = t13, t9 = *(signed char *)((t12 + 0x3)), t13 = t9, t17 == t13))))) {
                        t25 = t17;
                        t15 = t10;
                        t16 = t11;
                    } else {
                        t11 = t12;
                        t10 = a4;
                        t13 = (FUN_0c0207a2(t10, t11));
                        if (t13 != 0) {
                            t17 = 0xC02343C;
                            t11 = t12;
                            t10 = a4;
                            t13 = (hit_any_part_pair_overlap(t10, t11));
                            if (t13 != 0) {
                                t13 = 0x144;
                                t17 = (*(signed char *)((a4 + t13)));
                                if ((int)t17 < (int)0xA) {
                                    t13 = 0xFC;
                                    t0 = 0x11C;
                                    *(unsigned int *)((t12 + t13)) = a4;
                                    t13 = (t13 + 0x48);
                                    t17 = (*(signed char *)((a4 + t13)));
                                    t0 = (t0 + a4);
                                    t17 = (t17 + 0x1);
                                    *(unsigned char *)((a4 + t13)) = t17;
                                    t17 = (t17 - 1);
                                    t17 = (signed char)t17;
                                    t17 = (t17 << 2);
                                    t17 = (t17 + t0);
                                    *(unsigned int *)((t17 + 0x0)) = t12;
                                    t28 = t0;
                                }
                                t25 = t28;
                                t28 = t17;
                            }
                            t24 = t25;
                            t25 = t28;
                        }
                    }
                    t21 = t24;
                    t24 = t25;
                } else {
                    t24 = t17;
                }
                t18 = t21;
                t21 = t24;
            } else {
                t21 = t17;
            }
            t14 = t18;
            t18 = t21;
        } else {
            t18 = t17;
        }
        t12 = (*(int *)((t12 + 0x18)));
        t0 = t14;
        t17 = t18;
        t10 = t15;
        t11 = t16;
    }
    return t13;
}

int FUN_0c033390(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                t2 = t1;
            } else {
                u0 = (((struct o30_float *)(t0))->v);
                u1 = (((struct o24_float *)(t0))->v);
                (((struct o24_float *)(t0))->v) = (u1 - u0);
                t1 = 0x24;
                if (!((u1 - u0) > 0.0f)) {
                    t3 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    t1 = (t3 + 0x1);
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            u0 = (((struct o24_float *)(t0))->v);
            u1 = (((struct o30_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = (u0 + u1);
            t2 = 0x24;
            if (!(1.0f > (u0 + u1))) {
                t3 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                t2 = (t3 + 0x1);
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o30_float *)(t0))->v) = (*(float *)0xC03351C);
        *(unsigned short *)((t0 + 0x2)) = 0x1F;
        *(unsigned int *)((t0 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
        u0 = (((struct o24_float *)(t0))->v);
        u1 = (((struct o30_float *)(t0))->v);
        (((struct o24_float *)(t0))->v) = (u0 + u1);
        t0 = 0x24;
        if (!(1.0f > (u0 + u1))) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c0246b2(int a4)
{
    int stk[15];
    register int t0;
    register int t13;

    t0 = *(signed char *)((a4 + 0x248));
    if (t0 != 0) {
        if (t0 != 1) {
            t13 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x14), (0x264 + a4));
                t13 = (hit_load_box_world(a4, (0x24C + a4), (((int)stk + 0) + 0x14)));
            }
        } else {
            conv_s16x5_to_f32(((int)stk + 0), (0x264 + a4));
            t13 = (hit_load_cylinder_world(a4, (0x24C + a4), ((int)stk + 0)));
        }
    } else {
        conv_s16x4_to_f32((((int)stk + 0) + 0x2C), (0x264 + a4));
        t13 = (hit_load_sphere_world(a4, (0x24C + a4), (((int)stk + 0) + 0x2C)));
    }
    return t13;
}

int FUN_0c01eee0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 5) {
                    if (t0 != 9) {
                        if (t0 != 10) {
                            if (t0 != 11) {
                                vmu_menu_update_objs(a4, a5, a6, a7);
                                (((struct o0_uchar *)0xC362A50)->v) = (*(signed char *)((a4 + 0x30)));
                                return 0x30;
                            }
                            return vmu_menu_step_notice_wait_ok_flag(a4, a5, a6, a7);
                        }
                        return FUN_0c01f350(a4, a5, a6, a7);
                    }
                    return vmu_menu_state_load(a4, a5, a6, a7);
                }
                t0 = FUN_0c01fd48(a4);
                t1 = (signed char)t0;
                if ((int)(signed char)t0 >= 0) {
                    (((struct o31_uchar *)0xC362A50)->v) = 0x9;
                    (((struct o4_uchar *)0xC362A50)->v) = 0x0;
                    t1 = 0x0;
                }
                return t1;
            }
            t0 = FUN_0c01fd48(a4);
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f164(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fd48(a4);
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o2_uchar *)0xC362A50)->v) = 0x2;
            (((struct o3_uchar *)0xC362A50)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fd48(a4));
}

int FUN_0c02bc0e(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = (((struct o2E4_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - 0x444);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = 0x1;
                    (((struct oEC_ushort *)(a4))->v) = 0x14;
                }
                t1 = 0xEC;
            }
            t0 = t1;
        } else {
            t1 = (((struct o2E4_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0x444);
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
            if (((((struct oEC_short *)(a4))->v)) == 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x14;
            }
            t0 = 0xEC;
        }
        t1 = t0;
    } else {
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        t1 = 0xEC;
    }
    return t1;
}

int FUN_0c020be0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u3;

    t0 = 0xC020BF4;
    t1 = a4;
    t2 = a6;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = 0xFC;
        t2 = 0x2A9;
        *(unsigned int *)((t1 + t0)) = 0x0;
        t0 = (t0 + 0xE);
        *(unsigned char *)((t1 + t0)) = 0x0;
        t2 = (t2 + t1);
        t0 = 0x2D4;
        *(float *)((t1 + t0)) = -500.0f;
        t0 = 0x20;
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x270;
        *(float *)((t1 + t0)) = u3;
        t0 = 0x24;
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x274;
        *(float *)((t1 + t0)) = u3;
        t0 = 0x28;
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x278;
        *(float *)((t1 + t0)) = u3;
        t0 = (t0 + 0x30);
        *(unsigned char *)((t1 + t0)) = 0x0;
        t0 = 0x0;
        *(unsigned char *)((t2 + 0x4)) = t0;
        *(unsigned char *)((t2 + 0x3)) = t0;
        *(unsigned char *)((t2 + 0x2)) = t0;
        *(unsigned char *)((t2 + 0x1)) = t0;
        *(unsigned char *)((t2 + 0x0)) = t0;
        t2 = 0x280;
        t2 = (t2 + t1);
        *(unsigned int *)((t2 + 0x10)) = t0;
        *(unsigned int *)((t2 + 0xC)) = t0;
        *(unsigned int *)((t2 + 0x8)) = t0;
        *(unsigned int *)((t2 + 0x4)) = t0;
        *(unsigned int *)((t2 + 0x0)) = t0;
        t2 = 0x294;
        t2 = (t2 + t1);
        *(unsigned int *)((t2 + 0x10)) = t0;
        *(unsigned int *)((t2 + 0xC)) = t0;
        *(unsigned int *)((t2 + 0x8)) = t0;
        *(unsigned int *)((t2 + 0x4)) = t0;
        *(unsigned int *)((t2 + 0x0)) = t0;
        t2 = 0x2AE;
        t0 = 0x2D8;
        t2 = (t2 + t1);
        *(unsigned char *)((t1 + t0)) = 0x0;
        t0 = 0x0;
        *(unsigned char *)((t2 + 0x4)) = t0;
        *(unsigned char *)((t2 + 0x3)) = t0;
        *(unsigned char *)((t2 + 0x2)) = t0;
        *(unsigned char *)((t2 + 0x1)) = t0;
        *(unsigned char *)((t2 + 0x0)) = t0;
        t2 = 0x2B8;
        t2 = (t2 + t1);
        *(unsigned char *)((t2 + 0x4)) = t0;
        *(unsigned char *)((t2 + 0x3)) = t0;
        *(unsigned char *)((t2 + 0x2)) = t0;
        *(unsigned char *)((t2 + 0x1)) = t0;
        *(unsigned char *)((t2 + 0x0)) = t0;
        t2 = 0x2C0;
        t2 = (t2 + t1);
        *(unsigned int *)((t2 + 0x10)) = t0;
        *(unsigned int *)((t2 + 0xC)) = t0;
        *(unsigned int *)((t2 + 0x8)) = t0;
        *(unsigned int *)((t2 + 0x4)) = t0;
        *(unsigned int *)((t2 + 0x0)) = t0;
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t0;
}

int FUN_0c028ea0(int a4, int a5, float f4)
{
    register float u2;

    u2 = 1.0f;
    if ((*(int *)0xC386830) != 0) {
        u2 = 0.833333313f;
    }
    *(unsigned char *)((a5 + 0x0)) = 0x1;
    *(unsigned char *)((a5 + 0x3)) = 0x2;
    *(unsigned char *)((a5 + 0x1)) = 0x1;
    *(unsigned short *)((a5 + 0x6)) = 0x1F;
    *(unsigned char *)((a5 + 0x5)) = 0x0;
    *(unsigned char *)((a5 + 0xA)) = 0x0;
    *(unsigned char *)((a5 + 0x9)) = 0x0;
    *(unsigned char *)((a5 + 0x8)) = 0x0;
    (((struct oEC_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x10))) * u2);
    (((struct oEE_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x18))) * u2);
    (((struct oF0_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x20))) * u2);
    (((struct o20_float *)(a5))->v) = f4;
    (((struct o24_float *)(a5))->v) = ((((struct oC_float *)(a4))->v));
    (((struct o28_float *)(a5))->v) = 0.0f;
    *(unsigned int *)((a5 + 0x34)) = 0x0;
    *(unsigned int *)((a5 + 0x30)) = 0x0;
    *(unsigned int *)((a5 + 0x2C)) = 0x0;
    (((struct o50_float *)(a5))->v) = ((((struct o24_float *)(a4))->v));
    (((struct o54_float *)(a5))->v) = ((((struct o28_float *)(a4))->v));
    (((struct o58_float *)(a5))->v) = 1.0f;
    return 0x58;
}

int FUN_0c05ae26(int a4)
{
    register int t0;
    register int t1;
    float u0;

    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
        if (((int)(short)(t1 + 0x1) > (int)0x5) && (u0 = (((struct o274_float *)(a4))->v), u0 > 0.0f)) {
            return obj_set_mode_owner(a4, 0x0, (*(signed char *)((a4 + 0x3))));
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c0e6fe8(a4);
    return (FUN_0c0e6fe8(t0));
}

int FUN_0c0d0d80(int a4, int a5, int a6, int a7)
{
    register int t2;

    *(volatile signed char *)((a4 + 0x5));
    t2 = *(signed char *)((a4 + 0x5));
    if (((*(int *)((0xC7F31F0 + (signed char)((((t2 << 2) << 1) + t2) << 2)))) & 1) != 0) {
        return FUN_0c0d0e50(a4, a5, a6, a7);
    }
    return FUN_0c0d2424(a4);
}

int FUN_0c053dcc(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3053;
    if ((t0 & 0xF0) != 0) {
        t1 = (t0 & 0xF0);
        if ((t0 & 0xF0) != 16) {
            t2 = (t0 & 0xF0);
            if ((t0 & 0xF0) != 32) {
            } else {
                t0 = *(signed char *)0xC7F3053;
                if (((t0 & 0xF) != 1) && ((t0 & 0xF) != 2)) {
                    
                    t2 = (t0 & 0xF);
                } else {
                    (((struct o106_uchar *)((0xC7E40C4 + (unsigned short)((unsigned short)(((*(signed char *)0xC7F3053) & 0xF) + 0xFFFF) * (unsigned short)0x72D0))))->v) = 0x7F;
                    t2 = 0x106;
                }
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)0xC7F3053;
        t2 = (t1 & 0xF);
        if (((t1 & 0xF) == 1) || ((t1 & 0xF) == 2)) {
            (((struct o106_uchar *)((0xC7E40C4 + (unsigned short)((unsigned short)(((*(signed char *)0xC7F3053) & 0xF) + 0xFFFF) * (unsigned short)0x72D0))))->v) = 0x7F;
            t2 = 0x106;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c09c2ce(void)
{
    if ((*(signed char *)0xC7E40CD) != 2) {
        if ((*(signed char *)0xC7E40CD) != 3) {
            if ((*(signed char *)0xC7EB39D) != 2) {
                if ((*(signed char *)0xC7EB39D) == 3) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0ac4d0(float f4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (*(int *)0xC7E4078);
    for (;;) {
        if (t0 == 0) {
            break;
        }
        t1 = 0x30D;
        t2 = (*(signed char *)((t0 + t1)));
        if (t2 == 0) {
            t1 = (*(signed char *)((t0 + 0x4)));
            if (t1 != 1) {
                if ((t1 != 2) && (t1 != 3)) {
                    if (t1 != 4) {
                        if (t1 != 7) {
                            if ((t1 != 8) && (t1 != 17)) {
                                t3 = t2;
                            } else {
                                t1 = (obj_update_distance_cull(t0));
                            }
                            t4 = t3;
                        } else {
                            t1 = (FUN_0c05d254(t0));
                        }
                        t3 = t4;
                    } else {
                        t1 = (obj_update_distance_cull(t0));
                    }
                    t4 = t3;
                } else {
                    t1 = (obj_update_distance_cull_b(t0));
                }
                t3 = t4;
            } else {
                t1 = (obj_update_distance_cull(t0));
            }
            t4 = t3;
        } else {
            t4 = t2;
        }
        t0 = (*(int *)((t0 + 0x18)));
        t2 = t4;
    }
    return t1;
}

int FUN_0c09c80e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (!((*(float *)((((((t0 << 1) + t0) << 2) + 0xC339BC8) + 0x0))) > (*(float *)0xC494D1C))) {
        (((struct o72AD_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o72AD_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC339BC8)))->v)) > (*(float *)0xC494D1C)) {
        (((struct o72AE_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct o72AE_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x4));
    if ((*(float *)0xC494D1C) > ((((struct o8_float *)((0xC339BC8 + (((t0 << 1) + t0) << 2))))->v))) {
        (((struct o72AF_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o72AF_uchar *)(a4))->v) = 0x1;
    }
    return 0x72AF;
}

int FUN_0c09de5e(int a4)
{
    register int t0;

    t0 = (((struct o2DC_int *)(a4))->v);
    if ((t0 & 0xF0) == 16) {
        return 0x1;
    }
    if ((t0 & 0xF0) == 0x90) {
        return 0x2;
    }
    if ((t0 & 0xF0) == 0x80) {
        return 0x3;
    }
    if ((t0 & 0xF0) == 0xA0) {
        return 0x4;
    }
    if ((t0 & 0xF0) == 32) {
        return 0x5;
    }
    if ((t0 & 0xF0) == 96) {
        return 0x6;
    }
    if ((t0 & 0xF0) == 64) {
        return 0x7;
    }
    return 0x8;
}

int pl_start_power_form_attack(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o2DC_int *)(a4))->v))) | ((((struct o71F8_int *)(a4))->v))) & 0x400) != 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x5;
        } else {
            (((struct o7222_uchar *)(a4))->v) = 0x6;
        }
    } else {
        if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o2DC_int *)(a4))->v))) | ((((struct o71F8_int *)(a4))->v))) & 0x400) != 0) {
            (((struct o7222_uchar *)(a4))->v) = 0x7;
        } else {
            (((struct o7222_uchar *)(a4))->v) = 0x8;
        }
    }
    pl_change_state(a4, 0xB, 0x0, a7);
    return 0x1;
}

int pl_set_effect_at_frame(int a4, int a5, int a6, int a7)
{

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    R0 = (0x719E);
    if (((unsigned short)((((struct o719E_short *)(R4))->v)) != (unsigned char)R5)) goto L_C07AC02;
    R0 = ((signed char)R6);
    if (((signed char)R6 == 0)) goto L_C07ABB0;
    if ((R0 == 1)) goto L_C07ABB6;
    if ((R0 == 2)) goto L_C07ABBC;
    if ((R0 == 3)) goto L_C07ABC6;
    if ((R0 == 4)) goto L_C07ABD6;
    if ((R0 == 5)) goto L_C07ABF2;
    L_C07AC02:;
    return R0;
    L_C07ABF2:;
    R0 = (0x71F1);
    if (((*(signed char *)(((*(int *)((R4 + 0x1C))) + 0x71F1))) != 0)) goto L_C07AC02;
    (((struct o710A_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    R0 = (0x710A);
    goto L_C07AC02;
    L_C07ABD6:;
    R0 = (0x71F1);
    if (((*(signed char *)((R4 + 0x71F1))) != 0)) goto L_C07AC02;
    (((struct o710A_uchar *)(R4))->v) = R7;
    R0 = (0x710A);
    goto L_C07AC02;
    L_C07ABC6:;
    (((struct o710B_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    (((struct o710C_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    R0 = (0x710C);
    goto L_C07AC02;
    L_C07ABBC:;
    (((struct o710B_uchar *)(R4))->v) = R7;
    R0 = (0x710C);
    L_C07ABC2:;
    *(unsigned char *)((R4 + R0)) = R7;
    goto L_C07AC02;
    L_C07ABB6:;
    R0 = (0x710C);
    goto L_C07ABC2;
    L_C07ABB0:;
    R0 = (0x710B);
    goto L_C07ABC2;
}

int FUN_0c01b4f2(int a4, int a5)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return 0x0;
            }
            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & a5) == 0) {
                if (((unsigned short)((((struct o18_short *)0xC361BF8)->v)) & a5) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            if (((unsigned short)((((struct o16_short *)0xC361BF8)->v)) & a5) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int pl_mode10_update(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 4) && ((t1 != 5) && ((t1 != 9) && (t0 = *(signed char *)((a4 + 0x71F1)), t0 == 0)))) {
        t0 = *(signed char *)((a4 + 0xA));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return pl_wait_anim_end_b(a4);
            }
            return FUN_0c0648d4(a4);
        }
        return FUN_0c0647f0(a4, t1);
    }
    return FUN_0c0646fe(a4);
}

int stage_point_in_box(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    if (!((u0 - u1) > u2)) {
        if (!(u2 > (u1 + u0))) {
            if (!((((((struct o8_float *)(a5))->v)) - ((((struct o14_float *)(a5))->v))) > ((((struct o8_float *)(a4))->v)))) {
                if (!(((((struct o8_float *)(a4))->v)) > (((((struct o8_float *)(a5))->v)) + ((((struct o14_float *)(a5))->v))))) {
                    if (!((((((struct o4_float *)(a5))->v)) - ((((struct o10_float *)(a5))->v))) > ((((struct o4_float *)(a4))->v)))) {
                        if (!(((((struct o4_float *)(a4))->v)) > (((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))))) {
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int vmu_menu_update_objs(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    *(unsigned char *)0xC362A7E = 0x1;
    t0 = 0xC362A7E;
    t1 = 0x1;
    t2 = a4;
    t3 = (*(int *)0xC7E4084);
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t0 = (*(signed char *)((t3 + 0x0)));
        if (t0 != 0) {
            t2 = (*(int *)((t3 + 0x10)));
            if ((t2 != 0xC01F49A) && ((t2 != 0xC01F574) && ((t2 != 0xC01F6FC) && (t2 != 0xC01F98E)))) {
                t5 = 0xC01F6FC;
                t6 = 0xC01F574;
                t7 = 0xC01F98E;
                t8 = 0xC01F49A;
                t9 = t2;
            } else {
                t10 = (*(int *)((t3 + 0x10)));
                t2 = t3;
                t4 = (((int (*)(int, int, int, int))(t10))(t2, a5, a6, a7));
                t5 = t4;
            }
            t11 = t5;
            t5 = t6;
            t6 = t7;
            t7 = t8;
            t8 = t9;
        } else {
            t11 = t4;
            t5 = t10;
            t6 = t0;
            t7 = t1;
            t8 = t2;
        }
        t4 = t11;
        t10 = t5;
        t3 = (*(int *)((t3 + 0x18)));
        t0 = t6;
        t1 = t7;
        t2 = t8;
    }
    *(unsigned char *)0xC362A7E = 0x0;
    return t4;
}

int FUN_0c04ca94(int a4)
{
    register int t0;
    register int t8;
    register int t9;
    int t10;
    register int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) != 0) && ((t8 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t9 = *(signed char *)((t8 + 0x2)), t9 == 2) && (t10 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t11 = *(signed char *)((t10 + 0x4)), t11 == 7))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}

int FUN_0c0ccb60(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC7F2AB4)->v);
    u1 = (((struct o8_float *)0xC7F2AB4)->v);
    t0 = *(signed char *)0xC7F3051;
    t1 = 0x0;
    if (!((*(float *)(((((t0 << 2) << 2) + 0xC33CF8C) + 0x0))) > u0)) {
        t2 = 0x1;
        if (u0 > ((((struct o4_float *)((((t0 << 2) << 2) + 0xC33CF8C)))->v))) {
            t2 = 0x2;
        }
        t1 = t2;
    }
    t2 = t1;
    if (!(((((struct o8_float *)((((t0 << 2) << 2) + 0xC33CF8C)))->v)) > u1)) {
        t2 = (t1 + 0x3);
        if (u1 > ((((struct oC_float *)((((t0 << 2) << 2) + 0xC33CF8C)))->v))) {
            t2 = (t1 + 0x6);
        }
    }
    return t2;
}

int FUN_0c0ccfba(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a5 + 0x0));
    if ((int)a4 >= 0) {
        t1 = a6;
        if (((int)(unsigned short)t0 > (int)a6) && ((int)(unsigned short)t0 < (int)0x8000)) {
        } else {
            t2 = (unsigned short)t0;
            if ((int)(unsigned short)t0 < (int)a7) {
                t3 = a7;
                if ((int)(unsigned short)t0 <= (int)0x8000) {
                    t3 = (unsigned short)t0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        t1 = a7;
        if (((int)(unsigned short)t0 >= (int)a7) || ((int)(unsigned short)t0 <= (int)0x8000)) {
            t3 = (unsigned short)t0;
            if (((int)(unsigned short)t0 > (int)a6) && ((int)(unsigned short)t0 < (int)0x8000)) {
                t3 = a6;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    *(unsigned int *)((a5 + 0x0)) = t2;
    return t2;
}

int FUN_0c0c3ab2(int a4)
{
    register int t0;
    register int t8;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) == 11) {
        t8 = (*(signed char *)((t0 + 0x7223)));
    } else {
        t8 = a4;
        if ((*(signed char *)((t0 + 0x71BA))) == 28) {
            t8 = 0x63;
        }
    }
    if ((*(signed char *)(((0x308 + a4) + 0x2))) != t8) {
        *(unsigned char *)(((0x308 + a4) + 0x2)) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09ca88(int a4, int a5)
{
    register int t0;
    register int t7;
    register int t8;
    register int t9;
    int t10;
    register int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        t7 = *(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0));
        if ((t7 != 0) && (((t8 = *(signed char *)((t7 + 0x2)), t8 == 2) || (t9 = *(signed char *)((t7 + 0x2)), t9 == 3)) && (t10 = *(int *)(((((signed char)t0 << 2) + (0x294 + a4)) + 0x0)), t11 = *(signed char *)((t10 + 0x4)), t11 == (signed char)a5))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (t0 + 0x1);
}

int pl_falcon_attack_kind68(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return pl_falcon_attack_kind68_phase5(a4);
                    }
                    return pl_falcon_attack_kind68_phase4(a4);
                }
                return pl_falcon_attack_kind68_phase3(a4);
            }
            return pl_falcon_attack_kind68_phase2(a4);
        }
        return pl_falcon_attack_kind68_phase1(a4);
    }
    return pl_falcon_attack_kind68_phase0(a4);
}

int pl_jack_mode04_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_jack_wait_anim_end(a4);
            }
            return pl_jack_mode04_phase2(a4);
        }
        return pl_jack_mode04_phase1(a4);
    }
    return pl_jack_mode04_phase0(a4);
}

int FUN_0c0ac5c4(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if ((*(signed char *)(((*(int *)((((0x294 + a4) + (t0 << 2)) + 0x0))) + 0x2))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)(((t0 << 2) + (0x294 + a4))));
}

int pl_mode09_enter(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_mode08_09_enter_v1(a4);
    }
    return pl_mode08_09_enter_v0(a4);
}
