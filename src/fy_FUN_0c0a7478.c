/* Allocates a 5/1 object (kind 1), and if it got one marks it, copies a 12-byte template from 0xC152B24 into it at +80 and sets its callback (FUN_0c0a74b4) at +16. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c0a74b4(void);

void FUN_0c0a7478(void)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152B24;
    p = FUN_0c059132(5, 1, 1, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(void (**)(void))(p + 16) = FUN_0c0a74b4;
    }
}
