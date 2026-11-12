/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c012870(int);
extern int FUN_0c0181c0();
int FUN_0c01845c(int);
int FUN_0c0184ca(int, float, float);
int FUN_0c018538(void);
int FUN_0c0185d2(void);
int FUN_0c01863a(void);
int FUN_0c0187a8(int);
int FUN_0c018b96(int, int);
int FUN_0c018ed0(int, int);
int FUN_0c019204(int, int);
int FUN_0c0193b2(int, int);
int FUN_0c0194dc(int, int);
extern int FUN_0c01958c();
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c09bb5c(void);
int FUN_0c0a3796(int, int);
float FUN_0c0df340(float);
extern int FUN_0c0df360();
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(int);
int thunk_FUN_0c062242(int);
int FUN_0c017a2c(int a4, int a5, int a6, int a7);
float FUN_0c0bbd02(int a4);

int FUN_0c017a2c(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t51;
    register int t54;
    register int t57;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t113;
    register int t114;
    register int t117;
    register int t118;
    register int t119;
    register int t137;
    register int t138;
    register int t139;
    register int t141;
    register int t142;
    register int t181;
    register int t182;
    register int t188;
    register int t199;
    register int t211;
    register int t283;
    register int t407;
    register float u420;
    register int t421;
    register int t433;
    register int t437;
    register int t441;
    register int t474;
    register int t478;
    register int t482;
    register int t492;
    register int t500;
    register int t509;
    register int t520;
    register int t532;
    register int t604;
    register int t728;
    register float u741;
    register int t742;
    register int t754;
    register int t758;
    register int t762;
    register int t795;
    register int t799;
    register int t803;
    register int t813;
    register int t821;
    register int t3;
    register int t4;
    register int t22;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t35;
    register int t36;
    register int t37;
    register int t66;
    register int t67;
    register int t68;
    register int t92;
    register int t93;
    register int t96;
    register int t97;
    register int t98;
    register int t105;
    register int t106;
    register int t107;
    register int t134;
    register int t135;
    register int t140;
    register int t160;
    register int t161;
    register int t164;
    register int t165;
    register int t166;
    register int t173;
    register int t174;
    register int t175;
    int t185;
    int t189;
    int t196;
    int t200;
    int t219;
    int t227;
    int t240;
    int t248;
    int t262;
    int t270;
    int t287;
    int t292;
    int t306;
    int t314;
    int t346;
    int t354;
    int t372;
    int t380;
    int t498;
    int t506;
    int t510;
    int t517;
    int t521;
    int t540;
    int t548;
    int t561;
    int t569;
    int t583;
    int t591;
    int t608;
    int t613;
    int t627;
    int t635;
    int t667;
    int t675;
    int t693;
    int t701;
    int t819;

    t0 = *(signed char *)0xC3622C0;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(signed char *)0xC3622C8;
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 == 2) {
                            t2 = t1;
                            t5 = 0xC3622C8;
                            t6 = 0x0;
                            for (;;) {
                                if ((int)t6 >= (int)0x2) {
                                    break;
                                }
                                t2 = t6;
                                t4 = 0xC3622C0;
                                t2 = (t2 << 2);
                                t4 = (t4 + 0x2A);
                                t2 = (t2 << 2);
                                t2 = (*(signed char *)((t4 + t2)));
                                if (t2 == 1) {
                                    t5 = t6;
                                    t2 = (((int (*)(int))(FUN_0c0181c0))(t5));
                                } else {
                                    t3 = t6;
                                    t3 = (t3 << 2);
                                    t4 = t6;
                                    t3 = (t3 + t4);
                                    t3 = (t3 << 2);
                                    t3 = (signed char)t3;
                                    t3 = (t3 + 0xC361BF0);
                                    t2 = (*(short *)((t3 + 0xC)));
                                    t2 = (unsigned short)t2;
                                    if ((t2 & 0x2) != 0) {
                                        t3 = t6;
                                        t4 = 0xC3622C0;
                                        t3 = (t3 << 2);
                                        t4 = (t4 + 0x2A);
                                        t3 = (t3 << 2);
                                        t3 = (t3 + t4);
                                        *(unsigned char *)((t3 + 0x0)) = 0x1;
                                        t5 = 0x0;
                                        t2 = (FUN_0c0a3796(t5, 0x4E));
                                    } else {
                                        t22 = t4;
                                        t23 = t5;
                                    }
                                }
                                t3 = 0xC012870;
                                t4 = t22;
                                t5 = t23;
                                t5 = t6;
                                t2 = (FUN_0c012870(t5));
                                if (t2 == 0) {
                                    t5 = t6;
                                    t3 = 0xC3622C0;
                                    t5 = (t5 << 2);
                                    t3 = (t3 + 0x2A);
                                    t5 = (t5 << 2);
                                    t3 = (t3 + t5);
                                    t2 = 0x1;
                                    t4 = 0xC3622C0;
                                    *(unsigned char *)((t3 + 0xF)) = t2;
                                    t3 = 0xC3622C0;
                                    t4 = (t4 + 0x2A);
                                    t3 = (t3 + 0x2A);
                                    t4 = (t4 + t5);
                                    t5 = (t5 + t3);
                                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                                    t2 = 0x7;
                                    *(unsigned char *)((t5 + 0x2)) = t2;
                                    t26 = t3;
                                    t27 = t4;
                                    t28 = t5;
                                }
                                t2 = t6;
                                t3 = t26;
                                t4 = t27;
                                t5 = t28;
                                t4 = 0xC3622C0;
                                t2 = (t2 << 2);
                                t4 = (t4 + 0x2A);
                                t2 = (t2 << 2);
                                t2 = (t2 + t4);
                                t2 = (*(signed char *)((t2 + 0xF)));
                                if (t2 == 1) {
                                    t5 = t6;
                                    t2 = (FUN_0c012870(t5));
                                    if (t2 != 0) {
                                        t3 = t6;
                                        t4 = 0xC3622C0;
                                        t3 = (t3 << 2);
                                        t4 = (t4 + 0x2A);
                                        t3 = (t3 << 2);
                                        t3 = (t3 + t4);
                                        t2 = 0x0;
                                        *(unsigned char *)((t3 + 0xF)) = t2;
                                        t2 = 0x1;
                                        t4 = 0xC01958C;
                                        t5 = t6;
                                        (((struct o8_uchar *)0xC3622C0)->v) = t2;
                                        t5 = (t5 + 0x1);
                                        t2 = (((int (*)(int))(FUN_0c01958c))(t5));
                                    }
                                } else {
                                    t35 = t3;
                                    t36 = t4;
                                    t37 = t5;
                                }
                                t6 = (t6 + 0x1);
                                t3 = t35;
                                t4 = t36;
                                t5 = t37;
                            }
                            if ((*(signed char *)0xC3622EA) == 0) {
                                if ((*(signed char *)0xC3622FA) == 0) {
                                    (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) - 1);
                                    t43 = ((int (*)(int, int, int, int))(FUN_0c01958c))(0x4, a5, a6, a7);
                                    t44 = ((int (*)(int))(FUN_0c01958c))(0x1);
                                    return ((int (*)(int))(FUN_0c01958c))(0x2);
                                }
                                return 0x10;
                            }
                            return t2;
                        }
                        return t1;
                    }
                    t45 = *(signed char *)0xC3622C8;
                    (((struct o8_uchar *)0xC3622C0)->v) = (t45 + 0x1);
                    t46 = (t45 + 0x1);
                    t47 = 0xC3622C8;
                    t48 = 0x0;
                    for (;;) {
                        if ((*(signed char *)(((((t48 << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
                            t47 = t48;
                            t46 = (FUN_0c012870(t47));
                            switch (t46) {
                            case 0:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                *(unsigned char *)(((0xC3622EA + t47) + 0x0)) = 0x0;
                                t46 = 0x0;
                                t57 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t57 + 0xD)) = t46;
                                t46 = 0x1;
                                *(unsigned char *)((t47 + 0xF)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018b96(t47, (t48 + 0x1)));
                                break;
                            case 1:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                t54 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t54 + 0x0)) = 0x1;
                                t46 = 0x0;
                                *(unsigned char *)((t47 + 0xD)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018b96(t47, (t48 + 0x1)));
                                break;
                            case 2:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                t51 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t51 + 0x0)) = 0x1;
                                t46 = 0x1;
                                *(unsigned char *)((t47 + 0xD)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018ed0(t47, (t48 + 0x1)));
                                break;
                            }
                            t46 = t48;
                            *(unsigned char *)(((((t48 << 2) << 2) + 0xC3622EA) + 0x1)) = t46;
                            *(unsigned short *)(((int)stk + 0)) = (t46 + 0x1);
                            t47 = t48;
                            t46 = (FUN_0c019204(t47, (t46 + 0x1)));
                            t47 = t48;
                            t46 = (FUN_0c0193b2(t47, (*(short *)(((int)stk + 0)))));
                            t47 = t48;
                            t46 = (FUN_0c0194dc(t47, (*(short *)(((int)stk + 0)))));
                        } else {
                            t66 = 0xC3622EA;
                            t67 = (((t48 << 2) << 2) + 0xC3622EA);
                            t68 = t47;
                        }
                        t48 = (t48 + 0x1);
                        t47 = t68;
                        if ((int)t48 >= (int)0x2) {
                            break;
                        }
                    }
                    t70 = t46;
                    t71 = t66;
                    t72 = t67;
                    t73 = t47;
                    t74 = 0x0;
                    for (;;) {
                        if ((int)t74 >= (int)0x2) {
                            break;
                        }
                        t70 = t74;
                        t72 = 0xC3622C0;
                        t70 = (t70 << 2);
                        t72 = (t72 + 0x2A);
                        t70 = (t70 << 2);
                        t70 = (*(signed char *)((t72 + t70)));
                        if (t70 == 1) {
                            t73 = t74;
                            t70 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0181c0))(t73, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                        } else {
                            t71 = t74;
                            t71 = (t71 << 2);
                            t72 = t74;
                            t71 = (t71 + t72);
                            t71 = (t71 << 2);
                            t71 = (signed char)t71;
                            t71 = (t71 + 0xC361BF0);
                            t70 = (*(short *)((t71 + 0xC)));
                            t70 = (unsigned short)t70;
                            if ((t70 & 0x2) != 0) {
                                t71 = t74;
                                t72 = 0xC3622C0;
                                t71 = (t71 << 2);
                                t72 = (t72 + 0x2A);
                                t71 = (t71 << 2);
                                t71 = (t71 + t72);
                                *(unsigned char *)((t71 + 0x0)) = 0x1;
                                t73 = 0x0;
                                t70 = (FUN_0c0a3796(t73, 0x4E));
                            } else {
                                t92 = t72;
                                t93 = t73;
                            }
                        }
                        t72 = t92;
                        t73 = t93;
                        t73 = t74;
                        t70 = (FUN_0c012870(t73));
                        if (t70 == 0) {
                            t73 = t74;
                            t71 = 0xC3622C0;
                            t73 = (t73 << 2);
                            t71 = (t71 + 0x2A);
                            t73 = (t73 << 2);
                            t71 = (t71 + t73);
                            t70 = 0x1;
                            t72 = 0xC3622C0;
                            *(unsigned char *)((t71 + 0xF)) = t70;
                            t71 = 0xC3622C0;
                            t72 = (t72 + 0x2A);
                            t71 = (t71 + 0x2A);
                            t72 = (t72 + t73);
                            t73 = (t73 + t71);
                            *(unsigned char *)((t72 + 0x0)) = 0x0;
                            t70 = 0x7;
                            *(unsigned char *)((t73 + 0x2)) = t70;
                            t96 = t71;
                            t97 = t72;
                            t98 = t73;
                        }
                        t70 = t74;
                        t71 = t96;
                        t72 = t97;
                        t73 = t98;
                        t72 = 0xC3622C0;
                        t70 = (t70 << 2);
                        t72 = (t72 + 0x2A);
                        t70 = (t70 << 2);
                        t70 = (t70 + t72);
                        t70 = (*(signed char *)((t70 + 0xF)));
                        if (t70 == 1) {
                            t73 = t74;
                            t70 = (FUN_0c012870(t73));
                            if (t70 != 0) {
                                t71 = t74;
                                t72 = 0xC3622C0;
                                t71 = (t71 << 2);
                                t72 = (t72 + 0x2A);
                                t71 = (t71 << 2);
                                t71 = (t71 + t72);
                                t70 = 0x0;
                                *(unsigned char *)((t71 + 0xF)) = t70;
                                t70 = 0x1;
                                t73 = t74;
                                (((struct o8_uchar *)0xC3622C0)->v) = t70;
                                t73 = (t73 + 0x1);
                                t70 = (((int (*)(int))(FUN_0c01958c))(t73));
                            }
                        } else {
                            t105 = t71;
                            t106 = t72;
                            t107 = t73;
                        }
                        t74 = (t74 + 0x1);
                        t71 = t105;
                        t72 = t106;
                        t73 = t107;
                    }
                    if ((*(signed char *)0xC3622EA) == 0) {
                        if ((*(signed char *)0xC3622FA) == 0) {
                            (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) - 1);
                            t113 = ((int (*)(int))(FUN_0c01958c))(0x4);
                            t114 = ((int (*)(int))(FUN_0c01958c))(0x1);
                            return ((int (*)(int))(FUN_0c01958c))(0x2);
                        }
                        return 0x10;
                    }
                    return t70;
                }
                (((struct o8_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C8) + 0x1);
                (((struct o2A_uchar *)0xC3622C0)->v) = 0x0;
                (((struct o3A_uchar *)0xC3622C0)->v) = 0x0;
                (((struct o39_uchar *)0xC3622C0)->v) = 0x0;
                *(unsigned char *)0xC362309 = 0x0;
                (((struct o2C_uchar *)0xC3622C0)->v) = 0x7;
                (((struct o3C_uchar *)0xC3622C0)->v) = 0x7;
                FUN_0c0187a8(0x4);
                t117 = *(signed char *)0xC3622C8;
                (((struct o8_uchar *)0xC3622C0)->v) = (t117 + 0x1);
                t118 = (t117 + 0x1);
                t119 = 0x0;
                for (;;) {
                    if ((*(signed char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
                        t118 = (FUN_0c012870(t119));
                        switch (t118) {
                        case 0:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x0;
                            t118 = 0x0;
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0xD)) = t118;
                            t118 = 0x1;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xF)) = t118;
                            t118 = (FUN_0c018b96(t119, (t119 + 0x1)));
                            break;
                        case 1:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x1;
                            t118 = 0x0;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xD)) = t118;
                            t118 = (FUN_0c018b96(t119, (t119 + 0x1)));
                            break;
                        case 2:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x1;
                            t118 = 0x1;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xD)) = t118;
                            t118 = (FUN_0c018ed0(t119, (t119 + 0x1)));
                            break;
                        }
                        t118 = t119;
                        *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0x1)) = t118;
                        *(unsigned short *)(((int)stk + 0)) = (t118 + 0x1);
                        t118 = (FUN_0c019204(t119, (t118 + 0x1)));
                        t118 = (FUN_0c0193b2(t119, (*(short *)(((int)stk + 0)))));
                        t118 = (FUN_0c0194dc(t119, (*(short *)(((int)stk + 0)))));
                    } else {
                        t134 = 0xC3622EA;
                        t135 = (((t119 << 2) << 2) + 0xC3622EA);
                    }
                    t119 = (t119 + 0x1);
                    if ((int)t119 >= (int)0x2) {
                        break;
                    }
                }
                t137 = t118;
                t138 = t134;
                t139 = t135;
                t141 = t140;
                t142 = 0x0;
                for (;;) {
                    if ((int)t142 >= (int)0x2) {
                        break;
                    }
                    t137 = t142;
                    t139 = 0xC3622C0;
                    t137 = (t137 << 2);
                    t139 = (t139 + 0x2A);
                    t137 = (t137 << 2);
                    t137 = (*(signed char *)((t139 + t137)));
                    if (t137 == 1) {
                        t141 = t142;
                        t137 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0181c0))(t141, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                    } else {
                        t138 = t142;
                        t138 = (t138 << 2);
                        t139 = t142;
                        t138 = (t138 + t139);
                        t138 = (t138 << 2);
                        t138 = (signed char)t138;
                        t138 = (t138 + 0xC361BF0);
                        t137 = (*(short *)((t138 + 0xC)));
                        t137 = (unsigned short)t137;
                        if ((t137 & 0x2) != 0) {
                            t138 = t142;
                            t139 = 0xC3622C0;
                            t138 = (t138 << 2);
                            t139 = (t139 + 0x2A);
                            t138 = (t138 << 2);
                            t138 = (t138 + t139);
                            *(unsigned char *)((t138 + 0x0)) = 0x1;
                            t141 = 0x0;
                            t137 = (FUN_0c0a3796(t141, 0x4E));
                        } else {
                            t160 = t139;
                            t161 = t141;
                        }
                    }
                    t139 = t160;
                    t141 = t161;
                    t141 = t142;
                    t137 = (FUN_0c012870(t141));
                    if (t137 == 0) {
                        t141 = t142;
                        t138 = 0xC3622C0;
                        t141 = (t141 << 2);
                        t138 = (t138 + 0x2A);
                        t141 = (t141 << 2);
                        t138 = (t138 + t141);
                        t137 = 0x1;
                        t139 = 0xC3622C0;
                        *(unsigned char *)((t138 + 0xF)) = t137;
                        t138 = 0xC3622C0;
                        t139 = (t139 + 0x2A);
                        t138 = (t138 + 0x2A);
                        t139 = (t139 + t141);
                        t141 = (t141 + t138);
                        *(unsigned char *)((t139 + 0x0)) = 0x0;
                        t137 = 0x7;
                        *(unsigned char *)((t141 + 0x2)) = t137;
                        t164 = t138;
                        t165 = t139;
                        t166 = t141;
                    }
                    t137 = t142;
                    t138 = t164;
                    t139 = t165;
                    t141 = t166;
                    t139 = 0xC3622C0;
                    t137 = (t137 << 2);
                    t139 = (t139 + 0x2A);
                    t137 = (t137 << 2);
                    t137 = (t137 + t139);
                    t137 = (*(signed char *)((t137 + 0xF)));
                    if (t137 == 1) {
                        t141 = t142;
                        t137 = (FUN_0c012870(t141));
                        if (t137 != 0) {
                            t138 = t142;
                            t139 = 0xC3622C0;
                            t138 = (t138 << 2);
                            t139 = (t139 + 0x2A);
                            t138 = (t138 << 2);
                            t138 = (t138 + t139);
                            t137 = 0x0;
                            *(unsigned char *)((t138 + 0xF)) = t137;
                            t137 = 0x1;
                            t141 = t142;
                            (((struct o8_uchar *)0xC3622C0)->v) = t137;
                            t141 = (t141 + 0x1);
                            t137 = (((int (*)(int))(FUN_0c01958c))(t141));
                        }
                    } else {
                        t173 = t138;
                        t174 = t139;
                        t175 = t141;
                    }
                    t142 = (t142 + 0x1);
                    t138 = t173;
                    t139 = t174;
                    t141 = t175;
                }
                if ((*(signed char *)0xC3622EA) == 0) {
                    if ((*(signed char *)0xC3622FA) == 0) {
                        (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) - 1);
                        t181 = ((int (*)(int))(FUN_0c01958c))(0x4);
                        t182 = ((int (*)(int))(FUN_0c01958c))(0x1);
                        return ((int (*)(int))(FUN_0c01958c))(0x2);
                    }
                    return 0x10;
                }
                return t137;
            }
            return (FUN_0c0185d2());
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x10) == 0) && (t185 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t185 & 0x10) == 0)) {
        } else {
            FUN_0c0a3796(0x0, 0x4B);
            (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) - 1);
            t188 = FUN_0c09bb5c();
            if ((t188 == 0) && (t189 = *(signed char *)0xC3622C1, t189 == 5)) {
                (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) - 1);
            }
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x20) == 0) && (t196 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t196 & 0x20) == 0)) {
        } else {
            FUN_0c0a3796(0x0, 0x4B);
            (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            t199 = FUN_0c09bb5c();
            if ((t199 == 0) && (t200 = *(signed char *)0xC3622C1, t200 == 5)) {
                (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            }
        }
        if ((int)(*(signed char *)0xC3622C1) < 0) {
            (((struct o1_uchar *)0xC3622C0)->v) = 0x7;
        }
        if ((int)(*(signed char *)0xC3622C1) > (int)0x7) {
            (((struct o1_uchar *)0xC3622C0)->v) = 0x0;
        }
        t211 = *(signed char *)0xC3622C1;
        switch (t211) {
        case 0:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t372 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t372 & 64) == 0)) {
            } else {
                (((struct o2_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C2) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t380 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t380 & 128) == 0)) {
            } else {
                (((struct o2_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C2) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C2) < 0) {
                (((struct o2_uchar *)0xC3622C0)->v) = 0x7;
            }
            if ((int)(*(signed char *)0xC3622C2) <= (int)0x7) {
            } else {
                (((struct o2_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 1:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t346 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t346 & 64) == 0)) {
            } else {
                (((struct o3_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C3) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t354 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t354 & 128) == 0)) {
            } else {
                (((struct o3_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C3) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C3) < 0) {
                (((struct o3_uchar *)0xC3622C0)->v) = 0x4;
            }
            if ((int)(*(signed char *)0xC3622C3) <= (int)0x4) {
            } else {
                (((struct o3_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 2:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t219 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t219 & 64) == 0)) {
            } else {
                (((struct o4_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C4) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t227 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t227 & 128) == 0)) {
            } else {
                (((struct o4_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C4) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C4) < 0) {
                (((struct o4_uchar *)0xC3622C0)->v) = 0x3;
            }
            if ((int)(*(signed char *)0xC3622C4) <= (int)0x3) {
            } else {
                (((struct o4_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 3:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t240 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t240 & 64) == 0)) {
            } else {
                (((struct o5_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C5) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t248 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t248 & 128) == 0)) {
            } else {
                (((struct o5_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C5) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C5) < 0) {
                (((struct o5_uchar *)0xC3622C0)->v) = 0x3;
            }
            if ((int)(*(signed char *)0xC3622C5) <= (int)0x3) {
            } else {
                (((struct o5_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 4:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t262 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t262 & 64) == 0)) {
            } else {
                (((struct o6_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C6) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t270 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t270 & 128) == 0)) {
            } else {
                (((struct o6_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C6) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C6) < 0) {
                (((struct o6_uchar *)0xC3622C0)->v) = 0x1;
            }
            if ((int)(*(signed char *)0xC3622C6) > (int)0x1) {
                (((struct o6_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 5:
            t283 = FUN_0c09bb5c();
            if (t283 != 0) {
                if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t287 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t287 & 64) == 0)) {
                } else {
                    (((struct o7_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C7) - 1);
                    FUN_0c0a3796(0x0, 0x4C);
                }
                if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t292 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t292 & 128) == 0)) {
                } else {
                    (((struct o7_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C7) + 0x1);
                    FUN_0c0a3796(0x0, 0x4C);
                }
                if ((int)(*(signed char *)0xC3622C7) < 0) {
                    (((struct o7_uchar *)0xC3622C0)->v) = 0x1;
                }
                if ((int)(*(signed char *)0xC3622C7) > (int)0x1) {
                    (((struct o7_uchar *)0xC3622C0)->v) = 0x0;
                }
            } else {
                (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            }
            break;
        case 6:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t306 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t306 & 4) == 0)) {
            } else {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) + 0x1);
                (((struct o8_uchar *)0xC3622C0)->v) = 0x0;
            }
            break;
        case 7:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t314 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t314 & 4) == 0)) {
            } else {
                FUN_0c0a3796(0x0, 0x4D);
                FUN_0c01863a();
            }
            break;
        }
        FUN_0c01845c(0x0);
        FUN_0c01845c(0x1);
        FUN_0c01845c(0x2);
        FUN_0c01845c(0x3);
        FUN_0c01845c(0x4);
        FUN_0c01845c(0x5);
        FUN_0c01845c(0x6);
        FUN_0c01845c(0x7);
        FUN_0c01845c(0x8);
        t407 = FUN_0c09bb5c();
        if (t407 != 0) {
            FUN_0c01845c(0x9);
        }
        FUN_0c01845c(0xA);
        FUN_0c01845c(0xB);
        FUN_0c01845c(0xC);
        FUN_0c01845c(0xD);
        FUN_0c01845c(0xE);
        FUN_0c01845c(0xF);
        FUN_0c01845c(0x3D);
        FUN_0c01845c(0x3E);
        u420 = *(float *)((0xC11B6E4 + ((*(signed char *)0xC3622CC) << 2)));
        t421 = *(signed char *)0xC3622C1;
        *(unsigned char *)(((int)stk + 0)) = t421;
        FUN_0c0184ca(((*(signed char *)(((int)stk + 0))) + 0x35), (*(float *)((0xC11B6C4 + (t421 << 2)))), u420);
        (((struct oD_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CD) + 0x1);
        (((struct oD_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CD) & 0x1);
        if ((*(signed char *)0xC3622CD) == 0) {
            (((struct oC_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CC) + 0x1);
            (((struct oC_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CC) & 0xF);
        }
        t433 = 0x25;
        if ((int)(*(signed char *)0xC3622C2) >= 0) {
            t433 = 0x1D;
        }
        FUN_0c01845c(t433);
        t437 = 0x26;
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x1) {
            t437 = 0x1E;
        }
        FUN_0c01845c(t437);
        t441 = 0x27;
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x2) {
            t441 = 0x1F;
        }
        FUN_0c01845c(t441);
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x3) {
            FUN_0c01845c(0x20);
        } else {
            FUN_0c01845c(0x28);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x4) {
            FUN_0c01845c(0x21);
        } else {
            FUN_0c01845c(0x29);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x5) {
            FUN_0c01845c(0x22);
        } else {
            FUN_0c01845c(0x2A);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x6) {
            FUN_0c01845c(0x23);
        } else {
            FUN_0c01845c(0x2B);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x7) {
            FUN_0c01845c(0x24);
        } else {
            FUN_0c01845c(0x2C);
        }
        FUN_0c01845c(((*(signed char *)0xC3622C3) + 0x10));
        FUN_0c01845c(((*(signed char *)0xC3622C4) + 0x15));
        t474 = 0x31;
        if ((int)(*(signed char *)0xC3622C5) >= 0) {
            t474 = 0x2D;
        }
        FUN_0c01845c(t474);
        t478 = 0x32;
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x1) {
            t478 = 0x2E;
        }
        FUN_0c01845c(t478);
        t482 = 0x33;
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x2) {
            t482 = 0x2F;
        }
        FUN_0c01845c(t482);
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x3) {
            FUN_0c01845c(0x30);
        } else {
            FUN_0c01845c(0x34);
        }
        FUN_0c01845c(((*(signed char *)0xC3622C6) + 0x19));
        t492 = FUN_0c09bb5c();
        if (t492 != 0) {
            FUN_0c01845c(((*(signed char *)0xC3622C7) + 0x1B));
        }
        t500 = 0x20;
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t498 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t498 & 0x8) == 0)) {
        } else {
            t500 = FUN_0c0a3796(0x0, 0x4D);
            (((struct o0_uchar *)0xC3622C0)->v) = 0xFFFFFFFF;
        }
        return t500;
    }
    (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) + 0x1);
    (((struct o1_uchar *)0xC3622C0)->v) = 0x0;
    (((struct oC_uchar *)0xC3622C0)->v) = 0x0;
    (((struct oD_uchar *)0xC3622C0)->v) = 0x0;
    (((struct oE_uchar *)0xC3622C0)->v) = 0x0;
    (((struct oF_uchar *)0xC3622C0)->v) = 0x0;
    FUN_0c018538();
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x10) == 0) && (t506 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t506 & 0x10) == 0)) {
    } else {
        FUN_0c0a3796(0x0, 0x4B);
        (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) - 1);
        t509 = FUN_0c09bb5c();
        if ((t509 == 0) && (t510 = *(signed char *)0xC3622C1, t510 == 5)) {
            (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) - 1);
        }
    }
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x20) == 0) && (t517 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t517 & 0x20) == 0)) {
    } else {
        FUN_0c0a3796(0x0, 0x4B);
        (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        t520 = FUN_0c09bb5c();
        if ((t520 == 0) && (t521 = *(signed char *)0xC3622C1, t521 == 5)) {
            (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        }
    }
    if ((int)(*(signed char *)0xC3622C1) < 0) {
        (((struct o1_uchar *)0xC3622C0)->v) = 0x7;
    }
    if ((int)(*(signed char *)0xC3622C1) > (int)0x7) {
        (((struct o1_uchar *)0xC3622C0)->v) = 0x0;
    }
    t532 = *(signed char *)0xC3622C1;
    switch (t532) {
    case 0:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t693 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t693 & 64) == 0)) {
        } else {
            (((struct o2_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C2) - 1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t701 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t701 & 128) == 0)) {
        } else {
            (((struct o2_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C2) + 0x1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C2) < 0) {
            (((struct o2_uchar *)0xC3622C0)->v) = 0x7;
        }
        if ((int)(*(signed char *)0xC3622C2) <= (int)0x7) {
        } else {
            (((struct o2_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 1:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t667 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t667 & 64) == 0)) {
        } else {
            (((struct o3_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C3) - 1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t675 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t675 & 128) == 0)) {
        } else {
            (((struct o3_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C3) + 0x1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C3) < 0) {
            (((struct o3_uchar *)0xC3622C0)->v) = 0x4;
        }
        if ((int)(*(signed char *)0xC3622C3) <= (int)0x4) {
        } else {
            (((struct o3_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 2:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t540 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t540 & 64) == 0)) {
        } else {
            (((struct o4_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C4) - 1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t548 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t548 & 128) == 0)) {
        } else {
            (((struct o4_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C4) + 0x1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C4) < 0) {
            (((struct o4_uchar *)0xC3622C0)->v) = 0x3;
        }
        if ((int)(*(signed char *)0xC3622C4) <= (int)0x3) {
        } else {
            (((struct o4_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 3:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t561 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t561 & 64) == 0)) {
        } else {
            (((struct o5_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C5) - 1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t569 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t569 & 128) == 0)) {
        } else {
            (((struct o5_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C5) + 0x1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C5) < 0) {
            (((struct o5_uchar *)0xC3622C0)->v) = 0x3;
        }
        if ((int)(*(signed char *)0xC3622C5) <= (int)0x3) {
        } else {
            (((struct o5_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 4:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t583 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t583 & 64) == 0)) {
        } else {
            (((struct o6_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C6) - 1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t591 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t591 & 128) == 0)) {
        } else {
            (((struct o6_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C6) + 0x1);
            FUN_0c0a3796(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C6) < 0) {
            (((struct o6_uchar *)0xC3622C0)->v) = 0x1;
        }
        if ((int)(*(signed char *)0xC3622C6) > (int)0x1) {
            (((struct o6_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 5:
        t604 = FUN_0c09bb5c();
        if (t604 != 0) {
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t608 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t608 & 64) == 0)) {
            } else {
                (((struct o7_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C7) - 1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t613 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t613 & 128) == 0)) {
            } else {
                (((struct o7_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C7) + 0x1);
                FUN_0c0a3796(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C7) < 0) {
                (((struct o7_uchar *)0xC3622C0)->v) = 0x1;
            }
            if ((int)(*(signed char *)0xC3622C7) > (int)0x1) {
                (((struct o7_uchar *)0xC3622C0)->v) = 0x0;
            }
        } else {
            (((struct o1_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        }
        break;
    case 6:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t627 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t627 & 4) == 0)) {
        } else {
            FUN_0c0a3796(0x0, 0x4D);
            (((struct o0_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622C0) + 0x1);
            (((struct o8_uchar *)0xC3622C0)->v) = 0x0;
        }
        break;
    case 7:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t635 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t635 & 4) == 0)) {
        } else {
            FUN_0c0a3796(0x0, 0x4D);
            FUN_0c01863a();
        }
        break;
    }
    FUN_0c01845c(0x0);
    FUN_0c01845c(0x1);
    FUN_0c01845c(0x2);
    FUN_0c01845c(0x3);
    FUN_0c01845c(0x4);
    FUN_0c01845c(0x5);
    FUN_0c01845c(0x6);
    FUN_0c01845c(0x7);
    FUN_0c01845c(0x8);
    t728 = FUN_0c09bb5c();
    if (t728 != 0) {
        FUN_0c01845c(0x9);
    }
    FUN_0c01845c(0xA);
    FUN_0c01845c(0xB);
    FUN_0c01845c(0xC);
    FUN_0c01845c(0xD);
    FUN_0c01845c(0xE);
    FUN_0c01845c(0xF);
    FUN_0c01845c(0x3D);
    FUN_0c01845c(0x3E);
    u741 = *(float *)((0xC11B6E4 + ((*(signed char *)0xC3622CC) << 2)));
    t742 = *(signed char *)0xC3622C1;
    *(unsigned char *)(((int)stk + 0)) = t742;
    FUN_0c0184ca(((*(signed char *)(((int)stk + 0))) + 0x35), (*(float *)((0xC11B6C4 + (t742 << 2)))), u741);
    (((struct oD_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CD) + 0x1);
    (((struct oD_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CD) & 0x1);
    if ((*(signed char *)0xC3622CD) == 0) {
        (((struct oC_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CC) + 0x1);
        (((struct oC_uchar *)0xC3622C0)->v) = ((*(signed char *)0xC3622CC) & 0xF);
    }
    t754 = 0x25;
    if ((int)(*(signed char *)0xC3622C2) >= 0) {
        t754 = 0x1D;
    }
    FUN_0c01845c(t754);
    t758 = 0x26;
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x1) {
        t758 = 0x1E;
    }
    FUN_0c01845c(t758);
    t762 = 0x27;
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x2) {
        t762 = 0x1F;
    }
    FUN_0c01845c(t762);
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x3) {
        FUN_0c01845c(0x20);
    } else {
        FUN_0c01845c(0x28);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x4) {
        FUN_0c01845c(0x21);
    } else {
        FUN_0c01845c(0x29);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x5) {
        FUN_0c01845c(0x22);
    } else {
        FUN_0c01845c(0x2A);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x6) {
        FUN_0c01845c(0x23);
    } else {
        FUN_0c01845c(0x2B);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x7) {
        FUN_0c01845c(0x24);
    } else {
        FUN_0c01845c(0x2C);
    }
    FUN_0c01845c(((*(signed char *)0xC3622C3) + 0x10));
    FUN_0c01845c(((*(signed char *)0xC3622C4) + 0x15));
    t795 = 0x31;
    if ((int)(*(signed char *)0xC3622C5) >= 0) {
        t795 = 0x2D;
    }
    FUN_0c01845c(t795);
    t799 = 0x32;
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x1) {
        t799 = 0x2E;
    }
    FUN_0c01845c(t799);
    t803 = 0x33;
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x2) {
        t803 = 0x2F;
    }
    FUN_0c01845c(t803);
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x3) {
        FUN_0c01845c(0x30);
    } else {
        FUN_0c01845c(0x34);
    }
    FUN_0c01845c(((*(signed char *)0xC3622C6) + 0x19));
    t813 = FUN_0c09bb5c();
    if (t813 != 0) {
        FUN_0c01845c(((*(signed char *)0xC3622C7) + 0x1B));
    }
    t821 = 0x20;
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t819 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t819 & 0x8) == 0)) {
    } else {
        t821 = FUN_0c0a3796(0x0, 0x4D);
        (((struct o0_uchar *)0xC3622C0)->v) = 0xFFFFFFFF;
    }
    return t821;
}

float FUN_0c0bbd02(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F1;
    register float F12;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_2 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_6 = (0x7);
    v0_0 = (v0_2);
    v0_3 = (0x3C);
    if (v0_1) goto L_C0BBD30;
    *(unsigned char *)((v0_0 + 0x8)) = v0_6;
    L_C0BBD30:;
    v0_7 = *(signed char *)((v0_0 + 0x8));
    v0_5 = (v0_7);
    v0_1 = (0x14);
    v0_2 = (0x1);
    v0_4 = (0x0);
    if ((v0_7 == 0)) goto L_C0BBD78;
    if ((v0_5 == 1)) goto L_C0BBD88;
    if ((v0_5 == 2)) goto L_C0BBDAC;
    if ((v0_5 != 3)) goto L_C0BBD4C;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_1 - 1) != 0)) goto L_C0BC1C0;
    *(unsigned short *)((v0_0 + v0_5)) = v0_3;
    *(unsigned char *)((v0_0 + 0x8)) = 0x4;
    v0_5 = (0x4);
    L_C0BC1C0:;
    return F0;
    L_C0BBD4C:;
    if ((v0_5 != 4)) goto L_C0BBD54;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0BC0E6;
    *(unsigned char *)((v0_0 + 0x8)) = v0_6;
    L_C0BC0E6:;
    if (((*(signed char *)((v0_0 + 0x2D8))) == 0)) goto L_C0BC0FE;
    (((struct o101_uchar *)(v0_0))->v) = v0_4;
    (((struct o102_uchar *)(v0_0))->v) = v0_4;
    (((struct oEC_ushort *)(v0_0))->v) = v0_3;
    *(unsigned char *)((v0_0 + 0x8)) = 0x5;
    L_C0BC0FE:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - ((((struct o3C_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o40_float *)(v0_0))->v)));
    v0_5 = (0x28);
    goto L_C0BC1C0;
    L_C0BBD54:;
    if ((v0_5 != 5)) goto L_C0BBD5C;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_2 - 1) != 0)) goto L_C0BC1C0;
    *(unsigned short *)((((((struct o2E0_int *)(v0_0))->v)) + 0x2)) = 0x41F;
    *(unsigned short *)((((((struct o2E4_int *)(v0_0))->v)) + 0x2)) = 0x41F;
    (((struct o40_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = 1.0f;
    (((struct o40_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = 1.0f;
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = 0x6;
    v0_5 = (0x6);
    goto L_C0BC1C0;
    L_C0BBD5C:;
    if ((v0_5 != 6)) goto L_C0BBD64;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) - 0.049999997f);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) - 0.049999997f);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_1 - 1) != 0)) goto L_C0BC1C0;
    *(unsigned char *)((v0_0 + 0x8)) = v0_6;
    v0_5 = (v0_6);
    goto L_C0BC1C0;
    L_C0BBD64:;
    if ((v0_5 != 7)) goto L_C0BBD6C;
    v0_5 = ((FUN_0c059330(v0_0, v0_4, v0_3, R7)));
    goto L_C0BC1C0;
    L_C0BBD6C:;
    goto L_C0BC1C0;
    L_C0BBDAC:;
    v0_6 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_6 - 1);
    v0_5 = (0xEC);
    if (((short)(v0_6 - 1) == 0)) goto L_C0BBDBE;
    goto L_C0BC1C0;
    L_C0BBDBE:;
    v0_5 = *(signed char *)(((*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    w0_3 = (((struct o20_float *)(v0_0))->v);
    w0_5 = *(float *)(((int)stk + 4));
    w0_1 = (((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_0))->v))));
    w0_2 = ((w0_5 - w0_3));
    w0_0 = (((*(float *)(((int)stk + 8))) - ((((struct o24_float *)(v0_0))->v))));
    w0_4 = (9.99999997e-07f);
    if (((w0_5 - w0_3) != 0.0f)) goto L_C0BBE18;
    w0_2 = (w0_4);
    L_C0BBE18:;
    w0_3 = (0.0f);
    if ((w0_0 != 0.0f)) goto L_C0BBE22;
    w0_0 = (w0_4);
    L_C0BBE22:;
    if ((w0_1 != w0_3)) goto L_C0BBE28;
    w0_1 = (w0_4);
    L_C0BBE28:;
    w0_3 = (w0_1 * w0_1);
    w0_3 = w0_3 + w0_2 * w0_2;
    w0_3 = FUN_0c0df340(w0_3);
    v0_5 = ((((int (*)(float))(FUN_0c0df360))(((-w0_3) / w0_0))));
    if ((!(0.0f > w0_0))) goto L_C0BBE4C;
    v0_5 = ((v0_5 + 0x8000));
    L_C0BBE4C:;
    w0_5 = FUN_0c0df940();
    v0_6 = (0xA);
    v0_6 = (0xC0DF940);
    w0_0 = (255.0f);
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * 255.0f))) goto L_C0BBE68;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBE68:;
    v0_6 = FUN_0c0e6f24(v0_2);
    w0_5 = FUN_0c0df940();
    v0_6 = (v0_6);
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_0))) goto L_C0BBE8C;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBE8C:;
    v0_7 = FUN_0c0e6f24(v0_2);
    w0_5 = FUN_0c0df940();
    v0_6 = ((v0_6 + v0_7));
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_5 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_0))) goto L_C0BBEEA;
    w0_4 = ((w0_4 + w0_4));
    w0_3 = ((w0_3 - w0_4));
    L_C0BBEEA:;
    v0_7 = FUN_0c0e6f24(v0_2);
    w0_3 = ((float)((v0_6 + v0_7) + 0x4B));
    FPUL_ = (((v0_6 + v0_7) + 0x4B));
    if (((int)((v0_6 + v0_7) + 0x4B) >= 0)) goto L_C0BBF0C;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0BBF0C:;
    *(unsigned int *)((v0_0 + 0x2C)) = (-(unsigned short)(v0_5 + (int)((w0_3 * 65536.0f) / 360.0f)));
    v0_5 = ((((int (*)(int, int, int, int, float))(FUN_0c0df360))((-(unsigned short)(v0_5 + (int)((w0_3 * 65536.0f) / 360.0f))), v0_4, v0_3, R7, ((-w0_1) / w0_2))));
    if ((!(0.0f > w0_2))) goto L_C0BBF3A;
    v0_5 = ((v0_5 + 0x8000));
    L_C0BBF3A:;
    w0_1 = FUN_0c0df940();
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0BBF50;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBF50:;
    v0_3 = FUN_0c0e6f24(v0_2);
    w0_1 = FUN_0c0df940();
    v0_6 = (v0_3);
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0BBF74;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBF74:;
    v0_3 = FUN_0c0e6f24(v0_2);
    w0_1 = FUN_0c0df940();
    v0_6 = ((v0_6 + v0_3));
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0BBF98;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBF98:;
    v0_3 = FUN_0c0e6f24(v0_2);
    w0_3 = ((float)((v0_6 + v0_3) + 0x4B));
    FPUL_ = (((v0_6 + v0_3) + 0x4B));
    if (((int)((v0_6 + v0_3) + 0x4B) >= 0)) goto L_C0BBFBA;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0BBFBA:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)(v0_5 + (int)((w0_3 * 65536.0f) / 360.0f));
    w0_1 = FUN_0c0df940();
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0BBFE4;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BBFE4:;
    v0_3 = FUN_0c0e6f24(v0_2);
    w0_3 = ((float)v0_3);
    FPUL_ = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C0BBFFE;
    w0_3 = ((w0_3 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0BBFFE:;
    *(unsigned int *)((v0_0 + 0x34)) = (int)w0_3;
    w0_1 = FUN_0c0df940();
    w0_4 = (2.14748365e+09f);
    w0_3 = ((w0_1 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_1 * w0_0))) goto L_C0BC018;
    w0_3 = ((w0_3 - (w0_4 + w0_4)));
    L_C0BC018:;
    v0_2 = FUN_0c0e6f24(v0_2);
    w0_4 = ((float)(v0_2 + 0x32));
    v0_3 = (((0.0f > (float)(v0_2 + 0x32))));
    FPUL_ = ((v0_2 + 0x32));
    if ((!v0_3)) goto L_C0BC062;
    w0_0 = ((w0_4 + 4.2949673e+09f));
    L_C0BC064:;
    w0_1 = (w0_0 * (FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))));
    (((struct o38_float *)(v0_0))->v) = (w0_1 * (FUN_0c0df4d0(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))));
    (((struct o3C_float *)(v0_0))->v) = (w0_0 * (FUN_0c0df4d0(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))));
    w0_2 = FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    w0_1 = FUN_0c0dfa50(((-(*(int *)((v0_0 + 0x30)))) + 0x14000));
    w0_0 = (w0_0 * w0_2);
    (((struct o40_float *)(v0_0))->v) = (w0_0 * w0_1);
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    F0 = (w0_1);
    goto L_C0BC1C0;
    L_C0BC062:;
    w0_0 = (w0_4);
    goto L_C0BC064;
    L_C0BBD88:;
    v0_5 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_5 - 1);
    if (((short)(v0_5 - 1) != 0)) goto L_C0BBDAC;
    *(unsigned char *)((((((struct o2E4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct o2E8_int *)(v0_0))->v)) + 0x0)) = v0_4;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0BBDAC;
    L_C0BBD78:;
    (((struct o2D9_uchar *)(v0_0))->v) = 0x2;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0BBD88;
}
