/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0aeab8-0c0aeca8) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int stage_obj_load_layout_pos(int);
int _quick_odd_mvn(void);
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c026554(int);
int obj_destroy(int, int, int, int);
extern int FUN_0c0ac5c4();
int stage_obj_on_break(int);
int fx_spawn_thrown_item_kind(int, int);

int stage_gimmick_14_spawn(int a4)
{
    register int t0;
    register int t12;
    register int t9;

    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AEB74;
        *(unsigned char *)((t0 + 0x4)) = 0x11;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        obj_set_record(t0, (*(signed char *)((t0 + 0x314))));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A05C); }
        t9 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t9, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t9 + 0x0)) = 0x1;
        *(unsigned short *)((t9 + 0x2)) = 0x1;
        t12 = 0x1;
    }
    return t12;
}

int stage_gimmick_14_update(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    int t4;
    register int t12;
    register int t13;
    register int t14;
    register int t33;
    register int t34;
    register int t53;
    register int t62;
    register int t55;
    register int t44;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t1 = FUN_0c026554(a4);
        if ((signed char)t1 != 0) {
            t2 = ((int (*)(int))(FUN_0c0ac5c4))(a4);
            if (t2 == 0) {
                t4 = *(signed char *)((a4 + 0x30E));
                if ((t4 != 0) && (t4 != 1)) {
                    if (t4 != 2) {
                    } else {
                        fx_spawn_thrown_item_kind((a4 + 0x20), 0x2);
                        fx_spawn_thrown_item_kind((a4 + 0x20), 0x2);
                    }
                } else {
                    fx_spawn_thrown_item_kind((a4 + 0x20), 0x1);
                }
                stage_obj_on_break(a4);
                t12 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t12 + 0x1);
                t44 = (t12 + 0x1);
            } else {
                t13 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t13 + 0x1);
                if ((int)(short)(t13 + 0x1) >= (int)0xB4) {
                    t14 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t14 + 0x1);
                    t44 = (t14 + 0x1);
                } else {
                    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + -1.0f);
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    t44 = 0x24;
                }
            }
        } else {
            t33 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t33 + 0x1);
            if ((int)(short)(t33 + 0x1) >= (int)0xB4) {
                t34 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t34 + 0x1);
                t44 = (t34 + 0x1);
            } else {
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + -1.0f);
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                t44 = 0x24;
            }
        }
        return t44;
    }
    t53 = ((int (*)(int, int, int, int))(FUN_0c0ac5c4))(a4, a5, a6, a7);
    t62 = t53;
    if (t53 != 0) {
        t55 = *(signed char *)((t53 + 0x71BA));
        t62 = t55;
        if (t55 == 36) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t53 + 0x3)));
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o105_uchar *)(a4))->v) = 0x0;
            t62 = 0x105;
        }
    }
    return t62;
}
