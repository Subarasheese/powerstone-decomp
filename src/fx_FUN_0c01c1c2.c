/* Looks up (and linearly interpolates between) rows of a 108-byte keyed table, feeding one pair of floats per index byte to a start/emit/finish call trio. */
int FUN_0c06297a(void);
int FUN_0c062a7e(float *);
int FUN_0c062abe(float *);

void FUN_0c01c1c2(int a4, int a5, int a6, int a7, signed char *a8)
{
    char *t;
    signed char mode;
    int key, i;
    float v[3];

    t = (char *)0xC11C2B8;
    key = (short)a6;
    while (key > (int)*(unsigned short *)t)
        t += 108;
    mode = (signed char)a5;
    if (key == (int)*(unsigned short *)t) {
        for (i = 0; i < a7; i++) {
            FUN_0c06297a();
            FUN_0c062a7e(v);
            v[0] = *(float *)(t + 4 + 8 * a8[i]);
            v[2] = *(float *)(t + 8 + 8 * a8[i]);
            if (mode != 2)
                v[0] = v[0] * -1.0f;
            FUN_0c062abe(v);
        }
    } else {
        char *pv = t - 108;
        int pk = *(unsigned short *)pv;
        int d1 = (int)*(unsigned short *)t - pk;
        int d2 = key - pk;
        for (i = 0; i < a7; i++) {
            float x0, x1;
            FUN_0c06297a();
            FUN_0c062a7e(v);
            x0 = *(float *)(pv + 4 + 8 * a8[i]);
            x1 = *(float *)(t + 4 + 8 * a8[i]);
            v[0] = x0 + (float)d2 * ((x1 - x0) / (float)d1);
            x0 = *(float *)(pv + 8 + 8 * a8[i]);
            x1 = *(float *)(t + 8 + 8 * a8[i]);
            v[2] = x0 + (float)d2 * ((x1 - x0) / (float)d1);
            if (mode != 2)
                v[0] = v[0] * -1.0f;
            FUN_0c062abe(v);
        }
    }
}
