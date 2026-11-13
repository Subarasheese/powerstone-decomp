/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c041e14-0c042150) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int a4, int a5, int a6);
struct vec3_int { int x, y, z; };
int FUN_0c0e1240(char *);
int nlInvertMatrix(int);
int nlCalcPoint(float *, float *);
int thunk_FUN_0c062242(int, float *);

int FUN_0c041e14(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o5C_float *)(t0))->v) = (*(float *)((((*(signed char *)0xC7F3051) << 2) + 0xC14924C)));
        *(unsigned int *)((t0 + 0x10)) = 0xC041E84;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x0);
    }
    return t0;
}

void cam_frame_stage_corners(char *cam)
{
    float pts[6];
    float max_x, min_x, max_z, min_z;
    char *player;
    char *ext;
    int i;
    int state;

    max_x = -1000000.0f;
    max_z = -1000000.0f;
    min_x = 1000000.0f;
    min_z = 1000000.0f;
    state = cam[8];
    if (state == 0)
        cam[8] = cam[8] + 1;
    else if (state != 1)
        return;
    player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)cam[3] * (unsigned short)0x72D0);
    cam[1] = player[1];
    *(struct vec3_int *)(cam + 0x20) = *(struct vec3_int *)(player + 0x20);
    if (!(*(float *)(player + 0x274) > 0.0f))
        *(float *)(cam + 0x24) = *(float *)(player + 0x2D4);
    *(int *)(cam + 0x30) = *(int *)(player + 0x30);
    *(float *)(cam + 0x24) = *(float *)(cam + 0x24) + (2.5f + 1.0f * (float)cam[3]);
    FUN_0c0e1240(player + 0x6C);
    nlInvertMatrix(0);
    for (i = 0; i < 19; i++) {
        float x, z;
        thunk_FUN_0c062242((int)(player + 0x300) + (short)((short)player[0x71F1] * (short)0xDC0) + (short)((short)i * (short)0xB0), pts);
        nlCalcPoint(pts, pts + 3);
        x = pts[3];
        if (x > max_x) max_x = x;
        if (min_x > x) min_x = x;
        z = pts[5];
        if (z > max_z) max_z = z;
        if (min_z > z) min_z = z;
    }
    min_x = min_x + max_x;
    min_z = min_z + max_z;
    min_x = min_x / 2.0f;
    min_z = min_z / 2.0f;
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 4) = min_x;
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 12) = min_z;
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 28) = (max_x - *(float *)(ext + 4)) * 1.29999995f;
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 36) = (max_z - *(float *)(ext + 12)) * 1.29999995f;
    ext = *(char **)(cam + 0x2E0);
    player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)cam[3] * (unsigned short)0x72D0);
    if (*(float *)((char *)0xC149BF0 + player[4] * 16 + player[0x71F1] * 8) > *(float *)(ext + 28)) {
        ext = *(char **)(cam + 0x2E0);
        player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)cam[3] * (unsigned short)0x72D0);
        *(float *)(ext + 28) = *(float *)((char *)0xC149BF0 + player[4] * 16 + player[0x71F1] * 8);
    }
    ext = *(char **)(cam + 0x2E0);
    player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)cam[3] * (unsigned short)0x72D0);
    if (*(float *)((char *)0xC149BF0 + player[4] * 16 + player[0x71F1] * 8 + 4) > *(float *)(ext + 36)) {
        ext = *(char **)(cam + 0x2E0);
        player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)cam[3] * (unsigned short)0x72D0);
        *(float *)(ext + 36) = *(float *)((char *)0xC149BF0 + player[4] * 16 + player[0x71F1] * 8 + 4);
    }
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 28) = *(float *)(ext + 28) / 50.0f;
    ext = *(char **)(cam + 0x2E0);
    *(float *)(ext + 36) = *(float *)(ext + 36) / 50.0f;
}
