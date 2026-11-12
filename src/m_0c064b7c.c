/* @unit 0c064b7c-0c064cc8 */
typedef struct {
    char pad0[10]; char b10; char pad1[44-11]; int i44; int i48; int i52;
    float f56, f60, f64, f68, f72, f76;
    char pad2[236-80]; short s236; char pad3[242-238]; short s242;
    char pad4[729-244]; char b729; char pad5[29096-730]; char b29096; char b29097;
} O;
extern char FUN_0c09a910(O *);
extern char FUN_0c09e7b8(O *, float);
extern char FUN_0c09c894(O *);
extern void FUN_0c09a808(O *, int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c09d990(O *);
extern void FUN_0c0a2e26(O *, int, int);
void FUN_0c064b7c(O *p)
{
    if (p->s242) { p->b729 = 2; p->s242--; }
    FUN_0c09a910(p);
    if (FUN_0c09e7b8(p, 0.0f) || FUN_0c09c894(p) == 2) {
        p->i44 = p->i52 = 0;
        FUN_0c09a808(p, 0, 8);
        p->b29096 = p->b29097 = 1;
        p->f56 = -(FUN_0c0df4d0(0x14000 - p->i48) * 3.0f);
        p->f64 = -(FUN_0c0dfa50(0x14000 - p->i48) * 3.0f);
        p->f60 = 10.0f;
        p->f72 = -1.2249999f;
        p->f68 = p->f76 = 0;
        p->b10 = 3;
        return;
    }
    if (--p->s236 == 0) {
        p->i44 = p->i52 = 0;
        FUN_0c09a808(p, 1, 53);
        p->b29096 = p->b29097 = 1;
        p->b10++;
    }
    FUN_0c09d990(p);
}
void FUN_0c064c66(O *p)
{
    if (FUN_0c09a910(p)) FUN_0c0a2e26(p, 14, 0);
}
