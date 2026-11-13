/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0324-0c0b0600) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int stage_obj_load_layout_pos(int);
int _quick_odd_mvn(void);
struct o308_int { char p[0x308]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };

int stage_gimmick_11_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (((*(signed char *)(((int)stk + 0))) << 2) << 1);
        *(unsigned int *)((t0 + 0x10)) = 0xC0B03FE;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        obj_set_record(t0, (*(signed char *)((t0 + 0x314))));
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        stage_obj_load_layout_pos(t0);
        t9 = *(signed char *)(((int)stk + 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((signed char)(((t9 << 1) + t9) << 2) + 0xC33A344)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A32C); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t16 = 0xF;
    }
    return t16;
}

int stage_gimmick_11_update_b(int a4)
{
    register int t0;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, ((*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))) + (*(signed char *)((a4 + 0xEE)))));
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        if ((*(signed char *)((a4 + 0x108))) != 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) < (int)0x1E) {
            return 0xEC;
        }
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        return obj_set_record(a4, (*(signed char *)((a4 + 0x314))));
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
        *(unsigned char *)((a4 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        return obj_set_record(a4, (*(signed char *)((a4 + 0x314))));
    }
    return 0xEC;
}
