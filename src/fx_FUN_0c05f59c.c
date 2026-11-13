/* Picks the free slot kind (3 or 4) for score a from two limit entries, then asks FUN_0c05ef02 for a record and fills it with a caller block, a halfword and the constant block three times. */
struct T12 { int a, b, c; };
extern char *FUN_0c05ef02(signed char s, int a, signed char c, int z, int w, int v);
static int test(unsigned char *p, int a)
{
    return p[0] != 0 && (unsigned char)a < p[1];
}
void FUN_0c05f59c(int a, char c, int w, struct T12 *blk, short h)
{
    struct T12 L;
    signed char *s = (signed char *)0xC383808;
    unsigned char *B = (unsigned char *)0xC7F3238;
    char *r;
    L = *(struct T12 *)0xC14D94C;
    if (*s == 3) {
        *s = 4;
        if (test(B + 576, a)) {
            *s = 3;
            if (test(B + 432, a)) return;
        }
    } else {
        *s = 3;
        if (test(B + 432, a)) {
            *s = 4;
            if (test(B + 576, a)) return;
        }
    }
    r = FUN_0c05ef02(*s, a, c, 0, w, 0);
    *(struct T12 *)(r + 20) = *blk;
    *(short *)(r + 16) = h;
    *(struct T12 *)(r + 32) = L;
    *(struct T12 *)(r + 44) = L;
    *(struct T12 *)(r + 56) = L;
}
