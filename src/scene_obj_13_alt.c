/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0584e8-0c05876c) */

struct R12 { int x, y, z; };
struct Task {
    char live;
    char pad0[3];
    char index;
    char pad1[11];
    void (*handler)(void);
    char pad2[60];
    struct R12 rec;
};
struct Task *obj_create(int arg_a, int arg_b, int arg_c, int arg_d);
void fx_tick_0586de(void);

void fx_spawn_0586de(void)
{
    struct R12 tmpl;
    struct Task *task;
    int idx;
    tmpl = *(struct R12 *)0xC14BEA8;
    for (idx = 0; idx < 23; idx++) {
        task = obj_create(6, 1, 2, 0);
        if (task != 0) {
            task->live = 1;
            task->index = idx;
            task->handler = fx_tick_0586de;
            task->rec = tmpl;
        }
    }
}
