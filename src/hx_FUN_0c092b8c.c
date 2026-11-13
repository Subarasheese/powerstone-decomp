/* Per-frame update of both fighters: their ground distance (g_494d1c), floor heights (+0x722C, FUN_0c020a80), body-part
   history (+0x71F2), and the controller input of each (+0x2DC: 36 bytes; mode g7f3050 0 = none, 1 = player pad masked
   to the allowed buttons, 2 = unmasked; the CPU (+0x71ED) thinks instead through FUN_0c04c24c, or FUN_0c08d5ce for
   character 10; +0x7241 locks the input) before their state machines run (FUN_0c09b998, FUN_0c026ce0, FUN_0c0276c4).
   A fighter holding the other in a throw (+8 == 1, +9 == 3) drags it along; collisions (FUN_0c092ace) are resolved in an
   order that alternates with the frame counter; airborne fighters (+0x274 > 0) fall by 3; the positions are kept at
   0x0C439E80 for the next frame. */
float FUN_0c0df340(float x);
float FUN_0c020a80(char *pl, float y);
void FUN_0c09c80e(char *pl);
void FUN_0c0d80d4(int side);
void FUN_0c04c24c(char *pl);
void FUN_0c08d5ce(char *pl);
void FUN_0c092908(int side);
void FUN_0c09b998(char *pl);
void FUN_0c026ce0(char *pl);
void FUN_0c0276c4(char *pl);
void FUN_0c092a58(void);
void FUN_0c092ace(int side);

typedef struct { int w[9]; } PAD36;

#define P0 ((char *)0xC7E40C4)
#define P1 ((char *)(0xC7E40C4 + 0x72D0))
#define B(o, n) (*(signed char *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define OLD ((float *)0x0C439E80)
#define MODE (*(signed char *)0x0C7F3050)
#define HOLDING(p) (B(p, 8) == 1 && B(p, 9) == 3)

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

/* the input step of one fighter (a macro: a helper ending in a call would leave it as a tail jump) */
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
                FUN_0c08d5ce(p); \
            else \
                FUN_0c04c24c(p); \
        } else { \
            *(PAD36 *)((p) + 0x2DC) = *(PAD36 *)(pad); \
            FUN_0c092908(side); \
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

void FUN_0c092b8c(void)
{
    struct { float pad; float dz; float dx; } s;
    signed char mode;

    s.dx = F(P0, 0x20) - F(P1, 0x20);
    s.dz = F(P0, 0x28) - F(P1, 0x28);
    *(float *)0x0C494D1C = FUN_0c0df340(s.dz * s.dz + s.dx * s.dx);
    F(P0, 0x722C) = FUN_0c020a80(P0, 0.0f);
    F(P1, 0x722C) = FUN_0c020a80(P1, 0.0f);
    B(P0, 0x71F2) = B(P0, 0x71F1);
    B(P1, 0x71F2) = B(P1, 0x71F1);
    FUN_0c09c80e(P0);
    FUN_0c09c80e(P1);
    FUN_0c0d80d4(0);
    INPUT(P0, 0x0C7F31F0, 0);
    FUN_0c09b998(P0);
    FUN_0c026ce0(P0);
    FUN_0c0276c4(P0);
    FUN_0c0d80d4(1);
    INPUT(P1, 0x0C7F3214, 1);
    FUN_0c09b998(P1);
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
