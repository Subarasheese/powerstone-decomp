/* Camera update: pad buttons nudge the camera distance and angle, then the eye and target are rebuilt and nlLookAt is called. */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c0e1550(int);
extern void nlUnitMatrix(void);
extern void nlLookAt(float *, float *, int);

int FUN_0c0cfec2(void)
{
    unsigned int *pad;
    float *o;
    float *p1, *p2;
    int *ang;

    pad = (unsigned int *)0xC7F31F0;
    o = (float *)0xC7F29F8;
    if (*pad & 0x10000) {
        if (*pad & 1)
            o[0x130 / 4] = o[0x130 / 4] + 10.0f;
        else if (*pad & 0x200)
            o[0x130 / 4] = o[0x130 / 4] - 10.0f;
    }
    if (*pad & 0x400) {
        ang = (int *)((char *)o + 0x110);
        if (*pad & 1) {
            *ang = *ang + 0x100;
            *ang = (unsigned short)*ang;
        } else if (*pad & 0x200) {
            *ang = *ang - 0x100;
            *ang = (unsigned short)*ang;
        }
    }
    p1 = (float *)0xC7E40C4;
    p2 = (float *)(0xC7E40C4 + 0x72D0);
    o[0xEC / 4] = (p1[0x20 / 4] + p2[0x20 / 4]) / 2.0f;
    o[0xF4 / 4] = (p1[0x28 / 4] + p2[0x28 / 4]) / 2.0f;
    o[0xF0 / 4] = 100.0f;
    o[0xBC / 4] = o[0xEC / 4] + o[0x130 / 4] * FUN_0c0df4d0(*(int *)((char *)o + 0x110));
    o[0xC4 / 4] = o[0xF4 / 4] + o[0x130 / 4] * FUN_0c0dfa50(*(int *)((char *)o + 0x110));
    o[0xC0 / 4] = o[0xF0 / 4];
    FUN_0c0e1550(2);
    nlUnitMatrix();
    nlLookAt(o + 0xBC / 4, o + 0xEC / 4, 0);
    return FUN_0c0e1550(1);
}
