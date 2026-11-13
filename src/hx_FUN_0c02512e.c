/* Pushes fighter `o` (cylinder a: x, y, z, radius) out of a box b (centre x, y, z, then half sizes x / y / z at +12 /
   +16 / +20). Returns 0 when they do not overlap, 1 when the fighter ignores
   collisions (+0x2D9) or overlaps upwards; otherwise moves it out along the axis of least overlap: 5 / 7 on x (from the
   right / left), 4 / 6 on z, 2 on top of the box, 8 out of a box it is under along the direction FUN_0c02114c gives. */
void FUN_0c02114c(float *dir, float ax, float az, float bx, float bz);

#define F(o, n) (*(float *)((o) + (n)))

int FUN_0c02512e(float *a, char *o, float *b)
{
    struct { float dir[3]; float pen[3]; } s;
    float d, m;

    d = b[0] - a[0];
    s.pen[0] = b[3] + a[3] - (0.0f > d ? a[0] - b[0] : d);
    d = b[2] - a[2];
    s.pen[2] = b[5] + a[3] - (0.0f > d ? a[2] - b[2] : d);
    d = b[1] - a[1];
    s.pen[1] = b[4] + a[3] - (0.0f > d ? a[1] - b[1] : d);
    if (0.0f > s.pen[0])
        return 0;
    if (0.0f > s.pen[2])
        return 0;
    if (0.0f > s.pen[1])
        return 0;
    if (o[0x2D9] != 0)
        return 1;
    FUN_0c02114c(s.dir, a[0], a[2], b[0], b[2]);
    if (!(s.pen[0] > s.pen[1]) && !(s.pen[0] > s.pen[2])) {
        if (a[0] > b[0])
            d = a[0] - a[3] - b[3];
        else
            d = a[0] + a[3] + b[3];
        F(o, 32) = d - b[0] + F(o, 32);
        return a[0] > b[0] ? 5 : 7;
    }
    if (s.pen[0] > s.pen[2] && s.pen[1] > s.pen[2]) {
        if (a[2] > b[2])
            d = a[2] - a[3] - b[5];
        else
            d = a[2] + a[3] + b[5];
        F(o, 40) = d - b[2] + F(o, 40);
        return a[2] > b[2] ? 4 : 6;
    }
    if (s.pen[1] > s.pen[0] || s.pen[1] > s.pen[2])
        return 1;
    if (a[1] > b[1]) {
        F(o, 36) = a[1] - a[3] - b[4] - b[1] + F(o, 36);
        return 2;
    }
    m = s.pen[2] > s.pen[0] ? s.pen[0] : s.pen[2];
    F(o, 32) = F(o, 32) + m * s.dir[0];
    m = s.pen[2] > s.pen[0] ? s.pen[0] : s.pen[2];
    F(o, 40) = F(o, 40) + m * s.dir[2];
    return 8;
}
