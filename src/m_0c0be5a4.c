/* @unit 0c0be5a4-0c0be698 */
typedef struct Z Z;
typedef struct Q { char pad0[16]; int i16; int i20; int i24; float f28; float f32; float f36; char pad40[24]; float f64; } Q;
struct Z { char pad0[8]; char c8; char pad9[19]; Z *z28; char pad32[206]; short w238; char pad240[21]; char b261; char b262; char b263; char pad264[472]; Q *q736; char pad740[28374]; char b29114; };
typedef Z *P;
int FUN_0c0555dc(P);
void FUN_0c059330(P);

void FUN_0c0be5a4(P p)
{
    float t;
    char *s;
    Q *q;
    if (FUN_0c0555dc(p) == 1)
        p->c8 = -1;
    if (p->z28->b29114 != 11)
        p->c8 = -1;
    s = &p->b261;
    s[0] = s[1] = s[2] = 2;
    switch (p->c8) {
    case 0:
        if ((p->q736->f64 = (float)p->w238 / 5.0f) >= 1.0f)
            p->q736->f64 = 1.0f;
        p->w238++;
        p->q736->i16 += 0x1000;
        p->q736->i20 += 0x1000;
        p->q736->i24 += 0x1000;
        if (p->q736->f28 > 0.0f) {
            p->q736->f28 -= 0.03333333f;
            p->q736->f32 -= 0.03333333f;
            p->q736->f36 -= 0.03333333f;
        } else {
            q = p->q736;
            q->f28 = q->f32 = q->f36 = 0.0f;
            p->c8++;
        }
        break;
    default:
        FUN_0c059330(p);
    }
}
