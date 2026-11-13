/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_float { char p[0xF0]; float v; };
int FUN_0c02828e(void);
int FUN_0c02d420(void);
int FUN_0c02d458(void);
int FUN_0c031388(void);
int FUN_0c03bdb2(int);
int FUN_0c042222(int, int);
int FUN_0c042256(int, int, int);
int FUN_0c0422b8(int, int);
int FUN_0c0555dc(void);
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_ryoma_attack_kind3_phase0(int);
int FUN_0c08a7d4(int, int);
int FUN_0c097eb6(int);
int FUN_0c097fc4(int);
int FUN_0c098026(int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int pl_change_state(int, int, int, int);
int menu_ui_spawn_27(int);
int menu_ui_spawn_29(int);
int FUN_0c0c99c0(int, int, int, float);
int FUN_0c0c9a4c(int, int);
int fx_trail_resize_list(int);
int FUN_0c0c9eb8(int);
int FUN_0c0ca050(int);
int FUN_0c0dca60(int, int, int, int, int);
int FUN_0c0dcac0(int, int);
int gfx_set_background_color(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlLoadMatrix(int);
int nlSelectMatrixStack(int);
int nlTranslate(float, float, float);
int nlPerspective(int, float, float, float);
int _quick_odd_mvn(void);
int buCalcCRC(int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c062242(int);
int game_draw_frame(void);
float FUN_0c097c26(int a4);
int FUN_0c0c9b08(int a4);
int FUN_0c042304(int a4, int a5, int a6, int a7);
int menu_ui_task_26(int a4, int a5, int a6, int a7);
int fx_tick_039090(int a4, int a5, int a6, int a7);
int fx_tick_03bcac(int a4, int a5, int a6, int a7);
int FUN_0c0f3ad4(int a4, int a5, int a6, int a7);
int FUN_0c10cc84(void);
int pl_ryoma_attack_kind3(int a4, int a5, int a6, int a7);

int FUN_0c0f3ad4(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t24;
    register int t25;
    register int t27;
    register int t30;
    register int t32;
    register int t33;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t108;
    register int t109;
    int t37;
    int t43;
    register int t94;
    register int t95;

    if ((((((struct o4C_short *)(a5))->v)) != 0) && ((t1 = (((struct o4C_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = (((struct o54_short *)(a5))->v), (int)(unsigned short)t2 <= (int)0x3) && ((t3 = (((struct o44_int *)(a5))->v), t3 != 0) && ((t4 = (((struct o48_int *)(a5))->v), t4 != 0) && ((t5 = (((struct o54_short *)(a5))->v), t5 == 0) || (t6 = (((struct o50_int *)(a5))->v), t6 != 0))))))) {
        memset(a4, 0x0, 0x60);
        memset(a4, 0x20, 0x10);
        memset((a4 + 0x10), 0x20, 0x20);
        memset((a4 + 0x30), 0x0, 0x10);
        t11 = a5;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t15 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t12 = (t12 + 0x1);
                *(unsigned char *)((t13 + 0x0)) = t15;
                t13 = (t13 + 0x1);
                if ((int)t12 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t17 = (a5 + 0x12);
        t18 = 0x0;
        t19 = (a4 + 0x10);
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 0) {
                t21 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t18 = (t18 + 0x1);
                *(unsigned char *)((t19 + 0x0)) = t21;
                t19 = (t19 + 0x1);
                if ((int)t18 >= (int)0x20) {
                    break;
                }
                continue;
            }
            break;
        }
        t23 = 0x0;
        t24 = (a5 + 0x34);
        t25 = (a4 + 0x30);
        for (;;) {
            if ((*(signed char *)((t24 + 0x0))) != 0) {
                t27 = *(signed char *)((t24 + 0x0));
                t24 = (t24 + 0x1);
                t23 = (t23 + 0x1);
                *(unsigned char *)((t25 + 0x0)) = t27;
                t25 = (t25 + 0x1);
                if ((int)t23 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t30 = *(int *)(((((unsigned short)((((struct o4C_short *)(a5))->v)) & 0x3) << 2) + 0xC346BF4));
        t32 = *(int *)(((((unsigned short)((((struct o54_short *)(a5))->v)) & 0x3) << 2) + 0xC346C04));
        t33 = (((struct o5C_int *)(a5))->v);
        (((struct o42_ushort *)(a4))->v) = ((((struct o4E_short *)(a5))->v));
        (((struct o40_ushort *)(a4))->v) = ((((struct o4C_short *)(a5))->v));
        *(unsigned int *)(((int)stk + 0)) = 0x80;
        if ((((((struct o54_short *)(a5))->v)) != 0) && (t37 = (((struct o50_int *)(a5))->v), t37 != 0)) {
            (((struct o44_ushort *)(a4))->v) = ((((struct o54_short *)(a5))->v));
            *(unsigned int *)(((int)stk + 8)) = (t30 + 0x80);
        } else {
            (((struct o44_ushort *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        if ((((((struct o5C_int *)(a5))->v)) != 0) && (t43 = (((struct o58_int *)(a5))->v), t43 != 0)) {
            (((struct o48_uint *)(a4))->v) = ((((struct o5C_int *)(a5))->v));
            *(unsigned int *)(((int)stk + 4)) = ((t30 + t32) + 0x80);
            t94 = ((t30 + t32) + 0x80);
        } else {
            (((struct o48_uint *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t94 = (t30 + t32);
        }
        if (t30 != 0) {
            memcpy((a4 + 0x60), ((((struct o44_int *)(a5))->v)), 0x20);
            memcpy(((*(int *)(((int)stk + 0))) + a4), ((((struct o48_int *)(a5))->v)), t30);
        } else {
            t95 = t24;
        }
        if (t32 != 0) {
            memcpy(((*(int *)(((int)stk + 8))) + a4), ((((struct o50_int *)(a5))->v)), t32);
        } else {
        }
        if (((((struct o5C_int *)(a5))->v)) != 0) {
            memcpy(((*(int *)(((int)stk + 4))) + a4), ((((struct o58_int *)(a5))->v)), ((((struct o5C_int *)(a5))->v)));
        } else {
        }
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
        } else {
        }
        (((struct o46_ushort *)(a4))->v) = (buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80), t94, t95));
    } else {
        t108 = a4;
        t109 = a5;
    }
    return ((int (*)(int, int, int, int))(0xC0F3CBC))(t108, t109, a6, a7);
}

int FUN_0c10cc84(void)
{
    int stk[63];
    register int t1;
    register int t7;
    register int t15;
    register int t21;
    register int t27;

    *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x359;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC816FC4)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x20C;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x345;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC816FC4)->v), (t7 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x24;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x204;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 0) + 0x18)) = 0x3F;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 32) != 0) {
        (((struct o74_uint *)(((int)stk + 0)))->v) = 0x104;
    } else {
        (((struct o74_uint *)(((int)stk + 0)))->v) = 0x102;
    }
    (((struct o78_uint *)(((int)stk + 0)))->v) = 0x15;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t15 = (((struct o20_int *)0xC816FC4)->v), (t15 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x6;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x3;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC816FC4)->v), (t21 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x16C;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x319;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t27 = (((struct o20_int *)0xC816FC4)->v), (t27 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x24)) = 0x1F;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 0) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 0) + 0x2C)) = 0x0;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
        }
    } else {
        if ((((((struct o20_int *)0xC816FC4)->v)) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 0) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
    if (((((struct o0_int *)0xC816FC4)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x1F;
    }
    if ((((((struct o20_int *)0xC816FC4)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x1;
    }
    (((struct o48_uint *)(((int)stk + 0)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 0)))->v) = 0x0;
    return ((int (*)(int, int, int, int))(0xC10CE6A))(0x1, 0x0, 0x12, 0x1F);
}

