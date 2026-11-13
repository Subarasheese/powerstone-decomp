/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04463c-0c044e38) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(int);

int fx_tick_0446ce(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4);
            }
            if (t0 == 3) {
                return obj_destroy(a4);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        t0 = *(int *)((((((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        t2 = 0xEE;
        if ((*(signed char *)((t0 + 0x0))) != 0) {
        } else {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o40_float *)(t0))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4)) = *(struct mv3 *)(0xC14A630); }
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)((t0 + 0x14)) = (((((int)((unsigned int)(int)u1 % (unsigned int)0x20)) << 8) << 2) << 1);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t3 = (int)((unsigned int)(int)u1 % (unsigned int)0x10);
            u0 = (float)(t3 + 0x5);
            if ((int)(t3 + 0x5) < 0) {
                u0 = ((float)(t3 + 0x5) + 4.2949673e+09f);
            }
            (((struct o24_float *)(t0))->v) = (u0 / 10.0f);
            (((struct o20_float *)(t0))->v) = (u0 / 10.0f);
            (((struct o1C_float *)(t0))->v) = (u0 / 10.0f);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t3 = (int)((unsigned int)(int)u1 % (unsigned int)0xA);
            u0 = (float)t3;
            if ((int)t3 < 0) {
                u0 = ((float)t3 + 4.2949673e+09f);
            }
            (((struct o2C_float *)(t0))->v) = (u0 + 14.0f);
            *(unsigned int *)((t0 + 0x38)) = 0xFFFFFFFF;
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t3 = (int)((unsigned int)(int)u1 % (unsigned int)0x6);
            u0 = (float)(t3 + 0x2);
            if (0.0f > (float)(t3 + 0x2)) {
                u0 = ((float)(t3 + 0x2) + 4.2949673e+09f);
            }
            (((struct o28_float *)(t0))->v) = ((math_cos_angle16(((-(*(int *)((t0 + 0x14)))) + 0x14000))) * u0);
            (((struct o30_float *)(t0))->v) = ((math_sin_angle16(((-(*(int *)((t0 + 0x14)))) + 0x14000))) * u0);
            (((struct oEC_ushort *)(a4))->v) = 0x6;
            t0 = (int)((int)(((((struct oEE_short *)(a4))->v)) + 0x1) % (int)0xA);
            (((struct oEE_ushort *)(a4))->v) = t0;
            t2 = t0;
            t0 = (0xEE + a4);
        }
        t1 = t2;
        t2 = t0;
    }
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t1 = 0x28;
            t1 = (t1 + t4);
            t0 = 0x4;
            u0 = (*(float *)((t1 + 0x0)));
            u1 = (*(float *)((t4 + t0)));
            t1 = 0x30;
            t1 = (t1 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0xC;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t1 + 0x0)));
            t1 = 0x2C;
            t1 = (t1 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t1 + 0x0)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x2C;
            u1 = (*(float *)((t4 + t0)));
            u0 = (float)(*(int *)((t4 + 0x38)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x44;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x48;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x5C;
            u0 = (*(float *)(((*(int *)((a4 + 0x1C))) + t0)));
            t0 = 0x4C;
            *(float *)((t4 + t0)) = u0;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = 0.0f;
            if (u0 > u1) {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8));
    t1 = t0;
    if ((int)t0 >= (int)0x2) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
