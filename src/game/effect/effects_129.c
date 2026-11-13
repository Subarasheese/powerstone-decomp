/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04add0-0c04b054) */

struct o4_float { char p[0x4]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_destroy(int, int, int, int);

int FUN_0c04add0(int a4, int a5, int a6);
int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6);

int FUN_0c04add0(int a4, int a5, int a6)
{
    register int t5;
    register int t6;
    register int t14;
    register float u15;
    register float u19;

    if ((int)(short)a4 <= (int)(unsigned char)(*(signed char *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x2)))) {
        if (((unsigned short)(*(short *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x4))) & 0x400) != 0) {
            t5 = 0x1;
            for (;;) {
                t6 = *(int *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x8));
                if ((int)(short)a4 <= (int)(*(int *)(((t6 + ((t5 << 2) << 1)) + 0x0)))) {
                    break;
                }
                t5 = (t5 + 0x1);
            }
            t14 = *(int *)((((((t5 - 1) << 2) << 1) + t6) + 0x0));
            u15 = (((struct o4_float *)(((((t5 - 1) << 2) << 1) + t6)))->v);
            u19 = u15;
            u19 = u19 + (((((((struct o4_float *)((t6 + ((t5 << 2) << 1))))->v)) - u15) / (float)((*(int *)(((t6 + ((t5 << 2) << 1)) + 0x0))) - t14))) * ((float)((short)a4 - t14));
            *(float *)((a6 + 0x0)) = u19;
            if ((*(float *)((a6 + 0x0))) == 0.0f) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6)
{
    register int t37;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t15;
    register float u17;
    register float u21;

    t37 = 0x0;
    if ((int)(short)a4 <= (int)(unsigned char)(*(signed char *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x2)))) {
        if (((unsigned short)(*(short *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x4))) & 16) != 0) {
            t5 = a6;
            t6 = 0x0;
            t7 = (((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0xC);
            for (;;) {
                t8 = 0x1;
                for (;;) {
                    t9 = *(int *)((t7 + 0x0));
                    if ((int)(short)a4 <= (int)(*(int *)(((((t8 << 2) << 1) + t9) + 0x0)))) {
                        break;
                    }
                    t8 = (t8 + 0x1);
                }
                t15 = *(int *)((((((t8 - 1) << 2) << 1) + t9) + 0x0));
                u17 = (((struct o4_float *)(((((t8 - 1) << 2) << 1) + t9)))->v);
                u21 = u17;
                u21 = u21 + (((((((struct o4_float *)((((t8 << 2) << 1) + t9)))->v)) - u17) / (float)((*(int *)(((((t8 << 2) << 1) + t9) + 0x0))) - t15))) * ((float)((short)a4 - t15));
                *(float *)((t5 + 0x0)) = u21;
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x4);
                t7 = (t7 + 0x4);
                if ((int)t6 >= (int)0x3) {
                    break;
                }
            }
        }
        t37 = 0x1;
    }
    return t37;
}

int FUN_0c04aeec(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    *(float *)0xC321FC0 = ((*(float *)0xC321FC0) - 0.099999994f);
    if (!((*(float *)0xC321FC0) > 0.0f)) {
        *(float *)0xC321FC0 = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = (*(short *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x2)));
    }
    t0 = a4;
    t1 = 0x0;
    u0 = 0.099999994f;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t0 = ((((struct oF0_short *)(a4))->v));
        t0 = (signed char)(FUN_0c04ae50(t0, (*(signed char *)((t1 + (*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x4)))))), ((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x1C), f4, f5, f6));
        if (t0 != 0) {
            t0 = ((((struct oF0_short *)(a4))->v));
            t0 = (signed char)(FUN_0c04add0(t0, (*(signed char *)((t1 + (*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x4)))))), ((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x40)));
        }
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t4 = *(int *)((t3 + 0x0));
        t3 = 0x2E0;
        *(unsigned char *)((t4 + 0x0)) = t0;
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t4 = *(int *)((t3 + 0x0));
        u0 = ((((struct o1C_float *)(t4))->v));
        u0 = (u0 / 10.0f);
        (((struct o1C_float *)(t4))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = ((((struct o20_float *)(t3))->v));
        u0 = (u0 / 10.0f);
        (((struct o20_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = ((((struct o24_float *)(t3))->v));
        u0 = (u0 / 10.0f);
        (((struct o24_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        t1 = (t1 + 0x1);
        u0 = (*(float *)0xC321FC0);
        (((struct o44_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = (*(float *)0xC321FC0);
        (((struct o48_float *)(t3))->v) = u0;
        u0 = (*(float *)0xC321FC0);
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        (((struct o4C_float *)(t3))->v) = u0;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = 0xF2;
    if ((int)(short)((t0 + 0x1) - 1) >= (int)((((struct oF2_short *)(a4))->v))) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
