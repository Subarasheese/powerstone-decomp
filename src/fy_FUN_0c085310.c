/* Two consecutive routines that the original runs as one (the first falls through into the second): (1) start an object's phase: bump byte 11, zero six floats at +56..+76, remember +48 at +0x7248, clear flags, call FUN_0c09a808(o,1,102), set flag bytes and a 15-frame timer at +236, and store a 16-bit value from FUN_0c09ddfe/FUN_0c09dbce at +0x7248; (2) per-frame: call FUN_0c09a910 and FUN_0c09da1c, then either (flag 0x71AA set) switch phase: bump byte 11, reload the timer from the short table at 0xC337B9C, call FUN_0c09a808(o,1,103) and tail-call FUN_0c09c4c0(o,0); or ease the value at +48 toward the one at +0x7248 by (difference / remaining frames). */
extern int FUN_0c09a808(unsigned char *, int, int);
extern int FUN_0c09ddfe(unsigned char *);
extern int FUN_0c09dbce(unsigned char *);
extern int FUN_0c09a910(unsigned char *);
extern int FUN_0c09da1c(unsigned char *);
extern int FUN_0c09c4c0(unsigned char *, int);

void FUN_0c085310(unsigned char *o)
{
    int r;
    short c;
    short d;

    o[11]++;
    *(float *)(o + 64) = 0;
    *(float *)(o + 60) = 0;
    *(float *)(o + 56) = 0;
    *(float *)(o + 76) = 0;
    *(float *)(o + 72) = 0;
    *(float *)(o + 68) = 0;
    *(int *)(o + 0x7248) = *(int *)(o + 48);
    o[0x710B] = 0;
    o[0x710C] = 0;
    o[0x71BC] = 0;
    FUN_0c09a808(o, 1, 102);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    *(short *)(o + 236) = 15;
    if (*(int *)(o + 732) & 0xF0)
        r = FUN_0c09ddfe(o) + *(short *)0xC7F31E0;
    else
        r = FUN_0c09dbce(o);
    *(int *)(o + 0x7248) = (unsigned short)r;

    FUN_0c09a910(o);
    FUN_0c09da1c(o);
    if (o[0x71AA]) {
        o[11]++;
        *(short *)(o + 236) = ((short *)0xC337B9C)[(signed char)o[0x721D]];
        FUN_0c09a808(o, 1, 103);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        FUN_0c09c4c0(o, 0);
        return;
    }
    c = *(short *)(o + 236) - 1;
    *(short *)(o + 236) = c;
    if (c == 0)
        *(short *)(o + 236) = 1;
    d = *(short *)(o + 0x7248) - *(int *)(o + 48);
    *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + d / *(short *)(o + 236));
}
