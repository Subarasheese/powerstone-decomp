/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5620-0c0b5770) */

struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int FUN_0c0e6fe8(void);
struct o20_float { char p[0x20]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0ac5c4(int, int, int, int);

int stage_gimmick_39_spawn(int a4)
{
    register int t0;
    register int t7;
    register int t4;

    t0 = obj_create(0x4, 0x1, 0x1);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B56A6;
        (((struct o308_uint *)(t0))->v) = a4;
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        t4 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t4, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x2)) = 0x1;
        t7 = 0x1;
    }
    return t7;
}

int stage_gimmick_39_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    } else {
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((((struct oEC_short *)(a4))->v)) << 2) << 2));
        } else {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - ((((((struct oEC_short *)(a4))->v)) << 2) << 2));
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0xFFFF);
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = FUN_0c0ac5c4(a4, a5, a6, a7);
        *(unsigned int *)((a4 + 0x1C)) = t0;
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            if (((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) > ((((struct o20_float *)(a4))->v))) {
                (((struct oEE_ushort *)(a4))->v) = 0x1;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
            }
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            t1 = 0xEC;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c0ac5c4(a4, a5, a6, a7);
        t0 = t1;
        if (t1 == 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x0;
            t0 = 0x0;
        }
    }
    return t0;
}
