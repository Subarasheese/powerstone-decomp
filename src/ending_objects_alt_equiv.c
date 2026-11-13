/* ending sequence: scripted objects, update table, spawners, ending state/script (0c0128a0-0c0158d8) */

/* named globals (symbols.txt) */
extern char g_ending_character[];
extern char g_game_substate[];
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ending_obj_run_script(int, int);
int obj_apply_accel(int);
int obj_apply_velocity(int);
int obj_child_color_a_step(int);
int obj_apply_scale_rate(int);
int obj_child_color_b_step(int);
int obj_destroy(int, int, int, int);
int FUN_0c0e6e5c(int);
struct o0_uchar { unsigned char v; };
struct o13_float { char p[0x13]; float v; };
struct o13_ushort { char p[0x13]; unsigned short v; };
struct o15_ushort { char p[0x15]; unsigned short v; };
struct o17_ushort { char p[0x17]; unsigned short v; };
struct o19_ushort { char p[0x19]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o7_float { char p[0x7]; float v; };
struct oB_float { char p[0xB]; float v; };
struct oF_float { char p[0xF]; float v; };
int ending_spawn_obj_t02(int);
int ending_spawn_obj_t03(int);
int ending_spawn_obj_t04(int);
int ending_spawn_obj_t06(int);
int ending_spawn_obj_t08(void);
int ending_spawn_obj_t0a(int);
int ending_spawn_obj_t0b(int);
int ending_spawn_obj_t0e(int);
int game_reset_objects(void);
int bgm_play_by_index(int);
int FUN_0c0a3eec(int);
int FUN_0c0a3fa4(int, int);

int ending_obj_update_t00(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C012B08;
    if ((v0_1 == 1)) goto L_C012B20;
    return obj_destroy(v0_0, R5, a6, a7);
    L_C012B20:;
    R5 = (0xC7F3036);
    if (((*(short *)0xC7F3040) != 0)) goto L_C012B2E;
    if (!(((*(short *)((R5 + 0xC))) == 0))) goto L_C012B2E;
    if (((*(signed char *)((v0_0 + 0xC))) != 0)) goto L_C012B70;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) - ((((struct oC_float *)0xC361C60)->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - ((((struct o10_float *)0xC361C60)->v)));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o4_float *)0xC361C60)->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o8_float *)0xC361C60)->v)));
    goto L_C012B70;
    L_C012B2E:;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    *(unsigned char *)((v0_0 + 0xF)) = v0_2;
    v0_1 = (v0_2);
    L_C012D38:;
    return v0_1;
    L_C012B70:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012B7E;
    if ((v0_1 == 1)) goto L_C012BAC;
    L_C012BAC:;
    v0_2 = *(signed char *)((v0_0 + 0xF));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012BDA;
    if ((v0_1 == 1)) goto L_C012BE4;
    if ((v0_1 == 2)) goto L_C012BEE;
    if ((v0_1 == 3)) goto L_C012C04;
    if ((v0_1 == 4)) goto L_C012C14;
    if ((v0_1 == 5)) goto L_C012C24;
    if ((v0_1 == 6)) goto L_C012C6A;
    if ((v0_1 == 7)) goto L_C012C86;
    if ((v0_1 != 99)) goto L_C012BD6;
    obj_apply_scale_rate(v0_0);
    obj_apply_accel(v0_0);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) - 910);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) & 0xFFFF);
    L_C012D0C:;
    if (((*(signed char *)((v0_0 + 0xF))) != 3)) goto L_C012D1C;
    if ((((((struct o0_float *)0xC361C60)->v)) == 1.0f)) goto L_C012D24;
    L_C012D1C:;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o0_float *)0xC361C60)->v));
    L_C012D24:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_1 = (0xEC);
    goto L_C012D38;
    L_C012BD6:;
    goto L_C012D0C;
    L_C012C86:;
    obj_apply_velocity(v0_0);
    obj_apply_accel(v0_0);
    v0_4 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (0x20);
    v0_3 = (0xC116468);
    v0_2 = (v0_4);
    R5 = (((v0_4 << 2) << 1));
    L_C012CA0:;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) + (*(float *)(((R5 + v0_3) + 0x0))));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o4_float *)((R5 + v0_3)))->v)));
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    *(volatile signed char *)((v0_0 + 0xB));
    v0_1 = ((FUN_0c0e6e5c(v0_2)));
    L_C012CC8:;
    *(unsigned char *)((v0_0 + 0xB)) = v0_1;
    goto L_C012D0C;
    L_C012C6A:;
    obj_apply_velocity(v0_0);
    obj_apply_accel(v0_0);
    v0_4 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (0x20);
    v0_3 = (0xC116348);
    v0_2 = (v0_4);
    R5 = (((v0_4 << 2) << 1));
    goto L_C012CA0;
    L_C012C24:;
    obj_apply_velocity(v0_0);
    obj_apply_accel(v0_0);
    v0_1 = *(signed char *)((v0_0 + 0xB));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + (*(float *)(((((v0_1 << 2) << 1) + 0xC1162B8) + 0x0))));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o4_float *)((((v0_1 << 2) << 1) + 0xC1162B8)))->v)));
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    *(volatile signed char *)((v0_0 + 0xB));
    v0_1 = ((FUN_0c0e6e5c(v0_1)));
    goto L_C012CC8;
    L_C012C14:;
    obj_child_color_a_step(v0_0);
    L_C012C1A:;
    obj_apply_accel(v0_0);
    goto L_C012D0C;
    L_C012C04:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    goto L_C012C1A;
    L_C012BEE:;
    obj_apply_velocity(v0_0);
    obj_apply_accel(v0_0);
    obj_child_color_b_step(v0_0);
    goto L_C012D0C;
    L_C012BE4:;
    obj_apply_scale_rate(v0_0);
    goto L_C012C1A;
    L_C012BDA:;
    obj_apply_velocity(v0_0);
    goto L_C012C1A;
    L_C012B7E:;
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    v0_1 = (0xEE);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C012BA8;
    ending_obj_run_script(v0_0, R5);
    goto L_C012BAC;
    L_C012BA8:;
    *(unsigned short *)((v0_0 + v0_1)) = (v0_3 - 1);
    goto L_C012BAC;
    L_C012B08:;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = v0_2;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0xD)) = v0_2;
    *(unsigned char *)((v0_0 + 0xC)) = v0_2;
    *(unsigned char *)((v0_0 + 0xB)) = v0_2;
    goto L_C012B20;
}

int ending_exec_command(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t0 == 1) {
        (((struct o17_ushort *)g_game_substate)->v) = 0x0;
        if ((*(signed char *)0xC7F2F08) == 0) {
            t1 = *(signed char *)((a4 + 0x5));
            return ((int (*)(int, int, int, int))(0xC014FA4))(0x1, 0xC7F3046, t1, 0x0);
        }
        t1 = *(signed char *)g_ending_character;
        *(volatile signed char *)((t1 + 0xC17AFB4));
        *(volatile signed char *)((a4 + 0x5));
        return ((int (*)(int, int, int, int))(0xC014FA0))(0x1, 0xC7F3046, t1, 0x0);
    }
    if ((unsigned char)t0 == 2) {
        ending_spawn_obj_t02(0x0);
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 3) {
        ending_spawn_obj_t03((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 4) {
        ending_spawn_obj_t04(0x0);
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 6) {
        ending_spawn_obj_t06((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 10) {
        ending_spawn_obj_t0a((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 == 11) {
        ending_spawn_obj_t0b((*(signed char *)((a4 + 0x4))));
        return ((int (*)(void))(0xC014FC4))();
    }
    if ((unsigned char)t0 != 0xF0) {
        if ((unsigned char)t0 != 0xF1) {
            if ((unsigned char)t0 != 0xF2) {
                if ((unsigned char)t0 != 0xF5) {
                    if ((unsigned char)t0 != 0xF6) {
                        if ((unsigned char)t0 != 0xF7) {
                            if ((unsigned char)t0 != 0xF8) {
                                if ((unsigned char)t0 != 0xF9) {
                                    if ((unsigned char)t0 == 0xFB) {
                                        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                    }
                                    if ((unsigned char)t0 != 0xFC) {
                                        if ((unsigned char)t0 != 0xFD) {
                                            if ((unsigned char)t0 == 0xFE) {
                                                return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                            }
                                            if ((unsigned char)t0 != 0xFF) {
                                                return ((int (*)(int, int, int, int))(0xC014FB2))(0x1, 0xC7F3046, 0x0, a7);
                                            }
                                            (((struct o2_uchar *)g_game_substate)->v) = ((*(signed char *)0xC7F302F) + 0x1);
                                            return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                        }
                                        (((struct o19_ushort *)g_game_substate)->v) = 0x0;
                                        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                    }
                                    (((struct o19_ushort *)g_game_substate)->v) = 0x1;
                                    return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                }
                                (((struct o0_uchar *)g_game_substate)->v) = (*(signed char *)((a4 + 0x4)));
                                if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 6) {
                                    ending_spawn_obj_t08();
                                    return ((int (*)(void))(0xC014FC4))();
                                }
                                if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 4) {
                                    if ((*(signed char *)0xC7F301E) == 0) {
                                        ending_spawn_obj_t03((*(signed char *)((a4 + 0x4))));
                                        return ((int (*)(void))(0xC014FC4))();
                                    }
                                    return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
                                }
                                ending_spawn_obj_t03((*(signed char *)((a4 + 0x4))));
                                return ((int (*)(void))(0xC014FC4))();
                            }
                            ending_spawn_obj_t0e((*(signed char *)((a4 + 0x4))));
                            return ((int (*)(void))(0xC014FC4))();
                        }
                        FUN_0c0a3fa4((*(signed char *)g_ending_character), (*(signed char *)((a4 + 0x4))));
                        return ((int (*)(void))(0xC014FC4))();
                    }
                    FUN_0c0a3eec((*(signed char *)((a4 + 0x4))));
                    return ((int (*)(void))(0xC014FC4))();
                }
                (((struct o0_uchar *)0xC361C5D)->v) = (*(signed char *)((a4 + 0x4)));
                bgm_play_by_index((*(signed char *)0xC361C5D));
                return ((int (*)(void))(0xC014FC4))();
            }
            (((struct o13_ushort *)g_game_substate)->v) = 0x1;
            return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
        }
        (((struct o15_ushort *)g_game_substate)->v) = 0x1;
        return ((int (*)(int, int, int, int))(0xC014FC4))(0x1, 0xC7F3046, 0x0, a7);
    }
    game_reset_objects();
    (((struct o13_float *)0xC361C5D)->v) = 0.0f;
    (((struct oF_float *)0xC361C5D)->v) = 0.0f;
    (((struct oB_float *)0xC361C5D)->v) = 0.0f;
    (((struct o7_float *)0xC361C5D)->v) = 0.0f;
    return ((int (*)(void))(0xC014FC4))();
}
