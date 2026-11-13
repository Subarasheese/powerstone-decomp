/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0ba090-0c0bb2e8) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
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
int FUN_0c0555dc(void);
int obj_destroy(int);
int pl_get_hit_count_of_opponent(int);
int obj_set_record_char(int, int);
int snd_play_char_voice(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(void);
int _modlu(void);
int thunk_FUN_0c062242(int, int);

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
    register float t55;
    register float u58;
    register int t60;
    register float u63;
    register int t67;
    register float t68;
    register float u71;
    register int t73;
    register float u76;
    register int t80;
    register float t81;
    register float u84;
    register int t86;
    register float u89;
    register int t93;
    register float t94;
    register float u97;
    register int t99;
    register float u102;
    register int t106;
    register float t107;
    register float u110;
    register int t112;
    register float u115;
    register int t119;
    register float t120;
    register float u123;
    register int t125;
    register float u128;
    register int t132;
    register float t133;
    register float u136;
    register int t138;
    register float u141;
    register int t145;
    register float t146;
    register float u149;
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
    register int t200;
    register float t201;
    register float u204;
    register int t206;
    register float u209;
    register int t213;
    register float t214;
    register float u217;
    register int t219;
    register float u222;
    register int t226;
    register float t227;
    register float u230;
    register int t232;
    register float u235;
    register int t239;
    register float t240;
    register float u243;
    register int t245;
    register float u248;
    register int t252;
    register float t253;
    register float u256;
    register int t258;
    register float u261;
    register int t265;
    register float t266;
    register float u269;
    register int t271;
    register float u274;
    register int t278;
    register float t279;
    register float u282;
    register int t284;
    register float u287;
    register int t291;
    register float t292;
    register float u295;
    register int t297;
    register float u300;
    register int t305;
    register float u308;
    register float t310;
    register float u313;
    register float u315;
    register float u319;
    register float t321;
    register float u324;
    register int t349;
    register int t366;
    register int t375;
    register int t393;
    register int t404;
    register float u413;
    register int t414;
    register float t415;
    register float u418;
    register int t420;
    register float u423;
    register int t426;
    register float t427;
    register float u430;
    register int t432;
    register float u435;
    register int t438;
    register float t439;
    register float u442;
    register int t444;
    register float u447;
    register int t450;
    register float t451;
    register float u454;
    register int t456;
    register float u459;
    register int t463;
    register float t464;
    register float u467;
    register int t469;
    register float u472;
    register int t476;
    register float t477;
    register float u480;
    register int t482;
    register float u485;
    register int t489;
    register float t490;
    register float u493;
    register int t495;
    register float u498;
    register int t502;
    register float t503;
    register float u506;
    register int t508;
    register float u511;
    register int t515;
    register float t516;
    register float u519;
    register int t521;
    register float u524;
    register int t528;
    register float t529;
    register float u532;
    register int t534;
    register float u537;
    register int t541;
    register float t542;
    register float u545;
    register int t547;
    register float u550;
    register int t559;
    register int t583;
    register float t584;
    register float u587;
    register int t589;
    register float u592;
    register int t596;
    register float t597;
    register float u600;
    register int t602;
    register float u605;
    register int t609;
    register int t612;
    register float u616;
    register int t617;
    register float t618;
    register float u621;
    register int t623;
    register float u626;
    register int t630;
    register float t631;
    register float u634;
    register int t636;
    register float u639;
    register int t643;
    register float t644;
    register float u647;
    register int t649;
    register float u652;
    register int t656;
    register float t657;
    register float u660;
    register int t662;
    register float u665;
    register int t669;
    register float t670;
    register float u673;
    register int t675;
    register float u678;
    register int t682;
    register float t683;
    register float u686;
    register int t688;
    register float u691;
    register int t695;
    register float t696;
    register float u699;
    register int t701;
    register float u704;
    register int t708;
    register float t709;
    register float u712;
    register int t714;
    register float u717;
    register int t725;
    register int t730;
    register int t731;
    register int t795;
    register int t805;
    register int t833;
    register int t843;
    register int t858;

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
                    t858 = 0x6;
                } else {
                    u9 = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
                    u9 = u9 + 1000.0f * ((((struct o54_float *)(a4))->v));
                    (((struct o24_float *)(a4))->v) = (u9 + 225.0f);
                    t12 = *(signed char *)(((*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C))) + 0x3));
                    *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stk + 4) + 0x10));
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
                    t55 = math_rand_float();
                    u58 = (t55 * 255.0f);
                    if (!(2.14748365e+09f > (t55 * 255.0f))) {
                        u58 = (((t55 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t60 = (int)((unsigned int)(int)u58 % (unsigned int)0x64);
                    u63 = (float)t60;
                    if ((int)t60 < 0) {
                        u63 = ((float)t60 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t54))->v) = ((((((struct o50_float *)(a4))->v)) + (u63 / 1000.0f)) + -0.049999997f);
                    t67 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t67);
                    t68 = math_rand_float();
                    u71 = (t68 * 255.0f);
                    if (!(2.14748365e+09f > (t68 * 255.0f))) {
                        u71 = (((t68 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t73 = (int)((unsigned int)(int)u71 % (unsigned int)0x64);
                    u76 = (float)t73;
                    if ((int)t73 < 0) {
                        u76 = ((float)t73 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t67))->v) = ((((((struct o54_float *)(a4))->v)) + (u76 / 1000.0f)) + -0.049999997f);
                    t80 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t80);
                    t81 = math_rand_float();
                    u84 = (t81 * 255.0f);
                    if (!(2.14748365e+09f > (t81 * 255.0f))) {
                        u84 = (((t81 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t86 = (int)((unsigned int)(int)u84 % (unsigned int)0x64);
                    u89 = (float)t86;
                    if ((int)t86 < 0) {
                        u89 = ((float)t86 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t80))->v) = ((((((struct o58_float *)(a4))->v)) + (u89 / 1000.0f)) + -0.049999997f);
                    t93 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t93);
                    t94 = math_rand_float();
                    u97 = (t94 * 255.0f);
                    if (!(2.14748365e+09f > (t94 * 255.0f))) {
                        u97 = (((t94 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t99 = (int)((unsigned int)(int)u97 % (unsigned int)0x64);
                    u102 = (float)t99;
                    if ((int)t99 < 0) {
                        u102 = ((float)t99 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t93))->v) = ((((((struct o50_float *)(a4))->v)) + (u102 / 1000.0f)) + -0.049999997f);
                    t106 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t106);
                    t107 = math_rand_float();
                    u110 = (t107 * 255.0f);
                    if (!(2.14748365e+09f > (t107 * 255.0f))) {
                        u110 = (((t107 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t112 = (int)((unsigned int)(int)u110 % (unsigned int)0x64);
                    u115 = (float)t112;
                    if ((int)t112 < 0) {
                        u115 = ((float)t112 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t106))->v) = ((((((struct o54_float *)(a4))->v)) + (u115 / 1000.0f)) + -0.049999997f);
                    t119 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t119);
                    t120 = math_rand_float();
                    u123 = (t120 * 255.0f);
                    if (!(2.14748365e+09f > (t120 * 255.0f))) {
                        u123 = (((t120 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t125 = (int)((unsigned int)(int)u123 % (unsigned int)0x64);
                    u128 = (float)t125;
                    if ((int)t125 < 0) {
                        u128 = ((float)t125 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t119))->v) = ((((((struct o58_float *)(a4))->v)) + (u128 / 1000.0f)) + -0.049999997f);
                    t132 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t132);
                    t133 = math_rand_float();
                    u136 = (t133 * 255.0f);
                    if (!(2.14748365e+09f > (t133 * 255.0f))) {
                        u136 = (((t133 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t138 = (int)((unsigned int)(int)u136 % (unsigned int)0x11);
                    u141 = (float)t138;
                    if ((int)t138 < 0) {
                        u141 = ((float)t138 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t132) + 0x0)) = ((*(int *)(((0x18 + t132) + 0x0))) + (int)((u141 * 65536.0f) / 360.0f));
                    t145 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t145);
                    t146 = math_rand_float();
                    u149 = (t146 * 255.0f);
                    if (!(2.14748365e+09f > (t146 * 255.0f))) {
                        u149 = (((t146 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t151 = (int)((unsigned int)(int)u149 % (unsigned int)0x35);
                    u154 = (float)t151;
                    if ((int)t151 < 0) {
                        u154 = ((float)t151 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t145) + 0x0)) = ((*(int *)(((0x18 + t145) + 0x0))) + (int)((u154 * 65536.0f) / 360.0f));
                    t158 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t158 - 1);
                    t858 = 0xEE;
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
                        t858 = (t180 + 0x1);
                    }
                }
            } else {
                if (t3 == 3) {
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x71C);
                    t200 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t200);
                    t201 = math_rand_float();
                    u204 = (t201 * 255.0f);
                    if (!(2.14748365e+09f > (t201 * 255.0f))) {
                        u204 = (((t201 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t206 = (int)((unsigned int)(int)u204 % (unsigned int)0x64);
                    u209 = (float)t206;
                    if ((int)t206 < 0) {
                        u209 = ((float)t206 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t200))->v) = ((((((struct o50_float *)(a4))->v)) + (u209 / 1000.0f)) + -0.049999997f);
                    t213 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t213);
                    t214 = math_rand_float();
                    u217 = (t214 * 255.0f);
                    if (!(2.14748365e+09f > (t214 * 255.0f))) {
                        u217 = (((t214 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t219 = (int)((unsigned int)(int)u217 % (unsigned int)0x64);
                    u222 = (float)t219;
                    if ((int)t219 < 0) {
                        u222 = ((float)t219 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t213))->v) = ((((((struct o54_float *)(a4))->v)) + (u222 / 1000.0f)) + -0.049999997f);
                    t226 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t226);
                    t227 = math_rand_float();
                    u230 = (t227 * 255.0f);
                    if (!(2.14748365e+09f > (t227 * 255.0f))) {
                        u230 = (((t227 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t232 = (int)((unsigned int)(int)u230 % (unsigned int)0x64);
                    u235 = (float)t232;
                    if ((int)t232 < 0) {
                        u235 = ((float)t232 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t226))->v) = ((((((struct o58_float *)(a4))->v)) + (u235 / 1000.0f)) + -0.049999997f);
                    t239 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x1C + t239);
                    t240 = math_rand_float();
                    u243 = (t240 * 255.0f);
                    if (!(2.14748365e+09f > (t240 * 255.0f))) {
                        u243 = (((t240 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t245 = (int)((unsigned int)(int)u243 % (unsigned int)0x64);
                    u248 = (float)t245;
                    if ((int)t245 < 0) {
                        u248 = ((float)t245 + 4.2949673e+09f);
                    }
                    (((struct o1C_float *)(t239))->v) = ((((((struct o50_float *)(a4))->v)) + (u248 / 1000.0f)) + -0.049999997f);
                    t252 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x20 + t252);
                    t253 = math_rand_float();
                    u256 = (t253 * 255.0f);
                    if (!(2.14748365e+09f > (t253 * 255.0f))) {
                        u256 = (((t253 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t258 = (int)((unsigned int)(int)u256 % (unsigned int)0x64);
                    u261 = (float)t258;
                    if ((int)t258 < 0) {
                        u261 = ((float)t258 + 4.2949673e+09f);
                    }
                    (((struct o20_float *)(t252))->v) = ((((((struct o54_float *)(a4))->v)) + (u261 / 1000.0f)) + -0.049999997f);
                    t265 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x24 + t265);
                    t266 = math_rand_float();
                    u269 = (t266 * 255.0f);
                    if (!(2.14748365e+09f > (t266 * 255.0f))) {
                        u269 = (((t266 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t271 = (int)((unsigned int)(int)u269 % (unsigned int)0x64);
                    u274 = (float)t271;
                    if ((int)t271 < 0) {
                        u274 = ((float)t271 + 4.2949673e+09f);
                    }
                    (((struct o24_float *)(t265))->v) = ((((((struct o58_float *)(a4))->v)) + (u274 / 1000.0f)) + -0.049999997f);
                    t278 = (((struct o2E4_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t278);
                    t279 = math_rand_float();
                    u282 = (t279 * 255.0f);
                    if (!(2.14748365e+09f > (t279 * 255.0f))) {
                        u282 = (((t279 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t284 = (int)((unsigned int)(int)u282 % (unsigned int)0x11);
                    u287 = (float)t284;
                    if ((int)t284 < 0) {
                        u287 = ((float)t284 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t278) + 0x0)) = ((*(int *)(((0x18 + t278) + 0x0))) + (int)((u287 * 65536.0f) / 360.0f));
                    t291 = (((struct o2E8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x18 + t291);
                    t292 = math_rand_float();
                    u295 = (t292 * 255.0f);
                    if (!(2.14748365e+09f > (t292 * 255.0f))) {
                        u295 = (((t292 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                    }
                    t297 = (int)((unsigned int)(int)u295 % (unsigned int)0x37);
                    u300 = (float)t297;
                    if ((int)t297 < 0) {
                        u300 = ((float)t297 + 4.2949673e+09f);
                    }
                    *(unsigned int *)(((0x18 + t291) + 0x0)) = ((*(int *)(((0x18 + t291) + 0x0))) + (int)((u300 * 65536.0f) / 360.0f));
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t305 = pl_get_hit_count_of_opponent(a4);
                        if ((signed char)t305 == 1) {
                            (((struct o108_uchar *)(a4))->v) = 0x0;
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                            u308 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u308;
                            t310 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u308 * t310);
                            u313 = (u308 * t310);
                            (((struct o38_float *)(a4))->v) = (u313 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                            u315 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u315;
                            (((struct o3C_float *)(a4))->v) = (u315 * (math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                            u319 = *(float *)((0xC33C368 + (((((struct oF2_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u319;
                            t321 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u319 * t321);
                            u324 = (u319 * t321);
                            (((struct o40_float *)(a4))->v) = (u324 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
                        }
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x4)) == 0) {
                        if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x9) {
                            t349 = 0x7A;
                            if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x8)) == 0) {
                                t349 = 0x73;
                            }
                            obj_set_record_char(a4, t349);
                        } else {
                            obj_set_record_char(a4, 0x79);
                        }
                    }
                    if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                    }
                    if (((((struct oF0_short *)(a4))->v)) != 10) {
                        t366 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t366 - 1);
                        if ((short)(t366 - 1) != 0) {
                            t858 = 0x2D8;
                            if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                            } else {
                                t858 = 0xF2;
                                if (((((struct oF2_short *)(a4))->v)) == 0) {
                                } else {
                                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                                    fx_spawn_0375d4(a4);
                                    (((struct oEC_ushort *)(a4))->v) = 0x3C;
                                    t375 = *(signed char *)((a4 + 0x8));
                                    *(unsigned char *)((a4 + 0x8)) = (t375 + 0x1);
                                    t858 = (t375 + 0x1);
                                }
                            }
                        } else {
                            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                            fx_spawn_0375d4(a4);
                            (((struct oEC_ushort *)(a4))->v) = 0x3C;
                            t393 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t393 + 0x1);
                            t858 = (t393 + 0x1);
                        }
                    } else {
                        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                        fx_spawn_0375d4(a4);
                        (((struct oEC_ushort *)(a4))->v) = 0x3C;
                        t404 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t404 + 0x1);
                        t858 = (t404 + 0x1);
                    }
                } else {
                    if (t3 == 4) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xC16);
                        u413 = (((struct o58_float *)(a4))->v);
                        (((struct o58_float *)(a4))->v) = (u413 - 0.00999999978f);
                        (((struct o54_float *)(a4))->v) = (u413 - 0.00999999978f);
                        (((struct o50_float *)(a4))->v) = (u413 - 0.00999999978f);
                        t414 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t414);
                        t415 = math_rand_float();
                        u418 = (t415 * 255.0f);
                        if (!(2.14748365e+09f > (t415 * 255.0f))) {
                            u418 = (((t415 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t420 = (int)((unsigned int)(int)u418 % (unsigned int)0x64);
                        u423 = (float)t420;
                        if ((int)t420 < 0) {
                            u423 = ((float)t420 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t414))->v) = ((u423 / 1000.0f) + -0.049999997f);
                        t426 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t426);
                        t427 = math_rand_float();
                        u430 = (t427 * 255.0f);
                        if (!(2.14748365e+09f > (t427 * 255.0f))) {
                            u430 = (((t427 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t432 = (int)((unsigned int)(int)u430 % (unsigned int)0x64);
                        u435 = (float)t432;
                        if ((int)t432 < 0) {
                            u435 = ((float)t432 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t426))->v) = ((u435 / 1000.0f) + -0.049999997f);
                        t438 = (((struct o2E0_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t438);
                        t439 = math_rand_float();
                        u442 = (t439 * 255.0f);
                        if (!(2.14748365e+09f > (t439 * 255.0f))) {
                            u442 = (((t439 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t444 = (int)((unsigned int)(int)u442 % (unsigned int)0x64);
                        u447 = (float)t444;
                        if ((int)t444 < 0) {
                            u447 = ((float)t444 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t438))->v) = ((u447 / 1000.0f) + -0.049999997f);
                        t450 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t450);
                        t451 = math_rand_float();
                        u454 = (t451 * 255.0f);
                        if (!(2.14748365e+09f > (t451 * 255.0f))) {
                            u454 = (((t451 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t456 = (int)((unsigned int)(int)u454 % (unsigned int)0x64);
                        u459 = (float)t456;
                        if ((int)t456 < 0) {
                            u459 = ((float)t456 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t450))->v) = ((((((struct o50_float *)(a4))->v)) + (u459 / 1000.0f)) + -0.049999997f);
                        t463 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t463);
                        t464 = math_rand_float();
                        u467 = (t464 * 255.0f);
                        if (!(2.14748365e+09f > (t464 * 255.0f))) {
                            u467 = (((t464 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t469 = (int)((unsigned int)(int)u467 % (unsigned int)0x64);
                        u472 = (float)t469;
                        if ((int)t469 < 0) {
                            u472 = ((float)t469 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t463))->v) = ((((((struct o54_float *)(a4))->v)) + (u472 / 1000.0f)) + -0.049999997f);
                        t476 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t476);
                        t477 = math_rand_float();
                        u480 = (t477 * 255.0f);
                        if (!(2.14748365e+09f > (t477 * 255.0f))) {
                            u480 = (((t477 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t482 = (int)((unsigned int)(int)u480 % (unsigned int)0x64);
                        u485 = (float)t482;
                        if ((int)t482 < 0) {
                            u485 = ((float)t482 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t476))->v) = ((((((struct o58_float *)(a4))->v)) + (u485 / 1000.0f)) + -0.049999997f);
                        t489 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x1C + t489);
                        t490 = math_rand_float();
                        u493 = (t490 * 255.0f);
                        if (!(2.14748365e+09f > (t490 * 255.0f))) {
                            u493 = (((t490 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t495 = (int)((unsigned int)(int)u493 % (unsigned int)0x64);
                        u498 = (float)t495;
                        if ((int)t495 < 0) {
                            u498 = ((float)t495 + 4.2949673e+09f);
                        }
                        (((struct o1C_float *)(t489))->v) = ((((((struct o50_float *)(a4))->v)) + (u498 / 1000.0f)) + -0.049999997f);
                        t502 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x20 + t502);
                        t503 = math_rand_float();
                        u506 = (t503 * 255.0f);
                        if (!(2.14748365e+09f > (t503 * 255.0f))) {
                            u506 = (((t503 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t508 = (int)((unsigned int)(int)u506 % (unsigned int)0x64);
                        u511 = (float)t508;
                        if ((int)t508 < 0) {
                            u511 = ((float)t508 + 4.2949673e+09f);
                        }
                        (((struct o20_float *)(t502))->v) = ((((((struct o54_float *)(a4))->v)) + (u511 / 1000.0f)) + -0.049999997f);
                        t515 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x24 + t515);
                        t516 = math_rand_float();
                        u519 = (t516 * 255.0f);
                        if (!(2.14748365e+09f > (t516 * 255.0f))) {
                            u519 = (((t516 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t521 = (int)((unsigned int)(int)u519 % (unsigned int)0x64);
                        u524 = (float)t521;
                        if ((int)t521 < 0) {
                            u524 = ((float)t521 + 4.2949673e+09f);
                        }
                        (((struct o24_float *)(t515))->v) = ((((((struct o58_float *)(a4))->v)) + (u524 / 1000.0f)) + -0.049999997f);
                        t528 = (((struct o2E4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x18 + t528);
                        t529 = math_rand_float();
                        u532 = (t529 * 255.0f);
                        if (!(2.14748365e+09f > (t529 * 255.0f))) {
                            u532 = (((t529 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t534 = (int)((unsigned int)(int)u532 % (unsigned int)0x11);
                        u537 = (float)t534;
                        if ((int)t534 < 0) {
                            u537 = ((float)t534 + 4.2949673e+09f);
                        }
                        *(unsigned int *)(((0x18 + t528) + 0x0)) = ((*(int *)(((0x18 + t528) + 0x0))) + (int)((u537 * 65536.0f) / 360.0f));
                        t541 = (((struct o2E8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x18 + t541);
                        t542 = math_rand_float();
                        u545 = (t542 * 255.0f);
                        if (!(2.14748365e+09f > (t542 * 255.0f))) {
                            u545 = (((t542 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        t547 = (int)((unsigned int)(int)u545 % (unsigned int)0x35);
                        u550 = (float)t547;
                        if ((int)t547 < 0) {
                            u550 = ((float)t547 + 4.2949673e+09f);
                        }
                        *(unsigned int *)(((0x18 + t541) + 0x0)) = ((*(int *)(((0x18 + t541) + 0x0))) + (int)((u550 * 65536.0f) / 360.0f));
                        t858 = 0x50;
                        if (!(0.099999994f > ((((struct o50_float *)(a4))->v)))) {
                        } else {
                            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x22);
                            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                            (((struct o101_uchar *)(a4))->v) = 0x0;
                            (((struct o102_uchar *)(a4))->v) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x1E;
                            t559 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t559 + 0x1);
                            t858 = (t559 + 0x1);
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
                            t583 = (((struct o2E4_int *)(a4))->v);
                            *(int *)((int)stk + 0) = (0x18 + t583);
                            t584 = math_rand_float();
                            u587 = (t584 * 255.0f);
                            if (!(2.14748365e+09f > (t584 * 255.0f))) {
                                u587 = (((t584 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                            }
                            t589 = (int)((unsigned int)(int)u587 % (unsigned int)0x11);
                            u592 = (float)t589;
                            if ((int)t589 < 0) {
                                u592 = ((float)t589 + 4.2949673e+09f);
                            }
                            *(unsigned int *)(((0x18 + t583) + 0x0)) = ((*(int *)(((0x18 + t583) + 0x0))) + (int)((u592 * 65536.0f) / 360.0f));
                            t596 = (((struct o2E8_int *)(a4))->v);
                            *(int *)((int)stk + 0) = (0x18 + t596);
                            t597 = math_rand_float();
                            u600 = (t597 * 255.0f);
                            if (!(2.14748365e+09f > (t597 * 255.0f))) {
                                u600 = (((t597 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                            }
                            t602 = (int)((unsigned int)(int)u600 % (unsigned int)0x37);
                            u605 = (float)t602;
                            if ((int)t602 < 0) {
                                u605 = ((float)t602 + 4.2949673e+09f);
                            }
                            *(unsigned int *)(((0x18 + t596) + 0x0)) = ((*(int *)(((0x18 + t596) + 0x0))) + (int)((u605 * 65536.0f) / 360.0f));
                            t609 = (((struct oEC_short *)(a4))->v);
                            (((struct oEC_ushort *)(a4))->v) = (t609 - 1);
                            t858 = 0xEC;
                            if ((short)(t609 - 1) != 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                t612 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t612 + 0x1);
                                t858 = (t612 + 0x1);
                            }
                        } else {
                            if (t3 == 6) {
                                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xC16);
                                u616 = (((struct o58_float *)(a4))->v);
                                (((struct o58_float *)(a4))->v) = (u616 - 0.00499999989f);
                                (((struct o54_float *)(a4))->v) = (u616 - 0.00499999989f);
                                (((struct o50_float *)(a4))->v) = (u616 - 0.00499999989f);
                                t617 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x1C + t617);
                                t618 = math_rand_float();
                                u621 = (t618 * 255.0f);
                                if (!(2.14748365e+09f > (t618 * 255.0f))) {
                                    u621 = (((t618 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t623 = (int)((unsigned int)(int)u621 % (unsigned int)0x64);
                                u626 = (float)t623;
                                if ((int)t623 < 0) {
                                    u626 = ((float)t623 + 4.2949673e+09f);
                                }
                                (((struct o1C_float *)(t617))->v) = ((((((struct o50_float *)(a4))->v)) + (u626 / 1000.0f)) + -0.049999997f);
                                t630 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x20 + t630);
                                t631 = math_rand_float();
                                u634 = (t631 * 255.0f);
                                if (!(2.14748365e+09f > (t631 * 255.0f))) {
                                    u634 = (((t631 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t636 = (int)((unsigned int)(int)u634 % (unsigned int)0x64);
                                u639 = (float)t636;
                                if ((int)t636 < 0) {
                                    u639 = ((float)t636 + 4.2949673e+09f);
                                }
                                (((struct o20_float *)(t630))->v) = ((((((struct o54_float *)(a4))->v)) + (u639 / 1000.0f)) + -0.049999997f);
                                t643 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x24 + t643);
                                t644 = math_rand_float();
                                u647 = (t644 * 255.0f);
                                if (!(2.14748365e+09f > (t644 * 255.0f))) {
                                    u647 = (((t644 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t649 = (int)((unsigned int)(int)u647 % (unsigned int)0x64);
                                u652 = (float)t649;
                                if ((int)t649 < 0) {
                                    u652 = ((float)t649 + 4.2949673e+09f);
                                }
                                (((struct o24_float *)(t643))->v) = ((((((struct o58_float *)(a4))->v)) + (u652 / 1000.0f)) + -0.049999997f);
                                t656 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x1C + t656);
                                t657 = math_rand_float();
                                u660 = (t657 * 255.0f);
                                if (!(2.14748365e+09f > (t657 * 255.0f))) {
                                    u660 = (((t657 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t662 = (int)((unsigned int)(int)u660 % (unsigned int)0x64);
                                u665 = (float)t662;
                                if ((int)t662 < 0) {
                                    u665 = ((float)t662 + 4.2949673e+09f);
                                }
                                (((struct o1C_float *)(t656))->v) = ((((((struct o50_float *)(a4))->v)) + (u665 / 1000.0f)) + -0.049999997f);
                                t669 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x20 + t669);
                                t670 = math_rand_float();
                                u673 = (t670 * 255.0f);
                                if (!(2.14748365e+09f > (t670 * 255.0f))) {
                                    u673 = (((t670 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t675 = (int)((unsigned int)(int)u673 % (unsigned int)0x64);
                                u678 = (float)t675;
                                if ((int)t675 < 0) {
                                    u678 = ((float)t675 + 4.2949673e+09f);
                                }
                                (((struct o20_float *)(t669))->v) = ((((((struct o54_float *)(a4))->v)) + (u678 / 1000.0f)) + -0.049999997f);
                                t682 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x24 + t682);
                                t683 = math_rand_float();
                                u686 = (t683 * 255.0f);
                                if (!(2.14748365e+09f > (t683 * 255.0f))) {
                                    u686 = (((t683 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t688 = (int)((unsigned int)(int)u686 % (unsigned int)0x64);
                                u691 = (float)t688;
                                if ((int)t688 < 0) {
                                    u691 = ((float)t688 + 4.2949673e+09f);
                                }
                                (((struct o24_float *)(t682))->v) = ((((((struct o58_float *)(a4))->v)) + (u691 / 1000.0f)) + -0.049999997f);
                                t695 = (((struct o2E4_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x18 + t695);
                                t696 = math_rand_float();
                                u699 = (t696 * 255.0f);
                                if (!(2.14748365e+09f > (t696 * 255.0f))) {
                                    u699 = (((t696 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t701 = (int)((unsigned int)(int)u699 % (unsigned int)0x11);
                                u704 = (float)t701;
                                if ((int)t701 < 0) {
                                    u704 = ((float)t701 + 4.2949673e+09f);
                                }
                                *(unsigned int *)(((0x18 + t695) + 0x0)) = ((*(int *)(((0x18 + t695) + 0x0))) + (int)((u704 * 65536.0f) / 360.0f));
                                t708 = (((struct o2E8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x18 + t708);
                                t709 = math_rand_float();
                                u712 = (t709 * 255.0f);
                                if (!(2.14748365e+09f > (t709 * 255.0f))) {
                                    u712 = (((t709 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                t714 = (int)((unsigned int)(int)u712 % (unsigned int)0x35);
                                u717 = (float)t714;
                                if ((int)t714 < 0) {
                                    u717 = ((float)t714 + 4.2949673e+09f);
                                }
                                *(unsigned int *)(((0x18 + t708) + 0x0)) = ((*(int *)(((0x18 + t708) + 0x0))) + (int)((u717 * 65536.0f) / 360.0f));
                                t858 = 0x50;
                                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                                    (((struct o101_uchar *)(a4))->v) = 0x0;
                                    (((struct o102_uchar *)(a4))->v) = 0x0;
                                    (((struct oEC_ushort *)(a4))->v) = 0x5A;
                                    t725 = *(signed char *)((a4 + 0x8));
                                    *(unsigned char *)((a4 + 0x8)) = (t725 + 0x1);
                                    t858 = (t725 + 0x1);
                                }
                            } else {
                                if (t3 == 7) {
                                    t730 = (((struct oEC_short *)(a4))->v);
                                    (((struct oEC_ushort *)(a4))->v) = (t730 - 1);
                                    t858 = 0xEC;
                                    if ((short)(t730 - 1) == 0) {
                                        t731 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t731 + 0x1);
                                        t858 = (t731 + 0x1);
                                    }
                                } else {
                                    t858 = t3;
                                    if (t3 == 8) {
                                        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x31);
                                        t858 = (obj_destroy(a4));
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
                t858 = 0x8;
            } else {
                t795 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t795 - 1);
                t858 = 0xEC;
                if ((short)(t795 - 1) != 0) {
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
                    t805 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t805 + 0x1);
                    t858 = (t805 + 0x1);
                }
            }
        }
    } else {
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
            *(unsigned char *)((a4 + 0x8)) = 0x8;
            t858 = 0x8;
        } else {
            t833 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t833 - 1);
            t858 = 0xEC;
            if ((short)(t833 - 1) != 0) {
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
                t843 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t843 + 0x1);
                t858 = (t843 + 0x1);
            }
        }
    }
    return t858;
}
