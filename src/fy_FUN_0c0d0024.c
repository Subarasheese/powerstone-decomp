/* Copies two 24-byte tables (at 0x0C154360 and 0x0C154378, two 12-byte entries each) to locals, then copies entry (+3) of the first into +32 and entry (+3) of the second into +44 of the object. */
typedef struct { int a, b, c; } S12;
typedef struct { S12 e[2]; } T24;

void FUN_0c0d0024(char *o)
{
    T24 a, b;

    a = *(T24 *)0x0C154360;
    b = *(T24 *)0x0C154378;
    *(S12 *)(o + 32) = *(S12 *)((char *)&a + (signed char)(o[3] * 12));
    *(S12 *)(o + 44) = *(S12 *)((char *)&b + (signed char)(o[3] * 12));
}
