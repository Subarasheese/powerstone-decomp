/* Allocates a 5/1 object (kind 8), and if it got one marks it, copies a 12-byte template from 0x0C152C5C into it at +80, sets its callback (FUN_0c0a9d9c) at +16, and stores the three arguments (byte at +3, shorts at +240 and +242). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c0a9d9c(void);

void FUN_0c0a9d12(char a, char b, char c)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152C5C;
    p = FUN_0c059132(5, 1, 8, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(void (**)(void))(p + 16) = FUN_0c0a9d9c;
        p[3] = a;
        *(short *)(p + 240) = b;
        *(short *)(p + 242) = c;
    }
}
