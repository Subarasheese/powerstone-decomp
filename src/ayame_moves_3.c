/* Ayame (char 6) frame hook, move init stubs, attack init dispatch (part 3 of 3 of the same module) (0c07e930-0c07eb60) */

/* named globals (symbols.txt) */
extern char g_ayame_move_init_tab[];
struct Obj {
    char pad0[0x71A8];
    char flag_71a8;
    char flag_71a9;
    char pad1[0x721E - 0x71AA];
    char flag_721e;
    signed char mode;
    char pad2[0x7238 - 0x7220];
    signed char sel;
};
void pl_mode01_03_enter(struct Obj *obj);
void pl_mode04_enter(struct Obj *obj);
void pl_mode05_enter(struct Obj *obj);
void pl_mode06_enter(struct Obj *obj);
void pl_mode07_enter(struct Obj *obj);
void pl_mode08_enter(struct Obj *obj);
void pl_mode09_enter(struct Obj *obj);
void pl_mode10_enter(struct Obj *obj);
void pl_mode11_enter(struct Obj *obj);
void pl_mode12_enter(struct Obj *obj);
void pl_mode13_enter(struct Obj *obj);
void fx_spawn_039ed8(struct Obj *obj, int n);
void pl_mode14_enter(struct Obj *obj);
void pl_mode15_enter(struct Obj *obj);
void pl_end_action_choose_state(struct Obj *obj);

void pl_ayame_attack_init(struct Obj *obj)
{
    switch (obj->mode) {
    case 0:
    case 2:
        (*(void (**)(struct Obj *))(((int)g_ayame_move_init_tab) + (obj->sel << 2)))(obj);
        break;
    case 1:
    case 3:
        pl_mode01_03_enter(obj);
        break;
    case 4:
        pl_mode04_enter(obj);
        break;
    case 5:
        pl_mode05_enter(obj);
        break;
    case 6:
        pl_mode06_enter(obj);
        break;
    case 7:
        pl_mode07_enter(obj);
        break;
    case 8:
        pl_mode08_enter(obj);
        break;
    case 9:
        pl_mode09_enter(obj);
        break;
    case 10:
        pl_mode10_enter(obj);
        break;
    case 11:
        pl_mode11_enter(obj);
        break;
    case 12:
        pl_mode12_enter(obj);
        break;
    case 13:
        pl_mode13_enter(obj);
        if (obj->flag_721e == 0)
            fx_spawn_039ed8(obj, 26);
        break;
    case 14:
        pl_mode14_enter(obj);
        break;
    case 15:
        pl_mode15_enter(obj);
        break;
    default:
        pl_end_action_choose_state(obj);
        break;
    }
    obj->flag_71a9 = 1;
    obj->flag_71a8 = 1;
}
