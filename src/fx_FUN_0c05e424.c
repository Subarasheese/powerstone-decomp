/* Re-arms an object (arg): bumps its counter, copies state from its owner at +28, seeds two 12-byte records into its slots, clears four slot bytes and points +280 at its owner's buffer. */
struct T12 { int a, b, c; };
extern void FUN_0c05a8f8(void *p);
void FUN_0c05e424(char *p)
{
    char *own = *(char **)(p + 28);
    int i;
    p[8]++;
    p[3] = (*(char **)(p + 28))[3];
    p[1] = 1;
    p[0x105] = 1;
    p[0x107] = 1;
    FUN_0c05a8f8(p);
    for (i = 0; i < 2; i++) {
        *(struct T12 *)(*(char **)(p + 736 + i * 4) + 4) = *(struct T12 *)0xC336440;
        *(struct T12 *)(*(char **)(p + 736 + i * 4) + 16) = *(struct T12 *)0xC336464;
    }
    for (i = 2; i < 6; i++)
        **(char **)(p + 736 + i * 4 + 0) = 0;
    *(int *)(p + 0x118) = (int)own + 0x300 + 0x580 + (short)((signed char)own[0x71f1] * 3520);
    if (p[11] == 0) {
        *(char *)(0xC7F2664 + 0x315) = p[13];
        *(char *)(0xC7F2664 + 0x316) = 1;
        p[11] = 1;
    }
}
