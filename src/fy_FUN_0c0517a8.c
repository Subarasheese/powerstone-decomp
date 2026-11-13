/* Script-step state machine of a camera / demo track (record index in the byte at 0xC3673EE, 596-byte records at 0xC366F40, script pointer at 0xC3673E8): reads the next script halfword and asks FUN_0c0500ca for the current value, then by the record's state byte: 0 waits for the marker (byte +0x71BA == 31) and sets state 4, 1 counts a timer (+28) down, 2 and 4 pick one of four directions from the random word at 0xC7F307C (FUN_0c050180 of the target plus 0 / 0x2000 / 0 / -0x2000) and set the object's flag bits (+732) when the script value is below / above the current one by 10, 3 just moves on, 5 stores the script pointer in the record (+12); most states then advance the state byte. */
extern int g7f307c;
short FUN_0c050180(int a);
int FUN_0c0500ca(char *a);
int FUN_0c04fed8(char *a);
void FUN_0c04cdf2(short *p);
#define REC ((char *)0xC366F40 + (short)(*(unsigned char *)0xC3673EE * 596))
void FUN_0c0517a8(char *a)
{
    short *np;
    int w;
    int cur;
    int r8;
    int r4;
    int tgt;
    short q;
    np = *(short **)0xC3673E8;
    *(short **)0xC3673E8 = np + 1;
    w = *np;
    cur = FUN_0c0500ca(a);
    switch (*(unsigned char *)(REC)) {
    case 0:
        *(short *)0xC3673EC = 0;
        *(short *)(REC + 28) = 1;
        if (a[0x71BA] == 31) {
            REC[0] = 4;
            return;
        }
        goto adv;
    case 1:
        *(short *)0xC3673EC = 0;
        *(short *)(REC + 28) = *(short *)(REC + 28) - 1;
        if ((unsigned short)*(short *)(REC + 28) != 0)
            return;
        goto adv;
    case 2:
    case 4: {
        unsigned char st = *(unsigned char *)(REC);
        *(short *)0xC3673EC = 0;
        tgt = FUN_0c04fed8(a);
        q = (short)((unsigned int)g7f307c % 80u);
        *(short *)(REC + 42) = q / 20;
        switch (*(short *)(REC + 42)) {
        case 0:
            r8 = FUN_0c050180(tgt);
            r4 = 0x8000;
            break;
        case 1:
            r8 = FUN_0c050180(tgt + 0x2000);
            r4 = 0xA000;
            break;
        case 2:
            r8 = FUN_0c050180(tgt);
            r4 = 0x8000;
            break;
        case 3:
            r8 = FUN_0c050180(tgt + -0x2000);
            r4 = 0x6000;
            break;
        default:
            goto cmp;
        }
        r4 = FUN_0c050180(r4 + tgt);
    cmp:
        if (st == 2) {
            if ((short)w < (short)cur - 10)
                *(int *)(a + 732) = *(int *)(a + 732) | (unsigned short)r8;
            if ((short)w > (short)cur + 10)
                *(int *)(a + 732) = *(int *)(a + 732) | (unsigned short)r4;
            goto adv;
        }
        if ((short)w < (short)cur - 10) {
            *(int *)(a + 732) = *(int *)(a + 732) | (unsigned short)r8;
            return;
        }
        if ((short)w > (short)cur + 10) {
            *(int *)(a + 732) = *(int *)(a + 732) | (unsigned short)r4;
            return;
        }
        r4 = FUN_0c050180(tgt);
        *(int *)(a + 732) = *(int *)(a + 732) | (unsigned short)r4;
        goto adv;
    }
    case 3:
        *(short *)0xC3673EC = 0;
        goto adv;
    case 5:
        *(short *)0xC3673EC = 1;
        FUN_0c04cdf2((short *)0xC3673EC);
        *(int *)(REC + 12) = *(int *)0xC3673E8;
        return;
    default:
        return;
    }
adv:
    REC[0] = REC[0] + 1;
}
