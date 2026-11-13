/* Script-stream state machine (variant of FUN_0c051aa0): reads a 16-bit word and compares it with a target angle band to set flag bits. */
int FUN_0c04cdf2(void);
int FUN_0c04fed8(int);
int FUN_0c0500ca(int);
int FUN_0c050180(int);
float FUN_0c0df940(void);

struct Ent {
    unsigned char st;       /* 0x00 */
    char p1[0xB];
    int word;               /* 0x0C */
    char p10[0x1C - 0x10];
    unsigned short cnt;     /* 0x1C */
    char p1e[0x2A - 0x1E];
    unsigned short flip;    /* 0x2A */
};

#define ENT ((struct Ent *)(0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)))

void FUN_0c051500(int a4)
{
    short op;
    int x;
    int t, A, B;

    op = *(short *)*(int *)0xC3673E8;
    *(int *)0xC3673E8 = *(int *)0xC3673E8 + 2;
    x = (short)FUN_0c0500ca(a4);
    switch (ENT->st) {
    case 0:
        *(unsigned short *)0xC3673EC = 0;
        ENT->flip = (unsigned)(FUN_0c0df940() * 255.0f) % 2;
        ENT->cnt = 1;
        if (*(signed char *)(a4 + 0x71BA) == 31) {
            ENT->st = 4;
        } else {
            ENT->st = ENT->st + 1;
        }
        break;
    case 1:
        *(unsigned short *)0xC3673EC = 0;
        ENT->cnt = ENT->cnt - 1;
        if (ENT->cnt == 0) {
            ENT->st = ENT->st + 1;
        }
        break;
    case 2:
        *(unsigned short *)0xC3673EC = 0;
        t = FUN_0c04fed8(a4);
        if (ENT->flip != 0) {
            A = FUN_0c050180(0x6000 + t);
            B = FUN_0c050180(0x2000 + t);
        } else {
            A = FUN_0c050180(0xA000 + t);
            B = FUN_0c050180(0xE000 + t);
        }
        if (!(op >= x - 10)) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)B;
        }
        if (op > x + 10) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)A;
        }
        ENT->st = ENT->st + 1;
        break;
    case 3:
        *(unsigned short *)0xC3673EC = 0;
        ENT->st = ENT->st + 1;
        break;
    case 4:
        *(unsigned short *)0xC3673EC = 0;
        t = FUN_0c04fed8(a4);
        if (ENT->flip != 0) {
            A = FUN_0c050180(0x6000 + t);
            B = FUN_0c050180(0x2000 + t);
        } else {
            A = FUN_0c050180(0xA000 + t);
            B = FUN_0c050180(0xE000 + t);
        }
        if (!(op >= x - 10)) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)B;
        } else if (op > x + 10) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)A;
        } else {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)FUN_0c050180(t);
            ENT->st = ENT->st + 1;
        }
        break;
    case 5:
        *(unsigned short *)0xC3673EC = 1;
        FUN_0c04cdf2();
        ENT->word = *(int *)0xC3673E8;
        break;
    }
}
