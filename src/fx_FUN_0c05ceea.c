/* Per-frame update of an effect object: fades the intensity float in its slot record up to 1.0 (or loads the preset past frame 40), restarts on a positive timer, and bounces two velocities when the flag byte is set. */
struct T12 { int a, b, c; };
void FUN_0c05ceea(char *o)
{
    char *s = *(char **)(o + 736);
    if (*(short *)(o + 0xec) >= 40) {
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)0xC33632C;
    } else {
        *(float *)(s + 28) = *(float *)(s + 28) + 0.0249999985f;
        if (*(float *)(*(char **)(o + 736) + 28) > 1.0f)
            *(float *)(*(char **)(o + 736) + 28) = 1.0f;
        *(float *)(*(char **)(o + 736) + 32) = *(float *)(*(char **)(o + 736) + 28);
        *(float *)(*(char **)(o + 736) + 36) = *(float *)(*(char **)(o + 736) + 28);
    }
    if (*(float *)(o + 628) > 0.0f) {
        o[9]++;
        o[10] = 1;
        **(char **)(o + 740) = 1;
        **(char **)(o + 744) = 1;
        **(char **)(o + 748) = 1;
        *(struct T12 *)(*(char **)(o + 736) + 28) = *(struct T12 *)0xC33632C;
    }
    if (o[728] != 0) {
        if (*(float *)(o + 624) != 0.0f)
            *(float *)(o + 56) = *(float *)(o + 56) * -0.5f;
        if (*(float *)(o + 632) != 0.0f)
            *(float *)(o + 64) = *(float *)(o + 64) * -0.5f;
    }
}
