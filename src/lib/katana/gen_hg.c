/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c0f5960(void);
int FUN_0c0f99e0(void);
int FUN_0c0fddbe(int, int, int);
extern int FUN_0c108fe8();
extern void _builtin_prefetch(void *);
int FUN_0c0f61c0(int a4, int a5, int a6, int a7);

int FUN_0c0f61c0(int a4, int a5, int a6, int a7)
{
    int stk[22];
    register int t17;
    register int t38;
    register int t40;
    register int t42;
    register int t43;
    register int t44;
    register int t52;
    register int t53;
    register int t55;
    register int t61;
    register int t67;
    register int t81;
    register int t98;
    register int t115;
    register int t124;
    int t125;
    register int t126;
    register int t129;
    register int t132;
    register int t137;
    register int t142;
    register int t145;
    register int t148;
    register int t151;
    register int t156;
    register int t161;
    register int t166;
    register int t167;
    register int t171;
    register int t180;
    register int t198;
    register int t201;
    register int t206;
    register int t211;
    register int t214;
    register int t215;
    register int t216;
    register int t219;
    register int t246;
    register int t273;
    register int t300;
    register int t325;
    register int t326;
    register int t327;
    register int t330;
    register int t361;
    register int t372;
    register int t374;
    register int t375;
    register int t376;
    register int t377;
    register int t378;
    register int t381;
    register int t382;
    register int t385;
    register int t386;
    register int t394;
    register int t395;
    register int t406;
    register int t409;
    register int t410;
    register int t413;
    register int t414;
    register int t422;
    register int t423;
    register int t434;
    register int t437;
    register int t438;
    register int t441;
    register int t442;
    register int t450;
    register int t451;
    register int t462;
    register int t481;
    register int t465;
    register int t466;
    register int t469;
    register int t470;
    register int t479;
    register int t490;
    register int t526;
    register int t531;
    register int t532;
    register int t533;
    register int t493;
    register int t494;
    register int t495;
    register int t496;
    register int t497;
    register int t516;
    register int t500;
    register int t501;
    register int t504;
    register int t505;
    register int t514;
    register int t525;
    register int t534;
    register int t535;
    register int t565;
    register int t557;
    register int t558;
    register int t570;
    register int t571;
    register int t572;
    register int t589;
    register int t590;
    register int t591;
    register int t592;
    register int t593;
    register int t594;
    register int t707;
    register int t708;
    register int t709;
    register int t675;
    register int t676;
    register int t677;
    register int t678;
    register int t679;
    register int t680;
    register int t710;
    register int t9;
    register int t10;
    int t11;
    register int t239;
    register int t242;
    register int t266;
    register int t269;
    register int t293;
    register int t296;
    register int t320;
    register int t323;
    register int t352;
    register int t401;
    register int t402;
    register int t403;
    register int t404;
    register int t429;
    register int t430;
    register int t431;
    register int t432;
    register int t457;
    register int t458;
    register int t459;
    register int t460;
    register int t485;
    register int t486;
    register int t487;
    register int t488;
    register int t520;
    register int t521;
    register int t522;
    register int t523;
    register int t609;
    register int t610;
    register int t611;
    register int t612;
    register int t629;
    register int t630;
    register int t631;
    register int t632;
    register int t649;
    register int t650;
    register int t651;
    register int t652;
    register int t669;
    register int t670;
    register int t671;
    register int t672;
    register int t695;
    register int t696;
    register int t697;
    register int t698;

    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((((struct o0_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((((struct o4_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o8_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = ((((struct oC_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x10)) = ((((struct o10_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x14)) = ((((struct o14_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x18)) = ((((struct o18_int *)0xC15A9B8)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x1C)) = ((((struct o1C_int *)0xC15A9B8)->v));
    if ((((*(int *)0xC816FC8) & 64) != 0) && ((t9 = (((struct o0_int *)0xC817468)->v), t9 != 0) && ((t10 = (((struct o8_int *)0xC817468)->v), t10 != 0) && (t11 = *(int *)0xC817184, t11 != 0)))) {
        FUN_0c0f5960();
    }
    t17 = (((struct o18_int *)0xC8172FC)->v);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x44);
    (((struct o44_uint *)(((int)stk + 0)))->v) = (0xC817338 + (t17 << 2));
    (((struct o48_uint *)(((int)stk + 0)))->v) = (0xC817348 + (t17 << 2));
    (((struct o4C_uint *)(((int)stk + 0)))->v) = (0xC817358 + (t17 << 2));
    (((struct o50_uint *)(((int)stk + 0)))->v) = (0xC817368 + (t17 << 2));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x54);
    (((struct o54_uint *)(((int)stk + 0)))->v) = (0xC817378 + (t17 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x0)) = (0xC817388 + (t17 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x4)) = (0xC817398 + (t17 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x8)) = (0xC8173A8 + (t17 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0xC)) = (0xC8173B8 + (t17 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x10)) = ((t17 << 2) + 0xC8173C8);
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x0)));
    *(unsigned int *)((((((struct o48_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x4)));
    *(unsigned int *)((((((struct o4C_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x8)));
    *(unsigned int *)((((((struct o50_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0xC)));
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)) = (*(int *)((((((struct o0_int *)0xC803DF0)->v)) + 0x10)));
    if (((((struct o0_int *)0xC8172FC)->v)) != 0) {
        t124 = (((struct o0_int *)0xC8173D8)->v);
        if ((t124 & 32) == 0) {
            FUN_0c0f99e0();
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x10);
            t38 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 8)) = (t38 << 2);
            t40 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + (t38 << 2)));
            t42 = *(int *)(((*(int *)(((((int)stk + 0) + 0x44) + (t38 << 2)))) + 0x0));
            t43 = *(int *)(((((int)stk + 0) + 0x30) + (t38 << 2)));
            t44 = (t40 - t42);
            if ((int)(t40 - t42) < 0) {
                t44 = ((t40 - t42) + 0x3);
            }
            *(unsigned int *)((t43 + 0x0)) = (((t44 >> 1) >> 1) << 2);
            FUN_0c0fddbe((*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 8)))))), 0xC15A9B0, 0x4);
            t52 = *(int *)(((int)stk + 8));
            t53 = (((struct o4_int *)0xC803DF0)->v);
            *(unsigned int *)((t53 + t52)) = ((*(int *)((t53 + t52))) + 0x20);
            t55 = *(int *)(((int)stk + 0));
            if ((((int)0x1 << (int)t55) & (*(int *)0xC817420)) == 0) {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t55 << 2)))) + 0x0)) = 0x0;
            }
            t61 = *(int *)(((int)stk + 0));
            if ((((int)0x1 << (int)t61) & (*(int *)0xC817420)) == 0) {
                return ((int (*)(void))(0xC0F6E00))();
            }
            *(unsigned int *)(((int)stk + 8)) = (t61 << 2);
            if ((unsigned int)(*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t61 << 2)))) + 0x0))) > (unsigned int)(*(int *)(((0xC8426F8 + (*(int *)(((int)stk + 8)))) + 0x0)))) {
                t67 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((0xC8426F8 + t67) + 0x0)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t67))) + 0x0)));
            }
            if ((unsigned int)(*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 8)))))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 8))) + 0xC81747C)))) {
                return ((int (*)(void))(0xC0F6E00))();
            }
            if ((0x1 & (*(int *)0xC817420)) != 0) {
                t81 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t81 + 0x0)) = (((*(int *)((t81 + 0x0))) & 0xF0FFFFFF) | 0x0);
                *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x44) + 0x0);
                FUN_0c0fddbe((*(int *)((((((struct o44_int *)(((int)stk + 0)))->v)) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
                FUN_0c0fddbe(((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0))) + 0x20), 0xC15A9B0, 0x4);
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + 0x0))) + 0x0)) = 0x20;
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + 0x0))) + 0x0)) = 0x0;
            }
            if ((0x2 & (*(int *)0xC817420)) != 0) {
                t98 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t98 + 0x0)) = (((*(int *)((t98 + 0x0))) & 0xF0FFFFFF) | 0x1000000);
                *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x44) + 0x4);
                FUN_0c0fddbe((*(int *)(((*(int *)((((((int)stk + 0) + 0x44) + 0x4) + 0x0))) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
                FUN_0c0fddbe(((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0))) + 0x20), 0xC15A9B0, 0x4);
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + 0x4))) + 0x0)) = 0x20;
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + 0x4))) + 0x0)) = 0x0;
            }
            if ((0x4 & (*(int *)0xC817420)) != 0) {
                t115 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t115 + 0x0)) = (((*(int *)((t115 + 0x0))) & 0xF0FFFFFF) | 0x2000000);
                *(unsigned int *)(((int)stk + 0)) = 0x8;
                FUN_0c0fddbe((*(int *)(((*(int *)(((0x8 + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
                FUN_0c0fddbe(((*(int *)(((*(int *)(((0x8 + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))) + 0x20), 0xC15A9B0, 0x4);
                *(volatile int *)(((int)stk + 0));
                return ((int (*)(void))(0xC0F6CE8))();
            }
            return ((int (*)(void))(0xC0F6CF0))();
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x10);
        t125 = (((int)stk + 0) + 0x10);
        t126 = (((int)stk + 0) + 0x50);
        for (;;) {
            if ((*(int *)(((int)stk + 0))) == ((((struct o4_int *)0xC8173D8)->v))) {
                t129 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t129 + 0x1);
                if ((int)(t129 + 0x1) < (int)0x5) continue;
                t125 = 0xC8173DC;
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t132 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t124 = t125;
                t125 = ((int)stk + 0);
                t125 = (t125 + 0x44);
                if (t132 != (*(int *)(((*(int *)(((((*(int *)((t124 + 0x0))) << 2) + t125) + 0x0))) + 0x0)))) {
                    return ((int (*)(int, int, int, int))(0xC0F6E10))(t126, 0xC803DF0, (((int)stk + 0) + 0x48), (((int)stk + 0) + 0x4C));
                }
                t126 = 0x10;
                (((struct o0_uint *)0xFF000038)->v) = t126;
                (((struct o4_uint *)0xFF000038)->v) = t126;
                t126 = ((int)stk + 0);
                t126 = (t126 + 0x10);
                t125 = (*(int *)((t126 + 0x0)));
                t137 = (0xF0FFFFFF & t125);
                t125 = 0xC8173DC;
                t124 = (*(int *)((t125 + 0x0)));
                t124 = (t124 & 0x7);
                t124 = (t124 << 16);
                t124 = (t124 << 8);
                *(unsigned int *)((t126 + 0x0)) = (t137 | t124);
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t142 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t125 = 0xE0000000;
                t126 = ((t142 & 0x3FFFFFF) | t125);
                t124 = (FUN_0c0fddbe(t126, (((int)stk + 0) + 0x10), 0x20));
                _builtin_prefetch((void *)((t142 & 0x3FFFFFF) | t125));
                return ((int (*)(void))(0xC0F6E10))();
            }
            t145 = *(int *)(((int)stk + 0));
            t125 = 0x1;
            t124 = 0xC817420;
            t125 = ((int)t125 << (int)t145);
            if ((t125 & (*(int *)((t124 + 0x0)))) == 0) {
                t124 = t145;
                t124 = (t124 << 2);
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t124))) + 0x0)) = 0x0;
                t148 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t148 + 0x1);
                if ((int)(t148 + 0x1) < (int)0x5) continue;
                t125 = 0xC8173DC;
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t151 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t124 = t125;
                t125 = ((int)stk + 0);
                t125 = (t125 + 0x44);
                if (t151 != (*(int *)(((*(int *)(((((*(int *)((t124 + 0x0))) << 2) + t125) + 0x0))) + 0x0)))) {
                    return ((int (*)(int, int, int, int))(0xC0F6E10))(t126, 0xC803DF0, (((int)stk + 0) + 0x48), (((int)stk + 0) + 0x4C));
                }
                t126 = 0x10;
                (((struct o0_uint *)0xFF000038)->v) = t126;
                (((struct o4_uint *)0xFF000038)->v) = t126;
                t126 = ((int)stk + 0);
                t126 = (t126 + 0x10);
                t125 = (*(int *)((t126 + 0x0)));
                t156 = (0xF0FFFFFF & t125);
                t125 = 0xC8173DC;
                t124 = (*(int *)((t125 + 0x0)));
                t124 = (t124 & 0x7);
                t124 = (t124 << 16);
                t124 = (t124 << 8);
                *(unsigned int *)((t126 + 0x0)) = (t156 | t124);
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t161 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t125 = 0xE0000000;
                t126 = ((t161 & 0x3FFFFFF) | t125);
                t124 = (FUN_0c0fddbe(t126, (((int)stk + 0) + 0x10), 0x20));
                _builtin_prefetch((void *)((t161 & 0x3FFFFFF) | t125));
                return ((int (*)(void))(0xC0F6E10))();
            }
            *(unsigned int *)(((int)stk + 8)) = (t145 << 2);
            *(unsigned int *)(((int)stk + 12)) = ((t145 << 2) + (((int)stk + 0) + 0x30));
            t125 = ((((struct o4_int *)0xC803DF0)->v));
            t124 = (*(int *)(((int)stk + 8)));
            t166 = *(int *)((((t145 << 2) + (((int)stk + 0) + 0x30)) + 0x0));
            t167 = *(int *)((t125 + t124));
            t125 = ((int)stk + 0);
            t124 = (*(int *)(((int)stk + 8)));
            t125 = (t125 + 0x44);
            t124 = (t124 + t125);
            t125 = (*(int *)((t124 + 0x0)));
            t125 = (*(int *)((t125 + 0x0)));
            t171 = (t167 - t125);
            if ((int)(t167 - t125) < 0) {
                t171 = ((t167 - t125) + 0x3);
            }
            *(unsigned int *)((t166 + 0x0)) = (((t171 >> 1) >> 1) << 2);
            t124 = (*(int *)(((int)stk + 8)));
            t126 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + t124)));
            t124 = (FUN_0c0fddbe(t126, 0xC15A9B0, 0x4));
            t124 = (*(int *)(((int)stk + 8)));
            t125 = 0xC8426CC;
            t180 = (((struct o4_int *)0xC803DF0)->v);
            t125 = (t125 + 0x2C);
            *(unsigned int *)((t180 + t124)) = ((*(int *)((t180 + t124))) + 0x20);
            t125 = (t125 + (*(int *)(((int)stk + 8))));
            t125 = (*(int *)((t125 + 0x0)));
            if ((unsigned int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0))) > (unsigned int)t125) {
                t126 = (*(int *)(((int)stk + 0)));
                t126 = (t126 << 2);
                t124 = t126;
                *(unsigned int *)(((0xC8426F8 + t126) + 0x0)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t124))) + 0x0)));
            }
            t126 = (*(int *)(((int)stk + 0)));
            t126 = (t126 << 2);
            t124 = t126;
            if ((unsigned int)(*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t124))) + 0x0))) <= (unsigned int)(*(int *)((0xC81747C + t124)))) {
                t198 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t198 + 0x1);
                if ((int)(t198 + 0x1) < (int)0x5) continue;
                t125 = 0xC8173DC;
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t201 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t124 = t125;
                t125 = ((int)stk + 0);
                t125 = (t125 + 0x44);
                if (t201 != (*(int *)(((*(int *)(((((*(int *)((t124 + 0x0))) << 2) + t125) + 0x0))) + 0x0)))) {
                    return ((int (*)(int, int, int, int))(0xC0F6E10))(t126, a5, a6, a7);
                }
                t126 = 0x10;
                (((struct o0_uint *)0xFF000038)->v) = t126;
                (((struct o4_uint *)0xFF000038)->v) = t126;
                t126 = ((int)stk + 0);
                t126 = (t126 + 0x10);
                t125 = (*(int *)((t126 + 0x0)));
                t206 = (0xF0FFFFFF & t125);
                t125 = 0xC8173DC;
                t124 = (*(int *)((t125 + 0x0)));
                t124 = (t124 & 0x7);
                t124 = (t124 << 16);
                t124 = (t124 << 8);
                *(unsigned int *)((t126 + 0x0)) = (t206 | t124);
                t124 = ((((struct o4_int *)0xC803DF0)->v));
                t211 = *(int *)((((*(int *)((t125 + 0x0))) << 2) + t124));
                t125 = 0xE0000000;
                t126 = ((t211 & 0x3FFFFFF) | t125);
                t124 = (FUN_0c0fddbe(t126, (((int)stk + 0) + 0x10), 0x20));
                _builtin_prefetch((void *)((t211 & 0x3FFFFFF) | t125));
                return ((int (*)(void))(0xC0F6E10))();
            }
            break;
        }
        t214 = t125;
        t215 = t126;
        t216 = 0x0;
        for (;;) {
            if (t216 != ((((struct o4_int *)0xC8173D8)->v))) {
                t214 = 0xC817420;
                if ((((int)0x1 << (int)t216) & (*(int *)((t214 + 0x0)))) != 0) {
                    t219 = *(int *)(((int)stk + 4));
                    t215 = t216;
                    t215 = (t215 << 2);
                    t214 = (*(int *)((t219 + 0x0)));
                    t214 = (t214 & 0xF0FFFFFF);
                    t214 = (t214 | ((t216 << 16) << 8));
                    *(unsigned int *)((t219 + 0x0)) = t214;
                    *(unsigned int *)(((int)stk + 0)) = t215;
                    t215 = (t215 + (((int)stk + 0) + 0x44));
                    *(unsigned int *)(((int)stk + 8)) = t215;
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    FUN_0c0fddbe(t215, (((int)stk + 0) + 0x10), 0x20);
                    t215 = (*(int *)(((int)stk + 8)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (t215 + 0x20);
                    FUN_0c0fddbe(t215, 0xC15A9B0, 0x4);
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 0)))))) + 0x0)) = 0x20;
                } else {
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                    t239 = t214;
                    t242 = t215;
                }
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                t239 = t214;
                t242 = t215;
            }
            t214 = t239;
            t215 = t242;
            t216 = (t216 + 0x1);
            if (t216 != ((((struct o4_int *)0xC8173D8)->v))) {
                t214 = 0xC817420;
                if ((((int)0x1 << (int)t216) & (*(int *)((t214 + 0x0)))) != 0) {
                    t246 = *(int *)(((int)stk + 4));
                    t215 = t216;
                    t215 = (t215 << 2);
                    t214 = (*(int *)((t246 + 0x0)));
                    t214 = (t214 & 0xF0FFFFFF);
                    t214 = (t214 | ((t216 << 16) << 8));
                    *(unsigned int *)((t246 + 0x0)) = t214;
                    *(unsigned int *)(((int)stk + 8)) = t215;
                    t215 = (t215 + (((int)stk + 0) + 0x44));
                    *(unsigned int *)(((int)stk + 0)) = t215;
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    FUN_0c0fddbe(t215, (((int)stk + 0) + 0x10), 0x20);
                    t215 = (*(int *)(((int)stk + 0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (t215 + 0x20);
                    FUN_0c0fddbe(t215, 0xC15A9B0, 0x4);
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 8)))))) + 0x0)) = 0x20;
                } else {
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                    t266 = t214;
                    t269 = t215;
                }
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                t266 = t214;
                t269 = t215;
            }
            t214 = t266;
            t215 = t269;
            t216 = (t216 + 0x1);
            if (t216 != ((((struct o4_int *)0xC8173D8)->v))) {
                t214 = 0xC817420;
                if ((((int)0x1 << (int)t216) & (*(int *)((t214 + 0x0)))) != 0) {
                    t273 = *(int *)(((int)stk + 4));
                    t215 = t216;
                    t215 = (t215 << 2);
                    t214 = (*(int *)((t273 + 0x0)));
                    t214 = (t214 & 0xF0FFFFFF);
                    t214 = (t214 | ((t216 << 16) << 8));
                    *(unsigned int *)((t273 + 0x0)) = t214;
                    *(unsigned int *)(((int)stk + 0)) = t215;
                    t215 = (t215 + (((int)stk + 0) + 0x44));
                    *(unsigned int *)(((int)stk + 8)) = t215;
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    FUN_0c0fddbe(t215, (((int)stk + 0) + 0x10), 0x20);
                    t215 = (*(int *)(((int)stk + 8)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (t215 + 0x20);
                    FUN_0c0fddbe(t215, 0xC15A9B0, 0x4);
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 0)))))) + 0x0)) = 0x20;
                } else {
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                    t293 = t214;
                    t296 = t215;
                }
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                t293 = t214;
                t296 = t215;
            }
            t214 = t293;
            t215 = t296;
            t216 = (t216 + 0x1);
            if (t216 != ((((struct o4_int *)0xC8173D8)->v))) {
                t214 = 0xC817420;
                if ((((int)0x1 << (int)t216) & (*(int *)((t214 + 0x0)))) != 0) {
                    t300 = *(int *)(((int)stk + 4));
                    t215 = t216;
                    t215 = (t215 << 2);
                    t214 = (*(int *)((t300 + 0x0)));
                    t214 = (t214 & 0xF0FFFFFF);
                    t214 = (t214 | ((t216 << 16) << 8));
                    *(unsigned int *)((t300 + 0x0)) = t214;
                    *(unsigned int *)(((int)stk + 8)) = t215;
                    t215 = (t215 + (((int)stk + 0) + 0x44));
                    *(unsigned int *)(((int)stk + 0)) = t215;
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    FUN_0c0fddbe(t215, (((int)stk + 0) + 0x10), 0x20);
                    t215 = (*(int *)(((int)stk + 0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (*(int *)((t215 + 0x0)));
                    t215 = (t215 + 0x20);
                    FUN_0c0fddbe(t215, 0xC15A9B0, 0x4);
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 8)))))) + 0x0)) = 0x20;
                } else {
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                    t320 = t214;
                    t323 = t215;
                }
            } else {
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t216 << 2)))) + 0x0)) = 0x0;
                t320 = t214;
                t323 = t215;
            }
            t214 = t320;
            t216 = (t216 + 0x1);
            t215 = t323;
            if ((int)t216 < (int)0x1) continue;
            break;
        }
        if ((int)t216 < (int)0x5) {
            t325 = t215;
            t326 = t216;
            t327 = 0x1;
            for (;;) {
                if (t326 != ((((struct o4_int *)0xC8173D8)->v))) {
                    if ((((int)0x1 << (int)t326) & (*(int *)0xC817420)) != 0) {
                        t330 = *(int *)(((int)stk + 4));
                        t327 = t326;
                        t327 = (t327 << 2);
                        *(unsigned int *)((t330 + 0x0)) = (((*(int *)((t330 + 0x0))) & 0xF0FFFFFF) | ((t326 << 16) << 8));
                        *(unsigned int *)(((int)stk + 0)) = t327;
                        t327 = (t327 + (((int)stk + 0) + 0x44));
                        t325 = (*(int *)((t327 + 0x0)));
                        t325 = (*(int *)((t325 + 0x0)));
                        FUN_0c0fddbe(t325, (((int)stk + 0) + 0x10), 0x20);
                        t325 = (*(int *)((t327 + 0x0)));
                        t325 = (*(int *)((t325 + 0x0)));
                        t325 = (t325 + 0x20);
                        FUN_0c0fddbe(t325, 0xC15A9B0, 0x4);
                        *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (*(int *)(((int)stk + 0)))))) + 0x0)) = 0x20;
                    } else {
                        *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t326 << 2)))) + 0x0)) = 0x0;
                        t352 = t325;
                    }
                } else {
                    *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + (t326 << 2)))) + 0x0)) = 0x0;
                    t352 = t325;
                }
                t325 = t352;
                t326 = (t326 + 0x1);
                if ((int)t326 >= (int)0x5) {
                    break;
                }
            }
        }
        t361 = ((int (*)(int))(FUN_0c108fe8))(0x2);
        if ((*(int *)(((((((struct o4_int *)0xC8173D8)->v)) << 2) + ((((struct o4_int *)0xC803DF0)->v))))) != (*(int *)(((*(int *)((((((((struct o4_int *)0xC8173D8)->v)) << 2) + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0)))) {
            return ((int (*)(void))(0xC0F6E10))();
        }
        (((struct o0_uint *)0xFF000038)->v) = 0x10;
        (((struct o4_uint *)0xFF000038)->v) = 0x10;
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((0xF0FFFFFF & (*(int *)(((((int)stk + 0) + 0x10) + 0x0)))) | (((((((struct o4_int *)0xC8173D8)->v)) & 0x7) << 16) << 8));
        t372 = *(int *)(((((((struct o4_int *)0xC8173D8)->v)) << 2) + ((((struct o4_int *)0xC803DF0)->v))));
        FUN_0c0fddbe(((t372 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x10), 0x20);
        _builtin_prefetch((void *)((t372 & 0x3FFFFFF) | 0xE0000000));
        return ((int (*)(void))(0xC0F6E10))();
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t374 = (((int)stk + 0) + 0x50);
    t375 = 0xC803DF0;
    t376 = (((int)stk + 0) + 0x48);
    t377 = (((int)stk + 0) + 0x4C);
    for (;;) {
        t378 = *(int *)(((int)stk + 4));
        if ((((int)0x1 << (int)t378) & (*(int *)0xC817420)) != 0) {
            *(unsigned int *)(((int)stk + 0)) = (t378 << 2);
            t381 = *(int *)(((((int)stk + 0) + 0x30) + (t378 << 2)));
            t382 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + (t378 << 2)));
            t385 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
            t386 = (t382 - t385);
            if ((int)(t382 - t385) < 0) {
                t386 = ((t382 - t385) + 0x3);
            }
            t375 = 0xC15A9B0;
            *(unsigned int *)((t381 + 0x0)) = (((t386 >> 1) >> 1) << 2);
            t376 = 0x4;
            t374 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 0))))));
            FUN_0c0fddbe(t374, t375, t376);
            t394 = *(int *)(((int)stk + 0));
            t395 = (((struct o4_int *)0xC803DF0)->v);
            *(unsigned int *)((t395 + t394)) = ((*(int *)((t395 + t394))) + 0x20);
        } else {
            t401 = t374;
            t402 = t375;
            t403 = t376;
            t404 = t377;
        }
        t406 = *(int *)(((int)stk + 4));
        t374 = t401;
        t375 = t402;
        t376 = t403;
        t377 = t404;
        *(unsigned int *)(((int)stk + 4)) = (t406 + 0x1);
        if ((((int)0x1 << (int)(t406 + 0x1)) & (*(int *)0xC817420)) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t406 + 0x1) << 2);
            t409 = *(int *)(((((int)stk + 0) + 0x30) + ((t406 + 0x1) << 2)));
            t410 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + ((t406 + 0x1) << 2)));
            t413 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
            t414 = (t410 - t413);
            if ((int)(t410 - t413) < 0) {
                t414 = ((t410 - t413) + 0x3);
            }
            t375 = 0xC15A9B0;
            *(unsigned int *)((t409 + 0x0)) = (((t414 >> 1) >> 1) << 2);
            t376 = 0x4;
            t374 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 0))))));
            FUN_0c0fddbe(t374, t375, t376);
            t422 = *(int *)(((int)stk + 0));
            t423 = (((struct o4_int *)0xC803DF0)->v);
            *(unsigned int *)((t423 + t422)) = ((*(int *)((t423 + t422))) + 0x20);
        } else {
            t429 = t374;
            t430 = t375;
            t431 = t376;
            t432 = t377;
        }
        t434 = *(int *)(((int)stk + 4));
        t374 = t429;
        t375 = t430;
        t376 = t431;
        t377 = t432;
        *(unsigned int *)(((int)stk + 4)) = (t434 + 0x1);
        if ((((int)0x1 << (int)(t434 + 0x1)) & (*(int *)0xC817420)) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t434 + 0x1) << 2);
            t437 = *(int *)(((((int)stk + 0) + 0x30) + ((t434 + 0x1) << 2)));
            t438 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + ((t434 + 0x1) << 2)));
            t441 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
            t442 = (t438 - t441);
            if ((int)(t438 - t441) < 0) {
                t442 = ((t438 - t441) + 0x3);
            }
            t375 = 0xC15A9B0;
            *(unsigned int *)((t437 + 0x0)) = (((t442 >> 1) >> 1) << 2);
            t376 = 0x4;
            t374 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 0))))));
            FUN_0c0fddbe(t374, t375, t376);
            t450 = *(int *)(((int)stk + 0));
            t451 = (((struct o4_int *)0xC803DF0)->v);
            *(unsigned int *)((t451 + t450)) = ((*(int *)((t451 + t450))) + 0x20);
        } else {
            t457 = t374;
            t458 = t375;
            t459 = t376;
            t460 = t377;
        }
        t462 = *(int *)(((int)stk + 4));
        t374 = t457;
        t375 = t458;
        t376 = t459;
        t377 = t460;
        *(unsigned int *)(((int)stk + 4)) = (t462 + 0x1);
        t481 = 0xC817420;
        if ((((int)0x1 << (int)(t462 + 0x1)) & (*(int *)0xC817420)) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t462 + 0x1) << 2);
            t465 = *(int *)(((((int)stk + 0) + 0x30) + ((t462 + 0x1) << 2)));
            t466 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + ((t462 + 0x1) << 2)));
            t469 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
            t470 = (t466 - t469);
            if ((int)(t466 - t469) < 0) {
                t470 = ((t466 - t469) + 0x3);
            }
            t375 = 0xC15A9B0;
            *(unsigned int *)((t465 + 0x0)) = (((t470 >> 1) >> 1) << 2);
            t376 = 0x4;
            t374 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 0))))));
            FUN_0c0fddbe(t374, t375, t376);
            t481 = *(int *)(((int)stk + 0));
            t479 = (((struct o4_int *)0xC803DF0)->v);
            *(unsigned int *)((t479 + t481)) = ((*(int *)((t479 + t481))) + 0x20);
        } else {
            t485 = t374;
            t486 = t375;
            t487 = t376;
            t488 = t377;
        }
        t490 = *(int *)(((int)stk + 4));
        t374 = t485;
        t375 = t486;
        t376 = t487;
        t377 = t488;
        *(unsigned int *)(((int)stk + 4)) = (t490 + 0x1);
        if ((int)(t490 + 0x1) < (int)0x1) continue;
        break;
    }
    t526 = t481;
    t531 = t375;
    t532 = t376;
    t533 = t377;
    if ((int)(*(int *)(((int)stk + 4))) < (int)0x5) {
        t493 = t374;
        t494 = t375;
        t495 = t376;
        t496 = t377;
        for (;;) {
            t497 = *(int *)(((int)stk + 4));
            t516 = 0xC817420;
            if ((((int)0x1 << (int)t497) & (*(int *)0xC817420)) != 0) {
                *(unsigned int *)(((int)stk + 0)) = (t497 << 2);
                t500 = *(int *)(((((int)stk + 0) + 0x30) + (t497 << 2)));
                t501 = *(int *)((((((struct o4_int *)0xC803DF0)->v)) + (t497 << 2)));
                t504 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
                t505 = (t501 - t504);
                if ((int)(t501 - t504) < 0) {
                    t505 = ((t501 - t504) + 0x3);
                }
                t494 = 0xC15A9B0;
                *(unsigned int *)((t500 + 0x0)) = (((t505 >> 1) >> 1) << 2);
                t495 = 0x4;
                t493 = (*(int *)((((((struct o4_int *)0xC803DF0)->v)) + (*(int *)(((int)stk + 0))))));
                FUN_0c0fddbe(t493, t494, t495);
                t516 = *(int *)(((int)stk + 0));
                t514 = (((struct o4_int *)0xC803DF0)->v);
                *(unsigned int *)((t514 + t516)) = ((*(int *)((t514 + t516))) + 0x20);
            } else {
                t520 = t493;
                t521 = t494;
                t522 = t495;
                t523 = t496;
            }
            t525 = *(int *)(((int)stk + 4));
            t493 = t520;
            t494 = t521;
            t495 = t522;
            t496 = t523;
            *(unsigned int *)(((int)stk + 4)) = (t525 + 0x1);
            if ((int)(t525 + 0x1) >= (int)0x5) {
                break;
            }
        }
        t526 = t516;
        t531 = t494;
        t532 = t495;
        t533 = t496;
    }
    t534 = t526;
    t535 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t535) & (*(int *)0xC817420)) == 0) {
            t534 = t535;
            t534 = (t534 << 2);
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t534))) + 0x0)) = 0x0;
        }
        t535 = (t535 + 0x1);
        if ((((int)0x1 << (int)t535) & (*(int *)0xC817420)) == 0) {
            t534 = t535;
            t534 = (t534 << 2);
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t534))) + 0x0)) = 0x0;
        }
        t535 = (t535 + 0x1);
        if ((((int)0x1 << (int)t535) & (*(int *)0xC817420)) == 0) {
            t534 = t535;
            t534 = (t534 << 2);
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t534))) + 0x0)) = 0x0;
        }
        t535 = (t535 + 0x1);
        if ((((int)0x1 << (int)t535) & (*(int *)0xC817420)) == 0) {
            t534 = t535;
            t534 = (t534 << 2);
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t534))) + 0x0)) = 0x0;
        }
        t535 = (t535 + 0x1);
        if ((int)t535 >= (int)0x1) {
            break;
        }
    }
    t565 = t534;
    if ((int)t535 < (int)0x5) {
        t557 = t534;
        t558 = t535;
        for (;;) {
            if ((((int)0x1 << (int)t558) & (*(int *)0xC817420)) == 0) {
                t557 = t558;
                t557 = (t557 << 2);
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t557))) + 0x0)) = 0x0;
            }
            t558 = (t558 + 0x1);
            if ((int)t558 >= (int)0x5) {
                break;
            }
        }
        t565 = t557;
    }
    t570 = t565;
    t571 = 0x0;
    t572 = t531;
    for (;;) {
        if ((((int)0x1 << (int)t571) & (*(int *)0xC817420)) == 0) {
            t571 = (t571 + 0x1);
            if ((int)t571 < (int)0x5) continue;
            return ((int (*)(int, int, int, int))(0xC0F6E10))(t571, t572, t532, t533);
        }
        t572 = t571;
        t572 = (t572 << 2);
        t570 = t572;
        if ((unsigned int)(*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t570))) + 0x0))) > (unsigned int)(*(int *)(((0xC8426F8 + t572) + 0x0)))) {
            t572 = t571;
            t572 = (t572 << 2);
            t570 = t572;
            *(unsigned int *)(((0xC8426F8 + t572) + 0x0)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t570))) + 0x0)));
        }
        t572 = t571;
        t572 = (t572 << 2);
        t570 = t572;
        if ((unsigned int)(*(int *)(((*(int *)(((((int)stk + 0) + 0x30) + t570))) + 0x0))) <= (unsigned int)(*(int *)((0xC81747C + t570)))) {
            t571 = (t571 + 0x1);
            if ((int)t571 < (int)0x5) continue;
            return ((int (*)(int, int, int, int))(0xC0F6E10))(t571, t572, t532, t533);
        }
        break;
    }
    t589 = t570;
    t590 = t571;
    t591 = t572;
    t592 = t532;
    t593 = t533;
    t594 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t594) & (*(int *)0xC817420)) != 0) {
            t590 = t594;
            t591 = ((int)stk + 0);
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) & 0xF0FFFFFF) | ((t594 << 16) << 8));
            t590 = (t590 << 2);
            *(unsigned int *)(((int)stk + 4)) = t590;
            t590 = (t590 + (((int)stk + 0) + 0x44));
            *(unsigned int *)(((int)stk + 0)) = t590;
            t592 = 0x20;
            t590 = (*(int *)((t590 + 0x0)));
            t591 = (t591 + 0x10);
            t590 = (*(int *)((t590 + 0x0)));
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t590 = (*(int *)(((int)stk + 0)));
            t592 = 0x4;
            t591 = 0xC15A9B0;
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (t590 + 0x20);
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t589 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t589))) + 0x0)) = 0x20;
        } else {
            t609 = t590;
            t610 = t591;
            t611 = t592;
            t612 = t593;
        }
        t590 = t609;
        t591 = t610;
        t592 = t611;
        t593 = t612;
        t594 = (t594 + 0x1);
        if ((((int)0x1 << (int)t594) & (*(int *)0xC817420)) != 0) {
            t590 = t594;
            t591 = ((int)stk + 0);
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) & 0xF0FFFFFF) | ((t594 << 16) << 8));
            t590 = (t590 << 2);
            *(unsigned int *)(((int)stk + 4)) = t590;
            t590 = (t590 + (((int)stk + 0) + 0x44));
            *(unsigned int *)(((int)stk + 0)) = t590;
            t592 = 0x20;
            t590 = (*(int *)((t590 + 0x0)));
            t591 = (t591 + 0x10);
            t590 = (*(int *)((t590 + 0x0)));
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t590 = (*(int *)(((int)stk + 0)));
            t592 = 0x4;
            t591 = 0xC15A9B0;
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (t590 + 0x20);
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t589 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t589))) + 0x0)) = 0x20;
        } else {
            t629 = t590;
            t630 = t591;
            t631 = t592;
            t632 = t593;
        }
        t590 = t629;
        t591 = t630;
        t592 = t631;
        t593 = t632;
        t594 = (t594 + 0x1);
        if ((((int)0x1 << (int)t594) & (*(int *)0xC817420)) != 0) {
            t590 = t594;
            t591 = ((int)stk + 0);
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) & 0xF0FFFFFF) | ((t594 << 16) << 8));
            t590 = (t590 << 2);
            *(unsigned int *)(((int)stk + 0)) = t590;
            t590 = (t590 + (((int)stk + 0) + 0x44));
            *(unsigned int *)(((int)stk + 4)) = t590;
            t592 = 0x20;
            t590 = (*(int *)((t590 + 0x0)));
            t591 = (t591 + 0x10);
            t590 = (*(int *)((t590 + 0x0)));
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t590 = (*(int *)(((int)stk + 4)));
            t592 = 0x4;
            t591 = 0xC15A9B0;
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (t590 + 0x20);
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t589 = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t589))) + 0x0)) = 0x20;
        } else {
            t649 = t590;
            t650 = t591;
            t651 = t592;
            t652 = t593;
        }
        t590 = t649;
        t591 = t650;
        t592 = t651;
        t593 = t652;
        t594 = (t594 + 0x1);
        if ((((int)0x1 << (int)t594) & (*(int *)0xC817420)) != 0) {
            t590 = t594;
            t591 = ((int)stk + 0);
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) & 0xF0FFFFFF) | ((t594 << 16) << 8));
            t590 = (t590 << 2);
            *(unsigned int *)(((int)stk + 0)) = t590;
            t590 = (t590 + (((int)stk + 0) + 0x44));
            *(unsigned int *)(((int)stk + 4)) = t590;
            t592 = 0x20;
            t590 = (*(int *)((t590 + 0x0)));
            t591 = (t591 + 0x10);
            t590 = (*(int *)((t590 + 0x0)));
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t590 = (*(int *)(((int)stk + 4)));
            t592 = 0x4;
            t591 = 0xC15A9B0;
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (*(int *)((t590 + 0x0)));
            t590 = (t590 + 0x20);
            t589 = (FUN_0c0fddbe(t590, t591, t592));
            t589 = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t589))) + 0x0)) = 0x20;
        } else {
            t669 = t590;
            t670 = t591;
            t671 = t592;
            t672 = t593;
        }
        t594 = (t594 + 0x1);
        t590 = t669;
        t591 = t670;
        t592 = t671;
        t593 = t672;
        if ((int)t594 < (int)0x1) continue;
        break;
    }
    t707 = t591;
    t708 = t592;
    t709 = t593;
    if ((int)t594 < (int)0x5) {
        t675 = t589;
        t676 = t590;
        t677 = t591;
        t678 = t592;
        t679 = t593;
        t680 = t594;
        for (;;) {
            if ((((int)0x1 << (int)t680) & (*(int *)0xC817420)) != 0) {
                t676 = t680;
                t677 = ((int)stk + 0);
                *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) & 0xF0FFFFFF) | ((t680 << 16) << 8));
                t676 = (t676 << 2);
                *(unsigned int *)(((int)stk + 0)) = t676;
                t676 = (t676 + (((int)stk + 0) + 0x44));
                *(unsigned int *)(((int)stk + 4)) = t676;
                t678 = 0x20;
                t676 = (*(int *)((t676 + 0x0)));
                t677 = (t677 + 0x10);
                t676 = (*(int *)((t676 + 0x0)));
                t675 = (FUN_0c0fddbe(t676, t677, t678));
                t676 = (*(int *)(((int)stk + 4)));
                t678 = 0x4;
                t677 = 0xC15A9B0;
                t676 = (*(int *)((t676 + 0x0)));
                t676 = (*(int *)((t676 + 0x0)));
                t676 = (t676 + 0x20);
                t675 = (FUN_0c0fddbe(t676, t677, t678));
                t675 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)(((*(int *)(((((int)stk + 0) + 0x30) + t675))) + 0x0)) = 0x20;
            } else {
                t695 = t676;
                t696 = t677;
                t697 = t678;
                t698 = t679;
            }
            t676 = t695;
            t677 = t696;
            t678 = t697;
            t679 = t698;
            t680 = (t680 + 0x1);
            if ((int)t680 >= (int)0x5) {
                break;
            }
        }
        t707 = t677;
        t708 = t678;
        t709 = t679;
    }
    t710 = ((int (*)(int, int, int, int))(FUN_0c108fe8))(0x2, t707, t708, t709);
    return ((int (*)(void))(0xC0F6E10))();
}
