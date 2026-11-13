/* Story-mode stage camera: on entry (+4 == 0) picks the yaw of the stage's angle table (0x0C33FA3C[stage], 5 {limit,
   angle} pairs) from the fighters' midpoint direction; every frame eases the yaw +0x114 by 1/10 towards it, frames
   both fighters (distance from their separation, size bonus 0x0C33F990 and 300, fitted to the aspect +0x18..+0x20,
   at least 600; 15% further and a higher pitch when both are off the view axis, FUN_0c062108), eases the distance
   +0x134 by 1/10 when off by more than 16, the pitch +0x140..+0x154, the look-at point (+0xE0..+0xF4, by 1/8) and the
   eye (+0xB4..+0xC4, height at most 500 unless both fighters are high in stages 1 and 8); when the eye leaves the
   800-unit box around the midpoint for more than 20 frames (counter 0x0C494B10) the camera restarts. The roll +0x124
   eases to 0 and FUN_0c0d827e applies it. */
int FUN_0c0df400(float x, float z);
float FUN_0c0df340(float x);
float FUN_0c062108(float ax, float az, float bx, float bz);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
float FUN_0c0dfce0(int angle);
void FUN_0c0d827e(char *o);

typedef struct { float x, y, z; } VEC3;
typedef struct { char pad[0x20]; float x, y, z; } FIGHTER;

#define P0 ((FIGHTER *)0xC7E40C4)
#define P1 ((FIGHTER *)(0xC7E40C4 + 0x72D0))
#define B(o, n) (*(signed char *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define STRAY (*(int *)0x0C494B10)
#define ABSD(a, b) (0.0f > (a) - (b) ? (b) - (a) : (a) - (b))

void FUN_0c0db1c0(char *o)
{
    struct { int *lim; signed char *pcnt; float wz2, wx2, mz2, mx2, vz2, vx2, ground; signed char cnt;
             VEC3 b; VEC3 a; VEC3 w; VEC3 v; } s;
    float d, f1, f2, sn, k;
    signed char m;

    s.lim = ((int **)0x0C33FA3C)[*(signed char *)0x0C7F3051];
    switch (B(o, 4)) {
    case 0:
        B(o, 4) = B(o, 4) + 1;
        B(o, 6) = 0;
        B(o, 5) = 0;
        s.v.x = P1->x - P0->x;
        s.v.z = P1->z - P0->z;
        s.v.y = ABSD(P0->y, P1->y) + 170.0f;
        s.v.x = (P1->x + P0->x) / 2.0f;
        s.v.y = 0.0f;
        s.v.z = (P1->z + P0->z) / 2.0f;
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        I(o, 0x110) = FUN_0c0df400(s.v.x, s.v.z);
        I(o, 0x110) = I(o, 0x110) & 0xFFFF;
        s.pcnt = &s.cnt;
        for (*s.pcnt = 0; *s.pcnt < 5; *s.pcnt = *s.pcnt + 1) {
            if (I(o, 0x110) >= s.lim[0]) {
                s.lim++;
                I(o, 0x110) = s.lim[0];
                break;
            }
            s.lim += 2;
        }
        I(o, 0x118) = 0;
        STRAY = 0;
    case 1:
        I(o, 0x114) = I(o, 0x114) & 0xFFFF;
        {
            int g = (unsigned short)(I(o, 0x110) - I(o, 0x114));
            if (g > 0x8000)
                g -= 0x10000;
            else if (!(g >= -32768))
                g += 0x10000;
            I(o, 0x114) = I(o, 0x114) + g / 10;
        }
        I(o, 0x114) = I(o, 0x114) & 0xFFFF;
        s.v.x = P1->x - P0->x;
        s.v.z = P1->z - P0->z;
        s.v.y = ABSD(P0->y, P1->y) + 170.0f;
        s.vx2 = s.v.x;
        s.vz2 = s.v.z;
        F(o, 0x130) = FUN_0c0df340(s.vz2 * s.vz2 + s.v.x * s.vx2);
        F(o, 0x130) = F(o, 0x130) + (float)(((int *)0x0C33F990)[((signed char *)P0)[4]] + ((int *)0x0C33F990)[((signed char *)P1)[4]]);
        F(o, 0x130) = F(o, 0x130) + 300.0f;
        F(o, 0x130) = F(o, 0x130) / 2.0f * F(o, 24) / (F(o, 28) / 2.0f * 1.0f);
        d = s.v.y / 2.0f * F(o, 24) / (F(o, 32) / 2.0f * 0.799999952f);
        if (d > F(o, 0x130))
            F(o, 0x130) = d;
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
        if (F(o, 0x134) > F(o, 0x130)) {
            if (ABSD(F(o, 0x130), F(o, 0x134)) > 16.0f)
                F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x134)) / 10.0f;
        } else {
            if (ABSD(F(o, 0x130), F(o, 0x134)) > 16.0f)
                F(o, 0x134) = F(o, 0x134) + (F(o, 0x130) - F(o, 0x134)) / 10.0f;
        }
        I(o, 0x140) = (int)(f1 * ((-F(o, 0x130) + 1696.79980f) / 1696.79980f) * 2730.0f + 4369.0f * (1.0f - f1));
        I(o, 0x144) = I(o, 0x144) + (I(o, 0x140) - I(o, 0x144)) / 4;
        I(o, 0x154) = I(o, 0x154) + (short)(I(o, 0x150) - I(o, 0x154)) / 16;
        sn = FUN_0c0df4d0(I(o, 0x154));
        k = F(o, 0x134) * sn;
        F(o, 0xE0) = (P0->x + P1->x) * 0.5f;
        F(o, 0xE8) = (P0->z + P1->z) * 0.5f;
        if (ABSD(F(o, 0xE0), F(o, 0xEC)) > 0.0698131621f)
            F(o, 0xEC) = F(o, 0xEC) + (F(o, 0xE0) - F(o, 0xEC)) / 8.0f;
        if (ABSD(F(o, 0xE8), F(o, 0xF4)) > 0.0698131621f)
            F(o, 0xF4) = F(o, 0xF4) + (F(o, 0xE8) - F(o, 0xF4)) / 8.0f;
        F(o, 0xE4) = (P0->y + P1->y + 200.0f) * 0.5f;
        if (ABSD(F(o, 0xE4), F(o, 0xF0)) > 10.0f)
            F(o, 0xF0) = F(o, 0xF0) + (float)((short)(int)(F(o, 0xE4) - F(o, 0xF0)) / 8);
        F(o, 0xB4) = F(o, 0xF0) + F(o, 0x134) * FUN_0c0dfce0(I(o, 0x154));
        m = *(signed char *)0x0C7F3051;
        if (m == 1 || m == 8) {
            if ((500.0f > P0->y || 500.0f > P1->y) && F(o, 0xB4) > 500.0f)
                F(o, 0xB4) = 500.0f;
        } else if (F(o, 0xB4) > 500.0f) {
            F(o, 0xB4) = 500.0f;
        }
        F(o, 0xC0) = F(o, 0xC0) + (F(o, 0xB4) - F(o, 0xC0)) / 20.0f;
        F(o, 0xBC) = F(o, 0xEC) + k * FUN_0c0dfa50(I(o, 0x114));
        F(o, 0xC4) = F(o, 0xF4) + k * FUN_0c0df4d0(I(o, 0x114));
        k = F(o, 0x134) * FUN_0c0df4d0(I(o, 0x154));
        s.w.x = F(o, 0xEC) + k * FUN_0c0dfa50(I(o, 0x110));
        s.w.z = F(o, 0xF4) + k * FUN_0c0df4d0(I(o, 0x110));
        if (s.w.x > 800.0f || -800.0f > s.w.x || s.w.z > 800.0f || -800.0f > s.w.z) {
            s.w.x = (P1->x + P0->x) / 2.0f;
            s.w.z = (P1->z + P0->z) / 2.0f;
            s.mx2 = s.w.x;
            s.mz2 = s.w.z;
            if (FUN_0c0df340(s.mz2 * s.mz2 + s.w.x * s.mx2) > 100.0f) {
                STRAY = STRAY + 1;
                if (STRAY > 20) {
                    B(o, 6) = 0;
                    B(o, 5) = 0;
                    B(o, 4) = 0;
                }
            }
        } else {
            STRAY = 0;
        }
        I(o, 0x120) = 0;
        I(o, 0x124) = I(o, 0x124) + (short)(I(o, 0x120) - I(o, 0x124)) / 10;
        break;
    }
    FUN_0c0d827e(o);
}
