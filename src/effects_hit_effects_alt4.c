/* hit effect spawners (04B6B8..04BEF2) and kind dispatchers (0c04b6b8-0c04bfd0) */

int fx_spawn_04b6b8(int, int, int, int);
extern int fx_spawn_random_offset_task();
int fx_spawn_04baa6(int, int, int, int);
int fx_spawn_04bc94(int, int, int, int);

void fx_spawn_hit_effect(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(signed char)a7 < (int)0xA) {
        if ((signed char)a7 != 0) {
            if ((signed char)a7 != 1) {
                if ((signed char)a7 != 2) {
                    if ((signed char)a7 != 3) {
                        if ((signed char)a7 != 4) {
                            if ((signed char)a7 != 5) {
                                if ((signed char)a7 != 6) {
                                    if ((signed char)a7 != 7) {
                                        if ((signed char)a7 != 8) {
                                            if ((signed char)a7 != 9) {
                                                return;
                                            }
                                            fx_spawn_04b6b8(0x0, 0x0, a4, a5);
    return;
                                        }
                                        fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                                        fx_spawn_04baa6(0x0, 0x0, a4, a5);
    return;
                                    }
                                    fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                                    t0 = ((int (*)(int, int, int, int, int))(fx_spawn_random_offset_task))(0x0, 0x0, a4, a5, 0x0);
                                    return;
                                }
                                fx_spawn_04b6b8(0x0, 0x0, a4, a5);
    return;
                            }
                            fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                            t0 = ((int (*)(int, int, int, int, int))(fx_spawn_random_offset_task))(0x0, 0x0, a4, a5, 0x0);
                            return;
                        }
                        fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                        t0 = ((int (*)(int, int, int, int))(fx_spawn_random_offset_task))(0x0, 0x0, a4, a5);
                        t0 = ((int (*)(int, int, int, int, int, int))(fx_spawn_random_offset_task))(0x0, 0x0, a4, a5, 0x1, 0x1);
                        fx_spawn_04bc94(0x0, 0x0, a4, a5);
    return;
                    }
                    fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                    fx_spawn_04baa6(0x0, 0x0, a4, a5);
    return;
                }
                fx_spawn_04b6b8(0x0, 0x0, a4, a5);
                t0 = ((int (*)(int, int, int, int, int))(fx_spawn_random_offset_task))(0x0, 0x0, a4, a5, 0x0);
                return;
            }
            fx_spawn_04b6b8(0x0, 0x0, a4, a5);
    return;
        }
        fx_spawn_04b6b8(0x0, 0x0, a4, a5);
    return;
    }
}
