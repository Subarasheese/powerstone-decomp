/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0fac00(int);
int FUN_0c0fa6c0(int);
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct o28_int { char p[0x28]; int v; };
int FUN_0c02f3a6(int, int);
int fx_spawn_03c5c0(int, int);
int FUN_0c0555c4(void);
int obj_destroy(int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c0b13c8(int, int);
int FUN_0c0b147c(int, int, int);
int FUN_0c0b1508(int, int, int);
int FUN_0c0b1536(int, int);
int stage_gimmick_20_pick_random_point(int, int);
extern float FUN_0c0b1652();
int dbg_print_at(int, float, float);
int FUN_0c0ce910(int, int);
int testmode_check_start_shot1(void);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _divls(void);
int _modls(void);
int _modlu(void);
int FUN_0c0f059e(int);
int FUN_0c0f0cba(int, int);
int gfx_set_frame_buffer_size(int, int, int);
int FUN_0c0fa42e(int, int, int, int, int);
int FUN_0c0fa540(int, int, int, int, int, int);
int FUN_0c0fa8c0(int);
int FUN_0c0fa966(int, int, int, int, int, int, int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c109440(int, int, int);
int FUN_0c110c26(int, ...);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetLE4(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int, int, int, int);
int stage_gimmick_20_run(int a4, int a5, int a6, int a7, float f4);
int testmode_input_test_screen(void);
int FUN_0c02f3f2(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f05c8(int a4, int a5, int a6, int a7);
int fx_update_30(int a4);
int FUN_0c0f94a0(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0f05c8(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x18) + 0x4);
    v0_0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 20)) = 0xC7FE6AC;
    *(unsigned int *)(((int)stk + 4)) = 0xC7FE6AE;
    *(unsigned int *)(((int)stk + 8)) = 0xC7FE6AF;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    _builtin_set_imask(0xF);
    v0_3 = ((((int)stk + 4) + 0x18));
    v0_2 = (0xC346BDC);
    v0_1 = (0xC0FF1AC);
    v0_0 = (0xC346BD8);
    v0_4 = (0xC7FE6AF);
    v0_5 = (0xC7FE6A0);
    if ((((((struct o0_int *)0xC346BDC)->v)) != 0)) goto L_C0F0626;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c0ff1ac(0x900, 0xC0F0590, 0x50, (*(int *)((v0_0 + 0x0)))));
    L_C0F0626:;
    v0_2 = (0xC346BE0);
    if ((((((struct o4_int *)0xC346BDC)->v)) != 0)) goto L_C0F063C;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c0ff1ac(0xA40, 0xC0F0576, 0x10, (*(int *)((v0_0 + 0x0)))));
    L_C0F063C:;
    v0_6 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (0xC0F1622);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_C0F06BE;
    v0_2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x1C)))))(v0_4, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F06BE;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_1))->v) = 0x4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_1;
    v0_2 = gdFsWaitCompleteReq(v0_1, R5, R6, R7);
    v0_1 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x20)))))(v0_3, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24))) == 0;
    v0_3 = (v0_2);
    v0_6 = (0x4);
    if (v0_1) goto L_C0F06BE;
    if ((v0_3 == 0)) goto L_C0F069E;
    if (!((v0_3 == -29))) goto L_C0F087E;
    if (((*(int *)(((int)stk + 28))) == 6)) goto L_C0F069A;
    goto L_C0F087E;
    L_C0F087E:;
    v0_4 = (v0_3);
    L_C0F08AA:;
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    return v0_4;
    L_C0F069A:;
    R5 = (0xFFFFFFE9);
    L_C0F0896:;
    v0_4 = (R5);
    goto L_C0F08AA;
    L_C0F069E:;
    if (!(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) == 0x80))) goto L_C0F0894;
    v0_1 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C0F06F0;
    goto L_C0F06BE;
    L_C0F0894:;
    R5 = (0xFFFFFFFB);
    goto L_C0F0896;
    L_C0F06BE:;
    R5 = (0xFFFFFFFE);
    goto L_C0F0896;
    L_C0F06F0:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x2C)) = 0x0;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o4C_int *)((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC)))))->v))))(v0_5, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_1 = (0x0);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C0F074C;
    *(unsigned int *)((v0_2 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_2))->v) = v0_6;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = v0_2;
    v0_2 = gdFsWaitCompleteReq(v0_2, R5, R6, R7);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_C0F074C;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))) - 48) << 16));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) - 48) << 8));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) - 48));
    L_C0F074C:;
    v0_2 = (gdFsReadWG((*(int *)0xC15A270), 0x1, ((*(int *)((v0_0 + 0x0))) + 0x40))) == 0;
    if (!(v0_2)) goto L_C0F0886;
    v0_2 = (gdFsCheckMedia(((*(int *)((v0_0 + 0x0))) + 0x40))) != 0;
    if (v0_2) goto L_C0F0770;
    goto L_C0F0894;
    L_C0F0886:;
    R5 = (0xFFFFFFFC);
    goto L_C0F0896;
    L_C0F0770:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + v0_2);
    *(unsigned int *)(((0x4 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x8C)));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x96);
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x8 + v0_2);
    *(unsigned int *)(((0x8 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x84)));
    (((struct o18_uint *)0xC7FE6C0)->v) = 0xC7FE6C0;
    (((struct o0_ushort *)0xC7FE6C0)->v) = (*(signed char *)0x8C0080FC);
    v0_3 = (0x96);
    v0_2 = (0xC7FE6D8);
    v0_4 = (0x8C0080F0);
    if (((*(short *)((((((struct o18_int *)0xC7FE6C0)->v)) + 0x0))) != 1)) goto L_C0F07E4;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = (*(signed char *)((v0_4 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_5 = v0_4;
    v0_4 = (v0_1);
    R5 = v0_5;
    R6 = (((*(int *)((v0_2 + 0x0))) + 0x8));
    L_C0F07CE:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_C0F07E2;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_5 = (int)(v0_4 + 0x1) < (int)0xC;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_5) goto L_C0F07CE;
    L_C0F07E2:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_C0F07E4:;
    v0_4 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x9E));
    v0_5 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_4 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), (v0_4 + v0_3), (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), v0_5);
    v0_3 = (v0_4);
    if ((v0_4 == -12)) goto L_C0F087E;
    if ((v0_3 != 0)) goto L_C0F0886;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_C0F0894;
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_3 = (v0_4);
    if (((*(short *)((v0_4 + 0x0))) != 1)) goto L_C0F08A0;
    v0_3 = (FUN_0c0f0cba((v0_3 + 0x8), (((int)stk + 4) + 0x14))) != 0;
    if (v0_3) goto L_C0F0886;
    v0_3 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_3;
    v0_2 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), v0_3, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), 0x1);
    v0_3 = (v0_2);
    if ((v0_2 != -12)) goto L_C0F0882;
    goto L_C0F087E;
    L_C0F0882:;
    if ((v0_3 == 0)) goto L_C0F088A;
    goto L_C0F0886;
    L_C0F088A:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_C0F089A;
    goto L_C0F0894;
    L_C0F089A:;
    FUN_0c0f059e((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))));
    L_C0F08A0:;
    (((struct o38_ushort *)((*(int *)((v0_0 + 0x0)))))->v) = 0x1;
    v0_4 = (v0_1);
    goto L_C0F08AA;
}

int FUN_0c0f94a0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[26];
    register int t12;
    register int t30;
    register int t31;
    register int t35;
    register int t37;
    register int t38;
    register int t39;
    register int t45;
    register int t46;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t69;
    register int t71;
    register int t73;
    register int t77;
    register int t136;
    register int t81;
    register int t84;
    register int t88;
    register int t90;
    int t91;
    register int t101;
    register int t102;
    register int t103;
    register int t104;
    register int t107;
    register int t108;
    register int t109;
    register int t117;
    register int t118;
    register int t119;
    register int t120;
    register int t121;
    register int t123;
    register int t125;
    register int t144;
    register int t67;

    stk[17] = a8;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = ((((struct o0_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = ((((struct o4_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = ((((struct o8_int *)0xC15AA30)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0xC)) = ((((struct oC_int *)0xC15AA30)->v));
    (((struct o0_uint *)0xC803DCC)->v) = 0x1;
    if (((*(int *)0xC816FC8) & 64) != 0) {
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x20);
    }
    (((struct o0_uint *)0xC803D78)->v) = a4;
    (((struct o4_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 16)));
    (((struct o8_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 20)));
    (((struct oC_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 24)));
    (((struct o10_uint *)0xC803D78)->v) = a8;
    if (((((struct o0_int *)0xC3471D0)->v)) != 0x80000000) {
        t12 = (((struct o0_int *)0xC3471D0)->v);
        (((struct o0_uint *)0xC3471D0)->v) = (t12 | 0x100);
        t144 = 0x0;
        if ((t12 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC3471D0)->v) = 0x80000000;
            t144 = (FUN_0c0fac00(((((struct o0_int *)0xC803DCC)->v))));
        }
    } else {
        *(int *)((int)stk + 12) = 0x0;
        *(unsigned int *)(((int)stk + 28)) = (FUN_0c0fa42e((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o10_int *)0xC817410)->v));
        (((struct o4_uint *)0xC3471D0)->v) = 0x0;
        t30 = 0xC803E60;
        t31 = 0x0;
        for (;;) {
            *(unsigned int *)((t30 + 0x0)) = 0x0;
            t31 = (t31 + 0x2);
            t30 = (t30 + 0x4);
            *(unsigned int *)((t30 + 0x0)) = 0x0;
            t30 = (t30 + 0x4);
            if ((unsigned int)t31 >= (unsigned int)0x4) {
                break;
            }
        }
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t35 = FUN_0c0fa540((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 32)) = t35;
        FUN_0c0fa8c0(t35);
        t37 = *(int *)(((int)stk + 16));
        t38 = *(int *)(((int)stk + 20));
        t39 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 28)) = (((((*(int *)(((int)stk + 28))) << 2) << 1) + (((t37 + t38) + t39) + a8)) + 0xA0);
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x4)) = (*(int *)(((int)stk + 20)));
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x8)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0xC)) = a8;
        t45 = *(int *)(((((int)stk + 16) + 0x24) + 0x0));
        t49 = t45;
        if (t45 != 0) {
            t46 = *(int *)(((((int)stk + 16) + 0x24) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = (t46 - 16);
            t49 = (t46 - 16);
        }
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 16) + 0x24) + 0x4);
        t50 = a8;
        t51 = ((((int)stk + 16) + 0x24) + 0x4);
        t52 = ((((int)stk + 16) + 0x24) + 0x4);
        t53 = 0x1;
        for (;;) {
            if ((unsigned int)t53 >= (unsigned int)0x4) {
                break;
            }
            t49 = (*(int *)((t51 + 0x0)));
            t53 = (t53 + 0x1);
            if (t49 != 0) {
                t50 = (*(int *)((t52 + 0x0)));
                t50 = (t50 - 16);
                *(unsigned int *)((t52 + 0x0)) = t50;
            }
            t51 = (t51 + 0x4);
            t52 = (t52 + 0x4);
        }
        (((struct o4_uint *)0xC803D78)->v) = (*(int *)(((((int)stk + 16) + 0x24) + 0x0)));
        (((struct o8_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x24) + 0x8);
        (((struct oC_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0)));
        (((struct o10_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 16) + 0x24) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
        t67 = (*(int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 68)) = t67;
        t69 = 0x2;
        if ((*(int *)0xC8172FC) == 1) {
            t69 = 0x1;
        }
        t71 = t69;
        *(int *)((int)stk + 12) = t71;
        t73 = (*(int *)(((int)stk + 28)));
        *(int *)((int)stk + 8) = t73;
        *(int *)((int)stk + 4) = 0x0;
        t77 = FUN_0c0fa966((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), t67, 0x0, t73, t71);
        t136 = t77;
        if (t77 == 0) {
            gfx_set_frame_buffer_size(0xFF, ((((struct o18_int *)0xC803D78)->v)), ((((struct o24_int *)0xC803D78)->v)));
            t81 = (((t37 + t38) + t39) + a8);
            if ((unsigned int)(((t37 + t38) + t39) + a8) < (unsigned int)0x10000) {
                t81 = 0x10000;
            }
            (((struct o4_uint *)0xC803DCC)->v) = ((t81 << 2) + ((((struct o10_int *)0xC803DCC)->v)));
            t84 = (((struct oC_int *)0xC803DCC)->v);
            if ((unsigned int)((((struct o4_int *)0xC803DCC)->v)) > (unsigned int)((-t84) + 0x200000)) {
                (((struct o4_uint *)0xC803DCC)->v) = ((-t84) + 0x200000);
            }
            t88 = FUN_0c109440(((((struct o4_int *)0xC803DCC)->v)), 0xC803E58, 0xC803E5C);
            if (t88 == 0) {
                (((struct o0_uint *)0xC817410)->v) = ((((struct o4_int *)0xC803DCC)->v));
                *(int *)((int)stk + 12) = 0x0;
                t90 = (((struct o18_int *)0xC803D78)->v);
                t91 = *(int *)(((int)stk + 32));
                *(int *)((int)stk + 8) = ((~t90) & t91);
                *(volatile int *)0xC817038;
                *(volatile int *)0xC817034;
                *(volatile int *)0xC817030;
                *(volatile int *)0xC81702C;
                FUN_0c110c26(((~t90) & t91));
                (((struct o20_uint *)0xC803E0C)->v) = ((((struct o38_int *)0xC803DCC)->v));
                (((struct o24_uint *)0xC803E0C)->v) = ((((struct o3C_int *)0xC803DCC)->v));
                (((struct o28_uint *)0xC803E0C)->v) = ((((struct o0_int *)0xC803E0C)->v));
                (((struct o2C_uint *)0xC803E0C)->v) = ((((struct o4_int *)0xC803E0C)->v));
                t101 = 0x0;
                t102 = 0x0;
                for (;;) {
                    t103 = *(int *)((0xC803E2C + t101));
                    t104 = t101;
                    t101 = (t101 + 0x4);
                    *(unsigned int *)((0xC803E40 + t104)) = t103;
                    t102 = (t102 + 0x2);
                    *(unsigned int *)((0xC803E40 + t101)) = (*(int *)((0xC803E2C + t101)));
                    t101 = (t101 + 0x4);
                    if ((unsigned int)t102 >= (unsigned int)0x4) {
                        break;
                    }
                }
                (((struct o14_uint *)0xC803DCC)->v) = 0x0;
                (((struct o18_uint *)0xC803DCC)->v) = 0x0;
                (((struct o1C_uint *)0xC803DCC)->v) = 0x0;
                (((struct o20_uint *)0xC803DCC)->v) = 0x0;
                (((struct o24_uint *)0xC803DCC)->v) = 0xC803E04;
                (((struct o28_uint *)0xC803DCC)->v) = 0xC803E2C;
                if ((unsigned int)0x0 < (unsigned int)t69) {
                    t107 = 0x0;
                    for (;;) {
                        t108 = (signed char)(((t107 << 2) + t107) << 2);
                        t109 = t107;
                        t107 = (t107 + 0x1);
                        *(unsigned int *)(((t109 << 2) + 0xC803DFC)) = (t108 + 0xC803E04);
                        if ((unsigned int)t107 >= (unsigned int)t69) {
                            break;
                        }
                    }
                }
                FUN_0c0fa6c0(t69);
                t117 = 0x0;
                t118 = 0x0;
                for (;;) {
                    t119 = *(int *)((0xC803E60 + t117));
                    t118 = (t118 + 0x2);
                    t120 = (((struct o28_int *)0xC803DCC)->v);
                    t121 = *(int *)(((t120 + t117) + 0x0));
                    t123 = (t120 + t117);
                    t117 = (t117 + 0x4);
                    *(unsigned int *)((t123 + 0x0)) = (t121 + (t119 << 2));
                    t125 = (((struct o28_int *)0xC803DCC)->v);
                    *(unsigned int *)(((t125 + t117) + 0x0)) = ((*(int *)(((t125 + t117) + 0x0))) + ((*(int *)((0xC803E60 + t117))) << 2));
                    t117 = (t117 + 0x4);
                    if ((unsigned int)t118 >= (unsigned int)0x4) {
                        break;
                    }
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC803E2C;
                *(unsigned int *)((a4 + 0x4)) = 0xC347090;
                *(unsigned int *)((a4 + 0x8)) = 0xC803DE0;
                *(unsigned int *)((a4 + 0xC)) = 0xC803DFC;
            }
            t136 = t88;
        }
        t144 = t136;
    }
    return t144;
}
