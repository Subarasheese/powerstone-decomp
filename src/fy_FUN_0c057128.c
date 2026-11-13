/* Looks up how many objects to spawn (index byte at 0xC7F304F -> a byte in the table at 0xC7E40C8 -> a count in the table at 0xC32DE68) and spawns that many 6/1 objects (kind 2), each marked, numbered at +4, with callback FUN_0c056e8c at +16 and a 12-byte template from 0xC14B888 copied to +80. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
void FUN_0c057128(void)
{
    S12 t;
    char *p;
    int i, n, k;

    t = *(S12 *)0xC14B888;
    k = *(signed char *)0xC7F304F;
    k = *(signed char *)(0xC7E40C8 + (unsigned short)(k * 29392));
    n = *(signed char *)(0xC32DE68 + k);
    if (n > 0) {
        i = 0;
        do {
            p = FUN_0c059132(6, 1, 2, 0);
            if (p) {
                *p = 1;
                p[4] = i;
                *(int *)(p + 16) = 0xC056E8C;
                *(S12 *)(p + 80) = t;
            }
            i++;
        } while (i < n);
    }
}
