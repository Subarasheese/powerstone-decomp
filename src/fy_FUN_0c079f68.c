/* Steps the five script slots of a fighter (state bytes at +0x72BF, step counters at +0x72C4, script column at +0x72BE) through three 560-byte tables copied to the stack: state 0 counts a step up to its length (table C, -1 = hold), state 1 plays the sound / effect code of table A (6, 10, 13, 16, -1) and counts to the length in table B, state 2 only plays the code of table A; returns FUN_0c09a910. */
typedef struct { signed char b[560]; } T560;
extern int FUN_0c079cb2(char *, int, int, int);
extern char FUN_0c09a910(char *);

char FUN_0c079f68(char *o)
{
    T560 A, B, C;
    char *p;
    int i, ofs;

    C = *(T560 *)0xC14FBA0;
    B = *(T560 *)0xC14FDD0;
    A = *(T560 *)0xC150000;
    p = o + 0x72BC;
    for (i = 0; i < 5; i++) {
        ofs = (short)(i * 112);
        if (p[3 + i] == 0) {
            if (C.b[ofs + p[2]] != -1) {
                p[8 + i]++;
                if (p[8 + i] == C.b[ofs + p[2]]) {
                    p[3 + i]++;
                }
            }
        } else if (p[3 + i] == 1) {
            switch (A.b[ofs + p[2]]) {
            case 0:
                FUN_0c079cb2(o, 6, 0, i);
                break;
            case 1:
                FUN_0c079cb2(o, 10, 0, i);
                break;
            case 2:
                FUN_0c079cb2(o, 13, 0, i);
                break;
            case 3:
                FUN_0c079cb2(o, 16, 0, i);
                break;
            case 4:
                FUN_0c079cb2(o, 6, 0, i);
                FUN_0c079cb2(o, 10, 0, i);
                break;
            case 5:
                FUN_0c079cb2(o, 13, 0, i);
                FUN_0c079cb2(o, 16, 0, i);
                break;
            case 6:
                FUN_0c079cb2(o, -1, 0, i);
                break;
            default:
                break;
            }
            p[8 + i]++;
            if (p[8 + i] == B.b[ofs + p[2]]) {
                p[3 + i]++;
            }
        } else if (p[3 + i] == 2) {
            switch (A.b[ofs + p[2]]) {
            case 0:
                FUN_0c079cb2(o, 6, 1, i);
                break;
            case 1:
                FUN_0c079cb2(o, 10, 1, i);
                break;
            case 2:
                FUN_0c079cb2(o, 13, 1, i);
                break;
            case 3:
                FUN_0c079cb2(o, 16, 1, i);
                break;
            case 4:
                FUN_0c079cb2(o, 6, 1, i);
                FUN_0c079cb2(o, 10, 1, i);
                break;
            case 5:
                FUN_0c079cb2(o, 13, 1, i);
                FUN_0c079cb2(o, 16, 1, i);
                break;
            case 6:
                FUN_0c079cb2(o, -1, 1, i);
                break;
            default:
                break;
            }
        }
    }
    return FUN_0c09a910(o);
}
