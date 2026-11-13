/* @unit 0c0c10f0-0c0c1360 */
typedef struct Q { char pad0[3]; char b3; char pad1[5]; char b9; char pad2[18]; struct Q *q28; } Q;
typedef struct {
    char pad0[8]; char b8; char pad1[28-9]; Q *q28; float x, y, z;
    int i44, i48; char pad3[4]; float f56, f60, f64;
    char pad4[236-68]; short s236; short s238; char pad5[736-240]; int *p736;
} O;
typedef struct { float x, y, z; } V3;
typedef struct { char pad[768]; } T;
extern char g_players[];
extern int g_frame_counter;
extern int FUN_0c0555dc(O *);
extern void obj_destroy(O *);
extern void thunk_math_mat_get_translate(char *, V3 *);
extern void FUN_0c0e24f0(float *);
extern int math_atan2_angle16(float, float);
extern void obj_set_record_char(O *, int);
extern void math_vec3_accumulate(float *, float *);
extern float _builtin_sqrtf(float);
extern char g_stage_id;
char fx23_outside_arena_bounds(O *p)
{
    if (g_stage_id == 10) {
        if (p->x < -1600.0f || p->x > 1600.0f || p->y < -100.0f || p->y > 1000.0f
            || p->z < -1600.0f || p->z > 1600.0f) return 1;
        return 0;
    }
    if (p->x < -949.0f || p->x > 949.0f || p->y < -100.0f || p->y > 2000.0f
        || p->z < -949.0f || p->z > 949.0f) return 1;
    return 0;
}

void fx_update_23(O *p)
{
    V3 v;
    char *base;
    float a, b;
    if (FUN_0c0555dc(p)) { obj_destroy(p); return; }
    if (p->b8 != 0) { obj_destroy(p); return; }
    if (fx23_outside_arena_bounds(p)) {
        if (p->q28->b9 == 3 || ++p->s238 > 3) { p->b8++; return; }
        base = g_players + (unsigned short)(p->q28->q28->b3 * 29392);
        thunk_math_mat_get_translate(base + 768 + (short)(base[29169] * 3520) + 1408, &v);
        p->f56 = v.x - p->x;
        p->f60 = v.y - p->y;
        p->f64 = v.z - p->z;
        FUN_0c0e24f0(&p->f56);
        if (p->f64 == 0.0f) p->f64 = 1.0e-5f;
        a = p->f56;
        b = p->f64;
        p->i44 = math_atan2_angle16(-p->f60, _builtin_sqrtf(b * b + a * a));
        p->i48 = math_atan2_angle16(p->f56, p->f64);
        p->f56 *= 40.0f; p->f60 *= 40.0f; p->f64 *= 40.0f;
    }
    if ((unsigned int)g_frame_counter % 30u == 0) /* _modlu */  obj_set_record_char(p, 114);
    if (++p->s236 >= 180) p->b8++;
    math_vec3_accumulate(&p->x, &p->f56);
    p->p736[4] += 0x1555;
}
