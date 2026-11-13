/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3544-0c0c571c) */

extern void thunk_FUN_0c062242(unsigned char *, float *);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern float math_signed_sqrt(float);
extern int math_atan_angle16(float);

void fx31_steer_toward_target(unsigned char *obj, int max_deg)
{
    float vec[3];
    unsigned char *players = (unsigned char *)0xC7E40C4;
    unsigned char *other = players + (unsigned short)((1 - (signed char)obj[3]) * 0x72D0);
    int angle;
    int step;
    int diff;

    thunk_FUN_0c062242(other + 768 + (short)((signed char)other[0x71F1] * 3520) + 704, vec);
    vec[0] = vec[0] + 50.0f * math_sin_angle16(*(int *)(players + (unsigned short)((1 - (signed char)obj[3]) * 0x72D0) + 48));
    vec[2] = vec[2] + 50.0f * math_cos_angle16(*(int *)(players + (unsigned short)((1 - (signed char)obj[3]) * 0x72D0) + 48));
    vec[0] = vec[0] - *(float *)(obj + 32);
    vec[1] = vec[1] - *(float *)(obj + 36);
    vec[2] = vec[2] - *(float *)(obj + 40);
    if (vec[0] == 0)
        vec[0] = 9.99999997e-07f;
    angle = math_atan_angle16(-vec[2] / vec[0]) & 0xFFFF;
    if (vec[0] < 0)
        angle += 0x8000;
    diff = (short)(unsigned short)((unsigned short)(angle + 0x4000) - *(int *)(obj + 48));
    step = (int)((float)max_deg * 65536.0f / 360.0f);
    *(int *)(obj + 48) = (unsigned short)(*(int *)(obj + 48) + (diff > 0 ? step : -step));
    angle = math_atan_angle16(-math_signed_sqrt(vec[2] * vec[2] + vec[0] * vec[0]) / vec[1]);
    if (vec[1] < 0)
        angle += 0x8000;
    diff = (short)(unsigned short)(-(int)(unsigned short)(0x4000 + angle) - *(int *)(obj + 44));
    *(int *)(obj + 44) = (unsigned short)(*(int *)(obj + 44) + (diff > 0 ? step : -step));
}
