/* camera helpers (shake/fade parameters (0c0dc27c-0c0dc9d4) */

int cam_select_mode0_variant(int);
int cam_force_mode(int, int, int);
int FUN_0c0dc4e8(int);

int FUN_0c0dc994(void)
{
    register int t0;

    t0 = cam_select_mode0_variant(0xC7F29F8);
    if (t0 == 0) {
        FUN_0c0dc4e8(0xC7F29F8);
    }
    return cam_force_mode(0x0, 0x0, 0x40);
}
