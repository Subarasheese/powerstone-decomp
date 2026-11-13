/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4a18-0c0b4c0c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
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
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int snd_play_stage_obj_se(int, int, int);
float math_sin_angle16(int);

int stage_gimmick_34_spawn(int a4)
{
    register int t0;
    register int t14;

    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B4AD2;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        obj_set_record(t0, (*(signed char *)((t0 + 0x314))));
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A9D4); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1;
        t14 = 0x1;
    }
    return t14;
}

int stage_gimmick_34_update(int a4)
{
    int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        if ((*(signed char *)((a4 + 0x108))) != 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) < (int)0x3C) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                obj_set_record(a4, (*(signed char *)((a4 + 0x314))));
            }
        }
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
            *(unsigned char *)((a4 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            obj_set_record(a4, (*(signed char *)((a4 + 0x314))));
        }
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x2);
    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x168) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    u0 = math_sin_angle16(((int)(((((float)((((struct oEE_short *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    *(unsigned int *)((a4 + 0x34)) = ((int)((((u0 * 851968.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oEE_short *)(a4))->v);
    if ((t0 != 0x86) && (t0 != 0x13A)) {
        return 0xEE;
    }
    return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x1);
}
