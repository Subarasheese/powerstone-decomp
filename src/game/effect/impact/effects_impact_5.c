/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b68b4-0c0b6a9c) */

struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int _quick_odd_mvn(void);
int FUN_0c026554(int);
int fx_spawn_with_params(int, float, float, float, float);
int FUN_0c0555dc(void);
int obj_destroy(int);
int snd_play_stage_obj_se(int, int, int);
int fx_spawn_03(int, int, int, float);
int math_vec3_accumulate(int, int);

int fx_spawn_04(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t4;
    register int t7;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B698E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33C228); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C21C); }
        (((struct o38_float *)(t0))->v) = ((((struct o0_float *)0xC0B6A00)->v));
        (((struct o3C_float *)(t0))->v) = ((((struct o4_float *)0xC0B6A00)->v));
        (((struct o40_float *)(t0))->v) = 0.0f;
        t4 = *(signed char *)(((int)stk + 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(((signed char)(((t4 << 1) + t4) << 2) + 0xC33C234)); }
        (((struct o101_uchar *)(t0))->v) = 0x27;
        (((struct o102_uchar *)(t0))->v) = 0xA1;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        obj_set_record(t0, 0x3A);
        t7 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t7, 0xC664958, 0x7);
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x2)) = 0xF;
        t9 = 0xF;
    }
    return t9;
}

int fx_update_04(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t0 = FUN_0c026554(a4);
        if ((signed char)t0 != 0) {
            fx_spawn_03((a4 + 0x20), 0x2, 0x3A, 0.299999982f);
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
        return math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 3.0f);
    return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x2);
}
