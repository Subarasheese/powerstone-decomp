/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o26_short { char p[0x26]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c02b884(int);
int fx_scroll_model_uv(int);
int ui_draw_text_stub(int, int, float, float, float, float);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_start_motion(int, int, int);
int pl_change_state(int, int, int, int);
int snd_play_side_se(int, int);
int snd_play_stage_obj_se(int, int, int);
float FUN_0c0d5bc0(void);
int cam_set_shake_ramp(int, int);
float math_signed_sqrt(float);
int nlTranslateV(int);
float FUN_0c0e2220(int, int);
int _modls(void);
int _quick_odd_mvn(void);
int FUN_0c0fae0e(int, int, int, int);
int FUN_0c0fb4e0(void);
int FUN_0c10c280(int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int nlMultiMatrix(int);
int sprintf(int, int, int, int, int);
int FUN_0c0d6874(int a4, int a5, int a6, int a7);
int FUN_0c0fb820(int a4, int a5, int a6, int a7);
int fx_spawn_burst_sprites(int a4);
int stage_gimmick_19_spawn(int a4);
int FUN_0c0e17d0(int a4, int a5, int a6);
float FUN_0c0ef980(int a4);
int fx_spawn_034530(int a4);
int fx_spawn_039424(int a4);
int FUN_0c03a12c(int a4, int a5, int a6);
int menu_ui_task_03(int a4, int a5, int a6, int a7);
int stage_gimmick_08_spawn(void);
int FUN_0c0e52b6(int a4, int a5, int a6, int a7);
int FUN_0c0a703e(int a4, int a5, int a6, int a7);
int FUN_0c018b96(int a4, int a5);
int FUN_0c025332(int a4, int a5, int a6);
int FUN_0c043384(int a4, int a5, int a6, int a7);
int fx_update_03(int a4, int a5, int a6, int a7);
int FUN_0c020d20(int a4, int a5);
int FUN_0c02ba14(int a4);
int pl_hitreact_24_update(int a4, int a5, int a6, int a7);

int FUN_0c0fb820(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t8;
    register int t11;
    register int t30;
    register int t31;
    register int t32;
    register int t34;
    register int t41;
    register int t17;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0x0)) = ((((struct o0_int *)0xC15AAD4)->v));
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0x4)) = ((((struct o4_int *)0xC15AAD4)->v));
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0x8)) = ((((struct o8_int *)0xC15AAD4)->v));
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0xC)) = ((((struct oC_int *)0xC15AAD4)->v));
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0x10)) = ((((struct o10_int *)0xC15AAD4)->v));
    *(unsigned int *)(((((int)stk + 8) + 0x8) + 0x14)) = ((((struct o14_int *)0xC15AAD4)->v));
    FUN_0c0fae0e(a4, a5, a6, a7);
    t8 = 0x0;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((*(int *)(((int)stk + 8))) != 0) {
        t11 = 0x1;
    }
    (((struct o8_uint *)0xC816FE4)->v) = t11;
    (((struct oC_uint *)0xC816FE4)->v) = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if (((((struct o0_int *)0xC816FE4)->v)) == 1) {
    } else {
        t32 = 0x0;
        if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) != 1) && ((t17 = (((struct o0_int *)0xC816FE4)->v), (t17 & 44) != 0) && (0x1 != 0))) {
            t32 = 0x1;
        }
        t30 = 0x140;
        if ((((((struct o0_int *)0xC816FE4)->v)) & 16) != 0) {
            t30 = 0x280;
        }
        t31 = 0xF0;
        if ((((((struct o0_int *)0xC816FE4)->v)) & 32) != 0) {
            t31 = 0x1E0;
        }
    }
    t34 = *(int *)0xC817328;
    for (;;) {
        if (t34 != (*(int *)0xC817328)) {
            break;
        }
    }
    *(int *)((int)stk + 4) = (t8);
    *(int *)((int)stk + 0) = (t11);
    FUN_0c10c280(t30, t31, ((((struct o4_int *)0xC816FE4)->v)), t32);
    FUN_0c0fb4e0();
    t41 = *(int *)0xC817280;
    return ((int (*)(int, int))(0xC0FB948))(0x0, (t41 & 0xFFFFFFFE));
}

int FUN_0c0e17d0(int a4, int a5, int a6)
{
    int stk[19];
    register float u6;
    register float u9;
    register float u10;
    register float u13;
    register float u14;
    register float u17;
    register float u19;
    register float u20;
    register float u22;
    register float u24;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u34;
    register float t36;
    register float u38;
    register float u40;
    register float u42;

    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    u6 = (((struct oC_float *)(a4))->v);
    u9 = *(float *)((((int)stk + 0) + 0x0));
    u10 = (((((struct o10_float *)(a4))->v)) * ((((struct o4_float *)(((int)stk + 0)))->v)));
    u10 = u10 + u9 * u6;
    u13 = u10;
    u13 = u13 + ((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o14_float *)(a4))->v));
    u14 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 12)) = (((-(u9 * u14))) + 1.0f);
    u17 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 16)) = (-(((((struct o4_float *)(((int)stk + 0)))->v)) * u17));
    u19 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 20)) = (-(((((struct o8_float *)(((int)stk + 0)))->v)) * u19));
    u20 = (((struct o10_float *)(a4))->v);
    u22 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 28)) = (-((*(float *)((((int)stk + 0) + 0x0))) * u22));
    u24 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 32)) = (((-(((((struct o4_float *)(((int)stk + 0)))->v)) * u24))) + 1.0f);
    u27 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 36)) = (-(((((struct o8_float *)(((int)stk + 0)))->v)) * u27));
    u28 = (((struct o14_float *)(a4))->v);
    u30 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 44)) = (-((*(float *)((((int)stk + 0) + 0x0))) * u30));
    u32 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 48)) = (-(((((struct o4_float *)(((int)stk + 0)))->v)) * u32));
    u34 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 52)) = (((-(((((struct o8_float *)(((int)stk + 0)))->v)) * u34))) + 1.0f);
    t36 = FUN_0c0e2220(a4, (a4 + 0xC));
    u38 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 60)) = ((*(float *)((((int)stk + 0) + 0x0))) * u38);
    u40 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 64)) = (((((struct o4_float *)(((int)stk + 0)))->v)) * u40);
    u42 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 68)) = (((((struct o8_float *)(((int)stk + 0)))->v)) * u42);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0xC));
    return (nlTranslateV(a5));
}

float FUN_0c0ef980(int a4)
{
    float u38;
    float u83;
    float u35[4];
    float u80[4];

    int R0;
    int R1;
    int R6;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
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
    v0_0 = a4;
    v0_1 = (int)(*(int *)((v0_0 + 0x0))) < 0;
    R0 = (0xC0EFAAC);
    v0_3 = ((*(signed char *)(((v0_0 + 0x3C) + 0x0))));
    v0_0 = ((v0_0 + 0x3C));
    w0_0 = (0.5f);
    if (v0_1) goto L_C0EFA06;
    R1 = ((*(int *)(((v0_0 + 0x2C) + 0x0))));
    v0_0 = (((v0_0 + 0x2C) + 0x4));
    R6 = (0xFFFFFFFE);
    v0_1 = ((*(int *)(((R0 + 0x4) + 0x0))));
    w0_1 = ((*(float *)((R0 + 0x0))));
    L_C0EF998:;
    if ((v0_3 == R6)) goto L_C0EFA1A;
    if (((v0_1 & R1) == 0)) goto L_C0EFA1A;
    if (((int)v0_3 <= (int)R6)) goto L_C0EFA22;
    L_C0EF9A4:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_0);
    if (((R1 & 8) == 0)) goto L_C0EF9B4;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C0EF9B4:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C0EF9B6:;
    R0 = (0x1);
    v0_0 = ((v0_0 + 0xC));
    w0_2 = (0.0f);
    if (((v0_3 & 0x1) == 0)) goto L_C0EFA0A;
    w0_3 = *(float *)((v0_0 + 0x0));
    w0_4 = (((struct o4_float *)(v0_0))->v);
    w0_5 = (((struct o4_float *)((v0_0 + 0x4)))->v);
    v0_3 = *(int *)(((((v0_0 + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_prefetch((void *)((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24));
    u35[0] = w0_3;
    u35[1] = w0_4;
    u35[2] = w0_5;
    u35[3] = w0_2;
    _builtin_ftrv(u35, u35);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u35[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u35[1];
    u38 = w0_3;
    *(float *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0x0));
    *(unsigned int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u38) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = ((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u38));
    if (v0_5) goto L_C0EF9B6;
    L_C0EF9F2:;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C0EF9F4:;
    if (((int)R1 > 0)) goto L_C0EF9A4;
    if ((R1 == 0)) goto L_C0EFA06;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C0EF998;
    L_C0EFA06:;
    return F0;
    L_C0EFA0A:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 4));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C0EF9B4;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C0EF9F4;
    L_C0EFA22:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_1);
    if (((R1 & 8) == 0)) goto L_C0EFA32;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C0EFA32:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C0EFA34:;
    R0 = (0x1);
    v0_4 = ((*(int *)((v0_0 + 0xC))));
    v0_0 = ((v0_0 + 0xD));
    if (((v0_3 & 0x1) == 0)) goto L_C0EFA96;
    v0_5 = *(signed char *)((v0_0 + 0x0));
    v0_6 = *(signed char *)(((v0_0 + 0x1) + 0x0));
    v0_3 = *(int *)((((v0_0 + 0x1) + 0xE) + 0x0));
    _builtin_prefetch((void *)(((v0_0 + 0x1) + 0xE) + 0x24));
    u80[0] = (float)v0_6;
    u80[1] = (float)v0_5;
    u80[2] = (float)(signed char)v0_4;
    u80[3] = 0.0f;
    _builtin_ftrv(u80, u80);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u80[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u80[1];
    u83 = w0_3;
    *(float *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0x0));
    *(unsigned int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u83) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = (((((v0_0 + 0x1) + 0xE) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u83));
    if (v0_5) goto L_C0EFA34;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C0EFA80:;
    if (((int)R1 > 0)) goto L_C0EFA22;
    if ((R1 == 0)) goto L_C0EFA92;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C0EF998;
    L_C0EFA92:;
    return F0;
    L_C0EFA96:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 5));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C0EFA32;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C0EFA80;
    L_C0EFA1A:;
    v0_2 = *(int *)(((v0_0 - 8) + 0x0));
    R0 = (v0_2);
    v0_0 = ((((v0_0 - 8) + 0x4) + v0_2));
    goto L_C0EF9F2;
}

int FUN_0c0e52b6(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t2;
    register int t5;
    register int t17;
    register int t21;
    register int t25;
    register int t29;
    register int t31;
    register int t40;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    (((struct oC_uint *)0xC7FD0E4)->v) = (((((struct oC_int *)0xC7FD0E4)->v)) + (*(int *)(((int)stk + 16))));
    t2 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC7FD1D0)) = (*(int *)(((int)stk + 20)));
    t5 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((signed char)(((t5 << 1) + t5) << 2) + 0xC7FD1D8)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((((*(int *)(((int)stk + 24))) << 2) + 0xA0800060) + 0x0)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 24))) - 1);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < 0) {
            if ((*(int *)(((int)stk + 0))) == 0) {
                *(unsigned int *)(((int)stk + 0)) = ((((struct o0_int *)0xC7FD0E4)->v));
                t17 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((signed char)(((t17 << 1) + t17) << 2) + 0xC7FD1D4)) = (*(int *)(((int)stk + 0)));
            } else {
                t21 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((signed char)(((t21 << 1) + t21) << 2) + 0xC7FD1D4)) = (*(int *)(((int)stk + 0)));
            }
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 24))) + 0x1);
            return ((int (*)(int, int, int, int))(0xC0E53E2))(a4, a5, a6, a7);
        }
        t25 = *(signed char *)(((int)stk + 4));
        if ((*(int *)((0xC7FD1D0 + (signed char)(((t25 << 1) + t25) << 2)))) != -1) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
    }
    t29 = *(int *)(((int)stk + 4));
    t31 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((signed char)(((t29 << 1) + t29) << 2) + 0xC7FD1D4))) + (*(int *)((((signed char)(((t31 << 1) + t31) << 2) + 0xC7FD1D0) + 0x8))));
    if ((*(int *)(((int)stk + 0))) == 0) {
        *(unsigned int *)(((int)stk + 0)) = ((((struct o0_int *)0xC7FD0E4)->v));
    }
    t40 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((signed char)(((t40 << 1) + t40) << 2) + 0xC7FD1D4)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 24))) + 0x1);
    return ((int (*)(int, int, int, int))(0xC0E53E2))(a4, a5, a6, a7);
}

