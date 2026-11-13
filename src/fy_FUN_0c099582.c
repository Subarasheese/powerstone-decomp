/* Resets a fighter object for a new round: runs the setup calls, takes 10.0 off the float at +36, copies a 12-byte record from 0xC150AC8 into +56 and +68, zeroes the state bytes, sets the idle counters from +0x71D4 (or 0xF0 when the match flags say so) and picks the state byte at +0x7231 from the partner (pointer at +28). */
typedef struct { int a, b, c; } S12;
extern char s7f4750[];
extern char g_7f304b;
extern void FUN_0c0a2e26(char *, int, int);
extern void FUN_0c099a24(char *);
extern void FUN_0c099b60(char *);

void FUN_0c099582(char *o)
{
    S12 loc;
    int low, k, m;
    char *q;

    loc = *(S12 *)0xC150AC8;
    FUN_0c0a2e26(o, 0, 0);
    *(float *)(o + 36) = *(float *)(o + 36) - 10.0f;
    *(S12 *)(o + 56) = loc;
    *(S12 *)(o + 68) = loc;
    o[1] = 1;
    *(unsigned short *)(o + 0x71F4) = 0;
    o[0x71F3] = 0;
    o[0x71F2] = 0;
    o[0x71F1] = 0;
    FUN_0c099a24(o);
    FUN_0c099b60(o);
    o[0x7232] = 0;
    o[0x720E] = 0;
    o[0x7207] = 0;
    *(float *)(o + 0x274) = 1.0f;
    o[0x72B1] = 0;
    o[0x7204] = 0;
    o[0x7214] = ((char *)0xC338E12)[o[4]];
    o[0x7236] = 0;
    *(short *)(o + 0x71D8) = *(short *)(o + 0x71D4);
    *(short *)(o + 0x71D6) = *(short *)(o + 0x71D4);
    low = 1;
    if (s7f4750[5] != 0 && s7f4750[26] != 0) {
        if (g_7f304b != 0) {
            k = *(char *)0xC7F3053 & 0xF0;
            if (k == 0 || k == 16) {
                if (*(short *)(o + 0x71D4) >= 0) {
                    low = 0;
                }
            } else if (k == 32) {
                m = *(char *)0xC7F3053 & 15;
                if (m == 1 || m == 2) {
                    if (o[3] == m - 1) {
                        low = 0;
                    }
                } else {
                    low = 0;
                }
            } else {
                low = 0;
            }
        }
    }
    if (low) {
        *(unsigned short *)(o + 0x71D8) = 0xF0;
        *(unsigned short *)(o + 0x71D6) = 0xF0;
        *(unsigned short *)(o + 0x71D4) = 0xF0;
    }
    o[0x720F] = 0;
    if (o[4] != 10) {
        o[0x7230] = 1;
        if ((s7f4750[21] == 0 || s7f4750[5] == 0) && (*(char **)(o + 28))[4] != 10 && o[3] != 0) {
            o[0x7231] = 2;
        } else {
            o[0x7231] = 1;
        }
    } else {
        o[0x7230] = 0;
        o[0x7231] = 0;
    }
}
