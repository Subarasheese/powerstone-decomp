/* Two-actor intro/outro state machine (sibling of FUN_0c055d38, table at 0xC14AE58, signed row index): sets up two linked effect objects at state 0, then sub-state +9 times their slide-in, sweep and fade-out; other states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int FUN_0c059330(void *);

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define CNT (*(short *)(e + 0xEC))
#define E4 (*(signed char *)(e + 4))
#define O1 (*(char **)(e + 0x2E0))
#define O2 (*(char **)(e + 0x2E4))

void FUN_0c05606c(char *e)
{
    char *row;
    float k = 0.09999999403953552f;

    if (FUN_0c0d5188() != 0) {
        ST = 2;
    }
    if (ST == 0) {
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        row = (char *)0xC14AE58 + (signed char)((short)E4 * 28);
        FUN_0c06233a(O1, 0xC4CFA80, row[24]);
        *O1 = 0;
        *(S12 *)(O1 + 4) = *(S12 *)row;
        *(S12 *)(O1 + 28) = *(S12 *)(row + 12);
        *(short *)(O1 + 2) = 0x11F;
        FUN_0c06233a(O2, 0xC4CFA80, row[25]);
        *O2 = 0;
        *(S12 *)(O2 + 4) = *(S12 *)row;
        *(S12 *)(O2 + 28) = *(S12 *)(row + 12);
        *(short *)(O2 + 2) = 0x31F;
        *(float *)(O2 + 68) = k;
        *(float *)(O2 + 72) = k;
        *(float *)(O2 + 76) = k;
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
            CNT = E4 * 10 + 1;
            SUB = SUB + 1;
        }
        break;
    case 1:
        CNT = CNT - 1;
        if (CNT == 0) {
            *O1 = 1;
            *O2 = 0;
            *(float *)(O1 + 12) = k;
            *(float *)(O2 + 12) = 0.0f;
            *(float *)(O2 + 36) = 1.0f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(O1 + 12) -= 0.19999998807907104f;
        *(float *)(O2 + 12) -= 0.19999998807907104f;
        if (!(*(float *)(O2 + 12) > -5.0f)) {
            CNT = 11 - E4 * 10;
            SUB = SUB + 1;
        }
        break;
    case 3:
        CNT = CNT - 1;
        if (CNT == 0) {
            *O2 = 1;
            CNT = 5;
            SUB = SUB + 1;
        }
        break;
    case 4:
        *(float *)(O1 + 4) -= 0.009999999776482582f;
        *(float *)(O1 + 8) += 0.009999999776482582f;
        *(float *)(O2 + 4) += 0.009999999776482582f;
        *(float *)(O2 + 8) -= 0.009999999776482582f;
        CNT = CNT - 1;
        if (CNT == 0) {
            CNT = 70;
            SUB = SUB + 1;
        }
        break;
    case 5:
        CNT = CNT - 1;
        if (CNT == 0) {
            ST = ST + 1;
        }
        break;
    }
}
