/* Turns an object toward a target: projects the target (thunk_FUN_0c062242 fills a 3-float vector), moves it 50 units along the table angle at +48 of the other player's record (0xC7E40C4 + 0x72D0 * (1 - o[3])), subtracts the object's position (+32..+40), and steers the two heading words (+48 yaw from atan2(-z/x), +44 pitch from atan2(-hyp/y)) by at most a5 degrees (a5 * 65536 / 360 units) toward the target angle. */
extern void thunk_FUN_0c062242(unsigned char *, float *);
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0df340(float);
extern int FUN_0c0df360(float);

void FUN_0c0c42f8(unsigned char *o, int a5)
{
    float v[3];
    unsigned char *G = (unsigned char *)0xC7E40C4;
    unsigned char *q = G + (unsigned short)((1 - (signed char)o[3]) * 0x72D0);
    int ang;
    int step;
    int diff;

    thunk_FUN_0c062242(q + 768 + (short)((signed char)q[0x71F1] * 3520) + 704, v);
    v[0] = v[0] + 50.0f * FUN_0c0dfa50(*(int *)(G + (unsigned short)((1 - (signed char)o[3]) * 0x72D0) + 48));
    v[2] = v[2] + 50.0f * FUN_0c0df4d0(*(int *)(G + (unsigned short)((1 - (signed char)o[3]) * 0x72D0) + 48));
    v[0] = v[0] - *(float *)(o + 32);
    v[1] = v[1] - *(float *)(o + 36);
    v[2] = v[2] - *(float *)(o + 40);
    if (v[0] == 0)
        v[0] = 9.99999997e-07f;
    ang = FUN_0c0df360(-v[2] / v[0]) & 0xFFFF;
    if (v[0] < 0)
        ang += 0x8000;
    diff = (short)(unsigned short)((unsigned short)(ang + 0x4000) - *(int *)(o + 48));
    step = (int)((float)a5 * 65536.0f / 360.0f);
    *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + (diff > 0 ? step : -step));
    ang = FUN_0c0df360(-FUN_0c0df340(v[2] * v[2] + v[0] * v[0]) / v[1]);
    if (v[1] < 0)
        ang += 0x8000;
    diff = (short)(unsigned short)(-(int)(unsigned short)(0x4000 + ang) - *(int *)(o + 44));
    *(int *)(o + 44) = (unsigned short)(*(int *)(o + 44) + (diff > 0 ? step : -step));
}
