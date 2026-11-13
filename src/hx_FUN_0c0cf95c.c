/* Motion viewer (debug) for one fighter: on entry (state d[0] == 0) it resets its menu (0x0C494928, 24 bytes per side)
   and loads the fighter's current character; then the pad (g361bf0, 20 bytes per side: +8 held, +12 pressed) edits the
   selected row d[7] (up/down = 0x10 / 0x20, wrapping 0..7) with left/right (0x40 / 0x80): character (reloads it), costume,
   motion layer, motion number, x position, and three display switches at +0x710A..+0x710C; button 4 replays the motion,
   0x400 toggles auto-advance, 2 turns the fighter by 45 degrees, 8 cycles the shadow mode; the menu is drawn
   (FUN_0c0cf428), frames are stepped (FUN_0c0cf8de) and FUN_0c0ce836 finishes the frame. */
void FUN_0c0cf898(char *d, int side);
void thunk_FUN_0c05fff4(void);
void FUN_0c09939c(void);
void FUN_0c0993e4(int side);
void FUN_0c0cf73a(char *pl);
void FUN_0c09a808(char *pl, int layer, int motion);
void FUN_0c099a24(char *pl);
void FUN_0c0cf428(char *d, int side);
void FUN_0c0cf8de(char *pl, char *d);
void FUN_0c0ce836(void);

#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define PAD(n) (*(unsigned short *)((char *)0x0C361BF0 + (signed char)(side * 20) + (n)))
#define RELOAD() \
    *(signed char *)0x0C7F3071 = 3; \
    B(pl, 0x71EC) = next; \
    thunk_FUN_0c05fff4(); \
    FUN_0c09939c(); \
    FUN_0c0993e4(side)
#define REPLAY() \
    FUN_0c09a808(pl, B(d, 6), I(d, 20)); \
    B(pl, 0x723B) = 1; \
    B(pl, 0x71A9) = 1; \
    B(pl, 0x71A8) = 1; \
    FUN_0c0cf73a(pl)
#define WRAP(v, lo_to, hi) \
    if ((v) < 0) (v) = (lo_to); \
    if ((v) > (hi)) (v) = 0

void FUN_0c0cf95c(char side)
{
    char *pl, *d, *e;
    signed char next;
    int dir;

    pl = PL((signed char)side);
    d = (char *)0x0C494928 + (signed char)(side * 24);
    FUN_0c0cf898(d, side);
    next = side + 1;
    switch (B(d, 0)) {
    case 0:
        B(d, 0) = B(d, 0) + 1;
        B(d, 4) = 0;
        B(d, 5) = 0;
        B(d, 6) = 0;
        I(d, 20) = 0;
        I(d, 16) = 0;
        B(d, 7) = 0;
        B(d, 9) = 0;
        B(d, 10) = 0;
        B(d, 11) = 0;
        B(d, 12) = 0;
        B(d, 13) = 0;
        B(d, 14) = 0;
        B(d, 4) = B(pl, 4);
        RELOAD();
        FUN_0c0cf73a(pl);
        FUN_0c09a808(pl, B(d, 6), I(d, 20));
        B(pl, 0x723B) = 1;
        I(pl, 0x7194) = I(pl, 0x718C);
        I(pl, 0x7190) = I(pl, 0x718C);
    case 1:
        break;
    default:
        FUN_0c0ce836();
        return;
    }
    if (PAD(12) & 0xC0) {
        dir = (PAD(12) & 0x40) ? -1 : 1;
        switch (B(d, 7)) {
        case 0:
            I(d, 16) = 0;
            B(d, 11) = 0;
            B(d, 4) = B(d, 4) + dir;
            WRAP(B(d, 4), 10, 10);
            B(pl, 4) = B(d, 4);
            RELOAD();
            B(d, 5) = 0;
            FUN_0c0cf73a(pl);
            FUN_0c09a808(pl, B(d, 6), I(d, 20));
            B(pl, 0x723B) = 1;
            break;
        case 1:
            I(d, 16) = 0;
            B(d, 11) = 0;
            B(d, 5) = B(d, 5) + dir;
            B(d, 5) = B(d, 5) & 1;
            B(pl, 0x71F1) = B(d, 5);
            FUN_0c099a24(pl);
            break;
        case 2:
            I(d, 16) = 0;
            B(d, 11) = 0;
            B(d, 6) = B(d, 6) + dir;
            WRAP(B(d, 6), 4, 4);
            REPLAY();
            break;
        case 3:
            I(d, 16) = 0;
            B(d, 11) = 0;
            I(d, 20) = (I(d, 20) + dir) & 255;
            REPLAY();
            break;
        case 4:
            F(pl, 0x20) = F(pl, 0x20) + (float)dir;
            *(float *)((char *)0x0C494958 + (signed char)(B(pl, 3) * 12)) =
                *(float *)((char *)0x0C494958 + (signed char)(B(pl, 3) * 12)) + (float)dir;
            break;
        case 5:
            B(pl, 0x710A) = B(pl, 0x710A) + dir;
            WRAP(B(pl, 0x710A), 1, 1);
            break;
        case 6:
            B(pl, 0x710B) = B(pl, 0x710B) + dir;
            WRAP(B(pl, 0x710B), 3, 3);
            break;
        case 7:
            B(pl, 0x710C) = B(pl, 0x710C) + dir;
            WRAP(B(pl, 0x710C), 3, 3);
            break;
        }
    } else {
        if (PAD(12) == 16 && !(PAD(8) & 0xC0)) {
            B(d, 7) = B(d, 7) - 1;
            if (B(d, 7) < 0)
                B(d, 7) = 7;
        }
        if (PAD(12) == 32 && !(PAD(8) & 0xC0)) {
            B(d, 7) = B(d, 7) + 1;
            if (B(d, 7) > 7)
                B(d, 7) = 0;
        }
    }
    if (PAD(12) & 4) {
        I(d, 16) = 0;
        B(d, 11) = 0;
        REPLAY();
    }
    if (PAD(12) & 0x400) {
        B(d, 10) = B(d, 10) + 1;
        B(d, 10) = B(d, 10) & 1;
    }
    if (PAD(12) & 2) {
        e = (char *)0x0C494970 + (signed char)(B(pl, 3) * 12);
        I(e, 4) = (unsigned short)(I(e, 4) + 0x2000);
        I(pl, 48) = I((char *)0x0C494970 + (signed char)(B(pl, 3) * 12), 4);
    }
    if (PAD(12) & 8) {
        B(d, 14) = B(d, 14) + 1;
        if (B(d, 14) > 2)
            B(d, 14) = 0;
        B(pl, 1) = B(d, 14) == 2 ? 0 : 1;
    }
    FUN_0c0cf428(d, side);
    if (B(d, 10) != 0) {
        if (PAD(12) & 0x200)
            FUN_0c0cf8de(pl, d);
    } else {
        B(d, 12) = B(d, 12) + 1;
        if (B(d, 12) > B(d, 9)) {
            B(d, 12) = 0;
            FUN_0c0cf8de(pl, d);
        }
    }
    FUN_0c0ce836();
}
