/* Takes the vector at offset 32 of an object, lowers its second component by 80 and passes it with the object's byte at offset 3 to FUN_0c042d68. */
struct V3 { float x, y, z; };
struct Obj {
    char p0[3];
    signed char kind;       /* 3 */
    char p4[28];
    struct V3 pos;          /* 32 */
};
void FUN_0c042d68(int, struct V3 *, float, float);
void FUN_0c0b36bc(struct Obj *o)
{
    struct V3 v;
    v = o->pos;
    v.y = v.y - 80.0f;
    FUN_0c042d68(o->kind, &v, 2.0f, 150.0f);
}
