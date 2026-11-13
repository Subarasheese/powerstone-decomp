/* State machine of a burst effect: scatters two child sprites round a point near its target, holds, shrinks them by 0.8 per tick and releases. */
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0c7c2c(int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);

struct V3 { float x, y, z; };
struct Kid {
    char p0[0x10];
    int ang0;               /* 0x10 */
    int ang1;               /* 0x14 */
    char p18[0x44 - 0x18];
    float s0, s1, s2;       /* 0x44 */
};
struct Obj {
    char p0[8];
    signed char state;      /* 0x08 */
    char c9;                /* 0x09 */
    char pa[0x20 - 0xA];
    struct V3 pos;          /* 0x20 */
    struct V3 aux;          /* 0x2C */
    char p38[0xEC - 0x38];
    short t;                /* 0xEC */
    short f1;               /* 0xEE */
    short f2;               /* 0xF0 */
    short f3;               /* 0xF2 */
    char pF4[0x105 - 0xF4];
    char c105;
    char p106[0x2E0 - 0x106];
    struct Kid *kid0;       /* 0x2E0 */
    struct Kid *kid1;       /* 0x2E4 */
};

void FUN_0c0c7f48(struct Obj *o)
{
    struct V3 v;
    float a, r;
    int ang;

    if (FUN_0c0555dc() != 0) {
        o->state = 3;
    }
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        v = o->pos;
        v.x = v.x + 500.0f * FUN_0c0dfa50(*(int *)((char *)o + 0x30));
        v.z = v.z + 500.0f * FUN_0c0df4d0(*(int *)((char *)o + 0x30));
        v.y = v.y + 10.0f * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 30);
        if (o->f3 != 0) {
            v.y = v.y - 150.0f;
        }
        a = (float)((unsigned)(FUN_0c0df940() * 255.0f) % 32);
        ang = (int)(a * 134217728.0f / 360.0f);
        r = -300.0f + 100.0f * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 6);
        v.x = v.x + r * FUN_0c0dfa50(ang);
        v.z = v.z + r * FUN_0c0df4d0(ang);
        o->pos = v;
        o->aux = *(struct V3 *)0xC153288;
        o->kid0->ang0 = (int)((float)((unsigned)(FUN_0c0df940() * 255.0f) % 61) * 65536.0f / 360.0f) - 5461;
        o->kid0->ang1 = (int)((float)((unsigned)(FUN_0c0df940() * 255.0f) % 61) * 65536.0f / 360.0f) - 5461;
        o->kid1->ang0 = o->kid0->ang0;
        o->t = 20;
        o->f1 = 1;
        o->f2 = 8;
        o->c9 = 0;
        o->c105 = 0;
        FUN_0c0c7c2c((int)o);
        o->t = o->t - 1;
        if (o->t == 0) {
            o->state = o->state + 1;
            o->t = 6;
        }
        break;
    case 1:
        FUN_0c0c7c2c((int)o);
        o->t = o->t - 1;
        if (o->t == 0) {
            o->state = o->state + 1;
            o->t = 6;
        }
        break;
    case 2:
        FUN_0c0c7c2c((int)o);
        o->kid0->s0 = o->kid0->s0 * 0.799999952f;
        o->kid0->s1 = o->kid0->s1 * 0.799999952f;
        o->kid0->s2 = o->kid0->s2 * 0.799999952f;
        o->kid1->s0 = o->kid1->s0 * 0.799999952f;
        o->kid1->s1 = o->kid1->s1 * 0.799999952f;
        o->kid1->s2 = o->kid1->s2 * 0.799999952f;
        o->t = o->t - 1;
        if (o->t == 0) {
            o->state = o->state + 1;
            o->c105 = 1;
        }
        break;
    case 3:
        FUN_0c059330((int)o);
        break;
    }
}
