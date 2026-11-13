/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03f434-0c03fab4) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c03f434(int);
int FUN_0c03f666(int);
int obj_destroy(int);
int math_mat_transform_point(int, int);
int FUN_0c06231c(int, int, int);
float math_rand_float(void);
int _modls(void);
int _modlu(void);
extern int _quick_odd_mvn();

int fx_tick_03f2c8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x1C));
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 30.0f;
    (((struct o28_float *)(a4))->v) = 30.0f;
    math_mat_transform_point((a4 + 0x20), ((short)((short)(*(signed char *)((t0 + 0x71F3))) * (short)0xDC0) + (0x300 + t0)));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o304_int *)(a4))->v);
            if ((*(signed char *)((t1 + 0x0))) != 0) {
                u0 = math_rand_float();
                u1 = (u0 * 255.0f);
                if (!(2.14748365e+09f > (u0 * 255.0f))) {
                    u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x44)) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC149A60)); }
                (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.099999994f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 - 0.099999994f);
                if (!((u0 - 0.099999994f) > 0.0f)) {
                    (((struct o20_float *)(t1))->v) = 0.0f;
                    (((struct o1C_float *)(t1))->v) = 0.0f;
                    *(unsigned char *)((t1 + 0x0)) = 0x0;
                }
            }
            t2 = FUN_0c03f666(a4);
            t3 = t2;
            if (t2 != 0) {
            } else {
                t3 = t2;
                if ((*(signed char *)((t1 + 0x0))) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x8;
                    t3 = 0xEC;
                }
            }
            return t3;
        }
        if (t0 == 2) {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t1 = (((struct o304_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x1C)) = *(struct mv3 *)(0xC149A18); }
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                *(unsigned short *)((t1 + 0x2)) = 0x211;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x44)) = *(struct mv3 *)(0xC149A24); }
                FUN_0c06231c(t1, 0xC4CFA68, ((*(signed char *)((a4 + 0xEC))) + 0x70));
                t1 = (int)((int)(((((struct oEC_short *)(a4))->v)) + 0x1) % (int)0x3);
                (((struct oEC_ushort *)(a4))->v) = t1;
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 3) {
            t1 = (((struct o304_int *)(a4))->v);
            FUN_0c06231c(t1, 0xC4CFA68, (((*(signed char *)((a4 + 0xEC))) << 1) + 0x70));
            (((struct oEC_ushort *)(a4))->v) = ((int)((int)(((((struct oEC_short *)(a4))->v)) + 0x1) % (int)0x3));
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.099999994f);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.099999994f);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.099999994f);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.099999994f);
            u0 = (((struct o4C_float *)(t1))->v);
            (((struct o4C_float *)(t1))->v) = (u0 - 0.099999994f);
            t1 = 0x4C;
            if (!((u0 - 0.099999994f) > 0.0f)) {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            return t1;
        }
        if (t0 == 4) {
            return obj_destroy(a4);
        }
        return t0;
    }
    FUN_0c03f434(a4);
    FUN_0c03f666(a4);
    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(int *)((a4 + 0x2C));
        *(unsigned int *)((a4 + 0x2C)) = (t0 + 0x1);
        t1 = *(short *)((((signed char)(((t0 + 0x1) << 1) + ((t0 + 0x1) << 2)) + 0xC149A3C) + 0x0));
        (((struct oF2_ushort *)(a4))->v) = t1;
        if (t1 == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        } else {
            t0 = *(int *)((a4 + 0x2C));
            (((struct oF0_ushort *)(a4))->v) = (*(short *)(((0xC149A3C + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)));
        }
    }
    t0 = (((struct o304_int *)(a4))->v);
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t1 = (int)((unsigned int)(int)u1 % (unsigned int)0x4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC149A60)); }
    if ((*(int *)((t0 + 0x34))) == 0) {
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.049999997f);
        u0 = (((struct o20_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = (u0 + 0.049999997f);
        if (((((struct o28_float *)(t0))->v)) > (u0 + 0.049999997f)) {
        } else {
            u0 = (((struct o28_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) ^ 0x1);
            (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 0.389999986f);
        }
    } else {
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.049999997f);
        u0 = (((struct o20_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = (u0 - 0.049999997f);
        if ((u0 - 0.049999997f) > ((((struct o28_float *)(t0))->v))) {
        } else {
            u0 = (((struct o28_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) ^ 0x1);
            u0 = (((struct o28_float *)(t0))->v);
            (((struct o28_float *)(t0))->v) = (u0 + 0.399999976f);
            if (1.0f > (u0 + 0.399999976f)) {
            } else {
                (((struct o28_float *)(t0))->v) = 1.0f;
            }
        }
    }
    return 0x28;
}
