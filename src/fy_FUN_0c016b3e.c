/* Creates a task slot (type 5), initialises it, stores the argument byte at +4 and installs FUN_0c016ac2; then marks each child (count at +0x2DC, pointers at +0x2E0) with flag 0x200 and sets two of its floats to 2.0. */
typedef struct { char pad[2]; unsigned short flags; char pad1[24]; float f28; float f32; } Child;
typedef struct { char pad; char pad0[3]; char arg; char pad1[11]; void (*fn)(void); char pad2[0x2DC - 20]; char count; char pad3[3]; Child *child[8]; } Slot;
extern Slot *FUN_0c059132(int, int, int, int);
extern void FUN_0c01628c(Slot *);
extern void FUN_0c0162ba(Child *, int);
extern void FUN_0c016ac2(void);

void FUN_0c016b3e(int a)
{
    Slot *s;
    Child *c;
    int i;

    s = FUN_0c059132(5, 1, 1, 0);
    if (s != 0) {
        FUN_0c01628c(s);
        s->fn = FUN_0c016ac2;
        s->arg = a;
        for (i = 0; i < s->count; i++) {
            c = s->child[i];
            FUN_0c0162ba(c, 18);
            c->flags |= 0x200;
            c->f32 = 2.0f;
            c->f28 = 2.0f;
        }
    }
}
