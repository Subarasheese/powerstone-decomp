/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04a13c-0c04a294) */

/* named globals (symbols.txt) */
extern char g_res_item[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int _quick_odd_mvn(void);
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);

int fx_spawn_04a13c(int a4)
{
    register int t0;
    register int t3;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x20F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC335FF4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC3360CC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC32183C); }
        (((struct o60_float *)(t0))->v) = 1.0f;
        (((struct o64_float *)(t0))->v) = 1.0f;
        (((struct o68_float *)(t0))->v) = 1.0f;
        (((struct o118_uint *)(t0))->v) = (0x840 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (a4 + 0x300)));
        *(unsigned int *)((t0 + 0x10)) = 0xC04A1EA;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1;
        t3 = 0x1;
    }
    return t3;
}

int fx_tick_04a13c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((int)g_res_item), (*(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC321854))));
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x6) {
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) - 0.199999988f);
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - 0.199999988f);
            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) - 0.199999988f);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    return obj_destroy(a4, a5, a6, a7);
}
