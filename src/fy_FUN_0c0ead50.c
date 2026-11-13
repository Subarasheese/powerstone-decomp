/* Ticks down entry r4 of the 8-byte slot table (pointer in g_w638): while its timer (short at +4) is above 1 it just decrements; otherwise it resets the slot (index +0 and +6 to -1, byte +2 to -1, timer 0) and clears its run of b3 consecutive bits starting at bit index w0 in the bitmap at 0xC7FD480. */
struct Slot { short idx; signed char b2; unsigned char count; short timer; short w6; };
extern struct Slot *g_w638;
void FUN_0c0ead50(int n)
{
    struct Slot *s = g_w638 + n;
    short *q;
    int mask;
    int i;
    int c;
    if (s->timer > 1) {
        s->timer = s->timer - 1;
        return;
    }
    c = s->count;
    i = s->idx;
    s->w6 = -1;
    s->idx = -1;
    s->b2 = -1;
    s->timer = 0;
    mask = 1 << (i & 15);
    q = (short *)0xC7FD480 + (i >> 4);
    while (c-- > 0) {
        *q = *q & ~mask;
        mask += mask;
        if (mask == 0x10000) {
            q++;
            mask = 1;
        }
    }
}
