/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6a9c-0c0b6dcc) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct vec3f { float x, y, z; };
char *obj_create(int, int, int, int);
int math_rand_next(void);
void obj_set_record(char *, int);
void FUN_0c06233a(char *, int, int);

void fx_spawn_thrown_item_kind(struct vec3f *src, signed char kind)
{
    char *item;
    char *child;
    int phase;

    item = obj_create(2, 1, 2, 0);
    if (item == 0)
        return;
    item[0] = 1;
    item[1] = 1;
    item[3] = 2;
    *(short *)(item + 6) = 1;
    item[5] = 25;
    item[8] = 0;
    item[9] = 0;
    *(short *)(item + 0xEC) = 0;
    *(short *)(item + 0xEE) = math_rand_next() % 16;
    *(void (**)(void))(item + 16) = (void (*)(void))0xC0B6C5C;
    item[0x30e] = kind;
    item[0x30f] = 2;
    switch (kind) {
    case 0:
    case 3:
        item[0x101] = 6;
        item[0x102] = 14;
        obj_set_record(item, 10);
        break;
    case 1:
        item[0x101] = 33;
        item[0x102] = 14;
        obj_set_record(item, 38);
        break;
    case 2:
        item[0x101] = 21;
        item[0x102] = 14;
        obj_set_record(item, 64);
        break;
    }
    item[0x106] = 1;
    *(struct vec3f *)(item + 32) = *src;
    *(struct vec3f *)(item + 44) = *(struct vec3f *)0xC33C270;
    *(struct vec3f *)(item + 80) = *(struct vec3f *)0xC33C264;
    *(struct vec3f *)(item + 56) = *(struct vec3f *)0xC33C258;
    *(struct vec3f *)(item + 68) = *(struct vec3f *)0xC33C27C;
    child = *(char **)(item + 0x2e0);
    phase = *(short *)(item + 0xEE);
    FUN_0c06233a(child, ((int)g_res_kyoutsuu), 132 + phase / 2 % 8);
    child[0] = 1;
    *(short *)(child + 2) = 561;
    *(float *)(child + 68) = 1.0f;
    *(float *)(child + 72) = 1.0f;
    *(float *)(child + 76) = 1.0f;
    switch (kind) {
    case 0:
        *(float *)(child + 28) = 0.699999988f;
        *(float *)(child + 32) = 0.699999988f;
        break;
    case 1:
    case 2:
        *(float *)(child + 28) = 1.0f;
        *(float *)(child + 32) = 1.0f;
        break;
    case 3:
        *(float *)(child + 28) = 1.5f;
        *(float *)(child + 32) = 1.0f;
        break;
    }
}
