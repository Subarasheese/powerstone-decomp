/* @unit 0c06f4f0-0c06f8a8 */
typedef struct {
    char pad0[11]; char b11;
    char pad1[48-12]; int i48; int pad48b;
    float f56, f60, f64, f68, f72, f76;
    char pad2[236-80]; short s236; short s238; short s240; short s242;
    char pad3[740-244]; int i740;
    char pad4[29096-744]; char b29096; char b29097; char b29098;
    char pad5[29116-29099]; char b29116;
    char pad6[29184-29117]; int i29184;
    char pad7[29219-29188]; char b29219;
    char pad8[29372-29220]; char b29372;
} O;
extern char FUN_0c09a910(O *);
extern void FUN_0c09da1c(O *);
extern void FUN_0c09a808(O *, int, int);
extern void FUN_0c0a2080(O *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c09d990(O *);
extern void FUN_0c09d9bc(O *);
extern void FUN_0c0a1d88(O *, int);
extern char FUN_0c09e7b8(O *, float);
void FUN_0c06f4f0(O *p)
{
    FUN_0c09a910(p);
    FUN_0c09da1c(p);
    if (p->b29098) {
        FUN_0c09a808(p, 1, 99);
        p->b29096 = p->b29097 = 1;
        p->b11++;
        p->b11++;
    }
}
void FUN_0c06f52e(O *p)
{
    FUN_0c09a910(p);
    if (p->b29098) {
        FUN_0c09a808(p, 1, 101);
        p->b29096 = p->b29097 = 1;
        p->b11++;
    }
}
void FUN_0c06f560(O *p)
{
    p->b29219 = 0;
    FUN_0c0a2080(p);
}
void FUN_0c06f56c(O *p)
{
    char *t = &p->b29372;
    p->b29116 = 0;
    p->f56 = FUN_0c0df4d0(0x14000 - p->i48) * 25.0f;
    p->f64 = FUN_0c0dfa50(0x14000 - p->i48) * 25.0f;
    p->f68 = -p->f56 / 15.0f;
    p->f76 = -p->f64 / 15.0f;
    p->s236 = 3;
    p->f60 = p->f72 = 0;
    *t = 15;
    FUN_0c09a808(p, 1, 99);
    p->b29096 = p->b29097 = 1;
    p->b11++;
}
void FUN_0c06f600(O *p)
{
    char *t = &p->b29372;
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    if (*t) {
        (*t)--;
    } else {
        p->f56 = p->f64 = p->f68 = p->f76 = 0;
    }
    if (FUN_0c09a910(p)) {
        p->f60 = 7.0f;
        p->f72 = -1.0f;
        FUN_0c09a808(p, 1, 100);
        FUN_0c0a1d88(p, 115);
        p->s238 = 0;
        p->s240 = 6;
        p->s242 = 3;
        p->b29116 = 2;
        p->i29184 = 0;
        p->b11++;
    }
}
void FUN_0c06f6ca(O *p)
{
    char *t = &p->b29372;
    FUN_0c09d990(p);
    if (*t) {
        (*t)--;
    } else {
        p->f56 = p->f64 = p->f68 = p->f76 = 0;
    }
    if (p->i740 & 1024) p->s238++;
    if (FUN_0c09a910(p)) FUN_0c09a808(p, 1, 100);
    if (--p->s240 < 1) {
        if (p->s236 != 0) {
            p->s236--;
        } else if (p->s242 != 0 && (p->s238 != 0 || (p->i29184 & 1024))) {
            if (--p->s242 < 1) {
                FUN_0c09a808(p, 1, 102);
                p->b29096 = p->b29097 = 1;
                p->s236 = 25;
                p->b11++;
                return;
            }
        } else {
            FUN_0c09a808(p, 1, 101);
            p->b11 = 4;
            return;
        }
        FUN_0c0a1d88(p, 115);
        p->i29184 = 0;
        p->s238 = 0;
        p->s240 = 6;
    }
}
void FUN_0c06f7dc(O *p)
{
    if (p->s236 == 0) {
        FUN_0c09d990(p);
        FUN_0c09d9bc(p);
    } else {
        p->s236--;
    }
    if (FUN_0c09a910(p)) p->b11++;
}
void FUN_0c06f818(O *p)
{
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    FUN_0c09a910(p);
    if (p->f60 < 0 && FUN_0c09e7b8(p, 0.0f)) {
        FUN_0c09a808(p, 1, 108);
        p->b11++;
    }
}
void FUN_0c06f85c(O *p)
{
    if (FUN_0c09a910(p)) FUN_0c0a2080(p);
}
