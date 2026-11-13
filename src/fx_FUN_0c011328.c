/* Loads the game state from the save image at 0xC351948: copies its fields into the globals at 0xC7F2EE0, 0xC7F4750 and 0xC7F302C. */
void FUN_0c011328(void)
{
    unsigned char *S = (unsigned char *)0xC351948;
    unsigned char *G = (unsigned char *)0xC7F2EE0;
    unsigned char *P = (unsigned char *)0xC7F4750;
    unsigned char *R = (unsigned char *)0xC7F302C;
    int i, j;
    G[56] = S[190];
    G[49] = S[191];
    G[50] = S[192];
    G[52] = S[194];
    G[53] = S[195];
    G[57] = S[198];
    for (i = 0; i < 9; i++)
        P[i] = S[200 + i];
    *(short *)(P + 10) = *(short *)(S + 210);
    *(int *)(P + 12) = *(int *)(S + 212);
    *(int *)(P + 16) = *(int *)(S + 216);
    for (i = 0; i < 9; i++)
        P[20 + i] = S[220 + i];
    for (i = 0; i < 10; i++)
        R[87 + i] = S[10 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            R[97 + 4 * i + j] = S[20 + 4 * i + j];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 3; j++)
            *(short *)(R + 138 + (signed char)(6 * i) + 2 * j) = *(short *)(S + 60 + (signed char)(6 * i) + 2 * j);
    for (i = 0; i < 10; i++)
        R[288 + i] = S[120 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            R[298 + 4 * i + j] = S[130 + 4 * i + j];
    for (i = 0; i < 10; i++)
        *(short *)(R + 338 + 2 * i) = *(short *)(S + 170 + 2 * i);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 8; j++)
            P[29 + 8 * i + j] = S[229 + 8 * i + j];
}
