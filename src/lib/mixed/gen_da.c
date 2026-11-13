/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int res_texture_slot_tick_release(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o30C_uchar { char p[0x30C]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
extern int FUN_0c0229d8();
int hit_offset_point_by_owner(int, int, int);
int FUN_0c022e90(int, int, int);
int fx_spawn_spark_rings(int, int, float, float);
int FUN_0c0555c4(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3_normalize(int);
int FUN_0c06233a(int, int, int);
int pl_state28_sub3_update(int);
int pl_angle_to_opponent(int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int snd_play_stage_obj_se(int, int, int);
int stage_obj_on_break(int);
int dbgmotion_select_text_color(int, int);
int cam_set_shake_ramp(int, int);
int nl_texture_slot_free(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
int FUN_0c0e24f0(int);
int FUN_0c0e4688(int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(void);
int FUN_0c0ed7e4(int);
int FUN_0c0ed8f4(int, int);
int kmFreeTexture(int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c1104c8(int, int, int, int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int memset(int, int, int);
int FUN_0c05f6d8(int a4, float f4, float f5, float f6);
int FUN_0c0eb238(void);
int kmiProcessVertex_11(int a4);
int fx_spawn_29(int a4, int a5, int a6);
int fx_tick_0454b4(int a4);
int pl_state28_sub0_update(int a4, int a5, int a6, int a7);
int FUN_0c10d4ea(void);
int FUN_0c022ed8(int a4, int a5, int a6, int a7, int a8);
int stage_gimmick_28_update_c(int a4, int a5, int a6, int a7);
int item_create(int a4, int a5);
int FUN_0c044408(int a4, int a5, int a6, int a7);
int dbgmotion_draw_info(int a4, int a5);
int fx_tick_039c78(int a4, int a5, int a6, int a7);
int FUN_0c0acf90(int a4, int a5, int a6, int a7);
int nl_sprite_texture_release(int a4, int a5, int a6);
int FUN_0c0e6834(int a4, int a5, int a6);
int stage_gimmick_23_update_b(int a4, int a5, int a6, int a7);

int kmiProcessVertex_11(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    *(unsigned int *)(((t16 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c10d4ea(void)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((0xC817304 + (t1 << 2)));
        if (t2 != 3) {
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)0x4) continue;
            return t2;
        }
        if (((*(int *)(((0xC8171C8) + 0x0)))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)0x4) continue;
            return t2;
        }
        break;
    }
    if ((((t1 & 0x1) + 0x1) & ((((struct o10_int *)0xC817170)->v))) != 0) {
        FUN_0c1104c8(((((struct o0_int *)0xC817414)->v)), ((((struct o4_int *)0xC817414)->v)), 0x0, 0x1, (t1 & 0x1), ((~(*(int *)0xC817028)) & 0x1));
        (((struct o10_uint *)0xC817170)->v) = (((~((t1 & 0x1) + 0x1)) & ((((struct o10_int *)0xC817170)->v))) & 0x3);
    }
    *(unsigned int *)0xC8171C8 = 0x1;
    *(unsigned int *)(((t1 << 2) + 0xC817304)) = 0x4;
    if ((((((struct o0_int *)0xC816FC8)->v)) & 16) != 0) {
        (((struct o0_uint *)0xA05F8008)->v) = 0x2;
        (((struct o0_uint *)0xA05F8008)->v) = 0x0;
    }
    (((struct o24_uint *)0xA05F8008)->v) = (*(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC817428)));
    (((struct o18_uint *)0xA05F8008)->v) = (*(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC81743C)));
    if (((((struct o2C_int *)0xC816FC8)->v)) != 1) {
        if (((((((struct o1C_int *)0xC816FC8)->v)) & 0x1) != 1) && ((t0 = (((struct o1C_int *)0xC816FC8)->v), (t0 & 0x2C) == 32) && (0x1 != 0))) {
            t0 = (*(int *)(((((((struct o18_int *)0xC84270C)->v)) << 2) + 0xC8172EC)));
        } else {
            t0 = (*(int *)((((t1 & 0x1) << 2) + 0xC8172EC)));
        }
        (((struct o18_uint *)0xA05F8048)->v) = t0;
    }
    (((struct o4_uint *)0xA05F8088)->v) = ((((struct o4_int *)0xC817170)->v));
    (((struct o0_uint *)0xA05F8088)->v) = (((((struct o0_int *)0xC817170)->v)) & 0xFFFFFFF0);
    (((struct o20_uint *)0xA05F8048)->v) = ((((struct o0_int *)0xC81726C)->v));
    (((struct o24_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC81726C)->v));
    (((struct o4_uint *)0xA05F8048)->v) = ((((struct o10_int *)0xC81726C)->v));
    (((struct o0_uint *)0xA05F8048)->v) = ((((struct o18_int *)0xC81726C)->v));
    *(unsigned int *)0xC8426CC = 0x0;
    if ((((((struct o1C_int *)0xC816FC8)->v)) & 0xFFFFFFED) == 32) {
        if (((((struct o18_int *)0xC84270C)->v)) == 0) {
            t0 = (*(int *)0xC8172B8);
            t2 = 0x20000;
        } else {
            t0 = (*(int *)0xC8172B8);
            t2 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t0 | t2);
    }
    (((struct o0_uint *)0xC84270C)->v) = (*(int *)0xFFD8000C);
    *(unsigned int *)0xC817318 = t1;
    (((struct o14_uint *)0xC84270C)->v) = 0x1;
    (((struct oC_uint *)0xA05F8008)->v) = 0xFFFFFFFF;
    return 0xC817318;
}

int nl_sprite_texture_release(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = *(int *)0xC7FD490;
    t1 = 0xC7F87C8;
    if ((unsigned int)(*(int *)((((((t0 + a6) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x0))) > (unsigned int)0x0) {
        t2 = (((struct o8_int *)0xC7F87C0)->v);
        *(unsigned int *)((((((t0 + a6) << 2) << 1) + t2) + 0x0)) = ((*(int *)((((((t0 + a6) << 2) << 1) + t2) + 0x0))) - 1);
        t2 = *(int *)((((((t0 + a6) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x0));
        t1 = t2;
        if (t2 != 0) {
        } else {
            t2 = *(int *)((((((t0 + a6) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x4));
            if ((*(int *)((((t2 * 0x3C) + (*(int *)0xC7FC4F0)) + 0x28))) == 0) {
                t4 = kmFreeTexture(((t2 * 0x3C) + (*(int *)0xC7FC4F0)));
                if (t4 != 0) {
                    (((struct o0_uint *)0xC7FD040)->v) = 0x2;
                    for (;;) {
                    }
                }
            } else {
                t4 = a5;
            }
            *(unsigned int *)((((t2 * 0x3C) + (*(int *)0xC7FC4F0)) + 0x2C)) = 0x0;
            *(unsigned int *)((((t2 * 0x3C) + (*(int *)0xC7FC4F0)) + 0x38)) = 0xFFFFFFFF;
            t5 = *(short *)((((t0 + a6) << 1) + ((((struct o4_int *)0xC7FD040)->v))));
            nl_texture_slot_free(t2, t4);
            FUN_0c0e4688((short)t5);
            *(unsigned int *)((((((t0 + a6) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x4)) = 0xFFFFFFFF;
            *(unsigned short *)((((t0 + a6) << 1) + ((((struct o4_int *)0xC7FD040)->v)))) = 0xFFFFFFFF;
            t0 = 0xC346B68;
            if (((*(int *)0xC346B68) == 0) && (a5 != 0)) {
                t2 = *(int *)(((a6 << 2) + a5));
                t4 = *(int *)(((((((short)t5 << 2) << 2) << 1) + ((((struct o10_int *)0xC7FD040)->v))) + 0xC));
                t5 = 0x7;
                if (((((struct o0_int *)0xC7F87C0)->v)) != 0) {
                    t5 = (((unsigned int)t4 >> 27) & 0x7);
                    if (((((unsigned int)t4 >> 27) & 0x7) != 5) && ((((unsigned int)t4 >> 27) & 0x7) != 6)) {
                    } else {
                        t5 = (res_texture_slot_tick_release(t2));
                    }
                }
                t0 = t5;
            }
            t1 = t0;
        }
    }
    return t1;
}

int FUN_0c0e6834(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = v0_2;
    v0_1 = *(int *)(((int)stk + 8));
    v0_2 = *(signed char *)((v0_1 + 0x9));
    v0_0 = ((v0_2 & 0x3));
    v0_1 = ((*(int *)((v0_1 + 0xC))));
    if (((v0_2 & 0x3) == 0)) goto L_C0E6860;
    if ((v0_0 == 1)) goto L_C0E6866;
    if ((v0_0 == 2)) goto L_C0E686C;
    L_C0E6872:;
    v0_2 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x8));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E688A;
    if ((v0_0 == 1)) goto L_C0E6890;
    if ((v0_0 == 2)) goto L_C0E6896;
    if ((v0_0 == 3)) goto L_C0E6896;
    L_C0E689C:;
    v0_2 = *(int *)(((int)stk + 4));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E68CE;
    if ((v0_0 == 1)) goto L_C0E68DA;
    if ((v0_0 == 2)) goto L_C0E68E2;
    if ((v0_0 == 3)) goto L_C0E6902;
    if ((v0_0 == 4)) goto L_C0E690A;
    if ((v0_0 == 5)) goto L_C0E6912;
    if ((v0_0 == 6)) goto L_C0E6928;
    if ((v0_0 == 7)) goto L_C0E693A;
    if ((v0_0 == 8)) goto L_C0E6948;
    if ((v0_0 == 9)) goto L_C0E695A;
    if ((v0_0 == 10)) goto L_C0E6988;
    v0_0 = (0xFFFFFFFF);
    L_C0E699A:;
    return v0_0;
    L_C0E6988:;
    v0_0 = ((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1E))));
    goto L_C0E699A;
    L_C0E695A:;
    v0_0 = *(int *)(((int)stk + 8));
    v0_1 = (v0_0);
    if (((*(signed char *)((v0_0 + 0x1F))) == 0)) goto L_C0E696A;
    v0_0 = (0x0);
    goto L_C0E699A;
    L_C0E696A:;
    v0_0 = *(short *)((v0_1 + 0x16));
    v0_1 = (((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_0 >> 2) >> 2) >> 2));
    if ((((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_0 >> 2) >> 2) >> 2) != 0)) goto L_C0E6980;
    v0_0 = (0x1);
    goto L_C0E699A;
    L_C0E6980:;
    v0_0 = (v0_1);
    goto L_C0E699A;
    L_C0E6948:;
    v0_0 = (((int)((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x33))) & 0xF0) >> 4));
    goto L_C0E699A;
    L_C0E693A:;
    v0_0 = (((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x33))) & 0xF));
    goto L_C0E699A;
    L_C0E6928:;
    v0_0 = ((unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 2))) << 2) + (*(int *)(((int)stk + 8)))) + 0x32) + 0x0))));
    goto L_C0E699A;
    L_C0E6912:;
    v0_0 = ((unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 2))) << 2) + (*(int *)(((int)stk + 8)))) + 0x31) + 0x0))));
    goto L_C0E699A;
    L_C0E690A:;
    v0_0 = (R13);
    goto L_C0E699A;
    L_C0E6902:;
    v0_0 = (v0_1);
    goto L_C0E699A;
    L_C0E68E2:;
    v0_0 = (((int)((int)((int)((int)((v0_1 << 2) << 1) / (int)R12)) / (int)R13)));
    goto L_C0E699A;
    L_C0E68DA:;
    v0_0 = (R12);
    goto L_C0E699A;
    L_C0E68CE:;
    v0_0 = ((unsigned short)((((struct o2A_short *)((*(int *)(((int)stk + 8)))))->v)));
    goto L_C0E699A;
    L_C0E6896:;
    R12 = (0x4);
    goto L_C0E689C;
    L_C0E6890:;
    R12 = (0x8);
    goto L_C0E689C;
    L_C0E688A:;
    R12 = (0x10);
    goto L_C0E689C;
    L_C0E686C:;
    R13 = (0x4);
    goto L_C0E6872;
    L_C0E6866:;
    R13 = (0x2);
    goto L_C0E6872;
    L_C0E6860:;
    R13 = (0x1);
    goto L_C0E6872;
}

