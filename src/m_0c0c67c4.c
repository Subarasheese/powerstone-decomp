/* @unit 0c0c67c4-0c0c681a */
struct V3 { float x, y, z; };
struct V { char p[32]; struct V3 a; struct V3 x; struct V3 b; struct V3 c; };
void FUN_0c0c67c4(struct V *v)
{
    v->a.x += v->b.x;
    v->a.y += v->b.y;
    v->a.z += v->b.z;
    v->b.x += v->c.x;
    v->b.y += v->c.y;
    v->b.z += v->c.z;
}
