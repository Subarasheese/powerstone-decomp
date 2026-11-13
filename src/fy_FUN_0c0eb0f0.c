/* INLINE-ASM: reads and writes the status register (stc sr / ldc sr) to mask interrupts around the copy; no C form exists */
/* Strided copy of n elements of 1, 2 or 4 bytes from a to b, each pointer stepping by 0, +1 or -1 elements (modes e and f: 0, 1, 2), with interrupts masked around it when the table at 0xC346B74 says so. */
#pragma inline_asm(ia_getsr)
static int ia_getsr(void)
{
    STC SR,R0
}
#pragma inline_asm(ia_setsr)
static void ia_setsr(int v)
{
    LDC R4,SR
}
extern void FUN_0c0ed92c(void);
extern void FUN_0c0ed970(void);
extern void FUN_0c0ed8b0(void);

int FUN_0c0eb0f0(unsigned char *a, unsigned char *b, int size, int n, int e, int f)
{
    int sx = 0;
    int sy = 0;
    int saved;
    int i;

    if (e == 1)
        sx = 1;
    else if (e == 2)
        sx = -1;
    if (f == 1)
        sy = 1;
    else if (f == 2)
        sy = -1;
    if (*(int *)(*(int *)0xC346B74 + 212) == 1) {
        saved = (ia_getsr() >> 4) & 15;
        ia_setsr((ia_getsr() & ~0xF0) | 0xF0);
    }
    FUN_0c0ed92c();
    FUN_0c0ed970();
    switch (size) {
    case 1:
        if (n > 0) {
            i = 0;
            do {
                *b = *a;
                i++;
                a += sx;
                b += sy;
            } while (i < n);
        }
        break;
    case 2:
        if (n > 0) {
            i = 0;
            do {
                *(short *)b = *(short *)a;
                i++;
                a += sx * 2;
                b += sy * 2;
            } while (i < n);
        }
        break;
    case 4:
        if (n > 0) {
            i = 0;
            do {
                *(int *)b = *(int *)a;
                i++;
                a += sx * 4;
                b += sy * 4;
            } while (i < n);
        }
        break;
    }
    FUN_0c0ed8b0();
    if (*(int *)(*(int *)0xC346B74 + 212) == 1)
        ia_setsr((ia_getsr() & ~0xF0) | ((saved & 15) << 4));
    return 0;
}
