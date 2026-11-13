/* Object init with a facing mode (0-3): reset effect state, start the matching animation, flip the heading for modes 2/3, pick a random start frame. */
extern short g_338fb8[];
int FUN_0c099b60(char *);
int FUN_0c09a808(char *, int, int);
float FUN_0c0df940(void);

#define F(o) (*(float *)(p + (o)))

void FUN_0c0a0dd0(char *p, int mode)
{
    unsigned int r;
    signed char m;

    m = mode;
    p[0x71BA] = 15;
    p[0x71BC] = 3;
    F(76) = 0.0f;
    F(68) = 0.0f;
    F(60) = 0.0f;
    F(64) = 0.0f;
    F(56) = 0.0f;
    F(72) = *(float *)(p + 0x71E4);
    p[0x106] = 1;
    FUN_0c099b60(p);
    p[0x710A] = 0;
    p[0x710B] = 0;
    p[0x710C] = 0;
    switch (m) {
    case 1:
        p[0x7205] = 1;
        FUN_0c09a808(p, 2, 0x91);
        break;
    case 2:
        p[0x7205] = 0;
        FUN_0c09a808(p, 2, 0x90);
        *(unsigned int *)(p + 0x30) = (unsigned short)(*(int *)(p + 0x30) + 0x8000);
        break;
    case 3:
        p[0x7205] = 1;
        FUN_0c09a808(p, 2, 0x91);
        *(unsigned int *)(p + 0x30) = (unsigned short)(*(int *)(p + 0x30) + 0x8000);
        break;
    default:
        p[0x7205] = 0;
        FUN_0c09a808(p, 2, 0x90);
        break;
    }
    p[0x71A9] = 1;
    p[0x71A8] = 1;
    p[0x7225] = 0;
    r = (unsigned int)(FUN_0c0df940() * 255.0f);
    *(short *)(p + 0xEC) = g_338fb8[r % 32];
}
