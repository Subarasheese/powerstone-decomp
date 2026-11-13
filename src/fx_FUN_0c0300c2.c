/* Debug/HUD readout for one of the stage's slots: lay the slot's value out as a bar position, then draw its number and the HIT label. */
int sprintf(char *, int, int, int, const char *, int);
void FUN_0c02d9e0(const char *, int, float, float, float, float);

#define BUF ((char *)0xC7F36B8)

void FUN_0c0300c2(int a, int b, int c, int d, float x)
{
    char *rec;
    int q;
    float t;
    float lo, hi;

    rec = (char *)0xC366A9C + (signed char)(a * 24);
    q = rec[9] / 10;
    t = (float)(signed char)rec[8] * 112.0f / (float)(signed char)b;
    if ((signed char)a == 0) {
        *(float *)(rec + 16) = t + -80.0f;
    } else {
        *(float *)(rec + 16) = -t + 608.0f;
        if ((signed char)q == 0)
            *(float *)(rec + 16) = *(float *)(rec + 16) + 32.0f;
    }
    hi = x + 208.0f;
    lo = 224.0f - x;
    if ((signed char)q != 0) {
        sprintf(BUF, b, (signed char)q, d, (const char *)0xC149440, rec[9]);
        FUN_0c02d9e0(BUF, 4, *(float *)(rec + 16), hi, 1.0f, 1.0f);
        FUN_0c02d9e0((const char *)0xC149444, 1, *(float *)(rec + 16) + 64.0f, lo, 1.0f, 1.0f);
    } else {
        sprintf(BUF, b, (signed char)q, d, (const char *)0xC149448, rec[9]);
        FUN_0c02d9e0(BUF, 4, *(float *)(rec + 16), hi, 1.0f, 1.0f);
        FUN_0c02d9e0((const char *)0xC149444, 1, *(float *)(rec + 16) + 32.0f, lo, 1.0f, 1.0f);
    }
}
