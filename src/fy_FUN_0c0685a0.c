/* Aims an object at its target: gets the angle word (+48) from FUN_0c09db78, projects the target through the table entry chosen by byte 3 (thunk_FUN_0c062242 fills a 3-float vector), turns the offset to the object (+32..+40) into a heading with sqrt (FUN_0c0df340) and atan2 (FUN_0c0df360), stores it at +44 and sets the velocity floats +56, +60, +64 from the sine/cosine routines times 40. */
extern int FUN_0c09db78(unsigned char *);
extern void thunk_FUN_0c062242(unsigned char *, float *);
extern float FUN_0c0df340(float);
extern int FUN_0c0df360(float);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c0685a0(unsigned char *o)
{
    unsigned char *p;
    unsigned char *q;
    float v[3];
    int ang;

    *(int *)(o + 48) = FUN_0c09db78(o);
    p = *(unsigned char **)(o + 28);
    q = (unsigned char *)0xC7E40C4 + (unsigned short)((1 - (signed char)o[3]) * 0x72D0);
    if ((signed char)p[4] == 10)
        thunk_FUN_0c062242(q + 768 + (short)((signed char)q[0x71F1] * 3520) + 704, v);
    else
        thunk_FUN_0c062242(q + 768 + (short)((signed char)q[0x71F1] * 3520), v);
    if (o[15])
        *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
    o[15] = 0;
    v[0] = v[0] - *(float *)(o + 32);
    v[1] = v[1] - *(float *)(o + 36);
    v[2] = v[2] - *(float *)(o + 40);
    if (v[1] == 0)
        v[1] = 9.99999975e-06f;
    ang = FUN_0c0df360(FUN_0c0df340(v[2] * v[2] + v[0] * v[0]) / v[1]);
    if (v[1] < 0)
        ang += 0x8000;
    *(int *)(o + 44) = ang - 0x4000;
    *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * 40.0f;
    *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * 40.0f;
    *(float *)(o + 60) = -(FUN_0c0df4d0(0x14000 - *(int *)(o + 44)) * 40.0f);
}
