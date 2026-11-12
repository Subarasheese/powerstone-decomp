/* @unit 0c071b2c-0c071c50 */
typedef struct T {
    char p0[10]; char b10; char p1[17]; struct T *o; char p2[4]; float f24;
    char p3[0xec-0x28]; volatile short se; short sf;
    char p4[0x710a-0xf0]; char c710a; char p5[0x71a8-0x710b]; char a8; char a9; char p6[0x71f1-0x71aa]; char c71f1;
} T;
extern void FUN_0c09a910(T *), FUN_0c09da1c(T *), FUN_0c09a91a(T *), FUN_0c0a3914(T *, int);
extern void FUN_0c09d990(T *), FUN_0c09d9bc(T *), FUN_0c0dc18e(int, int), FUN_0c08eba8(T *, int), FUN_0c08deec(T *, int), FUN_0c09c45a(T *), FUN_0c09a808(T *, int, int);
extern char FUN_0c09e7b8(T *, float);
extern void FUN_0c071b94(T *);
void FUN_0c071b2c(T *p)
{
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    FUN_0c09a91a(p->o);
    FUN_0c09da1c(p->o);
    if (!(--p->sf)) { if (!p->o->c71f1) { p->o->c710a = 1; } }
    if (p->se) {
        p->se--;
    } else {
        p->b10++;
        FUN_0c0a3914(p->o, 12);
        FUN_0c071b94(p);
    }
}
void FUN_0c071b94(T *p)
{
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    p->o->f24 = p->f24;
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    FUN_0c09a91a(p->o);
    FUN_0c09da1c(p->o);
    if (FUN_0c09e7b8(p, 0.0f)) {
        FUN_0c0dc18e(10, 10);
        FUN_0c08eba8(p, 50);
        FUN_0c08deec(p, 50);
        FUN_0c09c45a(p);
        FUN_0c09a808(p, 4, 4);
        p->a8 = p->a9 = 1;
        p->se = 17;
        p->b10++;
    }
}
