/* Like FUN_0c09d2f2 with a second scan: looks first through the entries at +0x2b8/+0x2c0 (count +0x2d8) and then through the objects at +660 (count +0x2a8; byte 2 must be 2 and byte 729 not 2) for one whose FUN_0c025f7a / FUN_0c026076 result equals the heading sector (angle/0x4000 + 4) (or 8 in the first scan); for the match it stores FUN_0c02629e / FUN_0c02649a minus the float at +36 into *out and returns 1 when above thresh, else 2; 0 when none matches. */
#define I8(o, off) (*(signed char *)((o) + (off)))
#define I32(o, off) (*(int *)((o) + (off)))
int FUN_0c023524(char *o, int *buf);
int FUN_0c025f7a(int a, int id, int *buf, int val);
float FUN_0c02629e(int id, int val);
int FUN_0c026076(int a, int id, int *buf, int val, char *p);
float FUN_0c02649a(char *p, int z);
int FUN_0c09cfd6(char *o, float *out, float thresh)
{
    int buf[6];
    int q;
    int i;
    signed char want;
    float d;
    FUN_0c023524(o, buf);
    q = (unsigned short)(I32(o, 48) + 0x2000) / 0x4000;
    want = q + 4;
    for (i = 0; i < I8(o, 0x2D8); i++) {
        signed char got = FUN_0c025f7a(1, I8(o, 0x2B8 + i), buf, I32(o, 0x2C0 + 4 * i));
        if (got == want || got == 8) {
            d = FUN_0c02629e(I8(o, 0x2B8 + i), I32(o, 0x2C0 + 4 * i));
            goto done;
        }
    }
    for (i = 0; i < I8(o, 0x2A8); i++) {
        char *p = (char *)I32(o, 660 + 4 * i);
        if (p[2] == 2 && p[729] != 2) {
            if ((signed char)FUN_0c026076(1, I8(o, 681 + i), buf, I32(o, 640 + 4 * i), (char *)I32(o, 660 + 4 * i)) == want) {
                d = FUN_0c02649a((char *)I32(o, 660 + 4 * i), 0);
                goto done;
            }
        }
    }
    return 0;
done:
    d = d - *(float *)(o + 36);
    *out = d;
    if (d > thresh)
        return 1;
    return 2;
}
