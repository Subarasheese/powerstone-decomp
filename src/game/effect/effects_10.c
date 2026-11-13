/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0342a0-0c034530) */

typedef struct { int x, y, z; } vec3_int;
extern char *obj_create(int, int, int, int);
extern float math_rand_float(void);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern void FUN_0c06233a(char *, char *, int);
extern char g_spr_bank_player_fx[];
extern void fx_tick_0342a0(void);

void fx_spawn_0342a0(char *obj)
{
    char *slot, *child;
    int i, angle;
    float sin_val, cos_val, rand_val;

    slot = obj_create(5, 1, 1, 0);
    if (slot == 0) {
        return;
    }
    slot[0] = 1;
    slot[3] = obj[3];
    slot[1] = 1;
    *(short *)(slot + 6) = 15;
    *(char **)(slot + 28) = obj;
    slot[5] = (obj[3] != 0) ? 4 : 2;
    *(void (**)(void))(slot + 16) = fx_tick_0342a0;
    *(vec3_int *)(slot + 44) = *(vec3_int *)(obj + 44);
    *(vec3_int *)(slot + 32) = *(vec3_int *)(obj + 32);
    rand_val = (float)((unsigned int)(math_rand_float() * 255.0f) % 20);
    *(float *)(slot + 36) = *(float *)(slot + 36) + (50.0f + 20.0f * rand_val);
    angle = ((unsigned int)(math_rand_float() * 255.0f) % 16) << 12;
    sin_val = math_sin_angle16(angle);
    cos_val = math_cos_angle16(angle);
    *(float *)(slot + 32) = *(float *)(slot + 32) + 150.0f * sin_val;
    *(float *)(slot + 40) = *(float *)(slot + 40) + 150.0f * cos_val;
    *(float *)(slot + 60) = -2.0f;
    angle = ((unsigned int)(math_rand_float() * 255.0f) % 16) << 10;
    sin_val = math_sin_angle16(angle);
    cos_val = math_cos_angle16(angle);
    *(float *)(slot + 56) = -(sin_val * 2.0f);
    *(float *)(slot + 64) = -(cos_val * 2.0f);
    for (i = 0; i < *(signed char *)(slot + 0x2DC); i++) {
        child = *(char **)(slot + 0x2E0 + i * 4);
        child[0] = 1;
        *(short *)(child + 2) = 15;
        FUN_0c06233a(child, g_spr_bank_player_fx + (signed char)(obj[3] * 24), *(int *)0xC149650);
    }
}
