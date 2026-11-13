/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0acaf8-0c0acc54) */

struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int snd_play_stage_obj_se(int, int, int);
int FUN_0c0e6fe8(void);

int fx_spawn_burst_sprites(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = obj_create(0x5, 0x1, 0xA);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0x1;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        *(unsigned char *)((t1 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = (signed char)a4;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t1 + 0x10)) = 0xC0ACC54;
        t2 = t0;
        for (;;) {
            t0 = *(int *)((((t2 << 2) + (0x2E0 + t1)) + 0x0));
            FUN_0c06233a(t0, 0xC664970, (t2 + 0xF));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x2)) = 0x401;
            t3 = ((int (*)(void))(FUN_0c0e6fe8))();
            if ((signed char)a4 != 0) {
                u0 = ((((struct o4_float *)(t0))->v));
                u0 *= -1.0f;
                (((struct o4_float *)(t0))->v) = u0;
            }
            t3 = ((int (*)(void))(FUN_0c0e6fe8))();
            if ((signed char)a4 != 0) {
                *(unsigned int *)((t0 + 0x14)) = 0x8000;
            }
            t3 = ((int (*)(void))(FUN_0c0e6fe8))();
            t2 = (t2 + 0x1);
            (((struct o40_float *)(t0))->v) = 1.0f;
            if ((int)t2 >= (int)0xA) {
                break;
            }
        }
        return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x3);
    }
    return t1;
}
