/* hit effect spawners (04B6B8..04BEF2) and kind dispatchers (0c04b6b8-0c04bfd0) */

int fx_spawn_04b6b8(int, int, int, int);
int fx_spawn_random_offset_task(int, int, int, int, int);
int fx_spawn_04baa6(int, int, int, int);
int fx_spawn_04bc94(int, int, int, int);

void fx_spawn_hit_effect_set(int actor, int mode)
{
    signed char mode_code = mode;

    if (mode_code >= 10) {
        return;
    }
    switch (mode_code) {
    case 0:
    case 1:
    case 6:
    case 9:
        fx_spawn_04b6b8(actor, 0, 0, 0);
        break;
    case 2:
    case 5:
    case 7:
        fx_spawn_04b6b8(actor, 0, 0, 0);
        fx_spawn_random_offset_task(actor, 0, 0, 0, 0);
        break;
    case 3:
    case 8:
        fx_spawn_04b6b8(actor, 0, 0, 0);
        fx_spawn_04baa6(actor, 0, 0, 0);
        break;
    case 4:
        fx_spawn_04b6b8(actor, 0, 0, 0);
        fx_spawn_random_offset_task(actor, 0, 0, 0, 1);
        fx_spawn_random_offset_task(actor, 0, 0, 0, 1);
        fx_spawn_04bc94(actor, 0, 0, 0);
        break;
    }
}
