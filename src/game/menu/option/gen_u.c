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
int nlLoadMatrix(int);
int nlSelectMatrixStack(int);
int math_vec3_accumulate(int, int);
int _modls(int);
int _quick_odd_mvn(int);
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
int ui_hud_slide_text(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0207ca(int a4, int a5);
int FUN_0c033390(int a4);
int FUN_0c0246b2(int a4);
int FUN_0c01eee0(int a4, int a5, int a6, int a7);
int FUN_0c02bc0e(int a4);
int hit_list_save_positions(int a4, int a5, int a6);
int FUN_0c028ea0(int a4, int a5, float f4);
void item_tick_falling(int);
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
    register int t725;
    register int t31;
    register int t33;
    register int t36;
    register int t46;
    register int t50;
    register int t54;
    register int t56;
    register float u60;
    register int t65;
    register int t74;
    register int t83;
    register int t92;
    register int t98;
    register int t101;
    register int t103;
    register int t105;
    register int t123;
    register float u124;
    register float u125;
    register int t130;
    register int t139;
    register float u147;
    register float u148;
    register float u149;
    register int t154;
    register int t163;
    register int t169;
    register int t172;
    register int t174;
    register int t176;
    register float u195;
    register int t200;
    register int t209;
    register int t210;
    register int t215;
    register int t218;
    register int t220;
    register int t222;
    register int t240;
    register float u241;
    register float u242;
    register int t247;
    register int t260;
    register int t261;
    register int t267;
    register int t268;
    register int t272;
    register int t278;
    register int t279;
    register int t280;
    register int t281;
    register float u309;
    register int t310;
    register int t312;
    register int t313;
    register int t335;
    register int t344;
    register int t353;
    register int t362;
    register int t368;
    register int t427;
    register int t429;
    register int t431;
    register float u450;
    register int t455;
    register int t464;
    register int t473;
    register int t482;
    register int t488;
    register int t501;
    register int t503;
    register int t504;
    register int t534;
    register int t536;
    register int t537;
    register int t538;
    register int t539;
    register int t540;
    register float u542;
    register float u543;
    register int t552;
    register int t556;
    register int t562;
    register int t569;
    register int t572;
    register int t585;
    register int t586;
    register int t590;
    register int t592;
    register int t596;
    register int t602;
    register int t613;
    register float u629;
    register float u632;
    register int t648;
    register float u654;
    register float u657;
    register int t670;
    register float u677;
    register float u680;
    register int t689;
    register float t695;
    register float t696;
    register int t704;
    register int t709;
    register float u711;
    register float u713;
    register float u715;
    register int t757;
    register int t759;
    register int t761;
    register int t769;
    register int t772;
    register int t783;
    register int t789;
    register int t795;
    register int t796;
    register int t801;
    register int t802;
    register int t806;
    register int t810;
    register int t813;
    register int t820;
    register int t822;
    register int t828;
    register int t832;
    register int t833;
    register int t835;
    register int t836;
    register int t844;
    register int t855;
    register int t862;
    register int t863;
    register int t866;
    register int t867;
    register int t871;
    register int t873;
    register int t879;
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
    register int t34;
    register int t35;
    register int t102;
    register int t104;
    register int t173;
    register int t175;
    register int t219;
    register int t221;
    register int t311;
    register int t428;
    register int t430;
    register int t502;
    register float u541;
    register int t573;
    register int t576;
    register int t577;
    register int t578;
    register float u580;
    register float u581;
    register int t874;

    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 == 1) {
            nlSelectMatrixStack(0x1);
            nlLoadMatrix(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            t8 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 8)) = (0x75C + t0);
            u9 = *(float *)((t8 + 0x0));
            t725 = 0x8;
            if ((u9 == ((((struct o75C_float *)(t0))->v))) && ((t11 = *(int *)(((int)stk + 8)), t12 = *(int *)(((int)stk + 0)), u13 = (((struct o4_float *)(t11))->v), u14 = (((struct o4_float *)(t12))->v), u14 == u13) && ((t15 = *(int *)(((int)stk + 8)), t16 = *(int *)(((int)stk + 0)), u17 = (((struct o8_float *)(t15))->v), u18 = (((struct o8_float *)(t16))->v), u18 == u17) && ((t19 = *(int *)(((int)stk + 8)), t20 = *(int *)(((int)stk + 4)), u21 = *(float *)((t20 + 0x0)), u22 = (((struct oC_float *)(t19))->v), u21 == u22) && ((t23 = *(int *)(((int)stk + 8)), t24 = *(int *)(((int)stk + 4)), u25 = (((struct o4_float *)(t24))->v), u26 = (((struct o4_float *)((t23 + 0xC)))->v), u25 == u26) && (t27 = *(int *)(((int)stk + 8)), t28 = *(int *)(((int)stk + 4)), u29 = (((struct o8_float *)(t28))->v), u30 = (((struct o8_float *)((t27 + 0xC)))->v), u29 == u30)))))) {
            } else {
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                t31 = *(signed char *)((a4 + 0xA));
                if ((t31 & 0x70) != 0) {
                    if ((t31 & 0x70) != 16) {
                        if ((t31 & 0x70) == 32) {
                            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                            t33 = (t31 & 0x70);
                            t36 = t35;
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                t34 = 0x75C;
                                t34 = (t34 + t0);
                                *(unsigned int *)(((int)stk + 4)) = t34;
                                t36 = (*(int *)(((int)stk + 0)));
                                t33 = (*(int *)(((int)stk + 4)));
                                t36 = (*(signed char *)((t36 + 0x0)));
                                t34 = (t34 + (short)((((t36 << 1) + t36) << 2) << 1));
                                t46 = ((short)(((((t36 - 1) << 1) + (t36 - 1)) << 2) << 1) + t33);
                                t33 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t34) = *(struct mv3 *)(t46); }
                                t33 = (*(int *)(((int)stk + 0)));
                                t36 = 0x75C;
                                t33 = (*(signed char *)((t33 + 0x0)));
                                t36 = (t36 + t0);
                                *(unsigned short *)(((int)stk + 4)) = t33;
                                t50 = t33;
                                t33 = (t33 << 1);
                                t33 = (t33 + t50);
                                t33 = (t33 << 2);
                                t33 = (t33 << 1);
                                t34 = (short)t33;
                                t33 = (*(short *)(((int)stk + 4)));
                                t34 = (t34 + t36);
                                t33 = (t33 - 1);
                                t54 = t33;
                                t33 = (t33 << 1);
                                t33 = (t33 + t54);
                                t33 = (t33 << 2);
                                t33 = (t33 << 1);
                                t34 = (t34 + 0xC);
                                t56 = (((short)t33 + t36) + 0xC);
                                t33 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t34) = *(struct mv3 *)(t56); }
                                t33 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t33 + 0x0)) = ((*(signed char *)((t33 + 0x0))) - 1);
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                            u60 = *(float *)((0xC14A880 + (((*(signed char *)((a4 + 0xA))) & 0xF) << 2)));
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                            *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                t65 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                *(unsigned int *)(((int)stk + 12)) = ((short)((((t65 << 1) + t65) << 2) << 1) + (0x75C + t0));
                                math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t65 << 1) + t65) << 2) << 1) + (0x75C + t0)) + 0xC));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                t74 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t74 << 1) + t74) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u60, u60, u60);
                                t83 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_add(((short)((((t83 << 1) + t83) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                t92 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                math_vec3_add((((short)((((t92 << 1) + t92) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                t98 = *(int *)(((int)stk + 0));
                                *(unsigned char *)((t98 + 0x0)) = ((*(signed char *)((t98 + 0x0))) - 1);
                            }
                        } else {
                            if ((t31 & 0x70) == 48) {
                                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                t101 = (t31 & 0x70);
                                t103 = 0xC14A880;
                                t105 = t104;
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                        break;
                                    }
                                    t105 = (*(int *)(((int)stk + 0)));
                                    t103 = 0x75C;
                                    t105 = (*(signed char *)((t105 + 0x0)));
                                    t103 = (t103 + t0);
                                    t102 = t105;
                                    t102 = (t102 << 1);
                                    t102 = (t102 + t105);
                                    t102 = (t102 << 2);
                                    t102 = (t102 << 1);
                                    t102 = (short)t102;
                                    t102 = (t102 + t103);
                                    t101 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)(((short)(((((t105 - 1) << 1) + (t105 - 1)) << 2) << 1) + t103)); }
                                    t105 = (*(int *)(((int)stk + 0)));
                                    t103 = 0x75C;
                                    t105 = (*(signed char *)((t105 + 0x0)));
                                    t103 = (t103 + t0);
                                    t102 = t105;
                                    t102 = (t102 << 1);
                                    t102 = (t102 + t105);
                                    t102 = (t102 << 2);
                                    t102 = (t102 << 1);
                                    t102 = (short)t102;
                                    t102 = (t102 + t103);
                                    t102 = (t102 + 0xC);
                                    t101 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)((((short)(((((t105 - 1) << 1) + (t105 - 1)) << 2) << 1) + t103) + 0xC)); }
                                    t101 = (*(int *)(((int)stk + 0)));
                                    *(unsigned char *)((t101 + 0x0)) = ((*(signed char *)((t101 + 0x0))) - 1);
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                t123 = *(signed char *)((a4 + 0xA));
                                u124 = *(float *)((((t123 & 0xF) << 2) + 0xC14A898));
                                u125 = *(float *)((((t123 & 0xF) << 2) + 0xC14A8A4));
                                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                                *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < 0) {
                                        break;
                                    }
                                    t130 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    *(unsigned int *)(((int)stk + 12)) = ((short)((((t130 << 1) + t130) << 2) << 1) + (0x75C + t0));
                                    math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t130 << 1) + t130) << 2) << 1) + (0x75C + t0)) + 0xC));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                    t139 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t139 << 1) + t139) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                                    u147 = u124;
                                    u148 = u124;
                                    u149 = u124;
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > (int)0x1) {
                                        u147 = u125;
                                        u148 = u125;
                                        u149 = u125;
                                    }
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u147, u148, u149);
                                    t154 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_add(((short)((((t154 << 1) + t154) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                    t163 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    math_vec3_add((((short)((((t163 << 1) + t163) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    t169 = *(int *)(((int)stk + 0));
                                    *(unsigned char *)((t169 + 0x0)) = ((*(signed char *)((t169 + 0x0))) - 1);
                                }
                            } else {
                                if ((t31 & 0x70) == 64) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                    t172 = (t31 & 0x70);
                                    t174 = 0xC14A880;
                                    t176 = t175;
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t174 = (*(int *)(((int)stk + 0)));
                                        t176 = 0x75C;
                                        t174 = (*(signed char *)((t174 + 0x0)));
                                        t176 = (t176 + t0);
                                        t173 = t174;
                                        t173 = (t173 << 1);
                                        t173 = (t173 + t174);
                                        t173 = (t173 << 2);
                                        t173 = (t173 << 1);
                                        t173 = (short)t173;
                                        t173 = (t173 + t176);
                                        t172 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t173) = *(struct mv3 *)(((short)(((((t174 - 1) << 1) + (t174 - 1)) << 2) << 1) + t176)); }
                                        t174 = (*(int *)(((int)stk + 0)));
                                        t176 = 0x75C;
                                        t174 = (*(signed char *)((t174 + 0x0)));
                                        t176 = (t176 + t0);
                                        t173 = t174;
                                        t173 = (t173 << 1);
                                        t173 = (t173 + t174);
                                        t173 = (t173 << 2);
                                        t173 = (t173 << 1);
                                        t173 = (short)t173;
                                        t173 = (t173 + t176);
                                        t173 = (t173 + 0xC);
                                        t172 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t173) = *(struct mv3 *)((((short)(((((t174 - 1) << 1) + (t174 - 1)) << 2) << 1) + t176) + 0xC)); }
                                        t172 = (*(int *)(((int)stk + 0)));
                                        *(unsigned char *)((t172 + 0x0)) = ((*(signed char *)((t172 + 0x0))) - 1);
                                    }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                    u195 = *(float *)((0xC14A8B0 + (((*(signed char *)((a4 + 0xA))) & 0xF) << 2)));
                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                                    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t200 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        *(unsigned int *)(((int)stk + 8)) = ((short)((((t200 << 1) + t200) << 2) << 1) + (0x75C + t0));
                                        math_vec3_sub((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (((short)((((t200 << 1) + t200) << 2) << 1) + (0x75C + t0)) + 0xC));
                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u195, u195, u195);
                                        t209 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t210 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 8)) = ((short)((((t209 << 1) + t209) << 2) << 1) + (0x75C + t0));
                                        math_vec3_add((*(int *)(((int)stk + 8))), (((short)((((t209 << 1) + t209) << 2) << 1) + (0x75C + t0)) + 0xC), t210);
                                        t215 = *(int *)(((int)stk + 0));
                                        *(unsigned char *)((t215 + 0x0)) = ((*(signed char *)((t215 + 0x0))) - 1);
                                    }
                                } else {
                                    if ((t31 & 0x70) == 80) {
                                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                        t218 = (t31 & 0x70);
                                        t220 = 0xC14A880;
                                        t222 = t221;
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            t222 = (*(int *)(((int)stk + 0)));
                                            t220 = 0x75C;
                                            t222 = (*(signed char *)((t222 + 0x0)));
                                            t220 = (t220 + t0);
                                            t219 = t222;
                                            t219 = (t219 << 1);
                                            t219 = (t219 + t222);
                                            t219 = (t219 << 2);
                                            t219 = (t219 << 1);
                                            t219 = (short)t219;
                                            t219 = (t219 + t220);
                                            t218 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t219) = *(struct mv3 *)(((short)(((((t222 - 1) << 1) + (t222 - 1)) << 2) << 1) + t220)); }
                                            t222 = (*(int *)(((int)stk + 0)));
                                            t220 = 0x75C;
                                            t222 = (*(signed char *)((t222 + 0x0)));
                                            t220 = (t220 + t0);
                                            t219 = t222;
                                            t219 = (t219 << 1);
                                            t219 = (t219 + t222);
                                            t219 = (t219 << 2);
                                            t219 = (t219 << 1);
                                            t219 = (short)t219;
                                            t219 = (t219 + t220);
                                            t219 = (t219 + 0xC);
                                            t218 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t219) = *(struct mv3 *)((((short)(((((t222 - 1) << 1) + (t222 - 1)) << 2) << 1) + t220) + 0xC)); }
                                            t218 = (*(int *)(((int)stk + 0)));
                                            *(unsigned char *)((t218 + 0x0)) = ((*(signed char *)((t218 + 0x0))) - 1);
                                        }
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                        t240 = *(signed char *)((a4 + 0xA));
                                        u241 = *(float *)((((t240 & 0xF) << 2) + 0xC14A8C8));
                                        u242 = *(float *)((((t240 & 0xF) << 2) + 0xC14A8E0));
                                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                                        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            t247 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t247 << 1) + t247) << 2) << 1) + (0x75C + t0));
                                            math_vec3_sub((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t247 << 1) + t247) << 2) << 1) + (0x75C + t0)) + 0xC));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 8)))) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u241, u241, u241);
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u242, u242, u242);
                                            t260 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t261 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t260 << 1) + t260) << 2) << 1) + (0x75C + t0));
                                            math_vec3_add((*(int *)(((int)stk + 12))), (((short)((((t260 << 1) + t260) << 2) << 1) + (0x75C + t0)) + 0xC), t261);
                                            t267 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t268 = *(int *)(((int)stk + 8));
                                            *(unsigned int *)(((int)stk + 12)) = (((short)((((t267 << 1) + t267) << 2) << 1) + (0x75C + t0)) + 0xC);
                                            math_vec3_add((((short)((((t267 << 1) + t267) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t267 << 1) + t267) << 2) << 1) + (0x75C + t0)) + 0xC), t268);
                                            t272 = *(int *)(((int)stk + 0));
                                            *(unsigned char *)((t272 + 0x0)) = ((*(signed char *)((t272 + 0x0))) - 1);
                                        }
                                    } else {
                                        if ((t31 & 0x70) == 96) {
                                            t278 = (int)((int)((((struct oEE_short *)(a4))->v)) % (int)((*(signed char *)((a4 + 0xA))) & 0xF));
                                            if (t278 == 0) {
                                                t279 = *(int *)(((int)stk + 0));
                                                *(unsigned char *)((t279 + 0x0)) = 0x5;
                                                t280 = 0x5;
                                                t281 = 0xF;
                                                for (;;) {
                                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                        break;
                                                    }
                                                    t281 = (*(int *)(((int)stk + 0)));
                                                    t280 = 0x75C;
                                                    t281 = (*(signed char *)((t281 + 0x0)));
                                                    t280 = (t280 + t0);
                                                    t279 = t281;
                                                    t279 = (t279 << 1);
                                                    t279 = (t279 + t281);
                                                    t279 = (t279 << 2);
                                                    t279 = (t279 << 1);
                                                    t279 = (short)t279;
                                                    t279 = (t279 + t280);
                                                    t278 = 0xC;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t279) = *(struct mv3 *)(((short)(((((t281 - 1) << 1) + (t281 - 1)) << 2) << 1) + t280)); }
                                                    t281 = (*(int *)(((int)stk + 0)));
                                                    t280 = 0x75C;
                                                    t281 = (*(signed char *)((t281 + 0x0)));
                                                    t280 = (t280 + t0);
                                                    t279 = t281;
                                                    t279 = (t279 << 1);
                                                    t279 = (t279 + t281);
                                                    t279 = (t279 << 2);
                                                    t279 = (t279 << 1);
                                                    t279 = (short)t279;
                                                    t279 = (t279 + t280);
                                                    t279 = (t279 + 0xC);
                                                    t278 = 0xC;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t279) = *(struct mv3 *)((((short)(((((t281 - 1) << 1) + (t281 - 1)) << 2) << 1) + t280) + 0xC)); }
                                                    t278 = (*(int *)(((int)stk + 0)));
                                                    *(unsigned char *)((t278 + 0x0)) = ((*(signed char *)((t278 + 0x0))) - 1);
                                                }
                                            }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                        } else {
                                            if ((t31 & 0x70) == 112) {
                                                t310 = (int)((int)((((struct oEE_short *)(a4))->v)) % (int)((*(signed char *)((a4 + 0xA))) & 0xF));
                                                if (t310 != 0) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                                } else {
                                                    u309 = *(float *)0xC14A880;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                                    t312 = 0xF;
                                                    t313 = 0xC14A880;
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t312 = (*(int *)(((int)stk + 0)));
                                                        t313 = 0x75C;
                                                        t312 = (*(signed char *)((t312 + 0x0)));
                                                        t313 = (t313 + t0);
                                                        t311 = t312;
                                                        t311 = (t311 << 1);
                                                        t311 = (t311 + t312);
                                                        t311 = (t311 << 2);
                                                        t311 = (t311 << 1);
                                                        t311 = (short)t311;
                                                        t311 = (t311 + t313);
                                                        t310 = 0xC;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t311) = *(struct mv3 *)(((short)(((((t312 - 1) << 1) + (t312 - 1)) << 2) << 1) + t313)); }
                                                        t312 = (*(int *)(((int)stk + 0)));
                                                        t313 = 0x75C;
                                                        t312 = (*(signed char *)((t312 + 0x0)));
                                                        t313 = (t313 + t0);
                                                        t311 = t312;
                                                        t311 = (t311 << 1);
                                                        t311 = (t311 + t312);
                                                        t311 = (t311 << 2);
                                                        t311 = (t311 << 1);
                                                        t311 = (short)t311;
                                                        t311 = (t311 + t313);
                                                        t311 = (t311 + 0xC);
                                                        t310 = 0xC;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t311) = *(struct mv3 *)((((short)(((((t312 - 1) << 1) + (t312 - 1)) << 2) << 1) + t313) + 0xC)); }
                                                        t310 = (*(int *)(((int)stk + 0)));
                                                        *(unsigned char *)((t310 + 0x0)) = ((*(signed char *)((t310 + 0x0))) - 1);
                                                    }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                                                    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                                    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t335 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        *(unsigned int *)(((int)stk + 12)) = ((short)((((t335 << 1) + t335) << 2) << 1) + (0x75C + t0));
                                                        math_vec3_add((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t335 << 1) + t335) << 2) << 1) + (0x75C + t0)) + 0xC));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.5f, 0.5f, 0.5f);
                                                        t344 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_sub((*(int *)(((int)stk + 8))), ((short)((((t344 << 1) + t344) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u309, u309, u309);
                                                        t353 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_add(((short)((((t353 << 1) + t353) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 8))), -1.0f, -1.0f, -1.0f);
                                                        t362 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        math_vec3_add((((short)((((t362 << 1) + t362) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                        t368 = *(int *)(((int)stk + 0));
                                                        *(unsigned char *)((t368 + 0x0)) = ((*(signed char *)((t368 + 0x0))) - 1);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                        t427 = (t31 & 0x70);
                        t429 = 0xC14A880;
                        t431 = t430;
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t431 = (*(int *)(((int)stk + 0)));
                            t429 = 0x75C;
                            t431 = (*(signed char *)((t431 + 0x0)));
                            t429 = (t429 + t0);
                            t428 = t431;
                            t428 = (t428 << 1);
                            t428 = (t428 + t431);
                            t428 = (t428 << 2);
                            t428 = (t428 << 1);
                            t428 = (short)t428;
                            t428 = (t428 + t429);
                            t427 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t428) = *(struct mv3 *)(((short)(((((t431 - 1) << 1) + (t431 - 1)) << 2) << 1) + t429)); }
                            t429 = (*(int *)(((int)stk + 0)));
                            t431 = 0x75C;
                            t429 = (*(signed char *)((t429 + 0x0)));
                            t431 = (t431 + t0);
                            t428 = t429;
                            t428 = (t428 << 1);
                            t428 = (t428 + t429);
                            t428 = (t428 << 2);
                            t428 = (t428 << 1);
                            t428 = (short)t428;
                            t428 = (t428 + t431);
                            t428 = (t428 + 0xC);
                            t427 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t428) = *(struct mv3 *)((((short)(((((t429 - 1) << 1) + (t429 - 1)) << 2) << 1) + t431) + 0xC)); }
                            t427 = (*(int *)(((int)stk + 0)));
                            *(unsigned char *)((t427 + 0x0)) = ((*(signed char *)((t427 + 0x0))) - 1);
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
                        u450 = *(float *)((0xC14A86C + (((*(signed char *)((a4 + 0xA))) & 0xF) << 2)));
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x5;
                        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t455 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = ((short)((((t455 << 1) + t455) << 2) << 1) + (0x75C + t0));
                            math_vec3_add((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t455 << 1) + t455) << 2) << 1) + (0x75C + t0)) + 0xC));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                            t464 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_sub((*(int *)(((int)stk + 4))), ((short)((((t464 << 1) + t464) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u450, u450, u450);
                            t473 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_add(((short)((((t473 << 1) + t473) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                            t482 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            math_vec3_add((((short)((((t482 << 1) + t482) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                            t488 = *(int *)(((int)stk + 0));
                            *(unsigned char *)((t488 + 0x0)) = ((*(signed char *)((t488 + 0x0))) - 1);
                        }
                    }
                } else {
                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                    t501 = (t31 & 0x70);
                    t503 = 0x5;
                    t504 = 0xF;
                    for (;;) {
                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                            break;
                        }
                        t504 = (*(int *)(((int)stk + 0)));
                        t503 = 0x75C;
                        t504 = (*(signed char *)((t504 + 0x0)));
                        t503 = (t503 + t0);
                        t502 = t504;
                        t502 = (t502 << 1);
                        t502 = (t502 + t504);
                        t502 = (t502 << 2);
                        t502 = (t502 << 1);
                        t502 = (short)t502;
                        t502 = (t502 + t503);
                        t501 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t502) = *(struct mv3 *)(((short)(((((t504 - 1) << 1) + (t504 - 1)) << 2) << 1) + t503)); }
                        t504 = (*(int *)(((int)stk + 0)));
                        t503 = 0x75C;
                        t504 = (*(signed char *)((t504 + 0x0)));
                        t503 = (t503 + t0);
                        t502 = t504;
                        t502 = (t502 << 1);
                        t502 = (t502 + t504);
                        t502 = (t502 << 2);
                        t502 = (t502 << 1);
                        t502 = (short)t502;
                        t502 = (t502 + t503);
                        t502 = (t502 + 0xC);
                        t501 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t502) = *(struct mv3 *)((((short)(((((t504 - 1) << 1) + (t504 - 1)) << 2) << 1) + t503) + 0xC)); }
                        t501 = (*(int *)(((int)stk + 0)));
                        *(unsigned char *)((t501 + 0x0)) = ((*(signed char *)((t501 + 0x0))) - 1);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0xC)); }
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
                t539 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = t539;
                t540 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = t540;
                *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x3C);
                *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 0) + 0x3C) + 0xC);
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x3C) + 0x18);
                t534 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = t534;
                *(unsigned int *)(((int)stk + 4)) = t540;
                *(unsigned int *)(((int)stk + 12)) = t534;
                *(unsigned int *)(((int)stk + 4)) = t540;
                t538 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 8)) = t539;
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 12)) = t534;
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 8)) = t539;
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 4)) = t540;
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 8)) = t539;
                *(unsigned int *)(((int)stk + 0)) = t538;
                *(unsigned int *)(((int)stk + 8)) = t539;
                t536 = 0x24;
                t537 = (((int)stk + 0) + 0x3C);
                u542 = u9;
                u543 = 99999.0f;
                for (;;) {
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) < (int)0x4) {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < (int)0x2) {
                                if ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) != 0) {
                                    t536 = 0x20;
                                    t540 = 0x75C;
                                    t540 = (t540 + t0);
                                    *(unsigned int *)(((int)stk + 24)) = t540;
                                    t552 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                    *(unsigned short *)((((int)stk + 0) + t536)) = t552;
                                    t536 = (*(int *)(((int)stk + 0)));
                                    t536 = (*(signed char *)((t536 + 0x0)));
                                    *(unsigned short *)(((int)stk + 28)) = t536;
                                    t556 = (((t552 + 0x1) << 1) + t536);
                                    t536 = 0x20;
                                    t539 = (*(short *)((((int)stk + 0) + t536)));
                                    t536 = (*(short *)(((int)stk + 28)));
                                    t539 = (t539 << 1);
                                    t536 = (t536 + t539);
                                    t562 = t536;
                                    t536 = (t536 << 1);
                                    t536 = (t536 + t562);
                                    t536 = (t536 << 2);
                                    t539 = (short)t536;
                                    t539 = (t539 + (*(int *)(((int)stk + 24))));
                                    t540 = (t540 + (short)(((t556 << 1) + t556) << 2));
                                    t538 = (*(int *)(((int)stk + 12)));
                                    t536 = (math_vec3_add(t538, t539, t540));
                                    t538 = (*(int *)(((int)stk + 12)));
                                    t536 = (math_vec3_mul_xyz(t538, 0.5f, 0.5f, 0.5f));
                                } else {
                                    t536 = 0x75C;
                                    t569 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t536 = (t536 + t0);
                                    t537 = (*(int *)(((int)stk + 12)));
                                    t572 = ((short)(((t569 << 1) + t569) << 2) + t536);
                                    t536 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t537) = *(struct mv3 *)(t572); }
                                    t573 = t537;
                                    t576 = t538;
                                    t577 = t539;
                                    t578 = t540;
                                    u580 = u542;
                                    u581 = u543;
                                }
                                u542 = u580;
                                u543 = u581;
                                t537 = t573;
                                t538 = t576;
                                t539 = t577;
                                t540 = t578;
                                t585 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                t586 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                t536 = 0x75C;
                                t537 = (*(int *)(((int)stk + 20)));
                                t536 = (t536 + t0);
                                t590 = ((short)((((((t585 + 0x1) << 1) + t586) << 1) + (((t585 + 0x1) << 1) + t586)) << 2) + t536);
                                t536 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t537) = *(struct mv3 *)(t590); }
                                t536 = 0x20;
                                t540 = 0x75C;
                                t540 = (t540 + t0);
                                *(unsigned int *)(((int)stk + 28)) = t540;
                                t592 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                *(unsigned short *)((((int)stk + 0) + t536)) = t592;
                                t536 = (*(int *)(((int)stk + 0)));
                                t536 = (*(signed char *)((t536 + 0x0)));
                                *(unsigned short *)(((int)stk + 24)) = t536;
                                t596 = (((t592 + 0x2) << 1) + t536);
                                t536 = 0x20;
                                t539 = (*(short *)((((int)stk + 0) + t536)));
                                t536 = (*(short *)(((int)stk + 24)));
                                t539 = (t539 + 0x1);
                                t539 = (t539 << 1);
                                t536 = (t536 + t539);
                                t602 = t536;
                                t536 = (t536 << 1);
                                t536 = (t536 + t602);
                                t536 = (t536 << 2);
                                t539 = (short)t536;
                                t539 = (t539 + (*(int *)(((int)stk + 28))));
                                t540 = (t540 + (short)(((t596 << 1) + t596) << 2));
                                t538 = (*(int *)(((int)stk + 16)));
                                t536 = (math_vec3_add(t538, t539, t540));
                                t538 = (*(int *)(((int)stk + 16)));
                                t536 = (math_vec3_mul_xyz(t538, 0.5f, 0.5f, 0.5f));
                                *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) < (int)0x6) {
                                        t540 = (*(int *)(((int)stk + 4)));
                                        t613 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                        t538 = (*(int *)(((int)stk + 0)));
                                        t540 = (*(signed char *)((t540 + 0x0)));
                                        t538 = (*(signed char *)((t538 + 0x0)));
                                        t536 = 0x9C;
                                        t539 = t540;
                                        t537 = 0xC14A824;
                                        t538 = (t538 - (((t613 << 1) + t613) << 2));
                                        t538 = (t538 - ((signed char)t540 << 1));
                                        t538 = (t538 + 0x2E);
                                        t538 = (t538 << 2);
                                        t538 = (t538 << 1);
                                        t538 = (t538 << 2);
                                        t538 = (t538 + (*(int *)((t0 + t536))));
                                        t539 = (t539 << 1);
                                        t539 = (t539 + t540);
                                        t539 = (t539 << 2);
                                        t539 = (signed char)t539;
                                        t539 = (t539 + t537);
                                        t538 = (t538 + 0x70);
                                        t536 = 0x4;
                                        u543 = (*(float *)(((*(int *)(((int)stk + 20))) + 0x0)));
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x8;
                                        u542 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                                        u543 = (u543 * u541);
                                        u541 = (*(float *)((t539 + 0x0)));
                                        u629 = u543;
                                        u629 = u629 + u541 * u542;
                                        u543 = u629;
                                        u542 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x30;
                                        u632 = u543;
                                        u632 = u632 + u541 * u542;
                                        u543 = u632;
                                        *(float *)((t538 + 0x0)) = u543;
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u543 > u542) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x30;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t536 = 0x24;
                                        u543 = (*(float *)((t538 + 0x0)));
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u542 > u543) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x24;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t536 = 0x4;
                                        t537 = 0xC14A824;
                                        *(unsigned int *)((t538 + 0x0)) = ((*(int *)((t538 + 0x0))) | 0x1);
                                        t538 = (t538 + 0x4);
                                        t539 = (*(int *)(((int)stk + 4)));
                                        t539 = (*(signed char *)((t539 + 0x0)));
                                        u542 = (*(float *)(((*(int *)(((int)stk + 12))) + t536)));
                                        t648 = t539;
                                        t539 = (t539 << 1);
                                        t539 = (t539 + t648);
                                        t539 = (t539 << 2);
                                        t539 = (signed char)t539;
                                        u543 = (*(float *)(((*(int *)(((int)stk + 20))) + t536)));
                                        t539 = (t539 + t537);
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x8;
                                        u543 = (u543 * u541);
                                        u541 = (*(float *)((t539 + 0x0)));
                                        u654 = u543;
                                        u654 = u654 + u541 * u542;
                                        u543 = u654;
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x4;
                                        u542 = (*(float *)(((*(int *)(((int)stk + 16))) + t536)));
                                        t536 = 0x34;
                                        u657 = u543;
                                        u657 = u657 + u541 * u542;
                                        u543 = u657;
                                        *(float *)((t538 + 0x0)) = u543;
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u543 > u542) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x34;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t536 = 0x28;
                                        u543 = (*(float *)((t538 + 0x0)));
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u542 > u543) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x28;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t539 = (*(int *)(((int)stk + 4)));
                                        t536 = 0x4;
                                        t537 = 0xC14A824;
                                        t538 = (t538 + 0x4);
                                        t539 = (*(signed char *)((t539 + 0x0)));
                                        t670 = t539;
                                        t539 = (t539 << 1);
                                        t539 = (t539 + t670);
                                        t539 = (t539 << 2);
                                        t539 = (signed char)t539;
                                        t539 = (t539 + t537);
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x8;
                                        u543 = (*(float *)(((*(int *)(((int)stk + 20))) + t536)));
                                        u542 = (*(float *)(((*(int *)(((int)stk + 12))) + t536)));
                                        t536 = 0x8;
                                        u543 = (u543 * u541);
                                        u541 = (*(float *)((t539 + 0x0)));
                                        u677 = u543;
                                        u677 = u677 + u541 * u542;
                                        u543 = u677;
                                        u542 = (*(float *)(((*(int *)(((int)stk + 16))) + t536)));
                                        u541 = (*(float *)((t539 + t536)));
                                        t536 = 0x38;
                                        u680 = u543;
                                        u680 = u680 + u541 * u542;
                                        u543 = u680;
                                        *(float *)((t538 + 0x0)) = u543;
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u543 > u542) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x38;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t536 = 0x2C;
                                        u543 = (*(float *)((t538 + 0x0)));
                                        u542 = (*(float *)((((int)stk + 0) + t536)));
                                        if (u542 > u543) {
                                            u543 = (*(float *)((t538 + 0x0)));
                                            t536 = 0x2C;
                                            *(float *)((((int)stk + 0) + t536)) = u543;
                                        }
                                        t689 = *(int *)(((int)stk + 4));
                                        *(unsigned char *)((t689 + 0x0)) = ((*(signed char *)((t689 + 0x0))) + 0x1);
                                        continue;
                                    }
                                    break;
                                }
                                t537 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t537 + 0x0)) = ((*(signed char *)((t537 + 0x0))) + 0x1);
                                continue;
                            }
                            break;
                        }
                        t537 = (*(int *)(((int)stk + 8)));
                        *(unsigned char *)((t537 + 0x0)) = ((*(signed char *)((t537 + 0x0))) + 0x1);
                        continue;
                    }
                    break;
                }
                t695 = math_vec3_length((((int)stk + 0) + 0x30));
                t696 = math_vec3_length((((int)stk + 0) + 0x24));
                if (t695 > t696) {
                    (((struct o14_float *)(((((struct o9C_int *)(t0))->v))))->v) = t695;
                    (((struct o34_float *)(((((struct o9C_int *)(t0))->v))))->v) = t695;
                } else {
                    (((struct o14_float *)(((((struct o9C_int *)(t0))->v))))->v) = t696;
                    (((struct o34_float *)(((((struct o9C_int *)(t0))->v))))->v) = t696;
                }
                t704 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t704 - 1);
                if ((int)(short)(t704 - 1) <= 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t725 = 0xEE;
                if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x8) {
                    t709 = (((struct oEE_short *)(a4))->v);
                    (((struct o5C_float *)(a4))->v) = ((float)(((t709 << 2) << 2) << 1) / 255.0f);
                    u711 = (((struct o60_float *)(a4))->v);
                    (((struct o60_float *)(a4))->v) = (u711 - ((float)((t709 << 2) << 2) / 255.0f));
                    if (0.0f > (u711 - ((float)((t709 << 2) << 2) / 255.0f))) {
                        (((struct o60_float *)(a4))->v) = 0.0f;
                    }
                    u713 = (((struct o64_float *)(a4))->v);
                    (((struct o64_float *)(a4))->v) = (u713 - ((float)((t709 << 2) << 2) / 255.0f));
                    if (0.0f > (u713 - ((float)((t709 << 2) << 2) / 255.0f))) {
                        (((struct o64_float *)(a4))->v) = 0.0f;
                    }
                    u715 = (((struct o68_float *)(a4))->v);
                    (((struct o68_float *)(a4))->v) = (u715 - ((float)((t709 << 2) << 2) / 255.0f));
                    if (0.0f > (u715 - ((float)((t709 << 2) << 2) / 255.0f))) {
                        (((struct o68_float *)(a4))->v) = 0.0f;
                    }
                    t725 = 0x68;
                }
            }
            t879 = t725;
        } else {
            t879 = (obj_destroy(a4));
        }
    } else {
        if ((*(signed char *)((a4 + 0x9))) == 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            nlSelectMatrixStack(0x1);
            nlLoadMatrix(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
            t757 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t757 + 0x0)) = ((*(int *)((t757 + 0x0))) | 0x1);
            t759 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t759 + 0x0)) = ((*(int *)((t759 + 0x0))) | 0x1);
            t761 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t761 + 0x1);
            t874 = (t761 + 0x1);
        } else {
            nlSelectMatrixStack(0x1);
            nlLoadMatrix(((((struct o90_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0x18);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0x18)) = *(struct mv3 *)((0x75C + t0)); }
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0x24)) = *(struct mv3 *)((0x768 + t0)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x75C + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x768 + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
            t769 = *(int *)(((int)stk + 0));
            math_vec3_sub(t769, t769, (*(int *)(((int)stk + 8))));
            t772 = *(int *)(((int)stk + 4));
            math_vec3_sub(t772, t772, (*(int *)(((int)stk + 12))));
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
                t783 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((short)((((t783 << 1) + t783) << 2) << 1) + (0x75C + t0))) = *(struct mv3 *)(((short)(((((t783 - 1) << 1) + (t783 - 1)) << 2) << 1) + (0x75C + t0))); }
                t789 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((short)((((t789 << 1) + t789) << 2) << 1) + (0x75C + t0)) + 0xC)) = *(struct mv3 *)((((short)(((((t789 - 1) << 1) + (t789 - 1)) << 2) << 1) + (0x75C + t0)) + 0xC)); }
                t795 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t796 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 12)) = ((short)((((t795 << 1) + t795) << 2) << 1) + (0x75C + t0));
                math_vec3_add(((short)((((t795 << 1) + t795) << 2) << 1) + (0x75C + t0)), ((short)((((t795 << 1) + t795) << 2) << 1) + (0x75C + t0)), t796);
                t801 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t802 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 12)) = (((short)((((t801 << 1) + t801) << 2) << 1) + (0x75C + t0)) + 0xC);
                math_vec3_add((((short)((((t801 << 1) + t801) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t801 << 1) + t801) << 2) << 1) + (0x75C + t0)) + 0xC), t802);
                t806 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t806 + 0x0)) = ((*(signed char *)((t806 + 0x0))) + 0x1);
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0x18)) = *(struct mv3 *)((0x75C + t0)); }
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0x24);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 0) + 0x3C) + 0x24)) = *(struct mv3 *)((0x768 + t0)); }
            t810 = *(int *)(((int)stk + 8));
            math_vec3_sub(t810, t810, (*(int *)(((int)stk + 4))));
            t813 = *(int *)(((int)stk + 12));
            math_vec3_sub(t813, t813, (*(int *)(((int)stk + 0))));
            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.043478258f, 0.043478258f, 0.043478258f);
            math_vec3_mul_xyz((*(int *)(((int)stk + 12))), 0.043478258f, 0.043478258f, 0.043478258f);
            t820 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t820 + 0x0)) = ((*(int *)((t820 + 0x0))) | 0x1);
            t822 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t822 + 0x0)) = ((*(int *)((t822 + 0x0))) | 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o9C_int *)(t0))->v)) + 0x70)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o9C_int *)(t0))->v)) + 0x90)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t828 = (((int)stk + 0) + 0x6C);
            for (;;) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x18) {
                    break;
                }
                t828 = 0x9C;
                t832 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t833 = *(int *)((t0 + t828));
                t828 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((t832 << 2) << 2) << 2) + t833) + 0x70)) = *(struct mv3 *)(((((((t832 - 1) << 2) << 2) << 2) + t833) + 0x70)); }
                t828 = 0x9C;
                t835 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t836 = *(int *)((t0 + t828));
                t828 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t835 << 1) + 0x1) << 2) << 1) << 2) + t836) + 0x70)) = *(struct mv3 *)(((((((((t835 - 1) << 1) + 0x1) << 2) << 1) << 2) + t836) + 0x70)); }
                t828 = 0x9C;
                t844 = *(int *)((t0 + t828));
                t828 = 0x9C;
                t828 = (math_vec3_add(((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + (*(int *)((t0 + t828)))) + 0x70), ((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + t844) + 0x70), (*(int *)(((int)stk + 8)))));
                t828 = 0x9C;
                t855 = *(int *)((t0 + t828));
                t828 = 0x9C;
                t828 = (math_vec3_add(((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + (*(int *)((t0 + t828)))) + 0x70), ((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + t855) + 0x70), (*(int *)(((int)stk + 4)))));
                t828 = 0x9C;
                t862 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t863 = *(int *)((t0 + t828));
                t828 = ((((struct o70_int *)(((((t862 << 2) << 2) << 2) + t863)))->v));
                t828 = (t828 | 0x1);
                (((struct o70_uint *)(((((t862 << 2) << 2) << 2) + t863)))->v) = t828;
                t828 = 0x9C;
                t866 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t867 = *(int *)((t0 + t828));
                t828 = ((((struct o70_int *)(((((((t866 << 1) + 0x1) << 2) << 1) << 2) + t867)))->v));
                t828 = (t828 | 0x1);
                (((struct o70_uint *)(((((((t866 << 1) + 0x1) << 2) << 1) << 2) + t867)))->v) = t828;
                t871 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t871 + 0x0)) = ((*(signed char *)((t871 + 0x0))) + 0x1);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t873 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t873 + 0x1);
            t874 = (t873 + 0x1);
        }
        t879 = t874;
    }
    return t879;
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
    register int t83;
    register int t85;
    register float t89;
    register float t98;
    register float t105;
    register int t149;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u12;
    register int t151;
    register int t106;
    register int t107;
    register int t109;
    register int t119;

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
                t151 = ((0xC383800 + t0) + t1);
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
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t28) = *(struct mv3 *)((t9 + 0x4)); }
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
                                    t83 = *(int *)0xC37E1E8;
                                    t28 = ((int)stk + 0);
                                    t0 = 0xC37E1EC;
                                    t28 = (t28 + 0x24);
                                    t1 = t83;
                                    t85 = ((short)(((t83 << 1) + t1) << 2) + t0);
                                    t0 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t28) = *(struct mv3 *)(t85); }
                                    t0 = (*(signed char *)((t10 + 0x2)));
                                    if (t0 != 0) {
                                        if (t0 != 1) {
                                            t109 = 0xC0E6FE8;
                                            if (t0 != 2) {
                                                t106 = t0;
                                                t107 = t28;
                                            } else {
                                                t28 = ((int)stk + 0);
                                                t28 = (t28 + 0x18);
                                                t0 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t28) = *(struct mv3 *)((t10 + 0x4)); }
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
                                                t89 = math_vec3_length(t2);
                                                t1 = 0xC3821EC;
                                                t1 = (t1 + t6);
                                                *(float *)((t1 + 0x0)) = t89;
                                                t1 = 0xC3829EC;
                                                t1 = (t1 + t6);
                                                *(float *)((t1 + 0x0)) = t89;
                                                t109 = t1;
                                            }
                                        } else {
                                            t1 = 0xC0E6FE8;
                                            t28 = ((int)stk + 0);
                                            t28 = (t28 + 0x18);
                                            t0 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t28) = *(struct mv3 *)((0x98 + t8)); }
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
                                            t98 = math_vec3_length(t2);
                                            t1 = 0xC3821EC;
                                            t1 = (t1 + t6);
                                            *(float *)((t1 + 0x0)) = t98;
                                            t1 = 0xC3829EC;
                                            t1 = (t1 + t6);
                                            *(float *)((t1 + 0x0)) = t98;
                                            t109 = t1;
                                        }
                                    } else {
                                        t1 = 0xC0E6FE8;
                                        t6 = (*(int *)0xC37E1E8);
                                        t2 = ((int)stk + 0);
                                        t1 = 0xC0620A4;
                                        t6 = (t6 << 2);
                                        t2 = (t2 + 0x24);
                                        t105 = math_vec3_length(t2);
                                        t1 = 0xC3821EC;
                                        t1 = (t1 + t6);
                                        *(float *)((t1 + 0x0)) = t105;
                                        t1 = 0xC3829EC;
                                        t1 = (t1 + t6);
                                        *(float *)((t1 + 0x0)) = t105;
                                        t109 = t1;
                                    }
                                    t0 = t106;
                                    t28 = t107;
                                    t1 = t109;
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
                                    t119 = (*(short *)((t7 + t0)));
                                    t1 = (*(short *)((t6 + t0)));
                                    t119 = (t119 << 2);
                                    t1 = (t1 << 2);
                                    t119 = (t119 + t5);
                                    t1 = (t1 + t5);
                                    u12 = (*(float *)((t119 + 0x0)));
                                    t3 = (t3 + 0x1);
                                    if (((*(float *)((t1 + 0x0)))) > u12) {
                                        t4 = (*(int *)((t10 + 0x24)));
                                        t5 = t4;
                                        t5 = (t5 + t6);
                                        t4 = (t4 + t7);
                                        *(unsigned int *)(((int)stk + 12)) = t5;
                                        t119 = (*(short *)((t4 + 0x0)));
                                        t5 = (*(short *)((t5 + 0x0)));
                                        t1 = (*(int *)(((int)stk + 12)));
                                        *(unsigned short *)((t1 + 0x0)) = t119;
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
                t149 = (0xC383800 + t0);
                t0 = (*(int *)(((int)stk + 8)));
                t151 = (t149 + t1);
            }
            *(unsigned char *)((t151 + 0x0)) = t0;
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

int hit_list_save_positions(int a4, int a5, int a6)
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

void item_tick_falling(int a4)
{
    register int t0;
    float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if (((int)(short)(t0 + 0x1) > (int)0x5) && (u0 = (((struct o274_float *)(a4))->v), u0 > 0.0f)) {
            obj_set_mode_owner(a4, 0x0, (*(signed char *)((a4 + 0x3))));
    return;
        }
        math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
        math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
    return;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC336244); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC336250); }
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
