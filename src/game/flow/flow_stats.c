/* play-time/max-combo stats and mode handlers (0c053680-0c054114) */

/* named globals (symbols.txt) */
int FUN_0c053dcc(void);
int FUN_0c053910(void);
extern char g_game_substate[];
extern char g_select_ready_mask[];
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o42_uchar { char p[0x42]; unsigned char v; };
int FUN_0c0555b6(void);
int FUN_0c055686(int, ...);
int fx_spawn_0567c4(void);
int FUN_0c059b04(void);
int _modls(int);
struct o0_uchar { unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct oF8_int { char p[0xF8]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o58_short { char p[0x58]; short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
void FUN_0c0a3f30(int);
void fx_spawn_056340(void);
void fx_spawn_056b2c(void);
void fx_spawn_0565b4(void);
void snd_play_side_se(int, int);
void cam_reset_shake(int, int, int, int);
void pl_change_state(char *, int, int);
extern int cam_force_mode(int, int, int);
extern int snd_play_char_voice(int, int);
typedef struct {
    char pad0;
    char byte1;
    char byte2;
    char pad3[7];
    short timer;
    char pad12[27];
    unsigned char flags;
    char pad40[36];
    char byte76;
} Rec;

int game_tick_play_time(void);
int FUN_0c053720(int a4);
int game_update_max_combo(void);
int FUN_0c053910(void);

int game_tick_play_time(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t2 = *(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x0));
        t3 = *(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2));
        t4 = *(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0));
        t1 = *(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x2));
        t6 = (t3 + t1);
        if ((int)((*(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4))) + (*(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x4)))) >= (int)0x3C) {
            t6 = ((t3 + t1) + 0x1);
        }
        t3 = (t4 + t2);
        if ((int)t6 >= (int)0x3C) {
            t3 = ((t4 + t2) + 0x1);
        }
        if ((int)t3 < (int)0x3C) {
            t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C));
            *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = (t2 + 0x1);
            t3 = (short)(t2 + 0x1);
            if ((short)(t2 + 0x1) == 60) {
                *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = 0x0;
                t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A));
                *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = (t2 + 0x1);
                t4 = (short)(t2 + 0x1);
                if ((short)(t2 + 0x1) == 60) {
                    *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = 0x0;
                    t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18));
                    *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18)) = (t2 + 0x1);
                    t4 = (t2 + 0x1);
                }
                t3 = t4;
            }
            t1 = t3;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c053720(int a4)
{
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0xA))));
    if ((int)(*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16))) >= (int)0x3C) {
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16))) - 60);
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) + 0x1);
    }
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x8))));
    if ((int)(*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) >= (int)0x3C) {
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) - 60);
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12))) + 0x1);
    }
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6))));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18)) = 0x0;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = 0x0;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = 0x0;
    return 0x0;
}

int game_update_max_combo(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x46));
        t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x720E));
        t3 = ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0);
        t4 = ((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4);
        t0 = (t0 + 0x1);
        t7 = 0x720E;
        if ((int)t1 < (int)t2) {
            (((struct o46_uchar *)(t3))->v) = (*(signed char *)((t4 + 0x720E)));
            t7 = 0x46;
        }
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t7;
}

int FUN_0c0537fe(void)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = R13;
    *(int *)((int)stk + 4) = v0_0;
    v0_2 = (*(signed char *)0xC7F2F03) == 0;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    R13 = (0xC7F2EE0);
    v0_0 = (0xC7F302C);
    v0_1 = (0x1);
    if (v0_2) goto L_C053840;
    (((struct o2_ushort *)0xC7EB298)->v) = 0xF0;
    (((struct o4_ushort *)0xC7EB298)->v) = 0xF0;
    (((struct o0_ushort *)0xC7EB298)->v) = 0xF0;
    (((struct o2_ushort *)0xC7F2568)->v) = 0xF0;
    (((struct o4_ushort *)0xC7F2568)->v) = 0xF0;
    (((struct o0_ushort *)0xC7F2568)->v) = 0xF0;
    v0_3 = (int)(*(signed char *)(((v0_0 + 0x21) + 0x0))) > 0;
    v0_2 = ((v0_0 + 0x21));
    if (v0_3) goto L_C053852;
    *(unsigned char *)((v0_2 + 0x0)) = v0_1;
    L_C053840:;
    v0_3 = (int)(*(signed char *)(((v0_0 + 0x21) + 0x0))) > 0;
    v0_2 = ((v0_0 + 0x21));
    if (v0_3) goto L_C053852;
    v0_2 = (int)(*(signed char *)((v0_2 + 0x1))) <= (int)0x1;
    if (v0_2) goto L_C053864;
    L_C053852:;
    v0_3 = (int)((((struct o0_short *)0xC7EB298)->v)) < 0;
    v0_2 = (0x71D4);
    if (v0_3) goto L_C053864;
    v0_2 = (int)(*(short *)((0xC7EB394 + v0_2))) >= 0;
    if (!(v0_2)) goto L_C053864;
    v0_1 = (*(signed char *)((v0_0 + 0x4C))) != 0;
    if (v0_1) goto L_C0538FE;
    FUN_0c0555b6();
    v0_1 = (*(signed char *)(((v0_0 + 0x21) + 0x0))) != 20;
    v0_2 = ((v0_0 + 0x21));
    if (v0_1) goto L_C0538BC;
    v0_1 = (*(signed char *)((v0_2 + 0x1))) != 1;
    if (v0_1) goto L_C0538BC;
    fx_spawn_0567c4();
    goto L_C0538BC;
    L_C053864:;
    (((struct o42_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned char *)((v0_0 + 0x2)) = 0x0;
    *(volatile int *)((int)stk + 0);
    return game_tick_play_time();
    L_C0538BC:;
    v0_1 = (*(signed char *)((R13 + 0x23))) != 0;
    if (v0_1) goto L_C0538FE;
    v0_1 = (*(signed char *)((R13 + 0x38))) == 4;
    if (v0_1) goto L_C0538FE;
    v0_1 = *(signed char *)((v0_0 + 0x22));
    (((struct o22_uchar *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0x22);
    if (((int)(signed char)(v0_1 - 1) > 0)) goto L_C0538FE;
    *(unsigned char *)((v0_0 + v0_2)) = 0x3C;
    (((struct o21_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x21) + 0x0))) - 1);
    v0_0 = ((int)((int)(*(signed char *)(((v0_0 + 0x21) + 0x0))) % (int)0x5)) != 0;
    if (v0_0) goto L_C0538FE;
    FUN_0c059b04();
    L_C0538FE:;
    FUN_0c055686(*(int *)((int)stk + 0));
    game_tick_play_time();
    return game_update_max_combo();
}


int FUN_0c053b62(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o0_uchar *)g_game_substate)->v) = ((*(signed char *)g_game_substate) + 0x1);
    (((struct o1_uchar *)g_game_substate)->v) = 0x0;
    (((struct o23_uchar *)g_game_substate)->v) = 0x0;
    FUN_0c053910();
    t1 = *(signed char *)0xC7F304C;
    if (((int)(*(signed char *)0xC7F2E3F) >= (int)t1) && (t0 = *(signed char *)0xC7F2EB7, (int)t0 >= (int)t1)) {
        (((struct o27_uchar *)g_game_substate)->v) = 0x3;
    } else {
        t0 = *(signed char *)0xC7F304C;
        if ((int)(*(signed char *)0xC7F2E3F) >= (int)t0) {
            (((struct o27_uchar *)g_game_substate)->v) = 0x1;
        } else {
            if ((int)(*(signed char *)0xC7F2EB7) >= (int)t0) {
                (((struct o27_uchar *)g_game_substate)->v) = 0x2;
            }
        }
    }
    t0 = *(signed char *)0xC7F3054;
    t1 = t0;
    if (t0 == 0) {
    } else {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                t2 = *(signed char *)0xC7F3071;
                if ((unsigned char)t2 != 0) {
                    if (((unsigned char)t2 != 1) && ((unsigned char)t2 != 2)) {
                        if ((unsigned char)t2 != 3) {
                        } else {
                            *(unsigned char *)0xC7F2E3E = 0x1;
                            *(unsigned char *)0xC7F2EB6 = 0x1;
                        }
                    } else {
                        FUN_0c053720((t2 - 1));
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                    }
                } else {
                    *(unsigned char *)0xC7F2E3E = 0x1;
                    *(unsigned char *)0xC7F2EB6 = 0x1;
                }
                (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & 0xFC);
                (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)g_select_ready_mask);
                t2 = *(signed char *)0xC7F3071;
                (((struct o3_uchar *)0xC7F3071)->v) = t2;
                (((struct o1_uchar *)0xC7F3071)->v) = t2;
                t2 = 0x46;
            } else {
                t3 = t0;
                if (t0 == 4) {
                    t0 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t0 != 0) {
                        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
                            if ((unsigned char)t0 != 3) {
                            } else {
                                *(unsigned char *)0xC7F2E3E = 0x1;
                                *(unsigned char *)0xC7F2EB6 = 0x1;
                            }
                        } else {
                            FUN_0c053720((t0 - 1));
                            (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                        }
                    } else {
                        *(unsigned char *)0xC7F2E3E = 0x1;
                        *(unsigned char *)0xC7F2EB6 = 0x1;
                    }
                    (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & 0xFC);
                    (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)g_select_ready_mask);
                    t0 = *(signed char *)0xC7F3071;
                    (((struct o3_uchar *)0xC7F3071)->v) = t0;
                    (((struct o1_uchar *)0xC7F3071)->v) = t0;
                    t3 = 0x46;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            (((struct o22_uchar *)g_game_substate)->v) = ((*(signed char *)0xC7F3054) - 1);
            t2 = *(signed char *)0xC7F304F;
            t3 = *(signed char *)0xC7F3071;
            if ((unsigned char)t3 != 0) {
                if (((unsigned char)t3 != 1) && ((unsigned char)t3 != 2)) {
                    if ((unsigned char)t3 != 3) {
                    } else {
                        (((struct o44_ushort *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o44_short *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) + 0x1);
                        if ((int)((((struct o44_short *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) > (int)0x63) {
                            (((struct o44_ushort *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x63;
                        }
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x78))))->v) = 0x1;
                    }
                } else {
                    if ((signed char)t2 == ((unsigned char)(*(signed char *)0xC7F3071) - 1)) {
                        (((struct o4D_uchar *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        t3 = *(signed char *)0xC7F304F;
                        (((struct o58_ushort *)(((unsigned char)((unsigned short)t3 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o58_short *)(((unsigned char)((unsigned short)t3 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) | ((int)0x1 << (int)(*(signed char *)(((0xC7E40C8 + (unsigned short)((unsigned short)(0x1 - t3) * (unsigned short)0x72D0)) + 0x0)))));
                        t3 = *(signed char *)0xC7F304F;
                        (((struct o56_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)t3 * (unsigned short)0x78))))->v) = ((*(signed char *)(((0xC7F2DF0 + (unsigned char)((unsigned short)t3 * (unsigned short)0x78)) + 0x56))) + 0x1);
                    } else {
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                    }
                    FUN_0c053720(((*(signed char *)0xC7F3071) - 1));
                }
            } else {
                (((struct o44_ushort *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o44_short *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) + 0x1);
                if ((int)((((struct o44_short *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) > (int)0x63) {
                    (((struct o44_ushort *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x63;
                }
                (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x78))))->v) = 0x1;
            }
            (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC7F3054));
            (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)g_select_ready_mask);
            t2 = *(signed char *)0xC7F3071;
            (((struct o3_uchar *)0xC7F3071)->v) = t2;
            (((struct o1_uchar *)0xC7F3071)->v) = t2;
            t0 = 0x46;
        }
        t1 = t0;
    }
    t0 = t1;
    if ((*(signed char *)0xC7F2F16) != 0) {
        t1 = *(signed char *)0xC7F3054;
        t2 = t1;
        if ((t1 & 15) != 0) {
            (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)g_select_ready_mask);
            (((struct o3_uchar *)0xC7F3071)->v) = 0x0;
            (((struct o1_uchar *)0xC7F3071)->v) = 0x0;
            (((struct o0_uchar *)0xC7F3071)->v) = 0x0;
            t2 = 0x45;
        }
        t0 = t2;
    }
    return t0;
}


void game_stage_intro_start(void)
{
    signed char *state_blk = (signed char *)0xC7F302C;
    signed char *match_rec;
    int i, value;

    state_blk[1] = state_blk[1] + 1;
    state_blk[2] = 0;
    switch (state_blk[39] & 0xF0) {
    case 0:
        *(short *)(state_blk + 10) = 90;
        state_blk[76] = 1;
        match_rec = (signed char *)(0xC7F2DF0 + (unsigned char)(((state_blk[39] & 15) - 1) * 120));
        value = match_rec[80 + match_rec[79] - 1];
        if (value == 48 || value == 64)
            FUN_0c0a3f30(10);
        else
            FUN_0c0a3f30(9);
        fx_spawn_056340();
        goto common_sounds;
    case 16:
        *(short *)(state_blk + 10) = 90;
        state_blk[76] = 1;
        FUN_0c0a3f30(9);
        fx_spawn_056b2c();
    common_sounds:
        snd_play_side_se(0, 47);
        snd_play_side_se(0, 48);
        cam_reset_shake(5, 30, 2, 5);
        break;
    case 32:
        *(short *)(state_blk + 10) = 180;
        FUN_0c0a3f30(27);
        fx_spawn_0565b4();
        break;
    }
    for (i = 0; i < 2; i++) {
        char *player = (char *)(0xC7E40C4 + (unsigned short)(i * 0x72D0));
        value = player[0x71BA];
        if (value == 36 || value == 39 || value == 34)
            pl_change_state(player, 14, 0);
    }
}

void game_stage_intro_countdown(void)
{
    unsigned char *game_state = (unsigned char *)0xC7F302C;

    if (--*(short *)(game_state + 10) <= 0) {
        game_state[1]++;
        game_state[2] = 0;
        game_state[76] = 0;
        cam_force_mode(0, 0, 128);
        *(short *)(game_state + 10) = 300;
        switch (game_state[39] & 0xF0) {
        case 0:
            snd_play_char_voice(0xC7E40C4 + (unsigned short)((1 - (signed char)game_state[35]) * 29392), 2);
            break;
        case 16:
            snd_play_char_voice(0xC7E40C4, 2);
            snd_play_char_voice(0xC7EB394, 2);
            break;
        }
    }
}

void game_state_timer_tick(void)
{
    Rec *rec = (Rec *)0x0C7F302C;
    signed char *players = (signed char *)0x0C7E40C4;
    signed char state_a, state_b;
    if (rec->timer != 0)
        rec->timer = rec->timer - 1;
    state_a = players[0x71ba];
    if (state_a == 15 || state_a == 0) {
        state_b = players[0xe48a];
        if (state_b == 15 || state_b == 0)
            goto advance;
    }
    if (rec->timer <= 0)
        goto advance;
    if ((rec->flags & 0xf0) == 32)
        return;
    if (rec->timer > 240) {
        rec->byte76 = (rec->timer & 3) ? 1 : 0;
        return;
    }
    rec->byte76 = 0;
    return;
advance:
    rec->byte1 = rec->byte1 + 1;
    rec->byte2 = 0;
    rec->byte76 = 0;
}
