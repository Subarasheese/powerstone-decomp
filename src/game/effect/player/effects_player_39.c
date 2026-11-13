/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c10f0-0c0c1360) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int obj_set_record_char(int, int);
int math_atan2_angle16(float, float);
int math_vec3_accumulate(int, int);
int FUN_0c0e24f0(int);
int thunk_math_mat_get_translate(int, int);
extern float _builtin_sqrtf(float);
struct Obj {
    char p0[8];
    signed char state;      /* 0x08 */
    char p9[0x1C - 9];
    char *owner;            /* 0x1C */
    float pos[3];           /* 0x20 */
    int ang0;               /* 0x2C */
    int ang1;               /* 0x30 */
    char p34[4];
    float dir[3];             /* 0x38 */
    char p44[0xEC - 0x44];
    short age;              /* 0xEC */
    short step;             /* 0xEE */
    char pF0[0x2E0 - 0xF0];
    int *link;              /* 0x2E0 */
};

int fx23_outside_arena_bounds(int a4);

int fx23_outside_arena_bounds(int a4)
{
    register float u0;

    if ((*(signed char *)0xC7F3051) == 10) {
        u0 = (((struct o20_float *)(a4))->v);
        if (!(-1600.0f > u0)) {
            if (!(u0 > 1600.0f)) {
                if (!(-100.0f > ((((struct o24_float *)(a4))->v)))) {
                    if (!(((((struct o24_float *)(a4))->v)) > 1000.0f)) {
                        if (!(-1600.0f > ((((struct o28_float *)(a4))->v)))) {
                            if (((((struct o28_float *)(a4))->v)) > 1600.0f) {
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    u0 = (((struct o20_float *)(a4))->v);
    if (!(-950.0f > u0)) {
        if (!(u0 > 950.0f)) {
            if (!(-100.0f > ((((struct o24_float *)(a4))->v)))) {
                if (!(((((struct o24_float *)(a4))->v)) > 2000.0f)) {
                    if (!(-950.0f > ((((struct o28_float *)(a4))->v)))) {
                        if (((((struct o28_float *)(a4))->v)) > 950.0f) {
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

void fx_update_23(struct Obj *obj)
{
    float tgt[3];
    unsigned char *owner_base;
    int owner_idx;

    if (FUN_0c0555dc() != 0 || obj->state != 0) {
        obj_destroy((int)obj);
        return;
    }
    if ((signed char)fx23_outside_arena_bounds((int)obj) != 0) {
        if (obj->owner[9] == 3) {
            obj->state = obj->state + 1;
            return;
        }
        obj->step = obj->step + 1;
        if (obj->step > 3) {
            obj->state = obj->state + 1;
            return;
        }
        owner_idx = ((struct Obj *)*(char **)(obj->owner + 0x1C))->p0[3];
        owner_base = (unsigned char *)(0xC7E40C4 + (unsigned short)((unsigned short)owner_idx * 0x72D0));
        thunk_math_mat_get_translate((int)(owner_base + 0x300 + (short)((short)(signed char)owner_base[0x71F1] * (short)0xDC0)), (int)tgt);
        obj->dir[0] = tgt[0] - obj->pos[0];
        obj->dir[1] = tgt[1] - obj->pos[1];
        obj->dir[2] = tgt[2] - obj->pos[2];
        FUN_0c0e24f0((int)obj->dir);
        if (obj->dir[2] == 0.0f) {
            obj->dir[2] = 9.99999975e-06f;
        }
        obj->ang0 = math_atan2_angle16(-obj->dir[1], _builtin_sqrtf(obj->dir[2] * obj->dir[2] + obj->dir[0] * obj->dir[0]));
        obj->ang1 = math_atan2_angle16(obj->dir[0], obj->dir[2]);
        obj->dir[0] = obj->dir[0] * 40.0f;
        obj->dir[1] = obj->dir[1] * 40.0f;
        obj->dir[2] = obj->dir[2] * 40.0f;
    }
    if (*(volatile unsigned *)0xC7F307C % 30 == 0) {
        obj_set_record_char((int)obj, 0x72);
    }
    obj->age = obj->age + 1;
    if (obj->age >= 180) {
        obj->state = obj->state + 1;
    }
    math_vec3_accumulate((int)obj->pos, (int)obj->dir);
    obj->link[4] = obj->link[4] + 0x1555;
}
