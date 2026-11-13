/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bd078-0c0bd4fc) */

struct vec3i { int a, b, c; };
struct part {
    char active;
    char pad_00;
    short model_id;
    char pad_01[16 - 4];
    int ang_16, ang_20, ang_24;
    float scale_x, scale_y, scale_z, vel_x, vel_y, vel_z;
    char pad_02[64 - 52];
    float field_64;
};
struct burst_task {
    char live;
    char field_01;
    char pad_00;
    char owner_slot;
    char field_04;
    char field_05;
    short field_06;
    char pad_01[16 - 8];
    void (*handler)(void);
    char pad_02[28 - 20];
    char *parent;
    struct vec3i pos_vec;
    struct vec3i vec_44;
    float field_56, field_60, field_64;
    char pad_04[80 - 68];
    float field_80, field_84, field_88, field_92;
    char pad_05[236 - 96];
    short counter;
    char pad_06[736 - 238];
    struct part *sub[10];
};
struct burst_task *obj_create(int a, int b, int c, int d);
void fx_update_burst_sprites(void);
void FUN_0c06233a(struct part *part_ref, int tbl, int n);
float math_rand_float(void);
float math_cos_angle16(int a);
float math_sin_angle16(int a);
#define RAND_MOD(n) ((unsigned int)(math_rand_float() * 255.0f) % (n))

void fx_spawn_random_burst_sprites(char *parent)
{
    struct burst_task *task;
    struct part *part_ref;
    int idx;
    task = obj_create(1, 1, 10, 0);
    if (task == 0)
        return;
    task->live = 1;
    task->owner_slot = parent[3];
    task->field_01 = 1;
    task->field_06 = 1055;
    task->field_05 = 25;
    task->handler = fx_update_burst_sprites;
    task->pos_vec = *(struct vec3i *)(parent + 32);
    task->vec_44 = *(struct vec3i *)(parent + 44);
    task->field_64 = 0.0f;
    task->field_60 = 0.0f;
    task->field_56 = 0.0f;
    task->field_88 = 1.0f;
    task->field_84 = 1.0f;
    task->field_80 = 1.0f;
    task->field_92 = 1.0f;
    task->parent = parent;
    task->counter = 8;
    for (idx = 0; idx < 10; idx++) {
        FUN_0c06233a(task->sub[idx], 0xC6002D0 + (signed char)(parent[3] * 24), 2);
        task->sub[idx]->active = 1;
        task->sub[idx]->model_id = 1055;
        task->sub[idx]->field_64 = 1.0f;
        task->sub[idx]->scale_z = task->sub[idx]->scale_y = task->sub[idx]->scale_x = *(float *)(0xC33C498 + RAND_MOD(8u) * 4) + 3.0f;
        task->sub[idx]->ang_16 = task->sub[idx]->ang_16 + (int)((float)RAND_MOD(360u) * 65536.0f / 360.0f);
        task->sub[idx]->ang_20 = task->sub[idx]->ang_20 + (int)((float)RAND_MOD(360u) * 65536.0f / 360.0f);
        task->sub[idx]->ang_24 = task->sub[idx]->ang_24 + (int)((float)RAND_MOD(360u) * 65536.0f / 360.0f);
        task->sub[idx]->ang_16 = task->sub[idx]->ang_16 & 0xFFFF;
        task->sub[idx]->ang_20 = task->sub[idx]->ang_20 & 0xFFFF;
        task->sub[idx]->ang_24 = task->sub[idx]->ang_24 & 0xFFFF;
        part_ref = task->sub[idx];
        part_ref->vel_x = math_cos_angle16(0x14000 - part_ref->ang_20) * math_sin_angle16(0x14000 - part_ref->ang_16) * 50.0f;
        part_ref->vel_z = math_sin_angle16(0x14000 - part_ref->ang_20) * math_sin_angle16(0x14000 - part_ref->ang_16) * 50.0f;
        part_ref->vel_y = -(math_cos_angle16(0x14000 - part_ref->ang_16) * 50.0f);
    }
}
