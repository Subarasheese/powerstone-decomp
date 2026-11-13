/* Fighter: start of a throw/grab state. Moves the held model part (FUN_0c062242 on the motion slot chosen by +0x71F1),
   resets the motion (FUN_0c08e5b4), sets state 2 at +0x71BC, timers +0xEC = 0, +0xF0 = 3 and +0xEE = |+0x3C / +0x48|,
   then picks the motion number at +0xF2 (96, 112 or 128) from the weapon held (+0xF8: kind byte 0 must be 1 or 2, the
   sub-kind at byte 6) and the alternating flag +0x7205, plays it (FUN_0c09a808(o, 2, motion)), raises the flags
   +0x71A8 / +0x71A9 and counts the attempt at +11. */
void thunk_FUN_0c062242(char *slot, float *pos);
void FUN_0c08e5b4(char *o);
void FUN_0c04b054(int side);
void FUN_0c09a808(char *o, int layer, int motion);
void FUN_0c0a167c(char *o);

#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c08f794(char *o)
{
    char *pl;
    unsigned char *w;
    float t;

    pl = PL(B(o, 3));
    thunk_FUN_0c062242(pl + 0x300 + (short)(B(pl, 0x71F1) * 3520) + 0x160, (float *)(o + 0x20));
    FUN_0c08e5b4(o);
    B(o, 0x71BC) = 2;
    H(o, 0xEC) = 0;
    H(o, 0xF0) = 3;
    t = F(o, 0x3C) / F(o, 0x48);
    H(o, 0xEE) = (int)(0.0f > t ? -t : t);
    if (*(int *)(o + 0x7294) != 0) {
        w = *(unsigned char **)(o + 0xF8);
        if ((B(o, 0x71DD) == 1 || B(o, 0x71DD) == 2) && (w[0] == 1 || w[0] == 2)) {
            switch ((*(unsigned char **)(o + 0xF8))[6]) {
            case 2:
                switch (B(o, 0x7205)) {
                case 0: case 2: case 3:
                    H(o, 0xF2) = 128;
                    B(o, 0x7205) = 1;
                    break;
                case 1:
                    H(o, 0xF2) = 96;
                    B(o, 0x7205) = 0;
                    break;
                }
                break;
            case 3:
                H(o, 0xF2) = 112;
                FUN_0c04b054(B(o, 3));
                break;
            case 4:
                H(o, 0xF2) = 112;
                break;
            default:
                switch (B(o, 0x7205)) {
                case 0: case 2: case 3:
                    H(o, 0xF2) = 96;
                    break;
                case 1:
                    H(o, 0xF2) = 128;
                    break;
                }
                break;
            }
        } else {
            if (B(o, 0x7205) == 1)
                H(o, 0xF2) = 128;
            else
                H(o, 0xF2) = 96;
        }
    } else {
        w = *(unsigned char **)(o + 0xF8);
        if ((B(o, 0x71DD) == 1 || B(o, 0x71DD) == 2) && (w[0] == 1 || w[0] == 2)) {
            switch ((*(unsigned char **)(o + 0xF8))[6]) {
            case 2:
                H(o, 0xF2) = 128;
                B(o, 0x7205) = 1;
                break;
            case 3:
                H(o, 0xF2) = 112;
                FUN_0c04b054(B(o, 3));
                break;
            case 4:
                H(o, 0xF2) = 112;
                break;
            default:
                H(o, 0xF2) = 96;
                B(o, 0x7205) = 0;
                break;
            }
        }
        if (B(o, 0x7205) == 1)
            H(o, 0xF2) = 128;
        else
            H(o, 0xF2) = 96;
    }
    FUN_0c09a808(o, 2, H(o, 0xF2));
    B(o, 0x71A9) = 1;
    B(o, 0x71A8) = 1;
    if (H(o, 0x71D4) < 0 && B(o, 0x71F3) != 0) {
        FUN_0c0a167c(o);
        B(o, 0x7230) = 0;
    }
    B(o, 11) = B(o, 11) + 1;
}
