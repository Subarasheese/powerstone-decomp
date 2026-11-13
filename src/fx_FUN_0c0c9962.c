/* Copies a 12-byte struct from the object p[7]+0x308 into p+32 and stores that object's signed byte at +13 as a halfword at p+0xEC. */
typedef struct { int a, b, c; } S12;

void FUN_0c0c9962(char *p)
{
    signed char *q = *(signed char **)(p + 28) + 0x308;

    *(S12 *)(p + 32) = *(S12 *)q;
    *(short *)(p + 0xEC) = q[13];
}
