/* Spawns as many objects as the signed byte at 0xC32DE68 + a4 says (FUN_0c059132(5,1,2,0)): each gets used=1, its index at byte 4, the low half of a4 at offset 242, handler FUN_0c0571a2 at offset 16 and a copy of the 12-byte vector at 0xC14B894 at offset 80. */
struct V { int x, y, z; };
struct Obj { char used; char pad[3]; char index; char pad1[11]; void *handler; char pad2[60]; struct V v; char pad3[150]; short owner; };
extern int FUN_0c0571a2(void);
extern struct Obj *FUN_0c059132(int, int, int, int);

void FUN_0c0574d2(int a4)
{
    struct V v;
    struct Obj *o;
    int i;
    int n;

    v = *(struct V *)0xC14B894;
    n = *(signed char *)(0xC32DE68 + a4);
    for (i = 0; i < n; i++) {
        o = FUN_0c059132(5, 1, 2, 0);
        if (o) {
            o->used = 1;
            o->index = i;
            o->owner = a4;
            o->handler = (void *)FUN_0c0571a2;
            o->v = v;
        }
    }
}
