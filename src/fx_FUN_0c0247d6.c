/* Box-box overlap test of a and b (x,y,z then width,height,depth): returns 0 none, 1 overlap with flag at c+0x2D9, 2..7 the axis/side of least penetration (pushing c's offsets). */
int FUN_0c0247d6(float *a, char *c, float *b)
{
    float d0, d1, d2, t, r;

    t = a[0] - b[0];
    if (0.0f > t)
        t = b[0] - a[0];
    d0 = (a[3] + b[3]) - t;

    t = a[1] - b[1];
    if (0.0f > t)
        t = b[1] - a[1];
    d1 = (a[4] + b[4]) - t;

    t = a[2] - b[2];
    if (0.0f > t)
        t = b[2] - a[2];
    d2 = (a[5] + b[5]) - t;

    if (0.0f > d0)
        return 0;
    if (0.0f > d2)
        return 0;
    if (0.0f > d1)
        return 0;
    if (c[0x2D9] != 0)
        return 1;
    if (!(d0 > d1) && !(d0 > d2)) {
        if (a[0] > b[0])
            r = a[0] - a[3] - b[3];
        else
            r = a[0] + a[3] + b[3];
        r = r - b[0];
        *(float *)(c + 32) = r + *(float *)(c + 32);
        return a[0] > b[0] ? 5 : 7;
    }
    if (!(d2 > d0) && !(d2 > d1)) {
        if (a[2] > b[2])
            r = a[2] - a[5] - b[5];
        else
            r = a[2] + a[5] + b[5];
        r = r - b[2];
        *(float *)(c + 40) = r + *(float *)(c + 40);
        return a[2] > b[2] ? 4 : 6;
    }
    if (d1 > d0)
        return 1;
    if (d1 > d2)
        return 1;
    if (a[1] > b[1])
        r = a[1] - a[4] - b[4];
    else
        r = a[1] + a[4] + b[4];
    r = r - b[1];
    *(float *)(c + 36) = r + *(float *)(c + 36);
    return a[1] > b[1] ? 3 : 2;
}
