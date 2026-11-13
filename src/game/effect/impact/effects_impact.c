/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b5d60-0c0b5f78) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c026554(int);
int fx_spawn_with_params(int, float, float, float, float);
int obj_create(int, int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int snd_play_side_se(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e21b0(int, int);
extern int _quick_odd_mvn();

int fx_spawn_01(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t4;
    register int t11;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = obj_create(0x2, 0x1, 0x2, 0x0);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33C180); }
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C174); }
        t4 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t4);
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16((0x14000 - t4))) * ((((struct o0_float *)0xC0B5EB0)->v)));
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16((*(int *)(((int)stk + 0))))) * ((((struct o0_float *)0xC0B5EB0)->v)));
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0xA;
        obj_set_record(t0, 0x1);
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5E60;
        t11 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t11, 0xC4CFA68, 0x38);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        *(unsigned short *)((t11 + 0x2)) = 0x1;
        t13 = (((struct o2E4_int *)(t0))->v);
        FUN_0c06233a(t13, 0xC4CFA68, 0x32);
        *(unsigned char *)((t13 + 0x0)) = 0x1;
        *(unsigned short *)((t13 + 0x2)) = 0x11;
        (((struct oC_float *)(t13))->v) = ((((struct o18_float *)0xC0B5EB0)->v));
        (((struct o24_float *)(t13))->v) = 0.0f;
        t16 = 0x24;
    }
    return t16;
}

int fx_update_01(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x108))) == 0) {
            t0 = FUN_0c026554(a4);
            if ((signed char)t0 != 0) {
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x2C);
                fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 1.0f);
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) <= (int)0xA) {
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.199999988f);
            }
            FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
            return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        }
    }
    fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 1.0f);
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
