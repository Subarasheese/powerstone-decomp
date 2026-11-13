/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5420-0c0b5620) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_rand_float(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);

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
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5568;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC33AA68); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33AA80); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33AA74); }
        t2 = (0x2E0 + t0);
        t0 = 0x0;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c06233a(t3, 0xC664958, (*(signed char *)((a4 + 0x2))));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x2)) = 0x31;
            FUN_0c0b5420((t3 + 0x4));
            t0 = (t0 + 0x1);
            (((struct o1C_float *)(t3))->v) = 0.25f;
            (((struct o20_float *)(t3))->v) = 0.25f;
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        t1 = 0x20;
    }
    return t1;
}
