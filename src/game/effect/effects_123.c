/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c049d14-0c049e68) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ui_hud_enabled(void);
int FUN_0c0555c4(void);
int obj_destroy(int);
int _quick_odd_mvn(int, int, int, int);

int fx_tick_049b7c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_destroy(a4);
        }
        *(unsigned int *)((a4 + 0x34)) = ((-(*(int *)0xC7F2B0C)) + 0x10000);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        }
        (((struct o308_uint *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            t1 = 0x0;
            if (0.0f > ((((struct o20_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t1 = 0x2;
            }
            t2 = t1;
            if (0.0f > ((((struct o28_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t2 = (t1 + 0x1);
            }
            *(unsigned char *)(((((0x308 + a4) + 0x4) + t0) + 0x0)) = t2;
            t1 = ((int)0x1 << (int)t0);
            t0 = (t0 + 0x1);
            *(unsigned char *)((((0x308 + a4) + t2) + 0x0)) = ((*(signed char *)((((0x308 + a4) + t2) + 0x0))) | t1);
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t0 = (0x2E0 + a4);
        t1 = (0x308 + a4);
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            *(volatile signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x44)) = *(struct mv3 *)(0xC14A9C0); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t0 = ui_hud_enabled();
        t1 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = FUN_0c0555c4();
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = ((-(*(int *)0xC7F2B0C)) + 0x10000);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        }
        (((struct o308_uint *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            t2 = 0x0;
            if (0.0f > ((((struct o20_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t2 = 0x2;
            }
            t3 = t2;
            if (0.0f > ((((struct o28_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t3 = (t2 + 0x1);
            }
            *(unsigned char *)(((((0x308 + a4) + 0x4) + t0) + 0x0)) = t3;
            t2 = ((int)0x1 << (int)t0);
            t0 = (t0 + 0x1);
            *(unsigned char *)((((0x308 + a4) + t3) + 0x0)) = ((*(signed char *)((((0x308 + a4) + t3) + 0x0))) | t2);
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t0 = (0x2E0 + a4);
        t2 = (0x308 + a4);
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            *(volatile signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x44)) = *(struct mv3 *)(0xC14A9C0); }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t0 = ui_hud_enabled();
        t2 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
