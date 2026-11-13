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
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);


int FUN_0c03f666(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;
    register float u1;

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
                t6 = t5;
                t6 = (t6 + 0x44);
                u0 = ((math_rand_float()));
                u0 = (u0 * 255.0f);
                u1 = 2.14748365e+09f;
                if (!(u1 > u0)) {
                    u1 = (u1 + u1);
                    u0 = (u0 - u1);
                }
                t7 = 0xC0E6F24;
                t8 = t6;
                t6 = (int)u0;
                t0 = 0x4;
                t0 = ((int)((unsigned int)t6 % (unsigned int)t0));
                t9 = t0;
                t0 = (t0 << 1);
                t0 = (t0 + t9);
                t0 = (t0 << 2);
                t6 = t8;
                t7 = (signed char)t0;
                t0 = 0xC149A60;
                t7 = (t7 + t0);
                t0 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t7); }
            } else {
                t6 = t1;
            }
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
