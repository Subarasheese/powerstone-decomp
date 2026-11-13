/* Versus camera: yaw from the midpoint of the two fighters (FUN_0c0df400 = atan2) snapped through the stage's angle table
   (0x0C33FA3C[stage]: 5 {limit, angle} pairs), distance from the fighters' ground separation plus both characters'
   size bonus (0x0C33F990) and 100, fitted to the screen's aspect (+0x18 / +0x1C / +0x20) horizontally and vertically, at
   least 600; when both fighters are far off the current view axis (FUN_0c062108 = signed distance to a line, angle >=
   pi/4) it pulls back 15% more and widens the pitch. Then the pitch +0x140, the look-at point (+0xE0, copied to +0xEC)
   and the eye (+0xB4, +0xBC, +0xC4; height at most 500) from sin/cos (FUN_0c0df4d0 / FUN_0c0dfce0 / FUN_0c0dfa50). */
int FUN_0c0df400(float x, float z);
float FUN_0c0df340(float x);
float FUN_0c062108(float ax, float az, float bx, float bz);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfce0(int angle);
float FUN_0c0dfa50(int angle);

typedef struct { float x, y, z; } VEC3;
typedef struct { char pad[0x20]; float x, y, z; } FIGHTER;

#define P0 ((FIGHTER *)0xC7E40C4)
#define P1 ((FIGHTER *)(0xC7E40C4 + 0x72D0))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

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
    I(o, 0x110) = FUN_0c0df400(s.v.x, s.v.z);
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
    F(o, 0x130) = FUN_0c0df340(s.vz2 * s.vz2 + s.v.x * s.vx2);
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
    s.ground = FUN_0c0df340(s.wz2 * s.wz2 + s.w.x * s.wx2);
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
    if (!(0.785398066f > f1)) {
        F(o, 0x130) = F(o, 0x130) + 0.149999991f * (F(o, 0x130) * f1);
        if (!(s.ground > 400.0f))
            I(o, 0x150) = 4551;
    }
    F(o, 0x134) = F(o, 0x130);
    I(o, 0x140) = (int)(f1 * ((-F(o, 0x130) + 1696.79980f) / 1696.79980f) * 2730.0f + 4369.0f * (1.0f - f1));
    I(o, 0x144) = I(o, 0x140);
    I(o, 0x154) = I(o, 0x150);
    sn = F(o, 0x134) * FUN_0c0df4d0(I(o, 0x154));
    F(o, 0xE0) = (P0->x + P1->x) * 0.5f;
    F(o, 0xE8) = (P0->z + P1->z) * 0.5f;
    F(o, 0xE4) = (P0->y + P1->y + 200.0f) * 0.5f;
    *(VEC3 *)(o + 0xEC) = *(VEC3 *)(o + 0xE0);
    F(o, 0xB4) = F(o, 0xF0) + F(o, 0x134) * FUN_0c0dfce0(I(o, 0x154));
    F(o, 0xC0) = F(o, 0xB4);
    if (F(o, 0xC0) > 500.0f)
        F(o, 0xC0) = 500.0f;
    F(o, 0xBC) = F(o, 0xEC) + sn * FUN_0c0dfa50(I(o, 0x114));
    F(o, 0xC4) = F(o, 0xF4) + sn * FUN_0c0df4d0(I(o, 0x114));
    I(o, 0x120) = 0;
    I(o, 0x124) = I(o, 0x120);
}
