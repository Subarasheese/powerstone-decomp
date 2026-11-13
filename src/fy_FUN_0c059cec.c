/* Walks a record stream (starting 24 bytes in, records that start negative are skipped 80 bytes first): each record gives a flag word and an item count (times three unless flag 16), and each item whose first word is odd is a 32-byte entry copied as a 12-byte vector to out[n] with its word offset recorded in idx[n]; returns the number copied. */
struct V3 { int a, b, c; };
int FUN_0c059cec(struct V3 *out, int *idx, int *s)
{
    int *p = s + 6;
    int n = 0;
    int i, m, flags;

    while (*p != 0) {
        if (*p < 0)
            p += 20;
        flags = *p++;
        m = *p++;
        if (!(flags & 16))
            m = m * 3;
        for (i = 0; i < m; i++) {
            if (*p & 1) {
                idx[n] = p - s;
                out[n] = *(struct V3 *)p;
                n++;
                p += 8;
            } else {
                p += 2;
            }
        }
    }
    return n;
}
