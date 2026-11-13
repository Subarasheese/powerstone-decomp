/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0375d4-0c037848) */

extern char *obj_create(int, int, int, int);
extern char g_spr_bank_player_fx[];
extern void FUN_0c06233a(char *, char *, int);
extern float math_rand_float(void);
extern void fx_tick_0375d4(void);

void fx_spawn_0375d4(char *owner)
{
    char *slot, *child;
    int *angle_ptr;

    slot = obj_create(5, 1, 1, 0);
    if (slot == 0) {
        return;
    }
    slot[0] = 1;
    slot[1] = 1;
    slot[3] = owner[3];
    *(void (**)(void))(slot + 16) = fx_tick_0375d4;
    *(short *)(slot + 6) = 15;
    slot[5] = 25;
    *(char **)(slot + 28) = owner;
    *(float *)(slot + 32) = *(float *)(owner + 32);
    *(float *)(slot + 36) = *(float *)(owner + 36);
    *(float *)(slot + 40) = *(float *)(owner + 40);
    *(int *)(slot + 44) = *(int *)(owner + 44);
    *(int *)(slot + 48) = *(int *)(owner + 48);
    *(int *)(slot + 52) = *(int *)(owner + 52);
    *(float *)(slot + 56) = 0.0f;
    *(float *)(slot + 60) = 0.0f;
    *(float *)(slot + 64) = 0.0f;
    FUN_0c06233a(*(char **)(slot + 0x2E0), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 18);
    child = *(char **)(slot + 0x2E0);
    child[0] = 1;
    child = *(char **)(slot + 0x2E0);
    *(short *)(child + 2) = 1055;
    child = *(char **)(slot + 0x2E0);
    *(float *)(child + 28) = 0.0f;
    child = *(char **)(slot + 0x2E0);
    *(float *)(child + 32) = 0.0f;
    child = *(char **)(slot + 0x2E0);
    *(float *)(child + 36) = 0.0f;
    angle_ptr = (int *)(*(char **)(slot + 0x2E0) + 16);
    *angle_ptr = (int)((float)((unsigned int)(math_rand_float() * 255.0f) % 360) * 65536.0f / 360.0f);
    angle_ptr = (int *)(*(char **)(slot + 0x2E0) + 20);
    *angle_ptr = (int)((float)((unsigned int)(math_rand_float() * 255.0f) % 360) * 65536.0f / 360.0f);
    angle_ptr = (int *)(*(char **)(slot + 0x2E0) + 24);
    *angle_ptr = (int)((float)((unsigned int)(math_rand_float() * 255.0f) % 360) * 65536.0f / 360.0f);
    *(float *)(*(char **)(slot + 0x2E0) + 64) = 1.0f;
}
