/* controller records (pad_state), pad polling, pad type (0c012870-0c0128a0) */

int pad_get_type(int a4)
{
    register int t0;

    t0 = *(int *)((0xC361BF4 + (signed char)(((a4 << 2) + a4) << 2)));
    if (t0 != 1) {
        if (t0 != 2) {
            return 0x0;
        }
        return 0x2;
    }
    return 0x1;
}
