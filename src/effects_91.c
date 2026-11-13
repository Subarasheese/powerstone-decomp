/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0419a8-0c041e14) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c0e6fe8();

int FUN_0c0419a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = obj_create(0x5, 0x1, 0x1);
    if (t2 == 0) {
        return t2;
    }
    *(unsigned char *)((t2 + 0x0)) = 0x1;
    *(unsigned char *)((t2 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((t2 + 0x1)) = 0x1;
    *(unsigned char *)((t2 + 0x5)) = 0x19;
    *(unsigned int *)((t2 + 0x10)) = 0xC041DC8;
    *(unsigned char *)((t2 + 0x4)) = a5;
    *(unsigned int *)((t2 + 0x1C)) = a4;
    t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, 0x1);
    t3 = ((int (*)(int))(FUN_0c0e6fe8))(0xC149BD4);
    t3 = ((int (*)(void))(FUN_0c0e6fe8))();
    (((struct o5C_float *)(t2))->v) = 1.0f;
    t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
    t0 = (((struct o2E0_int *)(t2))->v);
    *(unsigned char *)((t0 + 0x0)) = t1;
    *(unsigned short *)((t0 + 0x2)) = 0xF;
    t1 = *(signed char *)(((0x3 + t2) + 0x0));
    FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), (*(signed char *)(((signed char)a5 + 0xC3217C8))));
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
                if ((signed char)a5 != 3) {
                    return (signed char)a5;
                }
                return ((int (*)(int, int, int, int))(0xC041B20))(0x41F, 0x0, a6, a7);
            }
            *(unsigned short *)((t2 + 0x6)) = 0x21F;
            (((struct o118_uint *)(t2))->v) = 0x0;
            t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x41F, 0x0);
            u0 = ((((struct o20_float *)(t2))->v));
            u0 = u0 + 300.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
            (((struct o20_float *)(t2))->v) = u0;
            u0 = ((((struct o28_float *)(t2))->v));
            u0 = u0 + 300.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
            (((struct o28_float *)(t2))->v) = u0;
            return 0xC041B18;
        }
        *(unsigned short *)((t2 + 0x6)) = 0x41F;
        (((struct o118_uint *)(t2))->v) = (0xF60 + a4);
        *(unsigned int *)((t2 + 0x2C)) = 0xFFFFD556;
        return 0x118;
    }
    *(unsigned short *)((t2 + 0x6)) = 0x41F;
    (((struct o118_uint *)(t2))->v) = (0x47C0 + a4);
    return ((int (*)(int, int, int, int))(0xC041B2E))(0x41F, 0x0, a6, a7);
}
