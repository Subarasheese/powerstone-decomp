/* sin(x): reduce with FUN_0c0dfba0 (fills the quadrant count), then the half-angle formula 2t/(1+t*t), negated on odd quadrants. */
float FUN_0c0dfba0(int *n, float x);

float FUN_0c0dfb50(float x)
{
    int n;
    float t, s;

    t = FUN_0c0dfba0(&n, x / (1.0f + 1.0f));
    s = (t * (1.0f + 1.0f)) / (1.0f + t * t);
    if (n % 2 != 0)
        return -s;
    return s;
}
