/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o75C_float { char p[0x75C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o90_int { char p[0x90]; int v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c01ebc0(int, int, int, int);
int FUN_0c01ec9c(int, int, int, int);
int FUN_0c01f4c8(int);
int FUN_0c01f628(int);
int FUN_0c01fdc8(void);
int FUN_0c01fefc(int);
int FUN_0c059132(int, int, int);
int FUN_0c05eea0(void);
int FUN_0c05ef02(int, int, int, int, int, int, float);
int FUN_0c05ef8c(int);
int FUN_0c05f0b8(int);
int FUN_0c05f136(void);
int FUN_0c05f20e(int, float, float);
int FUN_0c062050(int, int, int);
int FUN_0c06206e(int, int, int);
int FUN_0c06208c(int, float, float, float);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0c63c4(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(void);
int FUN_0c0e7140(int);
int kmSetBackGroundPlane(int, int, int, int);
int nlCalcPoint(int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0469fa(int a4, int a5, int a6, int a7);
int FUN_0c0c6094(int a4, int a5);
int FUN_0c05f2d4(int a4, int a5);
int FUN_0c01ea20(int a4, int a5, int a6, int a7);
int FUN_0c0df110(int a4, int a5, int a6, float f4);

int FUN_0c0469fa(int a4, int a5, int a6, int a7)
{
    int stk[28];
    register int t0;
    register int t1;
    register int t8;
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
    register int t567;
    register int t568;
    register int t569;
    register int t570;
    register int t578;
    register int t580;
    register int t581;
    register int t583;
    register int t585;
    register int t591;
    register int t592;
    register int t594;
    register int t596;
    register int t597;
    register int t600;
    register int t616;
    register int t623;
    register int t625;
    register int t626;
    register int t631;
    register int t632;
    register int t636;
    register int t640;
    register int t641;
    register int t642;
    register int t645;
    register int t652;
    register int t654;
    register int t658;
    register int t661;
    register int t662;
    register int t667;
    register int t671;
    register int t680;
    register int t691;
    register int t698;
    register int t699;
    register int t702;
    register int t703;
    register int t707;
    register int t709;
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
    int t62;
    register int t63;
    register int t65;
    int t128;
    register int t131;
    int t200;
    register int t202;
    int t247;
    register int t250;
    register int t311;
    register int t287;
    register int t320;
    register int t322;
    register int t344;
    int t477;
    register int t479;
    register int t710;

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
            if (((*(float *)((t8 + 0x0))) == ((((struct o75C_float *)(t0))->v))) && ((t11 = *(int *)(((int)stk + 8)), t12 = *(int *)(((int)stk + 0)), u13 = (((struct o4_float *)(t11))->v), u14 = (((struct o4_float *)(t12))->v), u14 == u13) && ((t15 = *(int *)(((int)stk + 8)), t16 = *(int *)(((int)stk + 0)), u17 = (((struct o8_float *)(t15))->v), u18 = (((struct o8_float *)(t16))->v), u18 == u17) && ((t19 = *(int *)(((int)stk + 8)), t20 = *(int *)(((int)stk + 4)), u21 = *(float *)((t20 + 0x0)), u22 = (((struct oC_float *)(t19))->v), u21 == u22) && ((t23 = *(int *)(((int)stk + 8)), t24 = *(int *)(((int)stk + 4)), u25 = (((struct o4_float *)(t24))->v), u26 = (((struct o4_float *)((t23 + 0xC)))->v), u25 == u26) && (t27 = *(int *)(((int)stk + 8)), t28 = *(int *)(((int)stk + 4)), u29 = (((struct o8_float *)(t28))->v), u30 = (((struct o8_float *)((t27 + 0xC)))->v), u29 == u30)))))) {
                return 0x8;
            }
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
                            FUN_0c062050((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t70 << 1) + t70) << 2) << 1) + (0x75C + t0)) + 0xC));
                            FUN_0c06208c((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                            t79 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c06206e((*(int *)(((int)stk + 4))), ((short)((((t79 << 1) + t79) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                            FUN_0c06208c((*(int *)(((int)stk + 4))), u64, u64, u64);
                            t88 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c062050(((short)((((t88 << 1) + t88) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                            FUN_0c06208c((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                            t97 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c062050((((short)((((t97 << 1) + t97) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
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
                                FUN_0c062050((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t136 << 1) + t136) << 2) << 1) + (0x75C + t0)) + 0xC));
                                FUN_0c06208c((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                t145 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c06206e((*(int *)(((int)stk + 4))), ((short)((((t145 << 1) + t145) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                                u153 = u129;
                                u154 = u129;
                                u155 = u129;
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > (int)0x1) {
                                    u153 = u130;
                                    u154 = u130;
                                    u155 = u130;
                                }
                                FUN_0c06208c((*(int *)(((int)stk + 4))), u153, u154, u155);
                                t160 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c062050(((short)((((t160 << 1) + t160) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                FUN_0c06208c((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                t169 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c062050((((short)((((t169 << 1) + t169) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
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
                                    FUN_0c06206e((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (((short)((((t207 << 1) + t207) << 2) << 1) + (0x75C + t0)) + 0xC));
                                    FUN_0c06208c((*(int *)(((int)stk + 4))), u201, u201, u201);
                                    t216 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t217 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 8)) = ((short)((((t216 << 1) + t216) << 2) << 1) + (0x75C + t0));
                                    FUN_0c062050((*(int *)(((int)stk + 8))), (((short)((((t216 << 1) + t216) << 2) << 1) + (0x75C + t0)) + 0xC), t217);
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
                                        FUN_0c06206e((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t255 << 1) + t255) << 2) << 1) + (0x75C + t0)) + 0xC));
                                        *(volatile int *)(((int)stk + 4));
                                        *(volatile int *)(((int)stk + 8));
                                        t263 = ((int (*)(void))(FUN_0c0e6fe8))();
                                        FUN_0c06208c((*(int *)(((int)stk + 4))), u248, u248, u248);
                                        FUN_0c06208c((*(int *)(((int)stk + 8))), u249, u249, u249);
                                        t269 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t270 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 12)) = ((short)((((t269 << 1) + t269) << 2) << 1) + (0x75C + t0));
                                        FUN_0c062050((*(int *)(((int)stk + 12))), (((short)((((t269 << 1) + t269) << 2) << 1) + (0x75C + t0)) + 0xC), t270);
                                        t276 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t277 = *(int *)(((int)stk + 8));
                                        *(unsigned int *)(((int)stk + 12)) = (((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC);
                                        FUN_0c062050((((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t276 << 1) + t276) << 2) << 1) + (0x75C + t0)) + 0xC), t277);
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
                                                    FUN_0c062050((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((short)((((t349 << 1) + t349) << 2) << 1) + (0x75C + t0)) + 0xC));
                                                    FUN_0c06208c((*(int *)(((int)stk + 4))), 0.5f, 0.5f, 0.5f);
                                                    t358 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                    FUN_0c06206e((*(int *)(((int)stk + 8))), ((short)((((t358 << 1) + t358) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))));
                                                    FUN_0c06208c((*(int *)(((int)stk + 8))), u321, u321, u321);
                                                    t367 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                    FUN_0c062050(((short)((((t367 << 1) + t367) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                    FUN_0c06208c((*(int *)(((int)stk + 8))), -1.0f, -1.0f, -1.0f);
                                                    t376 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                    FUN_0c062050((((short)((((t376 << 1) + t376) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                                    t382 = *(int *)(((int)stk + 0));
                                                    *(unsigned char *)((t382 + 0x0)) = ((*(signed char *)((t382 + 0x0))) - 1);
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
                        FUN_0c062050((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((short)((((t484 << 1) + t484) << 2) << 1) + (0x75C + t0)) + 0xC));
                        FUN_0c06208c((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                        t493 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                        FUN_0c06206e((*(int *)(((int)stk + 4))), ((short)((((t493 << 1) + t493) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))));
                        FUN_0c06208c((*(int *)(((int)stk + 4))), u478, u478, u478);
                        t502 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                        FUN_0c062050(((short)((((t502 << 1) + t502) << 2) << 1) + (0x75C + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                        FUN_0c06208c((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                        t511 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                        FUN_0c062050((((short)((((t511 << 1) + t511) << 2) << 1) + (0x75C + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                        t517 = *(int *)(((int)stk + 0));
                        *(unsigned char *)((t517 + 0x0)) = ((*(signed char *)((t517 + 0x0))) - 1);
                    }
                }
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
            t567 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = t567;
            t568 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = t568;
            *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x3C);
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 0) + 0x3C) + 0xC);
            *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x3C) + 0x18);
            t569 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = t569;
            *(unsigned int *)(((int)stk + 4)) = t568;
            *(unsigned int *)(((int)stk + 12)) = t569;
            *(unsigned int *)(((int)stk + 4)) = t568;
            t570 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 8)) = t567;
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 12)) = t569;
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 8)) = t567;
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 4)) = t568;
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 8)) = t567;
            *(unsigned int *)(((int)stk + 0)) = t570;
            *(unsigned int *)(((int)stk + 8)) = t567;
            return ((int (*)(int, int, int, int))(0xC047B72))(t570, t567, t568, t569);
        }
        return ((int (*)(int, int, int, int))(0xC047C3A))(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x9))) == 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        FUN_0c0e1550(0x1);
        FUN_0c0e1240(((((struct o90_int *)(t0))->v)));
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
        nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
        nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
        *(volatile int *)(((int)stk + 0));
        t578 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)(((int)stk + 4));
        t580 = ((int (*)(void))(FUN_0c0e6fe8))();
        t581 = *(int *)(((int)stk + 0));
        *(unsigned int *)((t581 + 0x0)) = ((*(int *)((t581 + 0x0))) | 0x1);
        t583 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t583 + 0x0)) = ((*(int *)((t583 + 0x0))) | 0x1);
        t585 = *(signed char *)((a4 + 0x9));
        *(unsigned char *)((a4 + 0x9)) = (t585 + 0x1);
        t710 = (t585 + 0x1);
    } else {
        FUN_0c0e1550(0x1);
        FUN_0c0e1240(((((struct o90_int *)(t0))->v)));
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
        nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0xC);
        nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0x18);
        t591 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
        t592 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)(((int)stk + 8));
        t594 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)(((int)stk + 12));
        t596 = ((int (*)(void))(FUN_0c0e6fe8))();
        t597 = *(int *)(((int)stk + 0));
        FUN_0c06206e(t597, t597, (*(int *)(((int)stk + 8))));
        t600 = *(int *)(((int)stk + 4));
        FUN_0c06206e(t600, t600, (*(int *)(((int)stk + 12))));
        FUN_0c06208c((*(int *)(((int)stk + 0))), 0.199999988f, 0.199999988f, 0.199999988f);
        FUN_0c06208c((*(int *)(((int)stk + 4))), 0.199999988f, 0.199999988f, 0.199999988f);
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
        (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x18);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x24);
        for (;;) {
            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x6) {
                break;
            }
            t616 = ((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0));
            t623 = ((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x75C + t0));
            t625 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
            t626 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 12)) = ((short)((((t625 << 1) + t625) << 2) << 1) + (0x75C + t0));
            FUN_0c062050(((short)((((t625 << 1) + t625) << 2) << 1) + (0x75C + t0)), ((short)((((t625 << 1) + t625) << 2) << 1) + (0x75C + t0)), t626);
            t631 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
            t632 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 12)) = (((short)((((t631 << 1) + t631) << 2) << 1) + (0x75C + t0)) + 0xC);
            FUN_0c062050((((short)((((t631 << 1) + t631) << 2) << 1) + (0x75C + t0)) + 0xC), (((short)((((t631 << 1) + t631) << 2) << 1) + (0x75C + t0)) + 0xC), t632);
            t636 = *(int *)(((int)stk + 0));
            *(unsigned char *)((t636 + 0x0)) = ((*(signed char *)((t636 + 0x0))) + 0x1);
        }
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
        nlCalcPoint((a4 + 0x20), (((int)stk + 0) + 0x3C));
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0xC);
        nlCalcPoint((t0 + 0x4), ((((int)stk + 0) + 0x3C) + 0xC));
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
        t640 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0x24);
        t641 = ((int (*)(void))(FUN_0c0e6fe8))();
        t642 = *(int *)(((int)stk + 8));
        FUN_0c06206e(t642, t642, (*(int *)(((int)stk + 4))));
        t645 = *(int *)(((int)stk + 12));
        FUN_0c06206e(t645, t645, (*(int *)(((int)stk + 0))));
        FUN_0c06208c((*(int *)(((int)stk + 8))), 0.043478258f, 0.043478258f, 0.043478258f);
        FUN_0c06208c((*(int *)(((int)stk + 12))), 0.043478258f, 0.043478258f, 0.043478258f);
        t652 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t652 + 0x0)) = ((*(int *)((t652 + 0x0))) | 0x1);
        t654 = *(int *)(((int)stk + 0));
        *(unsigned int *)((t654 + 0x0)) = ((*(int *)((t654 + 0x0))) | 0x1);
        *(volatile int *)((t0 + 0x9C));
        *(volatile int *)(((int)stk + 4));
        t658 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)(((int)stk + 0));
        *(volatile int *)((t0 + 0x9C));
        t661 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
        (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
        t662 = (((int)stk + 0) + 0x6C);
        for (;;) {
            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x18) {
                break;
            }
            t662 = 0x9C;
            t667 = *(int *)((t0 + t662));
            t662 = 0xC;
            t662 = (((int (*)(int, int))(FUN_0c0e6fe8))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), t667));
            t662 = 0x9C;
            t671 = *(int *)((t0 + t662));
            t662 = 0xC;
            t662 = (((int (*)(int, int))(FUN_0c0e6fe8))(t671, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
            t662 = 0x9C;
            t680 = *(int *)((t0 + t662));
            t662 = 0x9C;
            t662 = (FUN_0c062050(((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + (*(int *)((t0 + t662)))) + 0x70), ((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + t680) + 0x70), (*(int *)(((int)stk + 8)))));
            t662 = 0x9C;
            t691 = *(int *)((t0 + t662));
            t662 = 0x9C;
            t662 = (FUN_0c062050(((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + (*(int *)((t0 + t662)))) + 0x70), ((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + t691) + 0x70), (*(int *)(((int)stk + 4)))));
            t662 = 0x9C;
            t698 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
            t699 = *(int *)((t0 + t662));
            t662 = ((((struct o70_int *)(((((t698 << 2) << 2) << 2) + t699)))->v));
            t662 = (t662 | 0x1);
            (((struct o70_uint *)(((((t698 << 2) << 2) << 2) + t699)))->v) = t662;
            t662 = 0x9C;
            t702 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
            t703 = *(int *)((t0 + t662));
            t662 = ((((struct o70_int *)(((((((t702 << 1) + 0x1) << 2) << 1) << 2) + t703)))->v));
            t662 = (t662 | 0x1);
            (((struct o70_uint *)(((((((t702 << 1) + 0x1) << 2) << 1) << 2) + t703)))->v) = t662;
            t707 = *(int *)(((int)stk + 0));
            *(unsigned char *)((t707 + 0x0)) = ((*(signed char *)((t707 + 0x0))) + 0x1);
        }
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        t709 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t709 + 0x1);
        t710 = (t709 + 0x1);
    }
    return t710;
}

int FUN_0c0c6094(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t45;
    register int t4;
    register int t6;
    register int t13;
    register float u16;
    register int t17;
    register float u18;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float u29;
    register float u30;
    register float u31;
    register float u33;
    register float u34;
    register float u35;
    register float u36;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x3);
    t45 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        t4 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t4 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t4;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C62BC;
        t6 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 30.0f);
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        FUN_0c0a1d88(t0, ((*(signed char *)(((int)stk + 0))) + 0x72));
        t13 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t13 + 0x0)) = 0x1;
        *(unsigned short *)((t13 + 0x2)) = 0xF;
        FUN_0c06233a(t13, 0xC664988, 0x9);
        FUN_0c0c63c4(t0, 0x0);
        u16 = *(float *)0xC494D1C;
        t17 = *(int *)((a4 + 0x1C));
        u18 = (u16 + -80.0f);
        if (100.0f > (u16 + -80.0f)) {
            u18 = 100.0f;
        }
        u20 = (((struct o24_float *)(t0))->v);
        u21 = (((struct o24_float *)(t17))->v);
        u22 = (u20 - u21);
        if (-100.0f > (u20 - u21)) {
            u22 = -100.0f;
        }
        u24 = u22;
        if (u22 > 200.0f) {
            u24 = 200.0f;
        }
        (((struct o3C_float *)(t0))->v) = ((((200.0f - u24) / 10.0f) + (u18 / 40.0f)) + -20.0f);
        if (0.0f > ((((200.0f - u24) / 10.0f) + (u18 / 40.0f)) + -20.0f)) {
            (((struct o3C_float *)(t0))->v) = 0.0f;
        }
        if (((((struct o3C_float *)(t0))->v)) > 30.0f) {
            (((struct o3C_float *)(t0))->v) = 30.0f;
        }
        (((struct o48_float *)(t0))->v) = -0.75f;
        u29 = (((struct o24_float *)(t0))->v);
        u30 = (((struct o24_float *)(t17))->v);
        u31 = (u29 - u30);
        if (-100.0f > (u29 - u30)) {
            u31 = -100.0f;
        }
        u33 = (((struct o3C_float *)(t0))->v);
        u34 = (((struct o48_float *)(t0))->v);
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        u35 = u31;
        u36 = u33;
        for (;;) {
            u35 = (u35 + u36);
            u36 = (u36 + u34);
            (((struct oF0_ushort *)(t0))->v) = (((((struct oF0_short *)(t0))->v)) + 0x1);
            if (u36 > 0.0f) continue;
            if (!(u35 > 0.0f)) {
                break;
            }
        }
        (((struct oEC_ushort *)(t0))->v) = ((((struct oF0_short *)(t0))->v));
        (((struct o38_float *)(t0))->v) = ((FUN_0c0dfa50((*(int *)((t0 + 0x30))))) * (u18 / (float)((((struct oF0_short *)(t0))->v))));
        (((struct o40_float *)(t0))->v) = ((FUN_0c0df4d0((*(int *)((t0 + 0x30))))) * (u18 / (float)((((struct oF0_short *)(t0))->v))));
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        t45 = 0x4C;
    }
    return t45;
}

int FUN_0c05f2d4(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t5;
    register int t14;
    register int t30;
    register int t32;
    register int t48;
    register int t52;
    register int t55;
    register int t19;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    FUN_0c0e7140(a4);
    FUN_0c05eea0();
    *(unsigned int *)(((int)stk + 16)) = 0xC336504;
    t2 = *(signed char *)(((int)stk + 24));
    if (t2 != 1) {
        if (t2 != 2) {
            if (t2 != 3) {
                *(unsigned int *)(((int)stk + 16)) = 0xC336510;
                t5 = (*(int *)0xC336510);
                *(int *)((int)stk + 12) = t5;
                *(int *)((int)stk + 8) = 0xC14D7D8;
                FUN_0c05ef02(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t5, 1.0f);
                *(unsigned char *)0xC7F323C = 0x1;
                FUN_0c05ef8c(0x0);
                (((struct o4_uchar *)0xC7F32C8)->v) = 0x1;
                FUN_0c05ef8c(0x1);
                (((struct o4_uchar *)0xC7F3358)->v) = 0x1;
                *(unsigned char *)0xC7F33E8 = 0x0;
                *(unsigned char *)0xC7F3478 = 0x0;
                *(unsigned char *)0xC7F3598 = 0x0;
                *(unsigned char *)0xC7F3628 = 0x0;
                t19 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 4) = t19;
            } else {
                t14 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 12) = t14;
                *(int *)((int)stk + 8) = 0xC14D7D8;
                FUN_0c05ef02(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t14, 1.0f);
                *(unsigned char *)0xC7F323C = 0x1;
                (((struct o0_uchar *)0xC7F32C8)->v) = 0x0;
                (((struct o0_uchar *)0xC7F3358)->v) = 0x0;
                *(unsigned char *)0xC7F33E8 = 0x0;
                *(unsigned char *)0xC7F3478 = 0x0;
                *(unsigned char *)0xC7F3598 = 0x0;
                *(unsigned char *)0xC7F3628 = 0x0;
                t19 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                *(int *)((int)stk + 4) = t19;
            }
            *(int *)((int)stk + 0) = 0xC14D7D8;
            FUN_0c05ef02(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t19, 1.0f);
            *(unsigned char *)0xC7F350C = 0x1;
            t55 = (FUN_0c05f136());
        } else {
            FUN_0c05f0b8((*(signed char *)(((int)stk + 20))));
            FUN_0c05ef8c(0x0);
            FUN_0c05ef8c(0x1);
            *(unsigned char *)0xC7F33E8 = 0x0;
            *(unsigned char *)0xC7F3478 = 0x0;
            *(unsigned char *)0xC7F3598 = 0x0;
            *(unsigned char *)0xC7F3628 = 0x0;
            t30 = (*(int *)0xC336510);
            *(int *)((int)stk + 12) = t30;
            *(int *)((int)stk + 8) = 0xC14D7D8;
            FUN_0c05ef02(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t30, 1.0f);
            *(unsigned char *)0xC7F350C = 0x1;
            t32 = *(signed char *)(((int)stk + 20));
            if (!(0.0f > (*(float *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x0))))) {
                t55 = (FUN_0c05f20e((*(int *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x8))), (*(float *)((((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894) + 0x0))), ((((struct o4_float *)(((unsigned char)(((t32 << 1) + t32) << 2) + 0xC14D894)))->v))));
            } else {
                t55 = (FUN_0c05f136());
            }
        }
    } else {
        *(volatile signed char *)(((int)stk + 20));
        t48 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(int *)((int)stk + 12) = t48;
        *(int *)((int)stk + 8) = 0xC14D7D8;
        FUN_0c05ef02(0x0, 0x80, 0x3, 0x0, 0xC14D7D8, t48, 1.0f);
        (((struct o0_uchar *)0xC7F32C8)->v) = 0x0;
        (((struct o0_uchar *)0xC7F3358)->v) = 0x0;
        *(unsigned char *)0xC7F33E8 = 0x0;
        *(unsigned char *)0xC7F3478 = 0x0;
        *(unsigned char *)0xC7F3598 = 0x0;
        *(unsigned char *)0xC7F3628 = 0x0;
        t52 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(int *)((int)stk + 4) = t52;
        *(int *)((int)stk + 0) = 0xC14D7D8;
        FUN_0c05ef02(0x5, 0x80, 0x3, 0x0, 0xC14D7D8, t52, 1.0f);
        *(unsigned char *)0xC7F350C = 0x1;
        t55 = (FUN_0c05f136());
    }
    return t55;
}

int FUN_0c01ea20(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC362A50;
    if (t0 != 0) {
        if (t0 != 1) {
            switch (t0) {
            case 2:
                break;
            case 3:
                (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                FUN_0c01fdc8();
                (((struct o8_ushort *)0xC362A50)->v) = 0x1;
                FUN_0c01f4c8(0x10);
                FUN_0c01f628(0x10);
                break;
            case 4:
                break;
            default:
                if (t0 != 5) {
                    if (t0 != 6) {
                        if (t0 != 7) {
                            if (t0 != 8) {
                                FUN_0c01fdc8();
                                return 0x2;
                            }
                            return FUN_0c01ec9c(0xC362A50, 0x0, 0xC362A50, a7);
                        }
                        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                        (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                        return FUN_0c01ec9c(0xC362A50, 0x0, 0xC362A50, a7);
                    }
                    return FUN_0c01ebc0(0xC362A50, 0x0, 0xC362A50, a7);
                }
                (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
                (((struct o2F_uchar *)0xC362A50)->v) = 0x7;
                (((struct o30_uchar *)0xC362A50)->v) = 0x63;
                (((struct o1_uchar *)0xC362A50)->v) = 0x0;
                (((struct o2_uchar *)0xC362A50)->v) = 0x0;
                (((struct o31_uchar *)0xC362A50)->v) = 0x0;
                return FUN_0c01ebc0(0xC362A50, 0x0, 0xC362A50, a7);
            }
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
            FUN_0c01fdc8();
            FUN_0c01f4c8(0xF);
            FUN_0c01f628(0xF);
        }
    } else {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct oA_ushort *)0xC362A50)->v) = 0x0;
        (((struct o8_ushort *)0xC362A50)->v) = 0x1;
        (((struct o28_float *)0xC362A50)->v) = (*(float *)0xC01EBB4);
        (((struct o34_uchar *)0xC362A50)->v) = a4;
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        FUN_0c01fdc8();
        FUN_0c01f4c8(0xF);
        FUN_0c01f628(0xF);
    }
    t0 = FUN_0c01fefc(0xC362A50);
    if ((signed char)t0 != 0) {
        if ((signed char)t0 != 1) {
        } else {
            (((struct o0_uchar *)0xC362A50)->v) = 0x63;
        }
    } else {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
    }
    return 0x0;
}

int FUN_0c0df110(int a4, int a5, int a6, float f4)
{
    int stk[27];
    register int t0;
    register int t3;

    (((struct o0_uint *)0xC3468F0)->v) = a4;
    (((struct o4_uint *)0xC3468F0)->v) = a5;
    (((struct o8_uint *)0xC3468F0)->v) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xE0000000;
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct oC_float *)((((int)stk + 0) + 0xC)))->v) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = (((struct o0_short *)0xC7FD49C)->v);
    t3 = (short)t0;
    if (((((struct o6_short *)0xC7FD49C)->v)) != 0) {
        t3 = ((short)t0 << 1);
    }
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (float)t3;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = 0.0f;
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x18)) = a5;
    (((struct o40_uint *)((((int)stk + 0) + 0xC)))->v) = 0xF0000000;
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = 0.0f;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (float)((((struct o2_short *)0xC7FD49C)->v));
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((int)stk + 0) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((int)stk + 0) + 0xC) + 0x40);
    return (kmSetBackGroundPlane(((int)stk + 0), 0x0, 0x20, 0xC7FD498));
}
