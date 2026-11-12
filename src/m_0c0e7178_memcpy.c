/* @unit 0c0e7178-0c0e71d4 */
typedef unsigned int size_t;
void *memcpy(void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *to;
    const unsigned char *from;

    if (s1 != s2) {
        if (s1 < s2) {
            to = s1;
            from = s2;
            for (i = 0; i < n; ++i) {
                *to++ = *from++;
            }
        } else {
            to = (unsigned char *)s1 + n;
            from = (const unsigned char *)s2 + n;
            for (i = 0; i < n; ++i) {
                *--to = *--from;
            }
        }
    }
    return s1;
}
void *memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *to = s;
    for (i = 0; i < n; ++i) {
        *to++ = (unsigned char)c;
    }
    return s;
}
