/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

/* named globals (symbols.txt) */
void menu_player_select_slot_update(int a4, int a5, int a6, int a7);
extern char g_select_ready_mask[];
struct o55_uchar { char p[0x55]; unsigned char v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5E_uchar { char p[0x5E]; unsigned char v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_uchar { char p[0x64]; unsigned char v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
int ui_draw_text_stub(int, int, float, float, float, float);
int snd_play_side_se(int, int);
int menu_pad_any_button(int);
int menu_ui_spawn_13(int);
int menu_ui_spawn_14(int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int sprintf(int, int, int, int, int);
void item_clear_state(void);
void FUN_0c058f44(void);
void obj_system_init(void);
void FUN_0c05f2d4(int a, int b);
int res_switch_scene(int a);
void FUN_0c0a32dc(void);
void bgm_play_stage_select(void);
void menu_ui_spawn_08(void);
void menu_ui_spawn_09(int a);
void menu_ui_spawn_11(void);
void menu_ui_spawn_12(void);
void menu_ui_spawn_28(void);
int menu_stage_select_spawn_ui(void);
void cam_force_mode_23(int a);
void menu_ui_spawn_31(void);
void menu_ui_spawn_25(int a, int b, int c);
void menu_ui_spawn_36(int a);
void menu_ui_spawn_38(void);
typedef struct { char pad0[5]; unsigned char byte5, phase, state; char pad1[8]; short half16; short pad_18; short timer; } GameRec;
extern void cam_reset_shake(int, int, int, int);
extern void bgm_stop_streams(void);
extern void FUN_0c0a2f66(int);
extern void bgm_play_vs(void);
struct vec3i { int w0, w1, w2; };
struct Task {
    char live;
    char field_01;
    char pad_a;
    char field_03;
    char pad_b[2];
    short field_06;
    char field_08, field_09, field_10, field_11;
    char pad_c[20];
    struct vec3i vec_32;
    char pad_d[56 - 44];
    struct vec3i vec_56;
    struct vec3i vec_68;
    struct vec3i vec_80;
    char pad_e[0xEC - 92];
    short timer_a;
    short timer_b;
    char pad_f[0x2E0 - 0xF0];
    char *peer;
};
struct Task *obj_create(int a, int b, int c, int d);
struct Vec12 { int a, b, c; };
struct Task_r5 {
    char live;
    char pad0[15];
    void (*handler)(void);
    char pad1[60];
    struct Vec12 rec;
};
void menu_ui_task_05(void);
struct Obj {
    char p0[8];
    signed char state;      /* 8 */
    char p9[0xEC - 9];
    short timer;            /* 0xEC */
    short count;            /* 0xEE */
};
void menu_ui_spawn_07(void);
int obj_destroy(struct Obj *);
int ui_task_create(void);


void menu_stage_select_state_step(signed char player)
{
    unsigned char *game = (unsigned char *)0xC7F2EE0;
    char *menu = (char *)0xC7F302C;
    char *plrec = (char *)0xC7F2DF0;
    unsigned char *state_ptr = game + 7;
    unsigned char rec_off = (unsigned short)(player * 120);
    int *src;
    int *dst;
    unsigned char *step_ptr;
    switch (*state_ptr) {
    case 0:
        goto state0;
    case 1:
        goto state1;
    case 2:
        goto state2;
    case 3:
        goto state3;
    default:
        goto state_default;
    }
state0:
    *state_ptr = *state_ptr + 1;
    game[8] = 0;
    *(char *)(0xC7E40C4 + 0x72D1) = 0;
    *(char *)(0xC7E40C4 + 1) = 0;
    item_clear_state();
    FUN_0c058f44();
    obj_system_init();
    FUN_0c05f2d4(1, 0);
    src = (int *)0xC1525A8;
    dst = (int *)0xC7F31BC;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    res_switch_scene(6);
    FUN_0c0a32dc();
    bgm_play_stage_select();
    menu[86] = 0;
    menu_ui_spawn_08();
    menu_ui_spawn_09(0);
    menu_ui_spawn_09(1);
    menu_ui_spawn_11();
    menu_ui_spawn_12();
    menu_ui_spawn_28();
    menu_stage_select_spawn_ui();
    cam_force_mode_23(3);
    *(short *)(menu + 10) = 65;
state1:
    *(short *)(menu + 10) = *(short *)(menu + 10) - 1;
    if (*(short *)(menu + 10) >= 0)
        return;
    goto advance;
state2:
    step_ptr = game + 8;
    if (*step_ptr == 0) {
        if ((unsigned char)menu[71] == 3) {
            *step_ptr = 99;
            goto state2_tick;
        }
        *step_ptr = *step_ptr + 1;
        menu_ui_spawn_31();
        *(short *)(menu + 10) = 70;
        if (plrec[rec_off + 86] > 0) {
            menu_ui_spawn_25(player, plrec[rec_off + 86] - 1, 7);
            menu_ui_spawn_36(plrec[rec_off + 86]);
        }
        goto state2_tick;
    }
    if (*step_ptr == 1)
        goto state2_tick;
    if (plrec[rec_off + 86] >= 7)
        goto advance;
    *state_ptr = *state_ptr + 2;
    return;
state2_tick:
    *(short *)(menu + 10) = *(short *)(menu + 10) - 1;
    if (*(short *)(menu + 10) > 0)
        return;
    game[8] = game[8] + 1;
    return;
advance:
    game[7] = game[7] + 1;
    game[8] = 0;
    return;
state3:
    *state_ptr = *state_ptr + 1;
    if (plrec[rec_off + 116] != 0)
        return;
    menu_ui_spawn_38();
    return;
state_default:
    game[6] = game[6] + 1;
    game[7] = 0;
}

void menu_vs_intro_step(void)
{
    GameRec *game = (GameRec *)0x0C7F2EE0;
    switch (game->state) {
    case 0:
        game->state = game->state + 1;
        game->timer = 30;
        cam_reset_shake(0, 0, 99, 0);
        /* fall through */
    case 1:
        game->timer = game->timer - 1;
        if (game->timer >= 0)
            return;
        game->state = game->state + 1;
        bgm_stop_streams();
        FUN_0c0a2f66(4);
        bgm_play_vs();
        return;
    default:
        game->phase = game->phase + 1;
        game->state = 0;
        return;
    }
}

struct Task *menu_ui_spawn_00(void)
{
    struct vec3i rec_c;
    struct vec3i rec_b;
    struct vec3i rec_a;
    struct Task *task;
    rec_a = *(struct vec3i *)0xC152A88;
    rec_b = *(struct vec3i *)0xC152A94;
    rec_c = *(struct vec3i *)0xC152AA0;
    task = obj_create(5, 1, 1, 2);
    if (task != 0) {
        task->live = 1;
        task->field_03 = 0;
        task->field_01 = 0;
        task->field_06 = 128;
        task->field_11 = 0;
        task->field_10 = 0;
        task->field_09 = 0;
        task->field_08 = 0;
        task->vec_32 = rec_a;
        task->vec_68 = rec_a;
        task->vec_56 = rec_a;
        task->timer_a = 0;
        task->timer_b = 0;
        *(struct vec3i *)(task->peer + 16) = rec_b;
        task->vec_80 = rec_c;
        *(struct vec3i *)(task->peer + 28) = rec_c;
    }
    return task;
}

void menu_ui_spawn_05(void)
{
    struct Vec12 tmpl;
    struct Task_r5 *task;
    tmpl = *(struct Vec12 *)0x0C152ADC;
    task = obj_create(5, 1, 1, 0);
    if (task != 0) {
        task->live = 1;
        task->rec = tmpl;
        task->handler = menu_ui_task_05;
    }
}

void menu_ui_task_07_spawner(struct Obj *obj)
{
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        obj->timer = 130;
        obj->count = 0;
        /* fall through */
    case 1:
        obj->timer = obj->timer - 1;
        if (obj->timer <= 0)
            obj->state = obj->state + 1;
        break;
    case 2:
        if (*(unsigned char *)0xC7F2EE4 >= 2)
            obj->state = obj->state + 1;
        obj->count = obj->count + 1;
        if (obj->count % 5 == 0)
            menu_ui_spawn_07();
        break;
    default:
        obj_destroy(obj);
        break;
    }
}

int menu_ui_spawn_10(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = ui_task_create();
        t2 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x4)) = t0;
            *(unsigned int *)((t1 + 0x10)) = 0xC0A71C4;
            *(unsigned int *)((t1 + 0x1C)) = a4;
            t2 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t2;
}

void menu_player_select_slot_update(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t4;
    register int t8;
    register int t9;
    register int t12;
    register int t15;
    register int t34;
    register int t106;
    register int t117;
    register int t200;
    register int t201;
    register int t203;
    register int t220;
    register int t224;
    register int t227;
    register int t231;
    register int t240;
    register int t257;
    register int t274;
    register int t276;
    register int t280;
    register int t289;
    register int t306;
    register int t323;
    register int t325;
    register int t326;
    register int t327;
    register int t331;
    register int t335;
    register int t346;
    register int t358;
    register int t359;
    register int t361;
    register int t379;
    register int t384;
    register int t395;
    register int t396;
    register int t398;
    register int t405;
    register int t190;
    register int t191;
    register int t192;
    register int t101;
    register int t102;
    register int t103;
    int t32;
    register int t33;
    int t115;
    register int t116;
    register int t271;
    register int t272;
    int t237;
    int t254;
    register int t320;
    register int t321;
    int t286;
    int t303;
    int t337;
    register int t338;
    int t345;

    t0 = *(signed char *)g_select_ready_mask;
    t2 = *(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0));
    if (t2 != 0) {
        if (t2 == 1) {
            if (((~(signed char)t0) & ((*(signed char *)((a4 + 0x3))) + 0x1)) == 0) {
                return;
            }
            t4 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
            (((struct o71EC_uchar *)(a4))->v) = 0x0;
            { menu_ui_spawn_13((*(signed char *)((a4 + 0x3)))); return; }
        }
        if (t2 == 2) {
            *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC7F4751);
            t8 = *(signed char *)((a4 + 0x3));
            t9 = *(signed char *)(((int)stk + 8));
            if (((*(int *)((((signed char)((((t8 << 2) << 1) + t8) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                t12 = *(signed char *)((a4 + 0x3));
                if (((*(int *)((((signed char)((((t12 << 2) << 1) + t12) << 2) + 0xC7F31F0) + 0x8))) & 64) == 0) {
                    t101 = 0x0;
                    t102 = 0x9;
                    t103 = t9;
                } else {
                    t15 = *(signed char *)((a4 + 0x3));
                    (((struct o64_uchar *)(((unsigned char)((unsigned short)t15 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t15 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) - 1);
                    switch (t9) {
                    case 0:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) >= (int)0x1) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x8;
                        }
                        break;
                    case 1:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x8;
                        }
                        break;
                    case 2:
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) >= 0) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x9;
                        }
                        break;
                    case 3:
                        if ((*(signed char *)0xC7F301C) != 0) {
                            if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0xA;
                            }
                            if (((*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) == 10) && (t32 = *(int *)((a4 + 0x1C)), t33 = *(signed char *)((t32 + 0x4)), t33 == 10)) {
                                t34 = *(signed char *)((a4 + 0x3));
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)t34 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t34 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) - 1);
                            }
                        } else {
                            if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) < 0) {
                                (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x9;
                            }
                        }
                        break;
                    }
                    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x41);
                }
                t190 = t101;
                t191 = t102;
                t192 = t103;
            } else {
                t106 = *(signed char *)((a4 + 0x3));
                (((struct o64_uchar *)(((unsigned char)((unsigned short)t106 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t106 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) + 0x1);
                switch (t9) {
                case 0:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x8) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x1;
                    }
                    break;
                case 1:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x8) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                    }
                    break;
                case 2:
                    if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x9) {
                    } else {
                        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                    }
                    break;
                case 3:
                    if ((*(signed char *)0xC7F301C) != 0) {
                        if (((*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) == 10) && (t115 = *(int *)((a4 + 0x1C)), t116 = *(signed char *)((t115 + 0x4)), t116 == 10)) {
                            t117 = *(signed char *)((a4 + 0x3));
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)t117 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t117 * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) + 0x1);
                        }
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0xA) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        }
                    } else {
                        if ((int)(*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))) <= (int)0x9) {
                        } else {
                            (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        }
                    }
                    break;
                }
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x41);
            }
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC152619 + (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))))));
            if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                t200 = *(signed char *)((a4 + 0x3));
                t201 = (((struct o62_short *)(((unsigned char)((unsigned short)t200 * (unsigned short)0x78) + 0xC7F2DF0)))->v);
                (((struct o62_ushort *)(((unsigned char)((unsigned short)t200 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (t201 - 1);
                if ((short)(t201 - 1) == 0) {
                    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
                    t203 = *(signed char *)((a4 + 0x3));
                    (((struct o60_ushort *)(((unsigned char)((unsigned short)t203 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o60_short *)(((unsigned char)((unsigned short)t203 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) - 1);
                }
            }
            *(int *)((int)stk + 4) = (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)));
            *(int *)((int)stk + 0) = 0xC152A78;
            sprintf(0xC7F36B8, t190, t191, t192, 0xC152A78);
            t220 = 0x190;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t220 = 0xD0;
            }
            ui_draw_text_stub(0xC7F36B8, 0x1, (float)t220, 280.0f, 1.0f, 1.0f);
            t224 = menu_pad_any_button((*(signed char *)((a4 + 0x3))));
            if ((signed char)t224 == 0) {
                if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                    return;
                }
                t227 = *(signed char *)((a4 + 0x4));
                *(unsigned int *)((((t227 << 2) + 0xC7F2F34) + 0x0)) = ((*(int *)((((t227 << 2) + 0xC7F2F34) + 0x0))) + 0x1);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x42);
                t231 = *(signed char *)((a4 + 0x3));
                if ((*(int *)((0xC7F31F8 + (signed char)((((t231 << 2) << 1) + t231) << 2)))) != 2) {
                    (((struct o71EC_uchar *)(a4))->v) = 0x1;
                    t272 = *(int *)((a4 + 0x1C));
                    if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t272 + 0x4)))) && (t237 = *(signed char *)((t272 + 0x71EC)), t237 == 1)) {
                        t240 = *(signed char *)0xC7F3071;
                        if ((unsigned char)t240 != 0) {
                            if (((unsigned char)t240 != 1) && ((unsigned char)t240 != 2)) {
                                if ((unsigned char)t240 != 3) {
                                } else {
                                    (((struct o71EC_uchar *)(a4))->v) = 0x2;
                                }
                            } else {
                                (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x2;
                            }
                        } else {
                            (((struct o71EC_uchar *)(a4))->v) = 0x2;
                        }
                    }
                    t271 = 0x2;
                } else {
                    (((struct o71EC_uchar *)(a4))->v) = 0x2;
                    t271 = *(int *)((a4 + 0x1C));
                    if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t271 + 0x4)))) && (t254 = *(signed char *)((t271 + 0x71EC)), t254 == 2)) {
                        t257 = *(signed char *)0xC7F3071;
                        if ((unsigned char)t257 != 0) {
                            if (((unsigned char)t257 != 1) && ((unsigned char)t257 != 2)) {
                                if ((unsigned char)t257 != 3) {
                                } else {
                                    (((struct o71EC_uchar *)(a4))->v) = 0x1;
                                }
                            } else {
                                (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                            }
                        } else {
                            (((struct o71EC_uchar *)(a4))->v) = 0x1;
                        }
                    }
                }
                t274 = *(signed char *)((a4 + 0x3));
                (((struct o5A_uchar *)(((unsigned char)((unsigned short)t274 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t274 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x3);
                return;
            }
            t276 = *(signed char *)((a4 + 0x4));
            *(unsigned int *)((((t276 << 2) + 0xC7F2F34) + 0x0)) = ((*(int *)((((t276 << 2) + 0xC7F2F34) + 0x0))) + 0x1);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x42);
            t280 = *(signed char *)((a4 + 0x3));
            if ((*(int *)((0xC7F31F8 + (signed char)((((t280 << 2) << 1) + t280) << 2)))) != 2) {
                (((struct o71EC_uchar *)(a4))->v) = 0x1;
                t321 = *(int *)((a4 + 0x1C));
                if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t321 + 0x4)))) && (t286 = *(signed char *)((t321 + 0x71EC)), t286 == 1)) {
                    t289 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t289 != 0) {
                        if (((unsigned char)t289 != 1) && ((unsigned char)t289 != 2)) {
                            if ((unsigned char)t289 != 3) {
                            } else {
                                (((struct o71EC_uchar *)(a4))->v) = 0x2;
                            }
                        } else {
                            (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x2;
                        }
                    } else {
                        (((struct o71EC_uchar *)(a4))->v) = 0x2;
                    }
                }
                t320 = 0x2;
            } else {
                (((struct o71EC_uchar *)(a4))->v) = 0x2;
                t320 = *(int *)((a4 + 0x1C));
                if (((*(signed char *)((a4 + 0x4))) == (*(signed char *)((t320 + 0x4)))) && (t303 = *(signed char *)((t320 + 0x71EC)), t303 == 2)) {
                    t306 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t306 != 0) {
                        if (((unsigned char)t306 != 1) && ((unsigned char)t306 != 2)) {
                            if ((unsigned char)t306 != 3) {
                            } else {
                                (((struct o71EC_uchar *)(a4))->v) = 0x1;
                            }
                        } else {
                            (((struct o71EC_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
                        }
                    } else {
                        (((struct o71EC_uchar *)(a4))->v) = 0x1;
                    }
                }
            }
            t323 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t323 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t323 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x3);
            return;
        }
        if (t2 == 3) {
            t325 = *(signed char *)((a4 + 0x3));
            t326 = (((struct o62_short *)(((unsigned char)((unsigned short)t325 * (unsigned short)0x78) + 0xC7F2DF0)))->v);
            (((struct o62_ushort *)(((unsigned char)((unsigned short)t325 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (t326 - 1);
            if ((int)(short)(t326 - 1) > 0) {
                return;
            }
            t327 = *(signed char *)((a4 + 0x3));
            (((struct o5A_uchar *)(((unsigned char)((unsigned short)t327 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t327 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
            (((struct o60_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x14;
            (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
            return;
        }
        if (t2 == 4) {
            t331 = *(signed char *)((a4 + 0x3));
            if (((*(int *)((((signed char)((((t331 << 2) << 1) + t331) << 2) + 0xC7F31F0) + 0x8))) & 240) != 0) {
                t335 = (*(int *)0xC7E4084);
                for (;;) {
                    if (((*(int *)((t335 + 0x10))) == 0xC0A80C4) && (t337 = *(signed char *)((t335 + 0x3)), t338 = *(signed char *)((a4 + 0x3)), t337 == t338)) {
                        break;
                    }
                    t335 = (*(int *)((t335 + 0x18)));
                }
                if (((*(signed char *)((t335 + 0x8))) == 2) && (t345 = *(signed char *)((t335 + 0x9)), t345 == 0)) {
                    t346 = *(signed char *)((a4 + 0x3));
                    (((struct o5E_uchar *)(((unsigned char)((unsigned short)t346 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t346 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5E) + 0x0))) ^ 0x1);
                }
            }
            if (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) != 0) {
                t358 = *(signed char *)((a4 + 0x3));
                t359 = (((struct o62_short *)((0xC7F2DF0 + (unsigned char)((unsigned short)t358 * (unsigned short)0x78))))->v);
                (((struct o62_ushort *)((0xC7F2DF0 + (unsigned char)((unsigned short)t358 * (unsigned short)0x78))))->v) = (t359 - 1);
                if ((short)(t359 - 1) == 0) {
                    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
                    t361 = *(signed char *)((a4 + 0x3));
                    (((struct o60_ushort *)(((unsigned char)((unsigned short)t361 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o60_short *)(((unsigned char)((unsigned short)t361 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) - 1);
                }
            }
            *(int *)((int)stk + 4) = (((((struct o60_short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v)));
            *(int *)((int)stk + 0) = 0xC152A78;
            sprintf(0xC7F36B8, 0x0, t0, 0x14, 0xC152A78);
            t379 = 0x190;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t379 = 0xF0;
            }
            ui_draw_text_stub(0xC7F36B8, 0x1, (float)t379, 280.0f, 1.0f, 1.0f);
            if ((signed char)menu_pad_any_button((*(signed char *)((a4 + 0x3)))) != 0 || *(short *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x60) == 0)
                *(unsigned char *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) = *(signed char *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 1;
            return;
        }
        *(unsigned char *)(0xC7F302C + 73) = t0;
        *(unsigned char *)(0xC7F302C + 72) = *(signed char *)(0xC7F302C + 72) | (*(signed char *)((a4 + 0x3)) + 1);
        *(unsigned char *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 73) = *(signed char *)((a4 + 0x4));
        return;
    }
    t384 = *(signed char *)((a4 + 0x3));
    (((struct o5A_uchar *)(((unsigned char)((unsigned short)t384 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)(((((unsigned char)((unsigned short)t384 * (unsigned short)0x78) + 0xC7F2DF0) + 0x5A) + 0x0))) + 0x1);
    (((struct o60_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x14;
    (((struct o62_ushort *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x3C;
    if (((*(signed char *)g_select_ready_mask) & ((*(signed char *)((a4 + 0x3))) + 0x1)) != 0) {
        (((struct o64_uchar *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(signed char *)((0xC152624 + (*(signed char *)((a4 + 0x4))))));
    } else {
        if ((*(signed char *)((0x4C + ((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0)))) == 0) {
            t395 = *(signed char *)((a4 + 0x3));
            t396 = 0x8;
            if ((signed char)t395 == 0) {
                t396 = 0x1;
            }
            (((struct o64_uchar *)(((unsigned char)((unsigned short)t395 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = t396;
            t398 = *(signed char *)((a4 + 0x3));
            *(int *)((int)stk + 4) = (((unsigned char)((unsigned short)t398 * (unsigned short)0x78) + 0xC7F2DF0) + 0x55);
            (((struct o55_uchar *)(((unsigned char)((unsigned short)t398 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (unsigned int)(math_rand_float() * 255.0f) % 8;
        } else {
            t405 = *(signed char *)((a4 + 0x3));
            (((struct o64_uchar *)(((unsigned char)((unsigned short)t405 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(signed char *)((0xC152624 + (*(signed char *)((((unsigned char)((unsigned short)t405 * (unsigned short)0x78) + 0xC7F2DF0) + 0x49))))));
        }
    }
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC152619 + (*(signed char *)(((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x78) + 0xC7F2DF0) + 0x64) + 0x0))))));
    { menu_ui_spawn_14((*(signed char *)((a4 + 0x3)))); return; }
}
