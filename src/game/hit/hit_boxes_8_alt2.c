/* hit box data converters, per-frame object lists, hit edit draw (0c025958-0c026c7c) */

extern char *hit_find_part_entry(char *, int, int, int);
extern void hit_get_sphere_entry(char *, int, char *);
extern void hit_load_sphere_world(char *, char *, char *);
extern void hit_get_cylinder_entry(char *, int, char *);
extern void hit_load_cylinder_world(char *, char *, char *);
extern void hit_get_box_entry(char *, int, char *);
extern void hit_load_box_world(char *, char *, char *);
extern int FUN_0c026076(int, int, char *, int, int);
extern int hit_dispatch_shape_pair(int, int, char *, int);

int hit_probe_object_vs_slots(char *obj)
{
    char data_buf[60];
    char *entry;
    char *data_ptr;
    int i, result;
    char *slot_ptr;

    entry = hit_find_part_entry(obj, 1, obj[0x102], 0);
    switch (entry[1] & 15) {
    case 0:
        hit_get_sphere_entry(obj, *(short *)(entry + 2), data_buf + 44);
        hit_load_sphere_world(obj, data_buf + 44, data_buf + 44);
        data_ptr = data_buf + 44;
        break;
    case 1:
        hit_get_cylinder_entry(obj, *(short *)(entry + 2), data_buf);
        hit_load_cylinder_world(obj, data_buf, data_buf);
        data_ptr = data_buf;
        break;
    case 2:
        hit_get_box_entry(obj, *(short *)(entry + 2), data_buf + 20);
        hit_load_box_world(obj, data_buf + 20, data_buf + 20);
        data_ptr = data_buf + 20;
        break;
    }
    for (i = 0; i < *(signed char *)(obj + 0x2A8); i++) {
        slot_ptr = *(char **)(obj + 0x294 + i * 4);
        if (slot_ptr[2] == 0 || slot_ptr[2] == 1 || slot_ptr[2] == 2) {
            result = FUN_0c026076(entry[1], *(signed char *)(obj + 0x2A9 + i), data_ptr, *(int *)(obj + 0x280 + i * 4), *(int *)(obj + 0x294 + i * 4));
            if ((signed char)result >= 4) {
                return result;
            }
        }
    }
    for (i = 0; i < *(signed char *)(obj + 0x2D8); i++) {
        result = hit_dispatch_shape_pair(entry[1], *(signed char *)(obj + 0x2B8 + i), data_ptr, *(int *)(obj + 0x2C0 + i * 4));
        if ((signed char)result >= 4) {
            return result;
        }
    }
    return 0;
}
