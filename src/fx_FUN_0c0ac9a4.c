/* Copies e's point from +56 to +32, then calls FUN_0c062210(e+32, anchor) where the anchor is a table entry of the object at e[7] picked by its signed byte at +0x71F1 and e's halfword at +0xEC. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062210(void *, void *);

void FUN_0c0ac9a4(char *e)
{
    signed char *o;

    o = *(signed char **)(e + 28);
    *(S12 *)(e + 32) = *(S12 *)(e + 56);
    FUN_0c062210(e + 32, (char *)o + 0x300 + (short)(o[0x71F1] * 3520) + (short)(*(short *)(e + 0xEC) * 176));
}
