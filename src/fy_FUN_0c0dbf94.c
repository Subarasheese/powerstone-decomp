/* Sets up a camera shot for player record p[0] (records of 0x72D0 bytes at 0xC7E40C4): takes the two players' positions (raised by 230 and 200), clamps the second's height to the first's, normalises the direction between them, moves the first point 500 units along it (not below ground), stores both points and a 52-byte template (0xC1553C8) in the camera block at +392.., derives a zoom from the distance between the two players (10..100) and calls FUN_0c0d9288 / FUN_0c0d827e. */
struct V { float x, y, z; };
struct S52 { int w[13]; };
extern int FUN_0c0e24f0(struct V *);
extern float FUN_0c0df340(float);
extern void FUN_0c0d9288(unsigned char *, unsigned char *);
extern void FUN_0c0d827e(unsigned char *);

void FUN_0c0dbf94(unsigned char *p)
{
    struct V a;
    struct V b;
    struct V d;
    unsigned char *G = (unsigned char *)0xC7E40C4;
    unsigned char *rec = G + (unsigned short)((signed char)p[0] * 0x72D0);
    unsigned char *oth;
    float dist;
    float t;
    float dx;
    float dz;

    a.x = *(float *)(rec + 32);
    a.z = *(float *)(rec + 40);
    a.y = *(float *)(rec + 36) + 230.0f;
    oth = G + (unsigned short)((1 - (signed char)p[0]) * 0x72D0);
    b.x = *(float *)(oth + 32);
    b.z = *(float *)(oth + 40);
    b.y = *(float *)(oth + 36) + 200.0f;
    if (b.y > a.y)
        b.y = a.y;
    d.x = a.x - b.x;
    d.z = a.z - b.z;
    d.y = a.y - b.y;
    if (d.x == 0 && d.z == 0 && d.y == 0) {
        d.y = 9.99999975e-05f;
        d.z = 9.99999975e-05f;
        d.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&d);
    a.x = a.x + 500.0f * d.x;
    a.z = a.z + 500.0f * d.z;
    a.y = a.y + 500.0f * d.y;
    if (a.y < 0)
        a.y = 0;
    dx = *(float *)(G + 32) - *(float *)(G + 0x72D0 + 32);
    dz = *(float *)(G + 40) - *(float *)(G + 0x72D0 + 40);
    dist = FUN_0c0df340(dz * dz + dx * dx);
    *(struct V *)(p + 392) = b;
    *(struct V *)(p + 404) = a;
    *(int *)(p + 416) = (int)(p + 392);
    *(int *)(p + 420) = (int)(p + 404);
    *(struct S52 *)(p + 424) = *(struct S52 *)0xC1553C8;
    if (500.0f > dist) {
        t = 10000.0f / dist;
        if (t < 10.0f)
            t = 10.0f;
        if (t > 100.0f)
            t = 100.0f;
    } else {
        t = 10.0f;
    }
    *(short *)(p + 454) = (int)t;
    *(short *)(p + 450) = (int)t;
    FUN_0c0d9288(p, p + 424);
    FUN_0c0d827e(p);
}
