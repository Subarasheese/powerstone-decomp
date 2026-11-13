/* Spawns six 6/1 objects (kind 2), each marked, numbered 0..5 at +4, with callback FUN_0c0563a0 at +16 and a 12-byte template from 0xC14AF44 copied to +80. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
void FUN_0c0565b4(void)
{
    S12 t;
    char *p;
    int i;

    t = *(S12 *)0xC14AF44;
    for (i = 0; i < 6; i++) {
        p = FUN_0c059132(6, 1, 2, 0);
        if (p) {
            *p = 1;
            p[4] = i;
            *(int *)(p + 16) = 0xC0563A0;
            *(S12 *)(p + 80) = t;
        }
    }
}
