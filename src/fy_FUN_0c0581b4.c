/* Creates a task slot (type 6), marks it used with state 0, installs FUN_0c057e28 as its handler and copies a 12-byte record from 0xC14BB64 into it. */
typedef struct { int a, b, c; } S12;
typedef struct { char used; char pad[3]; char state; char pad1[11]; void (*fn)(void); char pad2[0x50 - 20]; S12 rec; } Slot;
extern Slot *FUN_0c059132(int, int, int, int);
extern void FUN_0c057e28(void);

void FUN_0c0581b4(void)
{
    S12 loc;
    Slot *s;

    loc = *(S12 *)0xC14BB64;
    s = FUN_0c059132(6, 1, 2, 0);
    if (s != 0) {
        s->used = 1;
        s->state = 0;
        s->fn = FUN_0c057e28;
        s->rec = loc;
    }
}
