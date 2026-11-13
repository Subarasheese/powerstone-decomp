/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5770-0c0b5a5c) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int stage_random_spawn_position(int);
extern int _quick_odd_mvn();

int stage_gimmick_40_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B59BE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC33AAB8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33AAD0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33AAC4); }
        u0 = *(float *)0xC0B5A48;
        t2 = (0x2E0 + t0);
        t0 = 0x0;
        t3 = 0x1;
        for (;;) {
            t4 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c06233a(t4, 0xC664958, (*(signed char *)((a4 + 0x2))));
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x2)) = 0x411;
            stage_random_spawn_position((t4 + 0x4));
            t0 = (t0 + 0x1);
            (((struct o1C_float *)(t4))->v) = ((float)t3 * u0);
            (((struct o20_float *)(t4))->v) = 1.0f;
            (((struct o24_float *)(t4))->v) = ((float)t3 * u0);
            (((struct o40_float *)(t4))->v) = 1.0f;
            t3 = (t3 + 0x1);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        t1 = 0x40;
    }
    return t1;
}

int stage_gimmick_40_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u4;
    register int t6;

    t0 = a4;
    t1 = (0x2E0 + a4);
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        u4 = (((struct o40_float *)(t3))->v);
        (((struct o40_float *)(t3))->v) = (u4 - 0.099999994f);
        if (!((u4 - 0.099999994f) > 0.0f)) {
            t0 = t3;
            t0 = (t0 + 0x4);
            stage_random_spawn_position(t0);
            (((struct o40_float *)(t3))->v) = 1.0f;
        } else {
            t6 = t0;
        }
        t0 = t6;
        t2 = (t2 + 0x1);
        (((struct o1C_float *)(t3))->v) = ((-((((struct o40_float *)(t3))->v))) + 2.0f);
        (((struct o24_float *)(t3))->v) = ((-((((struct o40_float *)(t3))->v))) + 2.0f);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    return 0x24;
}
