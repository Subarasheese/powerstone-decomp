/* Spawns eight task objects (FUN_0c059132 with 6, 1, 2, 0): each is marked live, numbered 0..7 in byte +4, gets the handler FUN_0c056824 (+16) and a copy of a 12-byte constant record from 0xC14B100 at +80. */
struct R12 { int a, b, c; };
struct Task {
    char live;
    char pad0[3];
    char index;
    char pad1[11];
    void (*handler)(void);
    char pad2[60];
    struct R12 rec;
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
void FUN_0c056824(void);
void FUN_0c056b2c(void)
{
    struct R12 r;
    struct Task *t;
    int i;
    r = *(struct R12 *)0xC14B100;
    for (i = 0; i < 8; i++) {
        t = FUN_0c059132(6, 1, 2, 0);
        if (t != 0) {
            t->live = 1;
            t->index = i;
            t->handler = FUN_0c056824;
            t->rec = r;
        }
    }
}
