/* Calls FUN_0c062210(c, a+108), copies the 12 bytes at c into b, then b.f[3] = a.f[20] * c.f[3] (floats at +12 and +80). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062210(void *, void *);

void FUN_0c020fba(char *a, char *b, char *c)
{
    FUN_0c062210(c, a + 108);
    *(S12 *)b = *(S12 *)c;
    *(float *)(b + 12) = *(float *)(a + 80) * *(float *)(c + 12);
}
