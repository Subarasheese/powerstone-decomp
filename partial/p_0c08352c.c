/* @unit 0c08352c-0c0835dc -extra=a=400 */
/* _quick_odd_mvn */
typedef struct { float x, y, z; } V;
typedef struct T {
    char p0[10]; char b10; char b11; char b12; char p1[15]; struct T *o; V pos; char p2[4]; int d48; char p3[4];
    char p4[0xec-56]; short se; short sf; char p5[0x710b-0xf0]; char c10b, c10c; char p6[0x71a8-0x710d]; char a8, a9;
} T;
extern void FUN_0c09a808(T *, int, int), FUN_0c09a828(T *, int, int);
extern char _quick_odd_mvn;
extern void FUN_0c09a910(T *), FUN_0c09da1c(T *), FUN_0c08eba8(T *, int), FUN_0c0dc18e(int, int), FUN_0c0a2080(T *);
void FUN_0c08352c(T *p)
{
    if (0) {
        FUN_0c09a910(p);
        if (--p->sf == 0) { if (!p->o->a9) p->o->a8 = 1; }
        FUN_0c09da1c(p); FUN_0c08eba8(p, 1); FUN_0c0dc18e(1, 1); FUN_0c0a2080(p);
    }
    p->o->pos = p->pos;
    p->o->d48 = (unsigned short)(p->d48 + 0x8000);
    FUN_0c09a808(p, 4, 2);
    p->a8 = p->a9 = 1;
    FUN_0c09a828(p->o, 4, 55);
    p->o->a8 = p->o->a9 = 1;
    p->o->c10b = 1; p->o->c10c = 1;
    p->se = 0;
    p->sf = 85;
    p->b10++;
    p->o->b11 = 2;
    p->o->b12 = 0;
}
