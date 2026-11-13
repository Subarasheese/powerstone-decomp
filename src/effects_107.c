/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0457d0-0c045968) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o308_float { char p[0x308]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
int memset(int, int, int);

int fx_spawn_0457d0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = obj_create(0x5, 0x1, 0x8);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x5)) = 0x1;
        *(unsigned int *)((t2 + 0x10)) = 0xC045AAC;
        (((struct o118_uint *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        *(unsigned int *)((t2 + 0x30)) = 0x0;
        *(unsigned int *)((t2 + 0x2C)) = 0x0;
        (((struct o58_float *)(t2))->v) = 1.0f;
        (((struct o54_float *)(t2))->v) = 1.0f;
        (((struct o50_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t2 + 0x1C)) = 0x0;
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))), 0xC664A18, t4);
            *(unsigned char *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0));
            t5 = ((int (*)(int))(FUN_0c0e6fe8))((signed char)(((t4 << 1) + t4) << 2));
            *(volatile int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0));
            t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        t0 = 0x6;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))), 0xC664A18, 0x3);
            *(unsigned char *)(((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c0e6fe8))((signed char)(((t0 << 1) + t0) << 2));
            *(volatile int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
        }
        memset((t2 + 0x308), 0x0, 0x14);
        *(unsigned char *)(((t2 + 0x308) + 0x5)) = 0x1;
        (((struct o308_float *)(t2))->v) = 0.0f;
        t3 = 0x1;
    }
    return t3;
}
