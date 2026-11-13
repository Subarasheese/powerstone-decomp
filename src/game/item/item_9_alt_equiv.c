/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05cd68-0c05d254) */

extern int FUN_0c05d1ea(unsigned char *);
extern void FUN_0c05ceea(unsigned char *);
extern void FUN_0c05cff8(unsigned char *);
extern void FUN_0c05d0d8(unsigned char *);
extern void FUN_0c0cc7fc(int);
extern void obj_set_mode_owner(unsigned char *, int, int);
extern void math_vec3_accumulate(unsigned char *, unsigned char *);

void FUN_0c05cdb2(unsigned char *obj)
{
    switch ((signed char)obj[8]) {
    case 0:
        if ((signed char)obj[13] != -1) {
            *(short *)(obj + 236) = *(short *)(obj + 236) + 1;
            if (*(short *)(obj + 236) <= 120)
                return;
        }
        obj[8]++;
        *(short *)(obj + 236) = 0;
        *(short *)(obj + 238) = 0;
        obj[1] = 1;
        return;
    case 1:
        *(short *)(obj + 236) = *(short *)(obj + 236) + 1;
        if ((signed char)obj[13] == -1) {
            if (*(short *)(obj + 236) >= 40)
                obj[12] = 1;
        } else {
            if (*(short *)(obj + 236) >= 10)
                obj[12] = 1;
        }
        if ((signed char)FUN_0c05d1ea(obj)) {
            **(unsigned char **)(obj + 736) = 1;
            *(short *)(obj + 238) = 0;
        } else {
            *(short *)(obj + 238) = *(short *)(obj + 238) + 1;
            if (*(short *)(obj + 238) >= 900) {
                *(short *)(obj + 238) = *(short *)(obj + 238) + 1;
                if (*(short *)(obj + 238) >= 1080) {
                    obj[13] = -1;
                    FUN_0c0cc7fc((signed char)obj[14]);
                    obj[0x107] = 1;
                    obj[1] = 0;
                    obj_set_mode_owner(obj, 3, 2);
                    return;
                }
                **(unsigned char **)(obj + 736) = *(short *)(obj + 236) % 2;
            }
        }
        switch ((signed char)obj[9]) {
        case 0:
            FUN_0c05ceea(obj);
            break;
        case 1:
            FUN_0c05cff8(obj);
            break;
        }
        math_vec3_accumulate(obj + 32, obj + 56);
        math_vec3_accumulate(obj + 56, obj + 68);
        return;
    case 2:
        FUN_0c05d0d8(obj);
        return;
    }
}

void FUN_0c05d1cc(void)
{
    
}
