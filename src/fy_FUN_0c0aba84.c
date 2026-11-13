/* Creates a task slot (type 5, size 8), marks it used, installs FUN_0c0abaca as its handler, copies a 12-byte record from 0xC152D84 into it and stores the result of FUN_0c0a5042 at +28. */
typedef struct { int a, b, c; } S12;
typedef struct { char used; char pad[15]; void (*fn)(void); char pad1[8]; int h; char pad2[0x50 - 32]; S12 rec; } Slot;
extern Slot *FUN_0c059132(int, int, int, int);
extern void FUN_0c0abaca(void);
extern int FUN_0c0a5042(void);

void FUN_0c0aba84(void)
{
    S12 loc;
    Slot *s;

    loc = *(S12 *)0xC152D84;
    s = FUN_0c059132(5, 1, 8, 0);
    if (s != 0) {
        s->used = 1;
        s->fn = FUN_0c0abaca;
        s->rec = loc;
        s->h = FUN_0c0a5042();
    }
}
