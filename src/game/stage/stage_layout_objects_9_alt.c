/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ae77c-0c0aeab8) */

int stage_type12_mode_02(int);

int stage_type12_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 2) {
            return t0;
        }
        return stage_type12_mode_02(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0AE894))(a4, a5, a6, a7);
}
