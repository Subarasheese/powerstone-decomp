/* Copy a 52-byte default record into the 29f8 block, set its halfword at 0x1A8 from the caller's object, and tail-call the setup routine. */
struct R52 { int w[13]; };
extern char g_29f8[];
int FUN_0c0d8e6e(int, int, int);

int FUN_0c0dabd0(char *p)
{
    *(struct R52 *)(g_29f8 + 0x1A8) = *(struct R52 *)0xC340CC0;
    *(unsigned short *)(g_29f8 + 0x1A8) = p[0x10B];
    return FUN_0c0d8e6e(17, p[3], 80);
}
