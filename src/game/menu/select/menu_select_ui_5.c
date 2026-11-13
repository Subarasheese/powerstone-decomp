/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a84d4-0c0a8600) */

struct Vec3i { int x, y, z; };
struct Task {
    char live;
    char pad0[15];
    void (*handler)(void);
    char pad1[60];
    struct Vec3i rec;
};
struct Task *obj_create(int a, int b, int c, int d);
void menu_ui_task_18(void);

void menu_ui_spawn_18(void)
{
    struct Vec3i template;
    struct Task *task;
    template = *(struct Vec3i *)0x0C152B60;
    task = obj_create(5, 1, 2, 0);
    if (task != 0) {
        task->live = 1;
        task->rec = template;
        task->handler = menu_ui_task_18;
    }
}
