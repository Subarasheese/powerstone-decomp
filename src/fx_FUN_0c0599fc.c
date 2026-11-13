/* Adjust the power gauge (byte at +49 of the game state) by a signed step, clamp it to the current character's limits, and refresh the gauge level (+48 = gauge / 8). */
#define G ((unsigned char *)0xC7F302C)

int FUN_0c0599fc(int a)
{
    unsigned int m;
    int r7;
    int d;
    int e;
    int k;
    char *rec;
    char *T;
    int q;

    m = G[69];
    if (m == 3)
        return 3;
    r7 = (m == 0) ? 1 : m;
    d = a;
    if (G[49] < -(signed char)d) {
        d = 0;
        G[49] = 0;
    }
    if (255 - G[49] < (signed char)d) {
        d = 0;
        G[49] = 255;
    }
    G[49] = d + G[49];
    e = *(signed char *)0xC7F2F11;
    rec = (char *)0xC7F2DF0 + (unsigned char)((unsigned short)(r7 + 255) * 120);
    k = rec[86];
    T = (char *)0xC32E180 + (signed char)(e * 9);
    if (G[49] > ((unsigned char)T[k] << 3))
        G[49] = T[k] << 3;
    e = *(signed char *)0xC7F2F11;
    rec = (char *)0xC7F2DF0 + (unsigned char)((unsigned short)(r7 + 255) * 120);
    T = (char *)0xC32E1C8 + (signed char)(e * 9);
    k = rec[86];
    if (G[49] < ((unsigned char)T[k] << 3))
        G[49] = T[k] << 3;
    q = G[49] / 8;
    G[48] = q;
    return q;
}
