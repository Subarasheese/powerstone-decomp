/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71F8_uint { char p[0x71F8]; unsigned int v; };
struct o71FC_uint { char p[0x71FC]; unsigned int v; };
struct o720C_short { char p[0x720C]; short v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7215_uchar { char p[0x7215]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7241_uchar { char p[0x7241]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int fx_spawn_0446ce(int);
int FUN_0c0447bc(int);
int FUN_0c044868(int, int);
int FUN_0c0448f6(int);
int FUN_0c0555dc(void);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08a6e4(int);
int FUN_0c092894(int);
int FUN_0c097b10(int);
extern int pl_state_dispatch_720a();
extern int FUN_0c098b9c();
int pl_clear_tint_flag(int);
int FUN_0c099a92(int);
int FUN_0c099ac6(int);
int FUN_0c099ae4(int);
int FUN_0c099afe(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_mash_reduce_counter(int, int);
int pl_get_hit_count_of_opponent(int);
int hit_probe_step_list(int, int, float);
int pl_update_camera_side_flag(int);
int pl_landed(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
int FUN_0c10b7b0(int, int, int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c06358e(int a4);
int FUN_0c09788c(int a4);
int FUN_0c115d7c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int kmiProcessVertex_08(int a4);
int kmiProcessVertex_14(int a4);
int fx_tick_034dd0(int a4, int a5, int a6, int a7);
int FUN_0c10d240(void);
int FUN_0c04492c(int a4);
int pl_ryoma_attack_kind7(int a4, int a5, int a6, int a7);

int FUN_0c115d7c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[18];
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t16;
    register int t18;
    register int t19;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t33;
    register int t34;
    register int t35;
    register int t37;
    register int t38;
    register int t45;
    register int t46;
    register int t49;
    register int t54;

    *(unsigned int *)(((int)stk + 4)) = (*(short *)((a7 + 0x0)));
    *(unsigned int *)(((int)stk + 40)) = (a7 + 0x2);
    *(unsigned int *)(((int)stk + 16)) = (*(short *)(((a7 + 0x2) + 0x0)));
    t10 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 44)) = (a9 + 0x2);
    *(unsigned int *)(((int)stk + 12)) = (*(short *)(((a9 + 0x2) + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t8 = 0x0;
    t9 = a6;
    t11 = a4;
    t12 = a8;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) < (int)(*(int *)(((int)stk + 36)))) {
            t15 = *(short *)((t11 + 0x0));
            if (((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t11 = (t11 + 0x2);
            *(unsigned int *)(((int)stk + 0)) = (((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            for (;;) {
                t16 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t16;
                t8 = (*(int *)(((int)stk + 16)));
                t18 = *(int *)(((int)stk + 4));
                t19 = *(int *)(((int)stk + 0));
                if ((int)((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t9 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t9 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t9 + 0x0)) = ((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12));
                    }
                }
                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                t23 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                *(unsigned int *)(((int)stk + 4)) = t23;
                t8 = (*(int *)(((int)stk + 20)));
                t8 = (t8 & 0xF);
                t26 = *(int *)(((int)stk + 16));
                t27 = t8;
                t8 = 0xC15BB80;
                t28 = *(int *)(((t27 << 2) + t8));
                t29 = *(int *)(((int)stk + 0));
                if ((int)((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t9 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t9 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t9 + 0x0)) = ((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12));
                    }
                }
                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                t33 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                *(unsigned int *)(((int)stk + 4)) = t33;
                t34 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t34 + 0x2);
                if ((int)(t34 + 0x2) >= (int)0x20) {
                    break;
                }
            }
            t35 = *(short *)((t11 + 0x0));
            *(unsigned short *)(((int)stk + 0)) = ((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00))) != 0) {
                t8 = (*(int *)(((int)stk + 32)));
                return t8;
            }
            t11 = (t11 + 0x2);
            *(unsigned int *)(((int)stk + 8)) = (((short)((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            for (;;) {
                t37 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t37;
                t38 = *(int *)(((int)stk + 12));
                t8 = (*(int *)(((int)stk + 8)));
                if ((int)((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t12 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t12 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t12 + 0x0)) = ((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12));
                    }
                }
                t8 = (*(int *)(((int)stk + 20)));
                t45 = *(short *)((t12 + 0x0));
                t46 = t10;
                t12 = (t12 + 0x2);
                t10 = t45;
                t8 = (t8 & 0xF);
                t8 = (t8 << 2);
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((0xC15BB80 + t8)));
                t8 = (*(int *)(((int)stk + 12)));
                t49 = *(int *)(((int)stk + 8));
                if ((int)(((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49)) > (int)0x7FFF) {
                    *(unsigned short *)((t12 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)(((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t12 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t12 + 0x0)) = (((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49));
                    }
                }
                *(unsigned int *)(((int)stk + 12)) = t10;
                t10 = *(short *)((t12 + 0x0));
                t12 = (t12 + 0x2);
                t54 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t54 + 0x2);
                if ((int)(t54 + 0x2) >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
            *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x2);
            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x2);
            continue;
        }
        t8 = 0x50;
        *(unsigned short *)((a7 + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)(((*(int *)(((int)stk + 40))) + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned short *)(((*(int *)((((int)stk + 0) + t8))) + 0x0)) = t10;
        *(unsigned short *)(((*(int *)(((int)stk + 44))) + 0x0)) = (*(int *)(((int)stk + 12)));
        t8 = a5;
        return t8;
    }
    return (*(int *)(((int)stk + 28)));
}

int kmiProcessVertex_08(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u18;
    register int t19;
    register int t28;
    register float u30;
    register float u32;
    register int t33;
    register int t42;
    register float u44;
    register float u46;
    register int t48;

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
    u16 = (((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    u18 = (((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    *(unsigned int *)(((t19 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u30 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    u32 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u44 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    u46 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int kmiProcessVertex_14(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u17;
    register float u19;
    register int t20;
    register int t29;
    register float u31;
    register float u33;
    register int t34;
    register int t43;
    register float u45;
    register float u47;
    register int t49;

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
    u16 = (((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    u17 = *(float *)0xC1102F4;
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(u16 * u17) << 16) << 8) | ((int)(u16 * u17) << 16)) | ((int)(u16 * u17) << 8)) | (int)(u16 * u17));
    u19 = (((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    t20 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u19 * u17) << 16) << 8) | ((int)(u19 * u17) << 16)) | ((int)(u19 * u17) << 8)) | (int)(u19 * u17)));
    *(unsigned int *)(((t20 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t20 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t20 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t29 = kmiBGPlanePutColor(t3, (((t20 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10))));
    u31 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t29 << 2) + 0xC817064)) = ((((((int)(u31 * u17) << 16) << 8) | ((int)(u31 * u17) << 16)) | ((int)(u31 * u17) << 8)) | (int)(u31 * u17));
    u33 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t34 = kmiBGPlanePutWord(t3, (t29 + 0x1), ((((((int)(u33 * u17) << 16) << 8) | ((int)(u33 * u17) << 16)) | ((int)(u33 * u17) << 8)) | (int)(u33 * u17)));
    *(unsigned int *)(((t34 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t34 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t34 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t43 = kmiBGPlanePutColor(t3, (((t34 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    u45 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t43 << 2) + 0xC817064)) = ((((((int)(u45 * u17) << 16) << 8) | ((int)(u45 * u17) << 16)) | ((int)(u45 * u17) << 8)) | (int)(u45 * u17));
    u47 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t43 + 0x1), ((((((int)(u47 * u17) << 16) << 8) | ((int)(u47 * u17) << 16)) | ((int)(u47 * u17) << 8)) | (int)(u47 * u17)))) << 2);
    t49 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t49, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c10d240(void)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R10 = (0xF0FFFFFF);
    v0_0 = (0xC10B7B0);
    v0_0 = (0x100);
    v0_1 = (0x10000000);
    v0_2 = (0x0);
    R5 = (0x1);
    v0_6 = (0x0);
    v0_7 = (0xA05F8144);
    v0_5 = (0x2);
    v0_4 = (0x4);
    L_C10D266:;
    if (!(((*(int *)((0xC817304 + (v0_6 << 2)))) == 1))) goto L_C10D4CA;
    if (((*(int *)0xC8171CC) == 0)) goto L_C10D282;
    goto L_C10D4CA;
    L_C10D4CA:;
    v0_3 = (int)(v0_6 + 0x1) >= (int)v0_4;
    v0_6 = ((v0_6 + 0x1));
    if (v0_3) goto L_C10D4D4;
    goto L_C10D266;
    L_C10D4D4:;
    v0_2 = (0x1);
    L_C10D4D6:;
    return v0_2;
    L_C10D282:;
    *(unsigned int *)0xC8171CC = R5;
    *(unsigned int *)(((v0_6 << 2) + 0xC817304)) = v0_5;
    (((struct o0_uint *)0xC81731C)->v) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 & R5);
    *(unsigned int *)0xC842714 = (*(int *)0xFFD8000C);
    *(unsigned int *)0xA05F8008 = R5;
    *(unsigned int *)0xA05F8008 = v0_2;
    v0_3 = *(int *)(((int)stk + 8));
    (((struct o0_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC817430)));
    (((struct o8_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC817434)));
    (((struct o4_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC81743C)));
    (((struct oC_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC817440)));
    *(unsigned int *)0xA05F8164 = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC817438)));
    *(unsigned int *)((v0_7 + 0x0)) = 0x80000000;
    *(volatile int *)((v0_7 + 0x0));
    (((struct o4_uint *)0xC81731C)->v) = v0_2;
    (((struct o8_uint *)0xC81731C)->v) = v0_2;
    *(unsigned int *)0xC8426D0 = v0_2;
    v0_2 = (0xC817388);
    v0_3 = ((v0_6 << 2));
    if (((*(int *)(((v0_6 << 2) + 0xC817388))) == 0)) goto L_C10D314;
    (((struct o4_uint *)0xC81731C)->v) = (((((struct o4_int *)0xC81731C)->v)) | R5);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_6 = FUN_0c10b7b0(v0_1, (*(int *)((v0_3 + 0xC817338))), ((*(int *)((v0_3 + v0_2))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_6);
    if ((v0_6 != v0_0)) goto L_C10D314;
    L_C10D4C6:;
    v0_2 = (0x0);
    goto L_C10D4D6;
    L_C10D314:;
    if (!(((*(int *)((v0_3 + 0xC817398))) != 0))) goto L_C10D410;
    (((struct o4_uint *)0xC81731C)->v) = (((((struct o4_int *)0xC81731C)->v)) | v0_5);
    if ((((((struct o0_int *)0xC8173EC)->v)) != 1)) goto L_C10D360;
    *(unsigned int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0))) & R10) | 0x1000000);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_5 = FUN_0c10b7b0(v0_1, ((((struct o4_int *)0xC8173EC)->v)), ((((struct o8_int *)0xC8173EC)->v)), 0x10, ((int)stk + 4));
    v0_2 = (v0_5);
    if ((v0_5 != v0_0)) goto L_C10D360;
    goto L_C10D4C6;
    L_C10D410:;
    v0_2 = (0xC8173A8);
    if (((*(int *)((v0_3 + 0xC8173A8))) == 0)) goto L_C10D43A;
    (((struct o4_uint *)0xC81731C)->v) = (((((struct o4_int *)0xC81731C)->v)) | v0_4);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = FUN_0c10b7b0(v0_1, (*(int *)((v0_3 + 0xC817358))), ((*(int *)((v0_3 + v0_2))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C10D4C6;
    L_C10D43A:;
    if (((*(int *)((v0_3 + 0xC8173B8))) == 0)) goto L_C10D49A;
    (((struct o4_uint *)0xC81731C)->v) = (((((struct o4_int *)0xC81731C)->v)) | 0x8);
    if ((((((struct o0_int *)0xC8173EC)->v)) != 1)) goto L_C10D47E;
    *(unsigned int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0))) & R10) | 0x3000000);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = FUN_0c10b7b0(v0_1, ((((struct o4_int *)0xC8173EC)->v)), ((((struct o8_int *)0xC8173EC)->v)), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C10D4C6;
    L_C10D47E:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = FUN_0c10b7b0(v0_1, (*(int *)((v0_3 + 0xC817368))), ((*(int *)((v0_3 + 0xC8173B8))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C10D4C6;
    L_C10D49A:;
    if (((*(int *)((v0_3 + 0xC8173C8))) == 0)) goto L_C10D4D4;
    (((struct o4_uint *)0xC81731C)->v) = (((((struct o4_int *)0xC81731C)->v)) | 0x10);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_0 = (FUN_0c10b7b0(v0_1, (*(int *)((v0_3 + 0xC817378))), ((*(int *)((v0_3 + 0xC8173C8))) + 0x20), 0x10, ((int)stk + 4))) != v0_0;
    if (v0_0) goto L_C10D4D4;
    goto L_C10D4C6;
    L_C10D360:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_5 = *(int *)((v0_3 + 0xC817398));
    *(unsigned int *)(((int)stk + 0)) = ((int)stk + 4);
    v0_2 = (0xC817398);
    v0_6 = ((v0_5 + 0x20));
    v0_7 = (0x10);
    v0_5 = FUN_0c10b7b0(v0_1, (*(int *)((v0_3 + (v0_2 - 80)))), v0_6, v0_7, *(int *)((int)stk + 0));
    v0_2 = (v0_5);
    if ((v0_5 == v0_0)) goto L_C10D4C6;
    goto L_C10D410;
}

