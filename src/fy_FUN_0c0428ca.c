/* Spawns an effect object at position a5 for type a4: transforms the vector through FUN_0c062050 with a 12-byte table entry picked by bits 1-3 of the word at 0xC7F3014, calls FUN_0c042f48 with a second table entry picked by its low 2 bits, and if it got an object sets four floats of its sub-object (+0x2E0) and one at +780 to 1.0. */
struct V { int x, y, z; };
struct L { char c; struct V v; };
struct Obj { char pad[0x2E0]; float *sub; char pad2[0x28]; float f780; };
extern int FUN_0c062050(struct V *, struct V *, void *);
extern struct Obj *FUN_0c042f48(int, int, int, struct V *, int, void *);

void FUN_0c0428ca(char a4, struct V *a5)
{
    struct L l;
    struct Obj *o;

    l.c = a4;
    l.v = *a5;
    FUN_0c062050(&l.v, &l.v, (char *)0xC149DF4 + (signed char)(((*(int *)0xC7F3014 >> 1) & 7) * 12));
    o = FUN_0c042f48(l.c, 1, 1, &l.v, 0, (char *)0xC149E54 + (signed char)((*(char *)0xC7F3014 & 3) * 12));
    if (o) {
        o->sub[16] = 1.0f;
        o->sub[17] = 1.0f;
        o->sub[18] = 1.0f;
        o->sub[19] = 1.0f;
        o->f780 = 1.0f;
    }
}
