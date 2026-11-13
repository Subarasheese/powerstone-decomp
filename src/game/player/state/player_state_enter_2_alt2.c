/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c09f8e0-0c09fe58) */

#define REC(step) ((char *)*(int *)(0xC664B50 + (obj)[3] * 0xB5EC8 + 0xA1234 + ((signed char)(obj)[0x71A4] << 2)) + 8 * ((unsigned short)*(unsigned short *)((obj) + 0x7198) + (step)))
int pl_get_held_item_class(char *p);
int pl_start_motion(char *p, int a, int b);
void FUN_0c0a3e64(int a, int b);

void pl_enter_state_32(char *obj)
{
    signed char kind;
    char *rec;
    signed char step;
    obj[0x71BA] = 32;
    obj[0x71BC] = 0;
    kind = pl_get_held_item_class(obj);
    if (kind == 5 || kind == 6 || kind == 7 || kind == 8) {
        pl_start_motion(obj, 2, 204);
    } else if (kind == 13) {
        pl_start_motion(obj, 2, 59);
    } else if (kind == 14) {
        pl_start_motion(obj, 2, 73);
    } else {
        pl_start_motion(obj, 0, 26);
        if (obj[4] == 2 || obj[4] == 6 || obj[4] == 7)
            FUN_0c0a3e64(obj[3], obj[0x27C]);
    }
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    step = obj[0x719C];
    rec = REC(step);
    *(short *)(obj + 236) = (unsigned char)rec[5];
    while (rec[4] == 0) {
        step = step + 1;
        *(short *)(obj + 236) = *(short *)(obj + 236) + (unsigned char)rec[5];
        rec = REC(step);
    }
    *(short *)(obj + 236) = *(short *)(obj + 236) / 4;
    if (*(short *)(obj + 236) == 0)
        *(short *)(obj + 236) = 1;
    *(float *)(obj + 68) = -(*(float *)(obj + 56) / (float)*(short *)(obj + 236));
    *(float *)(obj + 76) = -(*(float *)(obj + 64) / (float)*(short *)(obj + 236));
    *(float *)(obj + 72) = 0.0f;
    *(float *)(obj + 60) = 0.0f;
}
