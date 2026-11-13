/* same module: helpers and update state machine (0c0c8460-0c0c8acc) */

int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c06231c(int, int, int);
int obj_set_record_char(int, int);
int FUN_0c0c8460(int);
int FUN_0c0c8580(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
struct vec3f { float x, y, z; };
struct child_sprite {
    char pad0[0x44];
    float scale_x, scale_y, scale_z;       /* 0x44 */
};
struct thrown_obj {
    char pad0[3];
    char kind;              /* 0x03 */
    char pad4[4];
    signed char state;      /* 0x08 */
    char pad9[0x20 - 9];
    struct vec3f pos;          /* 0x20 */
    char pad2c[4];
    int ang;                /* 0x30 */
    char pad34[0xEC - 0x34];
    short countdown;                /* 0xEC */
    short timer;            /* 0xEE */
    short field_f0;               /* 0xF0 */
    short field_f2;               /* 0xF2 */
    char padF4[0x101 - 0xF4];
    char byte_101;
    char byte_102;
    char pad103[0x2EC - 0x103];
    struct child_sprite *child;          /* 0x2EC */
    char **flag_a;           /* 0x2F0 */
    char **flag_b;           /* 0x2F4 */
};

void fx_thrown_object_update(struct thrown_obj *obj)
{
    struct vec3f target_pos;
    float radius, angle_deg;
    int ang;

    if (FUN_0c0555dc() != 0) {
        obj->state = 5;
    }
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        obj->byte_101 = 3;
        obj->byte_102 = 0;
        obj_set_record_char((int)obj, 0x7A);
        target_pos = obj->pos;
        target_pos.x = target_pos.x + 500.0f * math_sin_angle16(obj->ang);
        target_pos.z = target_pos.z + 500.0f * math_cos_angle16(obj->ang);
        target_pos.y = target_pos.y + 10.0f * (float)((unsigned)(math_rand_float() * 255.0f) % 30);
        if (obj->timer != 0) {
            target_pos.y = target_pos.y - 150.0f;
        }
        angle_deg = (float)((unsigned)(math_rand_float() * 255.0f) % 32);
        ang = (int)(angle_deg * 134217728.0f / 360.0f);
        radius = -500.0f + 100.0f * ((float)((unsigned)(math_rand_float() * 255.0f) % 10) + 1.0f);
        target_pos.x = target_pos.x + radius * math_sin_angle16(ang);
        target_pos.z = target_pos.z + radius * math_cos_angle16(ang);
        obj->pos = target_pos;
        obj->countdown = 10;
        obj->field_f0 = 0;
        obj->field_f2 = 1;
        break;
    case 1:
        FUN_0c0c8460((int)obj);
        FUN_0c0c8580((int)obj);
        obj->countdown = obj->countdown - 1;
        if (obj->countdown == 0) {
            obj->state = obj->state + 1;
        }
        break;
    case 2:
        if ((signed char)FUN_0c0c8580((int)obj) == 0) {
            obj->state = obj->state + 1;
            *(char *)obj->child = 1;
            obj->countdown = 2;
            obj->field_f2 = 0;
            *(char *)obj->flag_a = 0;
            *(char *)obj->flag_b = 0;
        }
        break;
    case 3:
        obj->countdown = obj->countdown - 1;
        if (obj->countdown == 0) {
            obj->countdown = 2;
            obj->field_f2 = obj->field_f2 + 1;
            if (obj->field_f2 == 5) {
                obj->state = obj->state + 1;
            }
            FUN_0c06231c((int)obj->child, (signed char)(obj->kind * 24) + 0xC6002D0, (signed char)obj->field_f2 + 12);
        }
        break;
    case 4:
        obj->child->scale_x = obj->child->scale_x - 0.166666657f;
        obj->child->scale_y = obj->child->scale_y - 0.166666657f;
        obj->child->scale_z = obj->child->scale_z - 0.166666657f;
        if (!(obj->child->scale_z > 0.0f)) {
            obj->state = obj->state + 1;
        }
        break;
    case 5:
        obj_destroy((int)obj);
        break;
    }
}
