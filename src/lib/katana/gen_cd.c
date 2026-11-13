/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o300_int { char p[0x300]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71EF_uchar { char p[0x71EF]; unsigned char v; };
struct o7219_uchar { char p[0x7219]; unsigned char v; };
struct o721A_uchar { char p[0x721A]; unsigned char v; };
struct o721B_uchar { char p[0x721B]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c05a164(int);
int FUN_0c05a6e8(int);
int FUN_0c05fb58(int);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_force_owner_state27(int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_get_held_item_class(int);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_stick_zone(int);
int pl_set_velocity_toward_target(int);
int pl_set_velocity_from_heading(int);
int pl_launch_jump(int);
int pl_landed(int);
int pl_start_fall_motion(int);
int pl_end_action_choose_state(int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
extern int FUN_0c0a3cb0();
int FUN_0c0c209c(int);
int FUN_0c0c20ee(int);
int fx_spawn_28(int, int, int, int, int, int, int, int);
int nlSetLightColor(float, float, float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int nlSelectMatrixStack(int);
int _modls(void);
int _modlu(int);
extern int _quick_odd_mvn();
int thunk_FUN_0c062242(int, int);
int pl_state05_init(int a4, int a5);
int fx_spawn_038b98(int a4);
int FUN_0c02d1cc(int a4, int a5, int a6, int a7);
int stage_gimmick_18_spawn(void);
int fx_tick_0485f8(int a4);
int fx_tick_03598c(int a4, int a5, int a6, int a7);
int pl_ayame_victim_dispatch(int a4);
int fx_update_26(int a4, int a5, int a6, int a7);
int FUN_0c0fd8cc(int a4);

int FUN_0c0fd8cc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x0)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC81743C)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x4)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817430)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x8)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817428)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0xC)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817440)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x10)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817434)));
        *(unsigned int *)((((signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC8426F0 + (t0 << 2)) + 0x0)));
        t1 = *(int *)(((t0 << 2) + 0xC8171D8));
        t2 = ((0x1 - t0) << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((t2 + (a4 + 0x38)) + 0x0)) = t1;
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x0)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC81743C)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x4)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817430)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x8)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817428)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0xC)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817440)));
        *(unsigned int *)(((a4 + (signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1)) + 0x10)) = (*(int *)(((((t0 << 2) << 2) << 1) + 0xC817434)));
        *(unsigned int *)((((signed char)(((((0x1 - t0) << 1) + (0x1 - t0)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC8426F0 + (t0 << 2)) + 0x0)));
        t1 = *(int *)(((t0 << 2) + 0xC8171D8));
        t2 = ((0x1 - t0) << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((t2 + (a4 + 0x38)) + 0x0)) = t1;
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    if (((((struct o0_int *)0xC8172FC)->v)) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)((((((((struct o18_int *)0xC8172FC)->v)) & 0x1) << 2) + 0xC8172EC)));
        *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((-(((((struct o18_int *)0xC8172FC)->v)) & 0x1)) + 0x1) << 2) + 0xC8172EC)));
    } else {
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC8172EC + ((((((struct o18_int *)0xC8172FC)->v)) & 0x1) << 2))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((-(((((struct o18_int *)0xC8172FC)->v)) & 0x1)) + 0x1) << 2) + 0xC8172EC)));
    }
    (((struct o40_uint *)(a4))->v) = ((((struct o0_int *)0xC81726C)->v));
    (((struct o44_uint *)(a4))->v) = ((((struct o4_int *)0xC81726C)->v));
    (((struct o48_uint *)(a4))->v) = ((((struct o0_int *)0xC8426D4)->v));
    (((struct o4C_uint *)(a4))->v) = ((((struct o4_int *)0xC8426D4)->v));
    (((struct o50_uint *)(a4))->v) = ((((struct o14_int *)0xC8426D4)->v));
    (((struct o54_uint *)(a4))->v) = ((((struct o18_int *)0xC8426D4)->v));
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x58) + t0) + 0x0)) = (*(int *)((t1 + 0xC817338)));
        *(unsigned int *)((((a4 + 0x58) + t0) + 0x14)) = (*(int *)((t1 + 0xC81733C)));
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        *(unsigned int *)((((0x80 + a4) + t0) + 0x0)) = (*(int *)((t0 + 0xC81747C)));
        *(unsigned int *)((((0x94 + a4) + t0) + 0x0)) = (*(int *)(((0xC8426F8 + t0) + 0x0)));
        t0 = (t0 + 0x4);
        if ((int)t2 >= (int)0x5) {
            break;
        }
    }
    (((struct oA8_uint *)(a4))->v) = (*(int *)0xC842718);
    (((struct oAC_uint *)(a4))->v) = ((((struct o3C_int *)0xC8426D4)->v));
    return 0x0;
}
