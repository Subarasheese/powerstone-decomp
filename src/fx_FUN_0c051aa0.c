/* Reads one 16-bit opcode word from the script stream at 0xC3673E8 and runs the current entry's (0xC366F40 table, 0x254 each) state machine for it. */
int FUN_0c04cdf2(void);
int FUN_0c04fed8(int);
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

void FUN_0c051aa0(int a4)
{
    short op;
    short lo;
    int t, hi;

    op = *(short *)*(int *)0xC3673E8;
    *(int *)0xC3673E8 = *(int *)0xC3673E8 + 2;
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
        lo = FUN_0c050180(0x4000 + t);
        hi = FUN_0c050180(0xC000 + t);
        if (ENT->flip != 0) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)lo;
        } else {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)hi;
        }
        ENT->st = ENT->st + 1;
        break;
    case 3:
        *(unsigned short *)0xC3673EC = 0;
        ENT->cnt = op;
        ENT->st = ENT->st + 1;
        break;
    case 4:
        *(unsigned short *)0xC3673EC = 0;
        t = FUN_0c04fed8(a4);
        lo = FUN_0c050180(0x4000 + t);
        hi = FUN_0c050180(0xC000 + t);
        ENT->cnt = ENT->cnt - 1;
        if (ENT->cnt == 0) {
            ENT->st = ENT->st + 1;
        }
        if (ENT->flip != 0) {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)lo;
        } else {
            *(unsigned *)(a4 + 0x2DC) = *(unsigned *)(a4 + 0x2DC) | (unsigned short)hi;
        }
        break;
    case 5:
        *(unsigned short *)0xC3673EC = 1;
        FUN_0c04cdf2();
        ENT->word = *(int *)0xC3673E8;
        break;
    }
}
