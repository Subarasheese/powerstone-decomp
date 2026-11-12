/* Hand-written: a 4-bit field write into a register of the 0xFFD00000 block, with the interrupt mask raised. */
struct fld_ent { signed char off; signed char sh; short mask; };

int FUN_0c0e49c0(int ch, int val)
{
    volatile int keep;
    unsigned int sr;
    struct fld_ent *e;
    volatile unsigned short *reg;
    int old;

    if (ch > 12 || val < 0 || val > 15) {
        return 0;
    }
    sr = _builtin_get_cr();
    _builtin_set_cr(sr | 0x10000000);
    e = (struct fld_ent *)(0xC346B38 + ch * 4);
    reg = (volatile unsigned short *)(0xFFD00004 + e->off);
    keep = e->mask;
    *reg = (*reg & ~e->mask) | (val << e->sh);
    old = *reg;
    _builtin_set_cr(sr);
    return 1;
}
