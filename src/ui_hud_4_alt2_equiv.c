/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02ff18-0c03148c) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
int FUN_0c0555c4(void);
void FUN_0c03027e(int side);
void FUN_0c0302b6(int side);
void FUN_0c0301d2(int side, int layer, int c, int d);
void ui_draw_hit_counter(int side, int layer, int c, int d, float zoom);
void FUN_0c0302fe(int side, int layer, int c, int d);
#define PAUSED (*(int *)(0x0C7F2EE0 + 328))
typedef struct { float x, y, z; } Vec3;
typedef struct {
    int word0;
    float x, y, z;
    float size_x, size_y;
    int word6, word7, word8, word9;
    int rot;
    float alpha;
    int word12;
    int word13;
} Cell56;
extern int g_res_cockpit;
void ui_project_world_to_screen(Vec3 *src, Vec3 *dst, float *scale, float scale);
void ui_draw_digit_string(Vec3 *p, char *text, float scale);
void ui_sprite_queue_add(Cell56 *src, int *o, short idx, int groups, char c5, char c6);
int sprintf(char *, const char *, ...);

void FUN_0c030368(void)
{
    int i;
    signed char *p;
    signed char *pl;
    float zoom;
    int c6;

    if (FUN_0c0555c4() == 0)
        return;
    for (i = 0; (signed char)i < 2; i++) {
        p = (signed char *)g_hud_state + 44 + (signed char)(i * 24);
        pl = (signed char *)0xC7E40C4 + (unsigned short)((unsigned short)(signed char)i * (unsigned short)0x72D0);
        c6 = 30;
        switch (p[4]) {
        case 0:
            if (pl[0x720E] >= 2) {
                p[4] = 2;
                p[5] = 0;
                p[3] = 0;
                p[9] = pl[0x720E];
                p[13] = 0;
            } else if (pl[0x72B1] != 0) {
                p[4] = 3;
                p[5] = 0;
            }
            break;
        case 2:
            if (pl[0x720E] < 2)
                p[13] = 1;
            if (pl[0x720E] != 0 && p[13] != 0) {
                if (!(pl[0x720E] > 1)) {
                    p[4] = 0;
                    return;
                }
                p[5] = 0;
                p[9] = pl[0x720E];
                p[13] = 0;
            }
            switch (p[5]) {
            case 0:
                p[5] = p[5] + 1;
                p[8] = 0;
                p[12] = 30;
            case 1:
                if (!PAUSED)
                    p[8] = p[8] + 1;
                if (p[8] >= 10) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                goto count;
            case 2:
                if (!PAUSED)
                    p[8] = p[8] - 1;
                if (!(p[8] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
            count:
                if (pl[0x720E] == 0) {
                    if (PAUSED)
                        p[12] = p[12] + 1;
                    p[12] = p[12] - 1;
                    if (p[12] != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (p[10] == 99) {
                        p[5] = 9;
                    } else {
                        p[5] = 5;
                        p[11] = 0;
                    }
                } else {
                    p[9] = pl[0x720E];
                }
                goto flat;
            case 3:
                c6 = 0xC7E40C4;
                if (pl[0x720E] == 0) {
                    if (PAUSED)
                        p[12] = p[12] + 1;
                    p[12] = p[12] - 1;
                    if (p[12] != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (p[10] != 99) {
                        p[5] = 5;
                        p[11] = 0;
                        goto flat;
                    }
                    p[5] = 9;
                    p[8] = 8;
                } else if (p[9] != pl[0x720E]) {
                    p[9] = pl[0x720E];
                    p[10] = 11;
                    p[5] = 4;
                }
                goto flat;
            case 4:
                if (!PAUSED)
                    p[10] = p[10] - 1;
                if (p[10] == 0) {
                    p[5] = 3;
                    p[12] = 30;
                }
                zoom = ((float *)0x0C149414)[p[10]];
                ui_draw_hit_counter(i, 8, c6, 10, zoom);
                break;
            case 5:
                if (!PAUSED)
                    p[11] = p[11] + 1;
                if (p[11] >= 10) {
                    p[5] = p[5] + 1;
                    FUN_0c0302b6(i);
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            case 6:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (!(p[11] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            case 7:
                FUN_0c0301d2(i, 8, 30, 10);
                if (!PAUSED)
                    p[12] = p[12] - 1;
                if (p[12] == 0) {
                    p[5] = p[5] + 1;
                    p[8] = 0;
                    p[11] = 8;
                }
                break;
            case 8:
                if (p[11] != 0 && !PAUSED)
                    p[11] = p[11] - 1;
                if (p[8] == 0 && p[11] == 0) {
                    p[4] = 0;
                    p[5] = 0;
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            default:
                if (!PAUSED)
                    p[8] = p[8] - 1;
                if (p[8] != 0) {
                    p[4] = 0;
                    p[5] = 0;
                }
            flat:
                ui_draw_hit_counter(i, 8, c6, 10, 0.0f);
                break;
            }
            break;
        case 3:
            if (pl[0x720E] != 0) {
                p[4] = 0;
                pl[0x72B1] = 0;
                return;
            }
            switch (p[5]) {
            case 0:
                p[5] = p[5] + 1;
                p[11] = 0;
                break;
            case 1:
                if (!PAUSED)
                    p[11] = p[11] + 1;
                if (p[11] >= 10)
                    p[5] = p[5] + 1;
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 2:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (!(p[11] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 3:
                if (!PAUSED)
                    p[12] = p[12] - 1;
                if (p[12] == 0) {
                    p[5] = p[5] + 1;
                    p[11] = 8;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 4:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (p[11] == 0) {
                    p[4] = 0;
                    p[5] = 0;
                    pl[0x72B1] = 0;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            }
            break;
        default:
            p[4] = 0;
            p[5] = 0;
            break;
        }
    }
}

void ui_draw_world_number(Vec3 *pos, unsigned short kind, unsigned short count, int arg_d)
{
    Cell56 cell;
    Vec3 screen_pos;
    float scale;
    char text[8];
    int i;
    int groups;
    int tbl_val;
    float ratio;
    float max_val;

    if (FUN_0c0555c4() == 0) {
        return;
    }
    screen_pos = *pos;
    ui_project_world_to_screen(&screen_pos, &screen_pos, &scale, 1.0f);
    cell.size_y = scale;
    cell.size_x = scale;
    *(Vec3 *)&cell.x = screen_pos;
    cell.alpha = 1.0f;
    cell.word13 = 10;
    cell.rot = 0;
    cell.z = 9.0f;
    if (kind == 0) {
        cell.rot += 0x4000;
        cell.x -= scale * 30.0f;
        if (count > 0) {
            i = 0;
            do {
                ui_sprite_queue_add(&cell, &g_res_cockpit, 9, 1, 0, 0);
                cell.x += 12.0f * scale;
                i++;
            } while (i < count);
        }
    } else if (kind == 2) {
        cell.x -= scale * 40.0f;
        cell.rot += 0x4000;
        if (count > 0) {
            i = 0;
            do {
                ui_sprite_queue_add(&cell, &g_res_cockpit, 9, 0, 0, 0);
                cell.x += 8.0f * scale;
                i++;
            } while (i < count);
        }
    } else if (kind == 13) {
        cell.x -= scale * 40.0f;
        cell.rot += 0x4000;
        groups = (count - 1) / 5 + 1;
        if (groups > 0) {
            i = 0;
            do {
                ui_sprite_queue_add(&cell, &g_res_cockpit, 9, 0, 0, 0);
                cell.x += 8.0f * scale;
                i++;
            } while (i < groups);
        }
    } else if (kind == 7 || kind == 8 || kind == 9) {
        sprintf(text, (const char *)0xC149448, count / 60);
        ui_draw_digit_string(&screen_pos, text, scale);
    } else {
        cell.x -= scale * 26.0f;
        cell.word13 = 9;
        ui_sprite_queue_add(&cell, &g_res_cockpit, 9, 2, 1, 0);
        cell.word13 = 11;
        cell.x += 52.0f * scale;
        ui_sprite_queue_add(&cell, &g_res_cockpit, 9, 2, 0, 0);
        cell.word13 = 9;
        cell.x -= scale * 50.0f;
        cell.y += scale;
        cell.z += 0.01f;
        if (kind == 14) {
            max_val = (float)*(signed char *)(0xC336120 + kind * 4 + 1);
        } else {
            max_val = (float)*(unsigned short *)(0xC336120 + kind * 4 + 2);
        }
        ratio = (float)count / max_val;
        cell.size_x = scale * ratio * 12.0f;
        tbl_val = *(int *)(0xC3211EC + kind * 4);
        ui_sprite_queue_add(&cell, &g_res_cockpit, 9, tbl_val % 4 * 2 + 3, 0, 0);
        cell.z += 0.01f;
        cell.size_x = scale * 12.0f;
        ui_sprite_queue_add(&cell, &g_res_cockpit, 9, tbl_val % 4 * 2 + 4, 0, 0);
    }
}
