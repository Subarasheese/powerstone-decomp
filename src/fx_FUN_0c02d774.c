/* Resets the record at 0xC366A70: clears its blocks, sets the two 40 bytes and the unit floats, calls two setup helpers, and sets a 16/-16 range when the flag at 0xC7F3020 is set. */
extern void *memset(void *p, int c, unsigned n);
extern void FUN_0c02d8e0(void);
extern void FUN_0c02d84a(void);
extern int g_3020;
void FUN_0c02d774(void)
{
    char *b = (char *)0xC366A70;
    float *f = (float *)b;
    memset(b + 44, 0, 48);
    memset(b + 92, 0, 120);
    memset(b + 212, 0, 384);
    memset(b + 596, 0, 480);
    b[46] = 0;
    b[70] = 0;
    b[3] = 40;
    b[2] = 40;
    f[6] = 1.0f;
    f[5] = 1.0f;
    FUN_0c02d8e0();
    FUN_0c02d84a();
    if (*(int *)0xC7F3020 == 0) {
        f[2] = 0.0f;
        f[1] = 0.0f;
        f[4] = 0.0f;
        f[3] = 0.0f;
    } else {
        f[1] = 16.0f;
        f[2] = -16.0f;
        f[3] = 16.0f;
        f[4] = -16.0f;
    }
    memset((void *)0xC366EEC, 0, 20);
}
