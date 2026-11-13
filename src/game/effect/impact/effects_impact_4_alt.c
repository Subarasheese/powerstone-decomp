/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6568-0c0b68b4) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c048ea0(int, int);
int obj_destroy(int);
int FUN_0c0624c4(int, int, int);
int math_vec3_accumulate(int, int);
int _divls(void);

int fx_update_heading_shot(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        FUN_0c0624c4((0x9C + t0), 0xC4CFA68, (((int)((int)((((struct oEC_short *)(a4))->v)) / (int)0x4)) + 0x48));
        t1 = *(signed char *)((a4 + 0x9));
        if (t1 != 0) {
            if (t1 != 1) {
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0699999928f);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0699999928f);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0699999928f);
                (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.049999997f);
                (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.049999997f);
                (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.049999997f);
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    FUN_0c048ea0((a4 + 0x20), 0x0);
                }
            } else {
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0699999928f);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0699999928f);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0699999928f);
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
            }
        } else {
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0699999928f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0699999928f);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0699999928f);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) + 0.0799999982f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) + 0.0799999982f);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) + 0.0799999982f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) < (int)0xA) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
            }
        }
        math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
        return math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
    }
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
