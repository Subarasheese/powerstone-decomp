/* @unit 0c0dbe30-0c0dbf94 -macsave=1 */
/* _quick_odd_mvn _quick_mvn */
struct V { float x, y, z; };
struct B { int w[13]; };
struct E { char pad[32]; struct V v; };
struct P { signed char k; char pad[391]; struct V a; struct V b; struct V *pa; struct V *pb; struct B t; };
extern char g_players[];
extern struct B g_tab155394;
extern void FUN_0c0e24f0(struct V *);
extern void cam_compute_follow(struct P *, void *);
extern void FUN_0c0d827e(struct P *);
void cam_mode_00_variant2(struct P *p0)
{
    struct V d, v1, v0;
    register struct V *q1 = &v1;
    register struct P *p = p0;
    register struct V *q0 = &v0;
    struct E *e1, *e0;
    e0 = (struct E *)(g_players + (unsigned short)((1 - (signed char)p->k) * 29392));
    e1 = (struct E *)(g_players + (unsigned short)(p->k * 29392));
    q1->x = e1->v.x;
    q1->y = e1->v.y + 400.0f;
    q1->z = e1->v.z;
    *q0 = e0->v;
    d.x = q1->x - q0->x;
    d.z = q1->z - q0->z;
    d.y = q1->y - q0->y;
    if (d.x == 0.0f && d.z == 0.0f && d.y == 0.0f)
        d.y = d.z = d.x = 0.0001f;
    FUN_0c0e24f0(&d);
    q1->x += d.x * 800.0f;
    q1->z += d.z * 800.0f;
    q1->y += d.y * 800.0f;
    if (q1->y < 0.0f) q1->y = 0.0f;
    p->a = *q0;
    p->b = *q1;
    p->pa = &p->a;
    p->pb = &p->b;
    p->t = g_tab155394;
    cam_compute_follow(p, &p->t);
    FUN_0c0d827e(p);
}
