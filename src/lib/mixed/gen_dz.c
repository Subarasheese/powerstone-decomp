/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pad_get_type(int);
int ui_draw_element_sprite(int);
int FUN_0c01e75e(int, int);
float FUN_0c0211d0(float, float, float, float, float, float, float);
int FUN_0c026554(int);
int ui_project_fighter_to_screen(int, int);
int fx_spawn_039ed8(int, int);
int fx_spawn_with_params(int, float, float, float, float);
int fx_spawn_item_sparkle(int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_mode01_03_enter(int);
int pl_mode04_enter(int);
int pl_mode05_enter(int);
int pl_mode06_enter(int);
int pl_mode07_enter(int);
int FUN_0c0645f6(int);
int FUN_0c06469e(int);
int FUN_0c0646da(int);
int pl_mode10_enter(int);
int pl_mode08_enter(int);
int pl_mode09_enter(int, int, int, int);
int pl_mode11_enter(int);
int pl_mode12_enter(int);
int pl_mode13_enter(int);
int pl_mode14_enter(int);
int pl_mode15_enter(int, int, int);
int pl_jack_mode01_03_enter(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int snd_play_side_se(int, int);
int FUN_0c0ccf38(int, int, int);
int FUN_0c0d4010(void);
int nl_texture_slot_free(int);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int nlStoreMatrix(int);
int nlLoadMatrix(int);
int nlSelectMatrixStack(int);
int FUN_0c0e21b0(int, int);
int _modls(void);
int _modlu(void);
extern int _quick_odd_mvn();
int res_texture_slot_tick_release(int);
int kmFreeTexture(int);
int FUN_0c10747e(void);
int FUN_0c107602(int);
int FUN_0c1076ba(int);
int FUN_0c1077d4(int);
int FUN_0c107872(int, int);
int FUN_0c10796a(int, int);
int FUN_0c107a36(int);
int FUN_0c107abc(int);
int FUN_0c107bbe(int);
extern int FUN_0c107e7e();
int FUN_0c107ea4(int);
int FUN_0c112718(int, int, int, int);
int FUN_0c1127bc(int, int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int thunk_FUN_0c062242(int);
int pl_special_c_start(int a4);
int kmiProcessVertex_00(int a4);
int fx_spawn_01(int a4, int a5, int a6);
int fx_spawn_07(int a4, int a5, int a6);
int nl_display_strip_spd_ofst(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int gdFsSearchPath(int a4, int a5, int a6, int a7);
int FUN_0c030920(void);
int fx_spawn_03e354(int a4, int a5);
int FUN_0c05a6e8(int a4);
int menu_ui_task_07(int a4, int a5, int a6, int a7);
int FUN_0c0b0048(int a4, int a5);
int FUN_0c0dd6c0(int a4, int a5, int a6, int a7);
int FUN_0c107cec(int a4, int a5, int a6, int a7);
int mpdrv_make_devicedata(int a4, int a5);
int FUN_0c01e05a(int a4);
int FUN_0c05bbc8(int a4, int a5, int a6, int a7);
int fx_spawn_0350e0(int a4);
int FUN_0c0646fe(int a4);
int pl_jack_state_enter(int a4, int a5, int a6, int a7);
int pl_ayame_attack_init(int a4, int a5, int a6, int a7);
int fx_update_01(int a4, int a5, int a6, int a7);
int fx_update_07(int a4, int a5, int a6, int a7);
int FUN_0c0d4094(void);
int FUN_0c115c70(int a4, int a5, int a6, int a7);
int FUN_0c0238be(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c10ba20(void);

int kmiProcessVertex_00(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t31;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC81715C)->v));
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    (((struct o18_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    (((struct o28_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    (((struct o38_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int gdFsSearchPath(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    int R8;
    register int T_;
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
    v0_1 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (0x800 + v0_6);
    v0_5 = v0_6;
    v0_1 = (0x0);
    v0_2 = (0x1);
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((0x800 + v0_6));
    v0_6 = (0x0);
    R8 = (0x1);
    v0_5 = v0_5;
    L_C0FE694:;
    v0_6 = (v0_4);
    if (((unsigned int)v0_4 >= (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C0FE6B2;
    if (((unsigned int)((((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0x1)) + 0x8) + v0_4) < (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C0FE6DC;
    L_C0FE6B2:;
    gdFsMemcpy(v0_4, (v0_5 - ((v0_5 - v0_4) + 0x800)), ((v0_5 - v0_4) + 0x800));
    v0_7 = (gdFsReadWG((*(int *)(((int)stk + 8))), 0x1, v0_5)) != 0;
    v0_6 = ((v0_5 - ((v0_5 - v0_4) + 0x800)));
    if (v0_7) goto L_C0FE750;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    v0_4 = (v0_6);
    L_C0FE6DC:;
    gdFsMemcpy((v0_6 + 0x6), (((int)stk + 0) + 0x4), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((int)stk + 20))))) goto L_C0FE734;
    if ((v0_2 == 1)) goto L_C0FE70E;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != v0_1)) goto L_C0FE734;
    v0_7 = (gdFsStrncmpi((v0_6 + 0x8), v0_3, v0_1)) == 0;
    if (v0_7) goto L_C0FE734;
    L_C0FE70E:;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    v0_7 = (*(signed char *)(((v0_3 + v0_1) + 0x0))) != 0;
    v0_3 = ((v0_3 + v0_1));
    if (v0_7) goto L_C0FE724;
    v0_0 = ((gdFsGetLE4((v0_6 + 0x2))));
    L_C0FE752:;
    return v0_0;
    L_C0FE724:;
    if ((v0_2 == 1)) goto L_C0FE72C;
    v0_3 = ((v0_3 + 0x1));
    L_C0FE72C:;
    v0_1 = ((gdFsGetTokenSize(v0_3, 0xC15AF30, v0_0)));
    L_C0FE734:;
    v0_7 = *(signed char *)((v0_6 + 0x0));
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)));
    v0_6 = ((unsigned char)v0_7);
    if (((int)(v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)) < (int)(*(int *)(((int)stk + 16))))) goto L_C0FE694;
    L_C0FE750:;
    v0_0 = (0x0);
    goto L_C0FE752;
}

int FUN_0c107cec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    int t6;
    int t7;
    register int t8;

    t8 = ((int (*)(int, int, int, int))(FUN_0c107e7e))(a4, a5, a6, a7);
    if ((t8 == 1) && (t0 = *(signed char *)((a4 + 0x5)), (unsigned char)t0 == 1)) {
        t0 = FUN_0c107602(a4);
        if (t0 == 1) {
            FUN_0c1076ba(a4);
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x6))) == 1) {
        t0 = *(int *)((a4 + 0x10));
        t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x24)))))(t0, 0x1, a6, a7);
        if ((int)t8 < (int)0x20) {
            FUN_0c107872(a4, 0x0);
            *(unsigned char *)((a4 + 0x6)) = 0x0;
        }
    }
    t0 = FUN_0c107ea4(a4);
    if (t0 == 1) {
        FUN_0c107a36(a4);
        t0 = ((int (*)(int))(FUN_0c107e7e))(a4);
        if ((t0 == 0) && (t1 = *(int *)((a4 + 0x30)), t2 = (((struct o58_int *)(a4))->v), (int)t2 < (int)t1)) {
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                t0 = FUN_0c107602(a4);
                if (t0 == 1) {
                    FUN_0c1077d4(a4);
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                }
            }
            if ((*(signed char *)((a4 + 0x5))) == 0) {
                FUN_0c107bbe(a4);
                *(unsigned char *)((a4 + 0x5)) = 0x1;
            }
        }
    }
    t0 = ((int (*)(int))(FUN_0c107e7e))(a4);
    if ((t0 == 1) && (t3 = *(signed char *)((a4 + 0x5)), t3 == 0)) {
        FUN_0c107abc(a4);
        *(unsigned char *)((a4 + 0x5)) = 0x1;
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x1))) == 5) && ((t4 = *(int *)((a4 + 0x3C)), t5 = (((struct o48_int *)(a4))->v), (int)t4 >= (int)t5) && (t6 = *(signed char *)((a4 + 0x7)), t6 == 0))) {
        FUN_0c10796a(a4, 0x1);
        (((struct o48_uint *)(a4))->v) = 0x7FFFFFFF;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if (((unsigned char)t0 == 6) && (t7 = *(int *)((a4 + 0x3C)), t7 == 0)) {
        FUN_0c10796a(a4, 0x0);
        return FUN_0c10747e();
    }
    return (unsigned char)t0;
}

int mpdrv_make_devicedata(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)0xC843924;
    t1 = *(int *)0xC843924;
    t2 = *(int *)0xC843924;
    t3 = *(int *)0xC843924;
    t4 = (((struct o10B4_int *)(t3))->v);
    t5 = *(int *)(((a4 << 2) + ((t3 + 0xFE8) + (((((((-t4) + 0x1) << 1) + ((-t4) + 0x1)) << 2) << 2) << 1))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x0)));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x5)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x4)));
    if ((*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C))) != 0) {
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x20)) = (*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)));
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)) = 0x0;
    }
    t3 = *(signed char *)((a4 + 0xC15B694));
    if ((unsigned char)(t3 & 0x1F) != 0) {
        t4 = (FUN_0c1127bc((t3 & 0x1F), (((a5 << 2) << 1) + (t0 + 0x4)), ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), (t5)));
    } else {
        t4 = (FUN_0c112718(a5, ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), t5));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x7))) != 0) {
        t0 = *(int *)0xC843924;
        t2 = (((struct o10B4_int *)(t0))->v);
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x10)) = (*(int *)((((((((((-t2) + 0x1) << 1) + ((-t2) + 0x1)) << 2) << 2) << 1) + (t0 + 0xFE8)) + (a4 << 2))));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD))) != 0) {
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = 0x0;
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD)) = 0x0;
    }
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x2))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x3))));
    return t4;
}

int FUN_0c115c70(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t20;
    register int t23;
    register int t24;
    register int t2;
    register int t3;
    register int t6;

    t8 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (a7 + 0x2);
    t7 = *(short *)(((a7 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t4 = a6;
    t5 = a4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)a5) {
            *(unsigned short *)((a7 + 0x0)) = t8;
            *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = t7;
            t2 = a5;
            return t2;
        }
        t11 = *(short *)((t5 + 0x0));
        if ((0x8000 & (short)((unsigned char)((int)t11 >> 8) | ((t11 << 8) & 0xFFFFFF00))) != 0) {
            break;
        }
        t5 = (t5 + 0x2);
        t6 = 0x1FFF;
        t6 = (t6 & (short)((unsigned char)((int)t11 >> 8) | ((t11 << 8) & 0xFFFFFF00)));
        t6 = (t6 + 0x1);
        t12 = 0x0;
        for (;;) {
            t13 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t13;
            t2 = 0x28;
            t14 = *(short *)((((int)stk + 0) + t2));
            t2 = 0x2C;
            t15 = *(short *)((((int)stk + 0) + t2));
            if ((int)((((int)t13 >> 4) * t6) + ((int)((t14 * t8) + (t15 * t7)) >> 12)) > (int)0x7FFF) {
                *(unsigned short *)((t4 + 0x0)) = 0x7FFF;
            } else {
                if ((int)((((int)t13 >> 4) * t6) + ((int)((t14 * t8) + (t15 * t7)) >> 12)) < (int)0xFFFF8000) {
                    *(unsigned short *)((t4 + 0x0)) = 0xFFFF8000;
                } else {
                    *(unsigned short *)((t4 + 0x0)) = ((((int)t13 >> 4) * t6) + ((int)((t14 * t8) + (t15 * t7)) >> 12));
                }
            }
            t2 = (*(int *)(((int)stk + 4)));
            t20 = t8;
            t8 = (*(short *)((t4 + 0x0)));
            t4 = (t4 + 0x2);
            t2 = (t2 & 0xF);
            t7 = t2;
            t2 = 0xC15BB80;
            t7 = (t7 << 2);
            t7 = (*(int *)((t7 + t2)));
            t2 = 0x28;
            t23 = *(short *)((((int)stk + 0) + t2));
            t2 = 0x2C;
            t24 = *(short *)((((int)stk + 0) + t2));
            t7 = (t7 * t6);
            if ((int)(((int)((t23 * t8) + (t24 * t20)) >> 12) + t7) > (int)0x7FFF) {
                *(unsigned short *)((t4 + 0x0)) = 0x7FFF;
            } else {
                if ((int)(((int)((t23 * t8) + (t24 * t20)) >> 12) + t7) < (int)0xFFFF8000) {
                    *(unsigned short *)((t4 + 0x0)) = 0xFFFF8000;
                } else {
                    *(unsigned short *)((t4 + 0x0)) = (((int)((t23 * t8) + (t24 * t20)) >> 12) + t7);
                }
            }
            t7 = t8;
            t12 = (t12 + 0x2);
            t8 = (*(short *)((t4 + 0x0)));
            t4 = (t4 + 0x2);
            if ((int)t12 >= (int)0x20) {
                break;
            }
        }
        t3 = (*(int *)(((int)stk + 0)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t3;
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c10ba20(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o8_int *)0xC8426B4)->v);
    t1 = (((struct oC_int *)0xC8426B4)->v);
    *(unsigned int *)(((((t1 << 8) + 0xC8424A8) + (((t0 << 2) << 2) << 1)) + 0x18)) = ((*(int *)(((((t1 << 8) + 0xC8424A8) + (((t0 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC);
    t0 = (((struct o0_int *)0xC8426B4)->v);
    if (((*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x18))) & 0x3) == 1) {
        *(unsigned int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
        (((struct o0_uint *)0xFFA00020)->v) = (*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x4)));
        (((struct o4_uint *)0xFFA00020)->v) = (((*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
        (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)(*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x14))) >> 2) >> 2) >> 1);
        t1 = 0x241;
        if (((*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
            t1 = 0x2C1;
        }
        t2 = t1;
        if (((*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
            t2 = (t1 | 0x1000);
        }
        (((struct oC_uint *)0xFFA00020)->v) = t2;
        (((struct o0_uint *)0xA05F6800)->v) = (*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0xC)));
        (((struct o4_uint *)0xA05F6800)->v) = (*(int *)(((0xC8424A8 + (((t0 << 2) << 2) << 1)) + 0x14)));
        (((struct o8_uint *)0xA05F6800)->v) = 0x1;
        (((struct o8_uint *)0xC8426B4)->v) = t0;
        (((struct oC_uint *)0xC8426B4)->v) = 0x0;
        (((struct o0_uint *)0xC8426B4)->v) = ((((((struct o0_int *)0xC8426B4)->v)) + 0x1) & 0x7);
        return ((int (*)(int, int, int, int))(0xC10BB46))(0x0, 0xC8426B4, 0x1, 0x1);
    }
    return ((int (*)(int, int, int, int))(0xC10BB40))(0x0, 0xC8424A8, 0x0, 0x1);
}
