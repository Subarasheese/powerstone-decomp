/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0acc54-0c0ace1c) */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0e24f0(int, int, int, int);

int fx_update_debris_10(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t27;
    register int t28;
    register int t29;
    register int t36;
    register int t41;
    register int t38;
    register int t39;
    register int t40;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t66;
    register int t70;
    register int t78;
    register int t46;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = 0x0;
                t2 = (0x2E0 + a4);
                for (;;) {
                    t3 = *(int *)((t2 + 0x0));
                    t2 = (t2 + 0x4);
                    t1 = (t1 + 0x1);
                    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + -1.0f);
                    (((struct o8_float *)(t3))->v) = (((((struct o8_float *)(t3))->v)) + ((((struct o2C_float *)(t3))->v)));
                    (((struct o40_float *)(t3))->v) = (((((struct o40_float *)(t3))->v)) - ((((((struct o40_float *)(t3))->v)) * 0.049999997f)));
                    if ((int)t1 >= (int)0xA) {
                        break;
                    }
                }
                t10 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t10 + 0x1);
                t46 = 0xEC;
                if ((int)(short)(t10 + 0x1) >= (int)0x1E) {
                    t11 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t11 + 0x1);
                    t46 = (t11 + 0x1);
                }
            } else {
                t46 = (obj_destroy(a4, 0x0, a6, a7));
            }
        } else {
            t27 = 0x0;
            t28 = (0x2E0 + a4);
            for (;;) {
                t29 = *(int *)((t28 + 0x0));
                t28 = (t28 + 0x4);
                t27 = (t27 + 0x1);
                (((struct o4_float *)(t29))->v) = (((((struct o4_float *)(t29))->v)) + ((((struct o28_float *)(t29))->v)));
                (((struct o8_float *)(t29))->v) = (((((struct o8_float *)(t29))->v)) + ((((struct o2C_float *)(t29))->v)));
                (((struct oC_float *)(t29))->v) = (((((struct oC_float *)(t29))->v)) + ((((struct o30_float *)(t29))->v)));
                if ((int)t27 >= (int)0xA) {
                    break;
                }
            }
            t36 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t36 + 0x1);
            t41 = 0xEC;
            if ((int)(short)(t36 + 0x1) > (int)0xA) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t38 = 0x0;
                t39 = (0x2E0 + a4);
                for (;;) {
                    t40 = *(int *)((t39 + 0x0));
                    t39 = (t39 + 0x4);
                    t38 = (t38 + 0x1);
                    (((struct o28_float *)(t40))->v) = 0.0f;
                    (((struct o2C_float *)(t40))->v) = 0.0f;
                    (((struct o30_float *)(t40))->v) = 0.0f;
                    if ((int)t38 >= (int)0xA) {
                        break;
                    }
                }
                t41 = 0x30;
            }
            t46 = t41;
        }
        t78 = t46;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t59 = (0x2E0 + a4);
        t60 = 0x0;
        for (;;) {
            t61 = *(int *)((t59 + 0x0));
            t59 = (t59 + 0x4);
            t62 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 0)) = (((((struct o4_float *)(t61))->v)) - (*(float *)((((signed char)(((t62 << 1) + t62) << 2) + 0xC339DA4) + 0x0))));
            t66 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 4)) = (((((struct o8_float *)(t61))->v)) - ((((struct o4_float *)(((signed char)(((t66 << 1) + t66) << 2) + 0xC339DA4)))->v)));
            t70 = *(signed char *)((a4 + 0xEE));
            *(float *)(((int)stk + 8)) = (((((struct oC_float *)(t61))->v)) - ((((struct o8_float *)(((signed char)(((t70 << 1) + t70) << 2) + 0xC339DA4)))->v)));
            FUN_0c0e24f0(((int)stk + 0), 0x0, a6, a7);
            t60 = (t60 + 0x1);
            (((struct o28_float *)(t61))->v) = ((*(float *)(((int)stk + 0))) * 10.0f);
            (((struct o2C_float *)(t61))->v) = ((*(float *)(((int)stk + 4))) * 10.0f);
            (((struct o30_float *)(t61))->v) = ((*(float *)(((int)stk + 8))) * 10.0f);
            if ((int)t60 >= (int)0xA) {
                break;
            }
        }
        t78 = 0x30;
    }
    return t78;
}
