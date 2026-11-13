/* Spawns 6 objects (kind 6): each gets a marker byte, its index at +4, a 12-byte template copied from 0xC14C070 to +80 and a callback at +16. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);

void FUN_0c058e62(void)
{
    S12 t;
    char *p;
    int i;

    t = *(S12 *)0xC14C070;
    for (i = 0; i < 6; i++) {
        p = FUN_0c059132(6, 1, 2, 0);
        if (p) {
            *p = 1;
            p[4] = i;
            *(int *)(p + 16) = 0xC058C04;
            *(S12 *)(p + 80) = t;
        }
    }
}
