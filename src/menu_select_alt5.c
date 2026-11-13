/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

typedef struct { int a, b, c; } vec12;
typedef struct { char used; char pad[15]; void (*fn)(void); char pad2[0x50 - 20]; vec12 rec; } Slot;
extern Slot *obj_create(int, int, int, int);
extern void menu_ui_task_06(void);

void menu_ui_spawn_06(void)
{
    vec12 tmpl;
    Slot *slot;

    tmpl = *(vec12 *)0xC152AF4;
    slot = obj_create(5, 1, 10, 0);
    if (slot != 0) {
        slot->used = 1;
        slot->rec = tmpl;
        slot->fn = menu_ui_task_06;
    }
}
