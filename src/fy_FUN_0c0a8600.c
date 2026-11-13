/* Creates two type-5 objects numbered 0 and 1, each live with the vector at 0xC152B78 copied to offset 80 and update function FUN_0c0a8660. */
struct V3 { float x, y, z; };
struct Obj {
    char live;
    char p1[2];
    char tag;               /* 3 */
    char p4[12];
    void (*update)(void);   /* 16 */
    char p20[60];
    struct V3 pos;          /* 80 */
};
struct Obj *FUN_0c059132(int, int, int, int);
void FUN_0c0a8660(void);
void FUN_0c0a8600(void)
{
    struct V3 v;
    struct Obj *o;
    int i;
    v = *(struct V3 *)0xC152B78;
    for (i = 0; i < 2; i++) {
        o = FUN_0c059132(5, 1, 1, 0);
        if (o != 0) {
            o->live = 1;
            o->pos = v;
            o->update = FUN_0c0a8660;
            o->tag = i;
        }
    }
}
