/* Draws two cells of a HUD element at a fixed screen spot: builds a 56-byte cell record from the floats at 0xC366A70 (offsets 4, 20 and 24) and calls FUN_0c027fa4 twice, with a glyph set chosen from the bytes at 0xC7E40C4 and 0xC7EB394 (+4), the second time with z moved to 544.0 and the last word taken from +24. */
typedef struct {
    int w0;
    float x, y, z;
    float f4, f5;
    int w6, w7, w8, w9;
    int w10;
    float f11;
    int w12;
    int w13;
} S56;
void FUN_0c027fa4(S56 *src, int *o, short idx, int n, char c5, char c6);

void FUN_0c02f258(void)
{
    S56 s;
    char *p = (char *)0xC366A70;
    s.x = 0.0f;
    s.y = *(float *)(p + 4) + -6.0f;
    s.z = 7.79999971f;
    s.f4 = 1.0f;
    s.f5 = 1.0f;
    s.w10 = 0;
    s.f11 = *(float *)(p + 20);
    s.w13 = 5;
    FUN_0c027fa4(&s, (int *)(0xC17FDC8 + (unsigned char)(*(signed char *)0xC7E40C8 * 12)), 0, 0, 0, 0);
    s.z = 544.0f;
    s.w13 = *(int *)(p + 24);
    FUN_0c027fa4(&s, (int *)(0xC17FDC8 + (unsigned char)(*(signed char *)0xC7EB398 * 12)), 0, 0, 1, 0);
}
