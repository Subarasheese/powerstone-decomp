/* Two-actor intro/outro state machine (table at 0xC152C8C; a finished check hands straight over to FUN_0c059330): sets up two effect objects at state 0, then sub-state +9 runs their fade, slide, flash (calling FUN_0c0ab940 and setting two bytes at 0xC7F31BC) and fade-out. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int FUN_0c059330(void *);
extern void FUN_0c0ab940(void);

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define CNT (*(short *)(e + 0xEC))
#define E4 (*(signed char *)(e + 4))
#define OBJ(i) (*(char **)(e + 0x2E0 + 4 * (i)))

void FUN_0c0aae48(char *e)
{
    char *row;
    int i;
    char *g;

    if (FUN_0c0d5188() != 0) {
        FUN_0c059330(e);
        return;
    }
    if (ST == 0) {
        ST = ST + 1;
        SUB = 0;
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        row = (char *)0xC152C8C + (signed char)(E4 * 28);
        for (i = 0; i < 2; i++) {
            FUN_0c06233a(OBJ(i), 0xC4CFA80, row[24] + i);
            *OBJ(i) = 0;
            *(S12 *)(OBJ(i) + 4) = *(S12 *)row;
            *(S12 *)(OBJ(i) + 28) = *(S12 *)(row + 12);
            *(short *)(OBJ(i) + 2) = 799;
            *(float *)(OBJ(i) + 68) = 1.0f;
            *(float *)(OBJ(i) + 72) = 0.0f;
            *(float *)(OBJ(i) + 76) = 0.0f;
        }
    } else if (ST != 1) {
        FUN_0c059330(e);
        return;
    }
    switch (SUB) {
    case 0:
        SUB = SUB + 1;
        CNT = 1;
        /* fall through */
    case 1:
        CNT = CNT - 1;
        if (CNT == 0) {
            *OBJ(1) = 1;
            *(float *)(OBJ(1) + 36) = 1.0f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(OBJ(0) + 12) -= 0.19999998807907104f;
        *(float *)(OBJ(1) + 12) -= 0.19999998807907104f;
        if (!(*(float *)(OBJ(1) + 12) > -10.0f)) {
            *OBJ(0) = 1;
            SUB = SUB + 1;
        }
        break;
    case 3:
        *(float *)(OBJ(1) + 36) -= 0.03999999910593033f;
        if (0.0f > *(float *)(OBJ(1) + 36)) {
            *(short *)(OBJ(0) + 2) = 0x71F;
            *(float *)(OBJ(0) + 64) = 1.0f;
            CNT = 25;
            SUB = SUB + 1;
            FUN_0c0ab940();
            g = (char *)0xC7F31BC;
            g[20] = 1;
            g[21] = 6;
        }
        break;
    case 4:
        *(float *)(OBJ(0) + 72) += 0.03999999910593033f;
        *(float *)(OBJ(0) + 76) += 0.03999999910593033f;
        CNT = CNT - 1;
        if (CNT == 0) {
            CNT = 25;
            SUB = SUB + 1;
        }
        break;
    case 5:
        CNT = CNT - 1;
        if (CNT == 0) {
            SUB = SUB + 1;
        }
        break;
    }
}
