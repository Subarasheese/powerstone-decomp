/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0567c4-0c056bb4) */

struct Vec12 { int a, b, c; };
struct TaskObj {
    char live;
    char pad_01[3];
    char index;
    char pad_05[11];
    void (*handler)(void);
    char pad_14[60];
    struct Vec12 rec;
};
struct TaskObj *obj_create(int a, int b, int c, int d);
void fx_tick_056b2c(void);

void fx_spawn_056b2c(void)
{
    struct Vec12 tmpl;
    struct TaskObj *obj;
    int i;
    tmpl = *(struct Vec12 *)0xC14B100;
    for (i = 0; i < 8; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj != 0) {
            obj->live = 1;
            obj->index = i;
            obj->handler = fx_tick_056b2c;
            obj->rec = tmpl;
        }
    }
}
