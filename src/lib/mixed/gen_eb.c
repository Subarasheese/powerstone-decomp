/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10A_uchar { char p[0x10A]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7209_uchar { char p[0x7209]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7212_uchar { char p[0x7212]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7242_uchar { char p[0x7242]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c01eb32(int, int, int, int);
int vmu_menu_update_objs(void);
int vmu_menu_pad_pressed(int);
int vmu_menu_draw_buttons(void);
int FUN_0c026554(int);
int draw_project_point_sprite(int);
int draw_project_point_sprite_z01(int);
int fx_spawn_04015c(int);
int fx_spawn_with_params(int, float, float, float, float);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c062436(int, int, int);
int pl_inc_owner_combo(int, int);
int FUN_0c08dfa4(void);
int pl_reset_pose(int);
int pl_timer_arm_forever(int);
int pl_set_power_form_off(int);
int obj_set_record_char(int, int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int FUN_0c0a3d16(int);
int snd_play_stage_obj_se(int, int, int);
int fx_spawn_03(int, int, int, float);
int FUN_0c0c339a(int);
int dbg_print_at(int, float, float);
int FUN_0c0d6744(int);
int FUN_0c0d7566(int, int, int, int);
float math_rand_float(void);
int FUN_0c0e21b0(int, int);
int nl_sprite_draw(int);
int _modls(void);
int _modlu(void);
int _quick_evn_mvn(int, int);
int _quick_odd_mvn(void);
int FUN_0c103874(int, int);
int FUN_0c104742(int);
int buIsFormat(int, int, int);
int check_isopen(void);
int memcpy(int, int, int);
int memset(int, int, int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int vmsfb_create(int, int, int);
int vmsfb_init(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int, int, int);
int FUN_0c08dacc(int a4, int a5);
int fx_spawn_27(int a4);
int FUN_0c0282cc(void);
int stage_gimmick_25_spawn_b(int a4, int a5);
int fx_update_04(int a4);
int FUN_0c0c3408(int a4, int a5);
int FUN_0c0c9526(int a4, int a5, int a6, int a7);
int FUN_0c0e6102(int a4, int a5, int a6, int a7);
int fx_spawn_03cb28(int a4, int a5);
int pl_enter_state_27_28(int a4, int a5);
int version_screen_draw(int a4, int a5, int a6, int a7);
int FUN_0c0d78fa(void);
int FUN_0c1013d8(int a4);
int vmsfs_fdelete_ex(int a4, int a5, int a6);
int FUN_0c01e860(int a4, int a5, int a6, int a7);
int fx_spawn_03fd08(int a4);
int fx_spawn_30(int a4);
int FUN_0c0d6774(int a4);
int fx31_shrink_follow_owner(int a4, float f4);
float FUN_0c0c8460(int a4);
int FUN_0c040938(int a4, int a5, int a6, int a7);

int FUN_0c0e6102(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t9;
    register int t12;
    register int t15;
    register int t21;
    register int t22;
    register int t25;
    register int t28;

    *(unsigned short *)(((((int)stk + 0) + 0x12) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(short *)(((int)stk + 18));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t5 = *(short *)(((int)stk + 18));
    *(unsigned int *)(((int)stk + 0)) = (((((((t5 << 1) + t5) << 2) << 2) << 1) + 0xA0800100) + 0x20);
    *(unsigned short *)(((int)stk + 10)) = 0x0;
    t8 = 0xC7FD110;
    t9 = 0xA0800100;
    for (;;) {
        if ((unsigned int)(*(short *)(((int)stk + 10))) >= (unsigned int)0x10) {
            break;
        }
        t9 = (*(int *)(((int)stk + 0)));
        t9 = (t9 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t9;
        t9 = (t9 - 4);
        t12 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t12 + 0x4);
        t8 = (*(int *)((((t12 + 0x4) - 4) + 0x0)));
        *(unsigned int *)((t9 + 0x0)) = t8;
        *(unsigned short *)(((int)stk + 10)) = ((*(short *)(((int)stk + 10))) + 0x1);
    }
    t15 = *(short *)(((int)stk + 18));
    *(unsigned int *)(((unsigned char)((((t15 << 1) + t15) << 2) << 1) + 0xC7FD11C)) = (unsigned short)((((struct o2A_short *)((*(int *)(((int)stk + 12)))))->v));
    t21 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x8));
    *(unsigned short *)(((int)stk + 8)) = (unsigned char)t21;
    if ((short)(unsigned char)t21 != 0) {
        if ((short)(unsigned char)t21 != 1) {
            if (((short)(unsigned char)t21 != 2) && ((short)(unsigned char)t21 != 3)) {
                return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
            }
            t22 = *(short *)(((int)stk + 18));
            *(unsigned short *)(((unsigned char)((((t22 << 1) + t22) << 2) << 1) + 0xC7FD112)) = 0x4;
            return ((int (*)(int, int, int, int))(0xC0E61FA))(a4, a5, a6, a7);
        }
        t25 = *(short *)(((int)stk + 18));
        *(unsigned short *)(((unsigned char)((((t25 << 1) + t25) << 2) << 1) + 0xC7FD112)) = 0x8;
        return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
    }
    t28 = *(short *)(((int)stk + 18));
    *(unsigned short *)(((unsigned char)((((t28 << 1) + t28) << 2) << 1) + 0xC7FD112)) = 0x10;
    return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
}

int FUN_0c1013d8(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC805790)->v) = 0x0;
    (((struct o4_uint *)0xC805790)->v) = 0x0;
    (((struct o8_uint *)0xC805790)->v) = 0x0;
    (((struct oC_uint *)0xC805790)->v) = 0x0;
    (((struct o10_uint *)0xC805790)->v) = 0x0;
    (((struct o14_uint *)0xC805790)->v) = 0x0;
    (((struct o18_uint *)0xC805790)->v) = 0x0;
    (((struct o1C_uint *)0xC805790)->v) = 0x0;
    memset(0xC8057B0, 0x0, 0x400);
    memset(0xC805BB0, 0x30, 0x1000);
    memset(0xC806BB0, 0x31, 0x1000);
    memset(0xC807BB0, 0x32, 0x1000);
    memset(0xC808BB0, 0x33, 0x1000);
    memset(0xC809BB0, 0x34, 0x1000);
    memset(0xC80ABB0, 0x35, 0x1000);
    memset(0xC80BBB0, 0x36, 0x1000);
    memset(0xC80CBB0, 0x37, 0x1000);
    t0 = vmsfb_init();
    t1 = 0xFFFFFFFF;
    if (t0 == 0) {
    } else {
        t1 = t0;
        if ((0x1 & a4) != 0) {
            t1 = (vmsfb_create(0xC10151A, 0xC805BB0, 0x1000));
        }
        t0 = t1;
        if ((0x2 & a4) != 0) {
            t0 = (vmsfb_create(0xC10151E, 0xC806BB0, 0x1000));
        }
        t1 = t0;
        if ((0x4 & a4) != 0) {
            t1 = (vmsfb_create(0xC101522, 0xC807BB0, 0x1000));
        }
        t0 = t1;
        if ((0x8 & a4) != 0) {
            t0 = (vmsfb_create(0xC101526, 0xC808BB0, 0x1000));
        }
        t1 = t0;
        if ((0x10 & a4) != 0) {
            t1 = (vmsfb_create(0xC10152A, 0xC809BB0, 0x1000));
        }
    }
    return t1;
}

int vmsfs_fdelete_ex(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
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
    v0_5 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 * 0x148);
    *(unsigned int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC347244)));
    v0_3 = (0x1);
    v0_4 = (v0_1);
    v0_2 = (v0_5);
    if (((*(signed char *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x2))) == 0)) goto L_C103A76;
    v0_5 = (vmsio_isready(v0_2)) != 0;
    if (v0_5) goto L_C103A60;
    vmsfs_unmount(v0_2);
    L_C103A76:;
    v0_0 = (0xFFFFFF01);
    L_C103B16:;
    return v0_0;
    L_C103A60:;
    v0_5 = (vmsio_ismount(v0_2)) == 0;
    if (v0_5) goto L_C103A76;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC80DBC8) + 0x8))) != 0)) goto L_C103A7C;
    goto L_C103A76;
    L_C103A7C:;
    v0_5 = (int)(buIsFormat(v0_2, v0_0, v0_1)) >= 0;
    if (v0_5) goto L_C103A8C;
    v0_0 = (0xFFFFFF03);
    goto L_C103B16;
    L_C103A8C:;
    v0_5 = (0x0);
    v0_6 = ((*(int *)(((int)stk + 0))));
    v0_7 = (0x0);
    if (((int)v0_4 <= 0)) goto L_C103AAA;
    L_C103A96:;
    *(volatile int *)((v0_6 + 0x0));
    v0_8 = (int)(check_isopen()) < 0;
    if (v0_8) goto L_C103AE6;
    v0_8 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    v0_6 = ((v0_6 + 0x4));
    if (v0_8) goto L_C103A96;
    L_C103AAA:;
    v0_5 = (v0_7);
    v0_6 = ((*(int *)(((int)stk + 0))));
    v0_7 = (v0_7);
    if (((int)v0_4 <= 0)) goto L_C103AC8;
    L_C103AB4:;
    v0_8 = (int)(FUN_0c103874(v0_2, (*(int *)((v0_6 + 0x0))))) >= 0;
    v0_5 = ((v0_5 + 0x1));
    if (v0_8) goto L_C103AC2;
    v0_7 = (v0_3);
    L_C103AC2:;
    v0_6 = ((v0_6 + 0x4));
    if (((int)v0_5 < (int)v0_4)) goto L_C103AB4;
    L_C103AC8:;
    v0_3 = FUN_0c104742(v0_2);
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C103ADE;
    v0_0 = write_fat(v0_2, v0_0, v0_1);
    v0_5 = (v0_0);
    if (!(((int)v0_0 >= 0))) goto L_C103ADE;
    if ((v0_7 == 0)) goto L_C103B14;
    goto L_C103AE6;
    L_C103ADE:;
    v0_0 = (v0_5);
    goto L_C103B16;
    L_C103AE6:;
    v0_0 = (0xFFFFFF0A);
    goto L_C103B16;
    L_C103B14:;
    v0_0 = (0x0);
    goto L_C103B16;
}

