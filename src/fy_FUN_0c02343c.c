/* Tests every pair (i, j) of parts of two objects (counts looked up per object kind in the table at 0x0C320034; j starts at 1) with FUN_0c023328; returns 1 at the first pair it reports true, else 0. */
extern int FUN_0c023328(char *, char *, char *, float);

int FUN_0c02343c(char *a, char *b, float f)
{
    signed char *t = (signed char *)0x0C320034;
    int i, j;

    for (i = 0; i < t[a[2] * 2]; i++)
        for (j = 1; j < t[b[2] * 2 + 1]; j++)
            if (FUN_0c023328(a + 0x148 + i * 16, b + 0x188 + j * 16, b + 0x10C, f))
                return 1;
    return 0;
}
