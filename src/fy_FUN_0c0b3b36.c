/* Starts a transfer between the two blocks at +0x2E0/+0x2E4 (FUN_0c062954 on the values at +0x9C of each), adds 0.1 to the float at +56, then loops while FUN_0c06297a() is 0: gets a pair of floats (FUN_0c062aa8), adds the float at +56 to one and puts them back (FUN_0c062af0). */
extern void FUN_0c062954(int, int);
extern int FUN_0c06297a(void);
extern void FUN_0c062aa8(float *, float *);
extern void FUN_0c062af0(float *, float *);

void FUN_0c0b3b36(char *o)
{
    int *p = (int *)(o + 0x2E0);
    float v[2];

    FUN_0c062954(*(int *)(p[1] + 0x9C), *(int *)(p[0] + 0x9C));
    *(float *)(o + 56) = *(float *)(o + 56) + 0.0999999940f;
    while (FUN_0c06297a() == 0) {
        FUN_0c062aa8(&v[1], &v[0]);
        v[0] = v[0] + *(float *)(o + 56);
        FUN_0c062af0(&v[1], &v[0]);
    }
}
