/* Hand-written: a signed 16-bit divide helper written in assembly. The original takes the divisor in r0 and the
   dividend in r1 (a register convention C cannot receive), returns the 16-bit quotient in r0, and on a zero
   divisor stores the error code 0x44E at 0x0C7FD4D0 and returns 0. Here the two values are the first two
   arguments; the cases set r0 = r4 and r1 = r5 so the original and the C see the same inputs. The quotient is
   truncated toward zero (the overflow case -32768 / -1 gives +32768), computed by shift and subtract (the compiler's own helper for `/` is not linked). */
int FUN_0c0eef74(int divisor, int dividend)
{
    int d = (short)divisor;
    int n = (short)dividend;
    unsigned int ud, un, q, r;
    int neg, i;

    if (d == 0) {
        *(volatile int *)0xC7FD4D0 = 0x44E;
        return 0;
    }
    neg = 0;
    if (d < 0) { ud = -d; neg ^= 1; } else { ud = d; }
    if (n < 0) { un = -n; neg ^= 1; } else { un = n; }
    q = 0;
    r = 0;
    for (i = 15; i >= 0; i--) {
        r = (r << 1) | ((un >> i) & 1);
        if (r >= ud) {
            r -= ud;
            q |= 1u << i;
        }
    }
    if (neg) {
        return -(int)q;
    }
    return (int)q;
}
