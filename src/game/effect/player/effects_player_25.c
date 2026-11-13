/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bdf9c-0c0be25c) */

typedef struct { int x, y, z; } Vec12;
extern char *obj_create(int, int, int, int);
extern char g_players[];
extern char g_spr_bank_player_fx[];
extern void thunk_math_mat_get_translate(char *, char *);
extern void FUN_0c06233a(char *, char *, int);
extern int pl_motion_length(char *);
extern void fx_update_garuda_debris(void);

void fx_spawn_garuda_debris(char *owner, char mode)
{
    char *debris, *child, *pl_base;
    float zero;

    debris = obj_create(1, 1, 1, 0);
    if (debris == 0) {
        return;
    }
    zero = 0.0f;
    debris[0] = 1;
    debris[3] = owner[3];
    debris[1] = 1;
    *(void (**)(void))(debris + 16) = fx_update_garuda_debris;
    *(short *)(debris + 6) = 31;
    debris[5] = 25;
    *(Vec12 *)(debris + 32) = *(Vec12 *)(owner + 32);
    *(Vec12 *)(debris + 44) = *(Vec12 *)(owner + 44);
    *(float *)(debris + 64) = zero;
    *(float *)(debris + 60) = zero;
    *(float *)(debris + 56) = zero;
    *(float *)(debris + 88) = 1.0f;
    *(float *)(debris + 84) = 1.0f;
    *(float *)(debris + 80) = 1.0f;
    child = *(char **)(debris + 0x2E0);
    child[0] = 1;
    child = *(char **)(debris + 0x2E0);
    *(short *)(child + 2) = 1055;
    FUN_0c06233a(*(char **)(debris + 0x2E0), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 2);
    pl_base = g_players + (unsigned short)((unsigned short)owner[3] * 0x72D0);
    if (mode == 0) {
        thunk_math_mat_get_translate(pl_base + 0x300 + (short)(pl_base[0x71F1] * 3520) + 1408, debris + 32);
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 36) = 0.699999988f;
        *(float *)(child + 32) = 0.699999988f;
        *(float *)(child + 28) = 0.699999988f;
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 144) = (int)(owner + 0x300 + (short)(owner[0x71F1] * 3520) + 1408);
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 16) = *(int *)(child + 16) + 0x4000;
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 4) = *(float *)(child + 4) - 10.0f;
    } else if (mode == 1) {
        thunk_math_mat_get_translate(pl_base + 0x300 + (short)(pl_base[0x71F1] * 3520) + 2112, debris + 32);
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 36) = zero;
        *(float *)(child + 32) = zero;
        *(float *)(child + 28) = zero;
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 144) = (int)(owner + 0x300 + (short)(owner[0x71F1] * 3520) + 2112);
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 16) = *(int *)(child + 16) + 0x4000;
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 4) = *(float *)(child + 4) + zero;
    } else if (mode == 2) {
        thunk_math_mat_get_translate(pl_base + 0x300 + (short)(pl_base[0x71F1] * 3520) + 176, debris + 32);
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 36) = zero;
        *(float *)(child + 32) = zero;
        *(float *)(child + 28) = zero;
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 144) = (int)(owner + 0x300 + (short)(owner[0x71F1] * 3520) + 352);
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 16) = *(int *)(child + 16) - 0x4000;
        child = *(char **)(debris + 0x2E0);
        *(int *)(child + 20) = *(int *)(child + 20) + 0x4000;
        child = *(char **)(debris + 0x2E0);
        *(float *)(child + 12) = *(float *)(child + 12) + 20.0f;
    }
    child = *(char **)(debris + 0x2E0);
    *(float *)(child + 64) = zero;
    debris[9] = mode;
    *(char **)(debris + 28) = owner;
    debris[8] = 0;
    *(short *)(debris + 236) = pl_motion_length(owner) - 10;
    *(short *)(debris + 238) = 0;
}
