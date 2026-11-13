/* Steps an object through a keyframe script (record pointer at +476, 52-byte records): by the phase byte +5, phase 0 starts the script (stores a5 as the record pointer, loads the frame count from its first short) and phases 0/1 run the keyframe interpolator FUN_0c0d9288, count the frames down at +16, and when a flagged record asks for it (bits 0x100 / 0x200 of its short at +2) shift the history of the position vectors at +176/+224 and the five value slots at +272..+336; at the end of a record it advances the pointer and reacts to the markers -3 (phase += 2), -2 (jump to the record a5 + 52 * index) and -1 (phase += 1, return 0). Phase 2 calls FUN_0c0d8f10(0,0,64) and returns 2, phase 3 returns 3. */
struct V12 { int x, y, z; };
extern int FUN_0c0d9288(unsigned char *, unsigned char *);
extern int FUN_0c0dc3d4(unsigned char *, int);
extern int FUN_0c0d8f10(int, int, int);

static void shift(unsigned char *o, int d, int s)
{
    *(int *)(o + 272 + d) = *(int *)(o + 272 + s);
    *(int *)(o + 288 + d) = *(int *)(o + 288 + s);
    *(float *)(o + 304 + d) = *(float *)(o + 304 + s);
    *(int *)(o + 320 + d) = *(int *)(o + 320 + s);
    *(int *)(o + 336 + d) = *(int *)(o + 336 + s);
}

int FUN_0c0da1f6(unsigned char *o, unsigned char *a5)
{
    int r13 = 0;
    unsigned char *p;
    int v;

    switch ((signed char)o[5]) {
    case 0:
        o[5]++;
        o[6] = 0;
        *(unsigned char **)(o + 476) = a5;
        *(int *)(o + 16) = **(short **)(o + 476);
        goto run;
    case 1:
    run:
        FUN_0c0d9288(o, *(unsigned char **)(o + 476));
        *(int *)(o + 16) = *(int *)(o + 16) - 1;
        if (*(int *)(o + 16) != 0) {
            if ((*(short *)(*(unsigned char **)(o + 476) + 4) & 0xF00) == 0)
                return r13;
            if (FUN_0c0dc3d4(o, 5) == 0)
                return r13;
        }
        if (*(short *)(*(unsigned char **)(o + 476) + 2) & 0x100) {
            *(struct V12 *)(o + 176 + 36) = *(struct V12 *)(o + 176 + 12);
            *(struct V12 *)(o + 224 + 36) = *(struct V12 *)(o + 224 + 12);
            shift(o, 12, 4);
        } else if (*(short *)(*(unsigned char **)(o + 476) + 2) & 0x200) {
            *(struct V12 *)(o + 176 + 12) = *(struct V12 *)(o + 176 + 36);
            *(struct V12 *)(o + 224 + 12) = *(struct V12 *)(o + 224 + 36);
            shift(o, 4, 12);
        }
        *(int *)(o + 476) = *(int *)(o + 476) + 52;
        o[6] = 0;
        v = **(short **)(o + 476);
        if (v == -3) {
            o[5] += 2;
        } else if (v == -2) {
            *(int *)(o + 476) = (int)a5 + 52 * *(short *)(*(unsigned char **)(o + 476) + 2);
            r13 = 1;
        } else if (v == -1) {
            o[5]++;
            return 0;
        }
        p = *(unsigned char **)(o + 476);
        *(int *)(o + 16) = *(short *)p;
        *(struct V12 *)(o + 176 + 24) = *(struct V12 *)(o + 176 + 12);
        *(struct V12 *)(o + 224 + 24) = *(struct V12 *)(o + 224 + 12);
        shift(o, 8, 4);
        return r13;
    case 2:
        FUN_0c0d8f10(0, 0, 64);
        return 2;
    case 3:
        return 3;
    }
    return r13;
}
