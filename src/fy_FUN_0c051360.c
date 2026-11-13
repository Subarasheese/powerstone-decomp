/* One step of a scripted camera/move record (596-byte records at 0xC366F40, current one picked by the byte at 0xC3673EE; script pointer at 0xC3673E8): reads a script halfword, and per record state (0 start, 1 wait for an angle, 2 take the script pointer) picks a random quarter-turn (global 0xC7F307C % 80 / 20), computes two candidate angle words with FUN_0c050180 around FUN_0c04fed8's heading, and ORs the one matching the position window (+-10 around FUN_0c0500ca) into the flags at +732, or advances the state when inside it. */
extern int FUN_0c0500ca(char *o);
extern int FUN_0c04fed8(char *o);
extern int FUN_0c050180(int a);
extern void FUN_0c04cdf2(void);
void FUN_0c051360(char *o)
{
    char *E = (char *)0xC366F40;
    unsigned char *B = (unsigned char *)0xC3673EE;
    short *S = (short *)0xC3673EC;
    short **P = (short **)0xC3673E8;
    short *q;
    short s, x;
    char *rec;
    int r13, r10, r4, sel;

    q = *P;
    *P = q + 1;
    s = *q;
    x = FUN_0c0500ca(o);
    rec = E + (short)(*B * 596);
    switch ((unsigned char)rec[0]) {
    case 0:
        *S = 0;
        rec = E + (short)(*B * 596);
        rec[0] = rec[0] + 1;
    case 1:
        *S = 0;
        r13 = FUN_0c04fed8(o);
        rec = E + (short)(*B * 596);
        *(short *)(rec + 42) = (short)(*(unsigned int *)0xC7F307C % 80) / 20;
        sel = *(short *)(E + (short)(*B * 596) + 42);
        switch (sel) {
        case 0:
        case 2:
            r10 = FUN_0c050180(r13);
            r4 = FUN_0c050180(r13 + 0x8000);
            break;
        case 1:
            r10 = FUN_0c050180(r13 + 0x4000);
            r4 = FUN_0c050180(r13 + 0xC000);
            break;
        case 3:
            r10 = FUN_0c050180(r13 - 0x4000);
            r4 = FUN_0c050180(r13 + 0x4000);
            break;
        }
        if (s >= x - 10) {
            if (s > x + 10) {
                *(int *)(o + 732) = *(int *)(o + 732) | (unsigned short)r4;
            } else {
                rec = E + (short)(*B * 596);
                rec[0] = rec[0] + 1;
            }
        } else {
            *(int *)(o + 732) = *(int *)(o + 732) | (unsigned short)r10;
        }
        break;
    case 2:
        *S = 1;
        FUN_0c04cdf2();
        *(int *)(E + (short)(*B * 596) + 12) = (int)*P;
        break;
    }
}
