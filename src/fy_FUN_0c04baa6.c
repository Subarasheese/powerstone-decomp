/* Spawns an effect task (FUN_0c059132 with 5, 1, 8, 0) bound to a parent object (or, without one, to the position in `pos`): flags and counters set, handler FUN_0c04bbf8, position copied from the parent's +268 (or from pos, byte +3 = 2), then initialises its eight sub-objects (FUN_0c06233a and three random words each, scales 0.2 / 1.0). Does nothing when there is no parent and either pos or kind is 0. */
struct V3 { int a, b, c; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    char pad1[12];
    int w16, w20, w24;
    float f28, f32, f36;
    char pad2[68 - 40];
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
    char pad2[28 - 20];
    char *parent;
    struct V3 pos;
    char pad3[236 - 44];
    short s236;
    char pad4[280 - 238];
    int w280;
    char pad5[736 - 284];
    struct Sub *sub[8];
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c04bbf8(void);
void FUN_0c06233a(struct Sub *s, int tbl, int n);
int FUN_0c0df920(void);
void FUN_0c04baa6(char *parent, int unused, struct V3 *pos, int kind)
{
    struct Task *t;
    struct Sub *q;
    int i;
    if (parent == 0 && (pos == 0 || kind == 0))
        return;
    t = FUN_0c059132(5, 1, 8, 0);
    if (t == 0)
        return;
    t->live = 1;
    t->b1 = 1;
    t->b8 = 0;
    t->s236 = 0;
    t->b4 = 0;
    t->s6 = 1;
    t->b5 = 25;
    t->handler = FUN_0c04bbf8;
    t->w280 = 0;
    t->parent = parent;
    if (parent != 0) {
        t->b3 = parent[3];
        t->pos = *(struct V3 *)(parent + 268);
    } else {
        t->b3 = 2;
        t->pos = *pos;
    }
    for (i = 0; i < 8; i++) {
        q = t->sub[i];
        FUN_0c06233a(q, 0xC4CFA68, 26);
        q->b0 = 1;
        q->s2 = 0x21E;
        q->w16 = FUN_0c0df920() % 0x10000;
        q->w20 = FUN_0c0df920() % 0x10000;
        q->w24 = FUN_0c0df920() % 0x10000;
        q->f28 = 0.199999988f;
        q->f32 = 0.199999988f;
        q->f36 = 0.199999988f;
        q->f68 = 1.0f;
        q->f72 = 1.0f;
        q->f76 = 1.0f;
    }
}
