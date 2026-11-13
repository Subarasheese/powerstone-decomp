/* Fighter returns to neutral after an action: clears the action flags (+9..+13), effects (FUN_0c099b60), display
   switches +0x710A..C, attachments (FUN_0c09c506, FUN_0c09a7b2), the hit state (FUN_0c09ba98) and timers, then picks
   the next action (FUN_0c0a2e26): transformed fighters (+0x71F1 / +0x71F4) stand (5, 6) or fall; character 10's two
   special holds (FUN_0c0a0030 / FUN_0c0a0188) chain on; a grounded fighter (+0x274 > 0) guards (14), uses a stone (31),
   attacks (4) or walks (2) from its input, else stands; an airborne one starts falling (state 5, speeds clamped to
   +-3, FUN_0c09f024). */
void FUN_0c099b60(char *o);
void FUN_0c09c506(char *o);
void FUN_0c09a7b2(char *o);
void FUN_0c09ba98(char *o);
char FUN_0c0a0030(char *o);
char FUN_0c0a0188(char *o);
int FUN_0c09e7d2(char *o);
char FUN_0c09e89a(char *o);
int FUN_0c09e7a6(char *o);
void FUN_0c09f024(char *o);
void FUN_0c0a2e26(char *o, int action, int arg);

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c0a2080(char *o)
{
    signed char r;

    B(o, 9) = 0;
    B(o, 13) = 0;
    B(o, 12) = 0;
    B(o, 11) = 0;
    B(o, 10) = 0;
    FUN_0c099b60(o);
    B(o, 0x710A) = 0;
    B(o, 0x710B) = 0;
    B(o, 0x710C) = 0;
    FUN_0c09c506(o);
    B(o, 0x7234) = 0;
    B(o, 0x720A) = 0;
    FUN_0c09a7b2(o);
    B(o, 0x71DF) = 0;
    F(o, 0x71E0) = F(o, 36);
    F(o, 0x729C) = 0.0f;
    H(o, 0x72A2) = 0;
    H(o, 0x72A0) = 0;
    FUN_0c09ba98(o);
    B(o, 0x100) = 0;
    I(o, 0xF4) = 0;
    B(o, 0x7238) = 0;
    if (B(o, 0x71F1) != 0 || H(o, 0x71F4) != 0) {
        if (F(o, 0x274) > 0.0f)
            FUN_0c0a2e26(o, 0, 0);
        else
            FUN_0c0a2e26(o, 5, 6);
        return;
    }
    if (B(o, 0x71BA) == 10) {
        if (B(o, 0x721F) == 8 && B(o, 0x71BB) == 36) {
            r = FUN_0c0a0030(o);
            if (r != 0) {
                F(o, 36) = F(o, 36) + 3.0f;
                FUN_0c0a2e26(o, 36, 1);
                return;
            }
        }
        if (B(o, 0x71BA) == 10 && B(o, 0x721F) == 9 && B(o, 0x71BB) == 39) {
            r = FUN_0c0a0188(o);
            if (r != 0) {
                F(o, 36) = F(o, 36) + 3.0f;
                FUN_0c0a2e26(o, 39, 1);
                return;
            }
        }
    }
    B(o, 0x721F) = 0;
    if (F(o, 0x274) > 0.0f) {
        if (B(o, 0x71BC) == 1) {
            FUN_0c0a2e26(o, 0, 1);
            return;
        }
        if (FUN_0c09e7d2(o) != 0) {
            FUN_0c0a2e26(o, 14, 0);
            return;
        }
        B(o, 0x71BC) = 0;
        if (FUN_0c09e89a(o) != 0) {
            FUN_0c0a2e26(o, 31, 0);
            return;
        }
        if (FUN_0c09e7a6(o) != 0) {
            FUN_0c0a2e26(o, 4, 0);
            return;
        }
        if (I(o, 0x2DC) & 0xF0)
            FUN_0c0a2e26(o, 2, 0);
        else
            FUN_0c0a2e26(o, 0, 0);
        return;
    }
    B(o, 0x71BA) = 5;
    B(o, 0x71BC) = 2;
    B(o, 0x721B) = 0;
    B(o, 0x7219) = B(o, 0x7219) + 1;
    B(o, 0x721A) = B(o, 0x721A) + 1;
    F(o, 76) = 0.0f;
    F(o, 68) = 0.0f;
    if (-3.0f > F(o, 56))
        F(o, 56) = -3.0f;
    if (F(o, 56) > 3.0f)
        F(o, 56) = 3.0f;
    if (-3.0f > F(o, 64))
        F(o, 64) = -3.0f;
    if (F(o, 64) > 3.0f)
        F(o, 64) = 3.0f;
    if (!(0.0f > F(o, 72)))
        F(o, 72) = F(o, 0x71E4);
    FUN_0c09f024(o);
    B(o, 0x71A9) = 1;
    B(o, 0x71A8) = 1;
}
