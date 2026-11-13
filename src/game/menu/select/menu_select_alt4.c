/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

struct vec3_int { int x, y, z; };
struct spawn_obj { char used; char pad[15]; void *handler; char pad2[60]; struct vec3_int vec; };
extern int menu_ui_task_04(void);
extern struct spawn_obj *obj_create(int, int, int, int);
#define TEMPLATE_VEC (*(struct vec3_int *)0xC152AD0)

void menu_ui_spawn_04(void)
{
    struct vec3_int vec;
    struct spawn_obj *obj;

    vec = TEMPLATE_VEC;
    obj = obj_create(5, 1, 2, 0);
    if (obj) {
        obj->used = 1;
        obj->vec = vec;
        obj->handler = (void *)menu_ui_task_04;
    }
}
