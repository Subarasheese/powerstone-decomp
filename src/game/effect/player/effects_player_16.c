/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bc1ec-0c0bc690) */

typedef struct { int x, y, z; } vec3i;
extern char *obj_create(int, int, int, int);
extern char g_players[];
extern char g_spr_bank_player_fx[];
extern void thunk_math_mat_get_translate(char *, char *);
extern void obj_set_record_char(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern float math_signed_sqrt(float);
extern int math_atan2_angle16(float, float);
extern void fx_update_gunrock_spark(void);

void fx_spawn_gunrock_spark(char *owner, char mode)
{
    char *spark, *child, *target;
    float delta[3];
    float dx, dz;
    int dist;

    spark = obj_create(1, 1, 1, 0);
    if (spark == 0) {
        return;
    }
    spark[0] = 1;
    spark[3] = owner[3];
    spark[1] = 1;
    *(void (**)(void))(spark + 16) = fx_update_gunrock_spark;
    *(short *)(spark + 6) = 31;
    spark[5] = 25;
    *(vec3i *)(spark + 32) = *(vec3i *)(owner + 32);
    *(vec3i *)(spark + 44) = *(vec3i *)(owner + 44);
    *(float *)(spark + 64) = 0.0f;
    *(float *)(spark + 60) = 0.0f;
    *(float *)(spark + 56) = 0.0f;
    *(float *)(spark + 88) = 1.0f;
    *(float *)(spark + 84) = 1.0f;
    *(float *)(spark + 80) = 1.0f;
    target = g_players + (unsigned short)((unsigned short)owner[3] * 0x72D0);
    thunk_math_mat_get_translate(target + 0x300 + (short)(target[0x71F1] * 3520) + 1408, spark + 32);
    spark[0x101] = 1;
    spark[0x102] = 1;
    obj_set_record_char(spark, 113);
    child = *(char **)(spark + 0x2E0);
    child[0] = 1;
    child = *(char **)(spark + 0x2E0);
    *(short *)(child + 2) = 15;
    FUN_0c06233a(*(char **)(spark + 0x2E0), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 0);
    *(char **)(spark + 28) = owner;
    *(short *)(spark + 236) = 180;
    spark[8] = mode;
    spark[9] = 0;
    if (mode == 0) {
        *(int *)(spark + 44) = (unsigned short)(*(int *)(spark + 44) + 0xF8E4);
    } else if (mode == 1) {
        target = g_players + (unsigned short)((unsigned short)(1 - spark[3]) * 0x72D0);
        thunk_math_mat_get_translate(target + 0x300 + (short)(target[0x71F1] * 3520), (char *)delta);
        delta[1] = delta[1] - *(float *)(spark + 36);
        delta[0] = delta[0] - *(float *)(spark + 32);
        delta[2] = delta[2] - *(float *)(spark + 40);
        dx = delta[0];
        dz = delta[2];
        dist = (int)math_signed_sqrt(dz * dz + delta[0] * dx);
        *(int *)(spark + 44) = math_atan2_angle16((float)dist, delta[1]) - 0x4000;
    }
}
