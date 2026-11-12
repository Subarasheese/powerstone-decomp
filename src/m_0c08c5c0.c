/* @unit 0c08c5c0-0c08c648 */
struct Q { char pad[0x710a]; char f710a; char pad2[0x71f1-0x710b]; char f71f1; };
struct O { char c0[10]; char b10; char c1[17]; struct Q *q;  char c2[24]; float f56, f60, f64, f68, f72, f76;
  char c3[156]; short s236; short s238; char c4[29256-240]; int i; };
extern void FUN_0c09a910(struct O *);
void FUN_0c08c5c0(struct O *p)
{
    FUN_0c09a910(p);
    if (--p->s236 == 0) {
        p->f64 = 0.0f;
        p->f56 = 0.0f;
        p->f76 = 0.0f;
        p->f68 = 0.0f;
        p->f60 = 16.8f;
        p->f72 = -1.1999999f;
        p->s236 = 8;
        p->i = 0;
        p->b10++;
    }
    if (--p->s238 == 0) { if (!p->q->f71f1) p->q->f710a = 1; }
}
