/* Sine of a 16-bit angle (65536 = one turn): reduces to a quarter turn and evaluates tan by a continued fraction, sin = 2t / (1 + t*t), negated for odd quadrants. */
float FUN_0c0dfa50(unsigned short a)
{
    float x, h, y, y2, r, f, t, s;
    int n, k;

    x = (float)a * 6.28318501f;
    x = x / 65536.0f;
    h = x / 2.0f;
    n = (int)(h / 1.57079625f + 0.5f);
    y = h - (float)n * 1.57079625f;
    y2 = y * y;
    r = 0.0f;
    k = 11;
    do {
        f = (float)k - r;
        k -= 2;
        r = y2 / f;
    } while (k >= 3);
    t = y / (1.0f - r);
    s = (t * 2.0f) / (1.0f + t * t);
    if ((n & 1) != 0) {
        return -s;
    }
    return s;
}
