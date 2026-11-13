/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b30c8-0c0b33fc) */

struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int _quick_odd_mvn(void);
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E4_int { char p[0x2E4]; int v; };
int fx_spawn_hit_effect(int, int, int, int);
int FUN_0c05566a(void);
int obj_destroy(int);
int snd_play_stage_obj_se(int, int, int);
int fx_spawn_burst_sprites(int, int, int, int, int);
int stage_spawn_type01(int);
int stage_spawn_type02(int);

void stage_gimmick_27_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = obj_create(0x2, 0x1, (*(signed char *)(((signed char)t0 + 0xC33A74C))), 0x0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        *(unsigned char *)((t1 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0B32A2;
        *(unsigned char *)((t1 + 0x4)) = 0xC;
        (((struct o30E_uchar *)(t1))->v) = t0;
        (((struct o30D_uchar *)(t1))->v) = 0x0;
        (((struct o308_uint *)(t1))->v) = a4;
        (((struct o30E_uchar *)(t1))->v) = t0;
        (((struct o2D9_uchar *)(t1))->v) = 0x1;
        (((struct o2DA_uchar *)(t1))->v) = 0x1;
        (((struct o315_uchar *)(t1))->v) = 0x3;
        (((struct o102_uchar *)(t1))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t1))->v) = 0x1;
        stage_obj_load_layout_pos(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x50)) = *(struct mv3 *)(0xC33A734); }
        t2 = ((signed char)t0 + 0xC33A74C);
        t3 = 0x0;
        t4 = t0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((((signed char)t0 + 0xC33A74C) + 0x0)))) {
                break;
            }
            t4 = t3;
            t5 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t4 = (t4 << 2);
            t5 = (FUN_0c06233a((*(int *)((((0x2E0 + t1) + t4) + 0x0))), 0xC664958, (*(signed char *)((t3 + t5)))));
            t5 = 0x5;
            t2 = 0x2E0;
            t2 = (t2 + t1);
            t2 = (t2 + t4);
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x2)) = t5;
            t5 = 0x34;
            t2 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            t6 = ((short)(*(signed char *)0xC7F3051) * (short)t5);
            t5 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t5 = (*(signed char *)((t3 + t5)));
            t7 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t7);
            t5 = (t5 << 2);
            t7 = ((*(int *)((((short)t6 + 0xC350B60) + 0x18))) + t5);
            t5 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t7); }
            t5 = 0x34;
            t2 = 0x2E0;
            t2 = (t2 + t1);
            t6 = ((short)(*(signed char *)0xC7F3051) * (short)t5);
            t5 = (*(int *)(((((signed char)t0 << 2) + 0xC33A75C) + 0x0)));
            t2 = (t2 + t4);
            t2 = (*(int *)((t2 + 0x0)));
            t5 = (*(signed char *)((t3 + t5)));
            t7 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t7);
            t5 = (t5 << 2);
            t2 = (t2 + 0x10);
            t7 = ((*(int *)((((short)t6 + 0xC350B60) + 0x1C))) + t5);
            t5 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t7); }
            t5 = 0x2E0;
            t2 = 0x20;
            t2 = (t2 + t1);
            t5 = (t5 + t1);
            u0 = (*(float *)((t2 + 0x0)));
            t6 = *(int *)((t4 + t5));
            t5 = 0x4;
            t2 = 0x24;
            u1 = (*(float *)((t6 + t5)));
            t2 = (t2 + t1);
            u1 = (u1 - u0);
            *(float *)((t6 + t5)) = u1;
            t5 = 0x8;
            u0 = (*(float *)((t2 + 0x0)));
            t2 = 0x28;
            t6 = *(int *)((((0x2E0 + t1) + t4) + 0x0));
            t2 = (t2 + t1);
            u1 = (*(float *)((t6 + t5)));
            u1 = (u1 - u0);
            t4 = (t4 + (0x2E0 + t1));
            *(float *)((t6 + t5)) = u1;
            t5 = 0xC;
            t6 = *(int *)((t4 + 0x0));
            u0 = (*(float *)((t2 + 0x0)));
            u1 = (*(float *)((t6 + t5)));
            u1 = (u1 - u0);
            *(float *)((t6 + t5)) = u1;
            t3 = (t3 + 0x1);
        }
        *(unsigned char *)((((((struct o2E8_int *)(t1))->v)) + 0x0)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E8_int *)(t1))->v)) + 0x4)) = *(struct mv3 *)(0xC33A728); }
    }
}

int stage_gimmick_27_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = FUN_0c05566a();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            fx_spawn_burst_sprites((*(signed char *)((a4 + 0x30E))), 0x0, 0x0, 0x0, a4);
            (((struct o107_uchar *)(a4))->v) = 0x1;
            (((struct o106_uchar *)(a4))->v) = 0x1;
            t1 = 0x1;
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)(*(signed char *)((0xC33A7BF + (*(signed char *)((a4 + 0x30E))))))) {
                    break;
                }
                t1 = (*(int *)((0xC33A7C4 + ((*(signed char *)((a4 + 0x30E))) << 2))));
                t1 = (t1 + (t2 * 0xD));
                t4 = *(signed char *)((t1 + 0x0));
                if (t4 != 1) {
                    if (t4 != 2) {
                        t4 = t1;
                    } else {
                        stage_spawn_type02(t1);
                    }
                } else {
                    stage_spawn_type01(t1);
                }
                t2 = (t2 + 0x1);
                t1 = t4;
            }
            return obj_destroy(a4);
        }
        (((struct o30D_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
        snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x2);
        return fx_spawn_hit_effect((0x10C + a4), (a4 + 0x2C), 0x2, 0x1);
    }
    return t0;
}
