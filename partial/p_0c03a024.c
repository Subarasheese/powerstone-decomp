/* @unit 0c03a024-0c03a12c -extra=a=400 */
/* _quick_odd_mvn */
struct V { int a, b, c; };
struct E { char b0, b1, b2, b3, b4, b5; short w6; char b8, b9; char p10[6]; void (*f16)(void); char p20[8]; int *i28; struct V v32; char p44[0]; };
struct E2 { char p[28]; char *c28; };
struct F { char b0, b1, b2, b3, b4, b5; short w6; char b8, b9; char p10[6]; void (*f16)(void); char p20[8]; char *p28; struct V v32; struct V v44; char p56[24]; struct V v80; char p92[236-92]; short w236, w238; char p240[40]; char *p280; char p284[0x2e0-284]; char *p2e0; };
struct A { char a0, a1, a2, a3; char p[0x880-4]; };
extern struct F *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(char *, int);
extern void FUN_0c059330(struct F *);
extern struct V g_321560, g_321578, g_32156c;
extern char g_0c6002d0[];
void FUN_0c03a0cc(struct F *);
void FUN_0c03a024(struct A *a)
{
    register struct F *e;
    register int one;
    register int zero;
    if ((e = FUN_0c059132(5, 1, 1, 0))) {
        one = 1;
        zero = 0;
        e->b0 = one;
        e->b1 = one;
        e->b3 = a->a3;
        e->w6 = one;
        e->b5 = 25;
        e->b8 = zero;
        e->b9 = zero;
        e->w236 = zero;
        e->w238 = zero;
        e->v32 = g_321560;
        e->v44 = g_321578;
        e->v80 = g_32156c;
        e->p280 = (char *)a + 0x880;
        *(struct A **)&e->p28 = a;
        e->f16 = (void (*)(void))FUN_0c03a0cc;
        FUN_0c06233a(e->p2e0, (int)g_0c6002d0 + (signed char)(a->a3 * 24));
        *e->p2e0 = one;
        ((short *)e->p2e0)[1] = one;
    }
}
void FUN_0c03a0cc(struct F *e)
{
    if (e->b8 == 0) {
        e->w236++;
        if (e->w236 >= 75 || *(char *)(e->p28 + 0x71ba) != 22)
            e->b8++;
    } else
        FUN_0c059330(e);
}
