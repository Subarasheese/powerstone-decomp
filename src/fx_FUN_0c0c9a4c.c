/* Like FUN_0c03fe2c but e's point at +32 starts as a 12-byte constant at 0xC33C978 (no fixed y/z set first). */
typedef struct { int a, b, c; } S12;
typedef struct { float x, y, z; } V3;
extern void FUN_0c062210(void *, void *);
extern void FUN_0c06206e(V3 *, V3 *, V3 *);
extern int FUN_0c0df360(float);

void FUN_0c0c9a4c(char *e, char *n)
{
    V3 d;
    float lz;
    int ang;

    *(S12 *)(e + 32) = *(S12 *)0xC33C978;
    FUN_0c062210(e + 32, n + 0x47C0);
    *(float *)(e + 36) = *(float *)(n + 36) + 200.0f;
    FUN_0c06206e(&d, (V3 *)(e + 32), (V3 *)(n + 32));
    lz = d.z;
    if (lz == 0.0f) {
        lz = 9.99999975e-06f;
    }
    ang = FUN_0c0df360(d.x / lz);
    if (lz < 0.0f) {
        ang += 0x8000;
    }
    *(S12 *)(e + 44) = *(S12 *)(n + 44);
    *(int *)(e + 44) += *(int *)(n + 0x7244);
    *(int *)(e + 48) = ang;
}
