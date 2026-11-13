/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b1b34-0c0b1e50) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int obj_destroy(int, int, int, int);
int obj_find_hitting_player(int);
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_set_record(int, int);
int stage_obj_on_break(int);

int stage_gimmick_21_spawn_b(int a4, int a5);

int stage_gimmick_21_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t15;

    t0 = 0x0;
    for (;;) {
        t1 = obj_create(0x4, 0x1, 0x1);
        t15 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = 0x2;
            *(unsigned short *)((t1 + 0x6)) = 0x5;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned char *)((t1 + 0x8)) = 0x0;
            *(unsigned char *)((t1 + 0x9)) = 0x0;
            *(unsigned int *)((t1 + 0x10)) = 0xC0B1C24;
            *(unsigned char *)((t1 + 0x4)) = 0xF;
            (((struct o308_uint *)(t1))->v) = a4;
            (((struct o30E_uchar *)(t1))->v) = (*(signed char *)((a4 + 0x1)));
            (((struct o101_uchar *)(t1))->v) = (*(signed char *)((a4 + 0x4)));
            (((struct o102_uchar *)(t1))->v) = (*(signed char *)((a4 + 0x5)));
            (((struct o105_uchar *)(t1))->v) = 0x1;
            (((struct o106_uchar *)(t1))->v) = 0x1;
            (((struct o107_uchar *)(t1))->v) = 0x0;
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            *(unsigned int *)((t1 + 0x30)) = (*(int *)(((t0 << 2) + 0xC33A5F0)));
            FUN_0c0e6fe8();
            FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
            *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0xF;
            t15 = 0xF;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t15;
}

int stage_gimmick_21_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = obj_find_hitting_player(a4);
    t1 = t0;
    if (t0 != 0) {
        stage_gimmick_21_spawn_b(a4, ((-(*(signed char *)((t0 + 0x3)))) + 0x1));
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int stage_gimmick_21_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t20;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B1D96;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o101_uchar *)(t0))->v) = 0x10;
        (((struct o102_uchar *)(t0))->v) = 0x2B;
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        math_rand_float();
        *(volatile float *)0xC0B1DE0;
        
        (((struct oEC_ushort *)(t0))->v) = ((FUN_0c0e6f24()) + 0x46);
        (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B1DEC);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t20 = 0xF;
    }
    return t20;
}

int stage_gimmick_21_update_b(int a4, int a5, int a6, int a7)
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
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - 1.0f);
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            return stage_obj_on_break(a4);
        }
        return 0x274;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return obj_set_record(a4, 0x20);
    }
    return 0xEC;
}
