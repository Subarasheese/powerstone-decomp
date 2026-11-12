/* @unit 0c0af448-0c0af4ec -extra=a=400 */
/* _quick_odd_mvn */
struct V { int a, b, c; };
struct E { char b0, b1, b2, b3, b4, b5; short w6; char p8[8]; void (*f16)(void); char p20[60]; struct V v80; char p92[0x2e0-92]; char *p2e0;  char p2e4[0x308-0x2e4]; int *i308; char p30c[2]; char c30e; };
struct B { char p[0x2e0]; short *q; };
struct A { char a0, a1, a2; };
extern struct E *FUN_0c059132(int, int, int, int);
extern void FUN_0c0abd20(struct E *);
extern void FUN_0c06233a(char *, int, int);
extern struct V g_33a20c;
extern char g_p664958;
void FUN_0c0af4c6(void);
void FUN_0c0af448(struct A *a)
{
    register struct E *e;
    register int one;
    if ((e = FUN_0c059132(5, 1, 1, 0))) {
        one = 1;
        e->b0 = 1;
        e->b1 = one;
        e->b3 = 2;
        e->w6 = 33;
        e->b5 = 25;
        e->f16 = FUN_0c0af4c6;
        e->b4 = 13;
        *(struct A **)&e->i308 = a;
        e->c30e = a->a1;
        FUN_0c0abd20(e);
        e->v80 = g_33a20c;
        FUN_0c06233a(e->p2e0, (int)&g_p664958, a->a2);
        *e->p2e0 = one;
        ((short *)((struct B *)e)->q)[1] = one;
    }
}
void FUN_0c0af4c6(void) {}
