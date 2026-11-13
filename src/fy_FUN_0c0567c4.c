/* Spawns 7 objects with FUN_0c059132(6,1,1,0): each gets used=1, its index at byte 4, handler FUN_0c056614 at offset 16 and a copy of the 12-byte vector at 0xC14B014 at offset 80. */
struct V { int x, y, z; };
struct Obj { char used; char pad[3]; char index; char pad1[11]; void *handler; char pad2[60]; struct V v; };
extern int FUN_0c056614(void);
extern struct Obj *FUN_0c059132(int, int, int, int);

void FUN_0c0567c4(void)
{
    struct V v;
    struct Obj *o;
    int i;

    v = *(struct V *)0xC14B014;
    for (i = 0; i < 7; i++) {
        o = FUN_0c059132(6, 1, 1, 0);
        if (o) {
            o->used = 1;
            o->index = i;
            o->handler = (void *)FUN_0c056614;
            o->v = v;
        }
    }
}
