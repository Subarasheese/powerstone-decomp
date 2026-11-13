/* Copies the vector src to dst (after the call on src and the object's field at 108), with the fourth float scaled by the object's float at offset 80. */
struct V3 { float x, y, z; };
struct Vec { struct V3 v; float w; };
struct Obj {
    char p0[80];
    float scale;            /* 80 */
    char p84[24];
    char sub[1];            /* 108 */
};
void FUN_0c062210(struct Vec *, char *);
void FUN_0c021090(struct Obj *o, struct Vec *dst, struct Vec *src)
{
    FUN_0c062210(src, o->sub);
    dst->v = src->v;
    dst->w = src->w * o->scale;
}
