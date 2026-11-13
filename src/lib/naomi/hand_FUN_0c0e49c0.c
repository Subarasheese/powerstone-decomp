/* Writes a 4-bit field into a register of the 0xFFD00000 block with the interrupt mask raised. */
struct field_ent { signed char reg_off; signed char shift; short mask; };

int FUN_0c0e49c0(int channel, int value)
{
    volatile int mask_keep;
    unsigned int saved_sr;
    struct field_ent *ent;
    volatile unsigned short *reg;
    int readback;

    if (channel > 12 || value < 0 || value > 15) {
        return 0;
    }
    saved_sr = _builtin_get_cr();
    _builtin_set_cr(saved_sr | 0x10000000);
    ent = (struct field_ent *)(0xC346B38 + channel * 4);
    reg = (volatile unsigned short *)(0xFFD00004 + ent->reg_off);
    mask_keep = ent->mask;
    *reg = (*reg & ~ent->mask) | (value << ent->shift);
    readback = *reg;
    _builtin_set_cr(saved_sr);
    return 1;
}
