/* same module: burst sprite placement and state machine (0c0c7c2c-0c0c82b8) */

int FUN_0c0555dc(void);
int obj_destroy(int);
int fx_burst_place_sprites(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
struct Vec3 { float x, y, z; };
struct ChildRec {
    char pad_00[0x10];
    int ang0;               /* 0x10 */
    int ang1;               /* 0x14 */
    char pad_18[0x44 - 0x18];
    float scale_x, scale_y, scale_z;       /* 0x44 */
};
struct BurstObj {
    char pad_00[8];
    signed char state;      /* 0x08 */
    char phase;                /* 0x09 */
    char pad_0a[0x20 - 0xA];
    struct Vec3 pos;          /* 0x20 */
    struct Vec3 aux;          /* 0x2C */
    char pad_38[0xEC - 0x38];
    short timer;                /* 0xEC */
    short field_ee;               /* 0xEE */
    short field_f0;               /* 0xF0 */
    short field_f2;               /* 0xF2 */
    char pad_f4[0x105 - 0xF4];
    char flag_105;
    char pad_106[0x2E0 - 0x106];
    struct ChildRec *child0;       /* 0x2E0 */
    struct ChildRec *child1;       /* 0x2E4 */
};

void fx_burst_update(struct BurstObj *obj)
{
    struct Vec3 spawn_pos;
    float deg, radius;
    int angle;

    if (FUN_0c0555dc() != 0) {
        obj->state = 3;
    }
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        spawn_pos = obj->pos;
        spawn_pos.x = spawn_pos.x + 500.0f * math_sin_angle16(*(int *)((char *)obj + 0x30));
        spawn_pos.z = spawn_pos.z + 500.0f * math_cos_angle16(*(int *)((char *)obj + 0x30));
        spawn_pos.y = spawn_pos.y + 10.0f * (float)((unsigned)(math_rand_float() * 255.0f) % 30);
        if (obj->field_f2 != 0) {
            spawn_pos.y = spawn_pos.y - 150.0f;
        }
        deg = (float)((unsigned)(math_rand_float() * 255.0f) % 32);
        angle = (int)(deg * 134217728.0f / 360.0f);
        radius = -300.0f + 100.0f * (float)((unsigned)(math_rand_float() * 255.0f) % 6);
        spawn_pos.x = spawn_pos.x + radius * math_sin_angle16(angle);
        spawn_pos.z = spawn_pos.z + radius * math_cos_angle16(angle);
        obj->pos = spawn_pos;
        obj->aux = *(struct Vec3 *)0xC153288;
        obj->child0->ang0 = (int)((float)((unsigned)(math_rand_float() * 255.0f) % 61) * 65536.0f / 360.0f) - 5461;
        obj->child0->ang1 = (int)((float)((unsigned)(math_rand_float() * 255.0f) % 61) * 65536.0f / 360.0f) - 5461;
        obj->child1->ang0 = obj->child0->ang0;
        obj->timer = 20;
        obj->field_ee = 1;
        obj->field_f0 = 8;
        obj->phase = 0;
        obj->flag_105 = 0;
        fx_burst_place_sprites((int)obj);
        obj->timer = obj->timer - 1;
        if (obj->timer == 0) {
            obj->state = obj->state + 1;
            obj->timer = 6;
        }
        break;
    case 1:
        fx_burst_place_sprites((int)obj);
        obj->timer = obj->timer - 1;
        if (obj->timer == 0) {
            obj->state = obj->state + 1;
            obj->timer = 6;
        }
        break;
    case 2:
        fx_burst_place_sprites((int)obj);
        obj->child0->scale_x = obj->child0->scale_x * 0.799999952f;
        obj->child0->scale_y = obj->child0->scale_y * 0.799999952f;
        obj->child0->scale_z = obj->child0->scale_z * 0.799999952f;
        obj->child1->scale_x = obj->child1->scale_x * 0.799999952f;
        obj->child1->scale_y = obj->child1->scale_y * 0.799999952f;
        obj->child1->scale_z = obj->child1->scale_z * 0.799999952f;
        obj->timer = obj->timer - 1;
        if (obj->timer == 0) {
            obj->state = obj->state + 1;
            obj->flag_105 = 1;
        }
        break;
    case 3:
        obj_destroy((int)obj);
        break;
    }
}
