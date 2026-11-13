/* Spawns an effect task for object o (FUN_0c059132 with 5, 1, 8, 0, handler FUN_0c043dda): copies three 12-byte constant records into it (+32, +44, +80), then gives each of its eight sub-objects a random scale (rand 0..255 mod 10 + 1) / 10 + 1 and four random small counters (mod 3 + 1, mod 4, mod 8 + 1) in its 12-byte record at +52. */
struct V3 { int a, b, c; };
struct Rec { float f0; char b4, b5, b6, b7; int w8; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    char pad1[28 - 4];
    float f28, f32, f36;
    char pad2[52 - 40];
    struct Rec rec;
};
struct Task {
    char live;
    char b1;
    char pad0;
    char b3;
    char b4;
    char b5;
    short s6;
    char pad1[16 - 8];
    void (*handler)(void);
    char pad2[28 - 20];
    char *owner;
    struct V3 v32;
    struct V3 v44;
    char pad3[80 - 56];
    struct V3 v80;
    char pad4[236 - 92];
    short s236, s238, s240, s242;
    char pad5[280 - 244];
    int w280;
    char pad6[736 - 284];
    struct Sub *sub[8];
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c043dda(void);
void *memset(void *p, int c, unsigned n);
void FUN_0c06233a(struct Sub *s, int tbl, int n);
float FUN_0c0df940(void);
void FUN_0c043bdc(char *o)
{
    struct Task *t;
    struct Sub *q;
    struct Rec *r;
    int i;
    t = FUN_0c059132(5, 1, 8, 0);
    if (t == 0)
        return;
    t->live = 1;
    t->b1 = 1;
    t->b3 = o[3];
    t->s6 = 15;
    t->b5 = 1;
    t->handler = FUN_0c043dda;
    t->v32 = *(struct V3 *)0xC14A5D8;
    t->w280 = 0;
    t->v44 = *(struct V3 *)0xC14A5F0;
    t->v80 = *(struct V3 *)0xC14A5E4;
    for (i = 0; i < 8; i++) {
        q = t->sub[i];
        r = &q->rec;
        memset(r, 0, 12);
        FUN_0c06233a(q, 0xC4CFA68, r->b6 + 117);
        q->b0 = 1;
        q->s2 = 49;
        q->f36 = (float)((unsigned int)(FUN_0c0df940() * 255.0f) % 10u + 1) / 10.0f + 1.0f;
        q->f32 = q->f36;
        q->f28 = q->f36;
        r->f0 = q->f36 / 8.0f;
        r->b4 = 1;
        r->b5 = (unsigned int)(FUN_0c0df940() * 255.0f) % 3u + 1;
        r->b6 = (unsigned int)(FUN_0c0df940() * 255.0f) % 4u;
        r->b7 = (unsigned int)(FUN_0c0df940() * 255.0f) % 8u + 1;
    }
    t->s236 = 120;
    t->s238 = 0;
    t->s240 = 8;
    t->s242 = 0;
    t->owner = o;
}
