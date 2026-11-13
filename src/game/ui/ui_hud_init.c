/* ui_hud_init.c: setting up the fight HUD (original file 0c02d774-0c02d9e0). */
#include "game/ui/ui.h"

#define HUD_WIDE_LAYOUT (*(int *)0x0C7F3020)            /* nonzero: the HUD sits 16 pixels further in */
#define HUD_NO_INTRO (*(signed char *)0x0C7F4769)

void ui_init_hud(void)
{
    memset(g_hud_state.hit, 0, sizeof(g_hud_state.hit));
    memset(g_hud_state.panel, 0, sizeof(g_hud_state.panel));
    memset(g_hud_state.gauge, 0, sizeof(g_hud_state.gauge));
    memset(g_hud_state.shard, 0, sizeof(g_hud_state.shard));
    g_hud_state.hit[0]._00[2] = 0;
    g_hud_state.hit[1]._00[2] = 0;
    g_hud_state.x3 = 40;
    g_hud_state.x2 = 40;
    g_hud_state.layout[5] = 1.0f;
    g_hud_state.layout[4] = 1.0f;
    ui_reset_hud_gauges();
    ui_reset_hud_wins();
    if (HUD_WIDE_LAYOUT == 0) {
        g_hud_state.layout[1] = 0.0f;
        g_hud_state.layout[0] = 0.0f;
        g_hud_state.layout[3] = 0.0f;
        g_hud_state.layout[2] = 0.0f;
    } else {
        g_hud_state.layout[0] = 16.0f;
        g_hud_state.layout[1] = -16.0f;
        g_hud_state.layout[2] = 16.0f;
        g_hud_state.layout[3] = -16.0f;
    }
    memset(g_hud_state._47C, 0, sizeof(g_hud_state._47C));
}

void ui_enable_hud(void)
{
    g_hud_state.enabled = 1;
    if (HUD_NO_INTRO == 0)
        fx_spawn_049b7c();
}

void ui_disable_hud(void)
{
    g_hud_state.enabled = 0;
}

void FUN_0c02d834(void)
{
    g_hud_state._01 = 1;
}

void FUN_0c02d83c(void)
{
    g_hud_state._01 = 0;
}

int ui_hud_enabled(void)
{
    return g_hud_state.enabled;
}

/* both players' win marks start from their win counts */
void ui_reset_hud_wins(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        memset(&g_hud_state.wins[i], 0, sizeof(HudWins));
        g_hud_state.wins[i].wins_shown = PLAYER_WINS(i);
        g_hud_state.wins[i].wins = PLAYER_WINS(i);
    }
}

/* both health gauges from the fighters: hp, displayed hp, full hp and its bars of 48; the bars' glints staggered */
void ui_reset_hud_gauges(void)
{
    int i, j;
    HudGauge *g;

    for (i = 0; i < 2; i++) {
        g = &g_hud_state.gauge[i];
        g->slot = i;
        g->hp = FIGHTER(i)->hp;
        g->hp_display = FIGHTER(i)->hp_display;
        g->hp_ref = FIGHTER(i)->hp_ref;
        if (g->hp_ref != 0)
            g->segments_shown = g->segments = (FIGHTER(i)->hp_ref - 1) / 48 + 1;
        else
            g->segments_shown = 1;
        for (j = 0; j < 5; j++) {
            g->glint_timer[j] = 30 + 8 * j;
            g->glint_frame[j] = 0;
        }
    }
}
