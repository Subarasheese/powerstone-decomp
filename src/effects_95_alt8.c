/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

typedef struct { int x, y, z; } Vec3i;
extern char *obj_create(int, int, int, int);
extern void FUN_0c06233a(char *, char *, int);
extern float math_rand_float(void);
extern void FUN_0c043706(void);

char *fx_spawn_burst_slot(char owner_idx, char child_count, char kind_byte, Vec3i *rec4_array, Vec3i *rec40_array, Vec3i *rec52_array)
{
    char *slot, *child;
    int idx, count;

    slot = obj_create(5, 1, child_count, 0);
    if (slot == 0) {
        return 0;
    }
    slot[0] = 1;
    slot[3] = owner_idx;
    slot[4] = kind_byte;
    *(short *)(slot + 6) = 15;
    slot[5] = 25;
    *(void (**)(void))(slot + 16) = FUN_0c043706;
    *(int *)(slot + 52) = 0;
    *(int *)(slot + 48) = 0;
    *(int *)(slot + 44) = 0;
    *(float *)(slot + 88) = 1.0f;
    *(float *)(slot + 84) = 1.0f;
    *(float *)(slot + 80) = 1.0f;
    *(int *)(slot + 0x118) = 0;
    count = child_count;
    if (count > 0) {
        idx = 0;
        do {
            FUN_0c06233a(*(char **)(slot + 0x2E0 + (signed char)idx * 4), (char *)0xC4CFA68, 33);
            child = *(char **)(slot + 0x2E0 + (signed char)idx * 4);
            child[0] = 0;
            child = *(char **)(slot + 0x2E0 + (signed char)idx * 4);
            *(short *)(child + 2) = 1592;
            if (rec4_array != 0) {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 4) = rec4_array[(signed char)idx];
            } else {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 4) = *(Vec3i *)0xC149DD0;
            }
            if (rec40_array != 0) {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 40) = rec40_array[(signed char)idx];
            } else {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 40) = *(Vec3i *)0xC149DD0;
            }
            if (rec52_array != 0) {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 52) = rec52_array[idx];
            } else {
                *(Vec3i *)(*(char **)(slot + 0x2E0 + (signed char)idx * 4) + 52) = *(Vec3i *)0xC149DD0;
            }
            *(int *)(*(char **)(slot + 0x2E0 + idx * 4) + 24) = ((unsigned int)(math_rand_float() * 255.0f) % 16) << 12;
            idx++;
        } while ((signed char)idx < count);
    }
    return slot;
}
