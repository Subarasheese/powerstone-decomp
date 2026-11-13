int FUN_0c0eb0c0(int, int, int);
/* Straight-line functions with calls and guards (batch gen_dg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0210f4(int, int, int);
int hit_find_part_entry(int, int, int, int);
int ui_sprite_queue_add(int, int, int, int, int, int);
int ui_hud_enabled(void);
int fx_spawn_spark_rings(int, int, float, float);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_angle_to_pad_dir(int);
int FUN_0c0555c4(void);
int obj_destroy(int, int, int, int);
int pl_wangtang_mode11_phase0(int);
int pl_wangtang_mode11_phase1(int);
int pl_wangtang_wait_anim_end_b(int);
int pl_state34_phase0(int);
int pl_state34_phase1(int);
int pl_state34_phase2(int);
int FUN_0c0967a0(int);
int pl_stick_dir_angle(int);
int pl_try_start_basic_attack(int);
int pl_button_jump_pressed(int);
int FUN_0c0a00e4(int);
int FUN_0c0a022e(int, float);
int obj_set_record(int, int);
int pl_change_state(int, int, int, int);
int snd_play_stage_obj_se(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(int);
int _quick_odd_mvn(int, int, int, int);
int res_texture_slot_tick_release(int);
int FUN_0c0eae20(int, int);
int FUN_0c0eaef0(int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int pl_state34_update(int a4);
int kmiProcessVertex_02(int a4);
int fx_tick_039424(int a4, int a5, int a6, int a7);
float FUN_0c020a80(int a4, float f4);
float ai_op66(int a4, float f4);
int ending_obj_update_t06(int a4, int a5, int a6);
int ai_op73_set_goal_by_side(int a4);
int stage_gimmick_24_update_b(int a4, int a5, int a6, int a7);
int pl_wangtang_mode11_update(int a4);
int FUN_0c08e704(int a4, int a5, int a6, int a7);
int FUN_0c048314(int a4, int a5);
int fx_tick_049b7c(int a4, int a5, int a6, int a7);
int nl_material_set_palette(int a4, int a5, int a6, int a7);

int kmiProcessVertex_02(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u15;
    register float u23;
    register float u31;
    register int t32;

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
    u14 = *(float *)0xC10EB90;
    u15 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    (((struct o18_uint *)0xC817064)->v) = ((((((int)(u15 * u14) << 16) << 8) | ((int)(u15 * u14) << 16)) | ((int)(u15 * u14) << 8)) | (int)(u15 * u14));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    u23 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    (((struct o28_uint *)0xC817064)->v) = ((((((int)(u23 * u14) << 16) << 8) | ((int)(u23 * u14) << 16)) | ((int)(u23 * u14) << 8)) | (int)(u23 * u14));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    u31 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o38_uint *)0xC817064)->v) = ((((((int)(u31 * u14) << 16) << 8) | ((int)(u31 * u14) << 16)) | ((int)(u31 * u14) << 8)) | (int)(u31 * u14));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t32 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t32, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

/* A material's palette: a5 is a texture list, a6 the material (offset by *0x0C7FD490). When the material's texture is
   palettised (format 5 or 6 in TCW bits 27-29), the old palette's slot is released and palette a7 is taken: its CLUT
   bank is reused when already resident (reference count up), else allocated and loaded (FUN_0c0eae20, FUN_0c0eaef0,
   FUN_0c0eb0c0); the bank goes into TCW bits 21-26. Returns the palette the material had; -1 with no list. */
int nl_material_set_palette(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t13;
    register int t26;
    register int t29;
    register int t31;
    register int t33;
    register int t51;
    int t19;

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = a5;
    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 44)) = a7;
    if ((*(int *)(((int)stk + 52))) == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)(((int)stk + 40)) = (*(int *)(((int)stk + 48)));
    t2 = *(int *)(((int)stk + 48));
    t3 = *(int *)0xC7FD490;
    *(unsigned int *)(((int)stk + 36)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 48)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 32)) = (short)(*(short *)((((*(int *)(((int)stk + 36))) << 1) + ((((struct o0_int *)0xC7FD044)->v)))));
    t10 = *(int *)((((*(int *)(((int)stk + 40))) << 2) + (*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 28)) = t10;
    *(unsigned int *)(((int)stk + 20)) = t10;
    t11 = *(int *)(((int)stk + 32));
    t13 = (((struct oC_int *)0xC7FD044)->v);
    *(unsigned int *)(((int)stk + 16)) = ((((t11 << 2) << 2) << 1) + t13);
    *(unsigned int *)(((int)stk + 24)) = (((unsigned int)(*(int *)((((((t11 << 2) << 2) << 1) + t13) + 0xC))) >> 27) & 0x7);
    if ((*(int *)0xC7F87C0) == 0) {
    } else {
        if (((*(int *)(((int)stk + 24))) != 5) && (t19 = *(int *)(((int)stk + 24)), t19 != 6)) {
        } else {
            res_texture_slot_tick_release((*(int *)(((int)stk + 28))));
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 44)));
            if ((int)(*(int *)(((int)stk + 28))) < (int)((((struct o0_short *)0xC7FD624)->v))) {
                *(unsigned int *)(((int)stk + 12)) = ((((struct o14_int *)0xC7FD624)->v));
                t26 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 8)) = ((((t26 << 1) + t26) << 2) + (*(int *)0xC7F87C0));
                t29 = *(int *)(((int)stk + 28));
                t31 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t31 + ((t29 << 2) << 1));
                if ((*(short *)(((t31 + ((t29 << 2) << 1)) + 0x4))) != 0) {
                    t33 = *(int *)(((int)stk + 12));
                    *(unsigned short *)((t33 + 0x4)) = ((*(short *)((t33 + 0x4))) + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = (*(short *)(((*(int *)(((int)stk + 12))) + 0x0)));
                } else {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x2)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x2)));
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x3)) = ((int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x4)) = 0x1;
                    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = (*(short *)(((int)stk + 28)));
                    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x8)));
                    t51 = FUN_0c0eae20((*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (*(int *)(((int)stk + 0))));
                    *(unsigned int *)(((int)stk + 4)) = t51;
                    if ((int)t51 >= 0) {
                        *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(int *)(((int)stk + 4)));
                        FUN_0c0eaef0((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
                        FUN_0c0eb0c0((((*(int *)(((int)stk + 4))) << 2) << 2), (*(int *)(((*(int *)(((int)stk + 8))) + 0x4))), (*(int *)(((int)stk + 0))));
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = 0x0;
                    }
                }
                *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0xC)) = (((*(int *)(((*(int *)(((int)stk + 16))) + 0xC))) & 0xF81FFFFF) | ((*(int *)(((int)stk + 4))) << 21));
            }
        }
    }
    return (*(int *)(((int)stk + 20)));
}
