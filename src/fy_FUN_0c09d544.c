/* Aim test for a fighter's attack: turns the velocity (+56/+64) into a facing sector, runs the object's hit tests (two lists: 696/704 and 660/640/681) and keeps the largest distance minus the reference height; stores it through p and returns 0 (none), 1 (above the threshold) or 2 (not). A list-2 object that FUN_0c0ac780 does not accept ends the search with 1 at once. */
extern int FUN_0c0df360(float a);
extern int FUN_0c023524(char *o, void *buf);
extern char FUN_0c025f7a(int a, int b, void *buf, int c);
extern float FUN_0c02629e(int a, int b);
extern int FUN_0c0ac780(int a, int b, int c);
extern char FUN_0c026076(int a, int b, void *buf, int c, int d);
extern float FUN_0c02649a(int a, int b);
int FUN_0c09d544(char *o, float *p, float thresh)
{
    float buf[6];
    float best, base, v;
    int angle, sector, tgt, i, r;

    best = 0.0f;
    if (*(float *)(o + 56) == 0.0f)
        *(unsigned int *)(o + 56) = 0x3727C5AC;
    angle = FUN_0c0df360(-*(float *)(o + 64) / *(float *)(o + 56));
    if (0.0f > *(float *)(o + 56))
        angle = angle + 32768;
    sector = (signed char)((unsigned short)((unsigned short)(angle + 16384) + 8192) / 16384 + 4);
    tgt = FUN_0c023524(o, buf);
    base = buf[1] - buf[4];
    for (i = 0; i < o[728]; i++) {
        r = (signed char)FUN_0c025f7a(tgt, o[696 + i], buf, *(int *)(o + 704 + i * 4));
        if (r == sector || r == 8) {
            v = FUN_0c02629e(o[696 + i], *(int *)(o + 704 + i * 4)) - base;
            if (v > best)
                best = v;
        }
    }
    for (i = 0; i < o[680]; i++) {
        if (*(signed char *)(*(int *)(o + 660 + i * 4) + 2) != 2)
            continue;
        if (*(signed char *)(*(int *)(o + 660 + i * 4) + 729) == 2)
            continue;
        if (FUN_0c0ac780(*(int *)(o + 660 + i * 4), 0, o[3]) == 0)
            return 1;
        r = (signed char)FUN_0c026076(tgt, o[681 + i], buf, *(int *)(o + 640 + i * 4), *(int *)(o + 660 + i * 4));
        if (r != sector)
            continue;
        v = FUN_0c02649a(*(int *)(o + 660 + i * 4), 0) - base;
        if (v > best)
            best = v;
    }
    *p = best;
    if (best == 0.0f)
        return 0;
    if (best > thresh)
        return 1;
    return 2;
}
