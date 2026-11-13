/* hit box data converters, per-frame object lists, hit edit draw (0c022228-0c022634) */

struct vec3 { float x, y, z; };
extern float math_signed_sqrt(float);
extern float FUN_0c0211d0(float, float, float, float);
extern void FUN_0c021178(float *, struct vec3, struct vec3);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };

int hit_push_apart_boxes(char *obj_a, char *obj_b, float *box_a, float *box_b)
{
    float push_dir[3];
    float center[4];
    float dx, dy, dz, pen_xz, pen_y, pen_cap, radius_sum, push_x, push_z;
    float *pos_a, *pos_b;
    float two_f;
    unsigned int two_bits;

    pos_a = (float *)(obj_a + 32);
    pos_b = (float *)(obj_b + 32);
    radius_sum = box_a[3] + box_b[3];
    dx = box_a[0] - box_b[0];
    dz = box_a[2] - box_b[2];
    pen_xz = radius_sum - math_signed_sqrt(dz * dz + dx * dx);
    pen_y = FUN_0c0211d0(box_a[1] + box_a[3], box_a[1] - box_a[3], box_b[4] + box_b[1], box_b[1] - box_b[4]);
    if (0.0f > pen_xz)
        return 0;
    if (0.0f > pen_y)
        return 0;
    if (obj_a[0x2D9] == 2)
        return 1;
    if (obj_b[0x2D9] == 2)
        return 1;
    if (obj_a[0x2D9] != 0 && obj_b[0x2D9] != 0)
        return 1;
    FUN_0c021178(push_dir, *(struct vec3 *)box_b, *(struct vec3 *)box_a);
    two_bits = 0x40000000;
    two_f = *(float *)&two_bits;
    if (pen_y > pen_xz) {
        push_x = push_dir[0] * pen_xz;
        if (obj_a[0x2D9] != 0) {
            pos_b[0] = pos_b[0] + (-push_x);
            push_z = push_dir[2] * pen_xz;
            pos_b[2] = pos_b[2] + (-push_z);
        } else if (obj_b[0x2D9] != 0) {
            pos_a[0] = pos_a[0] + push_x;
            pos_a[2] = pos_a[2] + pen_xz * push_dir[2];
        } else {
            pos_a[0] = pos_a[0] + push_x / two_f;
            pos_a[2] = pos_a[2] + push_dir[2] * pen_xz / two_f;
            pos_b[0] = pos_b[0] + (-(push_dir[0] * pen_xz)) / two_f;
            pos_b[2] = pos_b[2] + (-(push_dir[2] * pen_xz)) / two_f;
        }
        return 1;
    }
    if (box_a[1] > box_b[1]) {
        center[0] = box_b[0];
        center[1] = box_b[1] + box_b[4] - box_b[3];
        center[2] = box_b[2];
        center[3] = box_b[3];
        dx = center[0] - box_b[0];
        dy = center[1] - box_b[1];
        dz = center[2] - box_b[2];
        pen_cap = (center[3] + box_b[3]) - math_signed_sqrt(dy * dy + dx * dx + dz * dz);
        if (obj_a[0x2D9] != 0) {
            pos_b[1] = pos_b[1] - pen_y;
            return 1;
        }
        if (obj_b[0x2DA] == 0) {
            pos_a[1] = pos_a[1] + pen_y;
            return 1;
        }
        if (obj_b[0x2D9] == 0) {
            pos_a[0] = pos_a[0] + push_dir[0] * pen_cap / two_f;
            pos_a[2] = pos_a[2] + push_dir[2] * pen_cap / two_f;
            pos_b[0] = pos_b[0] + (-(push_dir[0] * pen_cap)) / two_f;
            pos_b[2] = pos_b[2] + (-(push_dir[2] * pen_cap)) / two_f;
        } else {
            pos_a[0] = pos_a[0] + pen_cap * push_dir[0];
            pos_a[2] = pos_a[2] + pen_cap * push_dir[2];
        }
        return 1;
    }
    center[0] = box_b[0];
    center[1] = box_b[1] - box_b[4] + box_b[3];
    center[2] = box_b[2];
    center[3] = box_b[3];
    dx = center[0] - box_b[0];
    dy = center[1] - box_b[1];
    dz = center[2] - box_b[2];
    pen_cap = (center[3] + box_b[3]) - math_signed_sqrt(dy * dy + dx * dx + dz * dz);
    if (obj_b[0x2D9] != 0) {
        pos_a[1] = pos_a[1] - pen_y;
        return 1;
    }
    if (obj_a[0x2D9] == 0) {
        pos_a[0] = pos_a[0] + push_dir[0] * pen_cap / two_f;
        pos_a[2] = pos_a[2] + push_dir[2] * pen_cap / two_f;
        pos_b[0] = pos_b[0] + (-(push_dir[0] * pen_cap)) / two_f;
        pos_b[2] = pos_b[2] + (-(push_dir[2] * pen_cap)) / two_f;
    } else {
        pos_b[0] = pos_b[0] + (-(push_dir[0] * pen_cap));
        pos_b[2] = pos_b[2] + (-(push_dir[2] * pen_cap));
    }
    return 1;
}

int FUN_0c02259e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u19;
    float u20;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a6))->v);
    u3 = (((struct oC_float *)(a7))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a6))->v);
    u7 = (((struct o10_float *)(a7))->v);
    u8 = (((struct o4_float *)(a6))->v);
    u9 = (((struct o4_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u10);
    u12 = (((struct o14_float *)(a6))->v);
    u13 = (((struct o14_float *)(a7))->v);
    u14 = (((struct o8_float *)(a6))->v);
    u15 = (((struct o8_float *)(a7))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u12 + u13) - u16);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        return 0x1;
    }
    return 0x0;
}
