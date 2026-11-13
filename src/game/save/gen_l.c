/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c02259e(int, int, int, int);
int FUN_0c022634(int, int, int, int);
int FUN_0c0226da(int, int, int, int);
int FUN_0c02279a(int, int, int, int);
int FUN_0c02280e(int, int, int, int);
int FUN_0c0228ac(int, int, int, int);
extern int FUN_0c0255ae();
extern int FUN_0c02565a();
int FUN_0c025958(int, int);
int FUN_0c026f36(int, int, int);
int FUN_0c026f78(int, int);
int FUN_0c027028(int, int);
int FUN_0c0270c6(int, int);
int FUN_0c027168(int, int);
int FUN_0c0271fe(int, int);
int FUN_0c0272a0(int, int);
int FUN_0c027336(int, int);
int FUN_0c0273c0(int, int);
int FUN_0c02743c(int, int);
int FUN_0c02754e(int, int);
int FUN_0c0275ac(int, int);
int FUN_0c02760a(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0ccf38(int, int, int);
float FUN_0c0d5bc0(void);
int FUN_0c0d708c(int, int);
int FUN_0c0e09f0(int, int, int, int, int);
int nlStoreMatrix(int);
int nlLoadMatrix(int);
int nlSelectMatrixStack(int);
int nlPushMatrix(int);
int _quick_odd_mvn(void);
int buMountDisk(int, int, int);
int buUnmount(int);
int dbg_print_at(int, float, float);
extern int hit_update_object_list();
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_add(int, int, int);
float math_vec3_length(int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3_sub(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int obj_create(int, int, int, int);
int pl_play_side_se_at_frame(int, int, int);
int snd_play_side_se(int, int);
int sprintf(int, int, ...);
int ui_draw_text_stub(int, int, float, float, float, float);
int vmu_defrag_disk(int);
int vmu_lcd_refresh(int);
int vmu_lcd_set_busy_image(void);
int vmu_lcd_set_idle_image(void);
int vmu_write_vmgame_file(int, int);
int FUN_0c05a164(int a4);
int FUN_0c026ce0(int a4);
int vmu_step_write_vmgame(int a4, int a5);
int ui_draw_continue_countdown(int a4);
int FUN_0c025d72(int a4, int a5);
int save_reset_all_data(void);
int FUN_0c025706(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c044408(int a4, int a5);
int FUN_0c08e704(int a4, int a5, int a6, int a7);
int FUN_0c04c0ea(void);
int FUN_0c0cea90(int a4, int a5, int a6, int a7);
int vmu_unmount_current(int a4);
int FUN_0c0d78fa(void);
int FUN_0c040938(int a4);
int FUN_0c0ce530(int a4, int a5, int a6, int a7);
int FUN_0c0a3824(int a4);

int FUN_0c05a164(int a4)
{
    int stk[30];
    register int t0;
    register int t1;
    register int t7;
    register int t1716;
    register int t12;
    register int t13;
    register int t15;
    register int t1694;
    register int t1686;
    register int t1678;
    register int t71;
    register int t72;
    register int t91;
    register int t253;
    register float u269;
    register float u270;
    register float u288;
    register float u293;
    register int t296;
    register float t297;
    register float u299;
    register int t301;
    register int t327;
    register int t365;
    register int t384;
    register float u400;
    register float u401;
    register float u419;
    register float u424;
    register int t427;
    register float t428;
    register float u430;
    register int t432;
    register int t458;
    register int t496;
    register int t535;
    register float u551;
    register float u552;
    register float u570;
    register float u575;
    register int t578;
    register float t579;
    register float u581;
    register int t583;
    register int t609;
    register int t647;
    register int t678;
    register float u694;
    register float u695;
    register float u713;
    register float u718;
    register int t721;
    register float t722;
    register float u724;
    register int t726;
    register int t752;
    register int t790;
    register int t820;
    register float u836;
    register float u837;
    register float u855;
    register float u860;
    register int t863;
    register float t864;
    register float u866;
    register int t868;
    register int t894;
    register int t932;
    register int t962;
    register float u978;
    register float u979;
    register float u997;
    register float u1002;
    register int t1005;
    register float t1006;
    register float u1008;
    register int t1010;
    register int t1036;
    register int t1074;
    register int t1104;
    register float u1120;
    register float u1121;
    register float u1139;
    register float u1144;
    register int t1147;
    register float t1148;
    register float u1150;
    register int t1152;
    register int t1178;
    register int t1216;
    register int t1246;
    register float u1262;
    register float u1263;
    register float u1281;
    register float u1286;
    register int t1289;
    register float t1290;
    register float u1292;
    register int t1294;
    register int t1320;
    register int t1358;
    register int t1388;
    register float u1404;
    register float u1405;
    register float u1423;
    register float u1428;
    register int t1431;
    register float t1432;
    register float u1434;
    register int t1436;
    register int t1462;
    register int t1500;
    register int t1530;
    register float u1546;
    register float u1547;
    register float u1565;
    register float u1570;
    register int t1573;
    register float t1574;
    register float u1576;
    register int t1578;
    register int t1604;
    register int t1642;
    register int t1700;
    register int t14;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register int t1691;
    register int t1692;
    register float u1695;
    register float u1696;
    register int t1683;
    register int t1684;
    register float u1687;
    register float u1688;
    register int t1675;
    register int t1676;
    register float u1679;
    register float u1680;
    register int t1668;
    register int t1669;
    register int t1671;
    register float u1672;
    register float u1673;
    register int t92;
    register int t1661;
    register int t1662;
    register float u1663;
    register float u1664;
    register float u1522;
    register float u1523;
    register float u1380;
    register float u1381;
    register float u1238;
    register float u1239;
    register float u1096;
    register float u1097;
    register float u954;
    register float u955;
    register float u812;
    register float u813;
    register float u669;
    register float u670;
    register float u526;
    register float u527;
    register float u272;
    register int t331;
    register float u518;
    register float u519;
    register float u510;
    register float u511;
    register float u403;
    register int t462;
    register float u661;
    register float u662;
    register float u554;
    register int t613;
    register float u804;
    register float u805;
    register float u697;
    register int t756;
    register float u946;
    register float u947;
    register float u839;
    register int t898;
    register float u1088;
    register float u1089;
    register float u981;
    register int t1040;
    register float u1230;
    register float u1231;
    register float u1123;
    register int t1182;
    register float u1372;
    register float u1373;
    register float u1265;
    register int t1324;
    register float u1514;
    register float u1515;
    register float u1407;
    register int t1466;
    register float u1655;
    register float u1656;
    register float u1549;
    register int t1608;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t1 << 2) + (0xC3837F0 + (((signed char)t0 << 2) << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 28)) = (*(signed char *)(((t1 + (0xC383800 + ((signed char)t0 << 1))) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)0xC7F307C) << 8) << 2);
    t7 = *(signed char *)((a4 + 0x1));
    t1716 = t7;
    if (t7 == 0) {
    } else {
        t1700 = *(signed char *)((a4 + 0x8));
        if (t1700 == 0) {
        } else {
            t12 = nlSelectMatrixStack(0x1);
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 4)));
            t13 = 0x0;
            t15 = t14;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 12))) < (int)(*(int *)(((int)stk + 28)))) {
                    t21 = (*(int *)(((int)stk + 20)));
                    t12 = (*(signed char *)((t21 + 0x0)));
                    switch (t12) {
                    case 0:
                        t12 = 0x71F1;
                        t16 = (*(signed char *)((a4 + t12)));
                        t13 = 0x300;
                        t16 = ((short)t16 * (short)0xDC0);
                        t16 = (short)t16;
                        t13 = (t13 + a4);
                        t12 = (*(signed char *)((t21 + 0x1)));
                        t16 = (t16 + t13);
                        t13 = 0xB0;
                        t12 = ((short)t12 * (short)t13);
                        t12 = (short)t12;
                        t16 = (t16 + t12);
                        break;
                    case 1:
                        t12 = 0x71F1;
                        t16 = (*(signed char *)((a4 + t12)));
                        t13 = 0x1E80;
                        t16 = ((short)t16 * (short)0x14A0);
                        t16 = (short)t16;
                        t13 = (t13 + a4);
                        t12 = (*(signed char *)((t21 + 0x1)));
                        t16 = (t16 + t13);
                        t13 = 0xB0;
                        t12 = ((short)t12 * (short)t13);
                        t12 = (short)t12;
                        t16 = (t16 + t12);
                        break;
                    case 2:
                        t12 = 0x71F1;
                        t16 = (*(signed char *)((a4 + t12)));
                        t13 = 0x47C0;
                        t16 = ((short)t16 * (short)0x6E0);
                        t16 = (short)t16;
                        t13 = (t13 + a4);
                        t12 = (*(signed char *)((t21 + 0x1)));
                        t16 = (t16 + t13);
                        t13 = 0xB0;
                        t12 = ((short)t12 * (short)t13);
                        t12 = (short)t12;
                        t16 = (t16 + t12);
                        break;
                    case 3:
                        t12 = 0x71F1;
                        t16 = (*(signed char *)((a4 + t12)));
                        t13 = 0x5580;
                        t16 = ((short)t16 * (short)0x6E0);
                        t16 = (short)t16;
                        t13 = (t13 + a4);
                        t12 = (*(signed char *)((t21 + 0x1)));
                        t16 = (t16 + t13);
                        t13 = 0xB0;
                        t12 = ((short)t12 * (short)t13);
                        t12 = (short)t12;
                        t16 = (t16 + t12);
                        break;
                    case 4:
                        t12 = 0x71F1;
                        t16 = (*(signed char *)((a4 + t12)));
                        t13 = 0x6340;
                        t16 = ((short)t16 * (short)0x6E0);
                        t16 = (short)t16;
                        t13 = (t13 + a4);
                        t12 = (*(signed char *)((t21 + 0x1)));
                        t16 = (t16 + t13);
                        t13 = 0xB0;
                        t12 = ((short)t12 * (short)t13);
                        t12 = (short)t12;
                        t16 = (t16 + t12);
                        break;
                    }
                    t12 = 0x90;
                    t1694 = t15;
                    if ((*(int *)((t16 + t12))) == 0) {
                        t1691 = t20;
                        t1692 = t13;
                        u1695 = u22;
                        u1696 = u23;
                    } else {
                        t12 = 0x7232;
                        t13 = (*(signed char *)((a4 + t12)));
                        t1686 = t15;
                        if (t13 != 0) {
                            t1683 = t20;
                            t1684 = t13;
                            u1687 = u22;
                            u1688 = u23;
                        } else {
                            t13 = 0xC7F300B;
                            t1678 = t15;
                            if ((*(signed char *)((t13 + 0x0))) != 0) {
                                t1675 = t20;
                                t1676 = t13;
                                u1679 = u22;
                                u1680 = u23;
                            } else {
                                if ((*(signed char *)0xC7F300E) != 0) {
                                    t1668 = t20;
                                    t1669 = t13;
                                    t1671 = t15;
                                    u1672 = u22;
                                    u1673 = u23;
                                } else {
                                    t12 = 0x90;
                                    t20 = 0xC0CCF38;
                                    t71 = *(int *)((t16 + t12));
                                    t12 = 0x43;
                                    *(unsigned int *)(((int)stk + 24)) = t71;
                                    t72 = *(signed char *)((t16 + t12));
                                    t12 = 0x42;
                                    t15 = a4;
                                    t12 = (FUN_0c0ccf38(t15, (*(signed char *)((t16 + t12))), t72));
                                    t20 = 0xC0E1240;
                                    t19 = t12;
                                    t15 = t16;
                                    t12 = (nlLoadMatrix(t15));
                                    t18 = 0xC0E0DA0;
                                    t15 = 0x0;
                                    t12 = (nlInvertMatrix(t15));
                                    t18 = 0xC0E0AE0;
                                    t15 = ((int)stk + 4);
                                    t15 = (t15 + 0x34);
                                    t12 = (nlStoreMatrix(t15));
                                    t12 = (*(signed char *)((t21 + 0x2)));
                                    t91 = 0xC0E0AE0;
                                    if (t12 != 0) {
                                        if (t12 != 1) {
                                            if (t12 != 2) {
                                            } else {
                                                t13 = t21;
                                                t13 = (t13 + 0x4);
                                                t12 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(t13); }
                                                t92 = t13;
                                            }
                                            t91 = 0xC0E0AE0;
                                        } else {
                                            t18 = 0xC062242;
                                            t15 = t19;
                                            t12 = (math_mat_get_translate(t15, (((int)stk + 4) + 0x28)));
                                            t13 = 0xC0E0910;
                                            t15 = ((int)stk + 4);
                                            t15 = (t15 + 0x28);
                                            t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x1C)));
                                            t91 = 0xC062242;
                                        }
                                    }
                                    t18 = t91;
                                    t13 = t92;
                                    t15 = t16;
                                    t12 = (nlLoadMatrix(t15));
                                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                                    for (;;) {
                                        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)((t21 + 0x28)))) {
                                            t20 = (*(int *)(((int)stk + 4)));
                                            t12 = (*(int *)((t21 + 0x24)));
                                            t20 = (t20 << 1);
                                            t20 = (*(short *)((t20 + t12)));
                                            t12 = (*(signed char *)((t21 + 0x3)));
                                            t17 = t20;
                                            t17 = (t17 << 1);
                                            t17 = (t17 + t20);
                                            t17 = (t17 << 2);
                                            if (t12 != 1) {
                                                if (t12 != 2) {
                                                    if (t12 != 3) {
                                                        if (t12 != 4) {
                                                            if (t12 != 5) {
                                                                if (t12 != 6) {
                                                                    if (t12 != 7) {
                                                                        if (t12 != 8) {
                                                                            if (t12 != 9) {
                                                                                t18 = (*(int *)((t21 + 0x34)));
                                                                                t15 = (*(int *)((t21 + 0x30)));
                                                                                t18 = (t18 + t17);
                                                                                t12 = t20;
                                                                                t12 = (t12 << 2);
                                                                                t253 = *(int *)(((int)stk + 24));
                                                                                t19 = (*(int *)((t15 + t12)));
                                                                                t19 = (t19 << 2);
                                                                                t19 = (t19 + t253);
                                                                                t12 = t20;
                                                                                t13 = (*(int *)((t21 + 0x20)));
                                                                                t12 = (t12 << 1);
                                                                                t12 = (*(short *)((t13 + t12)));
                                                                                t12 = (t12 << 2);
                                                                                t13 = (*(int *)((t15 + t12)));
                                                                                t13 = (t13 << 2);
                                                                                *(unsigned int *)(((int)stk + 16)) = (t253 + t13);
                                                                                t15 = (*(int *)((t21 + 0x2C)));
                                                                                t15 = (t15 + t17);
                                                                                t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                                t12 = 0x71F1;
                                                                                t13 = (*(signed char *)((a4 + t12)));
                                                                                t12 = (t12 + 0x1);
                                                                                if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                                    t13 = ((int)stk + 4);
                                                                                    t13 = (t13 + 0x28);
                                                                                    t12 = 0xC;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                                }
                                                                                t17 = 0xC06206E;
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                                t12 = (*(int *)((t21 + 0x38)));
                                                                                t13 = t20;
                                                                                t13 = (t13 << 2);
                                                                                u23 = 0.0f;
                                                                                u269 = *(float *)((t13 + t12));
                                                                                if (u269 != u23) {
                                                                                    t12 = 0xC05A510;
                                                                                    u270 = *(float *)((t12 + 0x0));
                                                                                    t12 = 0x18;
                                                                                    u22 = (*(float *)((t21 + t12)));
                                                                                    u25 = u270;
                                                                                    u25 = (u25 / (u269 * u22));
                                                                                    u272 = u22;
                                                                                } else {
                                                                                    u25 = 1.0f;
                                                                                }
                                                                                u22 = u272;
                                                                                if (u25 > 1.0f) {
                                                                                    u25 = 1.0f;
                                                                                } else {
                                                                                    t12 = 0x14;
                                                                                    u23 = (*(float *)((t21 + t12)));
                                                                                    if (u23 > u25) {
                                                                                        u25 = (*(float *)((t21 + t12)));
                                                                                    }
                                                                                }
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                t13 = 0xC062050;
                                                                                t15 = t18;
                                                                                t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                                t12 = 0x1C;
                                                                                u24 = (*(float *)((t21 + t12)));
                                                                                t12 = 0xC05A64C;
                                                                                u25 = (*(float *)((t12 + 0x0)));
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                u22 = (*(float *)((t18 + 0x0)));
                                                                                t12 = 0x4;
                                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                                u288 = u22;
                                                                                u288 = u288 + u25 * u23;
                                                                                u22 = u288;
                                                                                *(float *)((t18 + 0x0)) = u22;
                                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                t15 = (t15 << 1);
                                                                                t12 = 0x8;
                                                                                t13 = (t18 + t12);
                                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                                u293 = u22;
                                                                                u293 = u293 + u25 * u23;
                                                                                u22 = u293;
                                                                                *(float *)((t13 + 0x0)) = u22;
                                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                t296 = t15;
                                                                                t15 = (t15 << 1);
                                                                                t15 = (t15 + t296);
                                                                                t297 = math_sin_angle16(t15);
                                                                                t13 = (t18 + t12);
                                                                                t15 = 0xFA4;
                                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                                u23 = (t297 * u24);
                                                                                u299 = u22;
                                                                                u299 = u299 + u25 * u23;
                                                                                u22 = u299;
                                                                                *(float *)((t13 + 0x0)) = u22;
                                                                                t13 = 0xC0E19B0;
                                                                                t301 = ((*(int *)(((int)stk + 8))) + t15);
                                                                                t15 = ((int)stk + 4);
                                                                                *(unsigned int *)(((int)stk + 8)) = t301;
                                                                                t15 = (t15 + 0x34);
                                                                                t12 = (nlPushMatrix(t15));
                                                                                t15 = t18;
                                                                                t12 = (nlCalcPoint(t15, t19));
                                                                                t13 = 0xC0E1960;
                                                                                t15 = 0x1;
                                                                                t12 = (nlPopMatrix(t15));
                                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                                if (t12 == 0) {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t13 = (*(short *)(((t20 << 1) + t12)));
                                                                                    if ((int)t13 < 0) {
                                                                                        t13 = t19;
                                                                                        t12 = 0xC;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                                        t331 = t13;
                                                                                    } else {
                                                                                        t15 = ((int)stk + 4);
                                                                                        t15 = (t15 + 0x28);
                                                                                        t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                                    }
                                                                                } else {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t327 = (((int)stk + 4) + 0x1C);
                                                                                    if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                                    } else {
                                                                                        t327 = (*(int *)(((int)stk + 16)));
                                                                                    }
                                                                                    t15 = ((int)stk + 4);
                                                                                    t15 = (t15 + 0x28);
                                                                                    t12 = (math_vec3_sub(t15, t19, t327));
                                                                                }
                                                                                t13 = t331;
                                                                                t17 = 0xC0620A4;
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                u23 = 0.0f;
                                                                                u25 = (math_vec3_length(t15));
                                                                                if (u25 == u23) {
                                                                                    t12 = 0xC05A668;
                                                                                    u25 = (*(float *)((t12 + 0x0)));
                                                                                }
                                                                                t12 = (*(int *)((t21 + 0x3C)));
                                                                                u22 = u25;
                                                                                u23 = (*(float *)(((t20 << 2) + t12)));
                                                                                t15 = ((int)stk + 4);
                                                                                u25 = u23;
                                                                                u25 = (u25 / u22);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                                if (t12 == 0) {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t20 = (t20 << 1);
                                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                        t13 = ((int)stk + 4);
                                                                                        t13 = (t13 + 0x28);
                                                                                        t12 = 0xC;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                                    } else {
                                                                                        t15 = t19;
                                                                                        t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                                    }
                                                                                } else {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t20 = (t20 << 1);
                                                                                    t365 = (((int)stk + 4) + 0x1C);
                                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                    } else {
                                                                                        t365 = (*(int *)(((int)stk + 16)));
                                                                                    }
                                                                                    t15 = t19;
                                                                                    t12 = (math_vec3_add(t15, t365, (((int)stk + 4) + 0x28)));
                                                                                }
                                                                                t13 = 0xC0E0910;
                                                                                t15 = t19;
                                                                                t12 = (nlCalcPoint(t15, t18));
                                                                                t15 = 0x1;
                                                                                *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                                t1661 = t15;
                                                                                t1662 = 0xC0620A4;
                                                                            } else {
                                                                                t12 = (*(int *)((t21 + 0x38)));
                                                                                t13 = t20;
                                                                                t13 = (t13 << 2);
                                                                                u23 = (*(float *)((t13 + t12)));
                                                                                t12 = 0x10;
                                                                                u22 = (*(float *)((t21 + t12)));
                                                                                t1662 = t17;
                                                                                if (u22 > u23) {
                                                                                    u518 = u22;
                                                                                    u519 = u23;
                                                                                } else {
                                                                                    t13 = (*(int *)((t21 + 0x2C)));
                                                                                    t12 = 0x4;
                                                                                    u23 = 1.0f;
                                                                                    t13 = (t13 + t17);
                                                                                    u22 = (*(float *)((t13 + t12)));
                                                                                    t1662 = t17;
                                                                                    if (u22 > u23) {
                                                                                        u510 = u22;
                                                                                        u511 = u23;
                                                                                    } else {
                                                                                        t18 = (*(int *)((t21 + 0x34)));
                                                                                        t15 = (*(int *)((t21 + 0x30)));
                                                                                        t18 = (t18 + t17);
                                                                                        t12 = t20;
                                                                                        t12 = (t12 << 2);
                                                                                        t384 = *(int *)(((int)stk + 24));
                                                                                        t19 = (*(int *)((t15 + t12)));
                                                                                        t19 = (t19 << 2);
                                                                                        t19 = (t19 + t384);
                                                                                        t12 = t20;
                                                                                        t13 = (*(int *)((t21 + 0x20)));
                                                                                        t12 = (t12 << 1);
                                                                                        t12 = (*(short *)((t13 + t12)));
                                                                                        t12 = (t12 << 2);
                                                                                        t13 = (*(int *)((t15 + t12)));
                                                                                        t13 = (t13 << 2);
                                                                                        *(unsigned int *)(((int)stk + 16)) = (t384 + t13);
                                                                                        t15 = (*(int *)((t21 + 0x2C)));
                                                                                        t15 = (t15 + t17);
                                                                                        t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                                        t12 = 0x71F1;
                                                                                        t13 = (*(signed char *)((a4 + t12)));
                                                                                        t12 = (t12 + 0x1);
                                                                                        if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                                            t13 = ((int)stk + 4);
                                                                                            t13 = (t13 + 0x28);
                                                                                            t12 = 0xC;
                                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                                        }
                                                                                        t17 = 0xC06206E;
                                                                                        t15 = ((int)stk + 4);
                                                                                        t15 = (t15 + 0x28);
                                                                                        t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                                        t12 = (*(int *)((t21 + 0x38)));
                                                                                        t13 = t20;
                                                                                        t13 = (t13 << 2);
                                                                                        u23 = 0.0f;
                                                                                        u400 = *(float *)((t13 + t12));
                                                                                        if (u400 != u23) {
                                                                                            t12 = 0xC05A510;
                                                                                            u401 = *(float *)((t12 + 0x0));
                                                                                            t12 = 0x18;
                                                                                            u22 = (*(float *)((t21 + t12)));
                                                                                            u25 = u401;
                                                                                            u25 = (u25 / (u400 * u22));
                                                                                            u403 = u22;
                                                                                        } else {
                                                                                            u25 = 1.0f;
                                                                                        }
                                                                                        u22 = u403;
                                                                                        if (u25 > 1.0f) {
                                                                                            u25 = 1.0f;
                                                                                        } else {
                                                                                            t12 = 0x14;
                                                                                            u23 = (*(float *)((t21 + t12)));
                                                                                            if (u23 > u25) {
                                                                                                u25 = (*(float *)((t21 + t12)));
                                                                                            }
                                                                                        }
                                                                                        t15 = ((int)stk + 4);
                                                                                        t15 = (t15 + 0x28);
                                                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                        t13 = 0xC062050;
                                                                                        t15 = t18;
                                                                                        t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                                        t12 = 0x1C;
                                                                                        u24 = (*(float *)((t21 + t12)));
                                                                                        t12 = 0xC05A64C;
                                                                                        u25 = (*(float *)((t12 + 0x0)));
                                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                                        u22 = (*(float *)((t18 + 0x0)));
                                                                                        t12 = 0x4;
                                                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                                                        u419 = u22;
                                                                                        u419 = u419 + u25 * u23;
                                                                                        u22 = u419;
                                                                                        *(float *)((t18 + 0x0)) = u22;
                                                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                                        t15 = (t15 << 1);
                                                                                        t12 = 0x8;
                                                                                        t13 = (t18 + t12);
                                                                                        u22 = (*(float *)((t13 + 0x0)));
                                                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                                                        u424 = u22;
                                                                                        u424 = u424 + u25 * u23;
                                                                                        u22 = u424;
                                                                                        *(float *)((t13 + 0x0)) = u22;
                                                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                                        t427 = t15;
                                                                                        t15 = (t15 << 1);
                                                                                        t15 = (t15 + t427);
                                                                                        t428 = math_sin_angle16(t15);
                                                                                        t13 = (t18 + t12);
                                                                                        t15 = 0xFA4;
                                                                                        u22 = (*(float *)((t13 + 0x0)));
                                                                                        u23 = (t428 * u24);
                                                                                        u430 = u22;
                                                                                        u430 = u430 + u25 * u23;
                                                                                        u22 = u430;
                                                                                        *(float *)((t13 + 0x0)) = u22;
                                                                                        t13 = 0xC0E19B0;
                                                                                        t432 = ((*(int *)(((int)stk + 8))) + t15);
                                                                                        t15 = ((int)stk + 4);
                                                                                        *(unsigned int *)(((int)stk + 8)) = t432;
                                                                                        t15 = (t15 + 0x34);
                                                                                        t12 = (nlPushMatrix(t15));
                                                                                        t15 = t18;
                                                                                        t12 = (nlCalcPoint(t15, t19));
                                                                                        t13 = 0xC0E1960;
                                                                                        t15 = 0x1;
                                                                                        t12 = (nlPopMatrix(t15));
                                                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                                                        if (t12 == 0) {
                                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                                            t13 = (*(short *)(((t20 << 1) + t12)));
                                                                                            if ((int)t13 < 0) {
                                                                                                t13 = t19;
                                                                                                t12 = 0xC;
                                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                                                t462 = t13;
                                                                                            } else {
                                                                                                t15 = ((int)stk + 4);
                                                                                                t15 = (t15 + 0x28);
                                                                                                t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                                            }
                                                                                        } else {
                                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                                            t458 = (((int)stk + 4) + 0x1C);
                                                                                            if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                                            } else {
                                                                                                t458 = (*(int *)(((int)stk + 16)));
                                                                                            }
                                                                                            t15 = ((int)stk + 4);
                                                                                            t15 = (t15 + 0x28);
                                                                                            t12 = (math_vec3_sub(t15, t19, t458));
                                                                                        }
                                                                                        t13 = t462;
                                                                                        t17 = 0xC0620A4;
                                                                                        t15 = ((int)stk + 4);
                                                                                        t15 = (t15 + 0x28);
                                                                                        u23 = 0.0f;
                                                                                        u25 = (math_vec3_length(t15));
                                                                                        if (u25 == u23) {
                                                                                            t12 = 0xC05A668;
                                                                                            u25 = (*(float *)((t12 + 0x0)));
                                                                                        }
                                                                                        t12 = (*(int *)((t21 + 0x3C)));
                                                                                        u22 = u25;
                                                                                        u23 = (*(float *)(((t20 << 2) + t12)));
                                                                                        t15 = ((int)stk + 4);
                                                                                        u25 = u23;
                                                                                        u25 = (u25 / u22);
                                                                                        t15 = (t15 + 0x28);
                                                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                                                        if (t12 == 0) {
                                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                                            t20 = (t20 << 1);
                                                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                                t13 = ((int)stk + 4);
                                                                                                t13 = (t13 + 0x28);
                                                                                                t12 = 0xC;
                                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                                            } else {
                                                                                                t15 = t19;
                                                                                                t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                                            }
                                                                                        } else {
                                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                                            t20 = (t20 << 1);
                                                                                            t496 = (((int)stk + 4) + 0x1C);
                                                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                            } else {
                                                                                                t496 = (*(int *)(((int)stk + 16)));
                                                                                            }
                                                                                            t15 = t19;
                                                                                            t12 = (math_vec3_add(t15, t496, (((int)stk + 4) + 0x28)));
                                                                                        }
                                                                                        t13 = 0xC0E0910;
                                                                                        t15 = t19;
                                                                                        t12 = (nlCalcPoint(t15, t18));
                                                                                        t15 = 0x1;
                                                                                        *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                                        t1661 = t15;
                                                                                        t1662 = 0xC0620A4;
                                                                                    }
                                                                                    u518 = u510;
                                                                                    u519 = u511;
                                                                                }
                                                                                u526 = u518;
                                                                                u527 = u519;
                                                                            }
                                                                            u669 = u526;
                                                                            u670 = u527;
                                                                        } else {
                                                                            t12 = 0x8;
                                                                            t13 = (*(int *)((t21 + 0x2C)));
                                                                            u23 = (*(float *)((t21 + t12)));
                                                                            t12 = 0x4;
                                                                            t13 = (t13 + t17);
                                                                            u22 = (*(float *)((t13 + t12)));
                                                                            t12 = 0x10;
                                                                            u22 = (u22 - u23);
                                                                            u23 = (*(float *)((t21 + t12)));
                                                                            t1662 = t17;
                                                                            if (u22 > u23) {
                                                                                u661 = u22;
                                                                                u662 = u23;
                                                                            } else {
                                                                                t18 = (*(int *)((t21 + 0x34)));
                                                                                t15 = (*(int *)((t21 + 0x30)));
                                                                                t18 = (t18 + t17);
                                                                                t12 = t20;
                                                                                t12 = (t12 << 2);
                                                                                t535 = *(int *)(((int)stk + 24));
                                                                                t19 = (*(int *)((t15 + t12)));
                                                                                t19 = (t19 << 2);
                                                                                t19 = (t19 + t535);
                                                                                t12 = t20;
                                                                                t13 = (*(int *)((t21 + 0x20)));
                                                                                t12 = (t12 << 1);
                                                                                t12 = (*(short *)((t13 + t12)));
                                                                                t12 = (t12 << 2);
                                                                                t13 = (*(int *)((t15 + t12)));
                                                                                t13 = (t13 << 2);
                                                                                *(unsigned int *)(((int)stk + 16)) = (t535 + t13);
                                                                                t15 = (*(int *)((t21 + 0x2C)));
                                                                                t15 = (t15 + t17);
                                                                                t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                                t12 = 0x71F1;
                                                                                t13 = (*(signed char *)((a4 + t12)));
                                                                                t12 = (t12 + 0x1);
                                                                                if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                                    t13 = ((int)stk + 4);
                                                                                    t13 = (t13 + 0x28);
                                                                                    t12 = 0xC;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                                }
                                                                                t17 = 0xC06206E;
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                                t12 = (*(int *)((t21 + 0x38)));
                                                                                t13 = t20;
                                                                                t13 = (t13 << 2);
                                                                                u23 = 0.0f;
                                                                                u551 = *(float *)((t13 + t12));
                                                                                if (u551 != u23) {
                                                                                    t12 = 0xC05A510;
                                                                                    u552 = *(float *)((t12 + 0x0));
                                                                                    t12 = 0x18;
                                                                                    u22 = (*(float *)((t21 + t12)));
                                                                                    u25 = u552;
                                                                                    u25 = (u25 / (u551 * u22));
                                                                                    u554 = u22;
                                                                                } else {
                                                                                    u25 = 1.0f;
                                                                                }
                                                                                u22 = u554;
                                                                                if (u25 > 1.0f) {
                                                                                    u25 = 1.0f;
                                                                                } else {
                                                                                    t12 = 0x14;
                                                                                    u23 = (*(float *)((t21 + t12)));
                                                                                    if (u23 > u25) {
                                                                                        u25 = (*(float *)((t21 + t12)));
                                                                                    }
                                                                                }
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                t13 = 0xC062050;
                                                                                t15 = t18;
                                                                                t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                                t12 = 0x1C;
                                                                                u24 = (*(float *)((t21 + t12)));
                                                                                t12 = 0xC05A64C;
                                                                                u25 = (*(float *)((t12 + 0x0)));
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                u22 = (*(float *)((t18 + 0x0)));
                                                                                t12 = 0x4;
                                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                                u570 = u22;
                                                                                u570 = u570 + u25 * u23;
                                                                                u22 = u570;
                                                                                *(float *)((t18 + 0x0)) = u22;
                                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                t15 = (t15 << 1);
                                                                                t12 = 0x8;
                                                                                t13 = (t18 + t12);
                                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                                u575 = u22;
                                                                                u575 = u575 + u25 * u23;
                                                                                u22 = u575;
                                                                                *(float *)((t13 + 0x0)) = u22;
                                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                                t578 = t15;
                                                                                t15 = (t15 << 1);
                                                                                t15 = (t15 + t578);
                                                                                t579 = math_sin_angle16(t15);
                                                                                t13 = (t18 + t12);
                                                                                t15 = 0xFA4;
                                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                                u23 = (t579 * u24);
                                                                                u581 = u22;
                                                                                u581 = u581 + u25 * u23;
                                                                                u22 = u581;
                                                                                *(float *)((t13 + 0x0)) = u22;
                                                                                t13 = 0xC0E19B0;
                                                                                t583 = ((*(int *)(((int)stk + 8))) + t15);
                                                                                t15 = ((int)stk + 4);
                                                                                *(unsigned int *)(((int)stk + 8)) = t583;
                                                                                t15 = (t15 + 0x34);
                                                                                t12 = (nlPushMatrix(t15));
                                                                                t15 = t18;
                                                                                t12 = (nlCalcPoint(t15, t19));
                                                                                t13 = 0xC0E1960;
                                                                                t15 = 0x1;
                                                                                t12 = (nlPopMatrix(t15));
                                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                                if (t12 == 0) {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t13 = (*(short *)(((t20 << 1) + t12)));
                                                                                    if ((int)t13 < 0) {
                                                                                        t13 = t19;
                                                                                        t12 = 0xC;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                                        t613 = t13;
                                                                                    } else {
                                                                                        t15 = ((int)stk + 4);
                                                                                        t15 = (t15 + 0x28);
                                                                                        t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                                    }
                                                                                } else {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t609 = (((int)stk + 4) + 0x1C);
                                                                                    if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                                    } else {
                                                                                        t609 = (*(int *)(((int)stk + 16)));
                                                                                    }
                                                                                    t15 = ((int)stk + 4);
                                                                                    t15 = (t15 + 0x28);
                                                                                    t12 = (math_vec3_sub(t15, t19, t609));
                                                                                }
                                                                                t13 = t613;
                                                                                t17 = 0xC0620A4;
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                u23 = 0.0f;
                                                                                u25 = (math_vec3_length(t15));
                                                                                if (u25 == u23) {
                                                                                    t12 = 0xC05A668;
                                                                                    u25 = (*(float *)((t12 + 0x0)));
                                                                                }
                                                                                t12 = (*(int *)((t21 + 0x3C)));
                                                                                u22 = u25;
                                                                                u23 = (*(float *)(((t20 << 2) + t12)));
                                                                                t15 = ((int)stk + 4);
                                                                                u25 = u23;
                                                                                u25 = (u25 / u22);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                                if (t12 == 0) {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t20 = (t20 << 1);
                                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                        t13 = ((int)stk + 4);
                                                                                        t13 = (t13 + 0x28);
                                                                                        t12 = 0xC;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                                    } else {
                                                                                        t15 = t19;
                                                                                        t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                                    }
                                                                                } else {
                                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                                    t20 = (t20 << 1);
                                                                                    t647 = (((int)stk + 4) + 0x1C);
                                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                    } else {
                                                                                        t647 = (*(int *)(((int)stk + 16)));
                                                                                    }
                                                                                    t15 = t19;
                                                                                    t12 = (math_vec3_add(t15, t647, (((int)stk + 4) + 0x28)));
                                                                                }
                                                                                t13 = 0xC0E0910;
                                                                                t15 = t19;
                                                                                t12 = (nlCalcPoint(t15, t18));
                                                                                t15 = 0x1;
                                                                                *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                                t1661 = t15;
                                                                                t1662 = 0xC0620A4;
                                                                            }
                                                                            u669 = u661;
                                                                            u670 = u662;
                                                                        }
                                                                        u812 = u669;
                                                                        u813 = u670;
                                                                    } else {
                                                                        t12 = 0x8;
                                                                        t13 = (*(int *)((t21 + 0x2C)));
                                                                        u23 = (*(float *)((t21 + t12)));
                                                                        t12 = 0x4;
                                                                        t13 = (t13 + t17);
                                                                        u22 = (*(float *)((t13 + t12)));
                                                                        t12 = 0x10;
                                                                        u22 = (u22 - u23);
                                                                        u23 = (*(float *)((t21 + t12)));
                                                                        t1662 = t17;
                                                                        if (u23 > u22) {
                                                                            u804 = u22;
                                                                            u805 = u23;
                                                                        } else {
                                                                            t18 = (*(int *)((t21 + 0x34)));
                                                                            t15 = (*(int *)((t21 + 0x30)));
                                                                            t18 = (t18 + t17);
                                                                            t12 = t20;
                                                                            t12 = (t12 << 2);
                                                                            t678 = *(int *)(((int)stk + 24));
                                                                            t19 = (*(int *)((t15 + t12)));
                                                                            t19 = (t19 << 2);
                                                                            t19 = (t19 + t678);
                                                                            t12 = t20;
                                                                            t13 = (*(int *)((t21 + 0x20)));
                                                                            t12 = (t12 << 1);
                                                                            t12 = (*(short *)((t13 + t12)));
                                                                            t12 = (t12 << 2);
                                                                            t13 = (*(int *)((t15 + t12)));
                                                                            t13 = (t13 << 2);
                                                                            *(unsigned int *)(((int)stk + 16)) = (t678 + t13);
                                                                            t15 = (*(int *)((t21 + 0x2C)));
                                                                            t15 = (t15 + t17);
                                                                            t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                            t12 = 0x71F1;
                                                                            t13 = (*(signed char *)((a4 + t12)));
                                                                            t12 = (t12 + 0x1);
                                                                            if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                                t13 = ((int)stk + 4);
                                                                                t13 = (t13 + 0x28);
                                                                                t12 = 0xC;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                            }
                                                                            t17 = 0xC06206E;
                                                                            t15 = ((int)stk + 4);
                                                                            t15 = (t15 + 0x28);
                                                                            t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                            t12 = (*(int *)((t21 + 0x38)));
                                                                            t13 = t20;
                                                                            t13 = (t13 << 2);
                                                                            u23 = 0.0f;
                                                                            u694 = *(float *)((t13 + t12));
                                                                            if (u694 != u23) {
                                                                                t12 = 0xC05A510;
                                                                                u695 = *(float *)((t12 + 0x0));
                                                                                t12 = 0x18;
                                                                                u22 = (*(float *)((t21 + t12)));
                                                                                u25 = u695;
                                                                                u25 = (u25 / (u694 * u22));
                                                                                u697 = u22;
                                                                            } else {
                                                                                u25 = 1.0f;
                                                                            }
                                                                            u22 = u697;
                                                                            if (u25 > 1.0f) {
                                                                                u25 = 1.0f;
                                                                            } else {
                                                                                t12 = 0x14;
                                                                                u23 = (*(float *)((t21 + t12)));
                                                                                if (u23 > u25) {
                                                                                    u25 = (*(float *)((t21 + t12)));
                                                                                }
                                                                            }
                                                                            t15 = ((int)stk + 4);
                                                                            t15 = (t15 + 0x28);
                                                                            t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                            t13 = 0xC062050;
                                                                            t15 = t18;
                                                                            t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                            t12 = 0x1C;
                                                                            u24 = (*(float *)((t21 + t12)));
                                                                            t12 = 0xC05A64C;
                                                                            u25 = (*(float *)((t12 + 0x0)));
                                                                            t15 = (*(int *)(((int)stk + 8)));
                                                                            u22 = (*(float *)((t18 + 0x0)));
                                                                            t12 = 0x4;
                                                                            u23 = ((math_sin_angle16(t15)) * u24);
                                                                            u713 = u22;
                                                                            u713 = u713 + u25 * u23;
                                                                            u22 = u713;
                                                                            *(float *)((t18 + 0x0)) = u22;
                                                                            *(int *)((int)stk + 0) = (t18 + t12);
                                                                            t15 = (*(int *)(((int)stk + 8)));
                                                                            t15 = (t15 << 1);
                                                                            t12 = 0x8;
                                                                            t13 = (t18 + t12);
                                                                            u22 = (*(float *)((t13 + 0x0)));
                                                                            u23 = ((math_sin_angle16(t15)) * u24);
                                                                            u718 = u22;
                                                                            u718 = u718 + u25 * u23;
                                                                            u22 = u718;
                                                                            *(float *)((t13 + 0x0)) = u22;
                                                                            *(int *)((int)stk + 0) = (t18 + t12);
                                                                            t15 = (*(int *)(((int)stk + 8)));
                                                                            t721 = t15;
                                                                            t15 = (t15 << 1);
                                                                            t15 = (t15 + t721);
                                                                            t722 = math_sin_angle16(t15);
                                                                            t13 = (t18 + t12);
                                                                            t15 = 0xFA4;
                                                                            u22 = (*(float *)((t13 + 0x0)));
                                                                            u23 = (t722 * u24);
                                                                            u724 = u22;
                                                                            u724 = u724 + u25 * u23;
                                                                            u22 = u724;
                                                                            *(float *)((t13 + 0x0)) = u22;
                                                                            t13 = 0xC0E19B0;
                                                                            t726 = ((*(int *)(((int)stk + 8))) + t15);
                                                                            t15 = ((int)stk + 4);
                                                                            *(unsigned int *)(((int)stk + 8)) = t726;
                                                                            t15 = (t15 + 0x34);
                                                                            t12 = (nlPushMatrix(t15));
                                                                            t15 = t18;
                                                                            t12 = (nlCalcPoint(t15, t19));
                                                                            t13 = 0xC0E1960;
                                                                            t15 = 0x1;
                                                                            t12 = (nlPopMatrix(t15));
                                                                            t12 = (*(signed char *)((t21 + 0x2)));
                                                                            if (t12 == 0) {
                                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                                t13 = (*(short *)(((t20 << 1) + t12)));
                                                                                if ((int)t13 < 0) {
                                                                                    t13 = t19;
                                                                                    t12 = 0xC;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                                    t756 = t13;
                                                                                } else {
                                                                                    t15 = ((int)stk + 4);
                                                                                    t15 = (t15 + 0x28);
                                                                                    t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                                }
                                                                            } else {
                                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                                t752 = (((int)stk + 4) + 0x1C);
                                                                                if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                                } else {
                                                                                    t752 = (*(int *)(((int)stk + 16)));
                                                                                }
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_sub(t15, t19, t752));
                                                                            }
                                                                            t13 = t756;
                                                                            t17 = 0xC0620A4;
                                                                            t15 = ((int)stk + 4);
                                                                            t15 = (t15 + 0x28);
                                                                            u23 = 0.0f;
                                                                            u25 = (math_vec3_length(t15));
                                                                            if (u25 == u23) {
                                                                                t12 = 0xC05A668;
                                                                                u25 = (*(float *)((t12 + 0x0)));
                                                                            }
                                                                            t12 = (*(int *)((t21 + 0x3C)));
                                                                            u22 = u25;
                                                                            u23 = (*(float *)(((t20 << 2) + t12)));
                                                                            t15 = ((int)stk + 4);
                                                                            u25 = u23;
                                                                            u25 = (u25 / u22);
                                                                            t15 = (t15 + 0x28);
                                                                            t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                            t12 = (*(signed char *)((t21 + 0x2)));
                                                                            if (t12 == 0) {
                                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                                t20 = (t20 << 1);
                                                                                if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                    t13 = ((int)stk + 4);
                                                                                    t13 = (t13 + 0x28);
                                                                                    t12 = 0xC;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                                } else {
                                                                                    t15 = t19;
                                                                                    t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                                }
                                                                            } else {
                                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                                t20 = (t20 << 1);
                                                                                t790 = (((int)stk + 4) + 0x1C);
                                                                                if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                } else {
                                                                                    t790 = (*(int *)(((int)stk + 16)));
                                                                                }
                                                                                t15 = t19;
                                                                                t12 = (math_vec3_add(t15, t790, (((int)stk + 4) + 0x28)));
                                                                            }
                                                                            t13 = 0xC0E0910;
                                                                            t15 = t19;
                                                                            t12 = (nlCalcPoint(t15, t18));
                                                                            t15 = 0x1;
                                                                            *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                            t1661 = t15;
                                                                            t1662 = 0xC0620A4;
                                                                        }
                                                                        u812 = u804;
                                                                        u813 = u805;
                                                                    }
                                                                    u954 = u812;
                                                                    u955 = u813;
                                                                } else {
                                                                    t12 = 0x10;
                                                                    t13 = (*(int *)((t21 + 0x2C)));
                                                                    u23 = (*(float *)((t21 + t12)));
                                                                    t12 = 0x8;
                                                                    t13 = (t13 + t17);
                                                                    u22 = (*(float *)((t13 + t12)));
                                                                    t1662 = t17;
                                                                    if (u23 > u22) {
                                                                        u946 = u22;
                                                                        u947 = u23;
                                                                    } else {
                                                                        t18 = (*(int *)((t21 + 0x34)));
                                                                        t15 = (*(int *)((t21 + 0x30)));
                                                                        t18 = (t18 + t17);
                                                                        t12 = t20;
                                                                        t12 = (t12 << 2);
                                                                        t820 = *(int *)(((int)stk + 24));
                                                                        t19 = (*(int *)((t15 + t12)));
                                                                        t19 = (t19 << 2);
                                                                        t19 = (t19 + t820);
                                                                        t12 = t20;
                                                                        t13 = (*(int *)((t21 + 0x20)));
                                                                        t12 = (t12 << 1);
                                                                        t12 = (*(short *)((t13 + t12)));
                                                                        t12 = (t12 << 2);
                                                                        t13 = (*(int *)((t15 + t12)));
                                                                        t13 = (t13 << 2);
                                                                        *(unsigned int *)(((int)stk + 16)) = (t820 + t13);
                                                                        t15 = (*(int *)((t21 + 0x2C)));
                                                                        t15 = (t15 + t17);
                                                                        t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                        t12 = 0x71F1;
                                                                        t13 = (*(signed char *)((a4 + t12)));
                                                                        t12 = (t12 + 0x1);
                                                                        if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                            t13 = ((int)stk + 4);
                                                                            t13 = (t13 + 0x28);
                                                                            t12 = 0xC;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                        }
                                                                        t17 = 0xC06206E;
                                                                        t15 = ((int)stk + 4);
                                                                        t15 = (t15 + 0x28);
                                                                        t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                        t12 = (*(int *)((t21 + 0x38)));
                                                                        t13 = t20;
                                                                        t13 = (t13 << 2);
                                                                        u23 = 0.0f;
                                                                        u836 = *(float *)((t13 + t12));
                                                                        if (u836 != u23) {
                                                                            t12 = 0xC05A510;
                                                                            u837 = *(float *)((t12 + 0x0));
                                                                            t12 = 0x18;
                                                                            u22 = (*(float *)((t21 + t12)));
                                                                            u25 = u837;
                                                                            u25 = (u25 / (u836 * u22));
                                                                            u839 = u22;
                                                                        } else {
                                                                            u25 = 1.0f;
                                                                        }
                                                                        u22 = u839;
                                                                        if (u25 > 1.0f) {
                                                                            u25 = 1.0f;
                                                                        } else {
                                                                            t12 = 0x14;
                                                                            u23 = (*(float *)((t21 + t12)));
                                                                            if (u23 > u25) {
                                                                                u25 = (*(float *)((t21 + t12)));
                                                                            }
                                                                        }
                                                                        t15 = ((int)stk + 4);
                                                                        t15 = (t15 + 0x28);
                                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                        t13 = 0xC062050;
                                                                        t15 = t18;
                                                                        t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                        t12 = 0x1C;
                                                                        u24 = (*(float *)((t21 + t12)));
                                                                        t12 = 0xC05A64C;
                                                                        u25 = (*(float *)((t12 + 0x0)));
                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                        u22 = (*(float *)((t18 + 0x0)));
                                                                        t12 = 0x4;
                                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                                        u855 = u22;
                                                                        u855 = u855 + u25 * u23;
                                                                        u22 = u855;
                                                                        *(float *)((t18 + 0x0)) = u22;
                                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                        t15 = (t15 << 1);
                                                                        t12 = 0x8;
                                                                        t13 = (t18 + t12);
                                                                        u22 = (*(float *)((t13 + 0x0)));
                                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                                        u860 = u22;
                                                                        u860 = u860 + u25 * u23;
                                                                        u22 = u860;
                                                                        *(float *)((t13 + 0x0)) = u22;
                                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                                        t15 = (*(int *)(((int)stk + 8)));
                                                                        t863 = t15;
                                                                        t15 = (t15 << 1);
                                                                        t15 = (t15 + t863);
                                                                        t864 = math_sin_angle16(t15);
                                                                        t13 = (t18 + t12);
                                                                        t15 = 0xFA4;
                                                                        u22 = (*(float *)((t13 + 0x0)));
                                                                        u23 = (t864 * u24);
                                                                        u866 = u22;
                                                                        u866 = u866 + u25 * u23;
                                                                        u22 = u866;
                                                                        *(float *)((t13 + 0x0)) = u22;
                                                                        t13 = 0xC0E19B0;
                                                                        t868 = ((*(int *)(((int)stk + 8))) + t15);
                                                                        t15 = ((int)stk + 4);
                                                                        *(unsigned int *)(((int)stk + 8)) = t868;
                                                                        t15 = (t15 + 0x34);
                                                                        t12 = (nlPushMatrix(t15));
                                                                        t15 = t18;
                                                                        t12 = (nlCalcPoint(t15, t19));
                                                                        t13 = 0xC0E1960;
                                                                        t15 = 0x1;
                                                                        t12 = (nlPopMatrix(t15));
                                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                                        if (t12 == 0) {
                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                            t13 = (*(short *)(((t20 << 1) + t12)));
                                                                            if ((int)t13 < 0) {
                                                                                t13 = t19;
                                                                                t12 = 0xC;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                                t898 = t13;
                                                                            } else {
                                                                                t15 = ((int)stk + 4);
                                                                                t15 = (t15 + 0x28);
                                                                                t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                            }
                                                                        } else {
                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                            t894 = (((int)stk + 4) + 0x1C);
                                                                            if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                            } else {
                                                                                t894 = (*(int *)(((int)stk + 16)));
                                                                            }
                                                                            t15 = ((int)stk + 4);
                                                                            t15 = (t15 + 0x28);
                                                                            t12 = (math_vec3_sub(t15, t19, t894));
                                                                        }
                                                                        t13 = t898;
                                                                        t17 = 0xC0620A4;
                                                                        t15 = ((int)stk + 4);
                                                                        t15 = (t15 + 0x28);
                                                                        u23 = 0.0f;
                                                                        u25 = (math_vec3_length(t15));
                                                                        if (u25 == u23) {
                                                                            t12 = 0xC05A668;
                                                                            u25 = (*(float *)((t12 + 0x0)));
                                                                        }
                                                                        t12 = (*(int *)((t21 + 0x3C)));
                                                                        u22 = u25;
                                                                        u23 = (*(float *)(((t20 << 2) + t12)));
                                                                        t15 = ((int)stk + 4);
                                                                        u25 = u23;
                                                                        u25 = (u25 / u22);
                                                                        t15 = (t15 + 0x28);
                                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                                        if (t12 == 0) {
                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                            t20 = (t20 << 1);
                                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                                t13 = ((int)stk + 4);
                                                                                t13 = (t13 + 0x28);
                                                                                t12 = 0xC;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                            } else {
                                                                                t15 = t19;
                                                                                t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                            }
                                                                        } else {
                                                                            t12 = (*(int *)((t21 + 0x20)));
                                                                            t20 = (t20 << 1);
                                                                            t932 = (((int)stk + 4) + 0x1C);
                                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                            } else {
                                                                                t932 = (*(int *)(((int)stk + 16)));
                                                                            }
                                                                            t15 = t19;
                                                                            t12 = (math_vec3_add(t15, t932, (((int)stk + 4) + 0x28)));
                                                                        }
                                                                        t13 = 0xC0E0910;
                                                                        t15 = t19;
                                                                        t12 = (nlCalcPoint(t15, t18));
                                                                        t15 = 0x1;
                                                                        *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                        t1661 = t15;
                                                                        t1662 = 0xC0620A4;
                                                                    }
                                                                    u954 = u946;
                                                                    u955 = u947;
                                                                }
                                                                u1096 = u954;
                                                                u1097 = u955;
                                                            } else {
                                                                t12 = 0x10;
                                                                t13 = (*(int *)((t21 + 0x2C)));
                                                                u23 = (*(float *)((t21 + t12)));
                                                                t12 = 0x8;
                                                                t13 = (t13 + t17);
                                                                u22 = (*(float *)((t13 + t12)));
                                                                t1662 = t17;
                                                                if (u22 > u23) {
                                                                    u1088 = u22;
                                                                    u1089 = u23;
                                                                } else {
                                                                    t18 = (*(int *)((t21 + 0x34)));
                                                                    t15 = (*(int *)((t21 + 0x30)));
                                                                    t18 = (t18 + t17);
                                                                    t12 = t20;
                                                                    t12 = (t12 << 2);
                                                                    t962 = *(int *)(((int)stk + 24));
                                                                    t19 = (*(int *)((t15 + t12)));
                                                                    t19 = (t19 << 2);
                                                                    t19 = (t19 + t962);
                                                                    t12 = t20;
                                                                    t13 = (*(int *)((t21 + 0x20)));
                                                                    t12 = (t12 << 1);
                                                                    t12 = (*(short *)((t13 + t12)));
                                                                    t12 = (t12 << 2);
                                                                    t13 = (*(int *)((t15 + t12)));
                                                                    t13 = (t13 << 2);
                                                                    *(unsigned int *)(((int)stk + 16)) = (t962 + t13);
                                                                    t15 = (*(int *)((t21 + 0x2C)));
                                                                    t15 = (t15 + t17);
                                                                    t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                    t12 = 0x71F1;
                                                                    t13 = (*(signed char *)((a4 + t12)));
                                                                    t12 = (t12 + 0x1);
                                                                    if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                        t13 = ((int)stk + 4);
                                                                        t13 = (t13 + 0x28);
                                                                        t12 = 0xC;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                    }
                                                                    t17 = 0xC06206E;
                                                                    t15 = ((int)stk + 4);
                                                                    t15 = (t15 + 0x28);
                                                                    t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                    t12 = (*(int *)((t21 + 0x38)));
                                                                    t13 = t20;
                                                                    t13 = (t13 << 2);
                                                                    u23 = 0.0f;
                                                                    u978 = *(float *)((t13 + t12));
                                                                    if (u978 != u23) {
                                                                        t12 = 0xC05A510;
                                                                        u979 = *(float *)((t12 + 0x0));
                                                                        t12 = 0x18;
                                                                        u22 = (*(float *)((t21 + t12)));
                                                                        u25 = u979;
                                                                        u25 = (u25 / (u978 * u22));
                                                                        u981 = u22;
                                                                    } else {
                                                                        u25 = 1.0f;
                                                                    }
                                                                    u22 = u981;
                                                                    if (u25 > 1.0f) {
                                                                        u25 = 1.0f;
                                                                    } else {
                                                                        t12 = 0x14;
                                                                        u23 = (*(float *)((t21 + t12)));
                                                                        if (u23 > u25) {
                                                                            u25 = (*(float *)((t21 + t12)));
                                                                        }
                                                                    }
                                                                    t15 = ((int)stk + 4);
                                                                    t15 = (t15 + 0x28);
                                                                    t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                    t13 = 0xC062050;
                                                                    t15 = t18;
                                                                    t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                    t12 = 0x1C;
                                                                    u24 = (*(float *)((t21 + t12)));
                                                                    t12 = 0xC05A64C;
                                                                    u25 = (*(float *)((t12 + 0x0)));
                                                                    t15 = (*(int *)(((int)stk + 8)));
                                                                    u22 = (*(float *)((t18 + 0x0)));
                                                                    t12 = 0x4;
                                                                    u23 = ((math_sin_angle16(t15)) * u24);
                                                                    u997 = u22;
                                                                    u997 = u997 + u25 * u23;
                                                                    u22 = u997;
                                                                    *(float *)((t18 + 0x0)) = u22;
                                                                    *(int *)((int)stk + 0) = (t18 + t12);
                                                                    t15 = (*(int *)(((int)stk + 8)));
                                                                    t15 = (t15 << 1);
                                                                    t12 = 0x8;
                                                                    t13 = (t18 + t12);
                                                                    u22 = (*(float *)((t13 + 0x0)));
                                                                    u23 = ((math_sin_angle16(t15)) * u24);
                                                                    u1002 = u22;
                                                                    u1002 = u1002 + u25 * u23;
                                                                    u22 = u1002;
                                                                    *(float *)((t13 + 0x0)) = u22;
                                                                    *(int *)((int)stk + 0) = (t18 + t12);
                                                                    t15 = (*(int *)(((int)stk + 8)));
                                                                    t1005 = t15;
                                                                    t15 = (t15 << 1);
                                                                    t15 = (t15 + t1005);
                                                                    t1006 = math_sin_angle16(t15);
                                                                    t13 = (t18 + t12);
                                                                    t15 = 0xFA4;
                                                                    u22 = (*(float *)((t13 + 0x0)));
                                                                    u23 = (t1006 * u24);
                                                                    u1008 = u22;
                                                                    u1008 = u1008 + u25 * u23;
                                                                    u22 = u1008;
                                                                    *(float *)((t13 + 0x0)) = u22;
                                                                    t13 = 0xC0E19B0;
                                                                    t1010 = ((*(int *)(((int)stk + 8))) + t15);
                                                                    t15 = ((int)stk + 4);
                                                                    *(unsigned int *)(((int)stk + 8)) = t1010;
                                                                    t15 = (t15 + 0x34);
                                                                    t12 = (nlPushMatrix(t15));
                                                                    t15 = t18;
                                                                    t12 = (nlCalcPoint(t15, t19));
                                                                    t13 = 0xC0E1960;
                                                                    t15 = 0x1;
                                                                    t12 = (nlPopMatrix(t15));
                                                                    t12 = (*(signed char *)((t21 + 0x2)));
                                                                    if (t12 == 0) {
                                                                        t12 = (*(int *)((t21 + 0x20)));
                                                                        t13 = (*(short *)(((t20 << 1) + t12)));
                                                                        if ((int)t13 < 0) {
                                                                            t13 = t19;
                                                                            t12 = 0xC;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                            t1040 = t13;
                                                                        } else {
                                                                            t15 = ((int)stk + 4);
                                                                            t15 = (t15 + 0x28);
                                                                            t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                        }
                                                                    } else {
                                                                        t12 = (*(int *)((t21 + 0x20)));
                                                                        t1036 = (((int)stk + 4) + 0x1C);
                                                                        if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                        } else {
                                                                            t1036 = (*(int *)(((int)stk + 16)));
                                                                        }
                                                                        t15 = ((int)stk + 4);
                                                                        t15 = (t15 + 0x28);
                                                                        t12 = (math_vec3_sub(t15, t19, t1036));
                                                                    }
                                                                    t13 = t1040;
                                                                    t17 = 0xC0620A4;
                                                                    t15 = ((int)stk + 4);
                                                                    t15 = (t15 + 0x28);
                                                                    u23 = 0.0f;
                                                                    u25 = (math_vec3_length(t15));
                                                                    if (u25 == u23) {
                                                                        t12 = 0xC05A668;
                                                                        u25 = (*(float *)((t12 + 0x0)));
                                                                    }
                                                                    t12 = (*(int *)((t21 + 0x3C)));
                                                                    u22 = u25;
                                                                    u23 = (*(float *)(((t20 << 2) + t12)));
                                                                    t15 = ((int)stk + 4);
                                                                    u25 = u23;
                                                                    u25 = (u25 / u22);
                                                                    t15 = (t15 + 0x28);
                                                                    t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                    t12 = (*(signed char *)((t21 + 0x2)));
                                                                    if (t12 == 0) {
                                                                        t12 = (*(int *)((t21 + 0x20)));
                                                                        t20 = (t20 << 1);
                                                                        if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                            t13 = ((int)stk + 4);
                                                                            t13 = (t13 + 0x28);
                                                                            t12 = 0xC;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                        } else {
                                                                            t15 = t19;
                                                                            t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                        }
                                                                    } else {
                                                                        t12 = (*(int *)((t21 + 0x20)));
                                                                        t20 = (t20 << 1);
                                                                        t1074 = (((int)stk + 4) + 0x1C);
                                                                        if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                        } else {
                                                                            t1074 = (*(int *)(((int)stk + 16)));
                                                                        }
                                                                        t15 = t19;
                                                                        t12 = (math_vec3_add(t15, t1074, (((int)stk + 4) + 0x28)));
                                                                    }
                                                                    t13 = 0xC0E0910;
                                                                    t15 = t19;
                                                                    t12 = (nlCalcPoint(t15, t18));
                                                                    t15 = 0x1;
                                                                    *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                    t1661 = t15;
                                                                    t1662 = 0xC0620A4;
                                                                }
                                                                u1096 = u1088;
                                                                u1097 = u1089;
                                                            }
                                                            u1238 = u1096;
                                                            u1239 = u1097;
                                                        } else {
                                                            t12 = (*(int *)((t21 + 0x38)));
                                                            t13 = t20;
                                                            t13 = (t13 << 2);
                                                            u23 = (*(float *)((t13 + t12)));
                                                            t12 = 0x10;
                                                            u22 = (*(float *)((t21 + t12)));
                                                            t1662 = t17;
                                                            if (u23 > u22) {
                                                                u1230 = u22;
                                                                u1231 = u23;
                                                            } else {
                                                                t18 = (*(int *)((t21 + 0x34)));
                                                                t15 = (*(int *)((t21 + 0x30)));
                                                                t18 = (t18 + t17);
                                                                t12 = t20;
                                                                t12 = (t12 << 2);
                                                                t1104 = *(int *)(((int)stk + 24));
                                                                t19 = (*(int *)((t15 + t12)));
                                                                t19 = (t19 << 2);
                                                                t19 = (t19 + t1104);
                                                                t12 = t20;
                                                                t13 = (*(int *)((t21 + 0x20)));
                                                                t12 = (t12 << 1);
                                                                t12 = (*(short *)((t13 + t12)));
                                                                t12 = (t12 << 2);
                                                                t13 = (*(int *)((t15 + t12)));
                                                                t13 = (t13 << 2);
                                                                *(unsigned int *)(((int)stk + 16)) = (t1104 + t13);
                                                                t15 = (*(int *)((t21 + 0x2C)));
                                                                t15 = (t15 + t17);
                                                                t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                                t12 = 0x71F1;
                                                                t13 = (*(signed char *)((a4 + t12)));
                                                                t12 = (t12 + 0x1);
                                                                if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                    t13 = ((int)stk + 4);
                                                                    t13 = (t13 + 0x28);
                                                                    t12 = 0xC;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                                }
                                                                t17 = 0xC06206E;
                                                                t15 = ((int)stk + 4);
                                                                t15 = (t15 + 0x28);
                                                                t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                                t12 = (*(int *)((t21 + 0x38)));
                                                                t13 = t20;
                                                                t13 = (t13 << 2);
                                                                u23 = 0.0f;
                                                                u1120 = *(float *)((t13 + t12));
                                                                if (u1120 != u23) {
                                                                    t12 = 0xC05A510;
                                                                    u1121 = *(float *)((t12 + 0x0));
                                                                    t12 = 0x18;
                                                                    u22 = (*(float *)((t21 + t12)));
                                                                    u25 = u1121;
                                                                    u25 = (u25 / (u1120 * u22));
                                                                    u1123 = u22;
                                                                } else {
                                                                    u25 = 1.0f;
                                                                }
                                                                u22 = u1123;
                                                                if (u25 > 1.0f) {
                                                                    u25 = 1.0f;
                                                                } else {
                                                                    t12 = 0x14;
                                                                    u23 = (*(float *)((t21 + t12)));
                                                                    if (u23 > u25) {
                                                                        u25 = (*(float *)((t21 + t12)));
                                                                    }
                                                                }
                                                                t15 = ((int)stk + 4);
                                                                t15 = (t15 + 0x28);
                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                t13 = 0xC062050;
                                                                t15 = t18;
                                                                t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                                t12 = 0x1C;
                                                                u24 = (*(float *)((t21 + t12)));
                                                                t12 = 0xC05A64C;
                                                                u25 = (*(float *)((t12 + 0x0)));
                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                u22 = (*(float *)((t18 + 0x0)));
                                                                t12 = 0x4;
                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                u1139 = u22;
                                                                u1139 = u1139 + u25 * u23;
                                                                u22 = u1139;
                                                                *(float *)((t18 + 0x0)) = u22;
                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                t15 = (t15 << 1);
                                                                t12 = 0x8;
                                                                t13 = (t18 + t12);
                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                u23 = ((math_sin_angle16(t15)) * u24);
                                                                u1144 = u22;
                                                                u1144 = u1144 + u25 * u23;
                                                                u22 = u1144;
                                                                *(float *)((t13 + 0x0)) = u22;
                                                                *(int *)((int)stk + 0) = (t18 + t12);
                                                                t15 = (*(int *)(((int)stk + 8)));
                                                                t1147 = t15;
                                                                t15 = (t15 << 1);
                                                                t15 = (t15 + t1147);
                                                                t1148 = math_sin_angle16(t15);
                                                                t13 = (t18 + t12);
                                                                t15 = 0xFA4;
                                                                u22 = (*(float *)((t13 + 0x0)));
                                                                u23 = (t1148 * u24);
                                                                u1150 = u22;
                                                                u1150 = u1150 + u25 * u23;
                                                                u22 = u1150;
                                                                *(float *)((t13 + 0x0)) = u22;
                                                                t13 = 0xC0E19B0;
                                                                t1152 = ((*(int *)(((int)stk + 8))) + t15);
                                                                t15 = ((int)stk + 4);
                                                                *(unsigned int *)(((int)stk + 8)) = t1152;
                                                                t15 = (t15 + 0x34);
                                                                t12 = (nlPushMatrix(t15));
                                                                t15 = t18;
                                                                t12 = (nlCalcPoint(t15, t19));
                                                                t13 = 0xC0E1960;
                                                                t15 = 0x1;
                                                                t12 = (nlPopMatrix(t15));
                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                if (t12 == 0) {
                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                    t13 = (*(short *)(((t20 << 1) + t12)));
                                                                    if ((int)t13 < 0) {
                                                                        t13 = t19;
                                                                        t12 = 0xC;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                        t1182 = t13;
                                                                    } else {
                                                                        t15 = ((int)stk + 4);
                                                                        t15 = (t15 + 0x28);
                                                                        t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                    }
                                                                } else {
                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                    t1178 = (((int)stk + 4) + 0x1C);
                                                                    if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                    } else {
                                                                        t1178 = (*(int *)(((int)stk + 16)));
                                                                    }
                                                                    t15 = ((int)stk + 4);
                                                                    t15 = (t15 + 0x28);
                                                                    t12 = (math_vec3_sub(t15, t19, t1178));
                                                                }
                                                                t13 = t1182;
                                                                t17 = 0xC0620A4;
                                                                t15 = ((int)stk + 4);
                                                                t15 = (t15 + 0x28);
                                                                u23 = 0.0f;
                                                                u25 = (math_vec3_length(t15));
                                                                if (u25 == u23) {
                                                                    t12 = 0xC05A668;
                                                                    u25 = (*(float *)((t12 + 0x0)));
                                                                }
                                                                t12 = (*(int *)((t21 + 0x3C)));
                                                                u22 = u25;
                                                                u23 = (*(float *)(((t20 << 2) + t12)));
                                                                t15 = ((int)stk + 4);
                                                                u25 = u23;
                                                                u25 = (u25 / u22);
                                                                t15 = (t15 + 0x28);
                                                                t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                                t12 = (*(signed char *)((t21 + 0x2)));
                                                                if (t12 == 0) {
                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                    t20 = (t20 << 1);
                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                        t13 = ((int)stk + 4);
                                                                        t13 = (t13 + 0x28);
                                                                        t12 = 0xC;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                    } else {
                                                                        t15 = t19;
                                                                        t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                    }
                                                                } else {
                                                                    t12 = (*(int *)((t21 + 0x20)));
                                                                    t20 = (t20 << 1);
                                                                    t1216 = (((int)stk + 4) + 0x1C);
                                                                    if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                    } else {
                                                                        t1216 = (*(int *)(((int)stk + 16)));
                                                                    }
                                                                    t15 = t19;
                                                                    t12 = (math_vec3_add(t15, t1216, (((int)stk + 4) + 0x28)));
                                                                }
                                                                t13 = 0xC0E0910;
                                                                t15 = t19;
                                                                t12 = (nlCalcPoint(t15, t18));
                                                                t15 = 0x1;
                                                                *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                                t1661 = t15;
                                                                t1662 = 0xC0620A4;
                                                            }
                                                            u1238 = u1230;
                                                            u1239 = u1231;
                                                        }
                                                        u1380 = u1238;
                                                        u1381 = u1239;
                                                    } else {
                                                        t12 = (*(int *)((t21 + 0x38)));
                                                        t13 = t20;
                                                        t13 = (t13 << 2);
                                                        u23 = (*(float *)((t13 + t12)));
                                                        t12 = 0x10;
                                                        u22 = (*(float *)((t21 + t12)));
                                                        t1662 = t17;
                                                        if (u22 > u23) {
                                                            u1372 = u22;
                                                            u1373 = u23;
                                                        } else {
                                                            t18 = (*(int *)((t21 + 0x34)));
                                                            t15 = (*(int *)((t21 + 0x30)));
                                                            t18 = (t18 + t17);
                                                            t12 = t20;
                                                            t12 = (t12 << 2);
                                                            t1246 = *(int *)(((int)stk + 24));
                                                            t19 = (*(int *)((t15 + t12)));
                                                            t19 = (t19 << 2);
                                                            t19 = (t19 + t1246);
                                                            t12 = t20;
                                                            t13 = (*(int *)((t21 + 0x20)));
                                                            t12 = (t12 << 1);
                                                            t12 = (*(short *)((t13 + t12)));
                                                            t12 = (t12 << 2);
                                                            t13 = (*(int *)((t15 + t12)));
                                                            t13 = (t13 << 2);
                                                            *(unsigned int *)(((int)stk + 16)) = (t1246 + t13);
                                                            t15 = (*(int *)((t21 + 0x2C)));
                                                            t15 = (t15 + t17);
                                                            t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                            t12 = 0x71F1;
                                                            t13 = (*(signed char *)((a4 + t12)));
                                                            t12 = (t12 + 0x1);
                                                            if (t13 != (*(signed char *)((a4 + t12)))) {
                                                                t13 = ((int)stk + 4);
                                                                t13 = (t13 + 0x28);
                                                                t12 = 0xC;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                            }
                                                            t17 = 0xC06206E;
                                                            t15 = ((int)stk + 4);
                                                            t15 = (t15 + 0x28);
                                                            t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                            t12 = (*(int *)((t21 + 0x38)));
                                                            t13 = t20;
                                                            t13 = (t13 << 2);
                                                            u23 = 0.0f;
                                                            u1262 = *(float *)((t13 + t12));
                                                            if (u1262 != u23) {
                                                                t12 = 0xC05A510;
                                                                u1263 = *(float *)((t12 + 0x0));
                                                                t12 = 0x18;
                                                                u22 = (*(float *)((t21 + t12)));
                                                                u25 = u1263;
                                                                u25 = (u25 / (u1262 * u22));
                                                                u1265 = u22;
                                                            } else {
                                                                u25 = 1.0f;
                                                            }
                                                            u22 = u1265;
                                                            if (u25 > 1.0f) {
                                                                u25 = 1.0f;
                                                            } else {
                                                                t12 = 0x14;
                                                                u23 = (*(float *)((t21 + t12)));
                                                                if (u23 > u25) {
                                                                    u25 = (*(float *)((t21 + t12)));
                                                                }
                                                            }
                                                            t15 = ((int)stk + 4);
                                                            t15 = (t15 + 0x28);
                                                            t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                            t13 = 0xC062050;
                                                            t15 = t18;
                                                            t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                            t12 = 0x1C;
                                                            u24 = (*(float *)((t21 + t12)));
                                                            t12 = 0xC05A64C;
                                                            u25 = (*(float *)((t12 + 0x0)));
                                                            t15 = (*(int *)(((int)stk + 8)));
                                                            u22 = (*(float *)((t18 + 0x0)));
                                                            t12 = 0x4;
                                                            u23 = ((math_sin_angle16(t15)) * u24);
                                                            u1281 = u22;
                                                            u1281 = u1281 + u25 * u23;
                                                            u22 = u1281;
                                                            *(float *)((t18 + 0x0)) = u22;
                                                            *(int *)((int)stk + 0) = (t18 + t12);
                                                            t15 = (*(int *)(((int)stk + 8)));
                                                            t15 = (t15 << 1);
                                                            t12 = 0x8;
                                                            t13 = (t18 + t12);
                                                            u22 = (*(float *)((t13 + 0x0)));
                                                            u23 = ((math_sin_angle16(t15)) * u24);
                                                            u1286 = u22;
                                                            u1286 = u1286 + u25 * u23;
                                                            u22 = u1286;
                                                            *(float *)((t13 + 0x0)) = u22;
                                                            *(int *)((int)stk + 0) = (t18 + t12);
                                                            t15 = (*(int *)(((int)stk + 8)));
                                                            t1289 = t15;
                                                            t15 = (t15 << 1);
                                                            t15 = (t15 + t1289);
                                                            t1290 = math_sin_angle16(t15);
                                                            t13 = (t18 + t12);
                                                            t15 = 0xFA4;
                                                            u22 = (*(float *)((t13 + 0x0)));
                                                            u23 = (t1290 * u24);
                                                            u1292 = u22;
                                                            u1292 = u1292 + u25 * u23;
                                                            u22 = u1292;
                                                            *(float *)((t13 + 0x0)) = u22;
                                                            t13 = 0xC0E19B0;
                                                            t1294 = ((*(int *)(((int)stk + 8))) + t15);
                                                            t15 = ((int)stk + 4);
                                                            *(unsigned int *)(((int)stk + 8)) = t1294;
                                                            t15 = (t15 + 0x34);
                                                            t12 = (nlPushMatrix(t15));
                                                            t15 = t18;
                                                            t12 = (nlCalcPoint(t15, t19));
                                                            t13 = 0xC0E1960;
                                                            t15 = 0x1;
                                                            t12 = (nlPopMatrix(t15));
                                                            t12 = (*(signed char *)((t21 + 0x2)));
                                                            if (t12 == 0) {
                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                t13 = (*(short *)(((t20 << 1) + t12)));
                                                                if ((int)t13 < 0) {
                                                                    t13 = t19;
                                                                    t12 = 0xC;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                    t1324 = t13;
                                                                } else {
                                                                    t15 = ((int)stk + 4);
                                                                    t15 = (t15 + 0x28);
                                                                    t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                                }
                                                            } else {
                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                t1320 = (((int)stk + 4) + 0x1C);
                                                                if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                                } else {
                                                                    t1320 = (*(int *)(((int)stk + 16)));
                                                                }
                                                                t15 = ((int)stk + 4);
                                                                t15 = (t15 + 0x28);
                                                                t12 = (math_vec3_sub(t15, t19, t1320));
                                                            }
                                                            t13 = t1324;
                                                            t17 = 0xC0620A4;
                                                            t15 = ((int)stk + 4);
                                                            t15 = (t15 + 0x28);
                                                            u23 = 0.0f;
                                                            u25 = (math_vec3_length(t15));
                                                            if (u25 == u23) {
                                                                t12 = 0xC05A668;
                                                                u25 = (*(float *)((t12 + 0x0)));
                                                            }
                                                            t12 = (*(int *)((t21 + 0x3C)));
                                                            u22 = u25;
                                                            u23 = (*(float *)(((t20 << 2) + t12)));
                                                            t15 = ((int)stk + 4);
                                                            u25 = u23;
                                                            u25 = (u25 / u22);
                                                            t15 = (t15 + 0x28);
                                                            t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                            t12 = (*(signed char *)((t21 + 0x2)));
                                                            if (t12 == 0) {
                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                t20 = (t20 << 1);
                                                                if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                    t13 = ((int)stk + 4);
                                                                    t13 = (t13 + 0x28);
                                                                    t12 = 0xC;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                                } else {
                                                                    t15 = t19;
                                                                    t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                                }
                                                            } else {
                                                                t12 = (*(int *)((t21 + 0x20)));
                                                                t20 = (t20 << 1);
                                                                t1358 = (((int)stk + 4) + 0x1C);
                                                                if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                } else {
                                                                    t1358 = (*(int *)(((int)stk + 16)));
                                                                }
                                                                t15 = t19;
                                                                t12 = (math_vec3_add(t15, t1358, (((int)stk + 4) + 0x28)));
                                                            }
                                                            t13 = 0xC0E0910;
                                                            t15 = t19;
                                                            t12 = (nlCalcPoint(t15, t18));
                                                            t15 = 0x1;
                                                            *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                            t1661 = t15;
                                                            t1662 = 0xC0620A4;
                                                        }
                                                        u1380 = u1372;
                                                        u1381 = u1373;
                                                    }
                                                    u1522 = u1380;
                                                    u1523 = u1381;
                                                } else {
                                                    t12 = 0x10;
                                                    t13 = (*(int *)((t21 + 0x2C)));
                                                    u23 = (*(float *)((t21 + t12)));
                                                    t12 = 0x4;
                                                    t13 = (t13 + t17);
                                                    u22 = (*(float *)((t13 + t12)));
                                                    t1662 = t17;
                                                    if (u22 > u23) {
                                                        u1514 = u22;
                                                        u1515 = u23;
                                                    } else {
                                                        t18 = (*(int *)((t21 + 0x34)));
                                                        t15 = (*(int *)((t21 + 0x30)));
                                                        t18 = (t18 + t17);
                                                        t12 = t20;
                                                        t12 = (t12 << 2);
                                                        t1388 = *(int *)(((int)stk + 24));
                                                        t19 = (*(int *)((t15 + t12)));
                                                        t19 = (t19 << 2);
                                                        t19 = (t19 + t1388);
                                                        t12 = t20;
                                                        t13 = (*(int *)((t21 + 0x20)));
                                                        t12 = (t12 << 1);
                                                        t12 = (*(short *)((t13 + t12)));
                                                        t12 = (t12 << 2);
                                                        t13 = (*(int *)((t15 + t12)));
                                                        t13 = (t13 << 2);
                                                        *(unsigned int *)(((int)stk + 16)) = (t1388 + t13);
                                                        t15 = (*(int *)((t21 + 0x2C)));
                                                        t15 = (t15 + t17);
                                                        t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                        t12 = 0x71F1;
                                                        t13 = (*(signed char *)((a4 + t12)));
                                                        t12 = (t12 + 0x1);
                                                        if (t13 != (*(signed char *)((a4 + t12)))) {
                                                            t13 = ((int)stk + 4);
                                                            t13 = (t13 + 0x28);
                                                            t12 = 0xC;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                        }
                                                        t17 = 0xC06206E;
                                                        t15 = ((int)stk + 4);
                                                        t15 = (t15 + 0x28);
                                                        t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                        t12 = (*(int *)((t21 + 0x38)));
                                                        t13 = t20;
                                                        t13 = (t13 << 2);
                                                        u23 = 0.0f;
                                                        u1404 = *(float *)((t13 + t12));
                                                        if (u1404 != u23) {
                                                            t12 = 0xC05A510;
                                                            u1405 = *(float *)((t12 + 0x0));
                                                            t12 = 0x18;
                                                            u22 = (*(float *)((t21 + t12)));
                                                            u25 = u1405;
                                                            u25 = (u25 / (u1404 * u22));
                                                            u1407 = u22;
                                                        } else {
                                                            u25 = 1.0f;
                                                        }
                                                        u22 = u1407;
                                                        if (u25 > 1.0f) {
                                                            u25 = 1.0f;
                                                        } else {
                                                            t12 = 0x14;
                                                            u23 = (*(float *)((t21 + t12)));
                                                            if (u23 > u25) {
                                                                u25 = (*(float *)((t21 + t12)));
                                                            }
                                                        }
                                                        t15 = ((int)stk + 4);
                                                        t15 = (t15 + 0x28);
                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                        t13 = 0xC062050;
                                                        t15 = t18;
                                                        t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                        t12 = 0x1C;
                                                        u24 = (*(float *)((t21 + t12)));
                                                        t12 = 0xC05A64C;
                                                        u25 = (*(float *)((t12 + 0x0)));
                                                        t15 = (*(int *)(((int)stk + 8)));
                                                        u22 = (*(float *)((t18 + 0x0)));
                                                        t12 = 0x4;
                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                        u1423 = u22;
                                                        u1423 = u1423 + u25 * u23;
                                                        u22 = u1423;
                                                        *(float *)((t18 + 0x0)) = u22;
                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                        t15 = (*(int *)(((int)stk + 8)));
                                                        t15 = (t15 << 1);
                                                        t12 = 0x8;
                                                        t13 = (t18 + t12);
                                                        u22 = (*(float *)((t13 + 0x0)));
                                                        u23 = ((math_sin_angle16(t15)) * u24);
                                                        u1428 = u22;
                                                        u1428 = u1428 + u25 * u23;
                                                        u22 = u1428;
                                                        *(float *)((t13 + 0x0)) = u22;
                                                        *(int *)((int)stk + 0) = (t18 + t12);
                                                        t15 = (*(int *)(((int)stk + 8)));
                                                        t1431 = t15;
                                                        t15 = (t15 << 1);
                                                        t15 = (t15 + t1431);
                                                        t1432 = math_sin_angle16(t15);
                                                        t13 = (t18 + t12);
                                                        t15 = 0xFA4;
                                                        u22 = (*(float *)((t13 + 0x0)));
                                                        u23 = (t1432 * u24);
                                                        u1434 = u22;
                                                        u1434 = u1434 + u25 * u23;
                                                        u22 = u1434;
                                                        *(float *)((t13 + 0x0)) = u22;
                                                        t13 = 0xC0E19B0;
                                                        t1436 = ((*(int *)(((int)stk + 8))) + t15);
                                                        t15 = ((int)stk + 4);
                                                        *(unsigned int *)(((int)stk + 8)) = t1436;
                                                        t15 = (t15 + 0x34);
                                                        t12 = (nlPushMatrix(t15));
                                                        t15 = t18;
                                                        t12 = (nlCalcPoint(t15, t19));
                                                        t13 = 0xC0E1960;
                                                        t15 = 0x1;
                                                        t12 = (nlPopMatrix(t15));
                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                        if (t12 == 0) {
                                                            t12 = (*(int *)((t21 + 0x20)));
                                                            t13 = (*(short *)(((t20 << 1) + t12)));
                                                            if ((int)t13 < 0) {
                                                                t13 = t19;
                                                                t12 = 0xC;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                                t1466 = t13;
                                                            } else {
                                                                t15 = ((int)stk + 4);
                                                                t15 = (t15 + 0x28);
                                                                t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                            }
                                                        } else {
                                                            t12 = (*(int *)((t21 + 0x20)));
                                                            t1462 = (((int)stk + 4) + 0x1C);
                                                            if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                            } else {
                                                                t1462 = (*(int *)(((int)stk + 16)));
                                                            }
                                                            t15 = ((int)stk + 4);
                                                            t15 = (t15 + 0x28);
                                                            t12 = (math_vec3_sub(t15, t19, t1462));
                                                        }
                                                        t13 = t1466;
                                                        t17 = 0xC0620A4;
                                                        t15 = ((int)stk + 4);
                                                        t15 = (t15 + 0x28);
                                                        u23 = 0.0f;
                                                        u25 = (math_vec3_length(t15));
                                                        if (u25 == u23) {
                                                            t12 = 0xC05A668;
                                                            u25 = (*(float *)((t12 + 0x0)));
                                                        }
                                                        t12 = (*(int *)((t21 + 0x3C)));
                                                        u22 = u25;
                                                        u23 = (*(float *)(((t20 << 2) + t12)));
                                                        t15 = ((int)stk + 4);
                                                        u25 = u23;
                                                        u25 = (u25 / u22);
                                                        t15 = (t15 + 0x28);
                                                        t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                        t12 = (*(signed char *)((t21 + 0x2)));
                                                        if (t12 == 0) {
                                                            t12 = (*(int *)((t21 + 0x20)));
                                                            t20 = (t20 << 1);
                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                                t13 = ((int)stk + 4);
                                                                t13 = (t13 + 0x28);
                                                                t12 = 0xC;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                            } else {
                                                                t15 = t19;
                                                                t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                            }
                                                        } else {
                                                            t12 = (*(int *)((t21 + 0x20)));
                                                            t20 = (t20 << 1);
                                                            t1500 = (((int)stk + 4) + 0x1C);
                                                            if ((int)(*(short *)((t20 + t12))) < 0) {
                                                            } else {
                                                                t1500 = (*(int *)(((int)stk + 16)));
                                                            }
                                                            t15 = t19;
                                                            t12 = (math_vec3_add(t15, t1500, (((int)stk + 4) + 0x28)));
                                                        }
                                                        t13 = 0xC0E0910;
                                                        t15 = t19;
                                                        t12 = (nlCalcPoint(t15, t18));
                                                        t15 = 0x1;
                                                        *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                        t1661 = t15;
                                                        t1662 = 0xC0620A4;
                                                    }
                                                    u1522 = u1514;
                                                    u1523 = u1515;
                                                }
                                                u1663 = u1522;
                                                u1664 = u1523;
                                            } else {
                                                t12 = 0x10;
                                                u23 = (*(float *)((t21 + t12)));
                                                t12 = 0x4;
                                                u22 = (*(float *)((((*(int *)((t21 + 0x2C))) + t17) + t12)));
                                                t1662 = t17;
                                                if (u23 > u22) {
                                                    u1655 = u22;
                                                    u1656 = u23;
                                                } else {
                                                    t18 = (*(int *)((t21 + 0x34)));
                                                    t15 = (*(int *)((t21 + 0x30)));
                                                    t18 = (t18 + t17);
                                                    t12 = t20;
                                                    t12 = (t12 << 2);
                                                    t1530 = *(int *)(((int)stk + 24));
                                                    t19 = (*(int *)((t15 + t12)));
                                                    t19 = (t19 << 2);
                                                    t19 = (t19 + t1530);
                                                    t12 = t20;
                                                    t13 = (*(int *)((t21 + 0x20)));
                                                    t12 = (t12 << 1);
                                                    t12 = (*(short *)((t13 + t12)));
                                                    t12 = (t12 << 2);
                                                    t13 = (*(int *)((t15 + t12)));
                                                    t13 = (t13 << 2);
                                                    *(unsigned int *)(((int)stk + 16)) = (t1530 + t13);
                                                    t15 = (*(int *)((t21 + 0x2C)));
                                                    t15 = (t15 + t17);
                                                    t12 = (nlCalcPoint(t15, (((int)stk + 4) + 0x28)));
                                                    t12 = 0x71F1;
                                                    t13 = (*(signed char *)((a4 + t12)));
                                                    t12 = (t12 + 0x1);
                                                    if (t13 != (*(signed char *)((a4 + t12)))) {
                                                        t13 = ((int)stk + 4);
                                                        t13 = (t13 + 0x28);
                                                        t12 = 0xC;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t13); }
                                                    }
                                                    t17 = 0xC06206E;
                                                    t15 = ((int)stk + 4);
                                                    t15 = (t15 + 0x28);
                                                    t12 = (math_vec3_sub(t15, (((int)stk + 4) + 0x28), t18));
                                                    t12 = (*(int *)((t21 + 0x38)));
                                                    t13 = t20;
                                                    t13 = (t13 << 2);
                                                    u23 = 0.0f;
                                                    u1546 = *(float *)((t13 + t12));
                                                    if (u1546 != u23) {
                                                        t12 = 0xC05A510;
                                                        u1547 = *(float *)((t12 + 0x0));
                                                        t12 = 0x18;
                                                        u22 = (*(float *)((t21 + t12)));
                                                        u25 = u1547;
                                                        u25 = (u25 / (u1546 * u22));
                                                        u1549 = u22;
                                                    } else {
                                                        u25 = 1.0f;
                                                    }
                                                    u22 = u1549;
                                                    if (u25 > 1.0f) {
                                                        u25 = 1.0f;
                                                    } else {
                                                        t12 = 0x14;
                                                        u23 = (*(float *)((t21 + t12)));
                                                        if (u23 > u25) {
                                                            u25 = (*(float *)((t21 + t12)));
                                                        }
                                                    }
                                                    t15 = ((int)stk + 4);
                                                    t15 = (t15 + 0x28);
                                                    t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                    t13 = 0xC062050;
                                                    t15 = t18;
                                                    t12 = (math_vec3_add(t15, t18, (((int)stk + 4) + 0x28)));
                                                    t12 = 0x1C;
                                                    u24 = (*(float *)((t21 + t12)));
                                                    t12 = 0xC05A64C;
                                                    u25 = (*(float *)((t12 + 0x0)));
                                                    t15 = (*(int *)(((int)stk + 8)));
                                                    u22 = (*(float *)((t18 + 0x0)));
                                                    t12 = 0x4;
                                                    u23 = ((math_sin_angle16(t15)) * u24);
                                                    u1565 = u22;
                                                    u1565 = u1565 + u25 * u23;
                                                    u22 = u1565;
                                                    *(float *)((t18 + 0x0)) = u22;
                                                    *(int *)((int)stk + 0) = (t18 + t12);
                                                    t15 = (*(int *)(((int)stk + 8)));
                                                    t15 = (t15 << 1);
                                                    t12 = 0x8;
                                                    t13 = (t18 + t12);
                                                    u22 = (*(float *)((t13 + 0x0)));
                                                    u23 = ((math_sin_angle16(t15)) * u24);
                                                    u1570 = u22;
                                                    u1570 = u1570 + u25 * u23;
                                                    u22 = u1570;
                                                    *(float *)((t13 + 0x0)) = u22;
                                                    *(int *)((int)stk + 0) = (t18 + t12);
                                                    t15 = (*(int *)(((int)stk + 8)));
                                                    t1573 = t15;
                                                    t15 = (t15 << 1);
                                                    t15 = (t15 + t1573);
                                                    t1574 = math_sin_angle16(t15);
                                                    t13 = (t18 + t12);
                                                    t15 = 0xFA4;
                                                    u22 = (*(float *)((t13 + 0x0)));
                                                    u23 = (t1574 * u24);
                                                    u1576 = u22;
                                                    u1576 = u1576 + u25 * u23;
                                                    u22 = u1576;
                                                    *(float *)((t13 + 0x0)) = u22;
                                                    t13 = 0xC0E19B0;
                                                    t1578 = ((*(int *)(((int)stk + 8))) + t15);
                                                    t15 = ((int)stk + 4);
                                                    *(unsigned int *)(((int)stk + 8)) = t1578;
                                                    t15 = (t15 + 0x34);
                                                    t12 = (nlPushMatrix(t15));
                                                    t15 = t18;
                                                    t12 = (nlCalcPoint(t15, t19));
                                                    t13 = 0xC0E1960;
                                                    t15 = 0x1;
                                                    t12 = (nlPopMatrix(t15));
                                                    t12 = (*(signed char *)((t21 + 0x2)));
                                                    if (t12 == 0) {
                                                        t12 = (*(int *)((t21 + 0x20)));
                                                        t13 = (*(short *)(((t20 << 1) + t12)));
                                                        if ((int)t13 < 0) {
                                                            t13 = t19;
                                                            t12 = 0xC;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(t13); }
                                                            t1608 = t13;
                                                        } else {
                                                            t15 = ((int)stk + 4);
                                                            t15 = (t15 + 0x28);
                                                            t12 = (math_vec3_sub(t15, t19, (*(int *)(((int)stk + 16)))));
                                                        }
                                                    } else {
                                                        t12 = (*(int *)((t21 + 0x20)));
                                                        t1604 = (((int)stk + 4) + 0x1C);
                                                        if ((int)(*(short *)(((t20 << 1) + t12))) < 0) {
                                                        } else {
                                                            t1604 = (*(int *)(((int)stk + 16)));
                                                        }
                                                        t15 = ((int)stk + 4);
                                                        t15 = (t15 + 0x28);
                                                        t12 = (math_vec3_sub(t15, t19, t1604));
                                                    }
                                                    t13 = t1608;
                                                    t17 = 0xC0620A4;
                                                    t15 = ((int)stk + 4);
                                                    t15 = (t15 + 0x28);
                                                    u23 = 0.0f;
                                                    u25 = (math_vec3_length(t15));
                                                    if (u25 == u23) {
                                                        t12 = 0xC05A668;
                                                        u25 = (*(float *)((t12 + 0x0)));
                                                    }
                                                    t12 = (*(int *)((t21 + 0x3C)));
                                                    u22 = u25;
                                                    u23 = (*(float *)(((t20 << 2) + t12)));
                                                    t15 = ((int)stk + 4);
                                                    u25 = u23;
                                                    u25 = (u25 / u22);
                                                    t15 = (t15 + 0x28);
                                                    t12 = (math_vec3_mul_xyz(t15, u25, u25, u25));
                                                    t12 = (*(signed char *)((t21 + 0x2)));
                                                    if (t12 == 0) {
                                                        t12 = (*(int *)((t21 + 0x20)));
                                                        t20 = (t20 << 1);
                                                        if ((int)(*(short *)((t20 + t12))) < 0) {
                                                            t13 = ((int)stk + 4);
                                                            t13 = (t13 + 0x28);
                                                            t12 = 0xC;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t13); }
                                                        } else {
                                                            t15 = t19;
                                                            t12 = (math_vec3_add(t15, (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x28)));
                                                        }
                                                    } else {
                                                        t12 = (*(int *)((t21 + 0x20)));
                                                        t20 = (t20 << 1);
                                                        t1642 = (((int)stk + 4) + 0x1C);
                                                        if ((int)(*(short *)((t20 + t12))) < 0) {
                                                        } else {
                                                            t1642 = (*(int *)(((int)stk + 16)));
                                                        }
                                                        t15 = t19;
                                                        t12 = (math_vec3_add(t15, t1642, (((int)stk + 4) + 0x28)));
                                                    }
                                                    t13 = 0xC0E0910;
                                                    t15 = t19;
                                                    t12 = (nlCalcPoint(t15, t18));
                                                    t15 = 0x1;
                                                    *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) | t15);
                                                    t1661 = t15;
                                                    t1662 = 0xC0620A4;
                                                }
                                                u1663 = u1655;
                                                u1664 = u1656;
                                            }
                                            u22 = u1663;
                                            u23 = u1664;
                                            t13 = (*(int *)(((int)stk + 4)));
                                            t15 = t1661;
                                            t17 = t1662;
                                            t13 = (t13 + 0x1);
                                            *(unsigned int *)(((int)stk + 4)) = t13;
                                            continue;
                                        }
                                        break;
                                    }
                                    t1668 = 0xC0E1240;
                                }
                                t1675 = t1668;
                                t1676 = t1669;
                                t1678 = t1671;
                                u1679 = u1672;
                                u1680 = u1673;
                            }
                            t1683 = t1675;
                            t1684 = t1676;
                            t1686 = t1678;
                            u1687 = u1679;
                            u1688 = u1680;
                        }
                        t1691 = t1683;
                        t1692 = t1684;
                        t1694 = t1686;
                        u1695 = u1687;
                        u1696 = u1688;
                    }
                    u22 = u1695;
                    u23 = u1696;
                    t20 = t1691;
                    t13 = t1692;
                    t15 = t1694;
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                    t13 = (*(int *)(((int)stk + 20)));
                    t13 = (t13 + 0x40);
                    *(unsigned int *)(((int)stk + 20)) = t13;
                    continue;
                }
                break;
            }
            t1700 = t12;
        }
        t1716 = t1700;
    }
    return t1716;
}

int FUN_0c026ce0(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_0 = ((*(signed char *)((v0_6 + 0x4))));
    v0_1 = ((*(signed char *)((v0_6 + 0x3))));
    R5 = (((((struct o2DC_int *)(v0_6))->v)));
    if (((*(signed char *)((v0_6 + 0x71EE))) == 0)) goto L_C026D30;
    v0_6 = ((0x637 & R5));
    v0_5 = (0x80);
    v0_7 = (0x40);
    if (((R5 & 0x40) == 0)) goto L_C026D16;
    v0_6 = ((v0_6 | v0_5));
    L_C026D16:;
    if (((v0_5 & R5) == 0)) goto L_C026D32;
    v0_6 = ((v0_6 | v0_7));
    L_C026D32:;
    *(unsigned int *)(((int)stk + 0)) = ((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x4);
    *(unsigned short *)(((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(short *)((((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362A90 + (((unsigned char)v0_1 << 2) << 1)) + 0x0)) = v0_6;
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x4) + 0x0)) = (*(short *)((((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)v0_1 << 2) << 1)) + 0x0)) = R5;
    v0_8 = *(signed char *)(((unsigned char)v0_0 + 0xC321038));
    v0_2 = (0xC321038);
    v0_3 = (v0_8);
    v0_4 = (0x0);
    v0_6 = (0x0);
    R5 = (((short)((short)(unsigned char)v0_1 * (short)0x190) + 0xC362E70));
    v0_5 = (((short)((short)(unsigned char)v0_1 * (short)0x190) + 0xC362E70));
    v0_7 = (((short)((short)(unsigned char)v0_1 * (short)0x190) + 0xC362E70));
    if (((int)(unsigned char)v0_8 <= 0)) goto L_C026DC4;
    L_C026D94:;
    v0_8 = *(signed char *)((v0_7 + 0x4));
    v0_2 = (v0_8);
    if ((v0_8 == 0)) goto L_C026DB4;
    v0_8 = *(short *)((v0_5 + 0x2));
    *(unsigned short *)((v0_5 + 0x2)) = (v0_8 - 1);
    v0_2 = ((short)(v0_8 - 1));
    if (((short)(v0_8 - 1) != 0)) goto L_C026DB4;
    *(unsigned char *)((R5 + 0x4)) = v0_6;
    *(unsigned short *)((R5 + 0x2)) = v0_6;
    *(unsigned char *)((R5 + 0x5)) = v0_6;
    *(unsigned short *)((R5 + 0x0)) = v0_6;
    *(unsigned short *)((R5 + 0x6)) = v0_6;
    v0_2 = (v0_6);
    L_C026DB4:;
    v0_8 = (int)(unsigned char)(v0_4 + 0x1) < (int)(unsigned char)v0_3;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0xA));
    v0_5 = ((v0_5 + 0xA));
    v0_7 = ((v0_7 + 0xA));
    if (v0_8) goto L_C026D94;
    L_C026DC4:;
    v0_5 = (((short)((short)(unsigned char)v0_1 * (short)0x1E0) + 0xC362AB0));
    v0_4 = (v0_6);
    if (((unsigned char)v0_3 != 0)) goto L_C026DDE;
    L_C026F24:;
    return v0_2;
    L_C026DDE:;
    v0_6 = *(short *)((v0_5 + (short)((((unsigned char)v0_4 << 1) + (unsigned char)v0_4) << 2)));
    v0_2 = ((unsigned short)v0_6);
    if (((unsigned short)v0_6 == 0)) goto L_C026E60;
    if ((v0_2 == 1)) goto L_C026EA8;
    if ((v0_2 == 2)) goto L_C026EB6;
    if ((v0_2 == 3)) goto L_C026EC4;
    if ((v0_2 == 4)) goto L_C026ED2;
    if ((v0_2 != 5)) goto L_C026E0A;
    v0_6 = FUN_0c02743c(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    L_C026F16:;
    v0_4 = ((v0_4 + 0x1));
    L_C026F18:;
    if (((unsigned char)v0_4 == (unsigned char)v0_3)) goto L_C026F24;
    goto L_C026DDE;
    L_C026E0A:;
    if ((v0_2 != 6)) goto L_C026E12;
    v0_6 = FUN_0c02754e(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E12:;
    if ((v0_2 != 8)) goto L_C026E1A;
    v0_6 = FUN_0c0275ac(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E1A:;
    if ((v0_2 != 99)) goto L_C026E22;
    v0_6 = FUN_0c02760a(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E22:;
    if ((v0_2 == 0xFC)) goto L_C026E70;
    if ((v0_2 == 0xFD)) goto L_C026E7E;
    v0_6 = (((v0_2 == 0xFE)));
    if ((v0_6)) goto L_C026E8C;
    if ((v0_2 == 0xFF)) goto L_C026E9A;
    goto L_C026F18;
    L_C026E9A:;
    v0_6 = FUN_0c027168(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E8C:;
    v0_6 = FUN_0c0270c6(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E7E:;
    v0_6 = FUN_0c027028(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026E70:;
    v0_6 = FUN_0c026f78(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026ED2:;
    v0_6 = FUN_0c0273c0(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026EC4:;
    v0_6 = FUN_0c027336(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026EB6:;
    v0_6 = FUN_0c0272a0(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C026F18;
    goto L_C026F16;
    L_C026EA8:;
    v0_6 = FUN_0c0271fe(v0_1, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 != 0)) goto L_C026F16;
    goto L_C026F18;
    L_C026E60:;
    v0_6 = FUN_0c026f36(v0_1, v0_0, v0_4);
    v0_2 = (v0_6);
    if ((v0_6 != 0)) goto L_C026F16;
    goto L_C026F18;
    L_C026D30:;
    v0_6 = (R5);
    goto L_C026D32;
}

int vmu_step_write_vmgame(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_6 = a5;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)0xC361BA0)->v));
    v0_7 = *(signed char *)0xC361BC0;
    v0_8 = (v0_7);
    v0_1 = (0x1);
    v0_9 = (((((struct o8_int *)0xC361BA0)->v)));
    v0_10 = (0xC361BAC);
    v0_0 = (0xC361BC0);
    v0_2 = (0xC361BA4);
    v0_4 = (0xC361A60);
    v0_3 = (0xC361BA8);
    if ((v0_7 == 0)) goto L_C0118E8;
    if ((v0_8 == 1)) goto L_C0118FA;
    if ((v0_8 == 2)) goto L_C011950;
    if ((v0_8 == 3)) goto L_C01198C;
    if ((v0_8 != 4)) goto L_C0118AE;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011A5A;
    if ((v0_9 != (*(int *)(((int)stk + 0))))) goto L_C011A24;
    v0_3 = (vmu_write_vmgame_file((*(int *)((((short)((((v0_9 << 2) + v0_9) << 2) << 1) + v0_4) + 0x0))), v0_6)) != 0;
    if (v0_3) goto L_C011A5A;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C011A24:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x5;
    L_C011A5A:;
    v0_8 = (0xFFFFFFFF);
    L_C011A5C:;
    return v0_8;
    L_C0118AE:;
    if ((v0_8 != 5)) goto L_C0118B6;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011A5A;
    vmu_lcd_set_idle_image();
    vmu_lcd_refresh((*(int *)((v0_10 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    (((struct o0_uint *)0xC361BA0)->v) = 0x0;
    v0_0 = *(int *)((v0_10 + 0x0));
    v0_8 = ((*(int *)((0xC361A68 + (short)((((v0_0 << 2) + v0_0) << 2) << 1)))));
    goto L_C011A5C;
    L_C0118B6:;
    goto L_C011A5A;
    L_C01198C:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011A5A;
    if ((v0_9 != (*(int *)(((int)stk + 0))))) goto L_C0119D2;
    v0_5 = (0x80);
    v0_6 = (((short)((((v0_9 << 2) + v0_9) << 2) << 1) + v0_4));
    if (((int)(*(int *)((((short)((((v0_9 << 2) + v0_9) << 2) << 1) + v0_4) + 0x20))) < (int)0x80)) goto L_C0119D2;
    if (((int)(*(int *)((v0_6 + 0x24))) >= (int)v0_5)) goto L_C0119D2;
    v0_3 = (vmu_defrag_disk((*(int *)((((short)((((v0_9 << 2) + v0_9) << 2) << 1) + v0_4) + 0x0))))) != 0;
    if (v0_3) goto L_C011A5A;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C0119D2:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011A5A;
    L_C011950:;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C01195A;
    goto L_C011A5A;
    L_C01195A:;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_4);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_4) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C011A5A;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C011986:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011A5A;
    L_C0118FA:;
    if (((*(int *)((v0_3 + 0x0))) == (*(int *)((v0_10 + 0x0))))) goto L_C011986;
    if (((*(int *)((v0_3 + 0x0))) == -1)) goto L_C01194A;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C011912;
    goto L_C011A5A;
    L_C011912:;
    v0_1 = *(int *)((v0_3 + 0x0));
    v0_1 = (buUnmount((*(int *)(((short)((((v0_1 << 2) + v0_1) << 2) << 1) + 0xC361A60))))) == 0;
    if (v0_1) goto L_C011932;
    goto L_C011A5A;
    L_C011932:;
    v0_1 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)(((short)((((v0_1 << 2) + v0_1) << 2) << 1) + 0xC361A64)) = 0x12;
    *(unsigned int *)((v0_3 + 0x0)) = 0xFFFFFFFF;
    L_C01194A:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011A5A;
    L_C0118E8:;
    (((struct o0_uint *)0xC361BA0)->v) = v0_1;
    *(unsigned int *)((v0_10 + 0x0)) = v0_5;
    vmu_lcd_set_busy_image();
    vmu_lcd_refresh((*(int *)((v0_10 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    goto L_C0118FA;
}

int ui_draw_continue_countdown(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R11;
    register int R12;
    register float F0;
    register float F3;
    register float F6;
    register float F7;
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
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x2));
    v0_5 = (v0_3);
    v0_0 = (v0_1);
    v0_2 = (0x5A);
    if ((v0_3 == 0)) goto L_C0D62A0;
    if ((v0_5 == 1)) goto L_C0D62B2;
    L_C0D642E:;
    return v0_5;
    L_C0D62B2:;
    v0_1 = (0x9);
    if (((*(signed char *)0xC7F31B9) == 0)) goto L_C0D62D0;
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) >= (int)v0_1)) goto L_C0D62D0;
    (((struct o4A_uchar *)(v0_0))->v) = v0_1;
    (((struct o4B_uchar *)(v0_0))->v) = v0_2;
    L_C0D62D0:;
    v0_3 = (0xC7F302C);
    if (((*(signed char *)0xC7F3080) != 0)) goto L_C0D62F6;
    v0_5 = (0x42);
    if (((*(signed char *)((v0_3 + 0x42))) == 0)) goto L_C0D62E6;
    goto L_C0D642E;
    L_C0D62E6:;
    v0_4 = ((v0_0 + 0x4A));
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) > 0)) goto L_C0D6300;
    if (((int)(*(signed char *)((v0_4 + 0x1))) > 0)) goto L_C0D6300;
    L_C0D62F6:;
    *(unsigned char *)((v0_0 + 0x1)) = 0x4;
    *(unsigned char *)((v0_0 + 0x2)) = 0x0;
    v0_5 = (0x0);
    goto L_C0D642E;
    L_C0D6300:;
    if (((*(signed char *)((v0_0 + 0x4E))) != 0)) goto L_C0D6322;
    v0_6 = *(signed char *)((v0_0 + 0x4B));
    (((struct o4B_uchar *)(v0_0))->v) = (v0_6 - 1);
    v0_5 = (0x4B);
    if (((int)(signed char)(v0_6 - 1) >= 0)) goto L_C0D6322;
    *(unsigned char *)((v0_0 + v0_5)) = v0_2;
    (((struct o4A_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x4A) + 0x0))) - 1);
    L_C0D6322:;
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) >= (int)0x7)) goto L_C0D634E;
    v0_5 = *(signed char *)((v0_0 + 0x9));
    if ((((*(int *)((0xC7F31F8 + (signed char)((((v0_5 << 2) << 1) + v0_5) << 2)))) & 0x604) == 0)) goto L_C0D634E;
    (((struct o4B_uchar *)(v0_0))->v) = 0x1;
    L_C0D634E:;
    if (((*(signed char *)((v0_3 + 0x42))) != 0)) goto L_C0D640E;
    if (((*(signed char *)((v0_3 + 0x43))) != 0)) goto L_C0D640E;
    w0_1 = (16.0f);
    w0_0 = (1.0f);
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) > (int)v0_1)) goto L_C0D63DA;
    if (((*(signed char *)((v0_0 + 0x4E))) != 0)) goto L_C0D63DA;
    v0_1 = (*(signed char *)(((v0_0 + 0x4A) + 0x0)));
    *(int *)((int)stk + 4) = v0_1;
    v0_5 = (*(signed char *)((v0_0 + 0x9))) != 0;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    if (v0_5) goto L_C0D63A4;
    *(int *)((int)stk + 0) = 0xC155094;
    *(unsigned int *)(((int)stk + 0)) = 0xC155094;
    L_C0D63A8:;
    sprintf(0xC7F36B8, *(int *)((int)stk + 0), *(int *)((int)stk + 4));      /* "CONTINUE? %1d": the countdown digit */
    w0_2 = FUN_0c0d5bc0();
    w0_3 = (float)(((short)(*(signed char *)((v0_0 + 0x9))) * (short)0x13) + 0x1);
    ui_draw_text_stub(0xC7F36B8, 0x0, (w0_3 * w0_1), (w0_2 + w0_1), w0_0, w0_0);
    L_C0D640E:;
    v0_0 = FUN_0c0d708c((*(signed char *)((v0_0 + 0x9))), 0x0);
    v0_5 = (v0_0);
    if ((v0_0 == 0)) goto L_C0D642E;
    return snd_play_side_se(0x0, 0x43);
    L_C0D63A4:;
    *(int *)((int)stk + 0) = 0xC1550A4;
    *(unsigned int *)(((int)stk + 0)) = 0xC1550A4;
    goto L_C0D63A8;
    L_C0D63DA:;
    w0_3 = FUN_0c0d5bc0();
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)(((int)stk + 8)) = v0_1;
    w0_2 = (float)(((short)v0_1 * (short)0x13) + 0x1);
    w0_2 = ((w0_2 * w0_1));
    w0_1 = ((w0_3 + w0_1));
    FPUL_ = ((((short)v0_1 * (short)0x13) + 0x1));
    if (((*(signed char *)(((int)stk + 8))) != 0)) goto L_C0D6402;
    v0_1 = (0xC1550BC);
    L_C0D6404:;
    ui_draw_text_stub(v0_1, 0x0, w0_2, w0_1, w0_0, w0_0);
    goto L_C0D640E;
    L_C0D6402:;
    v0_1 = (0xC1550C8);
    goto L_C0D6404;
    L_C0D62A0:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    (((struct o4A_uchar *)(v0_0))->v) = 0xA;
    (((struct o4B_uchar *)(v0_0))->v) = v0_2;
    goto L_C0D62B2;
}

int FUN_0c025d72(int a4, int a5)
{
    int stk[1];

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_0 = (v0_0);
    L_C025F26:;
    if ((v0_0 == 0)) goto L_C025F2E;
    v0_1 = ((*(int *)(((int)stk + 0))));
    L_C025F1C:;
    if ((v0_1 == 0)) goto L_C025F24;
    if (!((v0_0 != v0_1))) goto L_C025F1A;
    R0 = (0x107);
    if (((*(signed char *)((v0_0 + 0x107))) == 0)) goto L_C025D98;
    goto L_C025F1A;
    L_C025F1A:;
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    goto L_C025F1C;
    L_C025D98:;
    if (((*(signed char *)((v0_1 + R0))) == 0)) goto L_C025DA2;
    goto L_C025F1A;
    L_C025DA2:;
    if (((*(signed char *)((v0_0 + 0x3))) == 2)) goto L_C025DC8;
    if (((*(signed char *)((v0_1 + 0x3))) == 2)) goto L_C025DC8;
    if (((*(signed char *)((v0_0 + 0x3))) == 3)) goto L_C025DC8;
    if (((*(signed char *)((v0_1 + 0x3))) == 3)) goto L_C025DC8;
    v0_2 = *(signed char *)((v0_1 + 0x3));
    R0 = (v0_2);
    if (((*(signed char *)((v0_0 + 0x3))) != v0_2)) goto L_C025DC8;
    goto L_C025F1A;
    L_C025DC8:;
    v0_2 = *(signed char *)((v0_0 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025EAC;
    if ((R0 == 1)) goto L_C025E54;
    if ((R0 == 2)) goto L_C025DDC;
    goto L_C025F1A;
    L_C025DDC:;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025E3C;
    if ((R0 == 1)) goto L_C025E20;
    if ((R0 == 2)) goto L_C025DF0;
    goto L_C025F1A;
    L_C025DF0:;
    v0_2 = FUN_0c02259e(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if (!((v0_2 == 0))) goto L_C025F14;
    goto L_C025F1A;
    L_C025F14:;
    R0 = ((FUN_0c025958(v0_0, v0_1)));
    goto L_C025F1A;
    L_C025E20:;
    v0_2 = FUN_0c0226da(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025E38;
    goto L_C025F1A;
    L_C025E38:;
    goto L_C025F14;
    L_C025E3C:;
    v0_2 = FUN_0c02280e(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C025F14;
    goto L_C025F1A;
    L_C025E54:;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025E94;
    if ((R0 == 1)) goto L_C025E7C;
    if ((R0 != 2)) goto L_C025F1A;
    v0_2 = FUN_0c0226da(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025E7C:;
    v0_2 = FUN_0c022634(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025E94:;
    v0_2 = FUN_0c0228ac(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025EAC:;
    v0_2 = *(signed char *)((v0_1 + 0x248));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F00;
    if ((R0 == 1)) goto L_C025ED4;
    if ((R0 != 2)) goto L_C025F1A;
    v0_2 = FUN_0c02280e(v0_1, v0_0, (0x24C + v0_1), (0x24C + v0_0));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025ED4:;
    v0_2 = FUN_0c0228ac(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025F00:;
    v0_2 = FUN_0c02279a(v0_0, v0_1, (0x24C + v0_0), (0x24C + v0_1));
    R0 = (v0_2);
    if ((v0_2 == 0)) goto L_C025F1A;
    goto L_C025F14;
    L_C025F24:;
    v0_0 = ((*(int *)((v0_0 + 0x18))));
    goto L_C025F26;
    L_C025F2E:;
    return R0;
}

int save_reset_all_data(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o7_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o4_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o1_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o8_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o14_uchar *)0xC7F4750)->v) = 0x1;
    (((struct o15_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o16_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o17_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o18_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o19_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1A_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1B_uchar *)0xC7F4750)->v) = 0x1;
    (((struct o1C_uchar *)0xC7F4750)->v) = 0x1;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F476D + t0) + 0x0)) = 0x2;
        *(unsigned char *)(((0xC7F476D + t0) + 0x1)) = 0x3;
        *(unsigned char *)(((0xC7F476D + t0) + 0x2)) = 0x0;
        *(unsigned char *)(((0xC7F476D + t0) + 0x3)) = 0x1;
        *(unsigned char *)(((0xC7F476D + t0) + 0x4)) = 0x4;
        *(unsigned char *)(((0xC7F476D + t0) + 0x5)) = 0x5;
        *(unsigned char *)(((0xC7F476D + t0) + 0x6)) = 0x4;
        t1 = (t1 + 0x1);
        *(unsigned char *)(((0xC7F476D + t0) + 0x7)) = 0x5;
        t0 = (t0 + 0x8);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    (((struct o0_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o1_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o2_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o4_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o5_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o6_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o7_uchar *)0xC7F4750)->v) = 0x0;
    (((struct o8_uchar *)0xC7F4750)->v) = 0x0;
    (((struct oA_ushort *)0xC7F4750)->v) = 0x0;
    (((struct oC_uint *)0xC7F4750)->v) = 0x0;
    (((struct o10_uint *)0xC7F4750)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F3083 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F308D + t1) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F308D + t1) + 0x1)) = 0x41;
        t0 = (t0 + 0x1);
        *(unsigned char *)(((0xC7F308D + t1) + 0x2)) = 0x50;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x0)) = 0x1E;
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)) = 0x0;
        t1 = (signed char)((t0 << 1) + (t0 << 2));
        t0 = (t0 + 0x1);
        *(unsigned short *)(((t1 + 0xC7F30B6) + 0x4)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F314C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F3156 + t1) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F3156 + t1) + 0x1)) = 0x41;
        t0 = (t0 + 0x1);
        *(unsigned char *)(((0xC7F3156 + t1) + 0x2)) = 0x50;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned short *)(((0xC7F317E + t1) + 0x0)) = 0x2;
        t1 = (t1 + 0x2);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return 0x50;
}

int FUN_0c025706(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t3 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t3 << 1) + t3) + 0xC33EC20) + 0x1)))) {
            break;
        }
        t2 = t0;
        t3 = *(signed char *)0xC7F3051;
        t2 = (t2 << 1);
        t2 = (t2 + t0);
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t1 = (*(int *)(((t3 << 2) + 0xC33EB60)));
        t2 = (t2 + (*(int *)(((t3 << 2) + 0xC33EB20))));
        t1 = (t1 + (t0 << 1));
        t3 = ((int (*)(int, int, int, float))(hit_update_object_list))(t1, t2, ((((struct o8_int *)0xC7E4074)->v)), f4);
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, ((((struct o4_int *)0xC7E4074)->v)));
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, ((((struct o0_int *)0xC7E4074)->v)));
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, 0xC7E40C4);
        t0 = (t0 + 0x1);
    }
    t0 = 0x0;
    t3 = t1;
    t1 = t2;
    for (;;) {
        t2 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t2 << 1) + t2) + 0xC33EC20) + 0x0)))) {
            break;
        }
        t2 = *(signed char *)0xC7F3051;
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + t0);
        t1 = (t1 << 2);
        t3 = (*(int *)(((t2 << 2) + 0xC33EAE0)));
        t1 = (t1 + (*(int *)(((t2 << 2) + 0xC33EAA0))));
        t3 = (t3 + (t0 << 1));
        t2 = ((int (*)(int, int, int, float, float, float, float, float, float, float))(FUN_0c0255ae))(t3, t1, ((((struct o8_int *)0xC7E4074)->v)), f4, f5, f6, f7, f8, f9, f10);
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, ((((struct o4_int *)0xC7E4074)->v)));
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, ((((struct o0_int *)0xC7E4074)->v)));
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, 0xC7E40C4);
        t0 = (t0 + 0x1);
    }
    t2 = t0;
    t0 = 0x0;
    t3 = t1;
    for (;;) {
        t4 = *(signed char *)0xC7F3051;
        t1 = *(signed char *)(((((t4 << 1) + t4) + 0xC33EC20) + 0x2));
        if ((int)t0 >= (int)t1) {
            break;
        }
        t2 = t0;
        t4 = *(signed char *)0xC7F3051;
        t2 = (t2 << 2);
        t2 = (t2 << 2);
        t2 = (t2 + (*(int *)(((t4 << 2) + 0xC33EBA0))));
        t3 = (*(int *)((0xC33EBE0 + (t4 << 2))));
        t3 = (t3 + (t0 << 1));
        t4 = ((int (*)(int, int, int, int))(FUN_0c02565a))(t3, t2, ((((struct o8_int *)0xC7E4074)->v)), a7);
        t4 = ((int (*)(int, int, int))(FUN_0c02565a))(t3, t2, ((((struct o4_int *)0xC7E4074)->v)));
        t4 = ((int (*)(int, int, int))(FUN_0c02565a))(t3, t2, ((((struct o0_int *)0xC7E4074)->v)));
        t4 = ((int (*)(int, int, int))(FUN_0c02565a))(t3, t2, 0xC7E40C4);
        t0 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c044408(int a4, int a5)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t2;
    register int t5;
    register int t6;
    register int t7;
    register int t34;
    register int t15;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC14A61C;
    *(unsigned int *)(((int)stk + 8)) = 0xC14A618;
    t0 = *(signed char *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4);
    t1 = ((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4);
    t3 = 0xC7E40C4;
    t4 = 0xC14A61A;
    for (;;) {
        if ((int)(*(signed char *)(((int)stk + 0))) < (int)0x2) {
            t1 = 0xC14A618;
            t1 = (obj_create(0x6, 0x1, (*(signed char *)(((*(signed char *)(((int)stk + 0))) + t1))), 0x0));
            t7 = t1;
            if (t1 != 0) {
                *(unsigned char *)((t7 + 0x0)) = 0x1;
                t1 = (*(signed char *)(((int)stk + 4)));
                *(unsigned char *)((t7 + 0x3)) = t1;
                t1 = 0x1;
                *(unsigned char *)((t7 + 0x1)) = t1;
                t1 = (*(signed char *)(((int)stk + 12)));
                *(unsigned char *)((t7 + 0x4)) = t1;
                t1 = (*(signed char *)(((int)stk + 12)));
                if (t1 == 0) {
                    t1 = 0x200;
                    *(unsigned short *)((t7 + 0x6)) = t1;
                    t1 = 0x5C;
                    *(float *)((t7 + t1)) = 1.0f;
                    t1 = 0x64;
                    *(float *)((t7 + t1)) = 1.0f;
                    t1 = 0x68;
                    *(float *)((t7 + t1)) = 1.0f;
                    t1 = 0x60;
                    *(float *)((t7 + t1)) = 1.0f;
                    t15 = 0xC;
                } else {
                    t1 = 0x600;
                    *(unsigned short *)((t7 + 0x6)) = t1;
                    t1 = 0x60;
                    *(float *)((t7 + t1)) = 0.0f;
                    t1 = 0x68;
                    *(float *)((t7 + t1)) = 0.5f;
                    t1 = 0x64;
                    *(float *)((t7 + t1)) = 0.0f;
                    t1 = 0x5C;
                    *(float *)((t7 + t1)) = 0.98999995f;
                    t15 = 0x1E;
                }
                t1 = 0xEC;
                *(unsigned short *)((t7 + t1)) = t15;
                t1 = (*(signed char *)(((int)stk + 4)));
                if (t1 != 0) {
                    t1 = 0x4;
                } else {
                    t1 = 0x2;
                }
                *(unsigned char *)((t7 + 0x5)) = t1;
                t1 = 0x71F1;
                *(unsigned int *)((t7 + 0x10)) = 0xC0445AA;
                t3 = (*(int *)(((int)stk + 16)));
                t2 = (*(signed char *)((t3 + t1)));
                t3 = (t3 + 0x300);
                t2 = ((short)t2 * (short)0xDC0);
                t2 = (short)t2;
                t2 = (t2 + t3);
                *(unsigned int *)(((int)stk + 28)) = t2;
                t3 = (*(int *)(((int)stk + 20)));
                *(unsigned int *)(((int)stk + 24)) = t3;
                t5 = 0x0;
                for (;;) {
                    t3 = (signed char)t5;
                    t2 = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0)));
                    if ((int)t3 >= (int)t2) {
                        break;
                    }
                    t6 = (signed char)t5;
                    t6 = (t6 << 2);
                    t6 = (t6 + (0x2E0 + t7));
                    t6 = (*(int *)((t6 + 0x0)));
                    *(unsigned char *)((t6 + 0x0)) = 0x1;
                    t1 = 0x0;
                    *(unsigned short *)((t6 + 0x2)) = t1;
                    t1 = (FUN_0c06231c(t6, 0xC4CFA68, ((*(signed char *)((t4 + 0x0))) + t5)));
                    t1 = 0x0;
                    *(unsigned char *)((t6 + 0x1)) = t1;
                    t1 = 0x90;
                    *(unsigned int *)((t6 + t1)) = 0x0;
                    t1 = (*(int *)(((int)stk + 24)));
                    t3 = (*(int *)(((int)stk + 28)));
                    t1 = (FUN_0c0e09f0((t6 + 0x50), (((short)(*(signed char *)(((signed char)t5 + t1))) * (short)0xB0) + t3), 0x0, 0x0, *(int *)((int)stk + 0)));
                    t5 = (t5 + 0x1);
                }
                t34 = t2;
            }
            t2 = t34;
            t3 = (*(signed char *)(((int)stk + 0)));
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x1);
            *(unsigned char *)(((int)stk + 0)) = t3;
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x7);
            t2 = (*(int *)(((int)stk + 8)));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t2;
            continue;
        }
        break;
    }
    return t1;
}

int FUN_0c08e704(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;

    t6 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x0));
    t7 = (unsigned char)t6;
    if ((unsigned char)t6 != 23) {
        if ((int)((((struct o71D4_short *)(a4))->v)) < 0) {
            (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
            (((struct o71DD_uchar *)(a4))->v) = 0x1;
            t6 = 0x71DD;
        } else {
            t8 = *(signed char *)((a4 + 0x71BC));
            if ((t8 != 0) && (t8 != 1)) {
                if (t8 != 2) {
                    if (t8 != 3) {
                    } else {
                        (((struct o71DD_uchar *)(a4))->v) = 0xD;
                    }
                } else {
                    t8 = *(signed char *)((a4 + 0x71DD));
                    if ((unsigned int)t8 < (unsigned int)0x19) {
                        switch ((t8 << 1)) {
                            case 0:
                            case 8:
                            case 16:
                            case 18:
                            case 20:
                            case 22:
                            case 24:
                            case 26:
                            case 28:
                            case 30:
                            case 34:
                            case 36:
                            {
                                if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4))) == 0) {
                                    (((struct o71DD_uchar *)(a4))->v) = 0x1;
                                } else {
                                    (((struct o71DD_uchar *)(a4))->v) = 0x2;
                                }
                            }
                                break;
                            case 2:
                            case 4:
                            case 6:
                            case 10:
                            case 12:
                            case 14:
                            case 32:
                            case 38:
                            case 40:
                            case 42:
                            case 44:
                            case 46:
                            {
                            }
                                break;
                            default:
                            {
                                (((struct o71DD_uchar *)(a4))->v) = 0x3;
                            }
                                break;
                        }
                    }
                }
            } else {
                if (((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xB))) == 3) && (t6 = *(signed char *)((a4 + 0x71BB)), t6 == 9)) {
                    (((struct o71DD_uchar *)(a4))->v) = 0x11;
                }
            }
            if ((*(signed char *)((a4 + 0x71BB))) == 7) {
                (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                (((struct o71DD_uchar *)(a4))->v) = 0x3;
            }
            if ((*(signed char *)((a4 + 0x71BB))) == 34) {
                (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                (((struct o71DD_uchar *)(a4))->v) = 0x13;
            }
            if ((*(signed char *)((a4 + 0x71BB))) == 36) {
                (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                (((struct o71DD_uchar *)(a4))->v) = 0x14;
            }
            if (((*(signed char *)((a4 + 0x71BB))) == 27) && ((t1 = *(signed char *)((a4 + 0x71DE)), t1 == 11) || ((t2 = *(signed char *)((a4 + 0x71BB)), t2 == 27) && (t3 = *(signed char *)((a4 + 0x71DE)), t3 == 7)))) {
                (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                (((struct o71DD_uchar *)(a4))->v) = 0x1;
                t6 = 0x71DD;
            } else {
                if (((unsigned char)(*(signed char *)((0x11 + ((((struct oF8_int *)(a4))->v))))) & 0xE0) == 0x80) {
                    (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                    (((struct o71DD_uchar *)(a4))->v) = 0x7;
                    t1 = 0x71DD;
                } else {
                    t2 = 0x7214;
                    if ((*(signed char *)((a4 + 0x7214))) == 0) {
                        t3 = 0xC1507A8;
                        if (((*(signed char *)((a4 + 0x71DF))) == 0) && (t4 = *(signed char *)((a4 + 0x71DD)), t5 = *(signed char *)((t4 + 0xC1507A8)), t5 != 0)) {
                        } else {
                            (((struct o7211_uchar *)(a4))->v) = 0x7;
                            (((struct o7213_uchar *)(a4))->v) = 0x6;
                            (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
                            (((struct o71DD_uchar *)(a4))->v) = 0x2;
                            t3 = 0x71DD;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                }
                t6 = t1;
            }
        }
        t7 = t6;
    }
    return t7;
}

int FUN_0c04c0ea(void)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)0xC3673EE = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)0xC3673EE) >= (int)0x2) {
            break;
        }
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned int *)((t2 + 0xC)) = 0x0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        t0 = 0x0;
        *(unsigned short *)((t2 + 0x10)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        t0 = 0x258;
        *(unsigned short *)((t2 + 0x14)) = t0;
        t0 = 0x70;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned short *)((t2 + t0)) = 0x0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        t0 = 0x0;
        *(unsigned short *)((t2 + 0x16)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned char *)((t2 + 0x0)) = t0;
        t1 = (*(signed char *)0xC3673EE);
        t1 = (unsigned char)t1;
        t1 = ((short)t1 * (short)0x254);
        t1 = (short)t1;
        t1 = (t1 + 0xC366F40);
        *(unsigned char *)((t1 + 0x1)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned char *)((t2 + 0x2)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned char *)((t2 + 0x3)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t0 = 0x24;
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned char *)((t2 + t0)) = 0x0;
        t0 = 0x25;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned char *)((t2 + t0)) = 0x0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        t0 = 0x0;
        *(unsigned char *)((t2 + 0x4)) = t0;
        t0 = 0x38;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned short *)((t2 + t0)) = 0x0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        t0 = 0x1;
        *(unsigned short *)((t2 + 0x6)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (unsigned char)t2;
        t2 = ((short)t2 * (short)0x254);
        t2 = (short)t2;
        t2 = (t2 + 0xC366F40);
        *(unsigned short *)((t2 + 0x8)) = t0;
        t2 = (*(signed char *)0xC3673EE);
        t2 = (t2 + 0x1);
        *(unsigned char *)0xC3673EE = t2;
    }
    *(unsigned int *)0xC366FAC = 0xC7EB394;
    *(unsigned int *)0xC367200 = 0xC7E40C4;
    return 0x2C0;
}

int FUN_0c0cea90(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(short *)0xC361BFC;
    if (((unsigned short)t2 & 16) != 0) {
        *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) - 1);
        if (((signed char)a7 == 0) && (t0 = *(signed char *)(((signed char)a6 + 0xC7F2EE4)), (unsigned char)t0 == 3)) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) - 1);
        }
        if (((unsigned char)(*(signed char *)(((signed char)a6 + 0xC7F2EE4))) & 128) != 0) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = (a4 + 0xFF);
        }
    } else {
        if (((unsigned short)t2 & 32) != 0) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) + 0x1);
            if (((signed char)a7 == 0) && (t1 = *(signed char *)(((signed char)a6 + 0xC7F2EE4)), (unsigned char)t1 == 3)) {
                *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) + 0x1);
            }
            if ((int)(unsigned char)(*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) > (int)((signed char)a4 - 1)) {
                *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = 0x0;
            }
        }
    }
    t0 = *(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0));
    if ((int)(unsigned char)t0 < (int)((signed char)a4 - 2)) {
        t1 = *(short *)0xC361BFC;
        if ((((unsigned short)t1 & 0xF0) != 64) && ((0x4 & (unsigned short)t1) == 0)) {
            t1 = *(short *)0xC361BFC;
            if (((0xF0 & (unsigned short)t1) == 0x80) || ((0x2 & (unsigned short)t1) != 0)) {
                *(unsigned char *)(((0xC49491C + (unsigned char)t0) + 0x0)) = ((*(signed char *)(((0xC49491C + (unsigned char)t0) + 0x0))) + 0x1);
                if ((int)(*(signed char *)(((0xC49491C + (unsigned char)t0) + 0x0))) > (int)((*(signed char *)((((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 1) + a5) + 0x17))) - 1)) {
                    *(unsigned char *)(((0xC49491C + (unsigned char)t0) + 0x0)) = 0x0;
                }
            }
        } else {
            *(unsigned char *)(((0xC49491C + (unsigned char)t0) + 0x0)) = ((*(signed char *)(((0xC49491C + (unsigned char)t0) + 0x0))) - 1);
            if ((int)(*(signed char *)(((0xC49491C + (unsigned char)t0) + 0x0))) < 0) {
                *(unsigned char *)(((0xC49491C + (unsigned char)t0) + 0x0)) = ((*(signed char *)((((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 1) + a5) + 0x17))) - 1);
            }
        }
    }
    return dbg_print_at(0xC1535A0, ((((struct o4_float *)0xC0CECD8)->v)), ((float)(*(signed char *)((((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 1) + a5) + 0x15))) * ((((struct o0_float *)0xC0CECD8)->v))));
}

int vmu_unmount_current(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((((struct o0_int *)0xC361BA4)->v)) == 0) {
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)((((short)((((t1 << 2) + t1) << 2) << 1) + 0xC361A60) + 0x4));
            if ((t3 == 18) && (t0 = *(int *)((((short)((((t1 << 2) + t1) << 2) << 1) + 0xC361A60) + 0x8)), t0 == 0xFFFF0000)) {
                t4 = (((struct o4_int *)0xC361BA4)->v);
                t5 = t4;
                if (t4 != -1) {
                    t2 = buUnmount((*(int *)((((short)((((t5 << 2) + t5) << 2) << 1) + 0xC361A60) + 0x0))));
                    if (t2 == 0) {
                        break;
                    }
                    t1 = (t1 + 0x1);
                    if ((int)t1 >= (int)0x8) {
                        return t2;
                    }
                    continue;
                }
                t5 = t1;
                t5 = (t5 << 2);
                t5 = (t5 + t1);
                t5 = (t5 << 2);
                t5 = (t5 << 1);
                t5 = (short)t5;
                t5 = (t5 + 0xC361A60);
                t4 = buMountDisk((*(int *)((t5 + 0x0))), 0xC352640, ((((*(int *)((t5 + 0xC))) << 8) << 1) + 0x20));
                if (t4 == 0) {
                    (((struct o0_uint *)0xC361BA4)->v) = 0x1;
                    return t4;
                }
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x8) {
                    return t4;
                }
                continue;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                return t3;
            }
        }
        t0 = (((struct o4_int *)0xC361BA4)->v);
        *(unsigned int *)((((short)((((t0 << 2) + t0) << 2) << 1) + 0xC361A60) + 0x4)) = 0x12;
        (((struct o4_uint *)0xC361BA4)->v) = 0xFFFFFFFF;
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d78fa(void)
{
    int stk[1];
    register int t7;
    register int t5;
    register int t6;
    int t10;
    int t16;
    int t23;
    int t28;
    register int t38;

    if ((*(signed char *)0xC7F473B) == 0) {
        if (((*(signed char *)0xC7F4738) == 1) && ((t5 = (((struct o0_int *)0xC361BF0)->v), t5 == 0) || (t6 = (((struct o14_int *)0xC361BF0)->v), t6 == 0))) {
            t7 = *(signed char *)0xC7F472D;
            (((struct o3_uchar *)0xC7F4738)->v) = t7;
            if (t7 == 1) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
                return 0x14;
            }
            (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            return 0x14;
        }
        *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC7F4738);
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 0x10) == 0) && (t10 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t10 & 0x10) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) - 1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x1;
            if ((int)(*(signed char *)0xC7F4738) < 0) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x5;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t16 = *(signed char *)0xC7F4739, t16 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            }
        }
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 32) == 0) && (t23 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t23 & 32) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) + 0x1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x2;
            if ((int)(*(signed char *)0xC7F4738) > (int)0x5) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t28 = *(signed char *)0xC7F4739, t28 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x4;
            }
        }
        if ((*(signed char *)(((int)stk + 0))) == (*(signed char *)0xC7F4738)) {
            (((struct o3_uchar *)0xC7F4738)->v) = 0x0;
            t38 = 0x17;
        } else {
            t38 = snd_play_side_se(0x0, 0x4B);
            *(unsigned int *)0xC494B0C = 0xE10;
        }
        return t38;
    }
    return 0x17;
}

int FUN_0c040938(int a4)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register float u50;
    register float u21;
    register int t0;
    register int t1;
    register float u6;
    register float u42;
    register float u34;

    *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + a4) + 0x4);
    t2 = ((0x2E0 + a4) + 0x4);
    t3 = a4;
    t4 = 0x0;
    t5 = 0x1;
    for (;;) {
        t7 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t7 + 0x4);
        t8 = *(int *)((((t7 + 0x4) - 4) + 0x0));
        t46 = t0;
        t47 = t1;
        t48 = t2;
        t49 = t3;
        u50 = u6;
        if (((((struct o1C_float *)(t8))->v)) != 0.0f) {
            t4 = (t4 + 0x1);
            if (((((struct o40_float *)(t8))->v)) != 0.0f) {
                (((struct o40_float *)(t8))->v) = (((((struct o40_float *)(t8))->v)) - 1.0f);
                t46 = t0;
                t47 = t1;
                t48 = t2;
                t49 = t3;
                u42 = u6;
            } else {
                t1 = 0xC062050;
                t3 = t8;
                *(unsigned char *)((t8 + 0x0)) = 0x1;
                t3 = (t3 + 0x4);
                math_vec3_add(t3, (t8 + 0x4), (t8 + 0x28));
                t2 = t8;
                t2 = (t2 + 0x38);
                (((struct o2C_float *)(t8))->v) = (((((struct o2C_float *)(t8))->v)) + (*(float *)((t2 + 0x0))));
                t2 = (*(int *)((t8 + 0x34)));
                if ((float)t2 == 0.0f) {
                    (((struct o44_float *)(t8))->v) = (((((struct o44_float *)(t8))->v)) - 0.099999994f);
                    u6 = ((((struct o48_float *)(t8))->v));
                    u6 = (u6 - 0.099999994f);
                    (((struct o48_float *)(t8))->v) = u6;
                    (((struct o4C_float *)(t8))->v) = (((((struct o4C_float *)(t8))->v)) - 0.099999994f);
                    u6 = ((((struct o1C_float *)(t8))->v));
                    u6 = (u6 - 0.099999994f);
                    (((struct o1C_float *)(t8))->v) = u6;
                    u21 = (((struct o20_float *)(t8))->v);
                    (((struct o20_float *)(t8))->v) = (u21 - 0.099999994f);
                    t48 = t2;
                    if (!((u21 - 0.099999994f) > 0.0f)) {
                        t2 = 0xC0E6FE8;
                        t0 = t8;
                        t1 = 0xC149AE0;
                        t0 = (t0 + 0x1C);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = t8;
                        t1 = 0xC149AE0;
                        t0 = (t0 + 0x44);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        *(unsigned char *)((t8 + 0x0)) = 0x0;
                        t46 = t0;
                        t47 = t1;
                        t48 = 0xC0E6FE8;
                    }
                    u34 = u6;
                } else {
                    t2 = (*(int *)((t8 + 0x34)));
                    t2 = (t2 - 1);
                    *(unsigned int *)((t8 + 0x34)) = t2;
                    t48 = t2;
                }
                u42 = u34;
            }
            u50 = u42;
        }
        u6 = u50;
        t0 = t46;
        t5 = (t5 + 0x1);
        t1 = t47;
        t2 = t48;
        t3 = t49;
        if ((int)t5 >= (int)0x5) {
            break;
        }
    }
    return t4;
}

int FUN_0c0ce530(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    if (((unsigned short)(*(short *)0xC361BFC) & 16) != 0) {
        if (((unsigned char)(*(signed char *)0xC4948A0) == 17) && (t0 = *(signed char *)((a7 + 0xC7F2EE4)), (unsigned char)t0 == 3)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x2;
        }
        t0 = (0xFF + a6);
        if ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == 0) {
        } else {
            t0 = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) - 1);
        }
        *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = t0;
    }
    if (((unsigned short)(*(short *)0xC361BFC) & 32) != 0) {
        if (((unsigned char)(*(signed char *)0xC4948A0) == 17) && (t1 = *(signed char *)((a7 + 0xC7F2EE4)), (unsigned char)t1 == 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x2;
        }
        if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == (a6 - 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) + 0x1);
        }
    }
    return dbg_print_at(0xC153474, ((float)a4 * ((((struct o4_float *)0xC0CE7AC)->v))), ((float)(((unsigned char)(*(signed char *)(((a7 + 0xC7F2EE4) + 0x0))) << 1) + a5) * ((((struct o0_float *)0xC0CE7AC)->v))));
}

int FUN_0c0a3824(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 21) && ((((t1 << 8) + (unsigned char)t0) != 22) && ((((t1 << 8) + (unsigned char)t0) != 23) && (((t1 << 8) + (unsigned char)t0) != 41)))) {
        if (((t1 << 8) + (unsigned char)t0) != 55) {
            if (((t1 << 8) + (unsigned char)t0) != 0x13C) {
                if (((t1 << 8) + (unsigned char)t0) != 0x24A) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x25B) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x265) {
                            if (((t1 << 8) + (unsigned char)t0) != 0x2A0) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x2AF) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x2C5) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x2C9) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x2E1) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x2EB) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x2EC) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x2FD) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x2FE) {
                                                                return ((t1 << 8) + (unsigned char)t0);
                                                            }
                                                            return pl_play_side_se_at_frame(a4, 0xD, 0xB);
                                                        }
                                                        return pl_play_side_se_at_frame(a4, 0xA, 0xC);
                                                    }
                                                    return pl_play_side_se_at_frame(a4, 0x8, 0x7);
                                                }
                                                return pl_play_side_se_at_frame(a4, 0x5, 0x7);
                                            }
                                            return pl_play_side_se_at_frame(a4, 0x7, 0x9);
                                        }
                                        return pl_play_side_se_at_frame(a4, 0xA, 0xA);
                                    }
                                    return pl_play_side_se_at_frame(a4, 0x9, 0xB);
                                }
                                return pl_play_side_se_at_frame(a4, 0xA, 0x25);
                            }
                            return pl_play_side_se_at_frame(a4, 0x0, 0x19);
                        }
                        return pl_play_side_se_at_frame(a4, 0x9, 0xA);
                    }
                    return pl_play_side_se_at_frame(a4, 0x5, 0xC);
                }
                return pl_play_side_se_at_frame(a4, 0x3, 0xA);
            }
            return pl_play_side_se_at_frame(a4, 0xB, 0x9);
        }
        return pl_play_side_se_at_frame(a4, 0x0, 0xE);
    }
    return pl_play_side_se_at_frame(a4, 0x0, 0xF);
}
