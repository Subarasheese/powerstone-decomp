/* Two-actor intro/outro state machine with a selectable style (short at +0xEE follows the byte at 0xC7F306C; rows of 16 floats at 0xC32DEC4 retint the objects when it changes): sets up two effect objects, then sub-state +9 runs the fades; other states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
typedef struct { float a, b, c, d; } F4;
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(void *, int, int);
extern int FUN_0c059330(void *);
extern signed char g_302c;

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define CNT (*(short *)(e + 0xEC))
#define STYLE (*(short *)(e + 0xEE))
#define E4 (*(signed char *)(e + 4))
#define OBJ(i) (*(char **)(e + 0x2E0 + 4 * (i)))
#define STY (*(signed char *)0xC7F306C)

void FUN_0c057e28(char *e)
{
    char *row;
    F4 *t;
    int i;

    if (FUN_0c0d5188() != 0) {
        ST = 2;
    }
    row = (char *)0xC14BB48 + (signed char)(E4 * 28);
    if (ST == 0) {
        e[1] = 1;
        *(short *)(e + 6) = 31;
        e[5] = 25;
        for (i = 0; i < 2; i++) {
            FUN_0c06233a(OBJ(i), 0xC4CFA80, row[24] + (signed char)e[0xEE] * 2 + i);
            *OBJ(i) = 0;
            *(S12 *)(OBJ(i) + 4) = *(S12 *)row;
            *(S12 *)(OBJ(i) + 28) = *(S12 *)(row + 12);
            *(short *)(OBJ(i) + 2) = 0x11F;
        }
        CNT = 1;
        STYLE = STY;
        ST = ST + 1;
    } else if (ST != 1) {
        FUN_0c059330(e);
        return;
    }
    if (g_302c != 7) {
        ST = ST + 1;
    }
    e[1] = STYLE > 9 ? 0 : 1;
    if (STYLE != STY) {
        STYLE = STY;
        t = (F4 *)0xC32DEC4;
        for (i = 0; i < 2; i++) {
            FUN_0c06233a(OBJ(i), 0xC4CFA80, row[24] + (signed char)e[0xEE] * 2 + i);
            *OBJ(i) = 0;
            *(S12 *)(OBJ(i) + 4) = *(S12 *)row;
            *(S12 *)(OBJ(i) + 28) = *(S12 *)(row + 12);
            if (i == 0) {
                *(short *)(OBJ(i) + 2) = 0x71F;
                *(float *)(OBJ(i) + 64) = t[STYLE].a;
            } else {
                *(short *)(OBJ(i) + 2) = 0x31F;
            }
            *(float *)(OBJ(i) + 68) = t[STYLE].b;
            *(float *)(OBJ(i) + 72) = t[STYLE].c;
            *(float *)(OBJ(i) + 76) = t[STYLE].d;
        }
        CNT = 1;
        SUB = 0;
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
            *OBJ(0) = 1;
            *OBJ(1) = 1;
            *(float *)(OBJ(0) + 12) = 0.0f;
            *(float *)(OBJ(1) + 12) = 0.0f;
            *(float *)(OBJ(0) + 36) = 1.0f;
            *(float *)(OBJ(1) + 36) = 1.0f;
            SUB = SUB + 1;
        }
        break;
    case 2:
        *(float *)(OBJ(0) + 12) -= 0.19999998807907104f;
        *(float *)(OBJ(1) + 12) -= 0.19999998807907104f;
        if (!(*(float *)(OBJ(1) + 12) > -5.0f)) {
            SUB = SUB + 1;
        }
        break;
    case 3:
        *(float *)(OBJ(0) + 36) -= 0.03999999910593033f;
        *(float *)(OBJ(1) + 36) -= 0.03999999910593033f;
        if (0.0f > *(float *)(OBJ(1) + 36)) {
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
