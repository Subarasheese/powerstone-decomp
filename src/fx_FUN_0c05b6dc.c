/* Per-frame update of a pose-state actor: runs the check, then dispatches on the mode byte at +781 (0: warm-up/wobble phases, 4/5/16: other handlers, 13: attach to the owner and run the start/stop step, else FUN_0c059330). */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0555dc(void);
extern int FUN_0c059330(void *);
extern int FUN_0c05a80c(void *);
extern int FUN_0c05ae26(void *);
extern int FUN_0c05b538(void *);
extern int FUN_0c05b090(void *);
extern int FUN_0c05b9a4(void *);
extern int FUN_0c05b9e4(void *);
extern void FUN_0c0abe44(void *, int, int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c0df920(void);
extern void FUN_0c047df4(void *);
extern void FUN_0c0e21b0(void *, void *);

#define ST (*(signed char *)(e + 8))
#define CNT (*(short *)(e + 0xEC))
#define TIMER (*(short *)(e + 0xEE))
#define MODE (*(signed char *)(e + 781))

void FUN_0c05b6dc(char *e)
{
    char *o;
    char *p;
    int a, b;

    if (FUN_0c0555dc() != 0) {
        FUN_0c059330(e);
        return;
    }
    if (MODE == 5 || MODE == 13) {
        FUN_0c05a80c(e);
        *(short *)(e + 242) = *(short *)(e + 242) - 1;
        if (*(short *)(e + 242) < 0) {
            *(short *)(e + 242) = 0;
        }
    }
    if (MODE == 16 || MODE == 0) {
        *(char *)(0xC7F2974 + e[13]) = 1;
    }
    switch (MODE) {
    case 0:
        if (ST == 0) {
            ST = ST + 1;
            TIMER = 0;
            *(int *)(e + 44) = 0;
            *(int *)(e + 52) = 0;
            *(S12 *)(e + 56) = *(S12 *)0xC336268;
            *(S12 *)(e + 68) = *(S12 *)0xC336280;
            e[261] = 1;
            e[263] = 0;
        } else if (ST == 1) {
            CNT = CNT + 1;
            o = *(char **)(e + 736);
            *(float *)(o + 8) = 50.0f + 10.0f * FUN_0c0dfa50((int)((float)(CNT * 6) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
            *(int *)(*(char **)(e + 736) + 20) += 182;
            a = CNT % 30;
            b = FUN_0c0df920() % 30;
            if (a == b) {
                FUN_0c047df4(e + 32);
            }
            if (*(float *)(e + 628) > 0.0f) {
                *(float *)(e + 60) = 0.0f;
            }
            if (e[784] == 0 && e[785] == 0) {
                TIMER = TIMER + 1;
                if (TIMER >= 300) {
                    if (TIMER > 360) {
                        *(char *)(0xC7F2664 + 789) = e[13];
                        *(char *)(0xC7F2664 + 790) = 1;
                        FUN_0c0abe44(e, 3, 2);
                        return;
                    }
                    e[1] = CNT % 2;
                }
            } else {
                e[1] = 1;
                TIMER = 0;
            }
            FUN_0c0e21b0(e + 32, e + 56);
            FUN_0c0e21b0(e + 56, e + 68);
        }
        break;
    case 4:
        FUN_0c05b538(e);
        break;
    case 5:
        FUN_0c05b090(e);
        break;
    case 13:
        p = *(char **)(e + 28);
        if (p[29238] == 0) {
            FUN_0c0abe44(e, 4, e[3]);
            return;
        }
        switch (ST) {
        case 0:
            FUN_0c05b9a4(e);
            break;
        case 1:
            FUN_0c05b9e4(e);
            break;
        }
        *(char **)(p + 29132) = e;
        break;
    case 16:
        FUN_0c05ae26(e);
        break;
    default:
        FUN_0c059330(e);
        break;
    }
}
