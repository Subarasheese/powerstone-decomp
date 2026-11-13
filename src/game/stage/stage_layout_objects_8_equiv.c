/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ae1b4-0c0ae77c) */

/* named globals (symbols.txt) */
extern char g_camera_pos[];
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
struct o107_uchar { char p[0x107]; unsigned char v; };
struct Vec3f { float x, y, z; };
struct OwnerObj { char pad_00[0x71F1]; signed char slot; };
struct EffectObj {
    char pad_00[8];
    char counter;
    char pad_09[19];
    struct OwnerObj *owner;
    struct Vec3f pos;
    struct Vec3f vel;
    char pad_38[280 - 56];
    int table_ptr;
    char pad_11c[0x2E0 - 284];
    int model;
    char pad_2e4[0x308 - 0x2E4];
    signed char *spec_ptr;
};
void stage_obj_on_break(struct EffectObj *obj);
void fx_spawn_with_params(struct Vec3f *p, float a, float b, float c, float d);
void FUN_0c06233a(int model, int tbl, int idx);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_set_mode_owner(int, int, int);
int _modls(int);
int FUN_0c0555dc(void);
int FUN_0c0ae4f0(int);
struct vec3i { int x, y, z; };
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);

int FUN_0c0ae520(int);

float obj_update_distance_cull_b(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o0_float *)g_camera_pos)->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)g_camera_pos)->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u1 - u0)) * ((u1 - u0));
    u0 = math_signed_sqrt(u4);
    u1 = (((struct o0_float *)0xC0AE2D4)->v);
    t0 = 0x0;
    if (u1 > u0) {
    } else {
        u2 = (((struct o4_float *)0xC0AE2D4)->v);
        if (u2 > (u0 - u1)) {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
            (((struct o5C_float *)(a4))->v) = ((u0 - u1) / u2);
        } else {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) & 0xFBFF);
        }
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t0;
    return u0;
}

int FUN_0c0ae276(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o107_uchar *)(a4))->v) = 0x1;
    return 0x107;
}

void FUN_0c0ae284(void)
{
    
}

void stage_type02_break_step(struct EffectObj *obj)
{
    struct Vec3f top;
    struct OwnerObj *owner_obj = obj->owner;
    obj->counter = obj->counter + 1;
    stage_obj_on_break(obj);
    top = obj->pos;
    top.y = top.y + 50.0f;
    fx_spawn_with_params(&top, 1.0f, 1.0f, 1.0f, 2.0f);
    FUN_0c06233a(obj->model, 0xC664958, obj->spec_ptr[1]);
    obj->table_ptr = (int)owner_obj + 768 + (short)(owner_obj->slot * 3520) + 1408;
    obj->pos = *(struct Vec3f *)0xC339FE4;
    obj->vel = *(struct Vec3f *)0xC339FF0;
}

void FUN_0c0ae396(void)
{
    
}

int FUN_0c0ae520(int a4)
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
            return obj_set_mode_owner(a4, 0x0, 0x2);
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

int stage_type02_mode_03(int a4)
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
        return FUN_0c0ae520(a4);
    }
    return FUN_0c0ae4f0(a4);
}

void stage_type02_start_thrown(unsigned char *obj)
{
    unsigned char *linked = *(unsigned char **)(obj + 28);

    obj[3] = 2;
    obj[8]++;
    *(short *)(obj + 236) = 0;
    *(struct vec3i *)(obj + 32) = *(struct vec3i *)(linked + 32);
    *(float *)(obj + 36) = *(float *)(obj + 36) + 200.0f;
    *(float *)(obj + 56) = -(math_cos_angle16(0x14000 - *(int *)(linked + 48)) * 5.0f);
    *(float *)(obj + 60) = 10.0f;
    *(float *)(obj + 64) = -(math_sin_angle16(0x14000 - *(int *)(linked + 48)) * 5.0f);
    *(float *)(obj + 68) = -*(float *)(obj + 56) / 180.0f;
    *(float *)(obj + 72) = -2.0f;
    *(float *)(obj + 76) = -*(float *)(obj + 64) / 180.0f;
    *(int *)(obj + 280) = 0;
}
