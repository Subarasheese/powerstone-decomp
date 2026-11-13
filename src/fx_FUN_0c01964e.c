/* Menu/cursor handler (state byte 0xC362310): state 0 initialises from the option bytes at 0xC7F4744, state 1 moves the cursor with pad bits and plays sounds; other states go on to FUN_0c0d7566. */
struct c11 { char c[11]; };
extern void FUN_0c0a3796(int, int);
extern void FUN_0c0198b8(char *, int);
extern void FUN_0c010ae4(void);
extern void FUN_0c019b30(char *, char *);
extern void FUN_0c0d7566(void);

#define W1 (*(unsigned short *)(0xC361BF0 + 12))
#define W2 (*(unsigned short *)(0xC361BF0 + 32))

void FUN_0c01964e(void)
{
    char *S;
    char *fl;
    char *p;
    signed char lim;
    char *t;

    S = (char *)0xC362310;
    fl = (char *)0xC7F4744;
    lim = 0;
    p = 0;
    switch (S[0]) {
    case 0:
        S[0] = S[0] + 1;
        *(struct c11 *)(S + 8) = *(struct c11 *)fl;
        S[1] = 7;
        FUN_0c0198b8(S, 1);
        *(short *)(S + 6) = 0;
        S[4] = 0;
        S[5] = 7;
        if (fl[0] == 0)
            S[5] = S[5] - 1;
        if (fl[1] == 0)
            S[5] = S[5] - 1;
        if (fl[2] == 0)
            S[5] = S[5] - 1;
        if (fl[3] == 0)
            S[5] = S[5] - 1;
        /* fall through */
    case 1:
        if ((W1 & 16) || (W2 & 16)) {
            FUN_0c0a3796(0, 75);
            FUN_0c0198b8(S, 0);
            S[4] = S[4] - 1;
            if (S[4] < 0)
                S[4] = S[5];
        } else if ((W1 & 32) || (W2 & 32)) {
            FUN_0c0a3796(0, 75);
            FUN_0c0198b8(S, 1);
            S[4] = S[4] + 1;
            if (S[4] > S[5])
                S[4] = 0;
        }
        switch (S[1]) {
        case 0: p = fl + 4; lim = 2; break;
        case 1: p = fl + 5; lim = 1; break;
        case 2: p = fl + 6; lim = 1; break;
        case 3: p = fl + 7; lim = 1; break;
        case 4: p = fl + 8; lim = 1; break;
        case 5: p = fl + 9; lim = 3; break;
        case 6: p = fl + 10; lim = 3; break;
        case 7: p = 0; break;
        }
        if (S[1] == 7) {
            if ((W1 & 4) || (W2 & 4)) {
                FUN_0c0a3796(0, 77);
                FUN_0c010ae4();
                t = (char *)0xC7F4750;
                fl[4] = t[21];
                fl[5] = t[22];
                fl[6] = t[20];
                fl[7] = t[23];
                fl[8] = t[26];
                fl[9] = t[27];
                fl[10] = t[28];
            }
        } else {
            if ((W1 & 128) || (W2 & 128)) {
                FUN_0c0a3796(0, 76);
                *p = *p + 1;
                if (*p > lim)
                    *p = 0;
            } else if ((W1 & 64) || (W2 & 64)) {
                FUN_0c0a3796(0, 76);
                *p = *p - 1;
                if (*p < 0)
                    *p = lim;
            }
        }
        *(short *)(S + 6) = *(short *)(S + 6) + 1456;
        FUN_0c019b30(S, fl);
        if ((W1 & 8) || (W2 & 8)) {
            S[0] = S[0] + 1;
            FUN_0c0a3796(0, 77);
        }
        return;
    default:
        FUN_0c0d7566();
        return;
    }
}
