/* Smoothed versus camera (the per-frame follow of FUN_0c0dc4e8): target distance from the fighters' separation, size
   bonus (0x0C33F990), aspect (+0x18..+0x20, zoom factor 0.9..1.0) and height spread, at least 600 (32 more and a
   higher pitch when both are far off the view axis, FUN_0c062108), eased in by 1/32 or 1/2 when off by more than 16;
   the yaw +0x114 follows the midpoint direction (FUN_0c0df400 = atan2) by 1/100 of the gap or 81 units per frame,
   pitch +0x144 / +0x154 ease in by 1/4 and 1/16, the look-at point (+0xEC / +0xF4) follows the midpoint by 1/8, its
   height +0xF0 the fighters' heights, the eye (+0xB4..+0xC4) is placed from sin/cos (FUN_0c0df4d0 / FUN_0c0dfa50 /
   FUN_0c0dfce0), the roll +0x124 eases to 0, then FUN_0c0d827e applies it. */
float FUN_0c0df340(float x);
float FUN_0c062108(float ax, float az, float bx, float bz);
int FUN_0c0df400(float x, float z);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
float FUN_0c0dfce0(int angle);
void FUN_0c0d827e(char *o);

typedef struct { float x, y, z; } VEC3;
typedef struct { char pad[0x20]; float x, y, z; } FIGHTER;

#define P0 ((FIGHTER *)0xC7E40C4)
#define P1 ((FIGHTER *)(0xC7E40C4 + 0x72D0))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c0d87f6(char *o)
{
    struct { float vz2, vx2; VEC3 v; VEC3 b; VEC3 a; VEC3 w; } s;
    float d, z, f1, f2, sn, lo, hi;
    int ang, r4, gap, step;

    s.v.x = P1->x - P0->x;
    s.v.z = P1->z - P0->z;
    d = P0->y - P1->y;
    s.v.y = (0.0f > d ? P1->y - P0->y : d) + 170.0f;
    s.vx2 = s.v.x;
    s.vz2 = s.v.z;
    F(o, 0x130) = FUN_0c0df340(s.vz2 * s.vz2 + s.v.x * s.vx2);
    F(o, 0x130) = F(o, 0x130) + (float)(((int *)0x0C33F990)[((signed char *)P0)[4]] + ((int *)0x0C33F990)[((signed char *)P1)[4]]);
    z = F(o, 0x130) * 0.100000024f / 1500.0f + 0.899999976f;
    if (z > 1.0f)
        z = 1.0f;
    F(o, 0x130) = F(o, 0x130) / 2.0f * F(o, 24) / (F(o, 28) / 2.0f * z);
    d = s.v.y / 2.0f * F(o, 24) / (F(o, 32) / 2.0f * 0.799999952f);
    if (d > F(o, 0x130))
        F(o, 0x130) = d;
    if (600.0f > F(o, 0x130))
        F(o, 0x130) = 600.0f;
    I(o, 0x150) = 2730;
    s.w.x = F(o, 0xBC) - F(o, 0xEC);
    s.w.y = 0.0f;
    s.w.z = F(o, 0xC4) - F(o, 0xF4);
    s.a.x = P0->x - F(o, 0xEC);
    s.a.y = 0.0f;
    s.a.z = P0->z - F(o, 0xF4);
    s.b.x = P1->x - F(o, 0xEC);
    s.b.y = 0.0f;
    s.b.z = P1->z - F(o, 0xF4);
    f1 = FUN_0c062108(s.w.x, s.w.z, s.a.x, s.a.z);
    f2 = FUN_0c062108(s.w.x, s.w.z, s.b.x, s.b.z);
    if (0.0f > f1)
        f1 = f1 * -1.0f;
    if (0.0f > f2)
        f2 = f2 * -1.0f;
    if (f1 > f2)
        f1 = f2;
    if (f1 > 0.799999952f) {
        I(o, 0x150) = I(o, 0x150) + 910;
        F(o, 0x130) = F(o, 0x130) + 32.0f;
    }
    if (F(o, 0x134) > F(o, 0x130)) {
        d = F(o, 0x130) - F(o, 0x134);
        if ((0.0f > d ? F(o, 0x134) - F(o, 0x130) : d) > 16.0f)
            F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x134)) / 32.0f;
    } else {
        d = F(o, 0x130) - F(o, 0x134);
        if ((0.0f > d ? F(o, 0x134) - F(o, 0x130) : d) > 16.0f)
            F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x134)) / 2.0f;
    }
    if (s.v.z == 0.0f)
        s.v.z = 9.99999997e-07f;
    ang = FUN_0c0df400(s.v.x, s.v.z);
    I(o, 0x110) = (unsigned short)(ang - I(o, 0x114) + 0x4000);
    if (I(o, 0x110) >= 0x4000 && !(I(o, 0x110) > 0xC000))
        I(o, 0x110) = ang + 0xC000;
    else
        I(o, 0x110) = ang + 0x4000;
    r4 = (unsigned short)I(o, 0x110);
    if (I(o, 0x110) - I(o, 0x114) > 0x8000)
        I(o, 0x110) = I(o, 0x110) - 0x10000;
    if (I(o, 0x110) - I(o, 0x114) < -32768)
        I(o, 0x110) = I(o, 0x110) + 0x10000;
    gap = r4 - I(o, 0x114);
    if (gap < 0)
        gap = I(o, 0x114) - r4;
    if (gap < 2730 || gap > 13653)
        step = (int)((float)(I(o, 0x110) - I(o, 0x114)) / 100.0f);
    else
        step = (r4 - I(o, 0x114) >= 0 ? 1 : -1) * 81;
    I(o, 0x114) = I(o, 0x114) + step;
    I(o, 0x114) = I(o, 0x114) & 0xFFFF;
    I(o, 0x140) = 4369;
    I(o, 0x144) = I(o, 0x144) + (I(o, 0x140) - I(o, 0x144)) / 4;
    I(o, 0x154) = I(o, 0x154) + (short)(I(o, 0x150) - I(o, 0x154)) / 16;
    sn = FUN_0c0df4d0(I(o, 0x154));
    sn = F(o, 0x134) * sn;
    F(o, 0xE0) = (P0->x + P1->x) / 2.0f;
    F(o, 0xE8) = (P0->z + P1->z) / 2.0f;
    d = F(o, 0xE0) - F(o, 0xEC);
    if ((0.0f > d ? F(o, 0xEC) - F(o, 0xE0) : d) > 0.0698131621f)
        F(o, 0xEC) = F(o, 0xEC) + (F(o, 0xE0) - F(o, 0xEC)) / 8.0f;
    d = F(o, 0xE8) - F(o, 0xF4);
    if ((0.0f > d ? F(o, 0xF4) - F(o, 0xE8) : d) > 0.0698131621f)
        F(o, 0xF4) = F(o, 0xF4) + (F(o, 0xE8) - F(o, 0xF4)) / 8.0f;
    F(o, 0xE4) = sn * FUN_0c0dfce0(I(o, 0x144));
    lo = P1->y > P0->y ? P0->y : P1->y;
    if (lo > 200.0f)
        F(o, 0xE4) = F(o, 0xE4) + lo;
    hi = P0->y > P1->y ? P0->y : P1->y;
    if (hi > F(o, 0xE4) + 0.0f)
        F(o, 0xE4) = F(o, 0xE4) + ((hi - F(o, 0xE4)) + -0.0f);
    d = F(o, 0xE4) - F(o, 0xF0);
    if ((0.0f > d ? F(o, 0xF0) - F(o, 0xE4) : d) > 10.0f)
        F(o, 0xF0) = F(o, 0xF0) + (float)((short)(int)(F(o, 0xE4) - F(o, 0xF0)) / 8);
    F(o, 0xB4) = F(o, 0xF0) + F(o, 0x134) * FUN_0c0dfa50(I(o, 0x154));
    F(o, 0xC0) = F(o, 0xC0) + (F(o, 0xB4) - F(o, 0xC0)) / 4.0f;
    F(o, 0xBC) = F(o, 0xEC) + sn * FUN_0c0dfa50(I(o, 0x114));
    F(o, 0xC4) = F(o, 0xF4) + sn * FUN_0c0df4d0(I(o, 0x114));
    I(o, 0x120) = 0;
    I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x124)) / 10;
    FUN_0c0d827e(o);
}
