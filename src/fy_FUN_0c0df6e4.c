/* Reciprocal square root: 1/sqrt-like helper (FUN_0c0df340) of x, or FLT_MAX when x is zero. The listed entry 0c0df6e4 lies 4 bytes inside the real function, which starts at 0c0df6e0. */
extern float FUN_0c0df340(float x);
float FUN_0c0df6e4(float x)
{
    unsigned int big = 0x7F7FFFFF;
    if (x == 0.0f)
        return *(float *)&big;
    return 1.0f / FUN_0c0df340(x);
}
