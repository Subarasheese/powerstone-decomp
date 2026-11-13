/* key config editing screen (state 0c362378, reset keys) (0c01d304-0c01e798) */

signed char FUN_0c01e606(int, int);
void FUN_0c01e444(void);
void FUN_0c01e4a0(void);
void snd_play_side_se(int, int);
int FUN_0c01d9e0(int);
int FUN_0c01da70(int);
int FUN_0c01dada(int);
int FUN_0c01db74(int, int, int, int, float, float, float, float, float, float, float);
extern float math_sin_angle16(int);
void ui_draw_element_sprite(unsigned char *);
struct PickupGlobal {
    unsigned char mode;     /* 0 */
    char p1[6];
    signed char row;        /* 7 */
    char p8[8];
    int ang;                /* 16 */
};
int FUN_0c01e4ea(int);

int FUN_0c01d7ee(void)
{
    unsigned char *screen = (unsigned char *)0xC362378;
    int result = 0;

    switch (screen[0]) {
    case 0:
        FUN_0c01e444();
        screen[7] = 0;
        *(int *)(screen + 16) = 0;
        screen[0] = screen[0] + 1;
        /* fall through */
    case 1:
        *(int *)(screen + 16) = (unsigned short)(*(int *)(screen + 16) + 0x5b0);
        if (FUN_0c01e606(2, 32) != 0) {
            screen[7] = screen[7] + 1;
            snd_play_side_se(0, 75);
            screen[7] = (signed char)screen[7] % 2;
        } else if (FUN_0c01e606(2, 16) != 0) {
            screen[7] = screen[7] - 1;
            snd_play_side_se(0, 75);
            if ((signed char)screen[7] < 0)
                screen[7] = 1;
        }
        if (FUN_0c01e606(2, 8) != 0 || FUN_0c01e606(2, 4) != 0) {
            if ((signed char)screen[7] == 1)
                screen[0] = 3;
            else
                screen[0] = 2;
            screen[1] = 0;
        }
        break;
    case 3:
        if (screen[1] == 0) {
            screen[8] = 60;
            screen[1] = screen[1] + 1;
        }
        screen[8] = screen[8] - 1;
        if ((signed char)screen[8] <= 0)
            result = 2;
        break;
    default:
        if (screen[1] == 0) {
            screen[8] = 60;
            screen[1] = screen[1] + 1;
        }
        screen[8] = screen[8] - 1;
        if ((signed char)screen[8] <= 0)
            result = 1;
        break;
    }
    FUN_0c01e4a0();
    return result;
}

int FUN_0c01dd08(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4));
        if ((unsigned char)t2 != 0) {
            if ((unsigned char)t2 != 1) {
                if ((unsigned char)t2 != 2) {
                    t1 = (unsigned char)t2;
                    if ((unsigned char)t2 != 4) {
                    } else {
                        t1 = (FUN_0c01db74(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10));
                    }
                    t2 = t1;
                } else {
                    t2 = (FUN_0c01dada(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
                }
                t1 = t2;
            } else {
                t1 = (FUN_0c01da70(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
            }
        } else {
            t1 = (FUN_0c01d9e0(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t1;
}

void FUN_0c01e34a(unsigned char *obj)
{
    struct PickupGlobal *global;
    float *row_ptr;

    switch (obj[0]) {
    case 0:
        obj[0] = obj[0] + 1;
        obj[7] = 1;
        obj[12] = 0;
        *(int *)(obj + 44) = 0xC18058A;
        *(float *)(obj + 16) = 1.0f;
        /* fall through */
    case 1:
        global = (struct PickupGlobal *)0xC362378;
        row_ptr = (float *)(0xC180B3C + (signed char)(global->row * 20));
        *(float *)(obj + 28) = row_ptr[0];
        *(float *)(obj + 32) = row_ptr[1];
        *(float *)(obj + 36) = row_ptr[2];
        *(float *)(obj + 20) = row_ptr[3];
        *(float *)(obj + 24) = row_ptr[4];
        *(float *)(obj + 16) = 0.75f + 0.25f * math_sin_angle16(global->ang);
        if (global->mode > 1) {
            *(float *)(obj + 16) = 1.0f;
            obj[7] = 0;
            *(int *)(obj + 8) = 0;
            obj[0] = obj[0] + 1;
        }
        break;
    default:
        if (*(int *)(obj + 8) % 4 == 0)
            obj[7] = obj[7] ^ 1;
        *(int *)(obj + 8) = *(int *)(obj + 8) + 1;
        break;
    }
    if (obj[7] != 0)
        ui_draw_element_sprite(obj);
}

int FUN_0c01e5cc(void)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4));
        t4 = (unsigned char)t2;
        if ((unsigned char)t2 == 0) {
            t4 = (FUN_0c01e4ea(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t4;
}
