/* Draws the stage's lights: for each of the 0xC363740 pending lights (table at 0xC363290, 24 bytes each: colour A, colour B; 0xC363748: 16-byte parameter row) it builds the two colour vectors (flagging their first words), pushes them (plain, +1.0 and the sum/difference scaled by 0.5) into the light record at 0xC1437B8 and calls nlObjPutUseViewMatrix with the length; afterwards it shifts the pending count into 0xC363744 and clears it. */
typedef struct { int a, b, c; } S12;
typedef struct { int a, b, c, d; } S16;
extern int FUN_0c0e1550(int);
extern void nlUnitMatrix(void);
extern void FUN_0c062050(S12 *d, S12 *a, S12 *b);
extern void FUN_0c06208c(S12 *d, float x, float y, float z);
extern void FUN_0c06206e(S12 *d, S12 *a, S12 *b);
extern float FUN_0c0620a4(S12 *a);
extern void nlObjPutUseViewMatrix(char *g, float len);
void FUN_0c027d50(void)
{
    char *g2 = (char *)0xC7F2EE0;
    int *pend = (int *)0xC363740;
    char *G = (char *)0xC1437B8;
    S12 va, vb, vc;
    float one = 1.0f, two = 2.0f, half = 0.5f;
    float len;
    int i;
    char *R;

    if (g2[299] != 0 || g2[302] != 0 || *(char *)0xC494D20 != 0)
        *pend = *(int *)0xC363744;
    FUN_0c0e1550(1);
    nlUnitMatrix();
    for (i = 0; i < *pend; i++) {
        R = (char *)(0xC363290 + (short)(i * 24));
        vc = *(S12 *)R;
        vc.a |= 1;
        *(S12 *)(G + 112) = vc;
        ((float *)&vc)[0] = ((float *)&vc)[0] + one;
        ((float *)&vc)[1] = ((float *)&vc)[1] + one;
        ((float *)&vc)[2] = ((float *)&vc)[2] + one;
        vc.a |= 1;
        *(S12 *)(G + 144) = vc;
        vb = *(S12 *)(R + 12);
        vb.a |= 1;
        *(S12 *)(G + 176) = vb;
        ((float *)&vb)[0] = ((float *)&vb)[0] + one;
        ((float *)&vb)[1] = ((float *)&vb)[1] + one;
        ((float *)&vb)[2] = ((float *)&vb)[2] + one;
        vb.a |= 1;
        *(S12 *)(G + 208) = vb;
        *(S16 *)(G + 68) = *(S16 *)(0xC363748 + i * 16);
        FUN_0c062050(&va, &vc, &vb);
        FUN_0c06208c(&va, half, half, half);
        *(S12 *)(G + 8) = va;
        *(S12 *)(G + 40) = va;
        FUN_0c06206e(&va, &vc, &vb);
        len = FUN_0c0620a4(&va);
        *(float *)(G + 20) = len * two;
        *(float *)(G + 52) = len * two;
        nlObjPutUseViewMatrix(G, len);
    }
    *(int *)0xC363744 = *pend;
    *pend = 0;
}
