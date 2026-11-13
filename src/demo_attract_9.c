/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c02a1f4-0c02afc4) */

/* named globals (symbols.txt) */
extern char g_res_syukyaku[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };

int demo_spawn_jitter_sparkle(int a4, int a5)
{
    int stk[3];
    register float u2;
    register int t4;
    register int t5;
    register float u9;
    register int t10;
    register int t18;
    register int t13;
    register int t14;
    register int t16;
    register int t24;
    register int t36;
    register int t26;
    register float u28;
    register int t27;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    u2 = 1.0f;
    if ((*(int *)0xC386830) != 0) {
        u2 = 0.833333313f;
    }
    *(unsigned short *)(((int)stk + 8)) = (int)(u2 * 60.0f);
    t4 = *(int *)(((int)stk + 4));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                *(unsigned int *)(((int)stk + 0)) = 0x0;
                t5 = obj_create(0x5, 0x1, 0x1);
                if (t5 != 0) {
                    *(unsigned int *)((t5 + 0x10)) = 0xC029F6A;
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                    *(unsigned char *)((t5 + 0x3)) = 0x6;
                    *(unsigned char *)((t5 + 0x1)) = 0x1;
                    *(unsigned short *)((t5 + 0x6)) = 0xF;
                    *(unsigned char *)((t5 + 0x5)) = 0x0;
                    *(unsigned char *)((t5 + 0x4)) = (*(signed char *)(((int)stk + 4)));
                    (((struct oEC_ushort *)(t5))->v) = (*(short *)(((int)stk + 8)));
                    u9 = (float)(short)(int)((float)(*(int *)(((int)stk + 0))) * 2.5f);
                    (((struct oEE_ushort *)(t5))->v) = (int)(u9 * u2);
                    (((struct o24_float *)(t5))->v) = 0.0f;
                    (((struct o20_float *)(t5))->v) = 0.0f;
                    (((struct o28_float *)(t5))->v) = 4.0f;
                    *(unsigned int *)((t5 + 0x34)) = 0x0;
                    *(unsigned int *)((t5 + 0x30)) = 0x0;
                    *(unsigned int *)((t5 + 0x2C)) = 0x0;
                    return ((int (*)(void))(0xC02A4AC))();
                }
                return ((int (*)(void))(0xC02A4B4))();
            }
            return t4;
        }
        t10 = obj_create(0x5, 0x1, 0x1);
        t18 = t10;
        if (t10 != 0) {
            *(unsigned int *)((t10 + 0x10)) = 0xC029F6A;
            *(unsigned char *)((t10 + 0x0)) = 0x1;
            *(unsigned char *)((t10 + 0x3)) = 0x6;
            *(unsigned char *)((t10 + 0x1)) = 0x1;
            *(unsigned short *)((t10 + 0x6)) = 0xF;
            *(unsigned char *)((t10 + 0x5)) = 0x0;
            *(unsigned char *)((t10 + 0x4)) = (*(signed char *)(((int)stk + 4)));
            (((struct oEC_ushort *)(t10))->v) = (*(short *)(((int)stk + 8)));
            (((struct oEE_ushort *)(t10))->v) = 0x0;
            (((struct o24_float *)(t10))->v) = 0.0f;
            (((struct o20_float *)(t10))->v) = 0.0f;
            (((struct o28_float *)(t10))->v) = 16.0f;
            *(unsigned int *)((t10 + 0x34)) = 0x0;
            *(unsigned int *)((t10 + 0x30)) = 0x0;
            *(unsigned int *)((t10 + 0x2C)) = 0x0;
            t13 = *(int *)(((int)stk + 0));
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)(*(signed char *)((t10 + 0x2DC)))) {
                    break;
                }
                t16 = *(int *)((((t14 << 2) + (0x2E0 + t10)) + 0x0));
                *(unsigned char *)((t16 + 0x0)) = 0x1;
                *(unsigned char *)((t16 + 0x1)) = 0x0;
                *(unsigned short *)((t16 + 0x2)) = 0xF;
                FUN_0c06233a(t16, ((int)g_res_syukyaku), (0x53 - t13));
                t14 = (t14 + 0x1);
            }
            t18 = 0x2DC;
        }
        return t18;
    }
    t24 = obj_create(0x5, 0x1, 0x2);
    t36 = t24;
    if (t24 != 0) {
        *(unsigned int *)((t24 + 0x10)) = 0xC029F6A;
        *(unsigned char *)((t24 + 0x0)) = 0x1;
        *(unsigned char *)((t24 + 0x3)) = 0x2;
        *(unsigned char *)((t24 + 0x1)) = 0x1;
        *(unsigned short *)((t24 + 0x6)) = 0xF;
        *(unsigned char *)((t24 + 0x5)) = 0x0;
        *(unsigned char *)((t24 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        (((struct oEC_ushort *)(t24))->v) = (int)(u2 * 180.0f);
        (((struct oEE_ushort *)(t24))->v) = 0x0;
        (((struct o28_float *)(t24))->v) = 0.0f;
        (((struct o24_float *)(t24))->v) = 0.0f;
        (((struct o20_float *)(t24))->v) = 0.0f;
        *(unsigned int *)((t24 + 0x34)) = 0x0;
        *(unsigned int *)((t24 + 0x30)) = 0x0;
        *(unsigned int *)((t24 + 0x2C)) = 0x0;
        t26 = 0x0;
        u28 = 180.0f;
        for (;;) {
            if ((int)t26 >= (int)(*(signed char *)((t24 + 0x2DC)))) {
                break;
            }
            t27 = t26;
            t27 = (t27 << 2);
            *(unsigned int *)(((int)stk + 0)) = t27;
            t27 = (t27 + (0x2E0 + t24));
            t27 = (*(int *)((t27 + 0x0)));
            *(unsigned char *)((t27 + 0x0)) = 0x1;
            *(unsigned char *)((t27 + 0x1)) = 0x0;
            *(unsigned short *)((t27 + 0x2)) = 0xF;
            FUN_0c06233a(t27, ((int)g_res_syukyaku), (*(int *)(((*(int *)(((int)stk + 0))) + 0xC148EE8))));
            t26 = (t26 + 0x1);
            u28 = (*(float *)(((*(int *)(((int)stk + 0))) + 0xC148EF0)));
            (((struct oC_float *)(t27))->v) = u28;
        }
        t36 = 0x2DC;
    }
    return t36;
}

int FUN_0c02a4e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x2;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0x2E0 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            u0 = (math_rand_float());
            u1 = u0;
            u1 = (u1 * (*(float *)0xC02A684));
            u2 = 2.14748365e+09f;
            if (!(u2 > u1)) {
                u2 = (u2 + u2);
                u1 = (u1 - u2);
            }
            t2 = FUN_0c0e6f24();
            u1 = (float)t2;
            if ((int)t2 < 0) {
                u2 = 4.2949673e+09f;
                u1 = (u1 + u2);
                u3 = u2;
            }
            u0 = 5.0f;
            u2 = u3;
            u2 = -320.0f;
            u3 = u2;
            u3 = u3 + u0 * u1;
            u2 = u3;
            t0 = (t0 + 0x1);
            (((struct o4_float *)(t1))->v) = u2;
            (((struct o8_float *)(t1))->v) = 0.0f;
            (((struct oC_float *)(t1))->v) = 16.0f;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    return 0xEC;
}

int FUN_0c02a5e4(void)
{
    register int t0;
    register int t5;
    register int t1;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02A4E0;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 16.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned char *)((t3 + 0x1)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            FUN_0c06233a(t3, ((int)g_res_syukyaku), 0x56);
            t1 = (t1 + 0x1);
        }
        t5 = 0x2DC;
    }
    return t5;
}

int FUN_0c02a6ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    return 0xEC;
}

int FUN_0c02a6c4(void)
{
    register int t0;
    register int t5;
    register int t1;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02A6AC;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 4.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned char *)((t3 + 0x1)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            FUN_0c06233a(t3, ((int)g_res_syukyaku), 0x57);
            t1 = (t1 + 0x1);
        }
        (((struct oEC_ushort *)(t0))->v) = 0x2;
        t5 = 0xEC;
    }
    return t5;
}

int FUN_0c02a9bc(float f4)
{
    register int t0;

    if (240.0f > f4) {
        t0 = obj_create(0x5, 0x1, 0x1);
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x10)) = 0xC02A784;
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x3)) = 0x2;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x1F;
            *(unsigned char *)((t0 + 0x5)) = 0x0;
            (((struct o24_float *)(t0))->v) = f4;
            (((struct o28_float *)(t0))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x34)) = 0x0;
            *(unsigned int *)((t0 + 0x30)) = 0x0;
            *(unsigned int *)((t0 + 0x2C)) = 0x0;
            return ((int (*)(void))(0xC02AA82))();
        }
        return t0;
    }
    return 0xC02AA50;
}

int FUN_0c02aa9c(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 & 0x7) << 2) + 0xC148EF8));
    (((struct o8_uint *)0xC7F31BC)->v) = t0;
    (((struct o4_uint *)0xC7F31BC)->v) = t0;
    (((struct o0_uint *)0xC7F31BC)->v) = t0;
    return 0xC148EF8;
}
