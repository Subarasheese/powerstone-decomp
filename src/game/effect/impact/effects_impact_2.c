/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b5f78-0c0b6368) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c0e6fe8();
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c026554(int);
int fx_spawn_with_params(int, float, float, float, float);
int FUN_0c048ea4(int, float);
int obj_destroy(int, int, int, int);
int fx_spawn_03(int, int, int, float);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(void);
int thunk_FUN_0c062242(int);

int fx_spawn_02(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t7;
    register int t14;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = obj_create(0x2, 0x1, 0x1);
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
        (((struct oF0_ushort *)(t0))->v) = 0x5;
        *(volatile int *)(((int)stk + 0));
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 4)));
        FUN_0c0e6fe8();
        t7 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t7);
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16((0x14000 - t7))) * (*(float *)0xC0B60D0));
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16((*(int *)(((int)stk + 0))))) * (*(float *)0xC0B60D0));
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0xB;
        obj_set_record(t0, 0x2);
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B605C;
        t14 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t14, ((int)g_res_kyoutsuu), 0x39);
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x2)) = 0xF;
        t16 = 0xF;
    }
    return t16;
}

int fx_update_02(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t8;
    register int t9;
    register int t12;
    register int t14;
    register int t19;
    int t33;
    register int t35;
    register int t37;
    register int t39;
    register int t41;
    register float u44;
    register float u45;
    register float u47;
    register float t48;
    register int t50;
    register int t52;
    register int t54;
    register int t56;
    register int t58;
    register float t70;
    register float u73;
    register float t75;
    register float u78;
    register int t102;
    register int t103;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            t103 = (obj_destroy(a4, a5, a6, a7));
        } else {
            if ((*(signed char *)((a4 + 0x108))) != 0) {
                FUN_0c048ea4((a4 + 0x20), 3.0f);
                fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                t8 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t8 + 0x1);
                t103 = (t8 + 0x1);
            } else {
                t9 = FUN_0c026554(a4);
                if ((signed char)t9 != 0) {
                    fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                    t12 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t12 + 0x1);
                    t103 = (t12 + 0x1);
                } else {
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    t14 = FUN_0c0e6e5c();
                    if (t14 != 0) {
                        fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 1.0f);
                    }
                    if (((((struct oF0_short *)(a4))->v)) == 0) {
                    } else {
                        t19 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                        thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t19) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
                        if ((*(float *)(((int)stk + 12))) == 0.0f) {
                            *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                        }
                        t33 = math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
                        t35 = (0xFFFF & t33);
                        if (0.0f > (*(float *)(((int)stk + 12)))) {
                            t35 = ((0xFFFF & t33) + 0x8000);
                        }
                        t37 = *(int *)((a4 + 0x30));
                        t39 = (unsigned short)((unsigned short)(0x4000 + t35) - t37);
                        if (((unsigned short)((unsigned short)(0x4000 + t35) - t37) & 0x8000) != 0) {
                            t39 = ((unsigned short)((unsigned short)(0x4000 + t35) - t37) | 0xFFFF0000);
                        }
                        t41 = 0xFFFFFDDE;
                        if ((int)t39 > 0) {
                            t41 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t41);
                        u44 = *(float *)(((int)stk + 12));
                        *(float *)(((int)stk + 4)) = u44;
                        u45 = *(float *)(((int)stk + 20));
                        *(float *)(((int)stk + 8)) = u45;
                        u47 = (u45 * u45);
                        u47 = u47 + u44 * (*(float *)(((int)stk + 4)));
                        t48 = math_signed_sqrt(u47);
                        t50 = math_atan_angle16(((-t48) / (*(float *)(((int)stk + 16)))));
                        t52 = t50;
                        if (0.0f > (*(float *)(((int)stk + 16)))) {
                            t52 = (t50 + 0x8000);
                        }
                        t54 = *(int *)((a4 + 0x2C));
                        t56 = (unsigned short)((-(unsigned short)(0x4000 + t52)) - t54);
                        if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t52)) - t54)) != 0) {
                            t56 = ((unsigned short)((-(unsigned short)(0x4000 + t52)) - t54) | 0xFFFF0000);
                        }
                        t58 = 0xFFFFFDDE;
                        if ((int)t56 > 0) {
                            t58 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x2C)) = (unsigned short)((*(int *)((a4 + 0x2C))) + t58);
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                    }
                    t70 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u73 = (t70 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o38_float *)(a4))->v) = (u73 * 20.0f);
                    t75 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u78 = (t75 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u78 * 20.0f);
                    (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 20.0f));
                    FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                    t103 = (FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44)));
                }
            }
        }
    } else {
        fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 3.0f);
        t102 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t102 + 0x1);
        t103 = (t102 + 0x1);
    }
    return t103;
}
