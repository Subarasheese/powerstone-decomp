/* State machine of a thrown/spawned object: places itself at a random point round its target, then fades its child sprite and releases. */
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c06231c(int, int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0c8460(int);
int FUN_0c0c8580(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);

struct V3 { float x, y, z; };
struct Fx {
    char p0[0x44];
    float c0, c1, c2;       /* 0x44 */
};
struct Obj {
    char p0[3];
    char kind;              /* 0x03 */
    char p4[4];
    signed char state;      /* 0x08 */
    char p9[0x20 - 9];
    struct V3 pos;          /* 0x20 */
    char p2c[4];
    int ang;                /* 0x30 */
    char p34[0xEC - 0x34];
    short t;                /* 0xEC */
    short timer;            /* 0xEE */
    short f0;               /* 0xF0 */
    short f2;               /* 0xF2 */
    char pF4[0x101 - 0xF4];
    char c101;
    char c102;
    char p103[0x2EC - 0x103];
    struct Fx *fx;          /* 0x2EC */
    char **flagA;           /* 0x2F0 */
    char **flagB;           /* 0x2F4 */
};

void FUN_0c0c87b8(struct Obj *o)
{
    struct V3 v;
    float r, a;
    int ang;

    if (FUN_0c0555dc() != 0) {
        o->state = 5;
    }
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        o->c101 = 3;
        o->c102 = 0;
        FUN_0c0a1d88((int)o, 0x7A);
        v = o->pos;
        v.x = v.x + 500.0f * FUN_0c0dfa50(o->ang);
        v.z = v.z + 500.0f * FUN_0c0df4d0(o->ang);
        v.y = v.y + 10.0f * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 30);
        if (o->timer != 0) {
            v.y = v.y - 150.0f;
        }
        a = (float)((unsigned)(FUN_0c0df940() * 255.0f) % 32);
        ang = (int)(a * 134217728.0f / 360.0f);
        r = -500.0f + 100.0f * ((float)((unsigned)(FUN_0c0df940() * 255.0f) % 10) + 1.0f);
        v.x = v.x + r * FUN_0c0dfa50(ang);
        v.z = v.z + r * FUN_0c0df4d0(ang);
        o->pos = v;
        o->t = 10;
        o->f0 = 0;
        o->f2 = 1;
        break;
    case 1:
        FUN_0c0c8460((int)o);
        FUN_0c0c8580((int)o);
        o->t = o->t - 1;
        if (o->t == 0) {
            o->state = o->state + 1;
        }
        break;
    case 2:
        if ((signed char)FUN_0c0c8580((int)o) == 0) {
            o->state = o->state + 1;
            *(char *)o->fx = 1;
            o->t = 2;
            o->f2 = 0;
            *(char *)o->flagA = 0;
            *(char *)o->flagB = 0;
        }
        break;
    case 3:
        o->t = o->t - 1;
        if (o->t == 0) {
            o->t = 2;
            o->f2 = o->f2 + 1;
            if (o->f2 == 5) {
                o->state = o->state + 1;
            }
            FUN_0c06231c((int)o->fx, (signed char)(o->kind * 24) + 0xC6002D0, (signed char)o->f2 + 12);
        }
        break;
    case 4:
        o->fx->c0 = o->fx->c0 - 0.166666657f;
        o->fx->c1 = o->fx->c1 - 0.166666657f;
        o->fx->c2 = o->fx->c2 - 0.166666657f;
        if (!(o->fx->c2 > 0.0f)) {
            o->state = o->state + 1;
        }
        break;
    case 5:
        FUN_0c059330((int)o);
        break;
    }
}
