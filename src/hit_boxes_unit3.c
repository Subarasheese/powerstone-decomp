/* @unit 0c020e3e-0c020ed4 */
void conv_s16x5_to_f32(float *d, short *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[4] = s[4];
    d[3] = s[3];
}
void conv_s16x4_to_f32(float *d, short *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}
void conv_s16x4_to_f32_b(float *d, short *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}
