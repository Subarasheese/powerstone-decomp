/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bda68-0c0bdf9c) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int fx_spawn_21(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_math_mat_get_translate(int, int);

int fx_update_garuda_fan_shot(int a4)
{
    int stk[6];
    register int t0;
    register int t3;
    register int t7;
    register int t8;
    register int t13;
    register int t37;
    register int t43;
    int t57;
    register int t59;
    register int t61;
    register int t63;
    register int t65;
    register float u68;
    register float u69;
    register float u71;
    register float t72;
    register int t91;
    register float u93;
    register float t95;
    register float u98;
    register float t100;
    register float u103;
    register int t119;
    register int t126;
    register int t129;
    register int t134;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 == 1) {
            *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + (*(int *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0xF) << 2) + 0xC33C4D8)))) & 0xFFFF);
            t7 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t7 - 1);
            t134 = 0xEC;
            if ((short)(t7 - 1) == 0) {
                (((struct oEE_ushort *)(a4))->v) = 0xA;
                t8 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t8 + 0x1);
                t134 = (t8 + 0x1);
            }
        } else {
            if (t3 == 2) {
                t13 = (((struct oEE_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t13 / 10.0f);
                if (!(((float)t13 / 10.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t134 = 0xEE;
            } else {
                t134 = (obj_destroy(a4));
            }
        }
    } else {
        t37 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t37 - 1);
        if ((short)(t37 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0xFF;
        }
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        } else {
            t43 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_math_mat_get_translate(((((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t43) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 12);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
            if ((*(float *)(((int)stk + 12))) == 0.0f) {
                *(float *)(((int)stk + 12)) = 9.99999997e-07f;
            }
            t57 = math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
            t59 = (0xFFFF & t57);
            if (0.0f > (*(float *)(((int)stk + 12)))) {
                t59 = ((0xFFFF & t57) + 0x8000);
            }
            t61 = *(int *)((a4 + 0x30));
            t63 = (unsigned short)((unsigned short)(0x4000 + t59) - t61);
            if (((unsigned short)((unsigned short)(0x4000 + t59) - t61) & 0x8000) != 0) {
                t63 = ((unsigned short)((unsigned short)(0x4000 + t59) - t61) | 0xFFFF0000);
            }
            t65 = 0xFFFFFDDE;
            if ((int)t63 > 0) {
                t65 = 0x222;
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t65);
            u68 = *(float *)(((int)stk + 12));
            *(float *)(((int)stk + 8)) = u68;
            u69 = *(float *)(((int)stk + 20));
            *(float *)(((int)stk + 4)) = u69;
            u71 = (u69 * u69);
            u71 = u71 + u68 * (*(float *)(((int)stk + 8)));
            t72 = math_signed_sqrt(u71);
            math_atan_angle16(((-t72) / (*(float *)(((int)stk + 16)))));
            *(volatile float *)(((int)stk + 16));
            *(volatile int *)((a4 + 0x2C));
        }
        t91 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        u93 = 30.0f;
        u93 = u93 + 0.5f * (float)t91;
        t95 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u98 = (t95 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o38_float *)(a4))->v) = (u98 * u93);
        t100 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u103 = (t100 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o40_float *)(a4))->v) = (u103 * u93);
        (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * u93));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        if ((((((struct oEC_short *)(a4))->v)) & 3) == 0) {
            fx_spawn_21(a4);
        }
        t119 = (((struct oEC_short *)(a4))->v);
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (*(float *)(((((signed char)(t119 & 0x7) << 2) + 0xC33C518) + 0x0)));
        t126 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t126 - 1);
        if (((short)(t126 - 1) != 0) && (t134 = *(signed char *)((a4 + 0x2D8)), t134 == 0)) {
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
            *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0xF;
            t129 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t129 + 0x1);
            t134 = (t129 + 0x1);
        }
    }
    return t134;
}
