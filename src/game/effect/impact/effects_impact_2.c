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
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int _quick_odd_mvn();
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c026554(int);
int fx_spawn_with_params(int, float, float, float, float);
int FUN_0c048ea4(int, float);
int obj_destroy(int);
int fx_spawn_03(int, int, int, float);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_vec3_accumulate(int, int);
int _modls(void);
int thunk_math_mat_get_translate(int, int);

int fx_spawn_02(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t13;
    register int t4;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t13 = t0;
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
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33C1A8); }
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C19C); }
        t4 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t4);
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16((0x14000 - t4))) * (*(float *)0xC0B60D0));
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16((*(int *)(((int)stk + 0))))) * (*(float *)0xC0B60D0));
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0xB;
        obj_set_record(t0, 0x2);
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B605C;
        t11 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t11, 0xC4CFA68, 0x39);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        *(unsigned short *)((t11 + 0x2)) = 0xF;
        t13 = 0xF;
    }
    return t13;
}

int fx_update_02(int a4)
{
    int stk[6];
    register int t0;
    register int t8;
    register int t9;
    register int t12;
    register int t13;
    register int t20;
    int t34;
    register int t36;
    register int t38;
    register int t40;
    register int t42;
    register float u45;
    register float u46;
    register float u48;
    register float t49;
    register int t51;
    register int t53;
    register int t55;
    register int t57;
    register int t59;
    register float t71;
    register float u74;
    register float t76;
    register float u79;
    register int t103;
    register int t104;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            t104 = (obj_destroy(a4));
        } else {
            if ((*(signed char *)((a4 + 0x108))) != 0) {
                FUN_0c048ea4((a4 + 0x20), 3.0f);
                fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                t8 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t8 + 0x1);
                t104 = (t8 + 0x1);
            } else {
                t9 = FUN_0c026554(a4);
                if ((signed char)t9 != 0) {
                    fx_spawn_03((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x3, 0.5f);
                    t12 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t12 + 0x1);
                    t104 = (t12 + 0x1);
                } else {
                    t13 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t13 + 0x1);
                    if (((int)((int)(short)(t13 + 0x1) % (int)0x2)) != 0) {
                        fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 1.0f);
                    }
                    if (((((struct oF0_short *)(a4))->v)) == 0) {
                    } else {
                        t20 = *(signed char *)((a4 + 0x3));
                        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t20) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                        thunk_math_mat_get_translate(((((unsigned short)((unsigned short)((-t20) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t20) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((int)stk + 0) + 0xC));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
                        if ((*(float *)(((int)stk + 12))) == 0.0f) {
                            *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                        }
                        t34 = math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
                        t36 = (0xFFFF & t34);
                        if (0.0f > (*(float *)(((int)stk + 12)))) {
                            t36 = ((0xFFFF & t34) + 0x8000);
                        }
                        t38 = *(int *)((a4 + 0x30));
                        t40 = (unsigned short)((unsigned short)(0x4000 + t36) - t38);
                        if (((unsigned short)((unsigned short)(0x4000 + t36) - t38) & 0x8000) != 0) {
                            t40 = ((unsigned short)((unsigned short)(0x4000 + t36) - t38) | 0xFFFF0000);
                        }
                        t42 = 0xFFFFFDDE;
                        if ((int)t40 > 0) {
                            t42 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t42);
                        u45 = *(float *)(((int)stk + 12));
                        *(float *)(((int)stk + 4)) = u45;
                        u46 = *(float *)(((int)stk + 20));
                        *(float *)(((int)stk + 8)) = u46;
                        u48 = (u46 * u46);
                        u48 = u48 + u45 * (*(float *)(((int)stk + 4)));
                        t49 = math_signed_sqrt(u48);
                        t51 = math_atan_angle16(((-t49) / (*(float *)(((int)stk + 16)))));
                        t53 = t51;
                        if (0.0f > (*(float *)(((int)stk + 16)))) {
                            t53 = (t51 + 0x8000);
                        }
                        t55 = *(int *)((a4 + 0x2C));
                        t57 = (unsigned short)((-(unsigned short)(0x4000 + t53)) - t55);
                        if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t53)) - t55)) != 0) {
                            t57 = ((unsigned short)((-(unsigned short)(0x4000 + t53)) - t55) | 0xFFFF0000);
                        }
                        t59 = 0xFFFFFDDE;
                        if ((int)t57 > 0) {
                            t59 = 0x222;
                        }
                        *(unsigned int *)((a4 + 0x2C)) = (unsigned short)((*(int *)((a4 + 0x2C))) + t59);
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                    }
                    t71 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u74 = (t71 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o38_float *)(a4))->v) = (u74 * 20.0f);
                    t76 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u79 = (t76 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u79 * 20.0f);
                    (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 20.0f));
                    math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
                    t104 = (math_vec3_accumulate((a4 + 0x38), (a4 + 0x44)));
                }
            }
        }
    } else {
        fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 3.0f);
        t103 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t103 + 0x1);
        t104 = (t103 + 0x1);
    }
    return t104;
}
