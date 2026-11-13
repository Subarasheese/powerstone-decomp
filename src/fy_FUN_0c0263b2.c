/* Copies a 16-, 20- or 24-byte float record (selected by the low nibble of a4: 0, 1, 2) into a local and returns the difference of two of its floats (element 1 minus element 3 or 4). For other selectors the original returns whatever fr0 held on entry (a missing default return in the source); the C returns 0 there. */
struct R16 { float f[4]; };
struct R20 { float f[5]; };
struct R24 { float f[6]; };

float FUN_0c0263b2(int a4, void *a5)
{
    struct R20 a;
    struct R24 b;
    struct R16 c;
    float r;

    switch ((signed char)a4 & 15) {
    case 0:
        c = *(struct R16 *)a5;
        r = c.f[1] - c.f[3];
        break;
    case 1:
        a = *(struct R20 *)a5;
        r = a.f[1] - a.f[4];
        break;
    case 2:
        b = *(struct R24 *)a5;
        r = b.f[1] - b.f[4];
        break;
    }
    return r;
}
