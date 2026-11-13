/* Two-actor intro/outro state machine (sibling of FUN_0c057542, table at 0xC14AD88): sets up two linked effect objects at state 0, then sub-state +9 runs their fade-in, slide, flash and fade-out; other states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int FUN_0c059330(void *);

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define CNT (*(short *)(e + 0xEC))
#define O1 (*(char **)(e + 0x2E0))
#define O2 (*(char **)(e + 0x2E4))

static void setup(char *o, char *row)
{
    *o = 0;
    *(S12 *)(o + 4) = *(S12 *)row;
    *(S12 *)(o + 28) = *(S12 *)(row + 12);
    *(short *)(o + 2) = 0x31F;
    *(float *)(o + 68) = 1.0f;
    *(float *)(o + 72) = 0.0f;
    *(float *)(o + 76) = 0.0f;
}

void FUN_0c055d38(char *e)
{
    char *row;
    float k = 0.03999999910593033f;

    if (FUN_0c0d5188() != 0) {
        ST = 2;
    }
    if (ST == 0) {
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        row = (char *)0xC14AD88 + (unsigned char)((unsigned short)(signed char)e[4] * 28);
        FUN_0c06233a(O1, 0xC4CFA80, row[24]);
        setup(O1, row);
        FUN_0c06233a(O2, 0xC4CFA80, row[25] + 1);
        setup(O2, row);
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
            CNT = 1;
            SUB = SUB + 1;
        }
        break;
    case 1:
        CNT = CNT - 1;
        if (CNT == 0) {
            *O1 = 1;
            *O2 = 1;
            *(float *)(O1 + 12) = 0.0f;
            *(float *)(O2 + 12) = 0.0f;
            *(float *)(O2 + 36) = 0.29999998211860657f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(O1 + 12) -= 0.19999998807907104f;
        *(float *)(O2 + 12) -= 0.19999998807907104f;
        if (!(*(float *)(O2 + 12) > -5.0f)) {
            *O1 = 1;
            SUB = SUB + 1;
        }
        break;
    case 3:
        *(float *)(O2 + 36) -= 0.0299999993f;
        if (0.0f > *(float *)(O2 + 36)) {
            *(short *)(O1 + 2) = 0x71F;
            *(float *)(O1 + 64) = 1.0f;
            CNT = 25;
            SUB = SUB + 1;
        }
        break;
    case 4:
        *(float *)(O1 + 72) += k;
        *(float *)(O1 + 76) += k;
        CNT = CNT - 1;
        if (CNT == 0) {
            CNT = 25;
            SUB = SUB + 1;
        }
        break;
    case 5:
        *(float *)(O1 + 64) -= k;
        CNT = CNT - 1;
        if (CNT == 0) {
            ST = ST + 1;
        }
        break;
    }
}
