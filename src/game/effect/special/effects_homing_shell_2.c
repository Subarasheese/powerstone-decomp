/* same module: aim-angle helper and homing update (continues previous row) (0c0c7668-0c0c7aa0) */

struct angle3 { int x, y, z; };
int thunk_FUN_0c062242(int, float *);
int math_vec3_sub(float *, float *, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);

void fx_calc_aim_angles(char *obj, char *other, int arg2, int arg3, struct angle3 *out)
{
    float delta[3];
    struct angle3 result;
    char *player_base = (char *)(0xC7E40C4 + (unsigned short)((unsigned short)obj[3] * (unsigned short)0x72D0));
    float dx, dz;

    thunk_FUN_0c062242((int)(player_base + 0x300 + (short)((short)player_base[0x71F1] * (short)0xDC0)), delta);
    math_vec3_sub(delta, delta, (int)other + 0x20);
    if (delta[2] == 0.0f)
        delta[2] = 9.99999975e-06f;
    result.y = math_atan_angle16(delta[0] / delta[2]);
    if (0.0f > delta[2])
        result.y += 0x8000;
    if (delta[1] == 0.0f)
        delta[1] = 9.99999975e-06f;
    dx = delta[0];
    dz = delta[2];
    result.x = math_atan_angle16(math_signed_sqrt(dz * dz + dx * dx) / delta[1]) - 16384;
    if (0.0f > delta[1])
        result.x += 0x8000;
    *out = result;
}
