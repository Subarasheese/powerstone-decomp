/* Draws a digit string at position p with the given scale: digits 0-3 and 4-9 are two glyph sets, each advancing x by 32*scale or 16*scale; other characters draw nothing. */
struct T12 { int a, b, c; };
struct L { int f0; float x, y, z; float sx, sy; int pad[4]; int a40; float f44; int pad48; int a52; };
extern void FUN_0c027fa4(struct L *l, int tbl, int kind, int digit, int z1, int z2);
void FUN_0c030be8(struct T12 *p, char *s, float scale)
{
    struct L l;
    float w32, w16;
    signed char c;
    l.a40 = 0;
    l.f44 = 1.0f;
    l.sx = scale;
    l.sy = scale;
    l.a52 = 10;
    *(struct T12 *)&l.x = *p;
    l.z = 9.0f;
    w32 = scale * 32.0f;
    w16 = scale * 16.0f;
    while ((c = *s++) != 0) {
        if (c >= 48 && c <= 51) {
            c -= 48;
            FUN_0c027fa4(&l, 0xC17FDBC, 2, c, 0, 0);
            l.x += w32;
        }
        if (c >= 52 && c <= 57) {
            c -= 48;
            FUN_0c027fa4(&l, 0xC17FDBC, 3, c, 0, 0);
            l.x += w16;
        }
    }
}
