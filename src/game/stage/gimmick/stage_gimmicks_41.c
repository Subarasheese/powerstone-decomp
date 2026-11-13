/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5420-0c0b5620) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_rand_float(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);

int FUN_0c0b5420(int a4);

int FUN_0c0b5420(int a4)
{
    register float u0;

    u0 = -100.0f;
    u0 = u0 + 830.0f * (math_rand_float());
    *(float *)((a4 + 0x0)) = u0;
    u0 = 500.0f;
    u0 = u0 + 500.0f * (math_rand_float());
    (((struct o4_float *)(a4))->v) = u0;
    u0 = -700.0f;
    u0 = u0 + 800.0f * (math_rand_float());
    (((struct o8_float *)(a4))->v) = u0;
    return 0x8;
}

int stage_gimmick_38_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = obj_create(0x5, 0x1, 0xA);
    t5 = t4;
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned char *)((t4 + 0x1)) = 0x1;
        *(unsigned char *)((t4 + 0x3)) = 0x2;
        *(unsigned short *)((t4 + 0x6)) = 0x1;
        *(unsigned char *)((t4 + 0x5)) = 0x19;
        *(unsigned char *)((t4 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        *(unsigned int *)((t4 + 0x10)) = 0xC0B5568;
        t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        t0 = (0x2E0 + t2);
        t1 = t3;
        for (;;) {
            t2 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            FUN_0c06233a(t2, 0xC664958, (*(signed char *)((a4 + 0x2))));
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x31;
            FUN_0c0b5420((t2 + 0x4));
            t1 = (t1 + 0x1);
            (((struct o1C_float *)(t2))->v) = 0.25f;
            (((struct o20_float *)(t2))->v) = 0.25f;
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        t5 = 0x20;
    }
    return t5;
}
