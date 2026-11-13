/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c05821c-0c0584e8) */

struct Vec3i { int x, y, z; };
struct TaskObj { char used; char pad_01[3]; char index; char pad_05[11]; void *handler; char pad_14[60]; struct Vec3i vec; };
extern int fx_tick_058460(void);
extern struct TaskObj *obj_create(int, int, int, int);

void fx_spawn_058460(void)
{
    struct Vec3i vec;
    struct TaskObj *obj;
    int i;

    vec = *(struct Vec3i *)0xC14BC18;
    for (i = 0; i < 6; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj) {
            obj->used = 1;
            obj->index = i;
            obj->handler = (void *)fx_tick_058460;
            obj->vec = vec;
        }
    }
}
