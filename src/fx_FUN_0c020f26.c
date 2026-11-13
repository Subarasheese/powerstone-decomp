/* Copies the first three floats of e to c and stores the next three scaled by the owner's factors (twice, FUN_0c020f26 and FUN_0c020ff2 are identical). */
struct v3 { float x, y, z; };
extern void FUN_0c062210(float *, char *);

void FUN_0c020f26(char *o, float *c, float *e)
{
    FUN_0c062210(e, o + 108);
    *(struct v3 *)c = *(struct v3 *)e;
    c[3] = e[3] * *(float *)(o + 80);
    c[4] = e[4] * *(float *)(o + 84);
    c[5] = e[5] * *(float *)(o + 88);
}

void FUN_0c020ff2(char *o, float *c, float *e)
{
    FUN_0c062210(e, o + 108);
    *(struct v3 *)c = *(struct v3 *)e;
    c[3] = e[3] * *(float *)(o + 80);
    c[4] = e[4] * *(float *)(o + 84);
    c[5] = e[5] * *(float *)(o + 88);
}
