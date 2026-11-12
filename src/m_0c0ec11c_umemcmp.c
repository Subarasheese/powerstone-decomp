/* @unit 0c0ec11c-0c0ec150 */
typedef unsigned int size_t;
int umemcmp(const unsigned char *a, const unsigned char *b, size_t n)
{
    size_t i;
    const unsigned char *p = b;
    if (n == 0) return 0;
    for (i = 0; i < n; i++) {
        if (*a++ != *p++) break;
    }
    return a[-1] - p[-1];
}
