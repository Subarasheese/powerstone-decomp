/* Creates a type-5 object, initialises it (FUN_0c01628c), installs its update function and sends each of its listed items (count at 0x2dc, table at 0x2e0) to FUN_0c0162ba with 31. */
struct Obj {
    char p0[16];
    void (*update)(void);       /* 16 */
    char p20[0x2dc - 20];
    signed char count;          /* 0x2dc */
    char p2dd[3];
    int item[8];                /* 0x2e0 */
};
struct Obj *FUN_0c059132(int, int, int, int);
void FUN_0c01628c(struct Obj *);
void FUN_0c016d7a(void);
void FUN_0c0162ba(int, int);
void FUN_0c016d8a(void)
{
    struct Obj *o;
    int i;
    o = FUN_0c059132(5, 1, 1, 0);
    if (o != 0) {
        FUN_0c01628c(o);
        o->update = FUN_0c016d7a;
        for (i = 0; i < o->count; i++)
            FUN_0c0162ba(o->item[i], 31);
    }
}
