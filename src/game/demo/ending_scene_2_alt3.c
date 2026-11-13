/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c01628c-0c017240) */

struct TaskObj {
    char pad_00[16];
    void (*update)(void);       /* 16 */
    char pad_14[0x2dc - 20];
    signed char count;          /* 0x2dc */
    char pad_2dd[3];
    int items[8];                /* 0x2e0 */
};
struct TaskObj *obj_create(int, int, int, int);
void ending_obj_init_basic(struct TaskObj *);
void FUN_0c016d7a(void);
void ending_obj_set_sprite(int, int);

void FUN_0c016d8a(void)
{
    struct TaskObj *obj;
    int i;
    obj = obj_create(5, 1, 1, 0);
    if (obj != 0) {
        ending_obj_init_basic(obj);
        obj->update = FUN_0c016d7a;
        for (i = 0; i < obj->count; i++)
            ending_obj_set_sprite(obj->items[i], 31);
    }
}
