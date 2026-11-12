/* @unit 0c01d254-0c01d304 */
struct H { float h; struct E *ep; };
struct E { unsigned char b0, b1; unsigned short s2; short s4; short s6; };
struct O {
    char p0[32]; float a, b, c; int p1; int d; int e; char p2[24];
    float f, g; char p3[688]; char hh[8];
};
struct L { int z; float a, b, c, d, e; int pad[4]; int p; float q; int pp; int r; };
void FUN_0c027fa4(void *, int, int, int, int, int);
void FUN_0c01d254(struct O *o);
void FUN_0c01d254(struct O *o)
{
    struct L l;
    struct H *hp;
    struct E *e;
    hp = (struct H *)((char *)o + 776);
    e = hp->ep;
    l.a = o->a + e->s4;
    l.b = o->b + e->s6;
    l.c = o->c;
    l.d = o->f;
    l.e = o->g;
    l.p = o->e;
    l.q = hp->h;
    l.r = e->s2;
    if ((unsigned short)o->d < 16384)
        FUN_0c027fa4(&l, 0x0c17fe98, e->b0, e->b1, 0, 0);
    else
        FUN_0c027fa4(&l, 0x0c17fe98, e->b0, e->b1, 1, 0);
}

