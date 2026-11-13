/* Spawns an effect task bound to a parent object (or to the positions pos / pos2): like FUN_0c04baa6 but its eight sub-objects get random offsets (FUN_0c0df940) in x/y/z: spread 20 or 40 depending on the byte `wide`, scale 0.3. Does nothing when there is no parent and pos or pos2 is 0. */
struct V3 { int a, b, c; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    char pad1[28 - 4];
    float f28, f32, f36, f40, f44, f48;
    char pad2[68 - 52];
    float f68, f72, f76;
};
struct Task {
    char live;
    char b1;
    char pad0;
    char b3;
    char b4;
    char b5;
    short s6;
    char b8;
    char pad1[7];
    void (*handler)(void);
    char pad2[32 - 20];
    struct V3 pos;
    struct V3 pos2;
    char pad3[236 - 56];
    short s236;
    char pad4[280 - 238];
    int w280;
    char pad5[736 - 284];
    struct Sub *sub[8];
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c06233a(struct Sub *s, int tbl, int n);
float FUN_0c0df940(void);
void FUN_0c04b840(char *parent, int unused, struct V3 *pos, struct V3 *pos2, char wide)
{
    struct Task *t;
    struct Sub *q;
    int i;
    if (parent == 0 && (pos == 0 || pos2 == 0))
        return;
    t = FUN_0c059132(5, 1, 8, 0);
    if (t == 0)
        return;
    t->live = 1;
    t->b1 = 1;
    t->b8 = 0;
    t->s236 = 0;
    t->b4 = 0;
    t->s6 = 5;
    t->b5 = 25;
    t->handler = (void (*)(void))0xC04BA14;   /* unlisted function at 0c04ba14 */
    t->w280 = 0;
    if (parent != 0) {
        t->b3 = parent[3];
        t->pos = *(struct V3 *)(parent + 268);
        t->pos2 = *(struct V3 *)(parent + 44);
    } else {
        t->b3 = 2;
        t->pos = *pos;
        t->pos2 = *pos2;
    }
    for (i = 0; i < 8; i++) {
        q = t->sub[i];
        FUN_0c06233a(q, 0xC4CFA68, 25);
        q->b0 = 1;
        q->s2 = 561;
        q->f28 = 0.299999982f;
        q->f32 = 0.299999982f;
        q->f36 = 0.299999982f;
        q->f68 = 1.0f;
        q->f72 = 1.0f;
        q->f76 = 1.0f;
        if (wide == 0) {
            q->f40 = -10.0f + 20.0f * FUN_0c0df940();
            q->f44 = FUN_0c0df940() * 10.0f;
            q->f48 = -(FUN_0c0df940() * 10.0f);
        } else {
            q->f40 = -20.0f + 40.0f * FUN_0c0df940();
            q->f44 = FUN_0c0df940() * 20.0f;
            q->f48 = -(FUN_0c0df940() * 20.0f);
        }
    }
}
