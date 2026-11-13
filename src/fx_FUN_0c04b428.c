/* Effect actor update: copies the owner's point (+32, +44), then steps a small state machine (state at +8, frame counter at +0xEC) that eases the float triple at +80 (and +96) by fixed amounts; mode +4 picks one of two sequences; unfinished states hand over to FUN_0c059330. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0555dc(void);
extern int FUN_0c059330(void *);

#define F(o) (*(float *)(e + (o)))
#define ST (*(signed char *)(e + 8))
#define CNT (*(short *)(e + 0xEC))
#define STEP(n) do { CNT = CNT + 1; if (CNT >= (n)) { ST = ST + 1; CNT = 0; } } while (0)

void FUN_0c04b428(char *e)
{
    char *o;
    float k = 0.099999994f;

    *(S12 *)(e + 32) = *(S12 *)(*(char **)(e + 28) + 32);
    *(S12 *)(e + 44) = *(S12 *)(*(char **)(e + 28) + 44);
    o = *(char **)(e + 0x2E0);
    if (e[4] == 0) {
        *(int *)(o + 20) += 0x1111;
        if (FUN_0c0555dc()) {
            ST = 3;
        }
        switch (ST) {
        case 0:
            ST = ST + 1;
            return;
        case 1:
            STEP(30);
            F(80) += 0.0199999996f;
            F(88) += 0.0199999996f;
            return;
        case 2:
            STEP(15);
            F(96) -= 0.0666666627f;
            F(100) -= 0.0666666627f;
            F(104) -= 0.0666666627f;
            F(80) += k;
            F(88) += k;
            return;
        default:
            FUN_0c059330(e);
            return;
        }
    } else if (e[4] == 1) {
        if (FUN_0c0555dc()) {
            ST = 6;
        }
        switch (ST) {
        case 0:
            ST = ST + 1;
            F(80) = 0.0f;
            F(84) = 0.0f;
            F(88) = 0.0f;
            return;
        case 1:
            CNT = CNT + 1;
            if (CNT >= 19) {
                ST = ST + 1;
                CNT = 0;
            }
            return;
        case 2:
            STEP(7);
            F(80) += 0.139999986f;
            F(84) += 0.289999992f;
            F(88) += 0.139999986f;
            return;
        case 3:
            STEP(6);
            F(80) += 0.049999997f;
            F(84) -= 0.169999987f;
            F(88) += 0.049999997f;
            return;
        case 4:
            STEP(6);
            F(80) += 0.0299999993f;
            F(84) -= 0.129999995f;
            F(88) += 0.0299999993f;
            return;
        case 5:
            STEP(2);
            F(80) -= 0.75f;
            F(84) -= k;
            F(88) -= 0.75f;
            return;
        default:
            FUN_0c059330(e);
            return;
        }
    }
}
