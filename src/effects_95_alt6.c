/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

typedef struct { float x, y, z; } vec3;
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern char *fx_spawn_burst_slot(int, int, int, vec3 *, int, int);

void fx_spawn_spark_rings(char player_idx, vec3 *src, float lift, float scale)
{
    vec3 pos[8];
    float *ring_tbl = (float *)0x0C14A090;
    float lift_y, tmp_a, tmp_b, tmp_c;
    int angle, spark, round;
    char *spark_obj;

    angle = *(int *)(0x0C7E40F4 + (unsigned short)(player_idx * 29392)) + 0x4000;
    lift_y = lift * 16.0f;
    for (round = 2; round != 0; round--) {
        for (spark = 0; spark < 8; spark++) {
            pos[spark] = *src;
            tmp_a = math_sin_angle16(angle) * ring_tbl[1] * scale;
            tmp_b = math_cos_angle16(angle) * ring_tbl[0];
            tmp_a = tmp_a - tmp_b * scale;
            pos[spark].x = pos[spark].x + tmp_a;
            tmp_b = math_cos_angle16(angle) * ring_tbl[1];
            tmp_c = math_sin_angle16(angle) * ring_tbl[0] * scale;
            tmp_c = tmp_c + scale * tmp_b;
            pos[spark].z = pos[spark].z + tmp_c;
            pos[spark].y = pos[spark].y + lift_y;
            ring_tbl += 2;
        }
        spark_obj = fx_spawn_burst_slot(player_idx, 8, 0, pos, 0x0C149EB4, 0x0C14A110);
        if (spark_obj)
            *(float *)(spark_obj + 0x308 + 16) = lift;
    }
}
