/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o316_uchar { char p[0x316]; unsigned char v; };
struct o317_uchar { char p[0x317]; unsigned char v; };
struct o318_uchar { char p[0x318]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ADXB_GetDecDtLen(int);
int ADXB_GetDecNumSmpl(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Reset(int);
int ADXPD_GetStat(int);
int FUN_0c0158e4(void);
int fx_spawn_041820(int);
int fx_spawn_0488b8(int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int);
int FUN_0c0555dc(void);
int FUN_0c05566a(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
int pl_ryoma_attack_kind68_phase1(int);
int pl_ryoma_attack_kind68_phase2(int);
int pl_ryoma_wait_anim_end_b(int);
int pl_wangtang_mode07_phase1(int);
int pl_wangtang_mode07_phase2(int);
int pl_state36_phase0(int);
int pl_state36_phase1(int);
int pl_is_airborne(int);
int pl_try_start_move(int);
int pl_button_jump_pressed(int);
extern int FUN_0c09ff0c();
int obj_set_record_char(int, int);
int pl_check_dual_button_input(int);
int pl_change_state(int, int, int, int);
int snd_play_stage_obj_se(int, int, int);
int FUN_0c0a43b8(int);
int fx_spawn_burst_sprites(int, int, int, int, int);
int stage_spawn_type01(int);
int stage_spawn_type02(int);
int FUN_0c0d5292(void);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fdc(void);
int FUN_0c0e6fe8(int);
int FUN_0c0fcbc0(int, int, int, int);
int FUN_0c1094a0(int, int);
int FUN_0c109584(int, int);
int FUN_0c109800(int);
int FUN_0c10e146(int);
int FUN_0c1126ba(int, int);
int FUN_0c1128ee(int, int, int);
int FUN_0c114342(int);
int FUN_0c115270(int, int);
int SJ_SplitChunk(int, int, int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int thunk_FUN_0c062242(int);
int fx_spawn_31(int a4);
int fx_spawn_0492a4(int a4);
int pl_state36_update(int a4, int a5, int a6, int a7);
int fx_spawn_033670(int a4);
int fx_spawn_034884(int a4);
int fx_tick_0387ec(int a4);
int stage_gimmick_27_update(int a4);
int fx_spawn_state11_aura(int a4);
int FUN_0c0c9834(int a4, int a5);
int FUN_0c05bcde(int a4, int a5, int a6, int a7);
int FUN_0c106120(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind68(int a4, int a5, int a6, int a7);
int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0fc4b2(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0fa540(int a4, int a5, int a6, int a7, int a8, int a9);
int pl_wangtang_mode07_update(int a4, int a5, int a6, int a7);
int obj_can_interact(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int FUN_0c0a4604(void);

int FUN_0c106120(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t12;
    register int t15;
    register int t18;
    register int t20;
    register int t27;
    register int t32;
    register int t44;
    register int t17;
    register int t39;
    register int t40;
    int t41;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((int)stk + 0)) = (ADXB_GetTotalNumSmpl(t0));
    t3 = ADXB_GetDecDtLen(t0);
    t4 = ADXB_GetDecNumSmpl(t0);
    t5 = *(int *)((a4 + 0x34));
    t6 = *(int *)(((int)stk + 0));
    t7 = (t6 - t5);
    if ((int)t4 < (int)(t6 - t5)) {
        t7 = t4;
    }
    SJ_SplitChunk((a4 + 0x14), t3, (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x8));
    t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 0) + 0x10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    *(unsigned int *)(((int)stk + 4)) = (t7 << 1);
    t18 = 0x0;
    for (;;) {
        t20 = FUN_0c114342((*(int *)((a4 + 0x4))));
        if ((int)t18 >= (int)t20) {
            break;
        }
        SJ_SplitChunk((((t18 << 2) << 1) + (a4 + 0x1C)), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x8));
        t17 = t18;
        t17 = (t17 << 2);
        *(unsigned int *)(((int)stk + 0)) = t17;
        t17 = (t17 + (a4 + 0xC));
        t17 = (*(int *)((t17 + 0x0)));
        t27 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x20)))))(t17, 0x1, (((int)stk + 0) + 0x10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t17 = a4;
        t17 = (t17 + 0xC);
        t17 = (t17 + (*(int *)(((int)stk + 0))));
        t17 = (*(int *)((t17 + 0x0)));
        t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x1C)))))(t17, 0x0, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t7);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + t7);
    (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + t7);
    (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + t3);
    if (((int)(*(int *)((a4 + 0x3C))) >= 0) && ((t39 = *(int *)((a4 + 0x3C)), t40 = (((struct o40_int *)(a4))->v), (int)t40 >= (int)t39) && (t41 = (((struct o48_int *)(a4))->v), t41 != 0))) {
        t44 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)(a4))->v))))(((((struct o4C_int *)(a4))->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    }
    return (ADXB_Reset(t0));
}

int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];
    register int t2;
    register int t16;
    register int t62;
    int t63;
    register int t64;
    register int t101;
    register int t102;
    register int t103;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c1126ba(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 0));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)((((struct o10D8_int *)((*(int *)0xC843924)))->v))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    t101 = 0x1;
    t102 = (unsigned char)t2;
    t103 = 0xFF;
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0xC843924, t64 = (((struct o10C4_int *)(t63))->v), t64 == 1))) {
        t101 = *(int *)((a8 + 0x0));
        if ((t101 != -1) && (t101 != 0xFFFFFF00)) {
            FUN_0c115270(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        } else {
            t102 = (unsigned char)t2;
            t103 = 0xFF;
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        FUN_0c1128ee(a6, a7, a8);
    } else {
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    } else {
    }
    return ((int (*)(int, int, int, int))(0xC1128E6))(t101, t102, t103, a7);
}

int FUN_0c0fc4b2(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c0fcbc0(a4, a6, a7, a8);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x4;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        } else {
            if ((int)a5 > (int)0x1) {
                if ((int)0x1 < (int)a5) {
                    t2 = (a4 + 0x28);
                    t3 = 0x1;
                    for (;;) {
                        t3 = (t3 + 0x1);
                        *(unsigned int *)((t2 + 0x0)) = (*(int *)((a4 + 0x0)));
                        *(unsigned int *)((t2 + 0x4)) = (*(int *)((a4 + 0x4)));
                        *(unsigned int *)((t2 + 0x8)) = (*(int *)((a4 + 0x8)));
                        *(unsigned int *)((t2 + 0xC)) = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)((t2 + 0x10)) = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)((t2 + 0x14)) = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)((t2 + 0x18)) = (*(int *)((a4 + 0x18)));
                        t2 = (t2 + 0x28);
                        if ((int)t3 >= (int)a5) {
                            break;
                        }
                    }
                }
            }
            t2 = FUN_0c1094a0(((*(int *)((a4 + 0x14))) * a5), a4);
            if (t2 == 3) {
                FUN_0c10e146(0x3);
                t3 = t2;
            } else {
                t4 = *(int *)((a4 + 0x1C));
                FUN_0c109800(t4);
                t5 = t2;
                if ((int)a5 > 0) {
                    t2 = t4;
                    t4 = 0x0;
                    for (;;) {
                        *(unsigned int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x1C)) = t2;
                        t6 = FUN_0c109584((*(int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x14))), (((((t4 << 2) + t4) << 2) << 1) + a4));
                        t2 = (t2 + (((unsigned int)(*(int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x14))) >> 2) << 2));
                        if (t6 == 3) {
                            break;
                        }
                        t4 = (t4 + 0x1);
                        if ((int)t4 >= (int)a5) {
                            return t6;
                        }
                    }
                    if ((int)t4 > 0) {
                        t2 = 0x0;
                        for (;;) {
                            FUN_0c109800((*(int *)(((a4 + ((((t4 << 2) + t4) << 2) << 1)) + 0x1C))));
                            t2 = (t2 + 0x1);
                            if ((int)t2 >= (int)t4) {
                                break;
                            }
                        }
                    }
                    FUN_0c10e146(0x3);
                    t5 = t6;
                }
                t3 = t5;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0fa540(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t4;
    register int t17;
    register int t19;
    register int t46;
    register int t47;
    int t48;
    register int t49;
    register int t50;
    register int t30;
    register int t33;
    register int t36;
    register int t39;
    register int t42;
    register int t57;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC15AA60)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((struct o4_int *)0xC15AA60)->v));
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC15AA60)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = ((((struct oC_int *)0xC15AA60)->v));
    t4 = *(int *)0xC817028;
    t33 = 0x0;
    if (a5 != 0) {
        t33 = 0x1;
    }
    t39 = 0x0;
    if (a7 != 0) {
        t39 = 0x1;
    }
    t42 = 0x0;
    if (a8 != 0) {
        t42 = 0x2;
    }
    if (a9 == 1) {
        t30 = 0x0;
        if (a4 != 0) {
            t30 = 0x2;
        }
        t36 = 0x0;
        if (a6 != 0) {
            t36 = 0x2;
        }
    } else {
        t19 = 0x0;
        if (a4 != 0) {
            t19 = 0x3;
        }
        t17 = 0x0;
        if (a6 != 0) {
            t17 = 0x3;
        }
        t30 = t19;
        t36 = t17;
        if ((a4 != 0) && (a6 != 0)) {
            t36 = 0x2;
            if ((unsigned int)a4 < (unsigned int)a6) {
                t19 = 0x2;
                t36 = t17;
            }
            t30 = t19;
        }
    }
    t46 = t39;
    t47 = t33;
    t48 = t42;
    t49 = t30;
    t50 = t36;
    if ((*(int *)0xC8172FC) == 1) {
        if ((*(int *)0xC8173D8) == 32) {
            t30 = 0x3;
        }
        if ((*(int *)0xC8173D8) == 33) {
            t33 = 0x2;
        }
        if ((*(int *)0xC8173D8) == 34) {
            t36 = 0x3;
        }
        if ((*(int *)0xC8173D8) == 35) {
            t39 = 0x2;
        }
        if ((*(int *)0xC8173D8) == 36) {
            t42 = 0x3;
        }
        t46 = t39;
        t47 = t33;
        t48 = t42;
        t49 = t30;
        t50 = t36;
    }
    if (((*(int *)0xC816FC8) & 32) != 0) {
        t57 = 0x0;
        if ((t47 != 0) && ((t50 != 0) && (t48 != 0))) {
            t57 = 0x1;
        }
        *(unsigned int *)0xC81741C = t57;
    }
    return ((unsigned char)t4 | ((((((((t49 << 16) << 1) & 0x60000) | ((((t47 << 16) << 2) << 1) & 0x180000)) | ((t50 << 21) & 0x600000)) | ((t46 << 23) & 0x1800000)) | ((((t48 << 16) << 8) << 1) & 0x6000000)) | 0x10000));
}

int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = (((struct o50_int *)(a4))->v);
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x20));
            t3 = *(int *)(((a4 + 0x50) + 0x18));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t3 - t2);
            if ((int)(t3 - t2) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x20));
                t6 = *(int *)(((a4 + 0x50) + 0x1C));
                if ((int)t3 > 0) {
                    t7 = 0x0;
                    t8 = 0x0;
                    t9 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t4 << 1) + t2) + t8) + 0x0)) = (((unsigned char)(*(signed char *)((((t7 + 0x2) + t0) + 0x0))) << 8) | (unsigned char)(*(signed char *)((t7 + t0))));
                        t10 = *(signed char *)((((t7 + 0x3) + t0) + 0x0));
                        t9 = (t9 + 0x1);
                        t11 = *(signed char *)((((t7 + 0x1) + t0) + 0x0));
                        t7 = (t7 + 0x4);
                        *(unsigned short *)(((((t6 + t5) << 1) + t2) + t8)) = (((unsigned char)t10 << 8) | (unsigned char)t11);
                        t8 = (t8 + 0x2);
                        if ((int)t9 >= (int)t3) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t3 > 0) {
                    t5 = 0x0;
                    t6 = (0x0 + ((t4 << 1) + t2));
                    t7 = 0x0;
                    for (;;) {
                        t7 = (t7 + 0x1);
                        *(unsigned short *)((t6 + 0x0)) = (((unsigned char)(*(signed char *)((((t5 + 0x1) + t0) + 0x0))) << 8) | (unsigned char)(*(signed char *)((t0 + t5))));
                        t5 = (t5 + 0x2);
                        t6 = (t6 + 0x2);
                        if ((int)t7 >= (int)t3) {
                            break;
                        }
                    }
                }
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = ((t3 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = ((t4 << 1) + t2);
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}

