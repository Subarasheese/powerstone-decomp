/* Fighter state: knocked down (sub-state +10). On entry (0) it clears its action flags, speeds and timers (get-up
   delay +0x72A4 = 20), drops effects and attachments (FUN_0c099b60, FUN_0c09a7ba), shows the body (+0x710A unless
   transformed, +0x710B, +0x710C), resets its motion and hit state (FUN_0c08e8d6, FUN_0c08e704, FUN_0c08ed08,
   FUN_0c08e980, FUN_0c08e4bc) and plays the hit sound of the attack that floored it (+0xF8: FUN_0c0d905e(10) or
   the voice FUN_0c0dab92); then each sub-state runs its handler (FUN_0c08ef36 lying, FUN_0c091f0a, FUN_0c091eee,
   FUN_0c092814 getting up). */
void FUN_0c08ef36(char *o);
void FUN_0c091f0a(char *o);
void FUN_0c091eee(char *o);
void FUN_0c092814(char *o);
void FUN_0c099b60(char *o);
void FUN_0c09a7ba(char *o);
void FUN_0c08e8d6(char *o);
void FUN_0c08e704(char *o);
void FUN_0c08ed08(char *o);
void FUN_0c08e980(char *o);
void FUN_0c08e4bc(char *o);
void FUN_0c0d905e(int sound);
void FUN_0c0dab92(int voice, int side);

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c08ed56(char *o)
{
    signed char *w;

    switch (B(o, 10)) {
    case 0:
        B(o, 10) = B(o, 10) + 1;
        B(o, 13) = 0;
        B(o, 12) = 0;
        B(o, 11) = 0;
        F(o, 64) = 0.0f;
        F(o, 60) = 0.0f;
        F(o, 56) = 0.0f;
        F(o, 76) = 0.0f;
        F(o, 72) = 0.0f;
        F(o, 68) = 0.0f;
        F(o, 0x71E8) = 0.0f;
        B(o, 0x72AC) = 0;
        H(o, 0x72A4) = 20;
        B(o, 0x721A) = 0;
        FUN_0c099b60(o);
        FUN_0c09a7ba(o);
        B(o, 0x720A) = 0;
        if (B(o, 0x71F1) == 0)
            B(o, 0x710A) = 1;
        B(o, 0x710B) = 1;
        B(o, 0x710C) = 1;
        FUN_0c08e8d6(o);
        B(o, 0x7216) = 0;
        FUN_0c08e704(o);
        FUN_0c08ed08(o);
        FUN_0c08e980(o);
        FUN_0c08e4bc(o);
        w = *(signed char **)(o + 0xF8);
        if (w[5] == 0) {
            if ((*(signed char **)(o + 0xF8))[19] == 0)
                FUN_0c0d905e(10);
            else
                FUN_0c0dab92((*(signed char **)(o + 0xF8))[19], B(o, 3));
        }
        FUN_0c08ef36(o);
        return;
    case 1:
        FUN_0c08ef36(o);
        return;
    case 2:
        FUN_0c091f0a(o);
        return;
    case 3:
        FUN_0c091eee(o);
        return;
    case 4:
        FUN_0c092814(o);
        return;
    }
}
