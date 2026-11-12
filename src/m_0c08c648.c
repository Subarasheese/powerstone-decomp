/* @unit 0c08c648-0c08c864 */
typedef struct { float x, y, z; } V;
typedef struct T {
    char p0[10]; char b10; char b11; char p1[16]; struct T *o; V pos; char p2[4]; int d48; char p3[4];
    float f56, f60, f64, f68, f72; char p4[0xec-76]; short se; char p5[0x71a8-0xee]; char a8, a9; char p6[0x7248-0x71aa]; int a;
} T;
extern char FUN_0c09a910(T *);
extern char FUN_0c09e7b8(T *, float);
extern void FUN_0c09a808(T *, int, int), FUN_0c09d990(T *), FUN_0c09d9bc(T *), FUN_0c09da1c(T *);
extern float FUN_0c0df4d0(int), FUN_0c0dfa50(int);
extern void FUN_0c0dc18e(int, int), FUN_0c08eba8(T *, int), FUN_0c08deec(T *, int), FUN_0c09c422(T *), FUN_0c0980b0(T *), FUN_0c0a2080(T *);
extern char _quick_odd_mvn;
void FUN_0c08c648(T *p)
{
    FUN_0c09a910(p);
    p->o->pos = p->pos;
    if (p->se-- <= 0) {
        p->a = (unsigned short)((short)p->a + 0x160);
        p->d48 = (unsigned short)(p->d48 + (short)p->a);
        p->o->d48 = (unsigned short)(p->d48 + 0x8000);
    }
    if (FUN_0c09e7b8(p, 0.0f)) {
        FUN_0c09a808(p, 4, 3);
        p->a8 = p->a9 = 1;
        p->f60 = 18.0f;
        p->f72 = -0.9f;
        p->f56 = FUN_0c0df4d0(0x14000 - p->d48) * 3.3f;
        p->f64 = FUN_0c0dfa50(0x14000 - p->d48) * 3.3f;
        p->d48 = (unsigned short)(p->d48 + 0x8000);
        FUN_0c0dc18e(10, 10);
        FUN_0c08eba8(p, 50);
        FUN_0c08deec(p, 50);
        p->b10++;
        return;
    }
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
}
void FUN_0c08c732(T *p)
{
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    if (p->f60 < 0.0f && FUN_0c09e7b8(p, 0.0f)) {
        FUN_0c09c422(p);
        FUN_0c09a808(p, 1, 146);
        p->b10++;
        return;
    }
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
}
void FUN_0c08c7de(T *p)
{
    if (FUN_0c09a910(p)) FUN_0c0980b0(p);
}
extern void (*t3383b8[])(T *);
void FUN_0c08c800(T *p)
{
    t3383b8[p->b10](p);
}
typedef struct { char pad[0x71ba]; char c; } W;
void FUN_0c08c810(T *p)
{
    if (((W *)p->o)->c != 11) FUN_0c0a2080(p);
}
void FUN_0c08c824(T *p)
{
    if (((W *)p->o)->c != 11) FUN_0c0a2080(p);
}
void FUN_0c08c838(T *p)
{
    switch (p->b11) {
    case 0: FUN_0c08c810(p); break;
    case 1: FUN_0c08c824(p); break;
    }
}
