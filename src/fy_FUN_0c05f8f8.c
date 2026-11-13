/* Initialises a camera-like object: scale (+112) 1.0, copies two 12-byte vectors from offsets 188 and 236 of the block at 0xC7F29F8 into +20 and +44, builds the transform at +68 from them (FUN_0c06206e), then calls FUN_0c0620dc with +72 set to 0.0 and again (as a tail call) with 1.0. */
struct V3 { int a, b, c; };
struct Cam {
    char pad0[20];
    struct V3 v0;
    char padv[12];
    struct V3 v1;
    char pad1[68 - 44 - 12];
    char xf[4];
    float t;
    char pad2[112 - 72 - 4];
    float scale;
};
void FUN_0c06206e(char *dst, struct V3 *a, struct V3 *b);
void FUN_0c0620dc(char *xf);
void FUN_0c05f8f8(struct Cam *c)
{
    char *g = (char *)0xC7F29F8;
    c->scale = 1.0f;
    c->v0 = *(struct V3 *)(g + 188);
    c->v1 = *(struct V3 *)(g + 236);
    FUN_0c06206e(c->xf, &c->v0, &c->v1);
    c->t = 0.0f;
    FUN_0c0620dc(c->xf);
    c->t = 1.0f;
    FUN_0c0620dc(c->xf);
}
