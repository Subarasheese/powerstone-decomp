/* Spawns 9 6/1 objects (kind 2), each marked, numbered 0..8 at +4, with callback 0x0C057B3C at +16 and a 12-byte template from 0x0C14BB3C copied to +80. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
void FUN_0c057da8(void)
{
    S12 t;
    char *p;
    int i;

    t = *(S12 *)0x0C14BB3C;
    for (i = 0; i < 9; i++) {
        p = FUN_0c059132(6, 1, 2, 0);
        if (p) {
            *p = 1;
            p[4] = i;
            *(int *)(p + 16) = 0x0C057B3C;
            *(S12 *)(p + 80) = t;
        }
    }
}
