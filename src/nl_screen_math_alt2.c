/* nl screen/frame buffer wrappers (0c0ddf30-0c0dfe20) */

/* Sine of a 16-bit angle (65536 = one turn) from a continued-fraction tangent of the half angle, negated for odd quadrants */
float math_sin_angle16(unsigned short angle)
{
    float radians, half, reduced, reduced_sq, frac, denom, tan_half, sine;
    int quarter, k;

    radians = (float)angle * 6.28318501f;
    radians = radians / 65536.0f;
    half = radians / 2.0f;
    quarter = (int)(half / 1.57079625f + 0.5f);
    reduced = half - (float)quarter * 1.57079625f;
    reduced_sq = reduced * reduced;
    frac = 0.0f;
    k = 11;
    do {
        denom = (float)k - frac;
        k -= 2;
        frac = reduced_sq / denom;
    } while (k >= 3);
    tan_half = reduced / (1.0f - frac);
    sine = (tan_half * 2.0f) / (1.0f + tan_half * tan_half);
    if ((quarter & 1) != 0) {
        return -sine;
    }
    return sine;
}
