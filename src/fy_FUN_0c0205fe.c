/* Midpoint of two short 3-vectors as floats: dst = ((a + b) / 2) per component (dst is the fifth argument, on the stack). */
typedef struct { float x, y, z; } V3;

void FUN_0c0205fe(short *a, short *b, int a6, int a7, V3 *dst)
{
    V3 v;

    v.x = (a[0] + b[0]) / 2;
    v.y = (a[1] + b[1]) / 2;
    v.z = (a[2] + b[2]) / 2;
    *dst = v;
}
