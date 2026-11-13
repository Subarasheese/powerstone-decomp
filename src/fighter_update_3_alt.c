/* input snapshot, round-level update of the two fighters, per-player update (part 3 of 4 of the same module) (0c092908-0c093254) */

float math_signed_sqrt(float x);
float FUN_0c020a80(char *pl, float y);
void FUN_0c09c80e(char *pl);
void cam_publish_active_position(int side);
void ai_draw_debug_info(char *pl);
void ai_update_slot(char *pl);
void keycfg_remap_player_buttons(int side);
void pl_vib_update(char *pl);
void FUN_0c026ce0(char *pl);
void FUN_0c0276c4(char *pl);
void FUN_0c092a58(void);
void FUN_0c092ace(int side);
typedef struct { int w[9]; } PAD36;
#define P0 ((char *)0xC7E40C4)
#define P1 ((char *)(0xC7E40C4 + 0x72D0))
#define B(o, n) (*(signed char *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define OLD ((float *)0x0C439E80)
#define MODE (*(signed char *)0x0C7F3050)
#define HOLDING(p) (B(p, 8) == 1 && B(p, 9) == 3)
#define I(o, n) (*(int *)((o) + (n)))

static void clear_input(char *p)
{
    I(p, 0x2E8) = 0;
    I(p, 0x2E4) = 0;
    I(p, 0x2E0) = 0;
    I(p, 0x2DC) = 0;
}

static void mask_input(char *p, int m)
{
    I(p, 0x2DC) = I(p, 0x2DC) & m;
    I(p, 0x2E0) = I(p, 0x2E0) & m;
    I(p, 0x2E4) = I(p, 0x2E4) & m;
    I(p, 0x2E8) = I(p, 0x2E8) & m;
}

#define INPUT(p, pad, side) \
    mode = MODE; \
    switch (mode) { \
    case 0: \
        clear_input(p); \
        break; \
    case 1: \
    case 2: \
        if (B(p, 0x71ED) != 0) { \
            if (B(p, 4) == 10) \
                ai_update_slot(p); \
            else \
                ai_draw_debug_info(p); \
        } else { \
            *(PAD36 *)((p) + 0x2DC) = *(PAD36 *)(pad); \
            keycfg_remap_player_buttons(side); \
        } \
        if (mode == 1) { \
            if (B(p, 4) != 10) \
                mask_input(p, 0xF4); \
            else \
                mask_input(p, 0xF0); \
        } \
        break; \
    } \
    if (B(p, 0x7241) != 0) \
        clear_input(p)

void game_update_fighters(void)
{
    struct { float pad; float dz; float dx; } s;
    signed char mode;

    s.dx = F(P0, 0x20) - F(P1, 0x20);
    s.dz = F(P0, 0x28) - F(P1, 0x28);
    *(float *)0x0C494D1C = math_signed_sqrt(s.dz * s.dz + s.dx * s.dx);
    F(P0, 0x722C) = FUN_0c020a80(P0, 0.0f);
    F(P1, 0x722C) = FUN_0c020a80(P1, 0.0f);
    B(P0, 0x71F2) = B(P0, 0x71F1);
    B(P1, 0x71F2) = B(P1, 0x71F1);
    FUN_0c09c80e(P0);
    FUN_0c09c80e(P1);
    cam_publish_active_position(0);
    INPUT(P0, 0x0C7F31F0, 0);
    pl_vib_update(P0);
    FUN_0c026ce0(P0);
    FUN_0c0276c4(P0);
    cam_publish_active_position(1);
    INPUT(P1, 0x0C7F3214, 1);
    pl_vib_update(P1);
    FUN_0c026ce0(P1);
    FUN_0c0276c4(P1);
    if (B(P0, 0x7207) != 0 || B(P1, 0x7207) != 0)
        FUN_0c092a58();
    if (HOLDING(P0)) {
        F(P1, 0x20) = F(P1, 0x20) + (F(P0, 0x20) - OLD[0]);
        F(P1, 0x28) = F(P1, 0x28) + (F(P0, 0x28) - OLD[1]);
        FUN_0c092ace(1);
        FUN_0c092ace(0);
    } else if (HOLDING(P1)) {
        F(P0, 0x20) = F(P0, 0x20) + (F(P1, 0x20) - OLD[2]);
        F(P0, 0x28) = F(P0, 0x28) + (F(P1, 0x28) - OLD[3]);
        FUN_0c092ace(0);
        FUN_0c092ace(1);
    } else if (*(int *)0x0C7F307C & 1) {
        FUN_0c092ace(0);
        if (!HOLDING(P1))
            FUN_0c092ace(1);
    } else {
        FUN_0c092ace(1);
        if (!HOLDING(P0))
            FUN_0c092ace(0);
    }
    if (F(P0, 0x274) > 0.0f)
        F(P0, 0x24) = F(P0, 0x24) - 3.0f;
    if (F(P1, 0x274) > 0.0f)
        F(P1, 0x24) = F(P1, 0x24) - 3.0f;
    OLD[0] = F(P0, 0x20);
    OLD[1] = F(P0, 0x28);
    OLD[2] = F(P1, 0x20);
    OLD[3] = F(P1, 0x28);
}
