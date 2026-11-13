/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05b6dc-0c05c1c0) */

int obj_destroy(int);
int fx_spawn_03(int, int, int, float);
int cam_set_shake_ramp(int, int);

int FUN_0c05c07a(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x30C));
    if ((t0 != 7) && (t0 != 8)) {
        if (t0 != 9) {
            if (t0 != 10) {
            } else {
                fx_spawn_03((a4 + 0x20), 0x2, 0xA, 0.299999982f);
            }
        } else {
            fx_spawn_03((a4 + 0x20), 0x2, 0x8, 0.5f);
        }
    } else {
        fx_spawn_03((a4 + 0x20), 0x2, 0x6, 0.299999982f);
    }
    t0 = *(signed char *)((a4 + 0x30C));
    switch (t0) {
    case 7:
        cam_set_shake_ramp(0xA, 0xA);
        break;
    case 8:
        cam_set_shake_ramp(0xA, 0xA);
        break;
    case 9:
        cam_set_shake_ramp(0x14, 0x14);
        break;
    }
    return obj_destroy(a4);
}
