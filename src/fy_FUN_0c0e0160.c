/* printf helper: writes the hexadecimal digits of val into out (upper-case table when sel is 1, lower-case when 0, in the order most significant first) and returns the digit count; first it settles the width field of the format state at 0xC7F8C08 (clamps +12 to at least 1, or derives it from +8 when flag 0x10 is set). */
struct Tbl { const char *p[2]; };
struct Fmt { char pad[3]; unsigned char flags; char pad2[4]; int w8; int w12; };
int FUN_0c0e0160(int val, char *out, int sel)
{
    struct Tbl t;
    struct Fmt *f = (struct Fmt *)0xC7F8C08;
    char buf[32];
    const char *digits;
    int n;
    t = *(struct Tbl *)0xC155AA0;
    if (!(f->flags & 8)) {
        if (f->flags & 0x10) {
            f->w12 = f->w8;
            if (f->flags & 0x20)
                f->w12 = f->w12 - 2;
        }
        if (f->w12 < 1)
            f->w12 = 1;
    }
    digits = t.p[sel];
    n = 0;
    while (val != 0) {
        buf[n] = digits[val % 16];
        val = val / 16;
        n++;
    }
    {
        int i = n;
        while (i != 0) {
            *out++ = buf[i - 1];
            i--;
        }
    }
    return n;
}
