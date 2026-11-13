/* Fighter takes a hit: the damage of the attack (+0xF8 attack record: power byte 1 through FUN_0c059718, scaled by the
   attacker's (+0x1C) character tables 0x0C338EA4 / 0x0C338ED0 / 0x0C338EFC for attack classes 1-3 and by the transformed /
   power-up multipliers 1.2 / 1.1 / 1.05), at least 1, halved and scaled by the handicap setting s7f4750[27] when this
   fighter is transformed (+0x71F3), scaled by s7f4750[28] when the attacker is, then taken off the vitality +0x71D4 (with
   the red bar +0x71D6 / +0x71D8 following, or lagging at 1/5 of the damage for non-chip hits) and off the transformation
   time +0x71F4; sets the hit-stun timers +0x720F / +0x7214 / +0x7215, records who scored first (g_302c[75]) and runs the
   K.O. (FUN_0c09b7a4(o, 9)) when the vitality is gone. */
int FUN_0c0555c4(void);
float FUN_0c059718(char *o, float power);
void FUN_0c09b7a4(char *o, int state);

#define B(o, n) (*(signed char *)((o) + (n)))
#define UB(o, n) (*(unsigned char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define S ((signed char *)0x0C7F4750)
#define ATK(o) (*(unsigned char **)((o) + 0xF8))
#define BY(o) (*(char **)((o) + 28))

void FUN_0c08dfa4(char *o)
{
    unsigned char *w;
    char *q;
    float f, m, t;
    int n;
    short v;

    if (FUN_0c0555c4() == 0)
        return;
    f = FUN_0c059718(o, (float)ATK(o)[1]);
    switch (ATK(o)[8]) {
    case 1:
        f = f * ((float *)0x0C338EA4)[B(BY(o), 4)];
        break;
    case 2:
        f = f * ((float *)0x0C338ED0)[B(BY(o), 4)];
        break;
    case 3:
        f = f * ((float *)0x0C338EFC)[B(BY(o), 4) * 4 + B(BY(o), 0x721D)];
        break;
    }
    if (ATK(o)[4] != 2) {
        m = 1.0f;
        q = *(char **)(o + 0x7294);
        if (q != 0 && B(q, 3) != 2 && ATK(o)[4] != 7) {
            if (ATK(o)[4] == 3 || ATK(o)[4] == 4 || B(BY(o), 0x71F3) != 0)
                m = 1.19999993f;
            if (B(BY(o), 0x7230) == 2)
                m = 1.09999990f;
            else if (B(BY(o), 0x7230) == 1)
                m = 1.04999995f;
        }
        f = f * m;
    }
    if (1.0f > f)
        f = 1.0f;
    if (B(o, 0x71F3) != 0) {
        f = f * 0.5f;
        switch (S[27]) {
        case 0: f = 0.0f; break;
        case 1: f = f * 1.0f; break;
        case 2: f = f * 2.0f; break;
        case 3: f = f * 4.0f; break;
        }
    }
    if (ATK(o)[4] != 7 && B(BY(o), 0x71F3) != 0) {
        switch (S[28]) {
        case 0: f = f * 0.5f; break;
        case 1: f = f * 1.0f; break;
        case 2: f = f * 1.5f; break;
        case 3: f = f * 2.0f; break;
        }
    }
    if (f != 0.0f && 1.0f > f)
        f = 1.0f;
    if (H(o, 0x71D4) != H(o, 0x71D6) && B(BY(o), 0x720E) == 1) {
        v = H(o, 0x71D4);
        H(o, 0x71D8) = v;
        H(o, 0x71D6) = v;
    }
    n = (int)f;
    t = f / 240.0f;
    if (ATK(o)[4] != 0 || *(signed char *)0x0C7F4767 != 0) {
        if (H(o, 0x71D4) >= 0) {
            H(o, 0x71D4) = H(o, 0x71D4) - n;
            if (H(o, 0x71D4) < 0)
                H(o, 0x71D4) = -1;
            v = H(o, 0x71D4);
            H(o, 0x71D8) = v;
            H(o, 0x71D6) = v;
            if (H(o, 0x71D4) < 0) {
                if (ATK(o)[16] & 2) {
                    H(o, 0x71D6) = 0;
                    H(o, 0x71D8) = 0;
                    H(o, 0x71D4) = 0;
                } else {
                    H(o, 0x71D6) = -1;
                    H(o, 0x71D8) = -1;
                    H(o, 0x71D4) = -1;
                }
            }
        }
        if (B(o, 0x71F3) != 0) {
            H(o, 0x71F4) = H(o, 0x71F4) - (int)(t * 5519.99951f);
            if (H(o, 0x71F4) <= 0)
                H(o, 0x71F4) = 0;
        }
    } else {
        if (H(o, 0x71D4) >= 0) {
            H(o, 0x71D4) = H(o, 0x71D4) - n;
            if (H(o, 0x71D4) < 0) {
                if (ATK(o)[16] & 2) {
                    H(o, 0x71D6) = 0;
                    H(o, 0x71D8) = 0;
                    H(o, 0x71D4) = 0;
                } else {
                    H(o, 0x71D6) = -1;
                    H(o, 0x71D8) = -1;
                    H(o, 0x71D4) = -1;
                }
            }
        }
        H(o, 0x71D6) = H(o, 0x71D6) - (int)(f * 0.199999988f);
        if (H(o, 0x71D4) > H(o, 0x71D6))
            H(o, 0x71D6) = H(o, 0x71D4);
        if (B(o, 0x71F3) != 0) {
            H(o, 0x71F4) = H(o, 0x71F4) - (int)(t * 1800.0f);
            if (H(o, 0x71F4) <= 0)
                H(o, 0x71F4) = 0;
        }
    }
    B(o, 0x720F) = 40;
    if (B(o, 0x71F3) == 0 || S[27] != 0)
        B(o, 0x7214) = B(o, 0x7214) - (ATK(o)[7] & 63);
    if (B(o, 0x7214) < 0)
        B(o, 0x7214) = 0;
    B(o, 0x7215) = 180;
    if (*(signed char *)(0x0C7F302C + 75) == 0)
        *(signed char *)(0x0C7F302C + 75) = 2 - B(o, 3);
    if (H(o, 0x71D4) < 0)
        FUN_0c09b7a4(o, 9);
}
