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
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);
struct Vec3i { int x, y, z; };
int thunk_FUN_0c062242(int, float *);
int math_vec3_sub(float *, float *, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);

int fx_spawn_35(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t51;
    register int t8;
    register int t16;
    register int t21;
    register float t25;
    register int t26;
    register float u28;
    register float u31;
    register int t32;
    register float u35;
    register float t37;
    register int t38;
    register float u40;
    register int t43;
    register float u46;
    register float u48;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x2);
    t51 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C719C;
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x2AAA);
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t8 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
        t16 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), 0x1);
        t21 = (((struct o2E4_int *)(t0))->v);
        (((struct o24_float *)(t21))->v) = 0.099999994f;
        (((struct o20_float *)(t21))->v) = 0.099999994f;
        (((struct o1C_float *)(t21))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x70);
        t25 = math_sin_angle16((*(int *)((t0 + 0x30))));
        t26 = *(signed char *)(((0xEE + t0) + 0x0));
        u28 = (((struct o8_float *)(((signed char)(((t26 << 1) + t26) << 2) + 0xC33C8C8)))->v);
        u31 = (((struct o20_float *)(t0))->v);
        t32 = *(signed char *)(((0xEE + t0) + 0x0));
        u35 = ((math_cos_angle16((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t32 << 1) + t32) << 2) + 0xC33C8C8) + 0x0))));
        u35 = u35 + u28 * t25;
        (((struct o20_float *)(t0))->v) = (u31 + u35);
        t37 = math_cos_angle16((*(int *)((t0 + 0x30))));
        t38 = *(signed char *)(((0xEE + t0) + 0x0));
        u40 = (((struct o8_float *)(((signed char)(((t38 << 1) + t38) << 2) + 0xC33C8C8)))->v);
        t43 = *(signed char *)(((0xEE + t0) + 0x0));
        u46 = (((struct o28_float *)(t0))->v);
        u48 = ((math_sin_angle16((*(int *)((t0 + 0x30))))) * (*(float *)((((signed char)(((t43 << 1) + t43) << 2) + 0xC33C8C8) + 0x0))));
        (((struct o28_float *)(t0))->v) = (u46 + (((t37 * u40)) - u48));
        *(volatile signed char *)(((0xEE + t0) + 0x0));
        *(volatile float *)((t0 + 0x24));
        t51 = 0x24;
    }
    return t51;
}

void fx35_calc_angles_to_point(char *obj, char *other, int arg2, int arg3, struct Vec3i *out)
{
    float delta[3];
    struct Vec3i ang;
    char *pl = (char *)(0xC7E40C4 + (unsigned short)((unsigned short)obj[3] * (unsigned short)0x72D0));
    float dx, dz;

    thunk_FUN_0c062242((int)(pl + 0x300 + (short)((short)pl[0x71F1] * (short)0xDC0)), delta);
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
