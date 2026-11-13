/* Store a/b (quotient) and b, and two zero words, into two parallel records at 0x174 in the 29f8 and 2bf4 blocks. */
extern char g_29f8[];

void FUN_0c0dc18e(int a, int b)
{
    int q;
    char *r;

    q = a / b;
    r = (char *)0xC7F2BF4;
    *(int *)(r + 0x174) = q;
    *(int *)(g_29f8 + 0x174) = q;
    *(int *)(r + 0x178) = b;
    *(int *)(g_29f8 + 0x178) = b;
    *(int *)(r + 0x17C) = 0;
    *(int *)(g_29f8 + 0x17C) = 0;
    *(int *)(r + 0x180) = 0;
    *(int *)(g_29f8 + 0x180) = 0;
}
