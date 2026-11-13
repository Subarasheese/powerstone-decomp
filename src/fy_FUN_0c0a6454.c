/* Spawns a task object (FUN_0c059132 with 5, 1, 1, 0): marks it live, copies a 12-byte constant record from 0x0C152ADC to +80 and sets its handler (+16) to FUN_0c0a6490. */
struct R12 { int a, b, c; };
struct Task {
    char live;
    char pad0[15];
    void (*handler)(void);
    char pad1[60];
    struct R12 rec;
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c0a6490(void);
void FUN_0c0a6454(void)
{
    struct R12 r;
    struct Task *t;
    r = *(struct R12 *)0x0C152ADC;
    t = FUN_0c059132(5, 1, 1, 0);
    if (t != 0) {
        t->live = 1;
        t->rec = r;
        t->handler = FUN_0c0a6490;
    }
}
