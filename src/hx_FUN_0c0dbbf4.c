/* Camera/effect aim between the two fighters: A = the leading fighter's position raised by 230, B = the other's raised
   by 200 (never above A); the direction B->A is normalised (FUN_0c0e24f0) and A pushed 500 units along it (not below the
   floor). B and A are copied to o+0x188 / o+0x194 with pointers to them at +0x1A0 / +0x1A4, a 52-byte template from
   0x0C155360 to +0x1A8, and the ground distance between the fighters (FUN_0c0df340 = sqrtf) sets the zoom 10000/d,
   clamped to 10..100, at +0x1C2 / +0x1C6; then FUN_0c0d9288(o, o+0x1A8) and FUN_0c0d827e(o). */
void FUN_0c0e24f0(float *v);
float FUN_0c0df340(float x);
void FUN_0c0d9288(char *o, void *p);
void FUN_0c0d827e(char *o);

typedef struct { float x, y, z; } VEC3;
typedef struct { char b[52]; } TPL52;
typedef struct { char pad[0x20]; float x, y, z; } FIGHTER;

#define FIGHTERS 0xC7E40C4

void FUN_0c0dbbf4(char *o)
{
    struct { FIGHTER *p1; float dx, dz; FIGHTER *p0; VEC3 b; VEC3 a; VEC3 d; } s;
    int t;
    FIGHTER *pa, *pb;
    float dist, zoom;

    t = 1;
    if (*(unsigned char *)0xC7F3073 == 1)
        t = 0;
    pa = (FIGHTER *)((unsigned short)((unsigned short)(signed char)t * (unsigned short)0x72D0) + FIGHTERS);
    s.a.x = pa->x;
    s.a.z = pa->z;
    s.a.y = pa->y + 230.0f;
    pb = (FIGHTER *)((unsigned short)((unsigned short)(1 - (signed char)t) * (unsigned short)0x72D0) + FIGHTERS);
    s.b.x = pb->x;
    s.b.z = pb->z;
    s.b.y = pb->y + 200.0f;
    if (s.b.y > s.a.y)
        s.b.y = s.a.y;
    s.d.x = s.a.x - s.b.x;
    s.d.z = s.a.z - s.b.z;
    s.d.y = s.a.y - s.b.y;
    if (s.d.x == 0.0f && s.d.z == 0.0f && s.d.y == 0.0f) {
        s.d.y = 9.99999975e-05f;
        s.d.z = 9.99999975e-05f;
        s.d.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&s.d.x);
    s.a.x = s.a.x + 500.0f * s.d.x;
    s.a.z = s.a.z + 500.0f * s.d.z;
    s.a.y = s.a.y + 500.0f * s.d.y;
    if (0.0f > s.a.y)
        s.a.y = 0.0f;
    s.p0 = (FIGHTER *)FIGHTERS;
    s.p1 = (FIGHTER *)(FIGHTERS + 0x72D0);
    s.dx = s.p0->x - s.p1->x;
    s.dz = s.p0->z - s.p1->z;
    dist = FUN_0c0df340(s.dz * s.dz + s.dx * s.dx);
    *(VEC3 *)(o + 0x188) = s.b;
    *(VEC3 *)(o + 0x194) = s.a;
    *(VEC3 **)(o + 0x1A0) = (VEC3 *)(o + 0x188);
    *(VEC3 **)(o + 0x1A4) = (VEC3 *)(o + 0x194);
    *(TPL52 *)(o + 0x1A8) = *(TPL52 *)0x0C155360;
    if (500.0f > dist) {
        zoom = 10000.0f / dist;
        if (10.0f > zoom)
            zoom = 10.0f;
        if (zoom > 100.0f)
            zoom = 100.0f;
    } else {
        zoom = 10.0f;
    }
    *(short *)(o + 0x1C6) = (short)(int)zoom;
    *(short *)(o + 0x1C2) = (short)(int)zoom;
    FUN_0c0d9288(o, o + 0x1A8);
    FUN_0c0d827e(o);
}
