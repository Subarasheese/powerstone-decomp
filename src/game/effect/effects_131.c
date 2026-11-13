/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04b1f0-0c04b428) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int);
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(int);

int fx_spawn_04b2d4(int, int, int);

int fx_spawn_04b1f0(int a4)
{
    register int t0;
    register int t2;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x6, 0x1, 0x0, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC04B22E;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = 0xEC;
    }
    return t2;
}

int fx_tick_04b1f0(int a4)
{
    register int t1;

    if (((((struct oEC_short *)(a4))->v)) == 0) {
        t1 = 0x0;
        for (;;) {
            fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x0, t1);
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x5) {
                break;
            }
        }
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x1, 0x0);
        }
    }
    if (((((struct oEC_short *)(a4))->v)) == 3) {
        fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x1, 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) == 6) {
        fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x1, 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) == 9) {
        fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x1, 0x0);
    }
    if (((((struct oEC_short *)(a4))->v)) == 12) {
        fx_spawn_04b2d4((*(int *)((a4 + 0x1C))), 0x1, 0x0);
    }
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x18) {
        obj_destroy(a4);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    return 0xEC;
}

int fx_spawn_04b2d4(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t23;
    register int t10;
    register float t11;
    register float u14;
    register int t16;
    register float u19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x6, 0x1, 0x1, 0x0);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC04B428;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC321FFC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x60)) = *(struct mv3 *)(0xC321FFC); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, ((*(signed char *)(((int)stk + 0))) + 0x46));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        (((struct o8_float *)(((((struct o2E0_int *)(t0))->v))))->v) = (float)((short)(*(signed char *)(((int)stk + 4))) * (short)0x32);
        t10 = (((struct o2E0_int *)(t0))->v);
        t11 = math_rand_float();
        u14 = (t11 * 255.0f);
        if (!(2.14748365e+09f > (t11 * 255.0f))) {
            u14 = (((t11 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t16 = (int)((unsigned int)(int)u14 % (unsigned int)0x12);
        u19 = (float)(((t16 << 2) + t16) << 2);
        if ((int)(((t16 << 2) + t16) << 2) < 0) {
            u19 = ((float)(((t16 << 2) + t16) << 2) + 4.2949673e+09f);
        }
        *(unsigned int *)(((t10 + 0x14) + 0x0)) = (((int)((u19 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30)))) & 0xFFFF);
        t23 = 0xC04B420;
    }
    return t23;
}
