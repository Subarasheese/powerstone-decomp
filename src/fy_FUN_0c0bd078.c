/* Spawns a burst task bound to a parent object (FUN_0c059132 with 1, 1, 10, 0, handler FUN_0c0bd40c): copies the parent's vectors +32 / +44 and then sets up its ten sub-objects: model type from the table at 0xC6002D0, a scale from the float table at 0xC33C498 (random index mod 8) + 3.0, three random angle words (mod 360 degrees as 16-bit turns) and from them its speed vector (+40, +44, +48) with sine / cosine (FUN_0c0df4d0 / FUN_0c0dfa50) times 50. */
struct V3 { int a, b, c; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    char pad1[16 - 4];
    int w16, w20, w24;
    float f28, f32, f36, f40, f44, f48;
    char pad2[64 - 52];
    float f64;
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
    char *parent;
    struct V3 v32;
    struct V3 v44;
    float f56, f60, f64;
    char pad4[80 - 68];
    float f80, f84, f88, f92;
    char pad5[236 - 96];
    short s236;
    char pad6[736 - 238];
    struct Sub *sub[10];
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c0bd40c(void);
void FUN_0c06233a(struct Sub *s, int tbl, int n);
float FUN_0c0df940(void);
float FUN_0c0df4d0(int a);
float FUN_0c0dfa50(int a);
#define URAND(n) ((unsigned int)(FUN_0c0df940() * 255.0f) % (n))
void FUN_0c0bd078(char *parent)
{
    struct Task *t;
    struct Sub *s;
    int i;
    t = FUN_0c059132(1, 1, 10, 0);
    if (t == 0)
        return;
    t->live = 1;
    t->b3 = parent[3];
    t->b1 = 1;
    t->s6 = 1055;
    t->b5 = 25;
    t->handler = FUN_0c0bd40c;
    t->v32 = *(struct V3 *)(parent + 32);
    t->v44 = *(struct V3 *)(parent + 44);
    t->f64 = 0.0f;
    t->f60 = 0.0f;
    t->f56 = 0.0f;
    t->f88 = 1.0f;
    t->f84 = 1.0f;
    t->f80 = 1.0f;
    t->f92 = 1.0f;
    t->parent = parent;
    t->s236 = 8;
    for (i = 0; i < 10; i++) {
        FUN_0c06233a(t->sub[i], 0xC6002D0 + (signed char)(parent[3] * 24), 2);
        t->sub[i]->b0 = 1;
        t->sub[i]->s2 = 1055;
        t->sub[i]->f64 = 1.0f;
        t->sub[i]->f36 = t->sub[i]->f32 = t->sub[i]->f28 = *(float *)(0xC33C498 + URAND(8u) * 4) + 3.0f;
        t->sub[i]->w16 = t->sub[i]->w16 + (int)((float)URAND(360u) * 65536.0f / 360.0f);
        t->sub[i]->w20 = t->sub[i]->w20 + (int)((float)URAND(360u) * 65536.0f / 360.0f);
        t->sub[i]->w24 = t->sub[i]->w24 + (int)((float)URAND(360u) * 65536.0f / 360.0f);
        t->sub[i]->w16 = t->sub[i]->w16 & 0xFFFF;
        t->sub[i]->w20 = t->sub[i]->w20 & 0xFFFF;
        t->sub[i]->w24 = t->sub[i]->w24 & 0xFFFF;
        s = t->sub[i];
        s->f40 = FUN_0c0df4d0(0x14000 - s->w20) * FUN_0c0dfa50(0x14000 - s->w16) * 50.0f;
        s->f48 = FUN_0c0dfa50(0x14000 - s->w20) * FUN_0c0dfa50(0x14000 - s->w16) * 50.0f;
        s->f44 = -(FUN_0c0df4d0(0x14000 - s->w16) * 50.0f);
    }
}
