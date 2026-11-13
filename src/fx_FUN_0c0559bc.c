/* Two-actor intro/outro state machine (sibling of FUN_0c05606c, table at 0xC14AC48; row 10 is biased by the byte at 0xC7F304B): sets up two effect objects, then sub-state +9 runs the fades (case 0 falls into case 1); other states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int FUN_0c059330(void *);
extern signed char g_7f304b;

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define CNT (*(short *)(e + 0xEC))
#define E4 (*(signed char *)(e + 4))
#define O1 (*(char **)(e + 0x2E0))
#define O2 (*(char **)(e + 0x2E4))

void FUN_0c0559bc(char *e)
{
    char *row;
    int a1, a2;
    float k = 0.04999999701976776f;

    if (FUN_0c0d5188() != 0) {
        ST = 2;
    }
    if (ST == 0) {
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        row = (char *)0xC14AC48 + (short)(E4 * 28);
        if (E4 == 10) {
            a1 = row[24] + g_7f304b;
            a2 = row[25] + g_7f304b * 2;
        } else {
            a1 = row[24];
            a2 = row[25] + 1;
        }
        FUN_0c06233a(O1, 0xC4CFA80, a1);
        *O1 = 0;
        *(S12 *)(O1 + 4) = *(S12 *)row;
        *(S12 *)(O1 + 28) = *(S12 *)(row + 12);
        *(short *)(O1 + 2) = 0x11F;
        FUN_0c06233a(O2, 0xC4CFA80, a2);
        *O2 = 0;
        *(S12 *)(O2 + 4) = *(S12 *)row;
        *(S12 *)(O2 + 28) = *(S12 *)(row + 12);
        *(short *)(O2 + 2) = 0x31F;
        *(float *)(O2 + 68) = 1.0f;
        *(float *)(O2 + 72) = 0.699999988079071f;
        *(float *)(O2 + 76) = 0.0f;
        CNT = 1;
        ST = ST + 1;
    } else if (ST != 1) {
        FUN_0c059330(e);
        return;
    }
    switch (SUB) {
    case 0:
        CNT = CNT - 1;
        if (CNT == 0) {
            CNT = E4 * 2 + 1;
            SUB = SUB + 1;
        }
        /* fall through */
    case 1:
        CNT = CNT - 1;
        if (CNT == 0) {
            *O2 = 1;
            *(float *)(O2 + 36) = 0.0f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(O2 + 36) += k;
        if (*(float *)(O2 + 36) > 0.5f) {
            *O1 = 1;
            SUB = SUB + 1;
        }
        break;
    case 3:
        *(float *)(O2 + 36) -= k;
        if (0.0f > *(float *)(O2 + 36)) {
            *(short *)(O1 + 2) = 0x71F;
            *(float *)(O1 + 64) = 1.0f;
            *(float *)(O1 + 68) = 1.0f;
            *(float *)(O1 + 72) = 1.0f;
            *(float *)(O1 + 76) = 1.0f;
            *O2 = 0;
            SUB = SUB + 1;
        }
        break;
    case 4:
        *(float *)(O1 + 64) -= k;
        if (0.0f > *(float *)(O1 + 64)) {
            ST = ST + 1;
        }
        break;
    }
}
