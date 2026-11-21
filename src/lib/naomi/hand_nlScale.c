/* Hand-written: nlScale(x, y, z) multiplies the first three groups of four XMTRX registers by x, y and z (the original swaps the
   register bank with frchg, saves fr15 in FPUL, pops the three floats it pushed through fr15 and multiplies xf0-xf3, xf4-xf7,
   xf8-xf11, then puts fr15 back). The same through the matrix store and load. */
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);

void nlScale(float x, float y, float z)
{
    float m[16];
    int i;

    _builtin_st_ext((float (*)[4])m);
    for (i = 0; i < 4; i++) {
        m[i] = m[i] * x;
        m[4 + i] = m[4 + i] * y;
        m[8 + i] = m[8 + i] * z;
    }
    _builtin_ld_ext((float (*)[4])m);
}
