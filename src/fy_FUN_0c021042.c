/* Builds a scaled vector in b from c: FUN_0c062210(c, a+108), copies the 12 bytes of c to b, then b[12] = c[12]*a[80], b[16] = c[16]*a[84] (floats). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062210(void *, void *);
void FUN_0c021042(char *a, char *b, char *c)
{
    FUN_0c062210(c, a + 108);
    *(S12 *)b = *(S12 *)c;
    *(float *)(b + 12) = *(float *)(c + 12) * *(float *)(a + 80);
    *(float *)(b + 16) = *(float *)(c + 16) * *(float *)(a + 84);
}
