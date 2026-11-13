/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o728C_float { char p[0x728C]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c0634b4(int);
int pl_mode15_cls15_f1_phase0(int);
int pl_mode15_cls15_f1_phase2(int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_end_action_reset(int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c09c782(int);
int pl_apply_motion_translation(int);
int pl_stick_dir_angle(int);
int pl_end_action_choose_state(int);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);
int dbg_print_at(int, float, float);
int testmode_check_exit_combo(void);
int testmode_draw_title_and_footer(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
float math_tan_angle16(int);
int FUN_0c0e3510(void);
int nlMultiMatrix(int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int testmode_memory_check_screen(float f4);
int obj_tick_0367e4(int a4);
int FUN_0c08c304(int a4);
int FUN_0c0e2e90(int a4, float f4, float f5, float f6);
int FUN_0c10ca40(void);
int FUN_0c025d72(int a4, int a5, int a6, int a7);
int pl_mode15_cls15_f1(int a4, int a5, int a6, int a7);
int FUN_0c1099e0(void);

int FUN_0c0e2e90(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u28;
    register float u31;
    register float u32;
    register float u33;
    register float u36;
    register float u37;
    register float u38;
    register float u41;
    register float u42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    *(float *)(((int)stk + 0)) = (1.0f / (math_tan_angle16((t0 >> 1))));
    if (((((struct oC_float *)0xC346AB0)->v)) != 0.0f) {
        t4 = math_tan_angle16((t0 >> 1));
        t6 = math_atan_angle16((t4 * (((((struct oC_float *)0xC346AB0)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16(t6)));
    } else {
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16((t0 >> 1))));
    }
    u14 = *(float *)(((int)stk + 0));
    u15 = *(float *)(((int)stk + 8));
    u24 = (1.0f / (u15 * u14));
    if (((((struct o10_float *)0xC346AB0)->v)) != 0.0f) {
        t16 = math_atan_angle16((1.0f / (u15 * u14)));
        *(unsigned int *)(((int)stk + 4)) = t16;
        u24 = ((math_tan_angle16(t16)) * (((((struct o10_float *)0xC346AB0)->v)) + 1.0f));
    }
    t26 = math_atan_angle16(u24);
    t27 = math_cos_angle16(t26);
    (((struct oC_float *)0xC346AB0)->v) = 0.0f;
    (((struct o10_float *)0xC346AB0)->v) = 0.0f;
    u28 = *(float *)0xC0E3164;
    u31 = (u15 * u14);
    u32 = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 12))));
    u33 = (u31 * (1.0f / t27));
    (((struct o0_float *)0xC346AB0)->v) = (u32 * u28);
    (((struct o4_float *)0xC346AB0)->v) = (u33 * u28);
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u36 = (((struct o4_float *)0xC346AB0)->v);
    u37 = (((struct o18_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u37 * u36);
    u38 = (((struct o0_float *)0xC7FCF68)->v);
    if (u38 > (u37 * u36)) {
        (((struct o8_float *)0xC346AB0)->v) = u38;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u37 * u36);
    }
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (u15 * u14);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u41 = (f5 * f6);
    u42 = (u41 * (1.0f + 1.0f));
    u42 = -u42;
    *(float *)(((int)stk + 72)) = (u42 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f5;
    (((struct o4_float *)0xC7FD63C)->v) = f6;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f5);
    (((struct o18_float *)0xC7FCC8C)->v) = f5;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f5);
    (((struct o1C_float *)0xC7FCC8C)->v) = f6;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (FUN_0c0e3510());
}

int FUN_0c10ca40(void)
{
    int stk[63];
    register int t1;
    int t7;
    register int t12;

    *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x35F;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC816FC4)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x138;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x8D;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x34B;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x2C;
    *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x26C;
    *(unsigned int *)((((int)stk + 0) + 0x18)) = 0x3F;
    *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x5;
    (((struct o74_uint *)(((int)stk + 0)))->v) = 0x136;
    (((struct o78_uint *)(((int)stk + 0)))->v) = 0x15;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC816FC4)->v), (0x2C & t7) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x16A;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x31F;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t12 = (((struct o20_int *)0xC816FC4)->v), (t12 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
    }
    *(unsigned int *)((((int)stk + 0) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 0)))->v) = 0x0;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
        } else {
            (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
        }
    } else {
        if ((((((struct o20_int *)0xC816FC4)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
            } else {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
            } else {
                (((struct o44_uint *)(((int)stk + 0)))->v) = 0x2;
            }
        }
    }
    if (((((struct o0_int *)0xC816FC4)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x3F;
    }
    if ((((((struct o20_int *)0xC816FC4)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x1;
    }
    *(unsigned int *)((((int)stk + 0) + 0x24)) = 0x1F;
    *(unsigned int *)((((int)stk + 0) + 0x28)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x2C)) = 0x1;
    (((struct o48_uint *)(((int)stk + 0)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o60_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o64_uint *)(((int)stk + 0)))->v) = 0xF0;
    (((struct oF8_uint *)(((int)stk + 0)))->v) = 0xAE;
    *(volatile int *)0xC816FE4;
    return ((int (*)(int, int, int, int))(0xC10CBE0))(0x0, 0x1, 0x3F, 0xF0);
}

int FUN_0c1099e0(void)
{
    int stk[8];
    register int t1;
    register int t7;
    register int t8;
    register int t34;
    register int t15;
    register int t16;
    register int t17;
    register int t28;
    register int t47;
    register int t36;
    register int t43;
    register int t50;
    register int t51;
    register int t52;
    register int t70;
    register int t72;
    register int t31;
    register int t14;

    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t1 = (((struct o8_int *)0xC347648)->v);
    if (t1 != 0) {
        for (;;) {
            if ((int)(*(int *)((t1 + 0x10))) > (int)(*(int *)(((int)stk + 4)))) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((t1 + 0x10)));
            }
            t7 = *(int *)(((int)stk + 20));
            t8 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 20)) = (t7 + t8);
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t15 = (t7 + t8);
        t34 = t8;
    }
    t16 = (((struct o0_int *)0xC347648)->v);
    if (t16 != 0) {
        for (;;) {
            t17 = *(short *)((t16 + 0x0));
            t28 = (unsigned short)t17;
            if (((unsigned short)t17 & 0x4) == 0) {
                t15 = (*(int *)((t16 + 0x10)));
                t14 = (*(int *)(((int)stk + 4)));
                if ((int)t15 > (int)t14) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t16 + 0x10)));
                }
                t15 = (*(int *)(((int)stk + 16)));
                t28 = *(int *)((t16 + 0x10));
                t15 = (t15 + t28);
                *(unsigned int *)(((int)stk + 16)) = t15;
            }
            t16 = (*(int *)((t16 + 0x8)));
            if (t16 == 0) {
                break;
            }
        }
        t31 = t14;
        t34 = t28;
    }
    *(unsigned int *)(((int)stk + 0)) = 0xC34765C;
    t36 = (((struct o1C_int *)0xC347648)->v);
    t47 = t34;
    if (t36 != 0) {
        for (;;) {
            if ((int)(*(int *)((t36 + 0x10))) > (int)(*(int *)(((int)stk + 8)))) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((t36 + 0x10)));
            }
            t43 = *(int *)((t36 + 0x10));
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + t43);
            t36 = (*(int *)((t36 + 0x8)));
            if (t36 == 0) {
                break;
            }
        }
        t47 = t43;
    }
    t52 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    if (t52 != 0) {
        t50 = t31;
        t51 = t47;
        for (;;) {
            if (((unsigned short)(*(short *)((t52 + 0x0))) & 0x4) == 0) {
                t51 = (*(int *)((t52 + 0x10)));
                t50 = (*(int *)(((int)stk + 8)));
                if ((int)t51 > (int)t50) {
                    t51 = (*(int *)((t52 + 0x10)));
                    *(unsigned int *)(((int)stk + 8)) = t51;
                }
                t51 = (*(int *)((t52 + 0x10)));
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + t51);
            }
            t52 = (*(int *)((t52 + 0x8)));
            if (t52 == 0) {
                break;
            }
        }
    }
    t70 = (((struct o28_int *)0xC347648)->v);
    if (t70 == 0) {
        return ((int (*)(void))(0xC109BD0))();
    }
    t72 = *(short *)((t70 + 0x0));
    if (((unsigned short)t72 & 0xF000) != 0x1000) {
        if (((unsigned short)t72 & 0xF000) != 0x2000) {
            if (((unsigned short)t72 & 0xF000) != 0x3000) {
                if (((unsigned short)t72 & 0xF000) != 0x4000) {
                    if (((unsigned short)t72 & 0xF000) != 0x5000) {
                        if (((unsigned short)t72 & 0xF000) != 0x6000) {
                            if (((unsigned short)t72 & 0xF000) != 0x7000) {
                                if (((unsigned short)t72 & 0xF000) != 0x8000) {
                                    return ((int (*)(void))(0xC109BA0))();
                                }
                                return ((int (*)(void))(0xC109BA4))();
                            }
                            return ((int (*)(void))(0xC109BA4))();
                        }
                        return ((int (*)(void))(0xC109BA4))();
                    }
                    return ((int (*)(void))(0xC109BA4))();
                }
                return ((int (*)(void))(0xC109BA4))();
            }
            return ((int (*)(void))(0xC109BA4))();
        }
        return ((int (*)(void))(0xC109BA4))();
    }
    return ((int (*)(void))(0xC109BA4))();
}
