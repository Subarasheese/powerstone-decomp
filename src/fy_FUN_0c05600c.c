/* Creates seven type-6 objects numbered 0..6, each live with the vector at 0xC14AE4C copied to offset 80 and update function FUN_0c055d38. */
struct V3 { float x, y, z; };
struct Obj {
    char live;
    char p1[3];
    char tag;               /* 4 */
    char p5[11];
    void (*update)(void);   /* 16 */
    char p20[60];
    struct V3 pos;          /* 80 */
};
struct Obj *FUN_0c059132(int, int, int, int);
void FUN_0c055d38(void);
void FUN_0c05600c(void)
{
    struct V3 v;
    struct Obj *o;
    int i;
    v = *(struct V3 *)0xC14AE4C;
    for (i = 0; i < 7; i++) {
        o = FUN_0c059132(6, 1, 2, 0);
        if (o != 0) {
            o->live = 1;
            o->tag = i;
            o->update = FUN_0c055d38;
            o->pos = v;
        }
    }
}
