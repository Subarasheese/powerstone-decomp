/* tan(x): reduce with FUN_0c0dfc50 (fills the quadrant count); odd quadrants give -1/t, with FLT_MAX when t is zero. */
float FUN_0c0dfc50(int *n, float x);

float FUN_0c0dfc00(float x)
{
    int n;
    float t;

    t = FUN_0c0dfc50(&n, x);
    if (n % 2 == 0)
        return t;
    if (t == 0.0f)
        return 3.40282347e+38f;
    return -1.0f / t;
}
