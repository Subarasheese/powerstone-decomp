/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04aa24-0c04add0) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_04aa24(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x4;
    if ((signed char)a5 != 0) {
        t0 = 0x2;
    }
    t1 = obj_create(0x6, 0x1, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        *(unsigned char *)((t1 + 0x4)) = a5;
        *(unsigned short *)((t1 + 0x6)) = 0x1;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC04AB2C;
        (((struct o118_uint *)(t1))->v) = 0x0;
        FUN_0c0e6fe8();
        t2 = (((struct o2E0_int *)(t1))->v);
        FUN_0c06233a(t2, ((int)g_res_kyoutsuu), 0x60);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x231;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o4C_float *)(t2))->v) = 1.0f;
        t2 = (((struct o2E4_int *)(t1))->v);
        FUN_0c06233a(t2, ((int)g_res_kyoutsuu), 0x60);
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t2 + 0x2)) = 0x231;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o4C_float *)(t2))->v) = 1.0f;
        if ((signed char)a5 == 0) {
            t2 = (((struct o2E8_int *)(t1))->v);
            FUN_0c06233a(t2, ((int)g_res_kyoutsuu), 0x61);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x214;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            t2 = (((struct o2EC_int *)(t1))->v);
            FUN_0c06233a(t2, ((int)g_res_kyoutsuu), 0x61);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            *(unsigned short *)((t2 + 0x2)) = 0x214;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
        }
        t0 = 0x4C;
    }
    return t0;
}

int fx_tick_04aa24(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = 0x4;
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        t0 = 0x2;
    }
    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    if ((int)t0 > 0) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0x2E0 + a4)) + 0x0));
            switch (t1) {
            case 0:
                u0 = ((((struct o1C_float *)(t2))->v));
                u0 = (u0 + 2.0f);
                (((struct o1C_float *)(t2))->v) = u0;
                u1 = ((((struct o20_float *)(t2))->v));
                u1 = (u1 + 2.0f);
                (((struct o20_float *)(t2))->v) = u1;
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0xA) {
                    u0 = ((((struct o44_float *)(t2))->v));
                    u0 = (u0 - 0.099999994f);
                    (((struct o44_float *)(t2))->v) = u0;
                    u1 = ((((struct o48_float *)(t2))->v));
                    u1 = (u1 - 0.099999994f);
                    (((struct o48_float *)(t2))->v) = u1;
                    u0 = ((((struct o4C_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.099999994f);
                    (((struct o4C_float *)(t2))->v) = u0;
                    u0 = ((((struct o44_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o44_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o48_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o48_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o4C_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o4C_float *)(t2))->v) = 0.0f;
                    }
                }
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x14) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 1:
                if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0xA) {
                } else {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    u0 = ((((struct o1C_float *)(t2))->v));
                    u0 = (u0 + 2.0f);
                    (((struct o1C_float *)(t2))->v) = u0;
                    u1 = ((((struct o20_float *)(t2))->v));
                    u1 = (u1 + 2.0f);
                    (((struct o20_float *)(t2))->v) = u1;
                    if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x14) {
                    } else {
                        u0 = ((((struct o44_float *)(t2))->v));
                        u0 = (u0 - 0.099999994f);
                        (((struct o44_float *)(t2))->v) = u0;
                        u1 = ((((struct o48_float *)(t2))->v));
                        u1 = (u1 - 0.099999994f);
                        (((struct o48_float *)(t2))->v) = u1;
                        u0 = ((((struct o4C_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.099999994f);
                        (((struct o4C_float *)(t2))->v) = u0;
                        u0 = ((((struct o44_float *)(t2))->v));
                        t3 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o44_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o48_float *)(t2))->v));
                        t3 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o48_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o4C_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o4C_float *)(t2))->v) = 0.0f;
                        }
                    }
                }
                break;
            case 2:
                t3 = (*(int *)((t2 + 0x14)));
                t3 = (t3 - 0xE39);
                *(unsigned int *)((t2 + 0x14)) = t3;
                u0 = ((((struct o1C_float *)(t2))->v));
                u0 = (u0 + 0.199999988f);
                (((struct o1C_float *)(t2))->v) = u0;
                u1 = ((((struct o20_float *)(t2))->v));
                u1 = (u1 - 0.049999997f);
                (((struct o20_float *)(t2))->v) = u1;
                u0 = ((((struct o24_float *)(t2))->v));
                u0 = (u0 + 0.199999988f);
                (((struct o24_float *)(t2))->v) = u0;
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0xA) {
                    u0 = ((((struct o44_float *)(t2))->v));
                    u0 = (u0 - 0.099999994f);
                    (((struct o44_float *)(t2))->v) = u0;
                    u1 = ((((struct o48_float *)(t2))->v));
                    u1 = (u1 - 0.099999994f);
                    (((struct o48_float *)(t2))->v) = u1;
                    u0 = ((((struct o4C_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.099999994f);
                    (((struct o4C_float *)(t2))->v) = u0;
                    u0 = ((((struct o44_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o44_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o48_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o48_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o4C_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o4C_float *)(t2))->v) = 0.0f;
                    }
                }
                u0 = 0.0f;
                u1 = ((((struct o20_float *)(t2))->v));
                if (!(u1 > u0)) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 3:
                t3 = ((((struct oEC_short *)(a4))->v));
                if ((int)t3 > (int)0xA) {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    t3 = (*(int *)((t2 + 0x14)));
                    t3 = (t3 - 0xE39);
                    *(unsigned int *)((t2 + 0x14)) = t3;
                    u0 = ((((struct o1C_float *)(t2))->v));
                    u0 = (u0 + 0.199999988f);
                    (((struct o1C_float *)(t2))->v) = u0;
                    u1 = ((((struct o20_float *)(t2))->v));
                    u1 = (u1 - 0.049999997f);
                    (((struct o20_float *)(t2))->v) = u1;
                    u0 = ((((struct o24_float *)(t2))->v));
                    u0 = (u0 + 0.199999988f);
                    (((struct o24_float *)(t2))->v) = u0;
                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x14) {
                        u0 = ((((struct o44_float *)(t2))->v));
                        u0 = (u0 - 0.099999994f);
                        (((struct o44_float *)(t2))->v) = u0;
                        u1 = ((((struct o48_float *)(t2))->v));
                        u1 = (u1 - 0.099999994f);
                        (((struct o48_float *)(t2))->v) = u1;
                        u0 = ((((struct o4C_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.099999994f);
                        (((struct o4C_float *)(t2))->v) = u0;
                        u0 = ((((struct o44_float *)(t2))->v));
                        t4 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t4) {
                            (((struct o44_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o48_float *)(t2))->v));
                        t4 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t4) {
                            (((struct o48_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o4C_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o4C_float *)(t2))->v) = 0.0f;
                        }
                    }
                    u0 = 0.0f;
                    u1 = ((((struct o20_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        *(unsigned char *)((t2 + 0x0)) = 0x0;
                    }
                }
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)t0) continue;
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = 0xEC;
    if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
