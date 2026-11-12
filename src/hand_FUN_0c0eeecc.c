/* Hand-written: strcmp (signed char difference of the first differing bytes). */
int FUN_0c0eeecc(const signed char *a, const signed char *b)
{
    while (*a != 0 && *a == *b) {
        a++;
        b++;
    }
    return *a - *b;
}
