/* start-button poll, per-frame update, mode handlers 0..4 (0c052708-0c053680) */

struct o0_uchar { unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int hit_world_step(void);
int FUN_0c0203f6(void);
int FUN_0c0593e0(int);
int FUN_0c05941e(int);
int obj_tick_class(int);
int FUN_0c062f10(int);
int game_update_fighters(void);
int pl_build_model_matrix(int);
int FUN_0c09c35e(void);
int item_director_tick(void);
extern void obj_system_init(int *dst, char *rec);
extern void pl_place_start_positions(void);
extern void FUN_0c041e14(int n);
extern void ui_init_hud(void);
extern void FUN_0c02d82c(void);
extern void FUN_0c02d83c(void);
extern void FUN_0c026c7c(void);
extern void FUN_0c04c0ea(void);
extern void FUN_0c0cc074(void);
extern void FUN_0c05fc00(void);
extern void FUN_0c08a6c0(char *player);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int game_reset_match_screen(void);
int FUN_0c052b9e(void);

int game_poll_start_button(void)
{

    register int R1;
    register int R2;
    register int R3;
    int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = *(signed char *)0xC7F3071;
    v0_1 = (v0_2);
    v0_0 = (0x0);
    if (((unsigned char)v0_2 == 0)) goto L_C05275C;
    v0_2 = ((unsigned char)v0_1);
    v0_3 = (0xC7F31F0);
    R7 = (0x8);
    if (((unsigned char)v0_1 == 0)) goto L_C05275C;
    if ((v0_2 == 1)) goto L_C05272E;
    if ((v0_2 == 2)) goto L_C05272E;
    if ((v0_2 == 3)) goto L_C052748;
    L_C05275C:;
    return v0_0;
    L_C052748:;
    if ((((*(int *)((v0_3 + 0x8))) & R7) != 0)) goto L_C052754;
    v0_1 = *(int *)((v0_3 + 0x2C));
    v0_2 = (v0_1);
    if (((v0_1 & R7) == 0)) goto L_C05275C;
    L_C052754:;
    *(unsigned short *)0xC7F3036 = 0x1;
    v0_0 = (0x1);
    goto L_C05275C;
    L_C05272E:;
    if (((R7 & (*(int *)(((v0_3 + (signed char)(((((v0_1 - 1) << 2) << 1) + (v0_1 - 1)) << 2)) + 0x8)))) != 0)) goto L_C052754;
    goto L_C05275C;
}

int game_poll_start_button_pl(int a4)
{
    int t0;
    register int t1;

    if (((int)(signed char)a4 <= (int)0x1) && (t0 = (int)(((unsigned int)(a4 << 2)) >> 31), t1 = *(int *)((0xC7F31F8 + (signed char)((((a4 << 2) << 1) + a4) << 2))), (t1 & 8) != 0)) {
        *(unsigned short *)0xC7F3036 = 0x1;
        return 0x1;
    }
    return 0x0;
}

int game_frame_update(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t2;
    register int t16;
    register int t36;
    register int t40;
    register int t41;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC7F302C) << 2) + 0xC32DE40)))))();
    if ((*(signed char *)0xC7F302C) != 0) {
        (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
        if ((*(signed char *)0xC7EB2F6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = 0x1;
        }
        if ((*(signed char *)0xC7F25C6) != 0) {
            (((struct o0_uchar *)0xC7F3192)->v) = ((*(signed char *)0xC7F3192) | 0x2);
        }
        if ((*(signed char *)0xC7F3192) != 0) {
            (((struct o0_uchar *)0xC7F3078)->v) = 0x2;
            if (((((struct o2_short *)0xC7F3192)->v)) != 0) {
                t16 = (((struct o2_short *)0xC7F3192)->v);
                (((struct o2_ushort *)0xC7F3192)->v) = (t16 - 1);
                if ((short)(t16 - 1) == 0) {
                    FUN_0c09c35e();
                }
            } else {
                *(unsigned char *)0xC7F25C6 = 0x0;
                *(unsigned char *)0xC7EB2F6 = 0x0;
                (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
                (((struct o0_uchar *)0xC7F3078)->v) = 0x0;
            }
        }
        t36 = *(signed char *)0xC7F3078;
        if (t36 != 0) {
            if (t36 == 1) {
            } else {
                if (t36 != 2) {
                } else {
                    (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
                    t41 = *(int *)0xC7E407C;
                    t40 = (game_update_fighters());
                    for (;;) {
                        if (t41 == 0) {
                            break;
                        }
                        t40 = (*(signed char *)((t41 + 0x4)));
                        if (t40 == 5) {
                            t40 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t41 + 0x10)))))(t41, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                        }
                        t41 = (*(int *)((t41 + 0x18)));
                    }
                    FUN_0c0593e0(0x2);
                    FUN_0c0593e0(0x3);
                    FUN_0c0593e0(0x4);
                    FUN_0c0593e0(0x1);
                    *(unsigned int *)(((int)stk + 0)) = 0xC7E40C4;
                    pl_build_model_matrix(0xC7E40C4);
                    pl_build_model_matrix(0xC7EB394);
                    hit_world_step();
                    pl_build_model_matrix((*(int *)(((int)stk + 0))));
                    pl_build_model_matrix(0xC7EB394);
                    FUN_0c062f10((*(int *)(((int)stk + 0))));
                    FUN_0c062f10(0xC7EB394);
                    FUN_0c05941e(0x2);
                    FUN_0c05941e(0x3);
                    FUN_0c05941e(0x4);
                    FUN_0c05941e(0x1);
                    if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                        FUN_0c0203f6();
                    }
                }
            }
        } else {
            (((struct o4_uint *)0xC7F3078)->v) = (((((struct o4_int *)0xC7F3078)->v)) + 0x1);
            game_update_fighters();
            item_director_tick();
            obj_tick_class(0x2);
            obj_tick_class(0x3);
            obj_tick_class(0x4);
            obj_tick_class(0x1);
            pl_build_model_matrix(0xC7E40C4);
            *(unsigned int *)(((int)stk + 0)) = 0xC7EB394;
            pl_build_model_matrix(0xC7EB394);
            FUN_0c0593e0(0x2);
            FUN_0c0593e0(0x3);
            FUN_0c0593e0(0x4);
            FUN_0c0593e0(0x1);
            hit_world_step();
            pl_build_model_matrix(0xC7E40C4);
            pl_build_model_matrix((*(int *)(((int)stk + 0))));
            FUN_0c062f10(0xC7E40C4);
            FUN_0c062f10((*(int *)(((int)stk + 0))));
            FUN_0c05941e(0x2);
            FUN_0c05941e(0x3);
            FUN_0c05941e(0x4);
            FUN_0c05941e(0x1);
            if ((int)(*(signed char *)0xC7F302C) < (int)0x5) {
                FUN_0c0203f6();
            }
            obj_tick_class(0x5);
            obj_tick_class(0x7);
            FUN_0c0593e0(0x5);
            FUN_0c0593e0(0x7);
        }
        obj_tick_class(0x6);
        FUN_0c0593e0(0x6);
        return ((int (*)(void))(0xC05299E))();
    }
    return t2;
}

void game_reset_state_block(void)
{
    char *g = (char *)0x0C7F302C;
    char *table = (char *)0x0C14AB90;
    int *dst = (int *)0x0C7F31BC;
    char *p0 = (char *)0x0C7E40C4;
    char *p1 = (char *)0x0C7EB394;

    g[0x166] = 0;
    g[0x4C] = 0;
    *(short *)(g + 0x168) = 0;
    dst[0] = *(int *)(table + (unsigned char)(g[0x25] * 12));
    dst[1] = *(int *)(table + (unsigned char)(g[0x25] * 12) + 4);
    dst[2] = *(int *)(table + (unsigned char)(g[0x25] * 12) + 8);
    obj_system_init(dst, table + (unsigned char)(g[0x25] * 12));
    pl_place_start_positions();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    ui_init_hud();
    FUN_0c02d82c();
    FUN_0c02d83c();
    FUN_0c026c7c();
    FUN_0c04c0ea();
    FUN_0c0cc074();
    FUN_0c05fc00();
    g[0x16B] = 0;
    if (p0[4] == 10)
        FUN_0c08a6c0(p0);
    if (p1[4] == 10)
        FUN_0c08a6c0(p1);
}

int game_mode_handler_0(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)0xC7F302D) == 0) {
        (((struct o1_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302D) + 0x1);
        game_reset_match_screen();
        FUN_0c052b9e();
    } else {
        t5 = 0xC7F302D;
    }
    if ((*(signed char *)0xC7F2F03) != 0) {
        return ((int (*)(int, int, int, int))(0xC052DA0))(t5, a5, a6, a7);
    }
    (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    return 0x0;
}

int game_mode_handler_1(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
                return 0x0;
            }
            return ((int (*)(int, int, int, int))(0xC05327E))(0xC7F302C, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC052F0A))(0xC7F302C, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC052E3E))(0xC7F302C, a5, a6, a7);
}

int game_mode_handler_2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            return 0x0;
        }
        return ((int (*)(int, int, int, int))(0xC0535B4))(0xC7F302C, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC053434))(0xC7F302C, a5, a6, a7);
}
