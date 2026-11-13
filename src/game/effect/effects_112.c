/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c048074-0c0485f8) */

int obj_create(int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o300_int { char p[0x300]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_tick_popup_marker(int, int);
int obj_destroy(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);
int ui_sprite_queue_add(int, int, int, int, int, int);

int FUN_0c048314(int a4, int a5);

int fx_spawn_048074(int a4)
{
    int stk[1];
    register int t0;
    register int t7;
    register int t2;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x6, 0x1, 0x9, 2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x80;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0480E2;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x0)) = 0x0;
            t3 = (t3 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x2)) = 0x80;
            t2 = (t2 + 0x4);
            if ((int)t3 >= (int)0x9) {
                break;
            }
        }
        t7 = 0x80;
    }
    return t7;
}

int fx_tick_048074(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c048314(a4, (0x308 + a4));
                fx_tick_popup_marker(a4, (0x308 + a4));
                t1 = *(signed char *)(((0x308 + a4) + 0x1));
                if (t1 == 0) {
                    return obj_destroy(a4);
                }
                return t1;
            }
            return t0;
        }
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            math_rand_float();
            t0 = FUN_0c0e6f24();
            t1 = *(int *)(((((*(signed char *)(((0x308 + a4) + 0x0))) << 2) + (0x2E0 + a4)) + 0x0));
            if ((*(signed char *)((t1 + 0x0))) == 0) {
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                *(unsigned int *)((t1 + 0x18)) = (((t0 << 8) << 2) << 1);
                *(unsigned char *)((t1 + 0x1)) = 0xC;
                u0 = math_cos_angle16((*(int *)((t1 + 0x18))));
                (((struct o28_float *)(t1))->v) = (-((u0 * 160.0f) / (float)(*(signed char *)((t1 + 0x1)))));
                (((struct o4_float *)(t1))->v) = (((((struct o20_float *)(a4))->v)) + ((u0 * 160.0f)));
                u0 = math_sin_angle16((*(int *)((t1 + 0x18))));
                (((struct o2C_float *)(t1))->v) = (-(((u0 * 480.0f) / 8.0f) / (float)(*(signed char *)((t1 + 0x1)))));
                (((struct o8_float *)(t1))->v) = (((((struct o24_float *)(a4))->v)) + (((u0 * 480.0f) / 8.0f)));
                (((struct oC_float *)(t1))->v) = ((((struct o28_float *)(a4))->v));
                *(unsigned char *)((((*(signed char *)(((0x308 + a4) + 0x0))) + ((0x308 + a4) + 0x4)) + 0x0)) = 0x0;
                *(unsigned char *)((((*(signed char *)(((0x308 + a4) + 0x0))) + ((0x308 + a4) + 0xC)) + 0x0)) = 0x2;
                *(unsigned char *)(((0x308 + a4) + 0x1)) = ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x1);
                (((struct o308_uchar *)(a4))->v) = (((*(signed char *)(((0x308 + a4) + 0x0))) + 0x1) & 0x7);
            }
        }
        FUN_0c048314(a4, (0x308 + a4));
        fx_tick_popup_marker(a4, (0x308 + a4));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o20_float *)(a4))->v) = (*(float *)((0xC14A920 + ((*(signed char *)((a4 + 0x3))) << 2))));
    (((struct o24_float *)(a4))->v) = 440.0f;
    if ((*(int *)0xC7F3020) != 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 16.0f);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((-((float)(*(signed char *)((a4 + 0x3))) * 32.0f))) + 16.0f));
    }
    (((struct o28_float *)(a4))->v) = 7.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    (((struct oEE_ushort *)(a4))->v) = 0x2;
    (((struct o308_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
    t0 = (((struct o300_int *)(a4))->v);
    *(unsigned char *)((t0 + 0x1)) = 0x32;
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x2)) = 0x0;
    t0 = *(signed char *)(((0x308 + a4) + 0x1));
    *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c048314(int a4, int a5)
{
    int stk[17];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t17;
    register float u23;
    register float u25;
    register float u27;
    register float u36;
    register int t41;
    register int t43;
    register int t46;
    register int t56;

    t0 = 0xC048470;
    t1 = a5;
    t2 = (a5 + 0x4);
    t3 = (a5 + 0xC);
    t4 = (a5 + 0x4);
    t5 = 0x0;
    for (;;) {
        if ((*(signed char *)(((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0))) + 0x0))) != 0) {
            t0 = 0x4;
            t8 = *(int *)((((t5 << 2) + (0x2E0 + a4)) + 0x0));
            t1 = t8;
            *(unsigned int *)(((int)stk + 8)) = t8;
            *(float *)((t1 + t0)) = ((*(float *)((t1 + t0))) + ((((struct o28_float *)(t1))->v)));
            t0 = 0x8;
            *(float *)((t1 + t0)) = ((*(float *)((t1 + t0))) + ((((struct o2C_float *)(t1))->v)));
            t0 = (*(signed char *)((a4 + 0x3)));
            t0 = (t0 << 1);
            t0 = (-t0);
            t0 = (t0 + 0x1);
            t0 = (t0 << 8);
            t0 = (t0 << 2);
            t0 = (t0 << 1);
            t0 = (t0 + (*(int *)((t1 + 0x18))));
            *(unsigned int *)((t1 + 0x18)) = t0;
            t17 = *(signed char *)((((a5 + 0xC) + t5) + 0x0));
            *(unsigned char *)((((a5 + 0xC) + t5) + 0x0)) = (t17 - 1);
            if ((signed char)(t17 - 1) == 0) {
                *(unsigned char *)((t3 + 0x0)) = 0x2;
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 ^ 0x1);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t0 = 0x4;
            *(unsigned int *)(((int)stk + 12)) = (*(short *)0xC17FDB2);
            *(unsigned int *)(((int)stk + 64)) = 0xA;
            u23 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0x8;
            *(float *)((((int)stk + 8) + t0)) = u23;
            t0 = 0x8;
            u25 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0xC;
            *(float *)((((int)stk + 8) + t0)) = u25;
            t0 = 0xC;
            u27 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0x10;
            *(float *)((((int)stk + 8) + t0)) = u27;
            *(unsigned int *)(((int)stk + 52)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x18)));
            t0 = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
            t0 = ((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u)));
            t0 = (t0 >> 1);
            u36 = ((-(float)t0) + 6.0f);
            t0 = 0x30;
            t1 = 0xC17FDB0;
            *(float *)((((int)stk + 8) + t0)) = (u36 / 6.0f);
            t0 = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
            t41 = t0;
            t0 = 0x18;
            *(float *)((((int)stk + 8) + t0)) = ((float)t41 / 12.0f);
            t0 = 0x14;
            *(float *)((((int)stk + 8) + t0)) = ((float)t41 / 12.0f);
            *(int *)((int)stk + 4) = 0x0;
            t0 = (*(signed char *)((a4 + 0x3)));
            t43 = t0;
            *(int *)((int)stk + 0) = t43;
            t0 = (ui_sprite_queue_add((((int)stk + 0) + 0xC), t1, 0x4, ((*(signed char *)((t4 + 0x0))) + 0x2), t43, 0x0));
            t46 = *(int *)(((int)stk + 8));
            t0 = (*(signed char *)((t46 + 0x1)));
            t0 = (t0 - 1);
            *(unsigned char *)((t46 + 0x1)) = t0;
            t0 = (signed char)t0;
            if (t0 == 0) {
                *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
                t0 = (*(signed char *)((a5 + 0x1)));
                t0 = (t0 - 1);
                *(unsigned char *)((a5 + 0x1)) = t0;
            }
        } else {
            t56 = t1;
        }
        t1 = t56;
        t5 = (t5 + 0x1);
        t4 = (t4 + 0x1);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x1);
        if ((int)t5 < (int)0x8) continue;
        break;
    }
    return t0;
}
