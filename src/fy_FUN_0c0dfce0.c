/* tan of a 16-bit angle (65536 = one turn): reduces to the nearest quarter turn and evaluates a continued fraction; returns FLT_MAX at a quarter turn (and at exact zero of an odd quadrant), -1/x in odd quadrants. */
float FUN_0c0dfce0(int a4)
{
    unsigned short a = a4;
    float x, d, s, c;
    int n, i;

    if ((a & 0x7FFF) == 0x4000)
        return 3.40282347e+38f;
    x = (float)a * 6.28318501f / 65536.0f;
    n = (int)(x / 1.57079625f + 0.5f);
    d = x - (float)n * 1.57079625f;
    s = d * d;
    c = 0.0f;
    for (i = 13; i >= 3; i -= 2)
        c = s / ((float)i - c);
    d = d / (1.0f - c);
    if ((n & 1) == 0)
        return d;
    if (d == 0.0f)
        return 3.40282347e+38f;
    return -1.0f / d;
}
