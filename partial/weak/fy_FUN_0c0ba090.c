/* Generated straight-line translation (kept from the generator, checked on drawn cases): fx_update_16. */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720C_short { char p[0x720C]; short v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7215_uchar { char p[0x7215]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7241_uchar { char p[0x7241]; unsigned char v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72A0_ushort { char p[0x72A0]; unsigned short v; };
struct o72A2_ushort { char p[0x72A2]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_036a6c(int, int);
int fx_spawn_0375d4(int);
int fx_spawn_044e38(int);
int item_spawn_pickup_popup(int, int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c09375c(int);
int pl_clear_tint_flag(int);
int FUN_0c099a92(int);
int FUN_0c099ac6(int);
int FUN_0c099ae4(int);
int FUN_0c099afe(int);
int pl_start_motion(int, int, int);
int pl_get_held_item_class(int);
int pl_mash_reduce_counter(int, int);
int pl_get_hit_count_of_opponent(int);
int pl_check_item_pickup(void);
int pl_update_camera_side_flag(int);
int FUN_0c0a0074(int);
int obj_set_record_char(int, int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_clear_slot_contact(int);
int obj_collect_slot_contacts(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int thunk_math_mat_get_translate(int, int);
int fx_update_16(int a4);
int pl_update_frame(int a4, int a5, int a6, int a7);
int fx_update_16(int a4)
{
    int stk[8];
    register int t0;
    register int t3;
    register float u9;
    register int t12;
    register int t29;
    register int t32;
    register float u34;
    register float u35;
    register float u36;
    register float t37;
    register int t39;
    register int t42;
    register int t54;
    register int t60;
    register float u63;
    register int t67;
    register int t73;
    register float u76;
    register int t80;
    register int t86;
    register float u89;
    register int t93;
    register int t99;
    register float u102;
    register int t106;
    register int t112;
    register float u115;
    register int t119;
    register int t125;
    register float u128;
    register int t132;
    register int t138;
    register float u141;
    register int t145;
    register int t151;
    register float u154;
    register int t158;
    register float u160;
    register float t162;
    register float u165;
    register float u167;
    register float u171;
    register float t173;
    register float u176;
    register int t180;
    register int t199;
    register int t205;
    register float u208;
    register int t212;
    register int t218;
    register float u221;
    register int t225;
    register int t231;
    register float u234;
    register int t238;
    register int t244;
    register float u247;
    register int t251;
    register int t257;
    register float u260;
    register int t264;
    register int t270;
    register float u273;
    register int t277;
    register int t283;
    register float u286;
    register int t290;
    register int t296;
    register float u299;
    register int t304;
    register float u307;
    register float t309;
    register float u312;
    register float u314;
    register float u318;
    register float t320;
    register float u323;
    register int t342;
    register int t346;
    register int t347;
    register int t360;
    register int t369;
    register int t383;
    register int t392;
    register float u399;
    register int t400;
    register int t406;
    register float u409;
    register int t412;
    register int t418;
    register float u421;
    register int t424;
    register int t430;
    register float u433;
    register int t436;
    register int t442;
    register float u445;
    register int t449;
    register int t455;
    register float u458;
    register int t462;
    register int t468;
    register float u471;
    register int t475;
    register int t481;
    register float u484;
    register int t488;
    register int t494;
    register float u497;
    register int t501;
    register int t507;
    register float u510;
    register int t514;
    register int t520;
    register float u523;
    register int t527;
    register int t533;
    register float u536;
    register int t545;
    register int t568;
    register int t574;
    register float u577;
    register int t581;
    register int t587;
    register float u590;
    register int t594;
    register int t597;
    register float u601;
    register int t602;
    register int t608;
    register float u611;
    register int t615;
    register int t621;
    register float u624;
    register int t628;
    register int t634;
    register float u637;
    register int t641;
    register int t647;
    register float u650;
    register int t654;
    register int t660;
    register float u663;
    register int t667;
    register int t673;
    register float u676;
    register int t680;
    register int t686;
    register float u689;
    register int t693;
    register int t699;
    register float u702;
    register int t710;
    register int t715;
    register int t716;
    register int t780;
    register int t790;
    register int t818;
    register int t828;
    register int t843;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x8;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
                    *(unsigned char *)((a4 + 0x8)) = 0x6;
                    t843 = 0x6;
                } else {
                    u9 = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
                    u9 = u9 + 1000.0f * ((((struct o54_float *)(a4))->v));
                    (((struct o24_float *)(a4))->v) = (u9 + 225.0f);
                    t12 = *(signed char *)(((*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C))) + 0x3));
                    *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stk + 4) + 0x10));
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 20))) - ((((struct o20_float *)(a4))->v)));
                    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) - ((((struct o24_float *)(a4))->v)));
                    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 28))) - ((((struct o28_float *)(a4))->v)));
                    if ((*(float *)(((int)stk + 4))) == 0.0f) {
                        *(float *)(((int)stk + 4)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 12))) == 0.0f) {
                        *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    t29 = math_atan_angle16(((-(*(float *)(((int)stk + 8)))) / (*(float *)(((int)stk + 4)))));
                    t32 = t29;
                    if (0.0f > (*(float *)(((int)stk + 4)))) {
                        t32 = (t29 + 0x8000);
                    }
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t32 + 0x4000);
                    u34 = *(float *)(((int)stk + 8));
                    u35 = *(float *)(((int)stk + 4));
                    u36 = (u34 * u34);
                    u36 = u36 + u35 * u35;
                    t37 = math_signed_sqrt(u36);
                    t39 = math_atan_angle16(((-t37) / (*(float *)(((int)stk + 12)))));
                    t42 = t39;
                    if (0.0f > (*(float *)(((int)stk + 12)))) {
                        t42 = (t39 + 0x8000);
                    }
                    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t42 + 0x4000));
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x71C);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((*(float *)((((((((struct oF2_short *)(a4))->v)) << 2) + 0xC33C348) + 0x0))) / 1000.0f) / 50.0f));
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + (((*(float *)((((((((struct oF2_short *)(a4))->v)) << 2) + 0xC33C348) + 0x0))) / 1000.0f) / 50.0f));
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + (((*(float *)(((0xC33C348 + (((((struct oF2_short *)(a4))->v)) << 2)) + 0x0))) / 1000.0f) / 50.0f));
                    t54 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t54);
                    math_rand_float();
                    t60 = _modlu();
                    u63 = (float)t60;
                    if ((int)t60 < 0) {
                        u63 = ((float)t60 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t54))->v) = ((((((struct o50_float *)(a4))->v)) + (u63 / 1000.0f)) + -0.049999997f);
                    t67 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t67);
                    math_rand_float();
                    t73 = _modlu();
                    u76 = (float)t73;
                    if ((int)t73 < 0) {
                        u76 = ((float)t73 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t67))->v) = ((((((struct o54_float *)(a4))->v)) + (u76 / 1000.0f)) + -0.049999997f);
                    t80 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t80);
                    math_rand_float();
                    t86 = _modlu();
                    u89 = (float)t86;
                    if ((int)t86 < 0) {
                        u89 = ((float)t86 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t80))->v) = ((((((struct o58_float *)(a4))->v)) + (u89 / 1000.0f)) + -0.049999997f);
                    t93 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t93);
                    math_rand_float();
                    t99 = _modlu();
                    u102 = (float)t99;
                    if ((int)t99 < 0) {
                        u102 = ((float)t99 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t93))->v) = ((((((struct o50_float *)(a4))->v)) + (u102 / 1000.0f)) + -0.049999997f);
                    t106 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t106);
                    math_rand_float();
                    t112 = _modlu();
                    u115 = (float)t112;
                    if ((int)t112 < 0) {
                        u115 = ((float)t112 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t106))->v) = ((((((struct o54_float *)(a4))->v)) + (u115 / 1000.0f)) + -0.049999997f);
                    t119 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t119);
                    math_rand_float();
                    t125 = _modlu();
                    u128 = (float)t125;
                    if ((int)t125 < 0) {
                        u128 = ((float)t125 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t119))->v) = ((((((struct o58_float *)(a4))->v)) + (u128 / 1000.0f)) + -0.049999997f);
                    t132 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t132);
                    math_rand_float();
                    t138 = _modlu();
                    u141 = (float)t138;
                    if ((int)t138 < 0) {
                        u141 = ((float)t138 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t132) + 0x0)) = ((*(int *)(((0x18 + t132) + 0x0))) + (int)((u141 * 65536.0f) / 360.0f));
                    t145 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t145);
                    math_rand_float();
                    t151 = _modlu();
                    u154 = (float)t151;
                    if ((int)t151 < 0) {
                        u154 = ((float)t151 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t145) + 0x0)) = ((*(int *)(((0x18 + t145) + 0x0))) + (int)((u154 * 65536.0f) / 360.0f));
                    t158 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t158 - 1);
                    t843 = 0xEE;
                    if ((short)(t158 - 1) != 0) {
                    } else {
                        u160 = *(float *)((0xC33C358 + (((((struct oF2_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u160;
                        t162 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u160 * t162);
                        u165 = (u160 * t162);
                        (((struct o38_float *)(a4))->v) = (u165 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                        u167 = *(float *)((0xC33C358 + (((((struct oF2_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u167;
                        (((struct o3C_float *)(a4))->v) = (u167 * (math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                        u171 = *(float *)((0xC33C358 + (((((struct oF2_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u171;
                        t173 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u171 * t173);
                        u176 = (u171 * t173);
                        (((struct o40_float *)(a4))->v) = (u176 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                        if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                            (((struct oF2_ushort *)(a4))->v) = 0x0;
                        } else {
                            (((struct oF2_ushort *)(a4))->v) = 0x1;
                        }
                        (((struct o108_uchar *)(a4))->v) = 0x0;
                        t180 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t180 + 0x1);
                        t843 = (t180 + 0x1);
                    }
                }
            } else {
                if (t3 == 3) {
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x71C);
                    t199 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t199);
                    math_rand_float();
                    t205 = _modlu();
                    u208 = (float)t205;
                    if ((int)t205 < 0) {
                        u208 = ((float)t205 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t199))->v) = ((((((struct o50_float *)(a4))->v)) + (u208 / 1000.0f)) + -0.049999997f);
                    t212 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t212);
                    math_rand_float();
                    t218 = _modlu();
                    u221 = (float)t218;
                    if ((int)t218 < 0) {
                        u221 = ((float)t218 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t212))->v) = ((((((struct o54_float *)(a4))->v)) + (u221 / 1000.0f)) + -0.049999997f);
                    t225 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t225);
                    math_rand_float();
                    t231 = _modlu();
                    u234 = (float)t231;
                    if ((int)t231 < 0) {
                        u234 = ((float)t231 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t225))->v) = ((((((struct o58_float *)(a4))->v)) + (u234 / 1000.0f)) + -0.049999997f);
                    t238 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t238);
                    math_rand_float();
                    t244 = _modlu();
                    u247 = (float)t244;
                    if ((int)t244 < 0) {
                        u247 = ((float)t244 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t238))->v) = ((((((struct o50_float *)(a4))->v)) + (u247 / 1000.0f)) + -0.049999997f);
                    t251 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t251);
                    math_rand_float();
                    t257 = _modlu();
                    u260 = (float)t257;
                    if ((int)t257 < 0) {
                        u260 = ((float)t257 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t251))->v) = ((((((struct o54_float *)(a4))->v)) + (u260 / 1000.0f)) + -0.049999997f);
                    t264 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t264);
                    math_rand_float();
                    t270 = _modlu();
                    u273 = (float)t270;
                    if ((int)t270 < 0) {
                        u273 = ((float)t270 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t264))->v) = ((((((struct o58_float *)(a4))->v)) + (u273 / 1000.0f)) + -0.049999997f);
                    t277 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t277);
                    math_rand_float();
                    t283 = _modlu();
                    u286 = (float)t283;
                    if ((int)t283 < 0) {
                        u286 = ((float)t283 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t277) + 0x0)) = ((*(int *)(((0x18 + t277) + 0x0))) + (int)((u286 * 65536.0f) / 360.0f));
                    t290 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t290);
                    math_rand_float();
                    t296 = _modlu();
                    u299 = (float)t296;
                    if ((int)t296 < 0) {
                        u299 = ((float)t296 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t290) + 0x0)) = ((*(int *)(((0x18 + t290) + 0x0))) + (int)((u299 * 65536.0f) / 360.0f));
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t304 = pl_get_hit_count_of_opponent(a4);
                        if ((signed char)t304 == 1) {
                            (((struct o108_uchar *)(a4))->v) = 0x0;
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                            u307 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u307;
                            t309 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u307 * t309);
                            u312 = (u307 * t309);
                            (((struct o38_float *)(a4))->v) = (u312 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                            u314 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u314;
                            (((struct o3C_float *)(a4))->v) = (u314 * (math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                            u318 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u318;
                            t320 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u318 * t320);
                            u323 = (u318 * t320);
                            (((struct o40_float *)(a4))->v) = (u323 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                        }
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    *(volatile short *)((a4 + 0xEC));
                    t342 = _modls();
                    if (t342 == 0) {
                        if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x9) {
                            *(volatile short *)((a4 + 0xEC));
                            t346 = _modls();
                            t347 = 0x7A;
                            if (t346 == 0) {
                                t347 = 0x73;
                            }
                            obj_set_record_char(a4, t347);
                        } else {
                            obj_set_record_char(a4, 0x79);
                        }
                    }
                    if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                    }
                    if (((((struct oF0_short *)(a4))->v)) != 10) {
                        t360 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t360 - 1);
                        if ((short)(t360 - 1) != 0) {
                            t843 = 0x2D8;
                            if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                            } else {
                                t843 = 0xF2;
                                if (((((struct oF2_short *)(a4))->v)) == 0) {
                                } else {
                                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                                    fx_spawn_0375d4(a4);
                                    (((struct oEC_ushort *)(a4))->v) = 0x3C;
                                    t369 = *(signed char *)((a4 + 0x8));
                                    *(unsigned char *)((a4 + 0x8)) = (t369 + 0x1);
                                    t843 = (t369 + 0x1);
                                }
                            }
                        } else {
                            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                            fx_spawn_0375d4(a4);
                            (((struct oEC_ushort *)(a4))->v) = 0x3C;
                            t383 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t383 + 0x1);
                            t843 = (t383 + 0x1);
                        }
                    } else {
                        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                        fx_spawn_0375d4(a4);
                        (((struct oEC_ushort *)(a4))->v) = 0x3C;
                        t392 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t392 + 0x1);
                        t843 = (t392 + 0x1);
                    }
                } else {
                    if (t3 == 4) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xC16);
                        u399 = (((struct o58_float *)(a4))->v);
                        (((struct o58_float *)(a4))->v) = (u399 - 0.00999999978f);
                        (((struct o54_float *)(a4))->v) = (u399 - 0.00999999978f);
                        (((struct o50_float *)(a4))->v) = (u399 - 0.00999999978f);
                        t400 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t400);
                        math_rand_float();
                        t406 = _modlu();
                        u409 = (float)t406;
                        if ((int)t406 < 0) {
                            u409 = ((float)t406 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t400))->v) = ((u409 / 1000.0f) + -0.049999997f);
                        t412 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t412);
                        math_rand_float();
                        t418 = _modlu();
                        u421 = (float)t418;
                        if ((int)t418 < 0) {
                            u421 = ((float)t418 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t412))->v) = ((u421 / 1000.0f) + -0.049999997f);
                        t424 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t424);
                        math_rand_float();
                        t430 = _modlu();
                        u433 = (float)t430;
                        if ((int)t430 < 0) {
                            u433 = ((float)t430 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t424))->v) = ((u433 / 1000.0f) + -0.049999997f);
                        t436 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t436);
                        math_rand_float();
                        t442 = _modlu();
                        u445 = (float)t442;
                        if ((int)t442 < 0) {
                            u445 = ((float)t442 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t436))->v) = ((((((struct o50_float *)(a4))->v)) + (u445 / 1000.0f)) + -0.049999997f);
                        t449 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t449);
                        math_rand_float();
                        t455 = _modlu();
                        u458 = (float)t455;
                        if ((int)t455 < 0) {
                            u458 = ((float)t455 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t449))->v) = ((((((struct o54_float *)(a4))->v)) + (u458 / 1000.0f)) + -0.049999997f);
                        t462 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t462);
                        math_rand_float();
                        t468 = _modlu();
                        u471 = (float)t468;
                        if ((int)t468 < 0) {
                            u471 = ((float)t468 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t462))->v) = ((((((struct o58_float *)(a4))->v)) + (u471 / 1000.0f)) + -0.049999997f);
                        t475 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t475);
                        math_rand_float();
                        t481 = _modlu();
                        u484 = (float)t481;
                        if ((int)t481 < 0) {
                            u484 = ((float)t481 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t475))->v) = ((((((struct o50_float *)(a4))->v)) + (u484 / 1000.0f)) + -0.049999997f);
                        t488 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t488);
                        math_rand_float();
                        t494 = _modlu();
                        u497 = (float)t494;
                        if ((int)t494 < 0) {
                            u497 = ((float)t494 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t488))->v) = ((((((struct o54_float *)(a4))->v)) + (u497 / 1000.0f)) + -0.049999997f);
                        t501 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t501);
                        math_rand_float();
                        t507 = _modlu();
                        u510 = (float)t507;
                        if ((int)t507 < 0) {
                            u510 = ((float)t507 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t501))->v) = ((((((struct o58_float *)(a4))->v)) + (u510 / 1000.0f)) + -0.049999997f);
                        t514 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x18 + t514);
                        math_rand_float();
                        t520 = _modlu();
                        u523 = (float)t520;
                        if ((int)t520 < 0) {
                            u523 = ((float)t520 + 4.2949673e+09f);
                        }
                        *(unsigned int *)(((0x18 + t514) + 0x0)) = ((*(int *)(((0x18 + t514) + 0x0))) + (int)((u523 * 65536.0f) / 360.0f));
                        t527 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x18 + t527);
                        math_rand_float();
                        t533 = _modlu();
                        u536 = (float)t533;
                        if ((int)t533 < 0) {
                            u536 = ((float)t533 + 4.2949673e+09f);
                        }
                        *(unsigned int *)(((0x18 + t527) + 0x0)) = ((*(int *)(((0x18 + t527) + 0x0))) + (int)((u536 * 65536.0f) / 360.0f));
                        t843 = 0x50;
                        if (!(0.099999994f > ((((struct o50_float *)(a4))->v)))) {
                        } else {
                            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x22);
                            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                            (((struct o101_uchar *)(a4))->v) = 0x0;
                            (((struct o102_uchar *)(a4))->v) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x1E;
                            t545 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t545 + 0x1);
                            t843 = (t545 + 0x1);
                        }
                    } else {
                        if (t3 == 5) {
                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
                            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
                            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
                            (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
                            (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
                            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
                            (((struct o1C_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
                            (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
                            (((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
                            t568 = (((struct o2E4_int *)(a4))->v);
                            *(int *)((int)stk + 0) = (0x18 + t568);
                            math_rand_float();
                            t574 = _modlu();
                            u577 = (float)t574;
                            if ((int)t574 < 0) {
                                u577 = ((float)t574 + 4.2949673e+09f);
                            }
                            *(unsigned int *)(((0x18 + t568) + 0x0)) = ((*(int *)(((0x18 + t568) + 0x0))) + (int)((u577 * 65536.0f) / 360.0f));
                            t581 = (((struct o2E8_int *)(a4))->v);
                            *(int *)((int)stk + 0) = (0x18 + t581);
                            math_rand_float();
                            t587 = _modlu();
                            u590 = (float)t587;
                            if ((int)t587 < 0) {
                                u590 = ((float)t587 + 4.2949673e+09f);
                            }
                            *(unsigned int *)(((0x18 + t581) + 0x0)) = ((*(int *)(((0x18 + t581) + 0x0))) + (int)((u590 * 65536.0f) / 360.0f));
                            t594 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t594 - 1);
                            t843 = 0xEC;
                            if ((short)(t594 - 1) != 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                t597 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t597 + 0x1);
                                t843 = (t597 + 0x1);
                            }
                        } else {
                            if (t3 == 6) {
                                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xC16);
                                u601 = (((struct o58_float *)(a4))->v);
                                (((struct o58_float *)(a4))->v) = (u601 - 0.00499999989f);
                                (((struct o54_float *)(a4))->v) = (u601 - 0.00499999989f);
                                (((struct o50_float *)(a4))->v) = (u601 - 0.00499999989f);
                                t602 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x1C + t602);
                                math_rand_float();
                                t608 = _modlu();
                                u611 = (float)t608;
                                if ((int)t608 < 0) {
                                    u611 = ((float)t608 + 4.2949673e+09f);
                                }
                                (((struct o1C_float *)(t602))->v) = ((((((struct o50_float *)(a4))->v)) + (u611 / 1000.0f)) + -0.049999997f);
                                t615 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x20 + t615);
                                math_rand_float();
                                t621 = _modlu();
                                u624 = (float)t621;
                                if ((int)t621 < 0) {
                                    u624 = ((float)t621 + 4.2949673e+09f);
                                }
                                (((struct o20_float *)(t615))->v) = ((((((struct o54_float *)(a4))->v)) + (u624 / 1000.0f)) + -0.049999997f);
                                t628 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x24 + t628);
                                math_rand_float();
                                t634 = _modlu();
                                u637 = (float)t634;
                                if ((int)t634 < 0) {
                                    u637 = ((float)t634 + 4.2949673e+09f);
                                }
                                (((struct o24_float *)(t628))->v) = ((((((struct o58_float *)(a4))->v)) + (u637 / 1000.0f)) + -0.049999997f);
                                t641 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x1C + t641);
                                math_rand_float();
                                t647 = _modlu();
                                u650 = (float)t647;
                                if ((int)t647 < 0) {
                                    u650 = ((float)t647 + 4.2949673e+09f);
                                }
                                (((struct o1C_float *)(t641))->v) = ((((((struct o50_float *)(a4))->v)) + (u650 / 1000.0f)) + -0.049999997f);
                                t654 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x20 + t654);
                                math_rand_float();
                                t660 = _modlu();
                                u663 = (float)t660;
                                if ((int)t660 < 0) {
                                    u663 = ((float)t660 + 4.2949673e+09f);
                                }
                                (((struct o20_float *)(t654))->v) = ((((((struct o54_float *)(a4))->v)) + (u663 / 1000.0f)) + -0.049999997f);
                                t667 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x24 + t667);
                                math_rand_float();
                                t673 = _modlu();
                                u676 = (float)t673;
                                if ((int)t673 < 0) {
                                    u676 = ((float)t673 + 4.2949673e+09f);
                                }
                                (((struct o24_float *)(t667))->v) = ((((((struct o58_float *)(a4))->v)) + (u676 / 1000.0f)) + -0.049999997f);
                                t680 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x18 + t680);
                                math_rand_float();
                                t686 = _modlu();
                                u689 = (float)t686;
                                if ((int)t686 < 0) {
                                    u689 = ((float)t686 + 4.2949673e+09f);
                                }
                                *(unsigned int *)(((0x18 + t680) + 0x0)) = ((*(int *)(((0x18 + t680) + 0x0))) + (int)((u689 * 65536.0f) / 360.0f));
                                t693 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x18 + t693);
                                math_rand_float();
                                t699 = _modlu();
                                u702 = (float)t699;
                                if ((int)t699 < 0) {
                                    u702 = ((float)t699 + 4.2949673e+09f);
                                }
                                *(unsigned int *)(((0x18 + t693) + 0x0)) = ((*(int *)(((0x18 + t693) + 0x0))) + (int)((u702 * 65536.0f) / 360.0f));
                                t843 = 0x50;
                                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                                    (((struct o101_uchar *)(a4))->v) = 0x0;
                                    (((struct o102_uchar *)(a4))->v) = 0x0;
                                    (((struct oEC_ushort *)(a4))->v) = 0x5A;
                                    t710 = *(signed char *)((a4 + 0x8));
                                    *(unsigned char *)((a4 + 0x8)) = (t710 + 0x1);
                                    t843 = (t710 + 0x1);
                                }
                            } else {
                                if (t3 == 7) {
                                    t715 = (((struct oEC_short *)(a4))->v);
                                    (((struct oEC_ushort *)(a4))->v) = (t715 - 1);
                                    t843 = 0xEC;
                                    if ((short)(t715 - 1) == 0) {
                                        t716 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t716 + 0x1);
                                        t843 = (t716 + 0x1);
                                    }
                                } else {
                                    t843 = t3;
                                    if (t3 == 8) {
                                        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                                        t843 = (obj_destroy(a4));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
                *(unsigned char *)((a4 + 0x8)) = 0x8;
                t843 = 0x8;
            } else {
                t780 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t780 - 1);
                t843 = 0xEC;
                if ((short)(t780 - 1) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0x1)) = 0x1;
                    obj_set_record_char(a4, 0x79);
                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x30);
                    fx_spawn_036a6c(a4, 0x1);
                    fx_spawn_036a6c(a4, 0x2);
                    fx_spawn_036a6c(a4, 0x3);
                    fx_spawn_036a6c(a4, 0x1);
                    fx_spawn_036a6c(a4, 0x2);
                    fx_spawn_036a6c(a4, 0x3);
                    (((struct oEC_ushort *)(a4))->v) = 0xF0;
                    (((struct oEE_ushort *)(a4))->v) = 0x32;
                    (((struct oF0_ushort *)(a4))->v) = 0x0;
                    t790 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t790 + 0x1);
                    t843 = (t790 + 0x1);
                }
            }
        }
    } else {
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
            *(unsigned char *)((a4 + 0x8)) = 0x8;
            t843 = 0x8;
        } else {
            t818 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t818 - 1);
            t843 = 0xEC;
            if ((short)(t818 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                obj_set_record_char(a4, 0x79);
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x30);
                fx_spawn_036a6c(a4, 0x1);
                fx_spawn_036a6c(a4, 0x2);
                fx_spawn_036a6c(a4, 0x3);
                fx_spawn_036a6c(a4, 0x1);
                fx_spawn_036a6c(a4, 0x2);
                fx_spawn_036a6c(a4, 0x3);
                (((struct oEC_ushort *)(a4))->v) = 0xF0;
                (((struct oEE_ushort *)(a4))->v) = 0x32;
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                t828 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t828 + 0x1);
                t843 = (t828 + 0x1);
            }
        }
    }
    return t843;
}
