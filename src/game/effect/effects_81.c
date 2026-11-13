/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03f434-0c03fab4) */

int FUN_0c03f434(int a4, int a5, int a6, int a7);
struct o2C_float { char p[0x2C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c06231c(int, int, int);
float math_rand_float(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);


int FUN_0c03f666(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = 0xC03F728;
    t1 = a4;
    t2 = (0x2E0 + a4);
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            t3 = (t3 + 0x1);
            if (((*(int *)((t5 + 0x34))) & 0x1) != 0) {
                u0 = (math_rand_float());
                u0 = (u0 * 255.0f);
                u1 = 2.14748365e+09f;
                if (!(u1 > u0)) {
                    u1 = (u1 + u1);
                    u0 = (u0 - u1);
                }
                t0 = 0x4;
                t0 = (FUN_0c0e6f24());
                t6 = t0;
                t0 = (t0 << 1);
                t0 = (t0 + t6);
                t0 = (t0 << 2);
                t0 = 0xC149A60;
                t0 = 0xC;
                t0 = (FUN_0c0e6fe8());
            } else {
                t6 = t1;
                u2 = u1;
                u3 = u0;
            }
            u1 = u2;
            u0 = u3;
            t0 = 0x1C;
            t1 = t6;
            u0 = (*(float *)((t5 + t0)));
            u0 = (u0 - 0.099999994f);
            *(float *)((t5 + t0)) = u0;
            t0 = 0x20;
            u1 = (*(float *)((t5 + t0)));
            u0 = 0.0f;
            u1 = (u1 - 0.099999994f);
            *(float *)((t5 + t0)) = u1;
            if (!(u1 > u0)) {
                *(unsigned char *)((t5 + 0x0)) = 0x0;
            }
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x9) {
            break;
        }
    }
    return t3;
}
