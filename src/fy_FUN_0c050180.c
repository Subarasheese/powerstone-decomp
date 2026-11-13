/* Looks up an 8-entry short table at 0xC32D7E8 by the top bits of (angle - g_w31e0 + 0xD000) as a 16-bit value, divided by 0x2000. */
extern short g_w31e0;
short FUN_0c050180(int a)
{
    short *tbl = (short *)0xC32D7E8;
    int q = (unsigned short)(a - g_w31e0 + 0xD000) / 0x2000;
    return tbl[q & 7];
}
