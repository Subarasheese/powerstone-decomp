
void FUN_0c0df110(int a, int b, int c, float f)
{
    V v[3];
    V *pv[3];
    float inv = 1.0f / f;
    short *g;
    int s;

    ((int *)0x0C3468F0)[0] = a;
    ((int *)0x0C3468F0)[1] = b;
    ((int *)0x0C3468F0)[2] = c;
    v[0].flags = 0xE0000000;
    v[0].x = 0.0f;
    v[0].y = 0.0f;
    v[0].z = inv;
    v[0].c1 = a;
    v[0].c2 = a;
    g = (short *)0x0C7FD498;
    s = g[2];
    if (g[5] != 0)
        s = s * 2;
    v[1].flags = 0xE0000000;
    v[1].x = (float)s;
    v[1].y = 0.0f;
    v[1].z = inv;
    v[1].c1 = b;
    v[1].c2 = b;
    v[2].flags = 0xF0000000;
    v[2].x = 0.0f;
    v[2].y = (float)g[3];
    v[2].z = inv;
    v[2].c1 = c;
    v[2].c2 = c;
    pv[0] = &v[0];
    pv[1] = &v[1];
    pv[2] = &v[2];
    kmSetBackGroundPlane(pv, 0, 32);
}
