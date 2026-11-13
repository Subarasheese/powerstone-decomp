/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_destroy(int);
int pl_gunrock_step_scale_script(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int hit_probe_step_two_lists(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_change_state(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_math_mat_get_translate(int, int);
int fx_tick_03ef18(int a4);
int kmiProcessVertex_06(int a4);
int pl_ryoma_mode01_03_update_v1(int a4);
int pl_gunrock_mode01_03_update_v1(int a4);
int FUN_0c0f8920(int a4, int a5, float f4);

int kmiProcessVertex_06(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t15;
    register int t20;
    register int t25;
    register int t34;
    register int t35;
    register int t40;
    register int t45;
    register int t54;
    register int t55;
    register int t60;
    register int t66;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t15 = *(int *)((((int)stk + 0) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t15))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t15))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t15))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t15))->v)) * 255.0f));
    t20 = *(int *)((((int)stk + 0) + 0x0));
    t25 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(((((struct o30_float *)(t20))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t20))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t20))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t20))->v)) * 255.0f)));
    *(unsigned int *)(((t25 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t25 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t25 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t34 = kmiBGPlanePutColor(t3, (((t25 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t35 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((t34 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t35))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t35))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t35))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t35))->v)) * 255.0f));
    t40 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    t45 = kmiBGPlanePutWord(t3, (t34 + 0x1), ((((((int)(((((struct o30_float *)(t40))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t40))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t40))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t40))->v)) * 255.0f)));
    *(unsigned int *)(((t45 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t45 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t45 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t54 = kmiBGPlanePutColor(t3, (((t45 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    t55 = *(int *)(((((int)stk + 0) + 0x8) + 0x0));
    *(unsigned int *)(((t54 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t55))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t55))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t55))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t55))->v)) * 255.0f));
    t60 = *(int *)(((((int)stk + 0) + 0x8) + 0x0));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t54 + 0x1), ((((((int)(((((struct o30_float *)(t60))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t60))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t60))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t60))->v)) * 255.0f)))) << 2);
    t66 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t66, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0f8920(int a4, int a5, float f4)
{
    int t19;
    register int t25;
    register int t30;
    register int t109;

    (((struct o0_uint *)0xC803D00)->v) = ((((struct o90_int *)(a4))->v));
    (((struct o10_uint *)0xC803D00)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o14_uint *)0xC803D00)->v) = ((((struct o98_int *)(a4))->v));
    if ((((unsigned int)((unsigned int)((((struct o0_int *)0xC803D00)->v)) >> 16) >> 8) & 7) == 0) {
        (((struct o14_uint *)0xC803D00)->v) = ((((((struct o14_int *)0xC803D00)->v)) & 0x3FFFFFF) | 0x20000000);
    }
    (((struct o18_uint *)0xC803D00)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o20_float *)0xC803D00)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o24_float *)0xC803D00)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o28_float *)0xC803D00)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o2C_float *)0xC803D00)->v) = ((((struct o7C_float *)(a4))->v));
    (((struct o30_float *)0xC803D00)->v) = ((((struct o80_float *)(a4))->v));
    (((struct o34_float *)0xC803D00)->v) = ((((struct o84_float *)(a4))->v));
    (((struct o38_float *)0xC803D00)->v) = ((((struct o88_float *)(a4))->v));
    (((struct o3C_float *)0xC803D00)->v) = ((((struct o8C_float *)(a4))->v));
    (((struct o0_uint *)0xC803D40)->v) = ((((struct oA0_int *)(a4))->v));
    t19 = (((struct o0_int *)0xC803D00)->v);
    (((struct o30_uint *)0xC803D40)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC3470D0)));
    (((struct o0_uint *)0xC347090)->v) = ((((struct o0_int *)0xC803D00)->v));
    t25 = (((struct o0_int *)0xC803D00)->v);
    *(unsigned int *)0xC803E54 = ((unsigned int)((unsigned int)(t25 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t25 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC347090)->v) = ((((struct o0_int *)0xC803D40)->v));
        t109 = 0xC3470B0;
    } else {
        (((struct o4_uint *)0xC347090)->v) = ((((struct o10_int *)0xC803D00)->v));
        (((struct o8_uint *)0xC347090)->v) = ((((struct o14_int *)0xC803D00)->v));
        (((struct oC_uint *)0xC347090)->v) = ((((struct o18_int *)0xC803D00)->v));
        t30 = (((struct o30_int *)0xC803D40)->v);
        t109 = 0xC3470B0;
        if (t30 != 0) {
            if (t30 != 1) {
                if (t30 != 2) {
                    if (t30 != 3) {
                        if (t30 != 4) {
                            t109 = 0xC3470A0;
                            if (t30 == 16) {
                                (((struct o10_uint *)0xC347090)->v) = ((((((int)(((((struct o20_float *)0xC803D00)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)0xC803D00)->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)0xC803D00)->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)0xC803D00)->v)) * 255.0f));
                                (((struct o14_uint *)0xC347090)->v) = ((((((int)(((((struct o30_float *)0xC803D00)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)0xC803D00)->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)0xC803D00)->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)0xC803D00)->v)) * 255.0f));
                                t109 = 0xC3470B0;
                            }
                        } else {
                            (((struct o10_uint *)0xC347090)->v) = ((((struct o4_int *)0xC803D40)->v));
                            (((struct o14_uint *)0xC347090)->v) = ((((struct o8_int *)0xC803D40)->v));
                            (((struct o20_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
                            (((struct o24_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
                            (((struct o28_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
                            (((struct o2C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
                            (((struct o30_uint *)0xC347090)->v) = ((((struct o10_int *)0xC803D40)->v));
                            (((struct o34_uint *)0xC347090)->v) = ((((struct o14_int *)0xC803D40)->v));
                            (((struct o38_uint *)0xC347090)->v) = ((((struct o18_int *)0xC803D40)->v));
                            (((struct o3C_uint *)0xC347090)->v) = ((((struct o1C_int *)0xC803D40)->v));
                            t109 = 0xC3470D0;
                        }
                    } else {
                        (((struct o10_uint *)0xC347090)->v) = ((((struct o4_int *)0xC803D40)->v));
                        (((struct o14_uint *)0xC347090)->v) = ((((struct o8_int *)0xC803D40)->v));
                        t109 = 0xC3470B0;
                    }
                } else {
                    (((struct o20_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
                    (((struct o24_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
                    (((struct o28_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
                    (((struct o2C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
                    (((struct o30_uint *)0xC347090)->v) = ((((struct o30_int *)0xC803D00)->v));
                    (((struct o34_uint *)0xC347090)->v) = ((((struct o34_int *)0xC803D00)->v));
                    (((struct o38_uint *)0xC347090)->v) = ((((struct o38_int *)0xC803D00)->v));
                    (((struct o3C_uint *)0xC347090)->v) = ((((struct o3C_int *)0xC803D00)->v));
                    t109 = 0xC3470D0;
                }
            } else {
                (((struct o10_uint *)0xC347090)->v) = ((((struct o20_int *)0xC803D00)->v));
                (((struct o14_uint *)0xC347090)->v) = ((((struct o24_int *)0xC803D00)->v));
                (((struct o18_uint *)0xC347090)->v) = ((((struct o28_int *)0xC803D00)->v));
                (((struct o1C_uint *)0xC347090)->v) = ((((struct o2C_int *)0xC803D00)->v));
                t109 = 0xC3470B0;
            }
        }
    }
    (((struct o0_uint *)0xC803DE0)->v) = (*(int *)0xC803E54);
    (((struct o4_uint *)0xC803DE0)->v) = (t109 - 0xC347090);
    return 0x0;
}
