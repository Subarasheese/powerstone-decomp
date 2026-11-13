/* Moves e's point (+32..+40) a twentieth of the way toward a spot on a circle (radius 100, angle e+48 stepped by 0x400 each call) around a table-derived anchor. */
typedef struct { float x, y, z; } V3;
extern void thunk_FUN_0c062242(char *, V3 *);
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);

void FUN_0c0c389c(char *e)
{
    signed char *p;
    signed char *t;
    V3 v;

    p = *(signed char **)(e + 28);
    t = (signed char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * 0x72D0);
    thunk_FUN_0c062242(t + 0x300 + (short)(t[0x71F1] * 3520) + 704, &v);
    *(int *)(e + 48) += 0x400;
    *(int *)(e + 48) &= 0xFFFF;
    v.x += 100.0f * FUN_0c0dfa50(*(int *)(e + 48));
    v.z += 100.0f * FUN_0c0df4d0(*(int *)(e + 48));
    *(float *)(e + 32) += (v.x - *(float *)(e + 32)) / 20.0f;
    *(float *)(e + 36) += (v.y - *(float *)(e + 36)) / 20.0f;
    *(float *)(e + 40) += (v.z - *(float *)(e + 40)) / 20.0f;
}
