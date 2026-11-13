/* Per-frame update of a thrown-item object: either finishes it (FUN_0c09c782 reports it done: cleanup FUN_0c0634b4 / FUN_0c0abe44, then FUN_0c0a2080) or, while flying, moves it along its heading, spawns two trail effects every fourth frame (FUN_0c0428ca at two table positions) and, when it stops being active, starts the bounce (state 2/243, timers 10/9). */
extern char FUN_0c09a910(char *);
extern char FUN_0c09c782(char *);
extern void FUN_0c0634b4(char *);
extern void FUN_0c0abe44(int, int, int);
extern void FUN_0c0a2080(char *);
extern void FUN_0c09da1c(char *);
extern void FUN_0c063468(char *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void thunk_FUN_0c062242(char *, char *);
extern void FUN_0c0428ca(int, float *);
extern void FUN_0c09a808(char *, int, int);
extern char g7e40c4[];
extern int g7f307c;

void FUN_0c065d66(char *o)
{
    float v[3];
    float c, sn;
    char *p;
    int k;

    if (FUN_0c09a910(o) != 0) {
        if (FUN_0c09c782(o) != 0) {
            FUN_0c0634b4(o);
            o[0x7236] = 0;
            *(int *)(o + 0x71CC) = 0;
        } else {
            FUN_0c0abe44(*(int *)(o + 0x71CC), 5, o[3]);
        }
        FUN_0c0a2080(o);
        return;
    }
    FUN_0c09da1c(o);
    if (*(unsigned short *)(o + 0x719E) == 18) {
        FUN_0c063468(o);
    }
    if (*(unsigned short *)(o + 0x719E) > 18 && *(short *)(o + 0xF0) != 0) {
        c = FUN_0c0df4d0(0x14000 - *(int *)(o + 48));
        *(float *)(o + 32) = *(float *)(o + 32) + *(float *)(o + 56) * c;
        sn = FUN_0c0dfa50(0x14000 - *(int *)(o + 48));
        *(float *)(o + 40) = *(float *)(o + 40) + *(float *)(o + 56) * sn;
        *(float *)(o + 56) = *(float *)(o + 56) - *(float *)(o + 72);
        *(short *)(o + 0xF0) = *(short *)(o + 0xF0) - 1;
        if ((g7f307c & 3) == 0) {
            p = g7e40c4 + (unsigned short)((unsigned short)o[3] * 0x72D0);
            thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 3168, (char *)v);
            v[1] = *(float *)(o + 724);
            FUN_0c0428ca(o[3], v);
            p = g7e40c4 + (unsigned short)((unsigned short)o[3] * 0x72D0);
            thunk_FUN_0c062242(p + 0x300 + (short)(p[0x71F1] * 3520) + 2640, (char *)v);
            v[1] = *(float *)(o + 724);
            FUN_0c0428ca(o[3], v);
        }
    }
    if (FUN_0c09c782(o) == 0) {
        k = o[0x71F1];
        if (k == 0 || *(short *)(o + 0x71F4) != 0) {
            if (*(unsigned short *)(o + 0x719E) > 38 && (*(int *)(o + 0x2E4) & 0x600) != 0) {
                FUN_0c09a808(o, 2, 243);
                *(short *)(o + 0xEC) = 10;
                *(short *)(o + 0xF0) = 9;
                *(float *)(o + 56) = -4.0f;
                *(float *)(o + 68) = 4.0f / (float)*(short *)(o + 0xF0);
                *(float *)(o + 72) = 0.0f;
                *(float *)(o + 60) = 0.0f;
            }
        }
    }
}
