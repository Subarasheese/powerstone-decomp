/* Per-object dispatch on the signed byte at +3: values 0..17 (the jump table sends all of them to one block) call FUN_0c0d9288 with the 52-byte record at 0xC343D54 + 52*b, other values call FUN_0c0da1f6 with the word 4*(b-32) into 0xC344DFC; both end in a tail call to FUN_0c0d91d6. */
struct Obj { char pad[3]; signed char kind; };
void FUN_0c0d9288(struct Obj *o, int rec);
void FUN_0c0da1f6(struct Obj *o, int v);
void FUN_0c0d91d6(struct Obj *o);
void FUN_0c0dc9d4(struct Obj *o)
{
    signed char b = o->kind;
    if ((unsigned int)b < 18u) {
        FUN_0c0d9288(o, 0xC343D54 + (short)(o->kind * 52));
    } else {
        FUN_0c0da1f6(o, *(int *)(0xC344DFC + ((o->kind - 32) << 2)));
    }
    FUN_0c0d91d6(o);
}
