/* Writes the game state into the save image at 0xC351948: stamps the date if the image is new, then copies the fields of the globals at 0xC7F2EE0, 0xC7F4750 and 0xC7F302C into it. */
struct D10 { char b[10]; };
extern void syRtcGetDate(struct D10 *d);
void FUN_0c010d4a(void)
{
    unsigned char *S = (unsigned char *)0xC351948;
    unsigned char *G = (unsigned char *)0xC7F2EE0;
    unsigned char *P = (unsigned char *)0xC7F4750;
    unsigned char *R = (unsigned char *)0xC7F302C;
    int i, j;
    struct D10 d;
    if (*(short *)S == 0) {
        syRtcGetDate(&d);
        *(struct D10 *)S = d;
    }
    S[190] = G[56];
    S[191] = G[49];
    S[192] = G[50];
    S[194] = G[52];
    S[195] = G[53];
    S[198] = G[57];
    for (i = 0; i < 9; i++)
        S[200 + i] = P[i];
    *(short *)(S + 210) = *(short *)(P + 10);
    *(int *)(S + 212) = *(int *)(P + 12);
    *(int *)(S + 216) = *(int *)(P + 16);
    for (i = 0; i < 9; i++)
        S[220 + i] = P[20 + i];
    for (i = 0; i < 10; i++)
        S[10 + i] = R[87 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            S[20 + 4 * i + j] = R[97 + 4 * i + j];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 3; j++)
            *(short *)(S + 60 + (signed char)(6 * i) + 2 * j) = *(short *)(R + 138 + (signed char)(6 * i) + 2 * j);
    for (i = 0; i < 10; i++)
        S[120 + i] = R[288 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            S[130 + 4 * i + j] = R[298 + 4 * i + j];
    for (i = 0; i < 10; i++)
        *(short *)(S + 170 + 2 * i) = *(short *)(R + 338 + 2 * i);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 8; j++)
            S[229 + 8 * i + j] = P[29 + 8 * i + j];
}
