/* Sets a slot flag after calling the helper FUN_0c05ef02 with a value chosen by a lookup table (the 2-byte copy of _slow_mvn is done inline). */
int FUN_0c05ef02(int, int, int, int, int, int, float);

int FUN_0c05ef8c(int a4)
{
    signed char i;
    signed char buf[2];
    unsigned short off;
    int base;
    signed char b, v;

    i = (signed char)a4;
    buf[0] = *(signed char *)0xC14D835;
    buf[1] = *(signed char *)0xC14D836;
    off = (unsigned short)((unsigned short)i * (unsigned short)0x72D0);
    base = 0xC7E40C4 + off;
    b = *(signed char *)(base + 0x71F1);
    v = *(signed char *)(0xC14D817 + b + 2 * *(signed char *)(base + 4));
    if (v == -1) {
        FUN_0c05ef02(buf[i], 0x80, 3, 0, 0xC14D7D8, *(int *)0xC336548, 1.0f);
        *(unsigned char *)((short)(buf[i] * 144) + 0xC7F3238 + 4) = 1;
        return 1;
    }
    if (v == -2) {
        FUN_0c05ef02(buf[i], 0x80, 3, 0, 0xC14D7D8,
                     *(int *)(0xC336550 + 4 * *(signed char *)(0xC14D808 + *(signed char *)0xC7F3051)), 1.0f);
    } else {
        FUN_0c05ef02(buf[i], 0x80, 3, 0, 0xC14D7D8, *(int *)(0xC336548 + 4 * v), 1.0f);
    }
    *(unsigned char *)((short)(buf[i] * 144) + 0xC7F3238 + 4) = 0;
    return 0;
}
