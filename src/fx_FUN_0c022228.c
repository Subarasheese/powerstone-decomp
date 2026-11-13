/* Push-apart of two collidable objects a and b whose shapes are the boxes p and q: returns 1 when they overlap (moving them), 0 when apart. */
struct v3 { float x, y, z; };
extern float FUN_0c0df340(float);
extern float FUN_0c0211d0(float, float, float, float);
extern void FUN_0c021178(float *, struct v3, struct v3);

int FUN_0c022228(char *a, char *b, float *p, float *q)
{
    float out[3];
    float C[4];
    float dx, dy, dz, D1, D2, D3, T, px, pz;
    float *fa, *fb;
    float two;
    unsigned int tb;

    fa = (float *)(a + 32);
    fb = (float *)(b + 32);
    T = p[3] + q[3];
    dx = p[0] - q[0];
    dz = p[2] - q[2];
    D1 = T - FUN_0c0df340(dz * dz + dx * dx);
    D2 = FUN_0c0211d0(p[1] + p[3], p[1] - p[3], q[4] + q[1], q[1] - q[4]);
    if (0.0f > D1)
        return 0;
    if (0.0f > D2)
        return 0;
    if (a[0x2D9] == 2)
        return 1;
    if (b[0x2D9] == 2)
        return 1;
    if (a[0x2D9] != 0 && b[0x2D9] != 0)
        return 1;
    FUN_0c021178(out, *(struct v3 *)q, *(struct v3 *)p);
    tb = 0x40000000;
    two = *(float *)&tb;
    if (D2 > D1) {
        px = out[0] * D1;
        if (a[0x2D9] != 0) {
            fb[0] = fb[0] + (-px);
            pz = out[2] * D1;
            fb[2] = fb[2] + (-pz);
        } else if (b[0x2D9] != 0) {
            fa[0] = fa[0] + px;
            fa[2] = fa[2] + D1 * out[2];
        } else {
            fa[0] = fa[0] + px / two;
            fa[2] = fa[2] + out[2] * D1 / two;
            fb[0] = fb[0] + (-(out[0] * D1)) / two;
            fb[2] = fb[2] + (-(out[2] * D1)) / two;
        }
        return 1;
    }
    if (p[1] > q[1]) {
        C[0] = q[0];
        C[1] = q[1] + q[4] - q[3];
        C[2] = q[2];
        C[3] = q[3];
        dx = C[0] - q[0];
        dy = C[1] - q[1];
        dz = C[2] - q[2];
        D3 = (C[3] + q[3]) - FUN_0c0df340(dy * dy + dx * dx + dz * dz);
        if (a[0x2D9] != 0) {
            fb[1] = fb[1] - D2;
            return 1;
        }
        if (b[0x2DA] == 0) {
            fa[1] = fa[1] + D2;
            return 1;
        }
        if (b[0x2D9] == 0) {
            fa[0] = fa[0] + out[0] * D3 / two;
            fa[2] = fa[2] + out[2] * D3 / two;
            fb[0] = fb[0] + (-(out[0] * D3)) / two;
            fb[2] = fb[2] + (-(out[2] * D3)) / two;
        } else {
            fa[0] = fa[0] + D3 * out[0];
            fa[2] = fa[2] + D3 * out[2];
        }
        return 1;
    }
    C[0] = q[0];
    C[1] = q[1] - q[4] + q[3];
    C[2] = q[2];
    C[3] = q[3];
    dx = C[0] - q[0];
    dy = C[1] - q[1];
    dz = C[2] - q[2];
    D3 = (C[3] + q[3]) - FUN_0c0df340(dy * dy + dx * dx + dz * dz);
    if (b[0x2D9] != 0) {
        fa[1] = fa[1] - D2;
        return 1;
    }
    if (a[0x2D9] == 0) {
        fa[0] = fa[0] + out[0] * D3 / two;
        fa[2] = fa[2] + out[2] * D3 / two;
        fb[0] = fb[0] + (-(out[0] * D3)) / two;
        fb[2] = fb[2] + (-(out[2] * D3)) / two;
    } else {
        fb[0] = fb[0] + (-(out[0] * D3));
        fb[2] = fb[2] + (-(out[2] * D3));
    }
    return 1;
}
