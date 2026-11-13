/* HUD indicator update for the two players: re-targets each indicator when its value changes, animates it through six stages, draws it and the row of icons. */
extern void FUN_0c027fa4(float *, int, int, int, int, int);

#define EF(off) (*(float *)(e + (off)))
#define ES(off) (*(short *)(e + (off)))

void FUN_0c02ee40(void)
{
    char *G, *H, *e, *P;
    float rec[14];
    float f, f14, c045, c001;
    unsigned int b045, b001;
    int i, j, k, r10, r14, s;
    int *tbl;
    signed char t;

    G = (char *)0xC366A70;
    H = (char *)0xC7F2EE0;
    tbl = (int *)0xC1493C4;
    b045 = 0x3EE66666;
    b001 = 0x3A83126E;
    c045 = *(float *)&b045;
    c001 = *(float *)&b001;

    for (i = 0; i < 2; i++) {
        e = G + 0x434 + (signed char)(i * 36);
        t = *(signed char *)(0xC7F2E3F + (unsigned char)(i * 120));
        e[3] = t;
        if (t == e[4])
            continue;
        if (e[7] != 0)
            continue;
        e[7] = 1;
        e[2] = i;
        e[5] = 0;
        e[0] = 1;
        P = (char *)0xC7F2DF0 + (unsigned char)(i * 120);
        for (j = 0; j < 5; j++) {
            if (*(signed char *)(P + 80 + P[79] - 1) == tbl[j])
                break;
        }
        e[6] = j;
    }

    for (r10 = 0; r10 < 2; r10++) {
        e = G + 0x434 + (signed char)(r10 * 36);
        if (e[0] != 0) {
            switch (e[5]) {
            case 0:
                e[5] = e[5] + 1;
                EF(28) = 10.0f;
                EF(12) = 120.0f;
                ES(32) = *(short *)(0xC1493D8 + 2 * e[6]);
                if (e[2] == 0) {
                    EF(8) = 100.0f;
                    f = (float)e[4] * 40.0f - EF(8);
                    f = f + 28.0f;
                } else {
                    EF(8) = 540.0f;
                    f = -((float)e[4] * 40.0f) - EF(8);
                    f = f + 612.0f;
                }
                EF(16) = f / 20.0f;
                EF(20) = (-EF(12) + 120.0f) / 20.0f;
                break;
            case 1:
                if (*(int *)(H + 328) == 0) {
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        e[5] = e[5] + 1;
                        ES(32) = 1;
                        e[1] = 1;
                    }
                }
                break;
            case 2:
                if (*(int *)(H + 328) == 0) {
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        e[5] = e[5] + 1;
                        ES(32) = 20;
                    }
                }
                break;
            case 3:
                if (*(int *)(H + 328) == 0) {
                    EF(8) = EF(8) + EF(16);
                    EF(28) = EF(28) - c045;
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0) {
                        ES(32) = 12;
                        e[5] = e[5] + 1;
                    }
                }
                break;
            case 4:
                if (*(int *)(H + 328) == 0) {
                    s = ES(32);
                    EF(28) = EF(28) + ((float *)0xC1493E4)[12 - s];
                    ES(32) = ES(32) - 1;
                    if (ES(32) == 0)
                        e[5] = e[5] + 1;
                }
                break;
            case 5:
                e[4] = e[3];
                e[1] = 0;
                break;
            default:
                break;
            }
        }
        if (e[1] != 0) {
            ((int *)rec)[10] = *(int *)(e + 24);
            rec[11] = 1.0f;
            f = EF(28) * 1.0f;
            rec[5] = f;
            rec[4] = f;
            ((int *)rec)[13] = 10;
            rec[1] = EF(8);
            rec[2] = EF(12) + *(float *)(G + 4);
            rec[3] = 1.0f + c001 * (float)e[2];
            FUN_0c027fa4(rec, 0xC17FDB0, 5, e[6], 0, 0);
        }
    }

    f14 = 40.0f;
    ((int *)rec)[10] = 0;
    rec[11] = 1.0f;
    rec[4] = 1.0f;
    rec[5] = 1.0f;
    ((int *)rec)[13] = 10;
    rec[2] = *(float *)(G + 4) + 120.0f;
    rec[3] = 8.0f;
    rec[1] = 28.0f;
    for (k = 0; k < 2; k++) {
        P = (char *)0xC7F2DF0 + (unsigned char)(k * 120);
        e = G + 0x434 + (signed char)(k * 36);
        for (r10 = 0; r10 < e[4]; r10++) {
            for (r14 = 0; r14 < 5; r14++) {
                if (P[80 + r10] == tbl[r14]) {
                    FUN_0c027fa4(rec, 0xC17FDB0, 5, r14, 0, 0);
                    rec[1] = rec[1] + f14;
                }
            }
        }
        f14 = -f14;
        rec[1] = 612.0f;
    }
}
