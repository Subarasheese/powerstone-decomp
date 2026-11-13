/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0aba84-0c0abd20) */

typedef struct { int x, y, z; } vec3_int;
typedef struct { char used; char pad[15]; void (*fn)(void); char pad1[8]; int result; char pad2[0x50 - 32]; vec3_int rec; } slot_t;
extern slot_t *obj_create(int, int, int, int);
extern void menu_ui_task_38(void);
extern int menu_find_cursor_task(void);

void menu_ui_spawn_38(void)
{
    vec3_int rec_copy;
    slot_t *slot;

    rec_copy = *(vec3_int *)0xC152D84;
    slot = obj_create(5, 1, 8, 0);
    if (slot != 0) {
        slot->used = 1;
        slot->fn = menu_ui_task_38;
        slot->rec = rec_copy;
        slot->result = menu_find_cursor_task();
    }
}
