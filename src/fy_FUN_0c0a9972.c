/* Allocates a 5/1 object (kind 2), and if it got one marks it, copies a 12-byte template from 0xC152C50 into it at +80 and sets its callback (FUN_0c0a9aa4) at +16. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c0a9aa4(void);

void FUN_0c0a9972(void)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152C50;
    p = FUN_0c059132(5, 1, 2, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(void (**)(void))(p + 16) = FUN_0c0a9aa4;
    }
}
