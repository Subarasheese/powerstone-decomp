/* Allocates an object via FUN_0c059132(5,1,2,0); if it got one, marks it used (byte 0 = 1), copies a 12-byte vector from 0xC152AD0 to offset 80 and stores the handler FUN_0c0a6280 at offset 16. */
struct V { int x, y, z; };
struct Obj { char used; char pad[15]; void *handler; char pad2[60]; struct V v; };
extern int FUN_0c0a6280(void);
extern struct Obj *FUN_0c059132(int, int, int, int);
#define SRC (*(struct V *)0xC152AD0)

void FUN_0c0a6244(void)
{
    struct V v;
    struct Obj *o;

    v = SRC;
    o = FUN_0c059132(5, 1, 2, 0);
    if (o) {
        o->used = 1;
        o->v = v;
        o->handler = (void *)FUN_0c0a6280;
    }
}
