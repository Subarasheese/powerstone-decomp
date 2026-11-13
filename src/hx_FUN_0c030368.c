/* Round-result banners of both sides (24-byte panels at 0x0C366A70 + 44): mode 2 shows the won-rounds count when the
   fighter's win count (+0x720E) rises (slide in over 10 frames, hold 30, then the score animation FUN_0c03027e and,
   unless it reports 99, the "winner" plate FUN_0c0302b6 / FUN_0c0301d2), with a 11-step zoom from 0x0C149414 when the
   count changes again; mode 3 shows the perfect/K.O. plate (+0x72B1) through FUN_0c0302fe. Every timer stops while the
   game is paused (g_0c7f2ee0 + 328). The panel is drawn by FUN_0c0300c2(side, 8, zoom). */
int FUN_0c0555c4(void);
void FUN_0c03027e(int side);
void FUN_0c0302b6(int side);
/* these take four integer arguments; the original passes its loop constants 30 and 10 (r6, r7) as the last two, or
   the fighter table address in r6 after the count check of state 3 */
void FUN_0c0301d2(int side, int layer, int c, int d);
void FUN_0c0300c2(int side, int layer, int c, int d, float zoom);
void FUN_0c0302fe(int side, int layer, int c, int d);

#define PAUSED (*(int *)(0x0C7F2EE0 + 328))

void FUN_0c030368(void)
{
    int i;
    signed char *p;
    signed char *pl;
    float zoom;
    int c6;

    if (FUN_0c0555c4() == 0)
        return;
    for (i = 0; (signed char)i < 2; i++) {
        p = (signed char *)0x0C366A70 + 44 + (signed char)(i * 24);
        pl = (signed char *)0xC7E40C4 + (unsigned short)((unsigned short)(signed char)i * (unsigned short)0x72D0);
        c6 = 30;
        switch (p[4]) {
        case 0:
            if (pl[0x720E] >= 2) {
                p[4] = 2;
                p[5] = 0;
                p[3] = 0;
                p[9] = pl[0x720E];
                p[13] = 0;
            } else if (pl[0x72B1] != 0) {
                p[4] = 3;
                p[5] = 0;
            }
            break;
        case 2:
            if (pl[0x720E] < 2)
                p[13] = 1;
            if (pl[0x720E] != 0 && p[13] != 0) {
                if (!(pl[0x720E] > 1)) {
                    p[4] = 0;
                    return;
                }
                p[5] = 0;
                p[9] = pl[0x720E];
                p[13] = 0;
            }
            switch (p[5]) {
            case 0:
                p[5] = p[5] + 1;
                p[8] = 0;
                p[12] = 30;
            case 1:
                if (!PAUSED)
                    p[8] = p[8] + 1;
                if (p[8] >= 10) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                goto count;
            case 2:
                if (!PAUSED)
                    p[8] = p[8] - 1;
                if (!(p[8] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
            count:
                if (pl[0x720E] == 0) {
                    if (PAUSED)
                        p[12] = p[12] + 1;
                    p[12] = p[12] - 1;
                    if (p[12] != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (p[10] == 99) {
                        p[5] = 9;
                    } else {
                        p[5] = 5;
                        p[11] = 0;
                    }
                } else {
                    p[9] = pl[0x720E];
                }
                goto flat;
            case 3:
                c6 = 0xC7E40C4;
                if (pl[0x720E] == 0) {
                    if (PAUSED)
                        p[12] = p[12] + 1;
                    p[12] = p[12] - 1;
                    if (p[12] != 0)
                        goto flat;
                    FUN_0c03027e(i);
                    if (p[10] != 99) {
                        p[5] = 5;
                        p[11] = 0;
                        goto flat;
                    }
                    p[5] = 9;
                    p[8] = 8;
                } else if (p[9] != pl[0x720E]) {
                    p[9] = pl[0x720E];
                    p[10] = 11;
                    p[5] = 4;
                }
                goto flat;
            case 4:
                if (!PAUSED)
                    p[10] = p[10] - 1;
                if (p[10] == 0) {
                    p[5] = 3;
                    p[12] = 30;
                }
                zoom = ((float *)0x0C149414)[p[10]];
                FUN_0c0300c2(i, 8, c6, 10, zoom);
                break;
            case 5:
                if (!PAUSED)
                    p[11] = p[11] + 1;
                if (p[11] >= 10) {
                    p[5] = p[5] + 1;
                    FUN_0c0302b6(i);
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            case 6:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (!(p[11] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            case 7:
                FUN_0c0301d2(i, 8, 30, 10);
                if (!PAUSED)
                    p[12] = p[12] - 1;
                if (p[12] == 0) {
                    p[5] = p[5] + 1;
                    p[8] = 0;
                    p[11] = 8;
                }
                break;
            case 8:
                if (p[11] != 0 && !PAUSED)
                    p[11] = p[11] - 1;
                if (p[8] == 0 && p[11] == 0) {
                    p[4] = 0;
                    p[5] = 0;
                }
                FUN_0c0301d2(i, 8, 30, 10);
                break;
            default:
                if (!PAUSED)
                    p[8] = p[8] - 1;
                if (p[8] != 0) {
                    p[4] = 0;
                    p[5] = 0;
                }
            flat:
                FUN_0c0300c2(i, 8, c6, 10, 0.0f);
                break;
            }
            break;
        case 3:
            if (pl[0x720E] != 0) {
                p[4] = 0;
                pl[0x72B1] = 0;
                return;
            }
            switch (p[5]) {
            case 0:
                p[5] = p[5] + 1;
                p[11] = 0;
                break;
            case 1:
                if (!PAUSED)
                    p[11] = p[11] + 1;
                if (p[11] >= 10)
                    p[5] = p[5] + 1;
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 2:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (!(p[11] > 8)) {
                    p[5] = p[5] + 1;
                    p[12] = 30;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 3:
                if (!PAUSED)
                    p[12] = p[12] - 1;
                if (p[12] == 0) {
                    p[5] = p[5] + 1;
                    p[11] = 8;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            case 4:
                if (!PAUSED)
                    p[11] = p[11] - 1;
                if (p[11] == 0) {
                    p[4] = 0;
                    p[5] = 0;
                    pl[0x72B1] = 0;
                }
                FUN_0c0302fe(i, 8, 30, 10);
                break;
            }
            break;
        default:
            p[4] = 0;
            p[5] = 0;
            break;
        }
    }
}
