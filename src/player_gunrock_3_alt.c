/* character 4 (Gunrock) (0c079386-0c07a1e4) */

typedef struct { signed char data[560]; } T560;
extern int pl_gunrock_ease_scale(char *, int, int, int);
extern char pl_step_motion(char *);

char pl_gunrock_step_scale_script(char *obj)
{
    T560 tbl_a, tbl_b, tbl_c;
    char *slots;
    int slot, row_ofs;

    tbl_c = *(T560 *)0xC14FBA0;
    tbl_b = *(T560 *)0xC14FDD0;
    tbl_a = *(T560 *)0xC150000;
    slots = obj + 0x72BC;
    for (slot = 0; slot < 5; slot++) {
        row_ofs = (short)(slot * 112);
        if (slots[3 + slot] == 0) {
            if (tbl_c.data[row_ofs + slots[2]] != -1) {
                slots[8 + slot]++;
                if (slots[8 + slot] == tbl_c.data[row_ofs + slots[2]]) {
                    slots[3 + slot]++;
                }
            }
        } else if (slots[3 + slot] == 1) {
            switch (tbl_a.data[row_ofs + slots[2]]) {
            case 0:
                pl_gunrock_ease_scale(obj, 6, 0, slot);
                break;
            case 1:
                pl_gunrock_ease_scale(obj, 10, 0, slot);
                break;
            case 2:
                pl_gunrock_ease_scale(obj, 13, 0, slot);
                break;
            case 3:
                pl_gunrock_ease_scale(obj, 16, 0, slot);
                break;
            case 4:
                pl_gunrock_ease_scale(obj, 6, 0, slot);
                pl_gunrock_ease_scale(obj, 10, 0, slot);
                break;
            case 5:
                pl_gunrock_ease_scale(obj, 13, 0, slot);
                pl_gunrock_ease_scale(obj, 16, 0, slot);
                break;
            case 6:
                pl_gunrock_ease_scale(obj, -1, 0, slot);
                break;
            default:
                break;
            }
            slots[8 + slot]++;
            if (slots[8 + slot] == tbl_b.data[row_ofs + slots[2]]) {
                slots[3 + slot]++;
            }
        } else if (slots[3 + slot] == 2) {
            switch (tbl_a.data[row_ofs + slots[2]]) {
            case 0:
                pl_gunrock_ease_scale(obj, 6, 1, slot);
                break;
            case 1:
                pl_gunrock_ease_scale(obj, 10, 1, slot);
                break;
            case 2:
                pl_gunrock_ease_scale(obj, 13, 1, slot);
                break;
            case 3:
                pl_gunrock_ease_scale(obj, 16, 1, slot);
                break;
            case 4:
                pl_gunrock_ease_scale(obj, 6, 1, slot);
                pl_gunrock_ease_scale(obj, 10, 1, slot);
                break;
            case 5:
                pl_gunrock_ease_scale(obj, 13, 1, slot);
                pl_gunrock_ease_scale(obj, 16, 1, slot);
                break;
            case 6:
                pl_gunrock_ease_scale(obj, -1, 1, slot);
                break;
            default:
                break;
            }
        }
    }
    return pl_step_motion(obj);
}
