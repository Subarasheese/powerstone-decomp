/* Creates a type-5 object from the allocator (FUN_0c059132) and, if one came back, marks it live, copies the 12-byte vector at 0xC152B00 into it at offset 80 and installs its update function FUN_0c0a6980. */
struct V3 { float x, y, z; };
struct Obj {
    char live;
    char p1[15];
    void (*update)(void);   /* 16 */
    char p20[60];
    struct V3 pos;          /* 80 */
};
struct Obj *FUN_0c059132(int, int, int, int);
void FUN_0c0a6980(void);
void FUN_0c0a6a7e(void)
{
    struct V3 v;
    struct Obj *o;
    v = *(struct V3 *)0xC152B00;
    o = FUN_0c059132(5, 1, 1, 0);
    if (o != 0) {
        o->live = 1;
        o->pos = v;
        o->update = FUN_0c0a6980;
    }
}
