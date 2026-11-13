/* Two-actor intro/outro state machine: at state 0 (+8) it sets up two linked effect objects (+0x2E0, +0x2E4) from a 28-byte table row, then sub-state +9 times their fade-in, slide and fade-out; other states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0d5188(void);
extern int FUN_0c055634(void);
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

void FUN_0c057542(char *e)
{
    char *row;

    if (FUN_0c0d5188() != 0 || FUN_0c055634() != 0) {
        ST = 2;
    }
    if (ST == 0) {
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        row = (char *)0xC14B8A0 + (unsigned char)((unsigned short)(signed char)e[4] * 28);
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
            *(float *)(O2 + 36) = 1.0f;
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
        *(float *)(O2 + 36) -= 0.0399999991f;
        if (0.0f > *(float *)(O2 + 36)) {
            CNT = 60;
            SUB = SUB + 1;
        }
        break;
    case 4:
        CNT = CNT - 1;
        if (CNT == 0) {
            ST = ST + 1;
        }
        break;
    }
}
