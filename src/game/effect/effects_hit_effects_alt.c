/* hit effect spawners (04B6B8..04BEF2) and kind dispatchers (0c04b6b8-0c04bfd0) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct V3 { int x, y, z; };
struct Sub {
    char field_00;
    char pad_01;
    short field_02;
    char pad_04[28 - 4];
    float scale_x, scale_y, scale_z, offset_x, offset_y, offset_z;
    char pad_34[68 - 52];
    float field_44, field_48, field_4c;
};
struct Task {
    char live;
    char flag1;
    char pad_01;
    char char_id;
    char flag4;
    char field_05;
    short field_06;
    char state;
    char pad_04[7];
    void (*handler)(void);
    char pad_34[32 - 20];
    struct V3 pos;
    struct V3 pos2;
    char pad3[236 - 56];
    short field_ec;
    char pad4[280 - 238];
    int field_118;
    char pad5[736 - 284];
    struct Sub *sub[8];
};
struct Task *obj_create(int arg_a, int arg_b, int arg_c, int arg_d);
void FUN_0c06233a(struct Sub *dst, int tbl, int n);
float math_rand_float(void);
struct Vec3i { int x, y, z; };
struct Sub_r2 {
    char b0;
    char pad0;
    short s2;
    char pad1[12];
    int w16, w20, w24;
    float f28, f32, f36;
    char pad2[68 - 40];
    float f68, f72, f76;
};
struct Task_r3 {
    char live;
    char b1;
    char pad0;
    char b3;
    char b4;
    char b5;
    short s6;
    char b8;
    char pad1[7];
    void (*handler)(void);
    char pad2[28 - 20];
    char *parent;
    struct Vec3i pos;
    char pad3[236 - 44];
    short s236;
    char pad4[280 - 238];
    int w280;
    char pad5[736 - 284];
    struct Sub_r2 *sub[8];
};
void fx_tick_04baa6(void);
int math_rand_next(void);

void fx_spawn_random_offset_task(char *parent, int unused, struct V3 *pos, struct V3 *pos2, char wide)
{
    struct Task *task;
    struct Sub *sub_obj;
    int i;
    if (parent == 0 && (pos == 0 || pos2 == 0))
        return;
    task = obj_create(5, 1, 8, 0);
    if (task == 0)
        return;
    task->live = 1;
    task->flag1 = 1;
    task->state = 0;
    task->field_ec = 0;
    task->flag4 = 0;
    task->field_06 = 5;
    task->field_05 = 25;
    task->handler = (void (*)(void))0xC04BA14;   /* unlisted function at 0c04ba14 */
    task->field_118 = 0;
    if (parent != 0) {
        task->char_id = parent[3];
        task->pos = *(struct V3 *)(parent + 268);
        task->pos2 = *(struct V3 *)(parent + 44);
    } else {
        task->char_id = 2;
        task->pos = *pos;
        task->pos2 = *pos2;
    }
    for (i = 0; i < 8; i++) {
        sub_obj = task->sub[i];
        FUN_0c06233a(sub_obj, ((int)g_res_kyoutsuu), 25);
        sub_obj->field_00 = 1;
        sub_obj->field_02 = 561;
        sub_obj->scale_x = 0.299999982f;
        sub_obj->scale_y = 0.299999982f;
        sub_obj->scale_z = 0.299999982f;
        sub_obj->field_44 = 1.0f;
        sub_obj->field_48 = 1.0f;
        sub_obj->field_4c = 1.0f;
        if (wide == 0) {
            sub_obj->offset_x = -10.0f + 20.0f * math_rand_float();
            sub_obj->offset_y = math_rand_float() * 10.0f;
            sub_obj->offset_z = -(math_rand_float() * 10.0f);
        } else {
            sub_obj->offset_x = -20.0f + 40.0f * math_rand_float();
            sub_obj->offset_y = math_rand_float() * 20.0f;
            sub_obj->offset_z = -(math_rand_float() * 20.0f);
        }
    }
}

void fx_spawn_04baa6(char *parent, int unused, struct Vec3i *pos, int kind)
{
    struct Task_r3 *task;
    struct Sub_r2 *sub_obj;
    int i;
    if (parent == 0 && (pos == 0 || kind == 0))
        return;
    task = obj_create(5, 1, 8, 0);
    if (task == 0)
        return;
    task->live = 1;
    task->b1 = 1;
    task->b8 = 0;
    task->s236 = 0;
    task->b4 = 0;
    task->s6 = 1;
    task->b5 = 25;
    task->handler = fx_tick_04baa6;
    task->w280 = 0;
    task->parent = parent;
    if (parent != 0) {
        task->b3 = parent[3];
        task->pos = *(struct Vec3i *)(parent + 268);
    } else {
        task->b3 = 2;
        task->pos = *pos;
    }
    for (i = 0; i < 8; i++) {
        sub_obj = task->sub[i];
        FUN_0c06233a(sub_obj, ((int)g_res_kyoutsuu), 26);
        sub_obj->b0 = 1;
        sub_obj->s2 = 0x21E;
        sub_obj->w16 = math_rand_next() % 0x10000;
        sub_obj->w20 = math_rand_next() % 0x10000;
        sub_obj->w24 = math_rand_next() % 0x10000;
        sub_obj->f28 = 0.199999988f;
        sub_obj->f32 = 0.199999988f;
        sub_obj->f36 = 0.199999988f;
        sub_obj->f68 = 1.0f;
        sub_obj->f72 = 1.0f;
        sub_obj->f76 = 1.0f;
    }
}
