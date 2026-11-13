/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b33fc-0c0b3d30) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
int obj_create(int, int, int, int);
int stage_obj_load_layout_pos(int);
int stage_gimmick_28_spawn_b(int);
int _quick_odd_mvn(void);
int obj_destroy(int);
int obj_find_hitting_player(int);
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct V3 { float x, y, z; };
struct Obj {
    char pad0[3];
    signed char kind;       /* 3 */
    char pad4[28];
    struct V3 pos;          /* 32 */
};
void fx_spawn_spark_rings(int, struct V3 *, float, float);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int math_rand_next(void);
int FUN_0c0e24f0(int);
int _modls(void);
extern void mdl_vtx_iter_begin(int, int);
extern int mdl_vtx_iter_next(void);
extern void mdl_vtx_get_uv(float *, float *);
extern void mdl_vtx_set_uv(float *, float *);
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };


void stage_gimmick_28_spawn(int a4)
{
    register int t0;
    register int t6;

    t0 = obj_create(0x4, 0x1, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x3;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B34BA;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A7DC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)(0xC33A7D0); }
        stage_gimmick_28_spawn_b(t0);
        t6 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((signed char)((((t6 - 8) << 1) + (t6 - 8)) << 2) + 0xC153000)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A7E8); }
    }
}

int stage_gimmick_28_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return obj_destroy(a4);
    }
    t0 = obj_find_hitting_player(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0b3614(int a4)
{
    register int t0;
    register float u5;
    register float u6;

    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) - (int)(((float)(unsigned char)((int)((((struct oEE_short *)(a4))->v)) >> 8) * 65536.0f) / 360.0f));
    u5 = ((float)(int)(((float)(unsigned char)((int)((((struct oEE_short *)(a4))->v)) >> 8) * 65536.0f) / 360.0f) / 65536.0f);
    u6 = ((((struct o20_float *)(a4))->v));
    u6 = u6 + 628.318481f * u5;
    (((struct o20_float *)(a4))->v) = u6;
    if ((int)(unsigned char)((int)((((struct oEE_short *)(a4))->v)) >> 8) < (int)0x3) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x20);
    }
    return 0xEE;
}

void FUN_0c0b36bc(struct Obj *obj)
{
    struct V3 shifted;
    shifted = obj->pos;
    shifted.y = shifted.y - 80.0f;
    fx_spawn_spark_rings(obj->kind, &shifted, 2.0f, 150.0f);
}

int stage_gimmick_28_update_c(int a4)
{
    int stk[1];
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t19;
    register int t21;
    register int t20;
    register int t26;
    register int t42;
    register int t2;
    register int t3;
    register float u8;
    register float u9;
    register int t23;
    register int t27;
    register float u28;
    register float u29;

    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return obj_destroy(a4);
        }
        t5 = 0x0;
        t6 = 0x0;
        t7 = (0x2E0 + a4);
        for (;;) {
            if ((int)t6 >= (int)0x5) {
                break;
            }
            t5 = (*(int *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            t2 = 0x28;
            t1 = 0x4;
            t2 = (t2 + t5);
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x2C;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            t6 = (t6 + 0x1);
            *(float *)((t5 + t1)) = u8;
            t1 = 0x8;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x30;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t1 = 0xC;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t3 = (*(int *)((t5 + 0x14)));
            t3 = (t3 + ((*(int *)((t5 + 0x38)))));
            *(unsigned int *)((t5 + 0x14)) = t3;
        }
        t19 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t19 + 0x1);
        t21 = 0xEC;
        if ((int)(short)(t19 + 0x1) > (int)0xF) {
            t20 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t20 + 0x1);
            t21 = (t20 + 0x1);
        }
        return t21;
    }
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + a4);
    t26 = 0x0;
    for (;;) {
        if ((int)t26 >= (int)0x5) {
            break;
        }
        t27 = (*(int *)(((int)stk + 0)));
        t27 = (t27 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t27;
        t27 = (t27 - 4);
        t27 = (*(int *)((t27 + 0x0)));
        t23 = (math_rand_next());
        u29 = (float)(((int)((int)t23 % (int)0xA)) - 5);
        (((struct o28_float *)(t27))->v) = u29;
        t23 = (math_rand_next());
        u29 = (float)((int)((int)t23 % (int)0x5));
        (((struct o2C_float *)(t27))->v) = u29;
        t23 = (math_rand_next());
        u29 = (float)(((int)((int)t23 % (int)0xA)) - 5);
        (((struct o30_float *)(t27))->v) = u29;
        FUN_0c0e24f0((t27 + 0x28));
        u29 = ((((struct o28_float *)(t27))->v));
        t23 = t27;
        t23 = (t23 + 0x10);
        u29 = (u29 * 10.0f);
        (((struct o28_float *)(t27))->v) = u29;
        u28 = ((((struct o2C_float *)(t27))->v));
        u28 = (u28 * 10.0f);
        (((struct o2C_float *)(t27))->v) = u28;
        u29 = ((((struct o30_float *)(t27))->v));
        u29 = (u29 * 10.0f);
        (((struct o30_float *)(t27))->v) = u29;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)((0xC33A7E8)); }
        t26 = (t26 + 0x1);
        *(unsigned int *)((t27 + 0x38)) = 0x71C;
    }
    t42 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t42 + 0x1);
    return (t42 + 0x1);
}

void mdl_scroll_uv_by_speed(char *obj)
{
    int *blocks = (int *)(obj + 0x2E0);
    float pair[2];

    mdl_vtx_iter_begin(*(int *)(blocks[1] + 0x9C), *(int *)(blocks[0] + 0x9C));
    *(float *)(obj + 56) = *(float *)(obj + 56) + 0.0999999940f;
    while (mdl_vtx_iter_next() == 0) {
        mdl_vtx_get_uv(&pair[1], &pair[0]);
        pair[0] = pair[0] + *(float *)(obj + 56);
        mdl_vtx_set_uv(&pair[1], &pair[0]);
    }
}
