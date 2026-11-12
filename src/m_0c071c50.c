/* @unit 0c071c50-0c071e60 */
typedef struct Z Z;
struct Z { char pad0[9]; char c9; char c10; char c11; char c12; char pad13[15]; Z *z28; char pad32[16]; int l48; char pad52[4]; float f56; float f60; float f64; char pad68[4]; float f72; char pad76[160]; short w236; char pad238[28701]; char b28939; char b28940; char pad28941[155]; char b29096; char b29097; char b29098; };
typedef Z *P;
void FUN_0c09d990(P);
void FUN_0c09d9bc(P);
void FUN_0c09a910(P);
void FUN_0c09da1c(P);
void FUN_0c09a91a(P);
void FUN_0c09a828(P, int, int);
void FUN_0c0a2080(P);
void FUN_0c0a2e26(P, int, int);
int FUN_0c09db78(P);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
void FUN_0c071d0e(P);
void FUN_0c071d20(P);
void FUN_0c071d88(P);

void FUN_0c071c50(P p)
{
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    if (--p->w236 == 0) {
        p->z28->c10 = 2;
        p->z28->w236 = 0;
        p->l48 = FUN_0c09db78(p);
        p->f56 = -(FUN_0c0df4d0(0x14000 - p->l48) * 5.0f);
        p->f64 = -(FUN_0c0dfa50(0x14000 - p->l48) * 5.0f);
        p->f60 = 15.0f;
        p->f72 = -0.75f;
        p->c10++;
    }
}
void FUN_0c071cda(P p)
{
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    if (p->b29098)
        FUN_0c0a2080(p);
}
void FUN_0c071d0e(P p)
{
    if (p->z28->c9 != 2)
        FUN_0c0a2080(p);
}
void FUN_0c071d20(P p)
{
    FUN_0c09a91a(p);
    FUN_0c09da1c(p);
    if (p->b29098)
        FUN_0c0a2e26(p, 15, 0);
}
void FUN_0c071d88(P p)
{
    switch (p->c12) {
    case 0:
        FUN_0c09a91a(p);
        FUN_0c09da1c(p);
        break;
    case 1:
        FUN_0c09a828(p, 4, 64);
        p->b29097 = 1;
        p->b29096 = 1;
        p->b28939 = 1;
        p->b28940 = 1;
        p->c12++;
    case 2:
        FUN_0c09a91a(p);
        FUN_0c09da1c(p);
        if (p->b29098) {
            FUN_0c09a828(p, 2, 99);
            p->c12++;
        }
        break;
    case 3:
        FUN_0c09a91a(p);
        FUN_0c09da1c(p);
        if (p->b29098)
            FUN_0c0a2e26(p, 15, 0);
        break;
    }
}
void FUN_0c071e28(P p)
{
    switch (p->c11) {
    case 0: FUN_0c071d0e(p); break;
    case 1: FUN_0c071d20(p); break;
    case 2: FUN_0c071d88(p); break;
    }
}
