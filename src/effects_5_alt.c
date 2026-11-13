/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0332a0-0c033670) */

int FUN_0c033390(int);
int FUN_0c033442(int);
int FUN_0c033528(int);
int obj_destroy(int);
struct Obj {
    char pad0[0x2E0];
    char *handler_0;               /* 0x2E0 */
    char *handler_1;               /* 0x2E4 */
    char *handler_2;               /* 0x2E8 */
};

void fx_tick_0332a0(struct Obj *obj)
{
    int active = 0;

    if (*obj->handler_0 != 0) {
        FUN_0c033390((int)obj);
        active++;
    }
    if (*obj->handler_1 != 0) {
        FUN_0c033442((int)obj);
        active++;
    }
    if (*obj->handler_2 != 0) {
        FUN_0c033528((int)obj);
        active++;
    }
    if (active == 0) {
        obj_destroy((int)obj);
    }
}
