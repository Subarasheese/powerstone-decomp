/* camera helpers (shake/fade parameters (0c0dc27c-0c0dc9d4) */

struct o170_float { char p[0x170]; float v; };
struct o174_int { char p[0x174]; int v; };
struct o174_uint { char p[0x174]; unsigned int v; };
struct o178_int { char p[0x178]; int v; };
struct o178_uint { char p[0x178]; unsigned int v; };
struct o17C_int { char p[0x17C]; int v; };
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_float { char p[0xC0]; float v; };
struct oC4_float { char p[0xC4]; float v; };
struct oE0_float { char p[0xE0]; float v; };
int math_atan2_angle16(float x, float z);
float math_signed_sqrt(float x);
float math_vec2_cos_between(float ax, float az, float bx, float bz);
float math_cos_angle16(int angle);
float math_tan_angle16(int angle);
float math_sin_angle16(int angle);
typedef struct { float x, y, z; } VEC3;
typedef struct { char pad[0x20]; float x, y, z; } FIGHTER;
#define P0 ((FIGHTER *)0xC7E40C4)
#define P1 ((FIGHTER *)(0xC7E40C4 + 0x72D0))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

int cam_apply_shake(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t14;
    register int t15;
    register float u19;
    register float u24;
    register int t52;
    register float u55;
    register int t79;
    register float u81;
    register float u83;
    register int t92;
    register int t94;
    register int t95;
    register int t96;
    register int t97;

    t0 = (((struct o17C_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o174_uint *)(a4))->v) = 0x0;
                (((struct o178_uint *)(a4))->v) = 0x0;
                (((struct o170_float *)(a4))->v) = (float)0x0;
                t92 = 0x17C;
                t94 = 0x63;
                t95 = 0x0;
                t96 = a5;
                t97 = a6;
            } else {
                if (((((struct o178_int *)(a4))->v)) != 0) {
                    math_rand_float();
                    *(volatile int *)((a4 + 0x180));
                    t14 = FUN_0c0e6f24();
                    t15 = (((struct o174_int *)(a4))->v);
                    u19 = (float)(t15 * t14);
                    if ((int)(t15 * t14) < 0) {
                        u19 = (((float)(t15 * t14)) + 4.2949673e+09f);
                    }
                    u24 = 1.0f;
                    if ((0x1 & ((((struct o178_int *)(a4))->v))) != 0) {
                        u24 = -1.0f;
                    }
                    (((struct o170_float *)(a4))->v) = (u19 * u24);
                    t92 = 0x178;
                    t94 = (((((struct o178_int *)(a4))->v)) - 1);
                } else {
                    (((struct o174_uint *)(a4))->v) = 0x0;
                    (((struct o178_uint *)(a4))->v) = 0x0;
                    (((struct o170_float *)(a4))->v) = (float)0x0;
                    t92 = 0x17C;
                    t94 = 0x63;
                    t95 = 0x0;
                    t96 = a5;
                    t97 = a6;
                }
            }
        } else {
            if (((((struct o178_int *)(a4))->v)) != 0) {
                t52 = (((struct o174_int *)(a4))->v);
                u55 = 1.0f;
                if ((0x1 & ((((struct o178_int *)(a4))->v))) != 0) {
                    u55 = -1.0f;
                }
                (((struct o170_float *)(a4))->v) = ((float)t52 * u55);
                t92 = 0x178;
                t94 = (((((struct o178_int *)(a4))->v)) - 1);
            } else {
                (((struct o174_uint *)(a4))->v) = 0x0;
                (((struct o178_uint *)(a4))->v) = 0x0;
                (((struct o170_float *)(a4))->v) = (float)0x0;
                t92 = 0x17C;
                t94 = 0x63;
            }
            t95 = 0x0;
            t96 = a5;
            t97 = a6;
        }
    } else {
        if (((((struct o178_int *)(a4))->v)) != 0) {
            t95 = (((struct o178_int *)(a4))->v);
            t79 = (((struct o174_int *)(a4))->v);
            u81 = 1.0f;
            if ((0x1 & t95) != 0) {
                u81 = -1.0f;
            }
            u83 = (float)(t79 * t95);
            (((struct o170_float *)(a4))->v) = (u83 * u81);
            t92 = 0x178;
            t94 = (((((struct o178_int *)(a4))->v)) - 1);
        } else {
            (((struct o174_uint *)(a4))->v) = 0x0;
            (((struct o178_uint *)(a4))->v) = 0x0;
            (((struct o170_float *)(a4))->v) = (float)0x0;
            t92 = 0x17C;
            t94 = 0x63;
            t95 = 0x0;
        }
        t96 = a5;
        t97 = a6;
    }
    *(unsigned int *)((a4 + t92)) = t94;
    return ((int (*)(int, int, int, int))(0xC0DC3AC))(t95, t96, t97, a7);
}

int cam_push_keyframe_history(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct oE0_float *)(a4))->v);
    u1 = (((struct oC_float *)((0xE0 + a4)))->v);
    u2 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u2 = (u1 - u0);
    }
    if ((float)a5 > u2) {
        if (0.0f > (((((struct o4_float *)((0xE0 + a4)))->v)) - ((((struct o4_float *)(((0xE0 + a4) + 0xC)))->v)))) {
            u2 = ((-((((struct o4_float *)((0xE0 + a4)))->v))) + ((((struct o4_float *)(((0xE0 + a4) + 0xC)))->v)));
        } else {
            u2 = (((((struct o4_float *)((0xE0 + a4)))->v)) - ((((struct o4_float *)(((0xE0 + a4) + 0xC)))->v)));
        }
        if ((float)a5 > u2) {
            if (0.0f > (((((struct o8_float *)((0xE0 + a4)))->v)) - ((((struct o8_float *)(((0xE0 + a4) + 0xC)))->v)))) {
                u2 = ((-((((struct o8_float *)((0xE0 + a4)))->v))) + ((((struct o8_float *)(((0xE0 + a4) + 0xC)))->v)));
            } else {
                u2 = (((((struct o8_float *)((0xE0 + a4)))->v)) - ((((struct o8_float *)(((0xE0 + a4) + 0xC)))->v)));
            }
            if ((float)a5 > u2) {
                if (0.0f > (((((struct oB0_float *)(a4))->v)) - ((((struct oBC_float *)(a4))->v)))) {
                    u2 = ((-((((struct oB0_float *)(a4))->v))) + ((((struct oBC_float *)(a4))->v)));
                } else {
                    u2 = (((((struct oB0_float *)(a4))->v)) - ((((struct oBC_float *)(a4))->v)));
                }
                if ((float)a5 > u2) {
                    if (0.0f > (((((struct oB4_float *)(a4))->v)) - ((((struct oC0_float *)(a4))->v)))) {
                        u2 = ((-((((struct oB4_float *)(a4))->v))) + ((((struct oC0_float *)(a4))->v)));
                    } else {
                        u2 = (((((struct oB4_float *)(a4))->v)) - ((((struct oC0_float *)(a4))->v)));
                    }
                    if ((float)a5 > u2) {
                        if (0.0f > (((((struct oB8_float *)(a4))->v)) - ((((struct oC4_float *)(a4))->v)))) {
                            *(volatile float *)((a4 + 0xB8));
                            *(volatile float *)((a4 + 0xC4));
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4DA))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
                        }
                        *(volatile float *)((a4 + 0xC4));
                        *(volatile float *)((a4 + 0xB8));
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4D8))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4E2))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4E2))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
            }
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4E2))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
        }
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4E2))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
    }
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0DC4E2))(a4, a5, ((0xE0 + a4) + 0xC), a7, (float)a5, u0, u1, (u0 - u1));
}

void FUN_0c0dc4e8(char *o)
{
    struct { float vz2, vx2, wx2, wz2, ground; signed char i; VEC3 b; VEC3 a; VEC3 w; VEC3 v; } s;
    int *lim;
    float f1, f2, h, sn, d;

    lim = ((int **)0x0C33FA3C)[*(signed char *)0x0C7F3051];
    s.v.x = P1->x - P0->x;
    s.v.z = P1->z - P0->z;
    d = P0->y - P1->y;
    s.v.y = (0.0f > d ? P1->y - P0->y : d) + 170.0f;
    s.v.x = (P1->x + P0->x) / 2.0f;
    s.v.y = 0.0f;
    s.v.z = (P1->z + P0->z) / 2.0f;
    if (s.v.z == 0.0f)
        s.v.z = 9.99999997e-07f;
    I(o, 0x110) = math_atan2_angle16(s.v.x, s.v.z);
    I(o, 0x110) = I(o, 0x110) & 0xFFFF;
    for (s.i = 0; s.i < 5; s.i++) {
        if (I(o, 0x110) >= lim[0]) {
            lim++;
            I(o, 0x110) = lim[0];
            break;
        }
        lim += 2;
    }
    I(o, 0x114) = I(o, 0x110);
    s.v.x = P1->x - P0->x;
    s.v.z = P1->z - P0->z;
    d = P0->y - P1->y;
    s.v.y = (0.0f > d ? P1->y - P0->y : d) + 170.0f;
    s.vx2 = s.v.x;
    s.vz2 = s.v.z;
    F(o, 0x130) = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
    F(o, 0x130) = F(o, 0x130) + (float)(((int *)0x0C33F990)[((signed char *)P0)[4]] + ((int *)0x0C33F990)[((signed char *)P1)[4]]);
    F(o, 0x130) = F(o, 0x130) + 100.0f;
    F(o, 0x130) = F(o, 0x130) / 2.0f * F(o, 24) / (F(o, 28) / 2.0f * 1.0f);
    h = s.v.y / 2.0f * F(o, 24) / (F(o, 32) / 2.0f * 0.799999952f);
    if (h > F(o, 0x130))
        F(o, 0x130) = h;
    if (600.0f > F(o, 0x130))
        F(o, 0x130) = 600.0f;
    I(o, 0x150) = 2730;
    s.w.x = P1->x - P0->x;
    s.w.y = *(float *)((char *)P1 + 0x2D4) - *(float *)((char *)P0 + 0x2D4);
    s.w.z = P1->z - P0->z;
    s.wx2 = s.w.x;
    s.wz2 = s.w.z;
    s.ground = math_signed_sqrt(s.wz2 * s.wz2 + s.w.x * s.wx2);
    s.w.x = F(o, 0xBC) - F(o, 0xEC);
    s.w.y = 0.0f;
    s.w.z = F(o, 0xC4) - F(o, 0xF4);
    s.a.x = P0->x - F(o, 0xEC);
    s.a.y = 0.0f;
    s.a.z = P0->z - F(o, 0xF4);
    s.b.x = P1->x - F(o, 0xEC);
    s.b.y = 0.0f;
    s.b.z = P1->z - F(o, 0xF4);
    f1 = math_vec2_cos_between(s.w.x, s.w.z, s.a.x, s.a.z);
    f2 = math_vec2_cos_between(s.w.x, s.w.z, s.b.x, s.b.z);
    if (0.0f > f1)
        f1 = f1 * -1.0f;
    if (0.0f > f2)
        f2 = f2 * -1.0f;
    if (f1 > f2)
        f1 = f2;
    if (!(0.785398066f > f1)) {
        F(o, 0x130) = F(o, 0x130) + 0.149999991f * (F(o, 0x130) * f1);
        if (!(s.ground > 400.0f))
            I(o, 0x150) = 4551;
    }
    F(o, 0x134) = F(o, 0x130);
    I(o, 0x140) = (int)(f1 * ((-F(o, 0x130) + 1696.79980f) / 1696.79980f) * 2730.0f + 4369.0f * (1.0f - f1));
    I(o, 0x144) = I(o, 0x140);
    I(o, 0x154) = I(o, 0x150);
    sn = F(o, 0x134) * math_cos_angle16(I(o, 0x154));
    F(o, 0xE0) = (P0->x + P1->x) * 0.5f;
    F(o, 0xE8) = (P0->z + P1->z) * 0.5f;
    F(o, 0xE4) = (P0->y + P1->y + 200.0f) * 0.5f;
    *(VEC3 *)(o + 0xEC) = *(VEC3 *)(o + 0xE0);
    F(o, 0xB4) = F(o, 0xF0) + F(o, 0x134) * math_tan_angle16(I(o, 0x154));
    F(o, 0xC0) = F(o, 0xB4);
    if (F(o, 0xC0) > 500.0f)
        F(o, 0xC0) = 500.0f;
    F(o, 0xBC) = F(o, 0xEC) + sn * math_sin_angle16(I(o, 0x114));
    F(o, 0xC4) = F(o, 0xF4) + sn * math_cos_angle16(I(o, 0x114));
    I(o, 0x120) = 0;
    I(o, 0x124) = I(o, 0x120);
}
