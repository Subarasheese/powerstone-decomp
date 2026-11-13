/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

struct player_view {
    char pad0[10];
    signed char move_mode;
    signed char move_flag;
    char pad1[48 - 12];
    int heading;
    char pad2[236 - 52];
    short turn_counter;
    char pad3[0x721E - 238];
    char field_721e;
};
int pl_angle_to_opponent(struct player_view *obj);
void pl_mode15_cls11_f0(struct player_view *obj);
void pl_mode15_cls11_f1(struct player_view *obj);
void pl_mode15_cls02_f0(struct player_view *obj);
void pl_mode15_cls02_f1(struct player_view *obj);
void pl_mode15_cls04_16_f0(struct player_view *obj);
void pl_mode15_cls04_16_f1(struct player_view *obj);
void pl_mode15_cls15_f0(struct player_view *obj);
void pl_mode15_cls15_f1(struct player_view *obj);
void pl_mode15_cls05_07_f0(struct player_view *obj);
void pl_mode15_cls05_07_f1(struct player_view *obj);
void pl_mode15_cls14_f0(struct player_view *obj);
void pl_mode15_cls14_f1(struct player_view *obj);
void pl_mode15_cls08_f0(struct player_view *obj);
void pl_mode15_cls08_f1(struct player_view *obj);
void pl_mode15_cls09_10_12_f0(struct player_view *obj);
void pl_mode15_cls09_10_12_f1(struct player_view *obj);
void pl_mode15_cls03_f0(struct player_view *obj);
void pl_mode15_cls03_f1(struct player_view *obj);

void pl_mode15_update(struct player_view *obj)
{
    int diff;
    if (obj->field_721e == 0 && obj->turn_counter != 0) {
        diff = (unsigned short)(pl_angle_to_opponent(obj) - obj->heading);
        if (diff & 0x8000)
            diff |= 0xFFFF0000;
        if (obj->turn_counter > 0)
            obj->heading = (unsigned short)(obj->heading + diff / obj->turn_counter);
    }
    obj->turn_counter = obj->turn_counter - 1;
    switch (obj->move_mode) {
    case 11:
        if (obj->move_flag == 0) pl_mode15_cls11_f0(obj); else pl_mode15_cls11_f1(obj);
        break;
    case 2:
        if (obj->move_flag == 0) pl_mode15_cls02_f0(obj); else pl_mode15_cls02_f1(obj);
        break;
    case 4:
    case 16:
        if (obj->move_flag == 0) pl_mode15_cls04_16_f0(obj); else pl_mode15_cls04_16_f1(obj);
        break;
    case 15:
        if (obj->move_flag == 0) pl_mode15_cls15_f0(obj); else pl_mode15_cls15_f1(obj);
        break;
    case 5:
    case 6:
    case 7:
        if (obj->move_flag == 0) pl_mode15_cls05_07_f0(obj); else pl_mode15_cls05_07_f1(obj);
        break;
    case 14:
        if (obj->move_flag == 0) pl_mode15_cls14_f0(obj); else pl_mode15_cls14_f1(obj);
        break;
    case 8:
        if (obj->move_flag == 0) pl_mode15_cls08_f0(obj); else pl_mode15_cls08_f1(obj);
        break;
    case 9:
    case 10:
    case 12:
        if (obj->move_flag == 0) pl_mode15_cls09_10_12_f0(obj); else pl_mode15_cls09_10_12_f1(obj);
        break;
    case 3:
        if (obj->move_flag == 0) pl_mode15_cls03_f0(obj); else pl_mode15_cls03_f1(obj);
        break;
    default:
        break;
    }
}
