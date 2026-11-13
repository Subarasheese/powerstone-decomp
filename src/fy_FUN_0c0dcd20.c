/* Stores a 3-float vector at 0xC3468B0 and copies it to 0xC3468C0. */
struct V3 { float x, y, z; };
void FUN_0c0dcd20(float x, float y, float z)
{
    struct V3 *a = (struct V3 *)0xC3468B0;
    struct V3 *b = (struct V3 *)0xC3468C0;
    a->x = x;
    a->y = y;
    a->z = z;
    *b = *a;
}
