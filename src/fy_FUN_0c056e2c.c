/* Creates 4 task slots (type 6, one per index): marks each used, stores the index at +4, installs FUN_0c056bb4 as the handler and copies a 12-byte record from 0xC14B17C into it. */
typedef struct { int a, b, c; } S12;
typedef struct { char used; char pad[3]; char idx; char pad1[11]; void (*fn)(void); char pad2[0x50 - 20]; S12 rec; } Slot;
extern Slot *FUN_0c059132(int, int, int, int);
extern void FUN_0c056bb4(void);

void FUN_0c056e2c(void)
{
    S12 loc;
    Slot *s;
    int i;

    loc = *(S12 *)0xC14B17C;
    for (i = 0; i < 4; i++) {
        s = FUN_0c059132(6, 1, 2, 0);
        if (s != 0) {
            s->used = 1;
            s->idx = i;
            s->fn = FUN_0c056bb4;
            s->rec = loc;
        }
    }
}
