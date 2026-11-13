/* Signed 16-bit divide helper (divisor in r0, dividend in r1 in the original; here the first two arguments): returns the quotient truncated toward zero, or stores error 0x44E at 0x0C7FD4D0 and returns 0 on a zero divisor. */
int FUN_0c0eef74(int divisor, int dividend)
{
    int div_s = (short)divisor;
    int dvd_s = (short)dividend;
    unsigned int div_abs, dvd_abs, quot, rem;
    int negate, bit;

    if (div_s == 0) {
        *(volatile int *)0xC7FD4D0 = 0x44E;
        return 0;
    }
    negate = 0;
    if (div_s < 0) { div_abs = -div_s; negate ^= 1; } else { div_abs = div_s; }
    if (dvd_s < 0) { dvd_abs = -dvd_s; negate ^= 1; } else { dvd_abs = dvd_s; }
    quot = 0;
    rem = 0;
    for (bit = 15; bit >= 0; bit--) {
        rem = (rem << 1) | ((dvd_abs >> bit) & 1);
        if (rem >= div_abs) {
            rem -= div_abs;
            quot |= 1u << bit;
        }
    }
    if (negate) {
        return -(int)quot;
    }
    return (int)quot;
}
