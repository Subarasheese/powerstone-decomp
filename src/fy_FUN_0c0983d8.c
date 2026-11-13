/* Turn-and-slide step of a thrown fighter (partner pointer at +28, which must be in state 3): steps its turn table (record of 3 shorts per step at 0xC338E26), slides the pair along the heading at 100.0 per frame (cos / sin), and when the timer at +0xEC runs out snaps the heading to the nearest of four table angles, finishes the move (FUN_0c0a2e26, FUN_0c09a808) and advances the step byte at +11. */
typedef struct { int v[4]; } T16;
extern char FUN_0c09a910(char *);
extern void FUN_0c02f328(int);
extern void FUN_0c09c7be(char *, char *);
extern void FUN_0c09a808(char *, int, int);
extern void FUN_0c0a2e26(char *, int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c0983d8(char *o)
{
    T16 tb;
    char *q;
    float *pf;
    float c;
    int i, best, bestv, d, t, idx;
    short *rec;

    tb = *(T16 *)0xC150A84;
    if ((*(char **)(o + 28))[9] != 3) {
        FUN_0c09a808(o, 1, 83);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        o[11] = 3;
        return;
    }
    FUN_0c09a910(o);
    if (*(short *)(o + 0xF0) != 0) {
        *(short *)(o + 0xF0) = *(short *)(o + 0xF0) - 1;
    }
    FUN_0c02f328(o[3]);
    FUN_0c09c7be(o, o + 0x723E);
    if (!((unsigned char)o[0x723E] > 0 && *(short *)(o + 0xF0) != 0) && *(short *)(o + 0xEE) < 5) {
        *(short *)(o + 0xEE) = *(short *)(o + 0xEE) + 1;
        idx = *(short *)(o + 0xEE);
        rec = (short *)0xC338E26;
        o[0x723E] = rec[idx * 3];
        idx = *(short *)(o + 0xEE);
        *(int *)(o + 0x7248) = 0x10000 / (unsigned short)rec[idx * 3 + 1];
        idx = *(short *)(o + 0xEE);
        *(short *)(o + 0xF0) = rec[idx * 3 + 2];
    }
    q = *(char **)(o + 28);
    FUN_0c02f328(q[3]);
    q = *(char **)(o + 28);
    FUN_0c09c7be(q, q + 0x723E);
    if ((*(char **)(o + 28))[0x723E] == 0) {
        FUN_0c0a2e26(*(char **)(o + 28), 19, 0);
        return;
    }
    t = (unsigned short)(*(int *)(o + 48) - *(short *)(o + 0x7248));
    *(int *)(o + 48) = t;
    *(int *)(*(char **)(o + 28) + 48) = t;
    *(int *)(*(char **)(o + 28) + 48) = *(int *)(o + 48) + 0x8000;
    *(int *)(o + 48) = *(int *)(o + 48) & 0xFFFF;
    pf = (float *)(*(char **)(o + 28) + 32);
    c = FUN_0c0df4d0(0x14000 - *(int *)(o + 48));
    *pf = *(float *)(o + 32) + 100.0f * c;
    pf = (float *)(*(char **)(o + 28) + 40);
    c = FUN_0c0dfa50(0x14000 - *(int *)(o + 48));
    *pf = *(float *)(o + 40) + 100.0f * c;
    *(short *)(o + 0xEC) = *(short *)(o + 0xEC) - 1;
    if (*(short *)(o + 0xEC) != 0 && (*(int *)(o + 0x2DC) & 0x600) != 0) {
        return;
    }
    best = 0;
    bestv = 0x10000;
    for (i = 0; i <= 3; i++) {
        d = *(int *)(o + 48) - tb.v[i];
        if ((d & 0x8000) != 0) {
            d = -d;
        }
        d = (unsigned short)d;
        if (d < bestv) {
            best = i;
            bestv = d;
        }
    }
    *(int *)(o + 48) = tb.v[best];
    *(int *)(*(char **)(o + 28) + 48) = tb.v[best];
    pf = (float *)(*(char **)(o + 28) + 32);
    c = FUN_0c0df4d0(0x14000 - *(int *)(o + 48));
    *pf = *(float *)(o + 32) + 100.0f * c;
    pf = (float *)(*(char **)(o + 28) + 40);
    c = FUN_0c0dfa50(0x14000 - *(int *)(o + 48));
    *pf = *(float *)(o + 40) + 100.0f * c;
    FUN_0c0a2e26(*(char **)(o + 28), 20, *(short *)(o + 0xEE));
    o[0x7241] = 20;
    FUN_0c09a808(o, 1, 83);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    o[11] = o[11] + 1;
}
