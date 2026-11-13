/* When the mode byte at +0x721F is 0 or 2: clears the short at +0xF0, runs the handler picked by byte +0x7238 from the table at 0xC337810 and sets the two flag bytes at +0x71A8/+0x71A9; any other mode tail-calls FUN_0c067944. */
struct Obj {
    char pad0[0xF0];
    short w;
    char pad1[0x71A8 - 0xF2];
    char f0;
    char f1;
    char pad2[0x721F - 0x71AA];
    signed char mode;
    char pad3[0x7238 - 0x7220];
    unsigned char sel;
};
void FUN_0c067944(struct Obj *o);
void FUN_0c08105a(struct Obj *o)
{
    void (**tbl)(struct Obj *) = (void (**)(struct Obj *))0xC337810;
    signed char m = o->mode;
    if (m == 0 || m == 2) {
        o->w = 0;
        tbl[o->sel](o);
        o->f1 = 1;
        o->f0 = 1;
    } else {
        FUN_0c067944(o);
    }
}
