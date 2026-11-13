/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c026554(int);
int FUN_0c0555dc(void);
int FUN_0c05ae26(int);
int FUN_0c05bbc8(int);
int FUN_0c05bcde(int);
int FUN_0c05c07a(int);
int FUN_0c05c1c0(int);
int FUN_0c05c220(int);
int FUN_0c05c370(int);
int FUN_0c05c452(int);
int FUN_0c05d970(int);
int FUN_0c05d9d4(int);
int FUN_0c05db2c(int);
int FUN_0c05dd00(int);
int FUN_0c05dea2(int);
int FUN_0c05dfd4(int);
int FUN_0c05ec26(int);
int FUN_0c05ec88(int);
int FUN_0c05ed92(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c07cc52(int);
int FUN_0c07cc8e(int);
int FUN_0c07cd24(int);
int FUN_0c07d1b6(int);
int FUN_0c07d2f4(int);
int FUN_0c097fc4(int);
int FUN_0c098026(int);
int FUN_0c098136(int);
int FUN_0c0c6424(int, int, int, float);
int FUN_0c0d7e5e(void);
int FUN_0c0d7e74(void);
int FUN_0c0e21b0(int, int);
int fx_spawn_random_burst_sprites(int);
int fx_tick_model_effect(int);
int game_reset_objects(void);
int item_draw_marker(int);
int item_tick_held(int);
int item_tick_thrown(int);
float math_rand_float(void);
float math_sin_angle16(int);
int obj_create(int, int, int, int);
int obj_destroy(int);
int obj_set_mode_owner(int, int, int);
int obj_tick_owner_projectile(int);
int omake_menu_main(int, int, int);
int omake_state_reset(void);
int opt_page1_init(void);
extern int opt_page1_main();
int opt_page2_init(void);
extern int opt_page2_main();
int opt_page3_init(void);
extern int opt_page3_main();
int opt_page4_init(void);
int opt_page4_main(int);
int pl_change_state(int, int, int, int);
int pl_falcon_attack_kind13(int, int, int, int);
int pl_falcon_attack_kind24(int, int, int, int);
int pl_falcon_attack_kind57(int);
int pl_falcon_attack_kind68(int);
int pl_step_motion(int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int stage_gimmick_11_spawn_b(int, int);
int thunk_FUN_0c062242(int, int);
int FUN_0c05ba30(int a4, int a5, int a6, int a7);
int FUN_0c0b6c5c(int a4);
float FUN_0c0af644(int a4);
int FUN_0c0d7d1c(int a4, int a5, int a6, int a7);
int FUN_0c0bd930(int a4);
int FUN_0c05dc20(int a4, int a5, int a6, int a7);
int FUN_0c0af9f0(int a4, int a5, int a6, int a7);
int FUN_0c04694c(int a4);
int FUN_0c05d8c4(int a4);
int FUN_0c05c118(int a4);
int FUN_0c05eb84(int a4);
int FUN_0c04ba14(int a4);
int FUN_0c097bb0(int a4, int a5, int a6, int a7);
int FUN_0c0445aa(int a4);
int FUN_0c0b4d54(int a4);
int FUN_0c086350(int a4, int a5, int a6, int a7);
int FUN_0c067d10(int a4, int a5, int a6, int a7);
int FUN_0c07cf5c(int a4, int a5, int a6, int a7);
int FUN_0c041dc8(int a4, int a5, int a6, int a7);
int FUN_0c07d378(int a4, int a5, int a6, int a7);
int FUN_0c0b0314(int a4);

int FUN_0c05ba30(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    int t19;
    register int t50;
    register int t84;
    register int t11;
    register int t12;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x30D))) != 17) {
        item_draw_marker(a4);
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
        if ((int)((((struct oF2_short *)(a4))->v)) < 0) {
            if (((((struct o118_int *)(a4))->v)) != 0) {
                t11 = 0x4;
                t12 = (*(signed char *)((a4 + 0x3)));
            } else {
                t11 = 0x11;
                t12 = (*(signed char *)((a4 + 0x3)));
            }
            obj_set_mode_owner(a4, t11, t12);
        }
        t19 = (((struct oF2_short *)(a4))->v);
        if ((t19 != 60) && ((t19 != 120) && (t19 != 0xB4))) {
        } else {
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x2E);
        }
        if ((int)((((struct oF2_short *)(a4))->v)) < (int)0x3C) {
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0xB))) == 0) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t50 = *(signed char *)((a4 + 0x30C));
    switch (t50) {
    case 7:
        FUN_0c0c6424(a4, 0x2, 0x1, ((float)((((struct oF2_short *)(a4))->v)) / ((((struct o4_float *)0xC05BBE8)->v))));
        break;
    case 8:
        FUN_0c0c6424(a4, 0x1, 0x1, ((float)((((struct oF2_short *)(a4))->v)) / ((((struct o0_float *)0xC05BBE8)->v))));
        break;
    case 9:
        FUN_0c0c6424(a4, 0x0, 0x1, ((float)((((struct oF2_short *)(a4))->v)) / ((((struct o4_float *)0xC05BBE8)->v))));
        break;
    }
    t84 = *(signed char *)((a4 + 0x30D));
    if (t84 != 0) {
        if (t84 != 4) {
            if (t84 != 5) {
                if (t84 != 15) {
                    if (t84 != 16) {
                        if (t84 != 17) {
                            return obj_destroy(a4);
                        }
                        return FUN_0c05c07a(a4);
                    }
                    FUN_0c05ae26(a4);
                    return ((int (*)(int, int, int, int))(0xC05BA04))(a4, a5, a6, a7);
                }
                obj_tick_owner_projectile(a4);
                return ((int (*)(int, int, int, int))(0xC05BA04))(a4, a5, a6, a7);
            }
            item_tick_held(a4);
            return ((int (*)(int, int, int, int))(0xC05BA04))(a4, a5, a6, a7);
        }
        FUN_0c05bcde(a4);
        return ((int (*)(int, int, int, int))(0xC05BA04))(a4, a5, a6, a7);
    }
    FUN_0c05bbc8(a4);
    return ((int (*)(int, int, int, int))(0xC05BA04))(a4, a5, a6, a7);
}

int FUN_0c0b6c5c(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = (((struct oEE_short *)(a4))->v);
    FUN_0c0624c4((((((struct o2E0_int *)(a4))->v)) + 0x9C), 0xC4CFA68, (0x84 + ((int)((int)(((int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u))) >> 1) % (int)0x8))));
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC33C258); }
    }
    FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
    FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return obj_destroy(a4);
        }
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) / 1.00999999f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) / 1.19999993f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o44_float *)(t2))->v) = (((((struct o44_float *)(t2))->v)) / 1.5f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o48_float *)(t2))->v) = (((((struct o48_float *)(t2))->v)) / 1.5f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o4C_float *)(t2))->v) = (((((struct o4C_float *)(t2))->v)) / 1.5f);
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 + 0x1);
        t3 = 0xEC;
        if ((int)(short)(t2 + 0x1) >= (int)0x13) {
            t2 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
            t3 = (t2 + 0x1);
        }
        return t3;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((((((struct oEC_short *)(a4))->v)) == 5) && (t0 = *(signed char *)((a4 + 0x30E)), t0 != 0)) {
        snd_play_side_se(0x2, 0x1F);
    }
    if (((*(signed char *)((a4 + 0x108))) == 0) && (t1 = (((struct oEC_short *)(a4))->v), (int)t1 < (int)0xB4)) {
        return 0xEC;
    }
    (((struct o105_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct o30F_uchar *)(a4))->v) = 0x0;
    return 0x30F;
}

float FUN_0c0af644(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    u1 = -705.0f;
    u1 = u1 + 175.0f * u0;
    (((struct o8_float *)(t0))->v) = u1;
    t0 = (((struct o2E4_int *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    u1 = 1.0f;
    u1 = u1 + 22.0f * u0;
    *(unsigned int *)(((t0 + 0x18) + 0x0)) = ((int)((((u1 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    *(unsigned int *)((((((struct o2E8_int *)(a4))->v)) + 0x10)) = ((int)(((((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o2F0_int *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) << 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    *(unsigned int *)(((t0 + 0x18) + 0x0)) = ((int)((((-(u0 * 1966080.0f)) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o2F4_int *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) << 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    u1 = -235.0f;
    u1 = u1 + 75.0f * u0;
    (((struct o8_float *)(t0))->v) = u1;
    t0 = (((struct o2F8_int *)(a4))->v);
    u0 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) << 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    u1 = (-(u0 * 75.0f));
    (((struct o8_float *)(t0))->v) = (u1 + -235.0f);
    t0 = (((struct o2FC_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x100);
    t0 = (((struct o2FC_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) & 0xFFFF);
    return (u1 + -235.0f);
}

int FUN_0c0d7d1c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t1 = *(signed char *)0xC7F473F;
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                if (t1 != 3) {
                                    if (t1 != 4) {
                                        if (t1 != 5) {
                                            if (t1 != 6) {
                                                return t1;
                                            }
                                            return opt_page4_main(0x1);
                                        }
                                        return opt_page4_main(0x0);
                                    }
                                    return FUN_0c0d7e74();
                                }
                                return FUN_0c0d7e5e();
                            }
                            return ((int (*)(int, int, int, int))(opt_page2_main))(0xC7F4726, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(opt_page3_main))(0xC7F4726, a5, a6);
                    }
                    return ((int (*)(int, int, int, int))(opt_page1_main))(0xC7F4726, a5, a6, a7);
                }
                *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
                game_reset_objects();
                t1 = *(signed char *)0xC7F473F;
                switch (t1) {
                case 0:
                    opt_page1_init();
                    break;
                case 1:
                    opt_page3_init();
                    break;
                case 2:
                    opt_page2_init();
                    break;
                default:
                    if ((t1 == 5) || (t1 == 6)) {
                        opt_page4_init();
                    }
                    break;
                }
                t1 = *(signed char *)0xC7F473F;
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 != 2) {
                            if (t1 != 3) {
                                if (t1 != 4) {
                                    if (t1 != 5) {
                                        if (t1 != 6) {
                                            return t1;
                                        }
                                        return opt_page4_main(0x1);
                                    }
                                    return opt_page4_main(0x0);
                                }
                                return FUN_0c0d7e74();
                            }
                            return FUN_0c0d7e5e();
                        }
                        return ((int (*)(void))(opt_page2_main))();
                    }
                    return ((int (*)(void))(opt_page3_main))();
                }
                return ((int (*)(void))(opt_page1_main))();
            }
            return omake_menu_main(0xC7F4726, a5, a6);
        }
        *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
        return t0;
    }
    *(unsigned char *)0xC7F4726 = ((*(signed char *)0xC7F4726) + 0x1);
    return omake_state_reset();
}

int FUN_0c0bd930(int a4)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t9;
    register int t14;
    register int t16;
    register float t18;
    register float u21;
    register int t33;
    register int t50;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        t8 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t8 - 1);
        if ((short)(t8 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x1;
            t50 = 0x1;
        } else {
            t9 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t9) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t9) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t9) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 4);
            t14 = 0x0;
            if (((((struct o24_float *)(a4))->v)) > ((*(float *)(((int)stk + 8))) + 0.0f)) {
                t14 = 0x1;
            }
            *(unsigned char *)(((0x105 + a4) + 0x2)) = t14;
            *(unsigned char *)(((0x105 + a4) + 0x1)) = t14;
            (((struct o105_uchar *)(a4))->v) = t14;
            t16 = FUN_0c026554(a4);
            t50 = (signed char)t16;
            if ((signed char)t16 != 0) {
                fx_spawn_random_burst_sprites(a4);
                t18 = math_rand_float();
                u21 = (t18 * 255.0f);
                if (!(2.14748365e+09f > (t18 * 255.0f))) {
                    u21 = (((t18 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                if (((int)((unsigned int)(int)u21 % (unsigned int)0x2)) == 0) {
                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x32);
                }
                t33 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t33 + 0x1);
                t50 = (t33 + 0x1);
            }
        }
    } else {
        t50 = (obj_destroy(a4));
    }
    return t50;
}

int FUN_0c05dc20(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 != 5) && (t0 != 13)) {
    } else {
        item_draw_marker(a4);
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 == 16) || (t0 == 0)) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 != 13) {
                    if (t0 == 16) {
                        return FUN_0c05ae26(a4);
                    }
                    return obj_destroy(a4);
                }
                return FUN_0c05dfd4(a4);
            }
            return FUN_0c05dea2(a4);
        }
        return item_tick_thrown(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC05DD38))(a4, a5, a6, a7);
    }
    return FUN_0c05dd00(a4);
}

int FUN_0c0af9f0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = obj_create(0x2, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AFB68;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A2A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A298); }
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, 0x2F);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), 0xC664958, 0x27);
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x211;
        (((struct o44_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 1.0f;
        return ((int (*)(int, int, int, int, float))(0xC0AFF3C))(t0, a5, a6, a7, 1.0f);
    }
    return t0;
}

int FUN_0c04694c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x9));
    if ((t2 != 0) && (t2 != 2)) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return obj_destroy(a4);
    }
    if ((*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x9))) != 2) {
        t3 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
        if ((t3 != 10) && ((t3 != 11) && ((t3 != 12) && ((t3 != 22) && (t3 != 21))))) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            return obj_destroy(a4);
        }
        t4 = *(signed char *)((a4 + 0x3));
        t5 = 0xC7E40C4;
        t6 = (0xC7E40C4 + (unsigned short)((unsigned short)t4 * (unsigned short)0x72D0));
        if ((((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t4 * (unsigned short)0x72D0))))->v))) && (t0 = (((struct oEE_short *)(a4))->v), (int)t0 > (int)0x8)) {
            (((struct oEE_ushort *)(a4))->v) = 0x8;
            t0 = *(signed char *)((a4 + 0x3));
            (((struct oF0_ushort *)(a4))->v) = ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v));
            t5 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
            t6 = 0x8;
        }
        return fx_tick_model_effect(a4);
    }
    t0 = *(signed char *)((a4 + 0x3));
    t3 = 0xC7E40C4;
    t4 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
    if ((((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v))) && (t1 = (((struct oEE_short *)(a4))->v), (int)t1 > (int)0x8)) {
        (((struct oEE_ushort *)(a4))->v) = 0x8;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct oF0_ushort *)(a4))->v) = ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v));
        t3 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
        t4 = 0x8;
    }
    return fx_tick_model_effect(a4);
}

int FUN_0c05d8c4(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x30D))) == 5) {
        item_draw_marker(a4);
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 == 16) || (t0 == 0)) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 == 16) {
                    return FUN_0c05ae26(a4);
                }
                return obj_destroy(a4);
            }
            return FUN_0c05db2c(a4);
        }
        return item_tick_thrown(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c05d9d4(a4);
    }
    return FUN_0c05d970(a4);
}

int FUN_0c05c118(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x30D))) != 14) {
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 == 16) || (t0 == 0)) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 != 14) {
                    if (t0 == 16) {
                        return FUN_0c05ae26(a4);
                    }
                    return obj_destroy(a4);
                }
                return FUN_0c05c452(a4);
            }
            return FUN_0c05c370(a4);
        }
        return item_tick_thrown(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c05c220(a4);
    }
    return FUN_0c05c1c0(a4);
}

int FUN_0c05eb84(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x30D))) == 5) {
        item_draw_marker(a4);
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if ((t0 == 16) || (t0 == 0)) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 16) {
            if (t0 != 21) {
                return obj_destroy(a4);
            }
            return FUN_0c05ed92(a4);
        }
        return FUN_0c05ae26(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c05ec88(a4);
    }
    return FUN_0c05ec26(a4);
}

int FUN_0c04ba14(int a4)
{
    register float u2;
    register int t3;
    register int t4;
    register int t5;
    register int t20;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        u2 = *(float *)0xC04BB3C;
        t3 = 0x0;
        t4 = (0x2E0 + a4);
        for (;;) {
            t5 = *(int *)((t4 + 0x0));
            t4 = (t4 + 0x4);
            (((struct o4_float *)(t5))->v) = (((((struct o4_float *)(t5))->v)) + ((((struct o28_float *)(t5))->v)));
            (((struct o8_float *)(t5))->v) = (((((struct o8_float *)(t5))->v)) + ((((struct o2C_float *)(t5))->v)));
            (((struct oC_float *)(t5))->v) = (((((struct oC_float *)(t5))->v)) + ((((struct o30_float *)(t5))->v)));
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x10) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t3 = (t3 + 0x1);
            t20 = 0xEC;
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x8) {
                (((struct o44_float *)(t5))->v) = (((((struct o44_float *)(t5))->v)) - u2);
                (((struct o48_float *)(t5))->v) = (((((struct o48_float *)(t5))->v)) - u2);
                (((struct o4C_float *)(t5))->v) = (((((struct o4C_float *)(t5))->v)) - u2);
                t20 = 0x4C;
            }
            if ((int)t3 >= (int)0x8) {
                break;
            }
        }
        return t20;
    }
    return obj_destroy(a4);
}

int FUN_0c097bb0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t8;
    register int t10;

    pl_step_motion(a4);
    t1 = FUN_0c097fc4(a4);
    if ((signed char)t1 != 0) {
        pl_change_state(a4, 0xB, 0x0, 0x0);
        (((struct o7206_uchar *)(a4))->v) = 0x0;
        return 0x7206;
    }
    t3 = FUN_0c098026(a4);
    if ((signed char)t3 != 0) {
        pl_change_state(a4, 0xB, 0x0, 0x0);
        (((struct o7206_uchar *)(a4))->v) = 0x1;
        return 0x7206;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        pl_change_state(a4, 0x2, 0x0, 0x0);
        return ((int (*)(int, int, int, int))(0xC097EB0))(a4, a5, a6, a7);
    }
    t8 = FUN_0c098136(a4);
    t10 = (signed char)t8;
    if ((signed char)t8 != 0) {
        t10 = (pl_change_state(a4, 0x21, 0x0, 0x0));
    }
    return t10;
}

int FUN_0c0445aa(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return obj_destroy(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct o5C_float *)(a4))->v) = ((float)t0 / 12.0f);
        (((struct o68_float *)(a4))->v) = ((float)t0 / 12.0f);
        (((struct o64_float *)(a4))->v) = ((float)t0 / 12.0f);
        t1 = 0x60;
        u0 = ((float)t0 / 12.0f);
    } else {
        t1 = 0x5C;
        u0 = ((float)((((struct oEC_short *)(a4))->v)) / 31.0f);
    }
    *(float *)((a4 + t1)) = u0;
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t0 = 0xEC;
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0b4d54(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x168) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = ((int)(((((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    *(unsigned int *)((((((struct o2E4_int *)(a4))->v)) + 0x14)) = ((int)(((((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    return 0xEC;
}

int FUN_0c086350(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return ((int (*)(int, int, int, int))(0xC0862B4))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0862A8))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC086284))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC086070))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC085FD2))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC085E8A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC085DF8))(a4, a5, a6, a7);
}

int FUN_0c067d10(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x7223));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return pl_falcon_attack_kind68(a4);
                            }
                            return pl_falcon_attack_kind57(a4);
                        }
                        return pl_falcon_attack_kind68(a4);
                    }
                    return pl_falcon_attack_kind57(a4);
                }
                return pl_falcon_attack_kind24(a4, a5, a6, a7);
            }
            return pl_falcon_attack_kind13(a4, a5, a6, a7);
        }
        return pl_falcon_attack_kind24(a4, a5, a6, a7);
    }
    return pl_falcon_attack_kind13(a4, a5, a6, a7);
}

int FUN_0c07cf5c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c07cd24(a4);
                }
                return FUN_0c07cc8e(a4);
            }
            return FUN_0c07cc52(a4);
        }
        return ((int (*)(int, int, int, int))(0xC07CEB2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07CDF8))(a4, a5, a6, a7);
}

int FUN_0c041dc8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC041D14))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC041C3A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC041BC0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC041B3A))(a4, a5, a6, a7);
}

int FUN_0c07d378(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c07d2f4(a4);
            }
            return FUN_0c07d1b6(a4);
        }
        return ((int (*)(int, int, int, int))(0xC07D0C0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07CF8E))(a4, a5, a6, a7);
}

int FUN_0c0b0314(int a4)
{
    stage_gimmick_11_spawn_b(a4, 0x0);
    return stage_gimmick_11_spawn_b(a4, 0x1);
}
