/* same module (continues) (0c0c99c0-0c0ca124) */

struct o24_float { char p[0x24]; float v; };
typedef struct { int x, y, z; } Vec12;
typedef struct { float x, y, z; } Vec3;
extern void math_mat_transform_point(void *, void *);
extern void math_vec3_sub(Vec3 *, Vec3 *, Vec3 *);
extern int math_atan_angle16(float);
float math_round_away_float(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0ca124(int);
void obj_destroy(int);
struct vec3i { int x, y, z; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oF0_float { char p[0xF0]; float v; };
int _quick_odd_mvn(int, int, int, int);

int FUN_0c0c99c0(int a4, int a5, int a6, float f4)
{
    register float u0;
    register int t20;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u7;
    register float u5;

    u0 = *(float *)0xC0C9AE4;
    t20 = 0xC0C9AE4;
    if ((int)a5 < (int)a6) {
        t1 = (a5 << 2);
        t2 = (a5 << 2);
        t3 = a5;
        t4 = (a5 << 2);
        u7 = f4;
        for (;;) {
            if (!(u0 > u7)) {
                *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t4) + 0x0))) + 0x0)) = 0x1;
                (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t4) + 0x0)))))->v) = 1.0f;
            } else {
                if (u7 > (0.0f)) {
                    u5 = u7;
                    u5 = (u5 / u0);
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x0)) = 0x1;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t2) + 0x0)))))->v) = u5;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x0;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.0f;
                }
            }
            u7 = (u7 - u0);
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)a6) {
                break;
            }
        }
        t20 = 0x24;
    }
    return t20;
}

void FUN_0c0c9a4c(char *actor, char *target)
{
    Vec3 delta;
    float dz;
    int ang;

    *(Vec12 *)(actor + 32) = *(Vec12 *)0xC33C978;
    math_mat_transform_point(actor + 32, target + 0x47C0);
    *(float *)(actor + 36) = *(float *)(target + 36) + 200.0f;
    math_vec3_sub(&delta, (Vec3 *)(actor + 32), (Vec3 *)(target + 32));
    dz = delta.z;
    if (dz == 0.0f) {
        dz = 9.99999975e-06f;
    }
    ang = math_atan_angle16(delta.x / dz);
    if (dz < 0.0f) {
        ang += 0x8000;
    }
    *(Vec12 *)(actor + 44) = *(Vec12 *)(target + 44);
    *(int *)(actor + 44) += *(int *)(target + 0x7244);
    *(int *)(actor + 48) = ang;
}

int fx_trail_resize_list(char *list_obj)
{
    float target_len;
    int old_len, cur_len, want_len, grow, i, idx, added;
    char *node;
    float trig;
    float dist;

    target_len = *(float *)(list_obj + 0xF0);
    if (list_obj[0xD] != 0 && list_obj[0xC] == 0)
        target_len = target_len + 100.0f;
    old_len = list_obj[0xE];
    if (target_len > 4000.0f)
        target_len = 4000.0f;
    want_len = (int)math_round_away_float(target_len / 60.0f);
    cur_len = list_obj[0xE];
    if (want_len > cur_len) {
        grow = want_len - old_len;
        if (grow > 0) {
            i = 0;
            do {
                added = FUN_0c0ca124((int)list_obj);
                i++;
                if (added != 0)
                    list_obj[0xE] = list_obj[0xE] + 1;
            } while (i < grow);
        }
    } else if (want_len < cur_len) {
        node = *(char **)(list_obj + 0x18);
        idx = 0;
        if (want_len > 0) {
            do {
                idx++;
                node = *(char **)(node + 0x18);
            } while (idx < want_len);
        }
        while (idx < old_len) {
            if (*(int *)(node + 0x10) == 0xC0CA198) {
                obj_destroy((int)node);
                list_obj[0xE] = list_obj[0xE] - 1;
            }
            idx++;
            node = *(char **)(node + 0x18);
        }
    }
    want_len = list_obj[0xE];
    if (want_len > 0) {
        node = *(char **)(list_obj + 0x18);
        for (i = 0; i < want_len; i++) {
            *(struct vec3i *)(node + 44) = *(struct vec3i *)(list_obj + 44);
            *(struct vec3i *)(node + 32) = *(struct vec3i *)(list_obj + 32);
            trig = math_cos_angle16(0x14000 - *(int *)(node + 44));
            trig = trig * (float)i;
            *(float *)(node + 36) = *(float *)(node + 36) + (-(trig * 60.0f));
            trig = math_cos_angle16(0x14000 - *(int *)(node + 48));
            dist = (trig * (float)i) * 60.0f;
            *(float *)(node + 32) = *(float *)(node + 32) + math_sin_angle16(0x14000 - *(int *)(node + 44)) * dist;
            trig = math_sin_angle16(0x14000 - *(int *)(node + 48));
            dist = (trig * (float)i) * 60.0f;
            *(float *)(node + 40) = *(float *)(node + 40) + math_sin_angle16(0x14000 - *(int *)(node + 44)) * dist;
            node = *(char **)(node + 0x18);
        }
    }
    list_obj[0xE] = want_len;
    return want_len;
}

int FUN_0c0ca050(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)(((0x308 + a4) + 0x10));
    (((struct o10_uchar *)((0x308 + a4)))->v) = (t0 - 1);
    t1 = 0x10;
    if ((signed char)(t0 - 1) == 0) {
        (((struct o10_uchar *)((0x308 + a4)))->v) = 0x4;
        t0 = *(int *)((((((*(signed char *)(((0x308 + a4) + 0xF))) + 0x1) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct o10_uchar *)((0x308 + a4)))->v) = 0x1;
            t2 = 0x10;
        } else {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4)) = *(struct mv3 *)(0xC153370); }
            (((struct o40_float *)(t0))->v) = 0.0f;
            (((struct o28_float *)(t0))->v) = 0.0f;
            (((struct o2C_float *)(t0))->v) = 100.0f;
            *(unsigned char *)(((0x308 + a4) + 0xF)) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    t0 = *(int *)(((0x2E0 + a4) + 0x4));
    t2 = t1;
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        if (1.0f > ((((struct o40_float *)(t0))->v))) {
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) + 0.099999994f);
        }
        (((struct oC_float *)(t0))->v) = ((((struct o28_float *)(t0))->v));
        if (!(((((struct oF0_float *)(a4))->v)) > (((((struct oC_float *)(t0))->v)) * ((((struct o58_float *)(a4))->v))))) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            t1 = 0xC;
        } else {
            (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
            t1 = 0x28;
        }
        t2 = t1;
    }
    return t2;
}
