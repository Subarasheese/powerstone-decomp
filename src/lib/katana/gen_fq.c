/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7228_short { char p[0x7228]; short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c042980(int, int);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int math_vec3_sub(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int fx_swirl_create(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e24f0(int);
int _divls(void);
extern int _modls();
extern int _quick_odd_mvn();
int FUN_0c101148(int, int);
int FUN_0c1012f4(int, int, int);
int FUN_0c104622(int);
int check_caps(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int memset(int, int, int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int thunk_FUN_0c062242(int);
int vmsio_ismount(int);
int FUN_0c0cba6e(int a4, float f4);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int kmiProcessVertex_05(int a4);
int FUN_0c10d760(int a4, int a5, int a6, int a7);
int fx_tick_043bdc(int a4);

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int stk[14];
    register int t1;
    register int t3;
    register int t11;
    register int t22;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t35;
    register int t38;
    register int t39;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t59;
    register int t68;
    register int t73;
    register int t78;
    register int t84;
    register int t90;
    register int t96;
    register int t102;
    register int t108;
    register int t114;
    register int t120;
    register int t122;
    register int t123;
    register int t126;
    register int t127;
    register int t136;
    register int t148;
    register int t150;
    register int t36;
    register int t37;
    register int t45;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    if (a8 != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
        t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)(((0xC347200 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC)));
    } else {
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
        t3 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((int)((int)(*(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC347200) + 0xC))) / (int)0xA));
    }
    t11 = vmsio_ismount(a4);
    if (t11 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC80DBC8) + 0x8))) == 0) {
        return 0xFFFFFF01;
    }
    memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x0, 0x200);
    t22 = FUN_0c1012f4(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))));
    if ((int)t22 < 0) {
        t23 = 0xFFFFFF81;
        if (t22 != 0xFFFFFF40) {
            t23 = 0xFFFFFF01;
        }
        return t23;
    }
    t26 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
    if ((int)t26 < 0) {
        return 0xFFFFFF01;
    }
    t27 = check_caps(((a4 * 0x148) + 0xC80DBC8));
    if ((int)t27 < 0) {
        return 0xFFFFFF83;
    }
    t28 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    *(unsigned int *)((t28 + 0x30)) = (*(int *)((t28 + 0x1C)));
    memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x0, 0x200);
    t39 = *(int *)(((int)stk + 8));
    t35 = (memset(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x10), 0x20, 0x20));
    t38 = 0x0;
    for (;;) {
        if ((int)t38 >= (int)0x20) {
            break;
        }
        t35 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)));
        t36 = t38;
        t37 = (*(signed char *)((t39 + 0x0)));
        t39 = (t39 + 0x1);
        t36 = (t36 + 0x10);
        t38 = (t38 + 0x1);
        *(unsigned char *)((t36 + t35)) = t37;
    }
    set_vmstime((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))));
    t46 = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x30);
    t47 = 0x0;
    t48 = (((int)stk + 0) + 0x10);
    for (;;) {
        if ((int)t47 >= (int)0x8) {
            break;
        }
        t45 = (*(signed char *)((t48 + 0x0)));
        t48 = (t48 + 0x1);
        t47 = (t47 + 0x1);
        *(unsigned char *)((t46 + 0x0)) = t45;
        t46 = (t46 + 0x1);
    }
    t50 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t50;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t50 + 0xC)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x14)));
    t59 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), t48, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    (((struct o4E_uchar *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)))))->v) = (*(int *)(((int)stk + 12)));
    (((struct o4F_uchar *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)))))->v) = 0x0;
    t68 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t73 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x4A, (*(int *)(((int)stk + 8))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t78 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x46, (*(int *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t84 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t90 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t96 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x1C))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t102 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x20))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t108 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x34))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t114 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x38))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t120 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t122 = (memset((((a4 << 8) << 1) + 0xC812AD4), 0x0, 0x200));
    t123 = 0x0;
    for (;;) {
        if ((int)t123 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0)))) {
            t126 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
            t127 = *(int *)((t126 + 0x18));
            *(volatile int *)(((0x30 + t126) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = t127;
            t122 = (memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28))), 0x0, ((t127 << 8) << 1)));
            t122 = (FUN_0c104622(a4));
            t123 = 0xFFFA;
            t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), t123));
            t136 = 0x0;
            for (;;) {
                if ((int)t136 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10)))) {
                    break;
                }
                t122 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t136), t123));
                t136 = (t136 + 0x1);
            }
            t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), t123));
            return ((int (*)(void))(0xC102510))();
        }
        t148 = 0x0;
        if (a8 != 0) {
            t122 = (FUN_0c1012f4(a4, t123, (((a4 << 8) << 1) + 0xC812AD4)));
            t148 = t122;
        }
        t122 = t148;
        if (t122 != 0xFFFFFF01) {
            t150 = 0xFFFF;
            if (t122 != 0xFFFFFF40) {
                t150 = 0xFFFC;
            }
            t122 = (set_fat(a4, t123, t150));
            t123 = (t123 + 0x1);
            continue;
        }
        break;
    }
    return 0xFFFFFF01;
}

int kmiProcessVertex_05(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t17;
    register int t22;
    register int t27;
    register int t34;
    register int t38;
    register int t39;
    register int t44;
    register int t49;
    register int t56;
    register int t60;
    register int t61;
    register int t66;
    register int t72;

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
    t17 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((t16 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t17))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t17))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t17))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t17))->v)) * 255.0f));
    t22 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    t27 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)(((((struct o30_float *)(t22))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t22))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t22))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t22))->v)) * 255.0f)));
    *(unsigned int *)(((t27 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t27 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t27 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t34 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t34;
    t38 = kmiBGPlanePutColor2(t3, (((t27 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t34 + 0x14))));
    t39 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((t38 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t39))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t39))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t39))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t39))->v)) * 255.0f));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    t49 = kmiBGPlanePutWord(t3, (t38 + 0x1), ((((((int)(((((struct o30_float *)(t44))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t44))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t44))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t44))->v)) * 255.0f)));
    *(unsigned int *)(((t49 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t49 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t49 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t56 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t56;
    t60 = kmiBGPlanePutColor2(t3, (((t49 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t56 + 0x14))));
    t61 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((t60 << 2) + 0xC817064)) = ((((((int)(((((struct o20_float *)(t61))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)(t61))->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)(t61))->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)(t61))->v)) * 255.0f));
    t66 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t60 + 0x1), ((((((int)(((((struct o30_float *)(t66))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)(t66))->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)(t66))->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)(t66))->v)) * 255.0f)))) << 2);
    t72 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t72, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c10d760(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xA05F6900 = 0x8;
    (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x2);
    (((struct o0_uint *)0xC817328)->v) = (((((struct o0_int *)0xC817328)->v)) + 0x1);
    if ((((((struct o0_int *)0xC816FC8)->v)) & 2) != 0) {
        t1 = ((unsigned int)((unsigned int)((*(int *)0xA05F810C) & 0x400) >> 8) >> 2);
    } else {
        t2 = *(int *)0xC347688;
        *(unsigned int *)0xC347688 = ((t2 + 0x1) & 0x1);
        t1 = ((t2 + 0x1) & 0x1);
    }
    *(unsigned int *)0xC842724 = t1;
    t1 = 0x1;
    t2 = 0x1;
    if (((((((struct o1C_int *)0xC816FC8)->v)) & 0x4) == 4) && (t0 = *(int *)0xC842724, t0 == 1)) {
    } else {
        (((struct o0_uint *)0xC8171A0)->v) = (((((struct o0_int *)0xC8171A0)->v)) - 1);
        if ((int)((((struct o0_int *)0xC8171A0)->v)) >= 0) {
            t0 = 0x1;
            if (((((struct o0_int *)0xC8426C8)->v)) != 0) {
                (((struct o0_uint *)0xC8426C8)->v) = 0x0;
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            (((struct o0_uint *)0xC8171A0)->v) = ((((struct o4_int *)0xC8171A0)->v));
            t2 = 0x0;
        }
        t1 = t2;
    }
    if (t1 != 0) {
        return 0x0;
    }
    if (((((struct oC_int *)0xC817328)->v)) != 0) {
        return ((int (*)(int, int, int, int))(0xC10DA8C))(0x1, t2, a6, a7);
    }
    if (((((struct o8_int *)0xC817328)->v)) != 0) {
        t0 = (((struct o1C_int *)0xC8426C8)->v);
        (((struct o1C_uint *)0xC8426C8)->v) = (t0 + 0x1);
        if ((unsigned int)(t0 + 0x1) > (unsigned int)0x10) {
            (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC817268)->v));
            (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC817268)->v));
            (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC817268)->v));
            (((struct o24_uint *)0xA05F8048)->v) = ((((struct o8_int *)0xC817268)->v));
            (((struct o28_uint *)0xC8171A0)->v) = 0x0;
            (((struct o1C_uint *)0xC8426C8)->v) = 0x0;
        }
        return ((int (*)(int, int, int, int))(0xC10DA8C))(0x1, 0x1, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC10DA74))(t1, t2, a6, a7);
}

