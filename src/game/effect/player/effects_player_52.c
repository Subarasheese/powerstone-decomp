/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c6e6c-0c0c74bc) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
struct Vec3i { int x, y, z; };
int thunk_math_mat_get_translate(int, float *);
int math_vec3_sub(float *, float *, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
struct o4_float { char p[0x4]; float v; };
struct oEE_short { char p[0xEE]; short v; };


int fx_spawn_35(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t55;
    register int t7;
    register int t15;
    register int t20;
    register float t24;
    register int t25;
    register float u27;
    register float u30;
    register int t31;
    register float u34;
    register float t36;
    register int t37;
    register float u39;
    register int t42;
    register float u45;
    register float u47;
    register int t48;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x2, 0x0);
    t55 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C719C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x2AAA);
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t7 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
        t15 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x1);
        t20 = (((struct o2E4_int *)(t0))->v);
        (((struct o24_float *)(t20))->v) = 0.099999994f;
        (((struct o20_float *)(t20))->v) = 0.099999994f;
        (((struct o1C_float *)(t20))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x70);
        t24 = math_sin_angle16((*(int *)((t0 + 0x30))));
        t25 = *(signed char *)(((0xEE + t0) + 0x0));
        u27 = (((struct o8_float *)(((signed char)(((t25 << 1) + t25) << 2) + 0xC33C8C8)))->v);
        u30 = (((struct o20_float *)(t0))->v);
        t31 = *(signed char *)(((0xEE + t0) + 0x0));
        u34 = ((math_cos_angle16((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t31 << 1) + t31) << 2) + 0xC33C8C8) + 0x0))));
        u34 = u34 + u27 * t24;
        (((struct o20_float *)(t0))->v) = (u30 + u34);
        t36 = math_cos_angle16((*(int *)((t0 + 0x30))));
        t37 = *(signed char *)(((0xEE + t0) + 0x0));
        u39 = (((struct o8_float *)(((signed char)(((t37 << 1) + t37) << 2) + 0xC33C8C8)))->v);
        t42 = *(signed char *)(((0xEE + t0) + 0x0));
        u45 = (((struct o28_float *)(t0))->v);
        u47 = ((math_sin_angle16((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t42 << 1) + t42) << 2) + 0xC33C8C8) + 0x0))));
        (((struct o28_float *)(t0))->v) = (u45 + (((t36 * u39)) - u47));
        t48 = *(signed char *)(((0xEE + t0) + 0x0));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o4_float *)((0xC33C8C8 + (signed char)(((t48 << 1) + t48) << 2))))->v)));
        *(unsigned int *)((t0 + 0x30)) = ((*(int *)((t0 + 0x30))) + (*(int *)(((((((struct oEE_short *)(t0))->v)) << 2) + 0xC33C8EC))));
        t55 = 0xC33C8EC;
    }
    return t55;
}

void fx35_calc_angles_to_point(char *obj, char *other, int arg2, int arg3, struct Vec3i *out)
{
    float delta[3];
    struct Vec3i ang;
    char *pl = (char *)(0xC7E40C4 + (unsigned short)((unsigned short)obj[3] * (unsigned short)0x72D0));
    float dx, dz;

    thunk_math_mat_get_translate((int)(pl + 0x300 + (short)((short)pl[0x71F1] * (short)0xDC0)), delta);
    math_vec3_sub(delta, delta, (int)other + 0x20);
    if (delta[2] == 0.0f)
        delta[2] = 9.99999975e-06f;
    ang.y = math_atan_angle16(delta[0] / delta[2]);
    if (0.0f > delta[2])
        ang.y += 0x8000;
    if (delta[1] == 0.0f)
        delta[1] = 9.99999975e-06f;
    dx = delta[0];
    dz = delta[2];
    ang.x = math_atan_angle16(math_signed_sqrt(dz * dz + dx * dx) / delta[1]) - 16384;
    if (0.0f > delta[1])
        ang.x += 0x8000;
    *out = ang;
}
