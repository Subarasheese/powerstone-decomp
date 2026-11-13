/* Starts a move/state of an actor (state byte a5): sets timers, and either a jump arc or a launch vector from tables, then calls FUN_0c09a808. */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c09db78(char *);
extern void FUN_0c09a808(char *, int, int);

void FUN_0c09f6a8(char *o, int a5)
{
    signed char c;
    int t2, r10, r11, v, b;
    char *row;

    c = (signed char)a5;
    o[0x71BA] = 7;
    o[0x71BC] = 0;
    o[0x7236] = 0;
    *(int *)(o + 0x30) = FUN_0c09db78(o);
    t2 = *(signed char *)(0xC1510AD + (c - 1));
    o[0x106] = 0xB;
    *(short *)(o + 0xF2) = 0;
    if (c == 10 || c == 11) {
        *(short *)(o + 0xEC) = 20;
        *(int *)(o + 0x7248) = FUN_0c09db78(o);
        if (c == 10) {
            *(int *)(o + 0x7248) = (unsigned short)(0xC000 + *(short *)(o + 0x7248));
            *(int *)(o + 0x7244) = 0x4000;
        } else {
            *(int *)(o + 0x7248) = (unsigned short)(*(short *)(o + 0x7248) + 0xC000);
            *(int *)(o + 0x7244) = 0xC000;
        }
        *(float *)(o + 0x7254) = FUN_0c0dfa50(0x16C) * *(float *)0xC494D1C * 2.0f;
        o[10] = 1;
        v = 0x29;
    } else {
        b = *(signed char *)(o + 0x71F1);
        row = (char *)0xC339540 + o[4] * 152 + (unsigned char)((unsigned short)b * 76);
        *(short *)(o + 0xEC) = *(short *)(row + 72);
        r10 = (unsigned short)((t2 << 13) + *(short *)0xC7F31E0);
        r11 = 0x14000 - r10;
        *(float *)(o + 0x38) = FUN_0c0df4d0(r11) * *(float *)(row + 64);
        *(float *)(o + 0x40) = FUN_0c0dfa50(r11) * *(float *)(row + 64);
        *(float *)(o + 0x44) = FUN_0c0df4d0(r11) * *(float *)(row + 68);
        *(float *)(o + 0x4C) = FUN_0c0dfa50(r11) * *(float *)(row + 68);
        *(float *)(o + 0x48) = 0.0f;
        *(float *)(o + 0x3C) = 0.0f;
        v = *(signed char *)(0xC1510A5 + (signed char)(((unsigned short)(*(int *)(o + 0x30) - r10 + 4096)) / 8192));
    }
    FUN_0c09a808(o, 0, v);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
}
