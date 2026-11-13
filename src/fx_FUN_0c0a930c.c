/* Allocates a 5/1 object (kind 3), and if it got one marks it, copies a 12-byte template from 0x0C152C14 into it at +80, sets its callback at +16 and stores the argument. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);

void FUN_0c0a930c(int a)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152C14;
    p = FUN_0c059132(5, 1, 3, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(int *)(p + 16) = 0x0C0A94F0;
        *(int *)(p + 28) = a;
    }
}
