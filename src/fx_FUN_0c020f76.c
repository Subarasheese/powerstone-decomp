/* Calls FUN_0c062210(c, a+108), copies the 12 bytes at c into b, then scales b's floats at +12 and +16 by a's at +80 and +84. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062210(void *, void *);

void FUN_0c020f76(char *a, char *b, char *c)
{
    FUN_0c062210(c, a + 108);
    *(S12 *)b = *(S12 *)c;
    *(float *)(b + 12) = *(float *)(a + 80) * *(float *)(c + 12);
    *(float *)(b + 16) = *(float *)(a + 84) * *(float *)(c + 16);
}
