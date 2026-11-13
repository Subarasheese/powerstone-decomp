int FUN_0c06233a(int, int, int);
/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c047df4-0c048074) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06231c(int, int, int);
struct oC_float { char p[0xC]; float v; };


int fx_spawn_item_sparkle(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x29;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC047FDE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a4); }
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x5);
        u0 = (float)t2;
        if ((int)t2 < 0) {
            u0 = ((float)t2 + 4.2949673e+09f);
        }
        u1 = -25.0f;
        u1 = u1 + 10.0f * ((u0 + 1.0f));
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + u1);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x4);
        u0 = (float)t2;
        if ((int)t2 < 0) {
            u0 = ((float)t2 + 4.2949673e+09f);
        }
        u1 = ((((struct o24_float *)(t0))->v));
        u1 = u1 + 10.0f * ((u0 + 1.0f));
        (((struct o24_float *)(t0))->v) = u1;
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x5);
        u0 = (float)t2;
        if ((int)t2 < 0) {
            u0 = ((float)t2 + 4.2949673e+09f);
        }
        u1 = -25.0f;
        u1 = u1 + 10.0f * ((u0 + 1.0f));
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + u1);
        (((struct o118_uint *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC14A910); }
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((t0 + 0x34)) = (((((((int)((unsigned int)(int)u1 % (unsigned int)0x4)) << 8) << 2) << 2) << 2) & 0xFFFF);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC14A904); }
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x4;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC4CFA68, ((*(signed char *)((t0 + 0xEE))) - 128));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0xF;
        (((struct oC_float *)(t2))->v) = (*(float *)0xC048068);
        t1 = 0xC;
    }
    return t1;
}

int fx_tick_item_sparkle(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x4) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            return 0x0;
        }
        (((struct oEC_ushort *)(a4))->v) = 0x4;
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_kyoutsuu), ((*(signed char *)((a4 + 0xEE))) - 128));
    }
    return 0xEC;
}
