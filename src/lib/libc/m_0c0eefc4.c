/* @unit 0c0eefc4-0c0ef158 */
/* C runtime (SHC floating-point support): mantissa division by restoring long division on byte strings.
   x / y over 8-byte mantissas: 66 quotient bits (shift, trial subtract, add back), a sticky bit (0x20 in byte 12) when a
   remainder is left, then normalised until the top bit is set while the exponent at *exp counts down; e2 - *exp is the
   result exponent. The 9 result bytes go back to x. Helpers: lsft/rsft (shift a byte string by one bit), sub/add. */
extern void *memset(void *, int, int);
extern void *memcpy(void *, const void *, int);
extern void lsft(unsigned char *, int);
extern void rsft(unsigned char *, int);
extern int sub(int, unsigned char *, unsigned char *, int);
extern void add(unsigned char *, unsigned char *, int);

void FUN_0c0eefc4(short *exp, unsigned char *x, short e2, unsigned char *y)
{
    unsigned char a[12];
    unsigned char b[12];
    unsigned char q[16];
    int i;
    unsigned char *p;

    memset(a, 0, 4);
    memcpy(&a[4], y, 8);
    memset(b, 0, 4);
    memcpy(&b[4], x, 8);
    memset(q, 0, 16);
    for (i = 0; i < 66; i++) {
        lsft(q, 12);
        if (sub(0, a, b, 12) >= 0)
            q[11]++;
        else
            add(a, b, 12);
        lsft(a, 12);
    }
    for (i = 0; i < 2; i++)
        rsft(q, 16);
    if (a[0] || a[1] || a[2] || a[3] || a[4] || a[5] || a[6] || a[7] || a[8] || a[9] || a[10] || a[11])
        q[12] |= 0x20;
    *exp = e2 - *exp;
    if (q[4] || q[5] || q[6] || q[7] || q[8] || q[9] || q[10] || q[11] || q[12]) {
        for (p = &q[4]; !(*p & 0x80); ) {
            lsft(p, 9);
            (*exp)--;
        }
    }
    memcpy(x, &q[4], 9);
}
