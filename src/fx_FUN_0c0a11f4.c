/* Object init: set state bytes, normalise the facing vector via a helper, derive a heading angle from it, and maybe start the random effect. */
int FUN_0c0620dc(float *);
int FUN_0c09a808(char *, int, int);
int FUN_0c0a3cb0(int, int);
int FUN_0c0a3cd6(int, int);
int FUN_0c0df360(float);
float FUN_0c0df940(void);

#define F(o) (*(float *)(p + (o)))

void FUN_0c0a11f4(char *p)
{
    float v[3];
    unsigned int r;

    p[0x71BA] = 17;
    p[0x71BC] = 0;
    FUN_0c09a808(p, 0, 48);
    p[0x71A9] = 1;
    p[0x71A8] = 1;
    v[0] = F(56);
    v[2] = F(64);
    v[1] = 0.0f;
    FUN_0c0620dc(v);
    F(56) = v[0];
    F(64) = v[2];
    F(60) = 0.0f;
    F(76) = 0.0f;
    F(72) = 0.0f;
    F(68) = 0.0f;
    if (v[0] == 0.0f)
        v[0] = 9.99999997e-07f;
    *(int *)(p + 0x30) = FUN_0c0df360(-v[2] / v[0]);
    if (0.0f > v[0])
        *(int *)(p + 0x30) = *(int *)(p + 0x30) + 0x8000;
    *(unsigned int *)(p + 0x30) = (unsigned short)(*(int *)(p + 0x30) + 0x4000);
    FUN_0c0a3cb0(p[3], 1);
    r = (unsigned int)(FUN_0c0df940() * 255.0f);
    if (r % 2 != 0)
        FUN_0c0a3cd6(p[3], 0);
}
