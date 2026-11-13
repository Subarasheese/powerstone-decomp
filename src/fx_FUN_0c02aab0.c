/* Scripted title/attract sequence step on the state block at 0xC7F2EE0 (stage byte +7, step byte +8, timers +18..+24): stage 0/1 intro with random blips and countdown, stage 2 plays a timed list of 48-byte cues, stage 3 runs a list of 24-byte timed actions, any other stage counts down and starts the next screen via FUN_0c031496. */
extern void FUN_0c02a5e4(void);
extern void FUN_0c02a6c4(void);
extern void FUN_0c02aa9c(int);
extern void FUN_0c02a1f4(int, int);
extern void FUN_0c0a3f50(int);
extern void FUN_0c0a3458(void);
extern void FUN_0c0a3664(void);
extern void FUN_0c0a361c(void);
extern void FUN_0c0a3640(void);
extern void FUN_0c028f48(void *);
extern void FUN_0c028a4c(int, int, float);
extern void FUN_0c0574d2(int);
extern void FUN_0c029546(int, int);
extern void FUN_0c029abc(int, int);
extern void FUN_0c029ec4(void);
extern void FUN_0c031496(int, int, int, int);
extern float FUN_0c0df940(void);

#define G ((char *)0xC7F2EE0)
#define S(o) (*(short *)(G + (o)))
#define ENT ((char *)0xC147988 + (short)(24 * S(20)))
#define EI(o) (*(int *)(ENT + (o)))
#define TBL ((char *)0xC1484C8)

void FUN_0c02aab0(void)
{
    float k, k30;
    int n, t, i;
    unsigned char b40;

    if (*(int *)0xC386830 != 0) {
        *(int *)0xC386834 = 0;
        k = 0.8333333134651184f;
    } else {
        k = 1.0f;
    }
    k30 = k * 30.0f;
    switch ((unsigned char)G[7]) {
    case 0:
        G[7] = G[7] + 1;
        G[10] = 0;
        G[9] = 0;
        G[8] = 0;
        S(24) = 0;
        S(22) = 0;
        S(20) = 0;
        S(18) = 0;
        FUN_0c02aa9c(0);
        /* fall through */
    case 1:
        if ((unsigned int)(FUN_0c0df940() * 255.0f) % 5 == 0) {
            FUN_0c02a5e4();
        }
        switch ((unsigned char)G[8]) {
        case 0:
            S(18) = 1;
            S(20) = 5;
            FUN_0c02a1f4(0, 0);
            G[8] = G[8] + 1;
            FUN_0c0a3f50(4);
            /* fall through */
        case 1:
            S(18) = S(18) - 1;
            if (S(18) == 3 && S(20) == 1) {
                FUN_0c0a3458();
            }
            if (S(18) != 0) {
                return;
            }
            S(18) = (int)(k * 60.0f);
            S(20) = S(20) - 1;
            if (S(20) > 1) {
                FUN_0c02a1f4(1, S(20) - 1);
                FUN_0c02a1f4(2, 0);
                FUN_0c0a3f50(6);
                return;
            }
            if (S(20) == 1) {
                FUN_0c0a3f50(5);
                FUN_0c0a3f50(7);
                return;
            }
            if (S(20) != 0) {
                return;
            }
            G[7] = G[7] + 1;
            G[8] = 0;
            S(18) = 0;
            S(20) = 0;
            S(22) = 0;
            S(24) = 0;
            if (G[40] != 0) {
                FUN_0c0a3640();
                return;
            }
            switch (*(int *)0xC321070) {
            case 0:
                FUN_0c0a3664();
                break;
            case 1:
                FUN_0c0a361c();
                break;
            case 2:
                FUN_0c0a3640();
                break;
            }
            *(int *)0xC321070 = (*(int *)0xC321070 + 1) % 3;
            return;
        default:
            return;
        }
    case 2:
        FUN_0c02a5e4();
        FUN_0c02a5e4();
        FUN_0c02a5e4();
        FUN_0c02a6c4();
        S(18) = S(18) - 1;
        while (S(18) <= 0) {
            if (S(22) == 1) {
                G[7] = G[7] + 1;
                G[8] = 0;
                S(18) = 0;
                S(20) = 0;
                return;
            }
            if (*(int *)(TBL + (short)(48 * S(20))) == -1) {
                S(22) = 1;
                S(18) = 0;
            } else {
                FUN_0c028f48(TBL + (short)(48 * S(20)));
                S(18) = (int)((float)(S(24) + *(int *)(TBL + (short)(48 * S(20)))) * k);
                S(24) = (int)((float)*(int *)(TBL + (short)(48 * S(20))) - (float)S(18) / k);
                S(20) = S(20) + 1;
            }
        }
        return;
    case 3:
        n = (int)k30;
        t = (int)((float)EI(0) * k);
        while (!(t > S(18))) {
            b40 = G[40];
            if (!(EI(4) == 1 && b40 != 0)) {
                switch (EI(8)) {
                case -1:
                    S(18) = n;
                    G[7] = G[7] + 1;
                    G[8] = 0;
                    return;
                case 0:
                    if (EI(4) == 2) {
                        if (b40 == 1) {
                            FUN_0c028a4c(EI(12), EI(16), *(float *)(ENT + 20));
                        }
                    } else {
                        FUN_0c028a4c(EI(12), EI(16), *(float *)(ENT + 20));
                    }
                    break;
                case 1:
                    FUN_0c02aa9c(EI(12));
                    break;
                case 2:
                    FUN_0c0574d2(*(signed char *)(0xC148DC8 + EI(12)));
                    break;
                case 3:
                    FUN_0c029546(EI(12), EI(16));
                    break;
                case 4:
                    FUN_0c029abc(EI(12), EI(16));
                    break;
                case 5:
                    FUN_0c029ec4();
                    break;
                }
            }
            S(20) = S(20) + 1;
            t = (int)((float)EI(0) * k);
        }
        S(18) = S(18) + 1;
        return;
    default:
        S(18) = S(18) - 1;
        if (S(18) == 0) {
            G[5] = G[5] + 1;
            G[6] = 0;
            G[7] = 0;
            FUN_0c031496(-1, 0, 0, 60);
            return;
        }
        if (S(18) == (int)k30 - 1) {
            FUN_0c031496(-1, 0, 1, (int)k30 - 1);
        }
        return;
    }
}
