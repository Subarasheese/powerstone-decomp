/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ac7f0-0c0ac8dc) */

int stage_spawn_type03(int);
int stage_spawn_type01(int);
int stage_spawn_type02(int);
int stage_spawn_type12(int);
int stage_spawn_type08(int);
int stage_spawn_gimmick_by_kind(int, int, int, int);
int stage_spawn_type11(int);
int stage_spawn_type04(int);

int stage_spawn_layout_objects(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;
    int t9;

    t3 = 0x0;
    t4 = (*(int *)((((((*(signed char *)0xC7F3051) << 2) << 1) + 0xC33BF58) + 0x0)));
    for (;;) {
        if ((int)(signed char)t3 >= (int)(*(int *)((((((*(signed char *)0xC7F3051) << 2) << 1) + 0xC33BF58) + 0x4)))) {
            break;
        }
        t9 = *(signed char *)((t4 + 0x0));
        switch (t9) {
        case 1:
            stage_spawn_type01(t4);
            break;
        case 2:
            stage_spawn_type02(t4);
            break;
        case 3:
            stage_spawn_type03(t4);
            break;
        case 4:
            stage_spawn_type04(t4);
            break;
        case 8:
            stage_spawn_type08(t4);
            break;
        case 11:
            stage_spawn_type11(t4);
            break;
        case 12:
            stage_spawn_type12(t4);
            break;
        default:
            if ((t9 != 13) && (t9 != 15)) {
            } else {
                stage_spawn_gimmick_by_kind(t4, a5, a6, a7);
            }
            break;
        }
        t3 = (t3 + 0x1);
        t4 = (t4 + 0xD);
    }
    return 0x25;
}
