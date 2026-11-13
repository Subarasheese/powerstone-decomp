/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a84d4-0c0a8600) */

struct vec3 { float x, y, z; };
struct Sub {
    char live;
    char pad_01;
    short size;             /* 2 */
};
struct Obj {
    char pad_00[1];
    char field_01;                /* 1 */
    char pad_02[3];
    char field_05;                /* 5 */
    short size;             /* 6 */
    signed char state;      /* 8 */
    char tag;               /* 9 */
    char pad_0a[0xEC - 10];
    short timer;            /* 0xEC */
    short count;            /* 0xEE */
    char pad_f0[0x2e0 - 0xF0];
    struct Sub *sub[2];     /* 0x2e0 */
};
void FUN_0c0623a6(struct Sub *, int, int);
void obj_destroy(struct Obj *);

void menu_ui_task_18(struct Obj *obj)
{
    struct vec3 unused_vec;
    int idx;

    unused_vec = *(struct vec3 *)0xC152B6C;
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        obj->tag = 0;
        obj->timer = 10;
        obj->count = 0;
        obj->field_01 = 1;
        obj->size = 31;
        obj->field_05 = 25;
        for (idx = 0; idx < 2; idx++) {
            FUN_0c0623a6(obj->sub[idx], 0xC664A48, idx + 14);
            obj->sub[idx]->live = 1;
            obj->sub[idx]->size = 31;
        }
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            obj->state = obj->state + 1;
        break;
    default:
        obj_destroy(obj);
        break;
    }
}
