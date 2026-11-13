/* Latches two flag bytes (3 and 4) of the record at 0x0C7F4750 from bits 0x100/0x200 of its halfword at +10; returns 1 if either changed. */
typedef struct { char pad0; signed char b1; char pad2; signed char b3; signed char b4; char pad5[5]; unsigned short h10; } S;
int FUN_0c0558ac(void)
{
    S *s = (S *)0xC7F4750;
    int old3 = s->b3;
    int old4 = s->b4;
    int changed = 0;
    if (old3 < 1) {
        if (s->h10 & 0x100)
            s->b3 = 1;
    }
    if (s->b4 < 1) {
        if (s->h10 & 0x200)
            s->b4 = 1;
    }
    if (old3 != s->b3)
        changed = 1;
    if (old4 != s->b4)
        changed = 1;
    return changed;
}
