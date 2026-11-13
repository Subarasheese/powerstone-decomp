/* Writes two 32-byte textured-quad vertices (x, y, z, u, v, colour) at a7 (flipped vertically when the flag at 0xC346A58 is set); returns the advanced pointer. */
extern void _builtin_prefetch(void *);

int *FUN_0c0dffe0(int a4, int a5, int a6, int *a7)
{
    float X, Y, Xw, Yh;
    int w, h, s0, s1, c;
    float *f;
    int *p;
    short *tab;

    w = *(int *)0xC7F8BFC;
    h = *(int *)0xC7F8C00;
    tab = (short *)0xC7F8C8C + (signed char)a6;
    c = (signed char)a6;
    p = a7;
    if (*(int *)0xC346A58 == 0) {
        s0 = tab[0];
        s1 = tab[1];
        X = (float)a4;
        Y = (float)a5;
        Xw = X + (float)w;
        Yh = Y + (float)h;
        p[0] = -1;
        f = (float *)p;
        f[1] = X; f[2] = Y; p[3] = 0x447A0001;
        f[4] = Xw; f[5] = Y; p[6] = 0x447A0001; f[7] = Xw;
        _builtin_prefetch(p);
        p += 8;
        f = (float *)p;
        f[0] = Yh; p[1] = 0x447A0001; f[2] = X; f[3] = Yh;
        p[4] = (((c << 16) << 8) | (c << 16)) | (c << 8) | c;
        p[5] = s0;
        p[6] = s0 | 0x3F800000;
        p[7] = s1 | 0x3F800000;
    } else {
        s0 = tab[0];
        s1 = tab[1];
        X = (float)a4;
        Y = (float)(-a5 - h + *(short *)0xC7FD49C);
        Xw = X + (float)w;
        Yh = Y + (float)h;
        p[0] = -1;
        f = (float *)p;
        f[1] = Y; f[2] = X; p[3] = 0x447A0001;
        f[4] = Yh; f[5] = X; p[6] = 0x447A0001; f[7] = Yh;
        _builtin_prefetch(p);
        p += 8;
        f = (float *)p;
        f[0] = Xw; p[1] = 0x447A0001; f[2] = Y; f[3] = Xw;
        p[4] = (((c << 16) << 8) | (c << 16)) | (c << 8) | c;
        p[5] = s1;
        p[6] = s0;
        p[7] = s0 | 0x3F800000;
    }
    _builtin_prefetch(p);
    return p + 8;
}
