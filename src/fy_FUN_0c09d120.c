/* Picks the best target for a turn: from the object's direction vector (floats +56 / +64) it takes the heading sector (FUN_0c0df360 of -z/x, +0x8000 when x is negative, rotated by 0x4000 and divided by 0x4000) and scans the entries at +0x2b8/+0x2c0 and the objects at +660 for ones whose FUN_0c025f7a / FUN_0c026076 result equals the sector (or 8); each match's FUN_0c02629e / FUN_0c02649a value minus a reference is stored to *out and the largest is kept; an object accepted by FUN_0c0ac780 == 0 ends the search with 1. Returns 0 when nothing was found, 1 when the best is above thresh, else 2. */
#define I8(o, off) (*(signed char *)((o) + (off)))
#define I32(o, off) (*(int *)((o) + (off)))
#define F32(o, off) (*(float *)((o) + (off)))
int FUN_0c023524(char *o, float *buf);
int FUN_0c0df360(float x);
int FUN_0c025f7a(int a, int id, float *buf, int val);
float FUN_0c02629e(int id, int val);
int FUN_0c0ac780(char *p, int z, int kind);
int FUN_0c026076(int a, int id, float *buf, int val, char *p);
float FUN_0c02649a(char *p, int z);
int FUN_0c09d120(char *o, float *out, float thresh)
{
    float buf[6];
    float best;
    float ref;
    int ang;
    int q;
    int i;
    signed char want;
    best = 0.0f;
    FUN_0c023524(o, buf);
    if (F32(o, 56) == 0.0f)
        F32(o, 56) = 9.99999975e-06f;
    ang = FUN_0c0df360(-F32(o, 64) / F32(o, 56));
    if (0.0f > F32(o, 56))
        ang = ang + 0x8000;
    ang = (unsigned short)(ang + 0x4000);
    q = (unsigned short)(ang + 0x2000) / 0x4000;
    want = q + 4;
    ref = buf[1] - buf[4];
    for (i = 0; i < I8(o, 0x2D8); i++) {
        signed char got = FUN_0c025f7a(1, I8(o, 0x2B8 + i), buf, I32(o, 0x2C0 + 4 * i));
        if (got == want || got == 8) {
            float d = FUN_0c02629e(I8(o, 0x2B8 + i), I32(o, 0x2C0 + 4 * i)) - ref;
            *out = d;
            if (d > best)
                best = *out;
        }
    }
    for (i = 0; i < I8(o, 0x2A8); i++) {
        char *p = (char *)I32(o, 660 + 4 * i);
        if (p[2] == 2 && p[729] != 2) {
            if (FUN_0c0ac780((char *)I32(o, 660 + 4 * i), 0, I8(o, 3)) == 0)
                return 1;
            if ((signed char)FUN_0c026076(1, I8(o, 681 + i), buf, I32(o, 640 + 4 * i), (char *)I32(o, 660 + 4 * i)) == want) {
                float d = FUN_0c02649a((char *)I32(o, 660 + 4 * i), 0) - F32(o, 36);
                *out = d;
                if (d > best)
                    best = *out;
            }
        }
    }
    if (best == 0.0f)
        return 0;
    if (best > thresh)
        return 1;
    return 2;
}
