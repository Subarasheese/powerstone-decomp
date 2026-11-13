/* Update of a drifting pickup: state 0 starts it (state, flag at 7, scale 1.0), state 1 copies a placement row (20 bytes at 0xC180B3C, row from the byte at 7 of the global at 0xC362378) into the object, scales it by FUN_0c0dfa50 and ends after the global's byte at 0 passes 1; other states blink the flag every fourth tick. A set flag runs FUN_0c01d962. */
extern float FUN_0c0dfa50(int);
void FUN_0c01d962(unsigned char *);
struct G {
    unsigned char mode;     /* 0 */
    char p1[6];
    signed char row;        /* 7 */
    char p8[8];
    int ang;                /* 16 */
};
void FUN_0c01e34a(unsigned char *o)
{
    struct G *g;
    float *r;

    switch (o[0]) {
    case 0:
        o[0] = o[0] + 1;
        o[7] = 1;
        o[12] = 0;
        *(int *)(o + 44) = 0xC18058A;
        *(float *)(o + 16) = 1.0f;
        /* fall through */
    case 1:
        g = (struct G *)0xC362378;
        r = (float *)(0xC180B3C + (signed char)(g->row * 20));
        *(float *)(o + 28) = r[0];
        *(float *)(o + 32) = r[1];
        *(float *)(o + 36) = r[2];
        *(float *)(o + 20) = r[3];
        *(float *)(o + 24) = r[4];
        *(float *)(o + 16) = 0.75f + 0.25f * FUN_0c0dfa50(g->ang);
        if (g->mode > 1) {
            *(float *)(o + 16) = 1.0f;
            o[7] = 0;
            *(int *)(o + 8) = 0;
            o[0] = o[0] + 1;
        }
        break;
    default:
        if (*(int *)(o + 8) % 4 == 0)
            o[7] = o[7] ^ 1;
        *(int *)(o + 8) = *(int *)(o + 8) + 1;
        break;
    }
    if (o[7] != 0)
        FUN_0c01d962(o);
}
