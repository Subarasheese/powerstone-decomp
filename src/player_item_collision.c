/* item pickup and collision queries between fighters (0c09d544-0c09d89c) */

extern int math_atan_angle16(float a);
extern int hit_build_part_shape(char *obj, void *buf);
extern char hit_dispatch_shape_pair(int a, int b, void *buf, int c);
extern float FUN_0c02629e(int a, int b);
extern int obj_can_interact(int a, int b, int c);
extern char FUN_0c026076(int a, int b, void *buf, int c, int d);
extern float FUN_0c02649a(int a, int b);
struct o7270_float { char p[0x7270]; float v; };
struct o7278_float { char p[0x7278]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_vec2_cos_between(float, float, float, float);

int hit_probe_step_max(char *obj, float *out_val, float thresh)
{
    float buf[6];
    float best, ref_h, dist;
    int angle, sector, target, idx, result;

    best = 0.0f;
    if (*(float *)(obj + 56) == 0.0f)
        *(unsigned int *)(obj + 56) = 0x3727C5AC;
    angle = math_atan_angle16(-*(float *)(obj + 64) / *(float *)(obj + 56));
    if (0.0f > *(float *)(obj + 56))
        angle = angle + 32768;
    sector = (signed char)((unsigned short)((unsigned short)(angle + 16384) + 8192) / 16384 + 4);
    target = hit_build_part_shape(obj, buf);
    ref_h = buf[1] - buf[4];
    for (idx = 0; idx < obj[728]; idx++) {
        result = (signed char)hit_dispatch_shape_pair(target, obj[696 + idx], buf, *(int *)(obj + 704 + idx * 4));
        if (result == sector || result == 8) {
            dist = FUN_0c02629e(obj[696 + idx], *(int *)(obj + 704 + idx * 4)) - ref_h;
            if (dist > best)
                best = dist;
        }
    }
    for (idx = 0; idx < obj[680]; idx++) {
        if (*(signed char *)(*(int *)(obj + 660 + idx * 4) + 2) != 2)
            continue;
        if (*(signed char *)(*(int *)(obj + 660 + idx * 4) + 729) == 2)
            continue;
        if (obj_can_interact(*(int *)(obj + 660 + idx * 4), 0, obj[3]) == 0)
            return 1;
        result = (signed char)FUN_0c026076(target, obj[681 + idx], buf, *(int *)(obj + 640 + idx * 4), *(int *)(obj + 660 + idx * 4));
        if (result != sector)
            continue;
        dist = FUN_0c02649a(*(int *)(obj + 660 + idx * 4), 0) - ref_h;
        if (dist > best)
            best = dist;
    }
    *out_val = best;
    if (best == 0.0f)
        return 0;
    if (best > thresh)
        return 1;
    return 2;
}

int FUN_0c09d818(int a4, int a5)
{
    int stk[6];
    register float u0;
    register float u1;
    register float t22;

    u0 = (((struct o7270_float *)(a4))->v);
    (((struct oC_float *)(((int)stk + 0)))->v) = u0;
    *(float *)((((int)stk + 0) + 0x0)) = u0;
    u1 = (((struct o7278_float *)(a4))->v);
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = u1;
    (((struct o8_float *)(((int)stk + 0)))->v) = u1;
    if ((signed char)a5 != 4) {
        if ((signed char)a5 != 5) {
            if ((signed char)a5 != 6) {
                if ((signed char)a5 != 7) {
                } else {
                    (((struct o8_float *)(((int)stk + 0)))->v) = (-((((struct o8_float *)(((int)stk + 0)))->v)));
                }
            } else {
                *(float *)((((int)stk + 0) + 0x0)) = (-(*(float *)((((int)stk + 0) + 0x0))));
            }
        } else {
            (((struct o8_float *)(((int)stk + 0)))->v) = (-((((struct o8_float *)(((int)stk + 0)))->v)));
        }
    } else {
        *(float *)((((int)stk + 0) + 0x0)) = (-(*(float *)((((int)stk + 0) + 0x0))));
    }
    t22 = math_vec2_cos_between(((((struct oC_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)), (*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v)));
    return (int)((t22 * 65536.0f) / 360.0f);
}
