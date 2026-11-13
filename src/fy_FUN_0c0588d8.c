/* Creates a type-6 object and fills it: live flag, the constant vector at 0xC14BEB4 at offset 80, update function FUN_0c05876c, the byte argument at 4 and the vector the second argument points to at offset 32. */
struct V3 { float x, y, z; };
struct Obj {
    char live;
    char p1[3];
    char tag;               /* 4 */
    char p5[11];
    void (*update)(void);   /* 16 */
    char p20[12];
    struct V3 from;         /* 32 */
    char p44[36];
    struct V3 pos;          /* 80 */
};
struct Obj *FUN_0c059132(int, int, int, int);
void FUN_0c05876c(void);
void FUN_0c0588d8(char tag, struct V3 *from)
{
    struct V3 v;
    struct Obj *o;
    v = *(struct V3 *)0xC14BEB4;
    o = FUN_0c059132(6, 1, 2, 0);
    if (o != 0) {
        o->live = 1;
        o->pos = v;
        o->update = FUN_0c05876c;
        o->tag = tag;
        o->from = *from;
    }
}
