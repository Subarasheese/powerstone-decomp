/* Wrapper: sets the Kamui colour clamp min/max from two packed ARGB words. */
typedef struct { unsigned int v; } PACKED;
int kmSetColorClampValue(PACKED lo, PACKED hi);

void nlSetColorClampValue(unsigned int lo, unsigned int hi)
{
    PACKED a, b;
    a.v = lo;
    b.v = hi;
    kmSetColorClampValue(a, b);
}
