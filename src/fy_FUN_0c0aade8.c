/* Spawns 2 6/1 objects (kind 2), each marked, numbered 0..1 at +4, with callback 0x0C0AAE48 at +16 and a 12-byte template from 0x0C152C80 copied to +80. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
void FUN_0c0aade8(void)
{
    S12 t;
    char *p;
    int i;

    t = *(S12 *)0x0C152C80;
    for (i = 0; i < 2; i++) {
        p = FUN_0c059132(6, 1, 2, 0);
        if (p) {
            *p = 1;
            p[4] = i;
            *(int *)(p + 16) = 0x0C0AAE48;
            *(S12 *)(p + 80) = t;
        }
    }
}
