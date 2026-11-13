/* Clamps the argument byte to 200, looks up the byte at 0xC32E216 + value/20 and tail-calls FUN_0c0599fc with it. */
extern int FUN_0c0599fc(int a);
int FUN_0c059b9a(unsigned char a)
{
    int v = a;
    unsigned char k;
    if (v > 200)
        v = 200;
    k = v / 20;
    return FUN_0c0599fc(*(signed char *)(0xC32E216 + k));
}
