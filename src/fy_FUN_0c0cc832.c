/* Takes the 12-byte entry (selected by the byte at 0x0C7F3051 and the argument) from a table at 0x0C33CA80, hands it to FUN_0c05cb46, shifts the 4-entry byte queue at +0x32E of the 0x0C7F2664 block down by one (decrementing the count at +0x32D), lowers the entry's middle float by 40.0 and passes it to FUN_0c04463c. */
typedef struct { float x, y, z; } V3;
extern void FUN_0c05cb46(V3 *, int, int);
extern void FUN_0c04463c(V3 *);

void FUN_0c0cc832(char a)
{
    V3 v;
    char *g = (char *)0x0C7F2664;
    char *q;
    int s = *(signed char *)0x0C7F3051;

    v = *(V3 *)((char *)0x0C33CA80 + (short)(s * 72) + (signed char)(a * 24));
    FUN_0c05cb46(&v, g[0x32E], a);
    g[0x32D] = g[0x32D] - 1;
    q = g + 0x32E;
    q[0] = q[1];
    q = g + 0x32E;
    q[1] = q[2];
    q = g + 0x32E;
    q[2] = q[3];
    q = g + 0x32E;
    q[3] = q[4];
    v.y = v.y - 40.0f;
    FUN_0c04463c(&v);
}
