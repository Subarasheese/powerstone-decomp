/* Hand-written: the 4x4 matrix at a4 (16 floats, rows swapped pairwise as the double loads put them in the registers) is multiplied
   by the current XMTRX row by row; the result becomes the new XMTRX. */
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);

void nlMultiMatrix8(float *a4)
{
    float v[16];
    int i;

    for (i = 0; i < 16; i++) {
        v[i] = a4[i];
    }
    _builtin_ftrv(&v[0], &v[0]);
    _builtin_ftrv(&v[4], &v[4]);
    _builtin_ftrv(&v[8], &v[8]);
    _builtin_ftrv(&v[12], &v[12]);
    _builtin_ld_ext((float (*)[4])v);
}
