/* Camera framing: bound the stage's 19 corner points on screen (min/max x and z) and set the camera object's centre and half-extents from them. */
struct V3 { int x, y, z; };
int FUN_0c0e1240(char *);
int nlInvertMatrix(int);
int nlCalcPoint(float *, float *);
int thunk_FUN_0c062242(int, float *);

void FUN_0c041e84(char *p)
{
    float st[6];
    float maxX, minX, maxZ, minZ;
    char *T;
    char *q;
    int i;
    int s;

    maxX = -1000000.0f;
    maxZ = -1000000.0f;
    minX = 1000000.0f;
    minZ = 1000000.0f;
    s = p[8];
    if (s == 0)
        p[8] = p[8] + 1;
    else if (s != 1)
        return;
    T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
    p[1] = T[1];
    *(struct V3 *)(p + 0x20) = *(struct V3 *)(T + 0x20);
    if (!(*(float *)(T + 0x274) > 0.0f))
        *(float *)(p + 0x24) = *(float *)(T + 0x2D4);
    *(int *)(p + 0x30) = *(int *)(T + 0x30);
    *(float *)(p + 0x24) = *(float *)(p + 0x24) + (2.5f + 1.0f * (float)p[3]);
    FUN_0c0e1240(T + 0x6C);
    nlInvertMatrix(0);
    for (i = 0; i < 19; i++) {
        float x, z;
        thunk_FUN_0c062242((int)(T + 0x300) + (short)((short)T[0x71F1] * (short)0xDC0) + (short)((short)i * (short)0xB0), st);
        nlCalcPoint(st, st + 3);
        x = st[3];
        if (x > maxX) maxX = x;
        if (minX > x) minX = x;
        z = st[5];
        if (z > maxZ) maxZ = z;
        if (minZ > z) minZ = z;
    }
    minX = minX + maxX;
    minZ = minZ + maxZ;
    minX = minX / 2.0f;
    minZ = minZ / 2.0f;
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 4) = minX;
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 12) = minZ;
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 28) = (maxX - *(float *)(q + 4)) * 1.29999995f;
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 36) = (maxZ - *(float *)(q + 12)) * 1.29999995f;
    q = *(char **)(p + 0x2E0);
    T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
    if (*(float *)((char *)0xC149BF0 + T[4] * 16 + T[0x71F1] * 8) > *(float *)(q + 28)) {
        q = *(char **)(p + 0x2E0);
        T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
        *(float *)(q + 28) = *(float *)((char *)0xC149BF0 + T[4] * 16 + T[0x71F1] * 8);
    }
    q = *(char **)(p + 0x2E0);
    T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
    if (*(float *)((char *)0xC149BF0 + T[4] * 16 + T[0x71F1] * 8 + 4) > *(float *)(q + 36)) {
        q = *(char **)(p + 0x2E0);
        T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
        *(float *)(q + 36) = *(float *)((char *)0xC149BF0 + T[4] * 16 + T[0x71F1] * 8 + 4);
    }
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 28) = *(float *)(q + 28) / 50.0f;
    q = *(char **)(p + 0x2E0);
    *(float *)(q + 36) = *(float *)(q + 36) / 50.0f;
}
