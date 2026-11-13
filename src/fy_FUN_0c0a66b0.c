/* Creates a task slot (type 5), marks it used, copies a 12-byte record from the table at 0xC152AF4 into it and installs FUN_0c0a66ec as its handler. */
typedef struct { int a, b, c; } S12;
typedef struct { char used; char pad[15]; void (*fn)(void); char pad2[0x50 - 20]; S12 rec; } Slot;
extern Slot *FUN_0c059132(int, int, int, int);
extern void FUN_0c0a66ec(void);

void FUN_0c0a66b0(void)
{
    S12 loc;
    Slot *s;

    loc = *(S12 *)0xC152AF4;
    s = FUN_0c059132(5, 1, 10, 0);
    if (s != 0) {
        s->used = 1;
        s->rec = loc;
        s->fn = FUN_0c0a66ec;
    }
}
