/* Raises the level byte 1 of the record at 0x0C7F4750 (1 if arg >= 8, 2 on bit 0x100, 3 on bit 0x200 when a table flag is clear); returns 1 if it changed. */
typedef struct { char pad0; signed char b1; char pad2; signed char b3; signed char b4; char pad5[5]; unsigned short h10; } S;
int FUN_0c055838(int a, unsigned int b)
{
    S *s = (S *)0xC7F4750;
    unsigned char *tbl = (unsigned char *)0xC7F2E3C;
    int old = s->b1;
    int changed = 0;
    if (old < 1) {
        if (a >= 8)
            s->b1 = 1;
    }
    if (s->b1 < 2) {
        if (s->h10 & 0x100)
            s->b1 = 2;
    }
    if (s->b1 < 3) {
        if (s->h10 & 0x200) {
            if (tbl[(unsigned char)((unsigned short)b * 120)] == 0)
                s->b1 = 3;
        }
    }
    if (old != s->b1)
        changed = 1;
    return changed;
}
