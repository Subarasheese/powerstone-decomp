/* Builds two horizontal vectors (second component zeroed) from the vectors at offset 4 of both arguments, then combines them (FUN_0c06206e) and post-processes the result (FUN_0c0620a4). */
struct V3 { float x, y, z; };
struct Obj { int p0; struct V3 pos; };
void FUN_0c06206e(struct V3 *, struct V3 *, struct V3 *);
void FUN_0c0620a4(struct V3 *);
void FUN_0c0b1652(struct Obj *a, struct Obj *b)
{
    struct V3 w, u;
    u = b->pos;
    w = a->pos;
    u.y = 0.0f;
    w.y = 0.0f;
    FUN_0c06206e(&u, &u, &w);
    FUN_0c0620a4(&u);
}
