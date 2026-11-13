/* ldexpf-style helper: returns x * 2^n by adjusting the exponent field of the float (denormals shift the mantissa, overflow gives infinity). */
float FUN_0c0df720(float x, int n)
{
    union { float f; int i; } u;
    int e;

    if (x == 0.0f) {
        return 0.0f;
    }
    u.f = x;
    e = n + (unsigned char)(u.i >> 23);
    if (e < 1) {
        u.i = (u.i & 0x80000000) | (((u.i & 0x7FFFFF) | 0x800000) >> (1 - e));
    } else if (e > 254) {
        u.i = (u.i & 0x80000000) | 0x7F800000;
    } else {
        u.i = (u.i & 0x807FFFFF) | (e << 23);
    }
    return u.f;
}
