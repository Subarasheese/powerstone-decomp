/* Hand-written: strcmp (signed char difference of the first differing bytes). */
int FUN_0c0eeecc(const signed char *str_a, const signed char *str_b)
{
    while (*str_a != 0 && *str_a == *str_b) {
        str_a++;
        str_b++;
    }
    return *str_a - *str_b;
}
