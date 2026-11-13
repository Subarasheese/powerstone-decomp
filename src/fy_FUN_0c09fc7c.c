/* Starts a move on a player object: classifies it with FUN_0c09c6b8 (types 5..8, 13, 14 start the matching animation with FUN_0c09a808, others animation 26 and a sound for states 2, 6, 7), marks the object, then walks the move table (8-byte entries, flag byte +4, length byte +5) from the entry chosen by the bytes at +0x71A4/+0x7198/+0x719C to add up the move's frame count (short +236, a quarter of it, at least 1) and sets the per-frame velocity floats (+68, +76) from the distances at +56 and +64. */
#define REC(k) ((char *)*(int *)(0xC664B50 + (o)[3] * 0xB5EC8 + 0xA1234 + ((signed char)(o)[0x71A4] << 2)) + 8 * ((unsigned short)*(unsigned short *)((o) + 0x7198) + (k)))
int FUN_0c09c6b8(char *p);
int FUN_0c09a808(char *p, int a, int b);
void FUN_0c0a3e64(int a, int b);
void FUN_0c09fc7c(char *o)
{
    signed char m;
    char *q;
    signed char k;
    o[0x71BA] = 32;
    o[0x71BC] = 0;
    m = FUN_0c09c6b8(o);
    if (m == 5 || m == 6 || m == 7 || m == 8) {
        FUN_0c09a808(o, 2, 204);
    } else if (m == 13) {
        FUN_0c09a808(o, 2, 59);
    } else if (m == 14) {
        FUN_0c09a808(o, 2, 73);
    } else {
        FUN_0c09a808(o, 0, 26);
        if (o[4] == 2 || o[4] == 6 || o[4] == 7)
            FUN_0c0a3e64(o[3], o[0x27C]);
    }
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    k = o[0x719C];
    q = REC(k);
    *(short *)(o + 236) = (unsigned char)q[5];
    while (q[4] == 0) {
        k = k + 1;
        *(short *)(o + 236) = *(short *)(o + 236) + (unsigned char)q[5];
        q = REC(k);
    }
    *(short *)(o + 236) = *(short *)(o + 236) / 4;
    if (*(short *)(o + 236) == 0)
        *(short *)(o + 236) = 1;
    *(float *)(o + 68) = -(*(float *)(o + 56) / (float)*(short *)(o + 236));
    *(float *)(o + 76) = -(*(float *)(o + 64) / (float)*(short *)(o + 236));
    *(float *)(o + 72) = 0.0f;
    *(float *)(o + 60) = 0.0f;
}
