/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c6094-0c0c6658) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int fx_spawn_03(int, int, int, float);
int FUN_0c0c6424(int, int, int, float);
struct o2C_float { char p[0x2C]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o30_float { char p[0x30]; float v; };

int FUN_0c0c63c4(int a4, int a5);

int FUN_0c0c6094(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t45;
    register int t4;
    register int t6;
    register int t13;
    register float u16;
    register int t17;
    register float u18;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float u29;
    register float u30;
    register float u31;
    register float u33;
    register float u34;
    register float u35;
    register float u36;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x3);
    t45 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        t4 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t4 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t4;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C62BC;
        t6 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 30.0f);
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        obj_set_record_char(t0, ((*(signed char *)(((int)stk + 0))) + 0x72));
        t13 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t13 + 0x0)) = 0x1;
        *(unsigned short *)((t13 + 0x2)) = 0xF;
        FUN_0c06233a(t13, 0xC664988, 0x9);
        FUN_0c0c63c4(t0, 0x0);
        u16 = *(float *)0xC494D1C;
        t17 = *(int *)((a4 + 0x1C));
        u18 = (u16 + -80.0f);
        if (100.0f > (u16 + -80.0f)) {
            u18 = 100.0f;
        }
        u20 = (((struct o24_float *)(t0))->v);
        u21 = (((struct o24_float *)(t17))->v);
        u22 = (u20 - u21);
        if (-100.0f > (u20 - u21)) {
            u22 = -100.0f;
        }
        u24 = u22;
        if (u22 > 200.0f) {
            u24 = 200.0f;
        }
        (((struct o3C_float *)(t0))->v) = ((((200.0f - u24) / 10.0f) + (u18 / 40.0f)) + -20.0f);
        if (0.0f > ((((200.0f - u24) / 10.0f) + (u18 / 40.0f)) + -20.0f)) {
            (((struct o3C_float *)(t0))->v) = 0.0f;
        }
        if (((((struct o3C_float *)(t0))->v)) > 30.0f) {
            (((struct o3C_float *)(t0))->v) = 30.0f;
        }
        (((struct o48_float *)(t0))->v) = -0.75f;
        u29 = (((struct o24_float *)(t0))->v);
        u30 = (((struct o24_float *)(t17))->v);
        u31 = (u29 - u30);
        if (-100.0f > (u29 - u30)) {
            u31 = -100.0f;
        }
        u33 = (((struct o3C_float *)(t0))->v);
        u34 = (((struct o48_float *)(t0))->v);
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        u35 = u31;
        u36 = u33;
        for (;;) {
            u35 = (u35 + u36);
            u36 = (u36 + u34);
            (((struct oF0_ushort *)(t0))->v) = (((((struct oF0_short *)(t0))->v)) + 0x1);
            if (u36 > 0.0f) continue;
            if (!(u35 > 0.0f)) {
                break;
            }
        }
        (((struct oEC_ushort *)(t0))->v) = ((((struct oF0_short *)(t0))->v));
        (((struct o38_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x30))))) * (u18 / (float)((((struct oF0_short *)(t0))->v))));
        (((struct o40_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x30))))) * (u18 / (float)((((struct oF0_short *)(t0))->v))));
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        t45 = 0x4C;
    }
    return t45;
}

int FUN_0c0c62bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return t3;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return obj_destroy(a4, a5, a6, a7);
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    FUN_0c0c6424(a4, 0x0, 0x1, ((float)((((struct oEC_short *)(a4))->v)) / (float)((((struct oF0_short *)(a4))->v))));
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if (((short)(t3 - 1) != 0) && ((t0 = *(signed char *)((a4 + 0x108)), t0 == 0) && ((t1 = *(signed char *)((a4 + 0x2A8)), t1 == 0) && (t2 = *(signed char *)((a4 + 0x2D8)), t2 == 0)))) {
        return 0x2D8;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), ((*(signed char *)((a4 + 0x4))) + 0x55), 0.5f);
}

int FUN_0c0c63c4(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t1 = (((struct o2E4_int *)((*(int *)(((int)stk + 0)))))->v);
    (((struct o30_float *)(t1))->v) = 0.0f;
    (((struct o2C_float *)(t1))->v) = 0.0f;
    (((struct o28_float *)(t1))->v) = 0.0f;
    *(unsigned char *)((t1 + 0x0)) = 0x1;
    *(unsigned short *)((t1 + 0x2)) = 0xF;
    FUN_0c06233a(t1, 0xC664988, (*(signed char *)((((*(signed char *)(((int)stk + 4))) << 1) + 0xC33C7A8))));
    t7 = (((struct o2E8_int *)((*(int *)(((int)stk + 0)))))->v);
    (((struct o30_float *)(t7))->v) = 0.0f;
    (((struct o2C_float *)(t7))->v) = 0.0f;
    (((struct o28_float *)(t7))->v) = 0.0f;
    *(unsigned char *)((t7 + 0x0)) = 0x0;
    *(unsigned short *)((t7 + 0x2)) = 0x21F;
    return FUN_0c06233a(t7, 0xC664988, 0xF);
}
