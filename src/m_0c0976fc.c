/* @unit 0c0976fc-0c09788c */
struct S {
    char pad0[10];
    char b10;
    char pad11[21];
    float f32;
    float f36;
    float f40;
    char pad44[4];
    int l48;
    char pad52[4];
    float f56;
    float f60;
    float f64;
    float f68;
    float f72;
    float f76;
    char pad80[156];
    short h236;
    short h238;
    char pad240[420];
    struct S *ch[4];
    char pad676[28420];
    char b29096;
    char b29097;
};
extern char FUN_0c09a910(struct S *p);
extern void FUN_0c09a808(struct S *p, int a, int b);
extern char FUN_0c09ca24(struct S *p, int a);
extern float FUN_0c02651e(struct S *p);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern char FUN_0c09e7b8(struct S *p, float a);
extern void FUN_0c09c422(struct S *p);
extern void FUN_0c0a2e26(struct S *p, int a, int b);
extern void FUN_0c09d990(struct S *p);
extern void FUN_0c09d9bc(struct S *p);
extern void FUN_0c089b1a();
void FUN_0c0976fc(struct S *p)
{
    char c;
    struct S *q;
    if (FUN_0c09a910(p) && p->h238 == 0) {
        FUN_0c09a808(p, 2, 208);
        p->h238++;
    }
    if ((c = FUN_0c09ca24(p, 11))) {
        q = p->ch[c - 1];
        p->f32 = q->f32;
        p->f40 = q->f40;
        p->f36 = q->f36 - FUN_0c02651e(p);
    }
    if (--p->h236 == 0) {
        p->f56 = FUN_0c0df4d0(0x14000 - p->l48) * 5.0f;
        p->f64 = FUN_0c0dfa50(0x14000 - p->l48) * 5.0f;
        p->f68 = p->f76 = 0.0f;
        p->f60 = 18.0f;
        p->f72 = -1.5f;
        FUN_0c09a808(p, 0, 8);
        p->b29096 = p->b29097 = 1;
        p->b10++;
    }
}
void FUN_0c0977d6(struct S *p)
{
    FUN_0c09a910(p);
    if (p->f60 < 0.0f && FUN_0c09e7b8(p, 0.0f)) {
        FUN_0c09c422(p);
        FUN_0c0a2e26(p, 6, 0);
        return;
    }
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
}
void FUN_0c097864(struct S *p)
{
    switch (p->b10) {
    case 1:
        FUN_0c0977d6(p);
        break;
    case 0:
    case 2:
        FUN_0c0976fc(p);
        break;
    }
}
void FUN_0c097882()
{
    FUN_0c089b1a();
}
