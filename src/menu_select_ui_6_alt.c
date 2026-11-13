/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8600-0c0a8d6c) */

struct Vec3i { int x, y, z; };
extern void FUN_0c0623a6(char *part, int q, int n);
extern void obj_destroy(char *obj);
typedef struct { int x, y, z; } Vec3i_r2;
typedef struct { char used; char pad[15]; void (*fn)(void); char pad2[0x50 - 20]; Vec3i_r2 rec; } Slot;
extern Slot *obj_create(int, int, int, int);
extern void menu_ui_task_20(void);

void menu_ui_task_19(char *obj)
{
    char *part;
    int limit;
    switch (obj[8]) {
    case 0:
        obj[8]++;
        obj[9] = 0;
        obj[1] = 1;
        *(short *)(obj + 6) = 31;
        obj[5] = 25;
        FUN_0c0623a6(*(char **)(obj + 736), 0xC664A48, obj[3] + 16);
        **(char **)(obj + 736) = 1;
        *(short *)(*(char **)(obj + 736) + 2) = 31;
        *(struct Vec3i *)(obj + 44) = *(struct Vec3i *)(*(char **)(obj + 736) + 16);
        *(int *)(*(char **)(obj + 736) + 16) = 0;
        *(int *)(*(char **)(obj + 736) + 20) = 0;
        *(int *)(*(char **)(obj + 736) + 24) = 0;
        *(struct Vec3i *)(obj + 32) = *(struct Vec3i *)(*(char **)(obj + 736) + 4);
        *(float *)(*(char **)(obj + 736) + 4) = 0.0f;
        *(float *)(*(char **)(obj + 736) + 8) = 0.0f;
        *(float *)(*(char **)(obj + 736) + 12) = 0.0f;
        if (obj[3] == 0)
            *(int *)(*(char **)(obj + 736) + 24) = 4096;
        else
            *(int *)(*(char **)(obj + 736) + 24) = 0xF000;
        obj[4] = ((signed char *)0xC7F2E54)[(unsigned char)(obj[3] * 120)];
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            obj[8]++;
        switch (obj[9]) {
        case 0:
            if (obj[4] != ((signed char *)0xC7F2DF0)[(unsigned char)(obj[3] * 120) + 100]) {
                obj[4] = ((signed char *)0xC7F2DF0)[(unsigned char)(obj[3] * 120) + 100];
                obj[9]++;
            }
            return;
        case 1:
            if (obj[3] == 0) {
                limit = 0x7000;
                if (*(int *)(*(char **)(obj + 736) + 24) >= limit) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) += 4096;
                if (*(int *)(*(char **)(obj + 736) + 24) < limit) goto write_back;
            } else {
                limit = 0x9000;
                if (!(*(int *)(*(char **)(obj + 736) + 24) > limit)) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) -= 4096;
                if (*(int *)(*(char **)(obj + 736) + 24) > limit) goto write_back;
            }
            *(int *)(*(char **)(obj + 736) + 24) = limit;
            obj[9]++;
            goto write_back;
        case 2:
            if (obj[3] == 0) {
                if (!(*(int *)(*(char **)(obj + 736) + 24) > 4096)) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) -= 4096;
                if (*(int *)(*(char **)(obj + 736) + 24) > 4096) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) = 4096;
            } else {
                if (*(int *)(*(char **)(obj + 736) + 24) >= 0xF000) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) += 4096;
                if (!(*(int *)(*(char **)(obj + 736) + 24) >= 0xF000)) goto write_back;
                *(int *)(*(char **)(obj + 736) + 24) = 0xF000;
            }
            obj[9] = 0;
            goto write_back;
        default:
            obj[9] = 0;
            return;
        }
    default:
        obj_destroy(obj);
        return;
    }
write_back:
    part = *(char **)(obj + 736);
    *(int *)(part + 24) = *(int *)(part + 24) & 0xFFFF;
}

void menu_ui_spawn_20(void)
{
    Vec3i_r2 rec_copy;
    Slot *slot;

    rec_copy = *(Vec3i_r2 *)0xC152B90;
    slot = obj_create(5, 1, 10, 0);
    if (slot != 0) {
        slot->used = 1;
        slot->rec = rec_copy;
        slot->fn = menu_ui_task_20;
    }
}
