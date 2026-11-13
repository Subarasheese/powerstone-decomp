/* Loads the two players' start positions from a table indexed by the byte at 0xC7F3051 (+36 in g_302c), then initialises both. */
struct v3 { int a, b, c; };
extern void FUN_0c099582(char *);
extern int FUN_0c09db78(char *);

void FUN_0c099738(void)
{
    char *A;
    char *B;
    char *T;
    signed char idx;

    idx = *(signed char *)(0xC7F302C + 37);
    T = (char *)0xC3458F4;
    A = (char *)0xC7E40C4;
    *(struct v3 *)(A + 32) = *(struct v3 *)(T + (unsigned char)(idx * 12));
    B = A + 0x72D0;
    *(struct v3 *)(B + 32) = *(struct v3 *)(T + (unsigned char)(idx * 12) + 180);
    FUN_0c099582(A);
    FUN_0c099582(B);
    *(int *)(A + 48) = FUN_0c09db78(A);
    *(int *)(B + 48) = FUN_0c09db78(B);
}
