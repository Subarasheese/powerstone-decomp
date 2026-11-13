/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a278-0c03a58c) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int, int, int, int);

int FUN_0c03a278(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t8;
    register float u9;
    register int t10;
    register float u11;
    register float t14;
    register float u15;
    register int t18;
    register float u19;
    register float u20;
    register int t21;
    register float t24;
    register float u25;
    register int t28;
    register float u29;
    register float u30;
    register int t31;
    register float t34;
    register float u36;
    register int t38;
    register int t40;
    register int t39;
    register int t42;
    register float u45;
    register int t48;
    register int t51;
    register int t56;
    register int t57;
    register int t64;
    register int t61;
    register int t62;
    register int t65;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t1))->v)) + 5.0f);
                (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) + 5.69620228f);
                (((struct oC_float *)(t1))->v) = (((((struct oC_float *)(t1))->v)) + 0.493670881f);
                t5 = 0x1;
                for (;;) {
                    *(unsigned int *)(((int)stk + 4)) = (t5 << 2);
                    t6 = *(int *)((((t5 << 2) + (0x2E0 + a4)) + 0x0));
                    *(int *)((int)stk + 0) = (0x10 + t6);
                    *(unsigned int *)(((int)stk + 8)) = (signed char)(((t5 << 1) + t5) << 2);
                    t8 = *(int *)(((int)stk + 8));
                    u9 = *(float *)((((signed char)(((t5 << 1) + t5) << 2) + 0xC321644) + 0x0));
                    t10 = (((struct oEC_short *)(a4))->v);
                    u11 = *(float *)(((t8 + 0xC32168C) + 0x0));
                    t14 = math_sin_angle16(((int)(((((float)(((t10 << 1) + t10) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u15 = ((u9 - u11) * t14);
                    *(unsigned int *)(((0x10 + t6) + 0x0)) = ((int)((((u15 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t18 = *(int *)((((0x2E0 + a4) + (*(int *)(((int)stk + 4)))) + 0x0));
                    *(int *)((int)stk + 0) = (0x14 + t18);
                    u19 = (((struct o4_float *)((t8 + 0xC32168C)))->v);
                    u20 = (((struct o4_float *)(((signed char)(((t5 << 1) + t5) << 2) + 0xC321644)))->v);
                    t21 = (((struct oEC_short *)(a4))->v);
                    t24 = math_sin_angle16(((int)(((((float)(((t21 << 1) + t21) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u25 = ((u20 - u19) * t24);
                    *(unsigned int *)(((0x14 + t18) + 0x0)) = ((int)((((u25 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t28 = *(int *)((((0x2E0 + a4) + (*(int *)(((int)stk + 4)))) + 0x0));
                    *(int *)((int)stk + 0) = (0x18 + t28);
                    u29 = (((struct o8_float *)((t8 + 0xC32168C)))->v);
                    u30 = (((struct o8_float *)(((signed char)(((t5 << 1) + t5) << 2) + 0xC321644)))->v);
                    t31 = (((struct oEC_short *)(a4))->v);
                    t34 = math_sin_angle16(((int)(((((float)(((t31 << 1) + t31) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t5 = (t5 + 0x1);
                    u36 = ((u30 - u29) * t34);
                    *(unsigned int *)(((0x18 + t28) + 0x0)) = ((int)((((u36 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    if ((int)t5 < (int)0x6) continue;
                    break;
                }
                t38 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t38 + 0x1);
                t40 = 0xEC;
                if ((int)(short)(t38 + 0x1) >= (int)0x78) {
                    t39 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t39 + 0x1);
                    t40 = (t39 + 0x1);
                }
                return t40;
            }
            return obj_destroy(a4, a5, a6, 0x1);
        }
        t42 = (((struct o2E0_int *)(a4))->v);
        *(volatile short *)((a4 + 0xEC));
        u45 = (((float)(FUN_0c0e6e5c(a4)) * 65536.0f) / 360.0f);
        *(unsigned int *)((t42 + 0x10)) = ((int)((((_builtin_fabsf((math_sin_angle16(((int)(u45 + 0.5f) & 0xFFFF)))) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t48 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t48 + 0x1);
        t51 = 0xEC;
        if ((int)(short)(t48 + 0x1) < (int)0x29) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned int *)((t42 + 0x10)) = 0x0;
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
            t51 = 0x2F4;
        }
        return t51;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t56 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t56))->v) = -35.0f;
    (((struct o8_float *)(t56))->v) = 10.0f;
    (((struct oC_float *)(t56))->v) = 57.0f;
    *(unsigned int *)((t56 + 0x14)) = 0x31C7;
    t57 = 0x1;
    for (;;) {
        *(volatile int *)((((0x2E0 + a4) + (t57 << 2)) + 0x0));
        FUN_0c0e6fe8(t57, 0xC3215FC, 0xC3215B4, (signed char)(((t57 << 1) + t57) << 2));
        *(volatile int *)((((0x2E0 + a4) + (t57 << 2)) + 0x0));
        t64 = FUN_0c0e6fe8(0x0, t62, 0x0, t61);
        t57 = (t65 + 0x1);
        if ((int)t57 >= (int)0x6) {
            break;
        }
    }
    return t64;
}
