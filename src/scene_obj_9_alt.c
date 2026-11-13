/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057850-0c057b3c) */

typedef struct { int a, b, c; } vec12;
extern char *obj_create(int, int, int, int);
extern void fx_tick_057ab6(void);

void fx_spawn_057ab6(void)
{
    vec12 tmpl;
    char *obj;
    int idx;

    tmpl = *(vec12 *)0x0C14BA34;
    for (idx = 0; idx < 7; idx++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj) {
            *obj = 1;
            obj[4] = idx;
            *(void (**)(void))(obj + 16) = fx_tick_057ab6;
            *(vec12 *)(obj + 80) = tmpl;
        }
    }
}
