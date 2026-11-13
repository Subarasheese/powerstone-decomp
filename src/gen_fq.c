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
int FUN_0c0e6d00(void);
extern int FUN_0c0e6e5c();
extern int FUN_0c0e6fe8();
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
    register int t14;
    register int t25;
    register int t26;
    register int t29;
    register int t30;
    register int t31;
    register int t38;
    register int t41;
    register int t42;
    register int t49;
    register int t50;
    register int t51;
    register int t53;
    register int t62;
    register int t71;
    register int t76;
    register int t81;
    register int t87;
    register int t93;
    register int t99;
    register int t105;
    register int t111;
    register int t117;
    register int t123;
    register int t125;
    register int t126;
    register int t129;
    register int t130;
    register int t139;
    register int t151;
    register int t153;
    register int t39;
    register int t40;
    register int t48;

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
        *(volatile int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC347200) + 0xC));
        *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (FUN_0c0e6d00());
    }
    t14 = vmsio_ismount(a4);
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC80DBC8) + 0x8))) == 0) {
        return 0xFFFFFF01;
    }
    memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x0, 0x200);
    t25 = FUN_0c1012f4(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))));
    if ((int)t25 < 0) {
        t26 = 0xFFFFFF81;
        if (t25 != 0xFFFFFF40) {
            t26 = 0xFFFFFF01;
        }
        return t26;
    }
    t29 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))));
    if ((int)t29 < 0) {
        return 0xFFFFFF01;
    }
    t30 = check_caps(((a4 * 0x148) + 0xC80DBC8));
    if ((int)t30 < 0) {
        return 0xFFFFFF83;
    }
    t31 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    *(unsigned int *)((t31 + 0x30)) = (*(int *)((t31 + 0x1C)));
    memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x0, 0x200);
    t42 = *(int *)(((int)stk + 8));
    t38 = (memset(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x10), 0x20, 0x20));
    t41 = 0x0;
    for (;;) {
        if ((int)t41 >= (int)0x20) {
            break;
        }
        t38 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)));
        t39 = t41;
        t40 = (*(signed char *)((t42 + 0x0)));
        t42 = (t42 + 0x1);
        t39 = (t39 + 0x10);
        t41 = (t41 + 0x1);
        *(unsigned char *)((t39 + t38)) = t40;
    }
    set_vmstime((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))));
    t49 = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x30);
    t50 = 0x0;
    t51 = (((int)stk + 0) + 0x10);
    for (;;) {
        if ((int)t50 >= (int)0x8) {
            break;
        }
        t48 = (*(signed char *)((t51 + 0x0)));
        t51 = (t51 + 0x1);
        t50 = (t50 + 0x1);
        *(unsigned char *)((t49 + 0x0)) = t48;
        t49 = (t49 + 0x1);
    }
    t53 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t53;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t53 + 0xC)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x14)));
    t62 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), t51, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    (((struct o4E_uchar *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)))))->v) = (*(int *)(((int)stk + 12)));
    (((struct o4F_uchar *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)))))->v) = 0x0;
    t71 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t76 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x4A, (*(int *)(((int)stk + 8))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t81 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x46, (*(int *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t87 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t93 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t99 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x1C))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t105 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x20))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t111 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x34))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t117 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x38))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t123 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t125 = (memset((((a4 << 8) << 1) + 0xC812AD4), 0x0, 0x200));
    t126 = 0x0;
    for (;;) {
        if ((int)t126 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0)))) {
            t129 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
            t130 = *(int *)((t129 + 0x18));
            *(volatile int *)(((0x30 + t129) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = t130;
            t125 = (memset((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28))), 0x0, ((t130 << 8) << 1)));
            t125 = (FUN_0c104622(a4));
            t126 = 0xFFFA;
            t125 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), t126));
            t139 = 0x0;
            for (;;) {
                if ((int)t139 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10)))) {
                    break;
                }
                t125 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t139), t126));
                t139 = (t139 + 0x1);
            }
            t125 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x8))), t126));
            return ((int (*)(void))(0xC102510))();
        }
        t151 = 0x0;
        if (a8 != 0) {
            t125 = (FUN_0c1012f4(a4, t126, (((a4 << 8) << 1) + 0xC812AD4)));
            t151 = t125;
        }
        t125 = t151;
        if (t125 != 0xFFFFFF01) {
            t153 = 0xFFFF;
            if (t125 != 0xFFFFFF40) {
                t153 = 0xFFFC;
            }
            t125 = (set_fat(a4, t126, t153));
            t126 = (t126 + 0x1);
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

