/* floorf: largest integer value not above x (values with |x| >= 2^23 and NaN are returned unchanged). */
float FUN_0c0df650(float x)
{
    float a = x < 0.0f ? -x : x;
    float t;
    int n;
    if (!(8388608.0f > a))
        return x;
    n = (int)a;
    t = (float)n;
    if (!(x < 0.0f))
        return t;
    if (a - t == 0.0f)
        return x;
    return (float)(-1 - n);
}
