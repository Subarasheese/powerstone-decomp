/* Hand-written: pushes XMTRX on the matrix stack at 0xC7FCCB4 (count, limit, stack pointer) and, when a4 is not null,
   loads XMTRX from the 16 floats at a4. Returns whether the limit is above the count before the push. The stack and
   a 8-byte aligned source hold their floats with each pair swapped (the double-word moves of the original), an
   unaligned source (bit 2 set) is read float by float. */
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);

int FUN_0c0e19b0(float *a4)
{
    float t[16];
    float *sp;
    int cur;
    int lo;
    int hi;
    int room;
    int j;

    _builtin_st_ext((float (*)[4])t);
    sp = *(float **)(0xC7FCCB4 + 8);
    for (j = 0; j < 16; j += 2) {
        sp[j] = t[j + 1];
        sp[j + 1] = t[j];
    }
    cur = *(int *)0xC7FCCB4;
    lo = (short)cur;
    hi = (short)(cur >> 16);
    room = hi > lo;
    *(short *)0xC7FCCB4 = lo + 1;
    *(float **)(0xC7FCCB4 + 8) = sp + 16;
    if (a4 == 0) {
        return room;
    }
    if (((int)a4 & 4) != 0) {
        for (j = 0; j < 16; j++) {
            t[j] = a4[j];
        }
    } else {
        for (j = 0; j < 16; j += 2) {
            t[j] = a4[j + 1];
            t[j + 1] = a4[j];
        }
    }
    _builtin_ld_ext((float (*)[4])t);
    return room;
}
