/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c07bc-0c0c0c70) */

struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern float _builtin_sqrtf(float);
int FUN_0c026554(int);
int fx_spawn_039828(int, int);
int fx_spawn_03b1ec(int, int);
int FUN_0c0555dc(void);
int obj_destroy(int);
int math_vec3_accumulate(int, int);
struct Kid { char pad0[0x10]; int field_10; int pad; int field_18; };
struct Own { char pad0[0x1C]; struct Own *inner; };
struct Obj {
    char pad0[1];
    char flag1;                /* 0x01 */
    char pad2;
    char char_id;                /* 0x03 */
    char flag4;                /* 0x04 */
    char pad5[3];
    signed char state;      /* 0x08 */
    char pad9[0x1C - 9];
    char *owner;            /* 0x1C */
    float pos[3];           /* 0x20 */
    char pad2c[0x38 - 0x2C];
    float target[3];             /* 0x38 */
    char pad44[0xEC - 0x44];
    short age;              /* 0xEC */
    char padEE[0x105 - 0xEE];
    char flag105;
    char pad106[0x2E0 - 0x106];
    struct Kid *kid[2];     /* 0x2E0 */
};

float FUN_0c0c07bc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register int t9;
    register int t17;
    register float t25;
    register float u26;
    register float u27;
    register float u28;
    register float u32;

    *(float *)(((int)stk + 4)) = f4;
    *(unsigned int *)(((int)stk + 0)) = a7;
    (((struct o14_float *)(((int)stk + 0)))->v) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a6))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (u5 - u4);
    u6 = (((struct o14_float *)(((int)stk + 0)))->v);
    u7 = ((u5 - u4) * (u5 - u4));
    u7 = u7 + u6 * u6;
    t9 = math_atan2_angle16(a4, a5, a6, a7, ((((struct o4_float *)((((int)stk + 0) + 0x14)))->v)), _builtin_sqrtf(u7));
    t17 = t9;
    if (((int)t9 > (int)0x2AAB) && ((int)t9 < (int)0xD555)) {
        t17 = 0x2AAB;
        if (((int)t9 > (int)0x2AAB) && ((int)t9 < (int)0x4000)) {
        } else {
            t17 = 0x0;
            if (((int)t9 > (int)0xC000) && ((int)t9 < (int)0xD555)) {
                t17 = 0xD555;
            }
        }
    }
    *(float *)(((int)stk + 12)) = (math_cos_angle16(t17));
    *(float *)(((int)stk + 8)) = (math_cos_angle16((*(int *)(((int)stk + 0)))));
    *(float *)(((int)stk + 16)) = (math_sin_angle16(t17));
    t25 = math_sin_angle16((*(int *)(((int)stk + 0))));
    u26 = *(float *)(((int)stk + 12));
    u27 = *(float *)(((int)stk + 4));
    u28 = (u27 * u26);
    *(float *)((a4 + 0x0)) = (u28 * t25);
    (((struct o4_float *)(a4))->v) = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 16))));
    u32 = (u27 * u26);
    (((struct o8_float *)(a4))->v) = (u32 * (*(float *)(((int)stk + 8))));
    return t25;
}

void fx_update_state11_pulse(struct Obj *obj)
{
    float wave, amp;
    char *child;
    int idx;

    if (FUN_0c0555dc() != 0) {
        obj_destroy((int)obj);
        return;
    }
    if (obj->state != 0) {
        obj->flag1 = obj->age % 2;
        obj->age = obj->age + 1;
        if (obj->age >= 20) {
            obj_destroy((int)obj);
        }
        return;
    }
    if (((struct Own *)obj->owner)->inner->pad0[4] != 10) {
        if (obj->owner[0x10B] != 0) {
            return;
        }
        if (((struct Own *)obj->owner)->inner->pad0[0x10B] != 0) {
            return;
        }
    }
    if ((signed char)FUN_0c026554((int)obj) != 0) {
        obj->state = obj->state + 1;
        obj->age = 0;
        fx_spawn_03b1ec((int)obj->pos, obj->char_id);
        obj->flag105 = 1;
        *(*(char **)((char *)obj + 0x2E4)) = 0;
        return;
    }
    if (obj->flag4 == 0 && obj->age % 5 == 0) {
        fx_spawn_039828((int)obj->pos, obj->char_id);
    }
    obj->age = obj->age + 1;
    wave = math_sin_angle16((int)((float)(obj->age * 30) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
    wave = 0.5f + 0.5f * wave;
    amp = wave * 0.5f;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x1C) = amp + 1.0f;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x20) = amp + 1.0f;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x24) = amp + 1.0f;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x44) = 1.0f - amp;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x48) = 1.0f - amp;
    child = *(char **)((char *)obj + 0x2E4);
    *(float *)(child + 0x4C) = 1.0f - amp;
    math_vec3_accumulate((int)obj->pos, (int)obj->target);
    for (idx = 0; idx < 2; idx++) {
        obj->kid[idx]->field_10 = obj->kid[idx]->field_10 + 0x1555;
        obj->kid[idx]->field_18 = obj->kid[idx]->field_18 + 0x71C;
        if (obj->kid[idx]->field_18 >= 0x8000) {
            obj->kid[idx]->field_18 = 0x8000;
        }
    }
}
