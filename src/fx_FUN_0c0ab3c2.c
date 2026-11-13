/* Allocates a 5/1 object (kind 6), and if it got one marks it, copies a 12-byte template from 0x0C152D60 into it at +80, sets its callback at +16 and stores the argument. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);

void FUN_0c0ab3c2(char a)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152D60;
    p = FUN_0c059132(5, 1, 6, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
        *(int *)(p + 16) = 0x0C0AB430;
        *(char *)(p + 3) = a;
    }
}
