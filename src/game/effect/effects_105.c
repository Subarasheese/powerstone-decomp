/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04512c-0c0454b4) */

/* named globals (symbols.txt) */
int fx_spawn_04512c(int a4, int a5, int a6);
extern char g_camera_pos[];
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int FUN_0c06231c(int, int, int);


int fx_tick_04512c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        t0 = *(signed char *)0xC7F307C;
        t1 = ((0x2E0 + a4) + 0x4);
        t2 = 0x1;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.399999976f);
            (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.399999976f);
            (((struct o24_float *)(t3))->v) = (((((struct o24_float *)(t3))->v)) + 0.399999976f);
            FUN_0c06231c(t3, ((int)g_res_kyoutsuu), ((t0 & 0x1) + 0x7A));
            if ((*(signed char *)((a4 + 0x8))) == 2) {
                (((struct o44_float *)(t3))->v) = (((((struct o44_float *)(t3))->v)) - 0.099999994f);
                (((struct o48_float *)(t3))->v) = (((((struct o48_float *)(t3))->v)) - 0.099999994f);
                (((struct o4C_float *)(t3))->v) = (((((struct o4C_float *)(t3))->v)) - 0.099999994f);
            }
            t2 = (t2 + 0x1);
            if ((int)(signed char)t2 >= (int)0x3) {
                break;
            }
        }
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return obj_destroy(a4);
            }
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            t1 = 0x44;
            if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x8;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
