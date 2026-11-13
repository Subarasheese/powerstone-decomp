/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b7998-0c0b8460) */

float math_rand_float(void);
float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
struct fx_obj { float pad0; float vx; float vy; float vz; int ang_y; int ang_x; int ang_z; float sx; float sy; float sz;
                float dx; float dy; float dz; char pad34[0x94 - 0x34]; float frames; };
void thunk_math_mat_get_translate(char *slot, float *pos);
int math_atan_angle16(float x);
float math_signed_sqrt(float x);
int FUN_0c0555dc(void);
void FUN_0c048ea4(float *pos, float size);
void obj_destroy(char *o);
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define FLASH(o) (*(char **)((o) + 0x2E4))

void FUN_0c0b7998(struct fx_obj *o)
{
    unsigned int n;
    float speed, frames;

    n = (unsigned int)(math_rand_float() * 255.0f) % 36 * 10;
    o->ang_y = (int)((float)n * 65536.0f / 360.0f);
    n = (unsigned int)(math_rand_float() * 255.0f) % 36 * 10;
    o->ang_x = (int)((float)n * 65536.0f / 360.0f);
    o->ang_z = 0;
    n = (unsigned int)(math_rand_float() * 255.0f) % 200;
    speed = (float)n + 50.0f;
    o->vx = -(math_cos_angle16(0x14000 - o->ang_x) * math_sin_angle16(0x14000 - o->ang_y) * speed);
    o->vz = -(math_sin_angle16(0x14000 - o->ang_x) * math_sin_angle16(0x14000 - o->ang_y) * speed);
    o->vy = math_cos_angle16(0x14000 - o->ang_y) * speed;
    frames = (float)(int)((unsigned int)(math_rand_float() * 255.0f) % 10 + 10);
    o->frames = frames;
    o->dx = -o->vx / o->frames;
    o->dz = -o->vz / o->frames;
    o->dy = -o->vy / o->frames;
    o->sx = 1.0f;
    o->sy = 1.0f;
    o->sz = 1.0f;
}

void FUN_0c0b8084(char *o)
{
    struct { char *pl; float px, pz; float x, y, z; } s;
    signed char *q;
    int a;
    short d;
    float h, sn;

    q = (signed char *)(o + 0x308);
    if (q[0] != 0) {
        if ((q[0] + H(o, 0xF2)) % 10 == 0) {
            FLASH(o)[0] = 1;
            F(FLASH(o), 0x1C) = F(FLASH(o), 0x1C) + 0.0999999940f;
            F(FLASH(o), 0x20) = F(FLASH(o), 0x20) + 0.0999999940f;
            F(FLASH(o), 0x24) = F(FLASH(o), 0x24) + 0.0999999940f;
        } else {
            FLASH(o)[0] = 0;
        }
        q[0] = q[0] - 1;
        if (q[0] == 0) {
            F(FLASH(o), 0x1C) = 1.19999993f;
            F(FLASH(o), 0x20) = 1.19999993f;
            F(FLASH(o), 0x24) = 0.699999988f;
        }
    } else {
        q[1] = q[1] + 1;
        if ((q[1] + H(o, 0xF2)) & 3)
            FLASH(o)[0] = 0;
        else
            FLASH(o)[0] = 1;
    }
    if (H(o, 0xEC) >= 7 && H(o, 0xEC) < 40) {
        s.pl = PL(1 - B(o, 3));
        thunk_math_mat_get_translate(s.pl + 0x300 + (short)(B(s.pl, 0x71F1) * 3520), &s.x);
        s.x = s.x - F(o, 0x20);
        s.y = s.y - F(o, 0x24);
        s.z = s.z - F(o, 0x28);
        if (s.x == 0.0f)
            s.x = 9.99999997e-07f;
        a = math_atan_angle16(-s.z / s.x) & 0xFFFF;
        if (0.0f > s.x)
            a += 0x8000;
        d = (short)((unsigned short)(a + 0x4000) - I(o, 48));
        I(o, 48) = (unsigned short)(I(o, 48) + (d > 0 ? 546 : -546));
        s.px = s.x;
        s.pz = s.z;
        h = math_signed_sqrt(s.pz * s.pz + s.px * s.px);
        a = math_atan_angle16(-h / s.y);
        if (0.0f > s.y)
            a += 0x8000;
        d = (short)(-(int)(unsigned short)(a + 0x4000) - I(o, 44));
        I(o, 44) = (unsigned short)(I(o, 44) + (d > 0 ? 546 : -546));
    }
    sn = math_cos_angle16(0x14000 - I(o, 48));
    F(o, 56) = sn * math_sin_angle16(0x14000 - I(o, 44)) * 20.0f;
    sn = math_sin_angle16(0x14000 - I(o, 48));
    F(o, 64) = sn * math_sin_angle16(0x14000 - I(o, 44)) * 20.0f;
    F(o, 60) = -(math_cos_angle16(0x14000 - I(o, 44)) * 20.0f);
    F(o, 0x20) = F(o, 0x20) + F(o, 56);
    F(o, 0x28) = F(o, 0x28) + F(o, 64);
    F(o, 0x24) = F(o, 0x24) + F(o, 60);
    I(*(char **)(o + 0x2E0), 24) = (unsigned short)(I(*(char **)(o + 0x2E0), 24) + 910);
    H(o, 0xEC) = H(o, 0xEC) + 1;
    if (H(o, 0xEC) >= 180 || B(o, 0x108) != 0 || B(o, 0x2D8) != 0 || FUN_0c0555dc() != 0) {
        H(o, 0xEC) = 10;
        F(o, 84) = 1.0f;
        F(o, 88) = 1.0f;
        F(o, 80) = 1.0f;
        B(o, 8) = 4;
        FUN_0c048ea4((float *)(o + 0x20), 2.0f);
        obj_destroy(o);
    }
}
