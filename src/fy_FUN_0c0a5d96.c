/* Allocates a 5/1 object, and if it got one marks it and copies a 12-byte template from 0x0C152A7C into it at +80; returns it. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);

char *FUN_0c0a5d96(void)
{
    S12 t;
    char *p;

    t = *(S12 *)0x0C152A7C;
    p = FUN_0c059132(5, 1, 1, 0);
    if (p) {
        *p = 1;
        *(S12 *)(p + 80) = t;
    }
    return p;
}
