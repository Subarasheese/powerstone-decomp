/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ace1c-0c0ad15c) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int math_rand_next(void);
int FUN_0c0e24f0(int);
int _modls(void);
int _quick_odd_mvn(void);
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };


int FUN_0c0acf90(int a4)
{
    int stk[1];
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t19;
    register int t21;
    register int t20;
    register int t26;
    register int t42;
    register int t2;
    register int t3;
    register float u8;
    register float u9;
    register int t23;
    register int t27;
    register float u28;
    register float u29;

    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return obj_destroy(a4);
        }
        t5 = 0x0;
        t6 = 0x0;
        t7 = (0x2E0 + a4);
        for (;;) {
            if ((int)t6 >= (int)0x5) {
                break;
            }
            t5 = (*(int *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            t2 = 0x28;
            t1 = 0x4;
            t2 = (t2 + t5);
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x2C;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            t6 = (t6 + 0x1);
            *(float *)((t5 + t1)) = u8;
            t1 = 0x8;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            t2 = 0x30;
            t2 = (t2 + t5);
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t1 = 0xC;
            u8 = (*(float *)((t5 + t1)));
            u9 = (*(float *)((t2 + 0x0)));
            u8 = (u8 + u9);
            *(float *)((t5 + t1)) = u8;
            t3 = (*(int *)((t5 + 0x14)));
            t3 = (t3 + ((*(int *)((t5 + 0x38)))));
            *(unsigned int *)((t5 + 0x14)) = t3;
        }
        t19 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t19 + 0x1);
        t21 = 0xEC;
        if ((int)(short)(t19 + 0x1) > (int)0xF) {
            t20 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t20 + 0x1);
            t21 = (t20 + 0x1);
        }
        return t21;
    }
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + a4);
    t26 = 0x0;
    for (;;) {
        if ((int)t26 >= (int)0x5) {
            break;
        }
        t27 = (*(int *)(((int)stk + 0)));
        t27 = (t27 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t27;
        t27 = (t27 - 4);
        t27 = (*(int *)((t27 + 0x0)));
        t23 = (math_rand_next());
        u29 = (float)(((int)((int)t23 % (int)0xA)) - 5);
        (((struct o28_float *)(t27))->v) = u29;
        t23 = (math_rand_next());
        u29 = (float)((int)((int)t23 % (int)0x5));
        (((struct o2C_float *)(t27))->v) = u29;
        t23 = (math_rand_next());
        u29 = (float)(((int)((int)t23 % (int)0xA)) - 5);
        (((struct o30_float *)(t27))->v) = u29;
        FUN_0c0e24f0((t27 + 0x28));
        u29 = ((((struct o28_float *)(t27))->v));
        t23 = t27;
        t23 = (t23 + 0x10);
        u29 = (u29 * 20.0f);
        (((struct o28_float *)(t27))->v) = u29;
        u28 = ((((struct o2C_float *)(t27))->v));
        u28 = (u28 * 20.0f);
        (((struct o2C_float *)(t27))->v) = u28;
        u29 = ((((struct o30_float *)(t27))->v));
        u29 = (u29 * 20.0f);
        (((struct o30_float *)(t27))->v) = u29;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)((0xC339ED8)); }
        t26 = (t26 + 0x1);
        *(unsigned int *)((t27 + 0x38)) = 0xE39;
    }
    t42 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t42 + 0x1);
    return (t42 + 0x1);
}
