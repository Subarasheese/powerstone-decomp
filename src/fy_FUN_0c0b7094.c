/* Moves object o to the point of p's vector shifted by an orbit step: radius scaled by p's factor at 0x7298 and o's halfword at 0xEC, direction from p's angle at 48 (cos/sin like helpers) and p's value at 44. */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
struct V3 { float x, y, z; };
struct P {
    char p0[44];
    int h;                  /* 44 */
    int ang;                /* 48 */
    char p52[0x7298 - 52];
    float k;                /* 0x7298 */
};
struct O {
    char p0[32];
    struct V3 pos;          /* 32 */
    char p44[0xEC - 44];
    short step;             /* 0xEC */
};
void FUN_0c0b7094(struct O *o, struct P *p)
{
    float k, r, a, b, c;
    struct V3 *src;

    k = p->k;
    r = (200.0f + 70.0f * (float)o->step) * k;
    a = FUN_0c0df4d0(0x14000 - p->ang) * r;
    b = FUN_0c0dfa50(0x14000 - p->ang) * r;
    c = FUN_0c0dfa50(p->h) * r;
    src = (struct V3 *)((char *)p + 32);
    o->pos = *src;
    o->pos.x = o->pos.x + a;
    o->pos.z = o->pos.z + b;
    o->pos.y = (o->pos.y - c) + 100.0f * k;
}
