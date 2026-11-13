/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057128-0c057850) */

struct vec3f { float x, y, z; };
struct obj_rec {
    char live;
    char pad1[3];
    char tag;               /* 4 */
    char pad5[11];
    void (*update)(void);   /* 16 */
    char pad20[60];
    struct vec3f pos;          /* 80 */
};
struct obj_rec *obj_create(int, int, int, int);
void fx_tick_0577ca(void);

void fx_spawn_0577ca(void)
{
    struct vec3f template_pos;
    struct obj_rec *item;
    int i;
    template_pos = *(struct vec3f *)0xC14B964;
    for (i = 0; i < 7; i++) {
        item = obj_create(6, 1, 2, 0);
        if (item != 0) {
            item->live = 1;
            item->tag = i;
            item->update = fx_tick_0577ca;
            item->pos = template_pos;
        }
    }
}
