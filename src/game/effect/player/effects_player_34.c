/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bfecc-0c0c033c) */

struct vec3_int { int x, y, z; };
struct sub_obj {
    char active;
    char pad0;
    short field_2;
    char pad1[28 - 4];
    float field_28, field_32, field_36;
    char pad2[68 - 40];
    float field_68, field_72, field_76;
    char pad3[144 - 80];
    int field_144;
};
struct effect_task {
    char live;
    char field_1;
    char pad0;
    char player_index;
    char field_4;
    char field_5;
    short field_6;
    char pad2[16 - 8];
    void (*handler)(void);
    char pad3[28 - 20];
    char *parent;
    struct vec3_int pos;
    struct vec3_int vec_44;
    float vel_x, vel_y, vel_z;
    char pad5[80 - 68];
    float scale_x, scale_y, scale_z;
    char pad6[236 - 92];
    short counter_236;
    char pad7[736 - 238];
    struct sub_obj *sub[2];
};
struct effect_task *obj_create(int a, int b, int c, int d);
void FUN_0c0c00aa(void);
void thunk_math_mat_get_translate(char *m, struct vec3_int *v);
void FUN_0c06233a(struct sub_obj *s, int tbl, int n);

void FUN_0c0bfecc(char *obj, char kind)
{
    struct effect_task *task;
    char *player_base;
    task = obj_create(1, 1, 2, 0);
    if (task == 0)
        return;
    task->live = 1;
    task->player_index = obj[3];
    task->field_1 = 1;
    task->field_6 = 31;
    task->field_5 = 25;
    task->handler = FUN_0c0c00aa;
    task->pos = *(struct vec3_int *)(obj + 32);
    task->vec_44 = *(struct vec3_int *)(obj + 44);
    task->vel_z = 0.0f;
    task->vel_y = 0.0f;
    task->vel_x = 0.0f;
    task->scale_z = 1.0f;
    task->scale_y = 1.0f;
    task->scale_x = 1.0f;
    task->parent = obj;
    player_base = (char *)(0xC7E40C4 + (unsigned short)((unsigned char)obj[3] * 0x72D0));
    thunk_math_mat_get_translate(player_base + 768 + (short)(*(signed char *)(player_base + 0x71F1) * 3520), &task->pos);
    task->counter_236 = 0;
    FUN_0c06233a(task->sub[0], 0xC6002D0 + (signed char)(obj[3] * 24), 20);
    task->sub[0]->active = 1;
    task->sub[0]->field_2 = 543;
    task->sub[0]->field_144 = (int)obj + 768 + (short)(*(signed char *)(obj + 0x71F1) * 3520);
    task->sub[0]->field_36 = *(float *)(0xC33C630 + kind * 4);
    task->sub[0]->field_32 = *(float *)(0xC33C630 + kind * 4);
    task->sub[0]->field_28 = *(float *)(0xC33C630 + kind * 4);
    task->sub[0]->field_76 = 0.0f;
    task->sub[0]->field_72 = 0.0f;
    task->sub[0]->field_68 = 0.0f;
    FUN_0c06233a(task->sub[1], 0xC6002D0 + (signed char)(obj[3] * 24), 20);
    task->sub[1]->active = 1;
    task->sub[1]->field_2 = 543;
    task->sub[1]->field_144 = (int)obj + 768 + (short)(*(signed char *)(obj + 0x71F1) * 3520);
    task->sub[1]->field_28 = *(float *)(0xC33C638 + kind * 4);
    task->sub[1]->field_36 = *(float *)(0xC33C630 + kind * 4);
    task->sub[1]->field_32 = *(float *)(0xC33C630 + kind * 4);
    task->sub[1]->field_76 = 0.0f;
    task->sub[1]->field_72 = 0.0f;
    task->sub[1]->field_68 = 0.0f;
}
