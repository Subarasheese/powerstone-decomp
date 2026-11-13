/* Box-against-box overlap test: a and b are boxes (centre x,y,z, half sizes at 12/16/20); returns 0 for no overlap, 1 for overlap, and when the pushed-out object's block o allows it moves o along the axis of least penetration (8 x/z push, 2/3 y push below / above) and returns that axis code. */
float FUN_0c0211d0(float, float, float, float);
void FUN_0c02114c(float *, float, float, float, float);
int FUN_0c024d08(float *a, char *o, float *b)
{
    float loc[10];
    float *out = &loc[4];
    float *ov = &loc[7];
    float *of = (float *)o;
    float dx, dz, m, t, sx, sz, ax, az;

    dx = a[0] - b[0];
    sx = b[3] + a[3];
    ax = 0.0f > dx ? b[0] - a[0] : dx;
    ov[0] = sx - ax;
    dz = a[2] - b[2];
    sz = b[5] + a[3];
    az = 0.0f > dz ? b[2] - a[2] : dz;
    ov[2] = sz - az;
    loc[2] = a[1];
    loc[3] = a[4];
    loc[0] = b[1];
    loc[1] = b[4];
    ov[1] = FUN_0c0211d0(loc[1] + loc[0], b[1] - b[4], a[4] + loc[2], a[1] - a[4]);
    if (0.0f > ov[0])
        return 0;
    if (0.0f > ov[2])
        return 0;
    if (0.0f > ov[1])
        return 0;
    if (o[0x2d9] != 0)
        return 1;
    FUN_0c02114c(out, a[0], a[2], b[0], b[2]);
    m = ov[0];
    if (!(m > ov[1]) && !(m > ov[2])) {
        of[8] = of[8] + m * out[0];
        of[10] = of[10] + ov[0] * out[2];
        return 8;
    }
    if (m > ov[2] && ov[1] > ov[2]) {
        of[8] = of[8] + ov[2] * out[0];
        of[10] = of[10] + ov[2] * out[2];
        return 8;
    }
    if (ov[1] > m || ov[1] > ov[2])
        return 1;
    if (a[1] > b[1])
        t = (a[1] - a[4]) - b[4];
    else
        t = (a[1] + a[4]) + b[4];
    t = t - b[1];
    of[9] = t + of[9];
    if (a[1] > b[1])
        return 3;
    return 2;
}
