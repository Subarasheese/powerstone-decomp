/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6368-0c0b6568) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int _quick_odd_mvn(void);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int snd_play_side_se(int, int);

int fx_spawn_03(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t0;
    register int t10;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    *(float *)(((int)stk + 0)) = f4;
    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = (((*(float *)(((int)stk + 0))) * ((((struct o0_float *)0xC0B648C)->v))) / ((((struct o4_float *)0xC0B648C)->v)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33C1D0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C1B8); }
        (((struct o101_uchar *)(t0))->v) = 0x9;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record(t0, (*(signed char *)(((int)stk + 8))));
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B6438;
        t8 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t8, 0xC4CFA68, 0x58);
        *(unsigned char *)((t8 + 0x0)) = 0x1;
        *(unsigned short *)((t8 + 0x2)) = 0xF;
        t10 = 0xF;
    }
    return t10;
}

int fx_update_03(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if (t0 != 3) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o48_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) / 5.0f);
        t0 = *(signed char *)((a4 + 0x3));
        t1 = 0x22;
        if (!(((((struct o44_float *)(a4))->v)) > 0.299999982f)) {
            t1 = 0x21;
        }
        snd_play_side_se(t0, t1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x6D);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o105_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            u0 = (((struct o5C_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = (u0 - 0.0625f);
            t0 = 0x5C;
            if (!((u0 - 0.0625f) > 0.0f)) {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t0 = (t2 + 0x1);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = 0x50;
        if (!(((((struct o44_float *)(a4))->v)) > ((((struct o50_float *)(a4))->v)))) {
            t2 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
            t1 = (t2 + 0x1);
        }
        t0 = t1;
    }
    return t0;
}
