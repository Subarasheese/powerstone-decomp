/* Allocates a 5/1 object (kind 1), and if it got one marks it, copies a 12-byte template from 0x0C152D78 into it at +80 and sets its callback at +16. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);

void FUN_0c0ab940(void)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152D78;
    p = FUN_0c059132(5, 1, 1, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(int *)(p + 16) = 0x0C0AB97C;
    }
}
