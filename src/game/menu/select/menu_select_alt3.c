/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

typedef struct { int x, y, z; } Vec12;
extern char *obj_create(int, int, int, int);
extern void menu_ui_task_02(void);
typedef struct { int x, y, z; } S12;

void menu_ui_spawn_02(void)
{
    Vec12 tmpl;
    char *obj;

    tmpl = *(Vec12 *)0x0C152AB8;
    obj = obj_create(5, 1, 1, 0);
    if (obj) {
        *obj = 1;
        *(Vec12 *)(obj + 80) = tmpl;
        *(void (**)(void))(obj + 16) = menu_ui_task_02;
    }
}

void menu_ui_spawn_03(void)
{
    S12 tmpl;
    char *obj;

    tmpl = *(S12 *)0x0C152AC4;
    obj = obj_create(5, 1, 1, 0);
    if (obj) {
        *obj = 1;
        *(S12 *)(obj + 80) = tmpl;
        *(int *)(obj + 16) = 0x0C0A6120;
    }
}
