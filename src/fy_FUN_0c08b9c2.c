/* Per-frame update of a paired object: runs the base steps on it and its partner (pointer at +28), then reacts to the action code (ushort at +0x719E): 16 and the groups 51/82/166 and 54/85/167 start the matching animation on the partner, and when the flag byte at +0x71AA is set it advances the step byte and raises both objects' flags. */
extern void FUN_0c09a910(char *);
extern void FUN_0c09da1c(char *);
extern void FUN_0c09a91a(char *);
extern void FUN_0c0a3796(int, int);
extern void FUN_0c0a3914(char *, int);
extern void FUN_0c08eba8(char *, int);
extern void FUN_0c08b96e(char *);
extern void FUN_0c09a808(char *, int, int);
extern void FUN_0c09a828(char *, int, int);

void FUN_0c08b9c2(char *o)
{
    char *q;

    FUN_0c09a910(o);
    FUN_0c09da1c(o);
    FUN_0c09a91a(*(char **)(o + 28));
    FUN_0c09da1c(*(char **)(o + 28));
    switch (*(unsigned short *)(o + 0x719E)) {
    case 16:
        q = *(char **)(o + 28);
        FUN_0c0a3796(q[3], 24);
        break;
    case 51:
    case 82:
    case 166:
        q = *(char **)(o + 28);
        FUN_0c0a3796(q[3], 20);
        FUN_0c0a3914(*(char **)(o + 28), 10);
        FUN_0c08eba8(o, 50);
        break;
    case 54:
    case 85:
    case 167:
        FUN_0c08b96e(o);
        break;
    default:
        break;
    }
    if (o[0x71AA] != 0) {
        o[10]++;
        FUN_0c09a808(o, 4, 4);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
        FUN_0c09a828(*(char **)(o + 28), 4, 51);
        q = *(char **)(o + 28);
        q[0x71A9] = 1;
        q[0x71A8] = 1;
    }
}
