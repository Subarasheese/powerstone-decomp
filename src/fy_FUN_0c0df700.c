/* Reciprocal square root of x; x == 0 gives the largest float. */
extern float _builtin_sqrtf(float);
float FUN_0c0df700(float x)
{
    if (x == 0.0f)
        return 3.40282347e+38f;
    return 1.0f / _builtin_sqrtf(x);
}
