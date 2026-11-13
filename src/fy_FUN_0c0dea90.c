/* INLINE-ASM: only the trapa #65 (an error trap the SDK compiler has no intrinsic for in this install); the rest is C. */
/* Sets up the frame-time record at 0xC7F8810 from four weights (in 1/100 units) and the global time step: stores the weight sum (+40), normalises the weights by half the sum (mode 3) or by the sum (record kind +92 = 32, 34 or 36) into +44..+56 and the step ratio into +60, hands the record to FUN_0c0f9d00 (trap 65 on failure), clears the word the pointer at 0xC7F8E9C points to to 0x800000 and runs FUN_0c0ddeb0 once. Returns FUN_0c0f9d00's result. */
#pragma inline_asm(trapa65)
static void trapa65(void)
{
    trapa #65
}
extern int FUN_0c0f9d00(char *rec);
extern void FUN_0c0ddeb0(void);
int FUN_0c0dea90(int a, int b, int c, int d)
{
    char *s = (char *)0xC7F8810;
    int sum, half, r;
    float k = 100.0f;
    float fa, fb, fc, fd, fs, ft;

    sum = *(int *)0xC7F887C + b + c + d;
    if (*(int *)0xC7F8878 == 3)
        sum = (sum + a) * 2;
    *(int *)(s + 40) = sum;
    fa = (float)a * k;
    fb = (float)b * k;
    fc = (float)c * k;
    fd = (float)d * k;
    if (*(int *)0xC7F8878 == 3) {
        half = (sum + (0 > sum)) >> 1;
        fs = (float)half;
        fa = fa / fs;
        fb = fb / fs;
        fc = fc / fs;
        fd = fd / fs;
        *(float *)(s + 44) = fa;
        *(float *)(s + 48) = fb;
        *(float *)(s + 52) = fc;
        *(float *)(s + 56) = fd;
        ft = (float)*(int *)0xC7F887C * k / fs;
        *(float *)(s + 60) = ft;
    } else {
        fs = (float)sum;
        r = *(int *)(s + 92);
        if (r == 32) {
            fb = fb / fs;
            fc = fc / fs;
            fd = fd / fs;
            *(float *)(s + 44) = 0.0f;
            *(float *)(s + 48) = fb;
            *(float *)(s + 52) = fc;
            *(float *)(s + 56) = fd;
            ft = (float)*(int *)0xC7F887C * k / fs;
            *(float *)(s + 60) = ft;
        } else if (r == 34) {
            fa = fa / fs;
            fb = fb / fs;
            fd = fd / fs;
            *(float *)(s + 44) = fa;
            *(float *)(s + 48) = fb;
            *(float *)(s + 52) = 0.0f;
            *(float *)(s + 56) = fd;
            ft = (float)*(int *)0xC7F887C * k / fs;
            *(float *)(s + 60) = ft;
        } else if (r == 36) {
            fa = fa / fs;
            fb = fb / fs;
            fc = fc / fs;
            fd = fd / fs;
            *(float *)(s + 44) = fa;
            *(float *)(s + 48) = fb;
            *(float *)(s + 52) = fc;
            *(float *)(s + 56) = fd;
            *(float *)(s + 60) = 0.0f;
        }
    }
    r = FUN_0c0f9d00(s);
    if (r != 0)
        trapa65();
    **(int **)0xC7F8E9C = 0x800000;
    if (*(int *)0xC7F88F4 == 0) {
        FUN_0c0ddeb0();
        *(int *)0xC7F88F4 = 1;
    }
    return r;
}
