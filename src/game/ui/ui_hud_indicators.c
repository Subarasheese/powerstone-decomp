/* ui_hud_indicators.c: the win marks under the health gauges and the cockpit faces (original file 0c02ee40-0c02f328).
   When a player wins a round a new mark appears at the gauge, waits, flies to its place in the row and bounces into size. */
#include "game/ui/ui.h"

#define WIN_ICON_KINDS ((int *)0x0C1493C4)        /* 5 kinds of round win, in icon order */
#define WIN_ICON_DELAY ((short *)0x0C1493D8)      /* frames before the new mark shows, by icon */
#define WIN_MARK_BOUNCE ((float *)0x0C1493E4)     /* scale steps of the landing bounce (12) */
#define WIN_ROUND_KIND(i, n) (*(signed char *)(g_player_win_records + (unsigned char)((i) * 120) + 80 + (n)))

void ui_update_hud_indicators(void)
{
    UiSprite sprite;
    HudWins *w;
    float val, step_x;
    int i, k, n;

    for (i = 0; i < 2; i++) {
        w = &g_hud_state.wins[i];
        w->wins = PLAYER_WINS(i);
        if (w->wins == w->wins_shown)
            continue;
        if (w->busy != 0)
            continue;
        w->busy = 1;
        w->side = i;
        w->step = 0;
        w->active = 1;
        for (k = 0; k < 5; k++) {
            if (WIN_ROUND_KIND(i, PLAYER_WINS(i) - 1) == WIN_ICON_KINDS[k])
                break;
        }
        w->icon = k;
    }

    for (i = 0; i < 2; i++) {
        w = &g_hud_state.wins[i];
        if (w->active != 0) {
            switch (w->step) {
            case 0:                 /* the new mark at the gauge */
                w->step++;
                w->scale = 10.0f;
                w->y = 120.0f;
                w->timer = WIN_ICON_DELAY[w->icon];
                if (w->side == 0) {
                    w->x = 100.0f;
                    val = (float)w->wins_shown * 40.0f - w->x;
                    val = val + 28.0f;
                } else {
                    w->x = 540.0f;
                    val = -((float)w->wins_shown * 40.0f) - w->x;
                    val = val + 612.0f;
                }
                w->dx = val / 20.0f;
                w->dy = (-w->y + 120.0f) / 20.0f;
                break;
            case 1:                 /* hidden for its delay */
                if (GAME_PAUSED == 0) {
                    w->timer--;
                    if (w->timer == 0) {
                        w->step++;
                        w->timer = 1;
                        w->visible = 1;
                    }
                }
                break;
            case 2:
                if (GAME_PAUSED == 0) {
                    w->timer--;
                    if (w->timer == 0) {
                        w->step++;
                        w->timer = 20;
                    }
                }
                break;
            case 3:                 /* flying to its place, shrinking */
                if (GAME_PAUSED == 0) {
                    w->x = w->x + w->dx;
                    w->scale = w->scale - 0.449999988f;
                    w->timer--;
                    if (w->timer == 0) {
                        w->timer = 12;
                        w->step++;
                    }
                }
                break;
            case 4:                 /* the bounce */
                if (GAME_PAUSED == 0) {
                    n = w->timer;
                    w->scale = w->scale + WIN_MARK_BOUNCE[12 - n];
                    w->timer--;
                    if (w->timer == 0)
                        w->step++;
                }
                break;
            case 5:
                w->wins_shown = w->wins;
                w->visible = 0;
                break;
            }
        }
        if (w->visible != 0) {
            sprite.rot = w->rot;
            sprite.alpha = 1.0f;
            val = w->scale * 1.0f;
            sprite.scale_y = val;
            sprite.scale_x = val;
            sprite.layer = 10;
            sprite.x = w->x;
            sprite.y = w->y + g_hud_state.layout[0];
            sprite.z = 1.0f + 0.00100000005f * (float)w->side;
            ui_sprite_queue_add(&sprite, g_res_cockpit, 5, w->icon, 0, 0);
        }
    }

    /* the marks already won: a row under each gauge, the right one drawn leftward */
    step_x = 40.0f;
    sprite.rot = 0;
    sprite.alpha = 1.0f;
    sprite.scale_x = 1.0f;
    sprite.scale_y = 1.0f;
    sprite.layer = 10;
    sprite.y = g_hud_state.layout[0] + 120.0f;
    sprite.z = 8.0f;
    sprite.x = 28.0f;
    for (i = 0; i < 2; i++) {
        w = &g_hud_state.wins[i];
        for (n = 0; n < w->wins_shown; n++) {
            for (k = 0; k < 5; k++) {
                if (WIN_ROUND_KIND(i, n) == WIN_ICON_KINDS[k]) {
                    ui_sprite_queue_add(&sprite, g_res_cockpit, 5, k, 0, 0);
                    sprite.x = sprite.x + step_x;
                }
            }
        }
        step_x = -step_x;
        sprite.x = 612.0f;
    }
}

/* the two fighters' faces at the ends of the gauges */
void ui_draw_hud_cell_pair(void)
{
    UiSprite cell;

    cell.x = 0.0f;
    cell.y = g_hud_state.layout[0] + -6.0f;
    cell.z = 7.79999971f;
    cell.scale_x = 1.0f;
    cell.scale_y = 1.0f;
    cell.rot = 0;
    cell.alpha = g_hud_state.layout[4];
    cell.layer = 5;
    ui_sprite_queue_add(&cell, (int *)((char *)g_res_cockpit_faces + (unsigned char)(g_players[0].chara * 12)), 0, 0, 0, 0);
    cell.z = 544.0f;
    cell.layer = *(int *)&g_hud_state.layout[5];
    ui_sprite_queue_add(&cell, (int *)((char *)g_res_cockpit_faces + (unsigned char)(g_players[1].chara * 12)), 0, 0, 1, 0);
}
