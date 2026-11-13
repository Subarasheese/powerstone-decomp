/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c049408-0c0496f0) */

int fx_init_perturbed_rows(int);
int obj_destroy(int);
int FUN_0c06231c(int, int, int);

void fx_tick_0492a4(char *obj)
{
    char **child_list;
    char *child;
    signed char *bytes;
    int idx;

    switch (obj[8]) {
    case 0:
        obj[8] = obj[8] + 1;
        for (idx = 0; idx < 10; idx++) {
            child = ((char **)(obj + 0x2E0))[idx];
            child[0x10 + 4] = obj[4];
            child[0x10 + 3] = idx;
            child[0x10 + 1] = (idx / 5) << 3;
            fx_init_perturbed_rows((int)child);
        }
        /* fall through */
    case 1:
        child_list = (char **)(obj + 0x2E0);
        for (idx = 10; idx != 0; idx--) {
            child = *child_list++;
            bytes = (signed char *)(child + 0x10);
            if (bytes[2] != 0) {
                child[0] = 0;
                bytes[2] = bytes[2] - 1;
                if (bytes[2] == 0) {
                    child[0] = 1;
                }
                continue;
            }
            *(float *)(child + 0x1C) = *(float *)(child + 0x1C) + 0.00199999986f;
            *(float *)(child + 0x20) = *(float *)(child + 0x20) + 0.00199999986f;
            *(float *)(child + 0x24) = *(float *)(child + 0x24) + 0.00199999986f;
            *(float *)(child + 8) = *(float *)(child + 8) + 0.399999976f;
            bytes[0] = bytes[0] - 1;
            if (bytes[0] == 0) {
                bytes[0] = 3;
                bytes[1] = bytes[1] + 1;
                if (bytes[1] >= 16) {
                    bytes[1] = 0;
                    fx_init_perturbed_rows((int)child);
                } else {
                    FUN_0c06231c((int)child, 0xC4CFA68, bytes[1] + 0x21);
                }
            }
            if (child[0] != 0 && bytes[1] >= 12) {
                *(float *)(child + 0x40) = ((float)bytes[0] + 3.0f * (-(float)bytes[1] + 15.0f)) / 12.0f;
            }
        }
        break;
    case 2:
        obj_destroy((int)obj);
        break;
    }
}
