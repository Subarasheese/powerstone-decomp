/* Results-screen trophy / stone display that follows its owner (+0x1C): on the first frame (state +8 == 0) it builds
   eight stone models (FUN_0c0623a6 from the table 0x0C664A60, positions 0x0C152970 raised by 650, scale 0x0C152C08),
   the pedestal (8) and the crown (9, at -485, 205, -300) and shows the stones the winner collected (game mode
   g_302c[69]: in story mode 1/2 the stones of the player record g_2df0 (120 bytes per player, count +86, colour row
   0x0C1525BF + 9 * colour), otherwise all eight, plus pedestal/crown by the stone rule s7f4751); state 1 lowers them
   by 30 per frame for 20 frames (only the uncollected ones in story mode); state 2 spins them and blinks the crown when
   all seven stones are collected; state 3 lowers them again; then the effect ends (FUN_0c059330). The display keeps
   its owner's model yaw at +0x30. */
void FUN_0c059330(char *e, int a);    /* the original leaves r5 = 9 (its loop bound) on the late call */
void FUN_0c0623a6(char *model, void *table, int kind);

typedef struct { float x, y, z; } VEC3;

#define G ((signed char *)0x0C7F302C)
#define MDL(e, i) (*(char **)((e) + 0x2E0 + (i) * 4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define REC ((signed char *)0x0C7F2DF0 + (unsigned char)((unsigned short)(G[69] + 255) * (unsigned short)120))

void FUN_0c0a8db2(char *e)
{
    struct { int i; int k; VEC3 scale; VEC3 base; } s;
    int i, j;
    float *t;
    signed char m;
    unsigned char *q;

    s.base = *(VEC3 *)0x0C152BFC;
    s.scale = *(VEC3 *)0x0C152C08;
    if (*(int *)(e + 28) == 0) {
        FUN_0c059330(e, 0);
        return;
    }
    switch (B(e, 8)) {
    case 0:
        B(e, 8) = B(e, 8) + 1;
        B(e, 9) = 0;
        B(e, 1) = 1;
        H(e, 6) = 15;
        B(e, 5) = 25;
        for (s.i = 0; s.i < 8; s.i++) {
            s.k = s.i * 4;
            FUN_0c0623a6(MDL(e, s.i), (void *)0x0C664A60, 0);
            H(MDL(e, s.i), 2) = 15;
            *(VEC3 *)(MDL(e, s.i) + 28) = s.scale;
            t = (float *)((char *)0x0C152970 + (unsigned char)(s.i * 12));
            F(MDL(e, s.i), 4) = t[0];
            F(MDL(e, s.i), 8) = t[1] + 650.0f;
            F(MDL(e, s.i), 12) = t[2];
        }
        FUN_0c0623a6(MDL(e, 8), (void *)0x0C664A60, 8);
        H(MDL(e, 8), 2) = 47;
        *(VEC3 *)(MDL(e, 8) + 28) = s.scale;
        F(MDL(e, 8), 8) = F(MDL(e, 8), 8) + 650.0f;
        FUN_0c0623a6(MDL(e, 9), (void *)0x0C664A60, 9);
        H(MDL(e, 9), 2) = 15;
        *(VEC3 *)(MDL(e, 9) + 28) = s.scale;
        F(MDL(e, 9), 4) = -485.0f;
        F(MDL(e, 9), 8) = 205.0f;
        F(MDL(e, 9), 12) = -300.0f;
        switch ((unsigned char)G[69]) {
        case 1:
        case 2:
            if (REC[86] >= 7)
                MDL(e, 9)[0] = 0;
            if (REC[86] >= 7)
                return;
            for (j = REC[86]; j < 7; j++)
                MDL(e, ((signed char *)0x0C1525BF + (signed char)(REC[85] * 9))[j])[0] = 1;
            return;
        case 0:
        case 3:
            for (i = 0; i < 8; i++)
                MDL(e, i)[0] = 1;
            m = *(signed char *)0x0C7F4751;
            if (m == 0)
                return;
            if (m == 1) {
                MDL(e, 8)[0] = 1;
                return;
            }
            if (m == 2 || m == 3) {
                MDL(e, 8)[0] = 1;
                MDL(e, 9)[0] = 1;
            }
            return;
        }
        return;
    case 1:
        switch (B(e, 9)) {
        case 0:
            B(e, 9) = B(e, 9) + 1;
            H(e, 0xEC) = 20;
        case 1:
            H(e, 0xEC) = H(e, 0xEC) - 1;
            if (H(e, 0xEC) <= 0) {
                B(e, 8) = B(e, 8) + 1;
                B(e, 9) = 0;
            }
            switch ((unsigned char)G[69]) {
            case 0:
            case 3:
                for (i = 0; i < 8; i++)
                    F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
                m = *(signed char *)0x0C7F4751;
                if (m == 1 || m == 2 || m == 3)
                    F(MDL(e, 8), 8) = F(MDL(e, 8), 8) - 30.0f;
                break;
            case 1:
            case 2:
                for (i = 0; i < 9; i++)
                    if (!(*(short *)(REC + 88) & (1 << i)))
                        F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
                break;
            }
            break;
        default:
            B(e, 8) = B(e, 8) + 1;
            B(e, 9) = 0;
            H(e, 0xEC) = 0;
            H(e, 0xEE) = 0;
            break;
        }
        I(e, 48) = I(MDL(*(char **)(e + 28), 0), 20) & 0xFFFF;
        return;
    case 2:
        q = (unsigned char *)0x0C7F2EE4;
        if (q[2] >= 3 && q[3] >= 3) {
            B(e, 8) = B(e, 8) + 1;
            B(e, 9) = 0;
        }
        for (i = 0; i < 8; i++) {
            I(MDL(e, i), 20) = I(MDL(e, i), 20) + 256;
            I(MDL(e, i), 20) = I(MDL(e, i), 20) & 0xFFFF;
        }
        I(e, 48) = I(MDL(*(char **)(e + 28), 0), 20) & 0xFFFF;
        if (q[2] < 3)
            return;
        if (q[3] != 2)
            return;
        if (q[4] < 1)
            return;
        H(e, 0xEE) = H(e, 0xEE) + 1;
        if (REC[86] < 7)
            return;
        if (H(e, 0xEE) < 30)
            MDL(e, 9)[0] = MDL(e, 9)[0] ^ 1;
        else
            MDL(e, 9)[0] = 1;
        return;
    case 3:
        if (B(e, 9) == 0) {
            H(e, 0xEC) = 20;
            H(e, 0xEE) = H(e, 0xEE) + 1;
        }
        H(e, 0xEC) = H(e, 0xEC) - 1;
        if (H(e, 0xEC) <= 0)
            B(e, 8) = B(e, 8) + 1;
        switch ((unsigned char)G[69]) {
        case 0:
        case 3:
            for (i = 0; i < 10; i++)
                F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
            break;
        case 1:
        case 2:
            for (i = 0; i < 9; i++)
                if (!(*(short *)(REC + 88) & (1 << i)))
                    F(MDL(e, i), 8) = F(MDL(e, i), 8) - 30.0f;
            break;
        }
        return;
    default:
        FUN_0c059330(e, 9);
        return;
    }
}
