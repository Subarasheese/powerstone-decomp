/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ad15c-0c0ae1b4) */

/* named globals (symbols.txt) */
extern char g_camera_pos[];
extern char g_proj_char_offset_tbl[];
extern char g_proj_def_tbl[];
extern char g_vec3_gravity_339fa8[];
extern char g_vec3_zero_339f90[];
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
extern float _builtin_sqrtf(float);
typedef struct { int w0; float y; int w2; } vec3m;
extern float FUN_0c02649a(char *, int);
extern void fx_spawn_periodic_trail(vec3m *, char *, int, int);
typedef struct { int x, y, z; } Vec3i;
typedef struct { char pad[4]; char b4; char b5; } KindRec;
typedef struct {
    char pad0[3];
    char b3;
    char pad4[4];
    char cnt;
    char pad9[35];
    int f44;
    int pad48;
    int f52;
    Vec3i s56;
    Vec3i s68;
    char pad80[177];
    char b257;
    char b258;
    char pad259[2];
    char b261;
    char b262;
    char b263;
    char pad264[16];
    int w280;
    char pad284[445];
    char b729;
    char pad730[46];
    KindRec *p776;
} Obj;
extern void hit_build_part_shape(char *, char *);
extern char hit_dispatch_shape_pair(int, int, char *, int);
struct Vec3i_r5 { int x, y, z; };
struct Own { char pad[0x7298]; float scale; };
struct Obj_r6 {
    char pad0[28];
    struct Own *owner;
    float dir[3];
    struct Vec3i_r5 vec;
    char pad1[0x314 - 56];
    signed char kind;
};
struct vec3_int { int x, y, z; };
extern void obj_set_record(char *obj, int height_off);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern void FUN_0c0c07bc(char *a, char *b, char *c, int d, float f);
struct o24_float { char p[0x24]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int hit_probe_object_vs_slots(int);
int hit_probe_step_max(int, int, float);
int obj_set_mode_owner(int, int);
struct Vec3i_r9 { int x, y, z; };
extern void obj_set_record(char *obj, int k);
typedef struct { int x, y, z; } S12;
extern void obj_set_record(char *, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
int stage_obj_load_layout_pos(int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int _modls(int);
int FUN_0c0555dc(void);
typedef struct { int w0, w1, w2; } vec3i;
extern int math_rand_next(void);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();

void stage_type01_spawn_ground_fx(char *obj);
int FUN_0c0addb0(int a4);
int FUN_0c0addde(int);

float obj_update_distance_cull(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    float s1;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o0_float *)g_camera_pos)->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)g_camera_pos)->v);
    u4 = (((struct o0_float *)0xC0AD2B0)->v);
    u5 = ((u3 - u2) * (u3 - u2));
    u5 = u5 + ((u1 - u0)) * ((u1 - u0));
    t0 = 0x0;
    s1 = _builtin_sqrtf(u5);
    u2 = s1;
    t1 = 0;
    if (u4 > s1) {
        t1 = (1);
    } else {
        u3 = (((struct o4_float *)0xC0AD2B0)->v);
        if (u3 > (s1 - u4)) {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
            (((struct o5C_float *)(a4))->v) = ((s1 - u4) / u3);
            u6 = ((s1 - u4) / u3);
        } else {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) & 0xFBFF);
            u6 = (s1 - u4);
        }
        t0 = 0x1;
        u2 = u6;
        t1 = ((u3 > (s1 - u4)));
    }
    *(unsigned char *)((a4 + 0x1)) = t0;
    return (u1 - u0);
}

void stage_type01_spawn_ground_fx(char *obj)
{
    vec3m pos;

    pos = *(vec3m *)(obj + 32);
    pos.y = FUN_0c02649a(obj, 1);
    fx_spawn_periodic_trail(&pos, obj + 56, *(short *)(obj + 236), obj[3]);
    *(short *)(obj + 236) += 1;
}

void FUN_0c0ad1fa(Obj *obj)
{
    KindRec *kind_rec;
    obj->b3 = 2;
    obj->cnt = obj->cnt + 1;
    obj->f44 = 0;
    obj->f52 = 0;
    obj->s56 = *(Vec3i *)g_vec3_zero_339f90;
    obj->s68 = *(Vec3i *)g_vec3_gravity_339fa8;
    obj->w280 = 0;
    obj->b729 = 0;
    kind_rec = obj->p776;
    obj->b257 = kind_rec->b4;
    obj->b258 = kind_rec->b5;
    obj->b261 = 0;
    obj->b262 = 0;
    obj->b263 = 0;
}

int FUN_0c0ad254(char *obj)
{
    char buf[24];
    int idx;

    hit_build_part_shape(obj, buf);
    for (idx = 0; idx < *(signed char *)(obj + 0x2D8); idx++) {
        if (hit_dispatch_shape_pair(1, *(signed char *)(obj + 0x2B8 + idx), buf, *(int *)(obj + 0x2C0 + idx * 4)) == 2) {
            return 1;
        }
    }
    return 0;
}

void stage_type01_calc_throw_vec(struct Obj_r6 *obj)
{
    struct Own *owner_rec = obj->owner;
    signed char *rec = (signed char *)(((int)g_proj_def_tbl) + obj->kind * 10);
    float *scaled_src = (float *)(0xC339EE8 + (signed char)(rec[8] * 12));
    signed char *rec_b;
    obj->dir[0] = scaled_src[0] * owner_rec->scale;
    obj->dir[1] = scaled_src[1] * owner_rec->scale;
    obj->dir[2] = scaled_src[2] * owner_rec->scale;
    rec_b = (signed char *)(((int)g_proj_def_tbl) + obj->kind * 10);
    obj->vec = *(struct Vec3i_r5 *)(0xC339F3C + (signed char)(rec_b[8] * 12));
}

void FUN_0c0ad46e(void)
{
    
}

void stage_type01_init_thrown_from_owner(char *obj)
{
    char *owner = *(char **)(obj + 28);
    signed char *kind_row;
    float height_off;
    int type_off;
    obj[8]++;
    obj[3] = owner[3];
    *(int *)(obj + 280) = 0;
    kind_row = (signed char *)(((int)g_proj_def_tbl) + (signed char)obj[788] * 10);
    obj[0x101] = kind_row[1];
    obj[0x102] = kind_row[2];
    obj_set_record(obj, kind_row[0]);
    obj[261] = 0;
    obj[262] = 0;
    obj[263] = 0;
    *(struct vec3_int *)(obj + 32) = *(struct vec3_int *)(owner + 32);
    *(float *)(obj + 32) += 50.0f * (math_cos_angle16(0x14000 - *(int *)(owner + 48)) * *(float *)(owner + 0x7298));
    *(float *)(obj + 40) += 50.0f * (math_sin_angle16(0x14000 - *(int *)(owner + 48)) * *(float *)(owner + 0x7298));
    if ((signed char)obj[781] == 8 || (signed char)obj[781] == 9)
        height_off = 80.0f;
    else
        height_off = 120.0f;
    *(float *)(obj + 36) += height_off * *(float *)(owner + 0x7298);
    *(struct vec3_int *)(obj + 44) = *(struct vec3_int *)(owner + 44);
    *(struct vec3_int *)(obj + 68) = *(struct vec3_int *)g_vec3_zero_339f90;
    type_off = ((signed char *)owner)[4] * 24;
    if (kind_row[7] != 0)
        FUN_0c0c07bc(obj + 56, owner + 32, *(char **)(owner + 28) + 32, *(int *)(owner + 48), *(float *)(((int)g_proj_char_offset_tbl) + type_off + 4));
    else
        FUN_0c0c07bc(obj + 56, owner + 32, *(char **)(owner + 28) + 32, *(int *)(owner + 48), *(float *)(((int)g_proj_char_offset_tbl) + type_off));
}

int FUN_0c0ad7a4(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;

    t0 = hit_probe_object_vs_slots(a4);
    if ((signed char)t0 != 0) {
        t1 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) < (int)0xA) {
            t2 = hit_probe_step_max(a4, ((int)stk + 0), 60.0f);
            if ((signed char)t2 == 2) {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + (*(float *)(((int)stk + 0))));
                return 0x0;
            }
        }
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            *(volatile signed char *)((a4 + 0x3));
            obj_set_mode_owner(a4, 0x2);
            return 0x1;
        }
        (((struct oF0_ushort *)(a4))->v) = 0x1;
        return 0x0;
    }
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0x0;
}

void stage_type01_init_kind_row(char *obj)
{
    signed char *kind_row;
    signed char *owner;
    float speed;
    obj[8]++;
    obj[3] = (*(char **)(obj + 28))[3];
    *(short *)(obj + 236) = 0;
    *(short *)(obj + 238) = 0;
    *(short *)(obj + 240) = 0;
    obj[729] = 0;
    kind_row = (signed char *)(((int)g_proj_def_tbl) + (signed char)obj[788] * 10);
    obj[0x101] = kind_row[4];
    obj[0x102] = kind_row[5];
    obj_set_record(obj, kind_row[3]);
    obj[261] = 0;
    obj[262] = 0;
    obj[263] = 0;
    *(struct Vec3i_r9 *)(obj + 44) = *(struct Vec3i_r9 *)(*(char **)(obj + 28) + 44);
    owner = *(signed char **)(obj + 28);
    if (kind_row[7] != 0)
        speed = *(float *)(((int)g_proj_char_offset_tbl) + owner[4] * 24 + 12);
    else
        speed = *(float *)(((int)g_proj_char_offset_tbl) + (*(signed char **)(obj + 28))[4] * 24 + 8);
    *(float *)(obj + 56) = math_cos_angle16(0x14000 - *(int *)(obj + 48)) * speed;
    *(float *)(obj + 60) = 0.0f;
    *(float *)(obj + 64) = math_sin_angle16(0x14000 - *(int *)(obj + 48)) * speed;
    *(struct Vec3i_r9 *)(obj + 68) = *(struct Vec3i_r9 *)g_vec3_gravity_339fa8;
    stage_type01_spawn_ground_fx(obj);
}

void stage_type01_reset_anim_from_kind(char *actor)
{
    signed char *anim_entry;
    signed char *speed_row;
    float speed;

    actor[8] += 1;
    actor[3] = (*(signed char **)(actor + 28))[3];
    *(short *)(actor + 0xEC) = 0;
    *(short *)(actor + 0xEE) = 0;
    *(short *)(actor + 0xF0) = 0;
    actor[0x2D9] = 0;
    anim_entry = (signed char *)g_proj_def_tbl + (signed char)actor[0x314] * 10;
    actor[0x101] = anim_entry[4];
    actor[0x102] = anim_entry[5];
    obj_set_record(actor, anim_entry[3]);
    *(S12 *)(actor + 44) = *(S12 *)(*(char **)(actor + 28) + 44);
    speed_row = (signed char *)g_proj_char_offset_tbl + (*(signed char **)(actor + 28))[4] * 24;
    if (anim_entry[7] != 0) {
        speed = *(float *)(speed_row + 12);
    } else {
        speed = *(float *)(speed_row + 8);
    }
    *(float *)(actor + 56) = -(math_cos_angle16(0x14000 - *(int *)(actor + 48)) * speed);
    *(float *)(actor + 60) = 0.0f;
    *(float *)(actor + 64) = -(math_sin_angle16(0x14000 - *(int *)(actor + 48)) * speed);
    *(S12 *)(actor + 68) = *(S12 *)g_vec3_gravity_339fa8;
    stage_type01_spawn_ground_fx(actor);
}

int FUN_0c0addb0(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    stage_obj_load_layout_pos(a4);
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    return 0x107;
}

int FUN_0c0addde(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned char *)((a4 + 0x1)) = ((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x2));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x5A) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            return ((int (*)(int, int, int))obj_set_mode_owner)(a4, 0x0, 0x2);
        }
        return 0xEC;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x384) {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    return 0xEC;
}

int stage_type01_mode_03(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0addde(a4);
    }
    return FUN_0c0addb0(a4);
}

void stage_type01_start_thrown_item(char *thrown)
{
    char *owner;
    float half_turn = 180.0f;

    thrown[3] = 2;
    thrown[8] = thrown[8] + 1;
    thrown[1] = 1;
    owner = *(char **)(thrown + 28);
    *(vec3i *)(thrown + 32) = *(vec3i *)(owner + 32);
    *(float *)(thrown + 36) = *(float *)(thrown + 36) + half_turn;
    math_rand_next();
    *(float *)(thrown + 56) = -(math_cos_angle16(0x14000 - *(int *)(owner + 48)) * 5.0f);
    *(float *)(thrown + 60) = 10.0f;
    *(float *)(thrown + 64) = -(math_sin_angle16(0x14000 - *(int *)(owner + 48)) * 5.0f);
    *(float *)(thrown + 68) = -*(float *)(thrown + 56) / half_turn;
    *(float *)(thrown + 72) = -2.0f;
    *(float *)(thrown + 76) = -*(float *)(thrown + 64) / half_turn;
    *(int *)(thrown + 280) = 0;
    thrown[729] = 0;
    thrown[257] = (*(char **)(thrown + 776))[4];
    thrown[258] = (*(char **)(thrown + 776))[5];
    thrown[261] = 0;
    thrown[262] = 0;
    thrown[263] = 0;
}

int stage_spawn_type01(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE034;
        *(unsigned char *)((t0 + 0x4)) = 0x1;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        t2 = *(signed char *)((a4 + 0x6));
        (((struct o30F_uchar *)(t0))->v) = (*(signed char *)((0xC33BFE1 + (((t2 << 2) + t2) << 1))));
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC339F9C); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1;
        t2 = *(signed char *)0xC7F3051;
        t1 = t2;
        if (t2 == 9) {
            t2 = *(short *)((t0 + 0x6));
            *(unsigned short *)((t0 + 0x6)) = (t2 | 0x800);
            t1 = (t2 | 0x800);
        }
    }
    return t1;
}
