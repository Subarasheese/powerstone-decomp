/* Direction (two angles) from the object's eye position to another point, returned through a struct pointer on the stack. */
struct V3 { int x, y, z; };
int thunk_FUN_0c062242(int, float *);
int FUN_0c06206e(float *, float *, int);
float FUN_0c0df340(float);
int FUN_0c0df360(float);

void FUN_0c0c7668(char *obj, char *other, int a6, int a7, struct V3 *out)
{
    float d[3];
    struct V3 r;
    char *tbl = (char *)(0xC7E40C4 + (unsigned short)((unsigned short)obj[3] * (unsigned short)0x72D0));
    float a, b;

    thunk_FUN_0c062242((int)(tbl + 0x300 + (short)((short)tbl[0x71F1] * (short)0xDC0)), d);
    FUN_0c06206e(d, d, (int)other + 0x20);
    if (d[2] == 0.0f)
        d[2] = 9.99999975e-06f;
    r.y = FUN_0c0df360(d[0] / d[2]);
    if (0.0f > d[2])
        r.y += 0x8000;
    if (d[1] == 0.0f)
        d[1] = 9.99999975e-06f;
    a = d[0];
    b = d[2];
    r.x = FUN_0c0df360(FUN_0c0df340(b * b + a * a) / d[1]) - 16384;
    if (0.0f > d[1])
        r.x += 0x8000;
    *out = r;
}
