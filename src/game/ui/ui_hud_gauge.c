/* ui_hud_gauge.c: the two health gauges (original file 0c02f328-0c02ff18).
   A gauge is a row of bars of 48 hp. Damage leaves a red part (hp_display) that drains after the hp. When the full gauge
   (hp_ref) shrinks, the lost part breaks off as chips that fade, and each whole bar lost becomes a shard that turns over and
   falls away. Each bar glints now and then. */
#include "game/ui/ui.h"

#define KO_FLASH_FRAMES ((signed char *)0x0C3211E8)    /* 4 frames, by the frame counter */
#define GAUGE_BAR 48

extern int g_frame_counter;

/* a mark flashing by fighter `slot`'s gauge while its _71ED is clear */
void FUN_0c02f328(char slot)
{
    UiSprite s;

    if (FIGHTER(slot)->_71ED != 0)
        return;
    s.x = 32.0f + (float)slot * 512.0f;
    s.y = 208.0f;
    s.z = 8.0f;
    s.rot = 0;
    s.layer = 5;
    s.alpha = 1.0f;
    s.scale_y = 1.0f;
    s.scale_x = 1.0f;
    ui_sprite_queue_add(&s, g_res_cockpit, 8, KO_FLASH_FRAMES[(g_frame_counter & 0xE) >> 2], slot, 0);
}

/* a chip is done; a whole bar's chip takes the bar off the gauge and leaves a shard in its place */
void FUN_0c02f3a6(HudChip *c, HudGauge *g)
{
    HudShard *sh;

    c->active = 0;
    if (c->y == 80.0f) {
        g->segments--;
        sh = (HudShard *)((char *)g_hud_state.shard + (short)(g->slot * 240) + (unsigned char)(g->segments * 48));
        sh->on = 1;
        sh->side = g->slot;
        sh->step = 0;
        sh->bar = g->segments;
    }
}

/* one gauge from its fighter: hp, the full gauge growing (all bars again) or shrinking (chips break off), the chips drawn */
void FUN_0c02f3f2(HudGauge *g)
{
    UiSprite s;
    HudChip *c;
    int i, k, bars;
    short lost, rest, end;

    g->hp = FIGHTER(g->slot)->hp;
    g->hp_display = FIGHTER(g->slot)->hp_display;
    if (g->hp_ref < FIGHTER(g->slot)->hp_ref) {
        g->hp_ref = FIGHTER(g->slot)->hp_ref;
        for (i = 0; i < 8; i++)
            g->chip[i].active = 0;
        if (FIGHTER(g->slot)->hp_ref > 0) {
            g->segments = (FIGHTER(g->slot)->hp_ref - 1) / GAUGE_BAR + 1;
            for (i = 0; i < g->segments; i++)
                ((HudShard *)((char *)g_hud_state.shard + (short)(g->slot * 240) + (unsigned char)(i * 48)))->on = 0;
        } else {
            g->segments = 1;
            ((HudShard *)((char *)g_hud_state.shard + (short)(g->slot * 240)))->on = 0;
        }
    }

    lost = g->hp_ref - FIGHTER(g->slot)->hp_ref;
    if (lost > 0) {
        rest = FIGHTER(g->slot)->hp_ref;        /* what is left in its last bar */
        bars = 0;
        while (rest > GAUGE_BAR) {
            rest -= GAUGE_BAR;
            bars++;
        }
        end = lost + rest;
        for (k = 0; k < 8 && end > 0; k++) {
            c = &g->chip[g->next_chip];
            g->next_chip = (g->next_chip + 1) & 7;
            if (c->active != 0)
                FUN_0c02f3a6(c, g);
            c->active = 1;
            *(short *)&c->alpha = 0;
            c->timer = 60;
            if (rest > 0 && end < GAUGE_BAR) {
                c->w = (float)lost;
                c->y = (float)rest;
            } else if (rest > 0 && end >= GAUGE_BAR) {
                c->w = (float)(GAUGE_BAR - rest);
                c->y = (float)rest;
            } else {
                if (end < GAUGE_BAR)
                    c->w = (float)end;
                else
                    c->w = 48.0f;
                c->y = 0.0f;
            }
            c->y = -c->y + 80.0f;
            if (g->slot == 0)
                c->x = (float)bars * 24.0f + 83.5f;
            else
                c->x = 556.5f - (float)bars * 24.0f;
            rest -= GAUGE_BAR;
            end -= GAUGE_BAR;
            bars++;
        }
    }

    g->hp_ref = FIGHTER(g->slot)->hp_ref;
    for (i = 0; i < 8; i++) {
        c = &g->chip[i];
        if (c->active == 0)
            continue;
        if (c->timer > 40)
            c->alpha = 1.0f;
        else
            c->alpha = (float)c->timer / 40.0f;
        s.rot = 0;
        s.scale_y = c->w;
        s.scale_x = 13.0f;
        s.x = c->x;
        s.y = c->y + g_hud_state.layout[0];
        s.z = 7.6f;
        s.layer = 14;
        s.alpha = c->alpha * g_hud_state.layout[4 + g->slot];
        ui_sprite_queue_add(&s, g_res_cockpit, 3, 2, g->slot, 0);
        if (GAME_PAUSED != 0)
            c->timer++;
        if (--c->timer == 0)
            FUN_0c02f3a6(c, g);
    }
}

/* the shards: placed over their bar, they turn a quarter, then fall and shrink. The first bar's waits for the KO. */
void FUN_0c02f786(void)
{
    HudShard *sh;
    Fighter *f;
    int i, k;

    for (i = 0; i < 2; i++) {
        for (k = 0; k < 5; k++) {
            sh = (HudShard *)((char *)g_hud_state.shard + (short)(i * 240) + (unsigned char)(k * 48));
            f = FIGHTER(i);
            if (sh->on == 0)
                continue;
            switch (sh->step) {
            case 0:
                if (k == 0 && f->hp >= 0)
                    break;
                sh->step++;
                sh->scale = 1.0f;
                sh->y = 96.0f;
                sh->layer = 14;
                sh->rot = 0;
                if (sh->side == 0) {
                    sh->x = (float)sh->bar * 24.0f + 84.0f;
                    sh->spin = -1024;
                    sh->dx = 1.0f;
                } else {
                    sh->x = -((float)sh->bar * 24.0f) + 556.0f;
                    sh->spin = 1024;
                    sh->dx = -1.0f;
                }
                /* fall through */
            case 1:
                sh->rot = (unsigned short)(sh->rot + sh->spin);
                if (sh->rot >= 0x4000 && sh->rot <= 0xC000) {
                    sh->step++;
                    sh->timer = 8;
                    sh->dy = 4.0f;
                    sh->layer = 10;
                    if (sh->side == 0)
                        sh->x = sh->x + 40.0f;
                    else
                        sh->x = sh->x - 40.0f;
                }
                break;
            case 2:
                sh->rot = sh->rot + sh->spin;
                sh->x = sh->x + sh->dx;
                sh->y = sh->y + sh->dy;
                sh->dy = sh->dy + sh->ddy;
                if (--sh->timer <= 8)
                    sh->scale = (float)sh->timer / 8.0f;
                if (sh->timer == 0)
                    sh->on = 0;
                break;
            }
        }
    }
}

/* both gauges: the bars (red under the hp), the bars' glints and frames, the shards, and the gauges' end pieces */
void FUN_0c02f98a(void)
{
    UiSprite t, s;
    HudGauge *g;
    HudShard *sh;
    float step, step_t, part;
    short hp, red;
    int i, k, n, off;

    FUN_0c02f3f2(&g_hud_state.gauge[0]);
    FUN_0c02f3f2(&g_hud_state.gauge[1]);
    if (GAME_PAUSED == 0)
        FUN_0c02f786();

    /* the bars: 48 hp each, from the face outward */
    step = 24.0f;
    s.rot = 0;
    s.x = 83.5f;
    s.z = 7.6f;
    s.layer = 14;
    s.alpha = g_hud_state.layout[4] * 1.0f;
    s.scale_x = 13.0f;
    for (i = 0; i < 2; i++) {
        hp = FIGHTER(i)->hp;
        red = FIGHTER(i)->hp_display;
        while (hp > 0 || red > 0) {
            if (hp >= GAUGE_BAR) {
                s.y = g_hud_state.layout[0] + 80.0f;
                s.scale_y = 48.0f;
                ui_sprite_queue_add(&s, g_res_cockpit, 3, 0, i, 0);
            } else if (hp > 0) {
                part = (float)hp;
                s.y = -part + g_hud_state.layout[0] + 80.0f;
                if (red >= GAUGE_BAR)
                    s.scale_y = (float)(GAUGE_BAR - hp);
                else
                    s.scale_y = (float)(red - hp);
                ui_sprite_queue_add(&s, g_res_cockpit, 3, 1, i, 0);
                s.y = g_hud_state.layout[0] + 80.0f;
                s.scale_y = part;
                ui_sprite_queue_add(&s, g_res_cockpit, 3, 0, i, 0);
            } else {
                s.y = g_hud_state.layout[0] + 80.0f;
                if (red >= GAUGE_BAR)
                    s.scale_y = 48.0f;
                else
                    s.scale_y = (float)red;
                ui_sprite_queue_add(&s, g_res_cockpit, 3, 1, i, 0);
            }
            s.x = s.x + step;
            red -= GAUGE_BAR;
            hp -= GAUGE_BAR;
        }
        s.x = 556.5f;
        s.alpha = g_hud_state.layout[5] * 1.0f;
        step = -step;
    }

    /* each bar's frame (t) and its glint (s) */
    step = 24.0f;
    step_t = 24.0f;
    t.rot = 0;
    s.rot = 0;
    t.alpha = g_hud_state.layout[4] * 1.0f;
    s.alpha = t.alpha;
    s.x = 84.0f;
    t.x = 83.5f;
    s.y = g_hud_state.layout[0] + 56.0f;
    t.y = g_hud_state.layout[0] + 80.0f;
    s.z = 7.5f;
    t.z = 7.69999981f;
    s.layer = 10;
    t.layer = 14;
    s.scale_x = 1.0f;
    t.scale_x = 13.0f;
    s.scale_y = 1.0f;
    t.scale_y = 48.0f;
    for (i = 0; i < 2; i++) {
        g = (HudGauge *)((char *)g_hud_state.gauge + (short)(i * 192));
        n = g->segments;
        if (n == 0 && FIGHTER(i)->hp == 0)
            n = 1;
        for (k = 0; k < n; k++) {
            if (g->glint_timer[k] >= 0) {
                if (GAME_PAUSED != 0)
                    g->glint_timer[k] = g->glint_timer[k] + 1;
                g->glint_timer[k] = g->glint_timer[k] - 1;
                if (g->glint_timer[k] == 0) {
                    g->glint_frame[k] = (g->glint_frame[k] + 1) % 5;
                    g->glint_timer[k] = g->glint_frame[k] == 0 ? -1 : 4;
                }
            }
            if (g->glint_frame[k] == 0) {
                s.rot = 0;
                ui_sprite_queue_add(&s, g_res_cockpit, 2, 0, i, 0);
            } else {
                s.rot = 0xC000;
                ui_sprite_queue_add(&s, g_res_cockpit, 7, g->glint_frame[k] - 1, i, 0);
            }
            ui_sprite_queue_add(&t, g_res_cockpit, 3, 3, i, 0);
            s.x = s.x + step;
            t.x = t.x + step_t;
        }
        s.x = 556.0f;
        t.x = 556.5f;
        t.alpha = g_hud_state.layout[5] * 1.0f;
        s.alpha = t.alpha;
        step = -step;
        step_t = -step_t;
    }

    /* the shards (the first bar's only after the KO) */
    s.z = 7.5f;
    s.alpha = 1.0f;
    for (i = 0; i < 2; i++) {
        off = (short)(i * 240);
        for (k = 0; k < 5; k++) {
            sh = (HudShard *)((char *)g_hud_state.shard + off + (unsigned char)(k * 48));
            if (sh->on != 0 && (k != 0 || FIGHTER(i)->hp < 0)) {
                s.x = sh->x;
                s.y = g_hud_state.layout[0] + sh->y;
                s.rot = sh->rot;
                s.scale_y = sh->scale * 1.0f;
                s.scale_x = s.scale_y;
                s.layer = sh->layer;
                ui_sprite_queue_add(&s, g_res_cockpit, 2, 0, i, 0);
            }
        }
    }

    /* the gauges' ends: the face frames and the caps, the right ones mirrored */
    s.x = 0.0f;
    s.y = g_hud_state.layout[0] + 75.0f;
    s.z = 7.39999962f;
    s.layer = 5;
    s.rot = 0;
    s.alpha = 1.0f;
    s.scale_x = 1.0f;
    s.scale_y = 1.0f;
    ui_sprite_queue_add(&s, g_res_cockpit, 2, 1, 0, 0);
    s.x = 552.0f;
    ui_sprite_queue_add(&s, g_res_cockpit, 2, 1, 1, 0);
    s.x = 88.0f;
    s.z = 7.69999981f;
    s.scale_x = 1.0f;
    s.scale_y = 1.0f;
    ui_sprite_queue_add(&s, g_res_cockpit, 2, 2, 0, 0);
    s.x = 416.0f;
    ui_sprite_queue_add(&s, g_res_cockpit, 2, 2, 1, 0);
}
