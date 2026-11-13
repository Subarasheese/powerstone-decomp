/* Walks the entries of an object (count at +0x2D8, bytes at +0x2B8, words at +0x2C0) and returns 1 as soon as FUN_0c025f7a reports 2 for one of them, else 0. */
extern void FUN_0c023524(char *, char *);
extern char FUN_0c025f7a(int, int, char *, int);

int FUN_0c0ad254(char *p)
{
    char buf[24];
    int i;

    FUN_0c023524(p, buf);
    for (i = 0; i < *(signed char *)(p + 0x2D8); i++) {
        if (FUN_0c025f7a(1, *(signed char *)(p + 0x2B8 + i), buf, *(int *)(p + 0x2C0 + i * 4)) == 2) {
            return 1;
        }
    }
    return 0;
}
