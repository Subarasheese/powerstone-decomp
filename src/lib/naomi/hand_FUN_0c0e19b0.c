/* Hand-written: pushes XMTRX on the matrix stack at 0xC7FCCB4 (count, limit, stack pointer) and, when src_matrix is not null, loads XMTRX from the 16 floats there; returns whether the limit is above the count before the push. */
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);

int nlPushMatrix(float *src_matrix)
{
    float tmp[16];
    float *stack_ptr;
    int counts;
    int count;
    int limit;
    int room;
    int idx;

    _builtin_st_ext((float (*)[4])tmp);
    stack_ptr = *(float **)(0xC7FCCB4 + 8);
    for (idx = 0; idx < 16; idx++) {
        stack_ptr[idx] = tmp[idx];
    }
    counts = *(int *)0xC7FCCB4;
    count = (short)counts;
    limit = (short)(counts >> 16);
    room = limit > count;
    *(short *)0xC7FCCB4 = count + 1;
    *(float **)(0xC7FCCB4 + 8) = stack_ptr + 16;
    if (src_matrix == 0) {
        return room;
    }
    /* single moves for a matrix at an odd word, pair moves otherwise: the same 16 floats in order either way */
    for (idx = 0; idx < 16; idx++) {
        tmp[idx] = src_matrix[idx];
    }
    _builtin_ld_ext((float (*)[4])tmp);
    return room;
}
