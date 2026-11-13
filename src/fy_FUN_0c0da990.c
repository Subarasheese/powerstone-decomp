/* Sets up a shadow/effect slot in the block at 0x0C7F29F8 unless its counter at +172 is already above 96: stores constants, the owner's byte +3, two pointers into a table at 0x0C7E40C4 chosen by the owner's byte +3 (and its negation), then picks a random byte from a 4-entry row of the table at 0x0C344E34 (row from owner byte +4 and the argument). */
extern float FUN_0c0df940(void);

void FUN_0c0da990(char *a, char b)
{
    char *g = (char *)0x0C7F29F8;
    char *row;
    unsigned int r;
    unsigned char *t;

    if ((unsigned char)g[172] > 96)
        return;
    g[172] = 96;
    g[2] = 19;
    g[4] = 0;
    g[5] = 0;
    g[6] = 0;
    g[0x184] = a[3];
    *(char **)(g + 0x1A0) = (char *)0x0C7E40C4 + (unsigned short)(a[3] * 29392) + 32;
    *(char **)(g + 0x1A4) = (char *)0x0C7E40C4 + (unsigned short)((a[3] == 0) * 29392) + 32;
    row = (char *)0x0C344E34 + a[4] * 16 + b * 4;
    r = (unsigned int)(FUN_0c0df940() * 255.0f);
    g[3] = row[r % 4];
}
