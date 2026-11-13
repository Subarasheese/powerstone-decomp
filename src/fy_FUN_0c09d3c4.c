/* Finds the first of the object's hit tests (two lists, 696/704 and 660/640) whose result matches its facing sector (angle at +48 rounded to 16384 steps, plus 4) or is 8, stores that hit's distance minus +36 through the out pointer and returns 1 when it is above the threshold and 2 when not (the second list returns only when FUN_0c0ac780 accepts it); returns 0 when nothing hits. */
extern void FUN_0c023524(char *o, void *buf);
extern char FUN_0c025f7a(int a, int b, void *buf, int c);
extern float FUN_0c02629e(int a, int b);
extern char FUN_0c026076(int a, int b, void *buf, int c, int d);
extern float FUN_0c02649a(int a, int b);
extern int FUN_0c0ac780(int a, int b, int c);
int FUN_0c09d3c4(char *o, float *out, float thresh)
{
    int buf[6];
    int sector, i, r;
    float v;

    FUN_0c023524(o, buf);
    sector = (signed char)((unsigned short)(*(int *)(o + 48) + 8192) / 16384 + 4);
    for (i = 0; i < o[728]; i++) {
        r = (signed char)FUN_0c025f7a(1, o[696 + i], buf, *(int *)(o + 704 + i * 4));
        if (r == sector || r == 8) {
            v = FUN_0c02629e(o[696 + i], *(int *)(o + 704 + i * 4)) - *(float *)(o + 36);
            *out = v;
            if (v > thresh)
                return 1;
            return 2;
        }
    }
    for (i = 0; i < o[680]; i++) {
        if (*(signed char *)(*(int *)(o + 660 + i * 4) + 2) != 2)
            continue;
        r = (signed char)FUN_0c026076(1, o[681 + i], buf, *(int *)(o + 640 + i * 4), *(int *)(o + 660 + i * 4));
        if (r == sector || r == 8) {
            v = FUN_0c02649a(*(int *)(o + 660 + i * 4), 0) - *(float *)(o + 36);
            *out = v;
            if (v > thresh) {
                if (FUN_0c0ac780(*(int *)(o + 660 + i * 4), 9, o[3]) != 0)
                    return 1;
            } else {
                if (FUN_0c0ac780(*(int *)(o + 660 + i * 4), 9, o[3]) != 0)
                    return 2;
            }
        }
    }
    return 0;
}
