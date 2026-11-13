/* hit effect spawners (04B6B8..04BEF2) and kind dispatchers (0c04b6b8-0c04bfd0) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int math_rand_next(void);
int _modls(void);
int _quick_odd_mvn(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };

int fx_spawn_04b6b8(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((a4 == 0) && ((a6 == 0) || (a7 == 0))) {
    } else {
        t0 = obj_create(0x5, 0x1, 0x1, 0x0);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned char *)((t0 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(t0))->v) = 0x0;
            *(unsigned char *)((t0 + 0x4)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x1;
            *(unsigned char *)((t0 + 0x5)) = 0x19;
            *(unsigned int *)((t0 + 0x10)) = 0xC04B7B4;
            (((struct o118_uint *)(t0))->v) = 0x0;
            if (a4 != 0) {
                *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((0x10C + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
            } else {
                *(unsigned char *)((t0 + 0x3)) = 0x2;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a6); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(a7); }
            }
            *(unsigned int *)((t0 + 0x34)) = ((int)((int)(math_rand_next()) % (int)0x10000));
            t2 = (((struct o2E0_int *)(t0))->v);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x238;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            t1 = 0x4C;
        }
        t0 = t1;
    }
    return t0;
}

int fx_tick_04b6b8(int a4, int a5, int a6, int a7)
{
    register int t1;
    register float u5;
    register int t18;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t1 = (((struct o2E0_int *)(a4))->v);
        FUN_0c06233a(t1, ((int)g_res_kyoutsuu), (*(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC32203C))));
        u5 = *(float *)0xC04B8F8;
        (((struct o1C_float *)(t1))->v) = u5;
        (((struct o20_float *)(t1))->v) = u5;
        (((struct o24_float *)(t1))->v) = u5;
        *(unsigned int *)((t1 + 0x18)) = (*(int *)((a4 + 0x34)));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)((0xC32203C + ((((struct oEC_short *)(a4))->v))))) == -1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
        t18 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x7) {
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - u5);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - u5);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - u5);
            t18 = 0x4C;
        }
        return t18;
    }
    return obj_destroy(a4, a5, a6, a7);
}

int fx_tick_04baa6(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t6;
    register int t16;
    register float u4;
    register float u5;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t2 = 0x0;
        t3 = (0x2E0 + a4);
        for (;;) {
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            *(unsigned int *)((t6 + 0x10)) = ((*(int *)((t6 + 0x10))) + 0x1000);
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x8) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t2 = (t2 + 0x1);
            t16 = 0xEC;
            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x4) {
                u5 = ((((struct o44_float *)(t6))->v));
                u5 = (u5 - 0.099999994f);
                (((struct o44_float *)(t6))->v) = u5;
                u4 = ((((struct o48_float *)(t6))->v));
                u4 = (u4 - 0.099999994f);
                (((struct o48_float *)(t6))->v) = u4;
                u5 = ((((struct o4C_float *)(t6))->v));
                u5 = (u5 - 0.099999994f);
                (((struct o4C_float *)(t6))->v) = u5;
                t16 = 0x4C;
            }
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        return t16;
    }
    return obj_destroy(a4, a5, a6, a7);
}

int fx_tick_04bc94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        u0 = (((struct o0_float *)0xC04BE84)->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + u0);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + u0);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + u0);
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x8) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t1 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x4) {
            u0 = (((struct o4_float *)0xC04BE84)->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - u0);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - u0);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - u0);
            t1 = 0x4C;
        }
        return t1;
    }
    return obj_destroy(a4, t0, a6, a7);
}
