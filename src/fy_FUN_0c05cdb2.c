/* Three-phase state machine of an object, selected by byte 8: phase 0 waits (120 frames, or until byte 13 is -1) and advances; phase 1 counts frames, runs the sub-steps FUN_0c05ceea / FUN_0c05cff8 by byte 9, moves the 32-byte-offset vectors with FUN_0c0e21b0 and ends by calling FUN_0c0abe44 when the 1080-frame limit is reached; phase 2 jumps to FUN_0c05d0d8. */
extern int FUN_0c05d1ea(unsigned char *);
extern void FUN_0c05ceea(unsigned char *);
extern void FUN_0c05cff8(unsigned char *);
extern void FUN_0c05d0d8(unsigned char *);
extern void FUN_0c0cc7fc(int);
extern void FUN_0c0abe44(unsigned char *, int, int);
extern void FUN_0c0e21b0(unsigned char *, unsigned char *);

void FUN_0c05cdb2(unsigned char *o)
{
    switch ((signed char)o[8]) {
    case 0:
        if ((signed char)o[13] != -1) {
            *(short *)(o + 236) = *(short *)(o + 236) + 1;
            if (*(short *)(o + 236) <= 120)
                return;
        }
        o[8]++;
        *(short *)(o + 236) = 0;
        *(short *)(o + 238) = 0;
        o[1] = 1;
        return;
    case 1:
        *(short *)(o + 236) = *(short *)(o + 236) + 1;
        if ((signed char)o[13] == -1) {
            if (*(short *)(o + 236) >= 40)
                o[12] = 1;
        } else {
            if (*(short *)(o + 236) >= 10)
                o[12] = 1;
        }
        if ((signed char)FUN_0c05d1ea(o)) {
            **(unsigned char **)(o + 736) = 1;
            *(short *)(o + 238) = 0;
        } else {
            *(short *)(o + 238) = *(short *)(o + 238) + 1;
            if (*(short *)(o + 238) >= 900) {
                *(short *)(o + 238) = *(short *)(o + 238) + 1;
                if (*(short *)(o + 238) >= 1080) {
                    o[13] = -1;
                    FUN_0c0cc7fc((signed char)o[14]);
                    o[0x107] = 1;
                    o[1] = 0;
                    FUN_0c0abe44(o, 3, 2);
                    return;
                }
                **(unsigned char **)(o + 736) = *(short *)(o + 236) % 2;
            }
        }
        switch ((signed char)o[9]) {
        case 0:
            FUN_0c05ceea(o);
            break;
        case 1:
            FUN_0c05cff8(o);
            break;
        }
        FUN_0c0e21b0(o + 32, o + 56);
        FUN_0c0e21b0(o + 56, o + 68);
        return;
    case 2:
        FUN_0c05d0d8(o);
        return;
    }
}
