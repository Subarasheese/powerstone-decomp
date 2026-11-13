/* Spawns two rings of 8 sparks around a point: for each of 2 rounds it builds 8 positions (the source vector offset by a rotated pair from the table at 0x0C14A090, scaled by s, lifted by f*16), passes them to FUN_0c042f48 and sets a float on the object it returns. */
typedef struct { float x, y, z; } V3;
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern char *FUN_0c042f48(int, int, int, V3 *, int, int);

void FUN_0c042d68(char a, V3 *src, float f, float s)
{
    V3 buf[8];
    float *k = (float *)0x0C14A090;
    float fy, t, u, v;
    int ang, i, j;
    char *o;

    ang = *(int *)(0x0C7E40F4 + (unsigned short)(a * 29392)) + 0x4000;
    fy = f * 16.0f;
    for (j = 2; j != 0; j--) {
        for (i = 0; i < 8; i++) {
            buf[i] = *src;
            t = FUN_0c0dfa50(ang) * k[1] * s;
            u = FUN_0c0df4d0(ang) * k[0];
            t = t - u * s;
            buf[i].x = buf[i].x + t;
            u = FUN_0c0df4d0(ang) * k[1];
            v = FUN_0c0dfa50(ang) * k[0] * s;
            v = v + s * u;
            buf[i].z = buf[i].z + v;
            buf[i].y = buf[i].y + fy;
            k += 2;
        }
        o = FUN_0c042f48(a, 8, 0, buf, 0x0C149EB4, 0x0C14A110);
        if (o)
            *(float *)(o + 0x308 + 16) = f;
    }
}
