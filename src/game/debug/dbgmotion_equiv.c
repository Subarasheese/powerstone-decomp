/* debug motion viewer (Player No./Motion Kind) (0c0cf408-0c0cfe04) */

struct o20_float { char p[0x20]; float v; };
int dbgmotion_select_text_color(int, int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
struct Vec3f { float x, y, z; };
extern int nlSelectMatrixStack(int);
extern void nlUnitMatrix(void);
extern void nlLookAt(float *, float *, int);
struct Pad { char pad[12]; unsigned short flags; };
struct Vec12i { int x, y, z; };
struct vec12 { int a, b, c; };
extern void gfx_set_background_color(int, int, int);
extern void FUN_0c05f2d4(int, int);
extern void res_pl_textures_release_all(void);
extern void dbgmotion_update_player(int);
extern void pl_blend_motion_pose(char *);
extern void pl_build_model_matrix(char *);
extern void FUN_0c062f10(char *);
extern void FUN_0c02d1cc(char *);
extern void FUN_0c05f952(void);
int pl_step_motion(int);
int pl_apply_motion_translation(int);

void dbgmotion_update_camera(void);

int dbgmotion_draw_info(int a4, int a5)
{
    int stk[27];
    register int t0;
    register int t1;
    register int t69;
    register int t4;

    *(unsigned char *)(((int)stk + 104)) = a5;
    t0 = *(signed char *)(((int)stk + 104));
    t1 = *(signed char *)((a4 + 0xE));
    t69 = t1;
    if (t1 != 0) {
    } else {
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x0);
        t4 = *(signed char *)(((int)stk + 104));
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x1);
        *(int *)((int)stk + 100) = ((*(signed char *)((a4 + 0x4))));
        *(int *)((int)stk + 96) = 0xC154270;
        dbg_printf(0xC154270);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x1);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x2);
        *(int *)((int)stk + 92) = ((*(signed char *)((a4 + 0x5))));
        *(int *)((int)stk + 88) = 0xC154284;
        dbg_printf(0xC154284);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x2);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x3);
        *(int *)((int)stk + 84) = ((*(signed char *)((a4 + 0x6))));
        *(int *)((int)stk + 80) = 0xC154298;
        dbg_printf(0xC154298);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x3);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x4);
        *(int *)((int)stk + 76) = ((*(int *)((a4 + 0x14))));
        *(int *)((int)stk + 72) = 0xC1542AC;
        dbg_printf(0xC1542AC);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x4);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x5);
        *(float *)(((int)stk + 68)) = ((((struct o20_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
        *(int *)((int)stk + 64) = 0xC1542C0;
        dbg_printf(0xC1542C0);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x5);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x6);
        *(int *)((int)stk + 60) = ((*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x710A))));
        *(int *)((int)stk + 56) = 0xC1542D0;
        dbg_printf(0xC1542D0);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x6);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x7);
        *(int *)((int)stk + 52) = ((*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x710B))));
        *(int *)((int)stk + 48) = 0xC1542E0;
        dbg_printf(0xC1542E0);
        dbgmotion_select_text_color((*(signed char *)((a4 + 0x7))), 0x7);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x8);
        *(int *)((int)stk + 44) = ((*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x710C))));
        *(int *)((int)stk + 40) = 0xC1542F0;
        dbg_printf(0xC1542F0);
        dbg_set_text_color(0xFFFFFFFF);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x9);
        *(int *)((int)stk + 36) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x719C)));
        *(int *)((int)stk + 32) = 0xC154300;
        dbg_printf(0xC154300);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0xD);
        *(int *)((int)stk + 28) = (unsigned char)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71A6)));
        *(int *)((int)stk + 24) = 0xC154314;
        dbg_printf(0xC154314);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0xE);
        *(int *)((int)stk + 20) = ((*(int *)((a4 + 0x10))));
        *(int *)((int)stk + 16) = 0xC154328;
        dbg_printf(0xC154328);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0xF);
        *(int *)((int)stk + 12) = ((*(signed char *)((a4 + 0x9))));
        *(int *)((int)stk + 8) = 0xC15433C;
        dbg_printf(0xC15433C);
        dbg_set_cursor_cell((((short)t4 * (short)0x1E) + 0xA), 0x10);
        *(int *)((int)stk + 4) = ((*(int *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30))));
        *(int *)((int)stk + 0) = 0xC154350;
        t69 = (dbg_printf(0xC154350));
    }
    return t69;
}

void dbgmotion_update_camera(void)
{
    struct Vec3f pos_a;
    struct Vec3f pos_b;
    signed char *preset = (signed char *)0xC33F578;
    if (((struct Pad *)0xC361BF0)->flags & 1) {
        *preset = *preset + 1;
        if (*preset > 4)
            *preset = 0;
    }
    switch (*preset) {
    case 0:
        pos_a.x = 0.0f;
        pos_a.y = 100.0f;
        pos_a.z = 0.0f;
        pos_b.x = pos_a.x;
        pos_b.y = pos_a.y;
        pos_b.z = pos_a.z + 400.0f;
        break;
    case 1:
        pos_a.x = 0.0f;
        pos_a.y = 100.0f;
        pos_a.z = 0.0f;
        pos_b.x = pos_a.x;
        pos_b.y = pos_a.y;
        pos_b.z = pos_a.z + 1600.0f;
        break;
    case 2:
        pos_a.x = 0.0f;
        pos_a.y = 0.0f;
        pos_a.z = 0.0f;
        pos_b.x = pos_a.x;
        pos_b.y = pos_a.y + 500.0f;
        pos_b.z = pos_a.z + 1.0f;
        break;
    case 3:
        pos_a.x = 0.0f;
        pos_a.y = 100.0f;
        pos_a.z = 0.0f;
        pos_b.x = pos_a.x;
        pos_b.y = pos_a.y + 200.0f;
        pos_b.z = pos_a.z + 400.0f;
        break;
    case 4:
        pos_a.x = 0.0f;
        pos_a.y = 100.0f;
        pos_a.z = 0.0f;
        pos_b.x = pos_a.x;
        pos_b.y = pos_a.y + -200.0f;
        pos_b.z = pos_a.z + 400.0f;
        break;
    default:
        break;
    }
    nlSelectMatrixStack(2);
    nlUnitMatrix();
    nlLookAt((float *)&pos_b, (float *)&pos_a, 0);
    nlSelectMatrixStack(1);
    *(struct Vec3f *)(0xC7F29F8 + 188) = pos_b;
    *(struct Vec3f *)(0xC7F29F8 + 236) = pos_a;
}

void dbgmotion_set_start_positions(signed char *obj)
{
    *(struct Vec12i *)(obj + 32) = *(struct Vec12i *)(0xC494958 + (signed char)(obj[3] * 12));
    *(struct Vec12i *)(obj + 44) = *(struct Vec12i *)(0xC494970 + (signed char)(obj[3] * 12));
}

void dbgmotion_update(void)
{
    char *players;
    char *player;
    int idx;
    unsigned char phase;

    gfx_set_background_color(0xFF404040, 0xFF404040, 0xFF404040);
    dbgmotion_update_camera();
    FUN_0c05f2d4(0, 0);
    players = (char *)0xC7E40C4;
    phase = *(unsigned char *)0xC7F2EE9;
    if (phase == 0) {
        res_pl_textures_release_all();
        players[8] = 0;
        players[0x72D8] = 0;
        *(char *)0xC494928 = 0;
        *(char *)(0xC494928 + 24) = 0;
        *(struct vec12 *)0xC494958 = *(struct vec12 *)0xC33F57C;
        *(struct vec12 *)(0xC494958 + 12) = *(struct vec12 *)(0xC33F57C + 12);
        *(struct vec12 *)0xC494970 = *(struct vec12 *)0xC33F594;
        *(struct vec12 *)(0xC494970 + 12) = *(struct vec12 *)(0xC33F594 + 12);
        *(unsigned char *)0xC7F2EE9 = *(unsigned char *)0xC7F2EE9 + 1;
    } else if (phase != 1) {
        FUN_0c05f952();
        return;
    }
    for (idx = 0; idx < 2; idx++) {
        dbgmotion_update_player(idx);
        player = players + (unsigned short)((signed char)idx * 0x72D0);
        pl_blend_motion_pose(player);
        pl_build_model_matrix(player);
        FUN_0c062f10(player);
        FUN_0c02d1cc(player);
    }
    FUN_0c05f952();
}

int FUN_0c0cf898(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    if ((*(short *)((((signed char)(((a5 << 2) + a5) << 2) + 0xC361BF0) + 0x8))) == (*(short *)((((signed char)(((a5 << 2) + a5) << 2) + 0xC361BF0) + 0xA)))) {
        t0 = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    *(unsigned char *)((a4 + 0x8)) = t0;
    t0 = *(signed char *)((a4 + 0x8));
    t1 = t0;
    if ((int)t0 > (int)0x1E) {
        *(unsigned char *)((a4 + 0x8)) = 0x1E;
        t0 = *(short *)((((signed char)(((a5 << 2) + a5) << 2) + 0xC361BF0) + 0x8));
        *(unsigned short *)((((signed char)(((a5 << 2) + a5) << 2) + 0xC361BF0) + 0xC)) = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c0cf8de(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a5 + 0xB));
    if (t0 == 0) {
        t1 = pl_step_motion(a4);
        if ((signed char)t1 == 64) {
            *(unsigned char *)((a5 + 0xB)) = 0x1;
        }
        *(unsigned int *)((a5 + 0x10)) = ((*(int *)((a5 + 0x10))) + 0x1);
        return pl_apply_motion_translation(a4);
    }
    return t0;
}
