/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c0e3c-0c0c10f0) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c026554(int);
int FUN_0c0555dc(void);
int obj_destroy(int);
int snd_play_char_voice(int, int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(void);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_linked_effect(int, int, int, int, int, int, int, int, int);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);

int fx_spawn_23(int a4, int a5, int a6);

int fx_update_22(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0555dc();
    if (t0 == 0) {
        if ((*(signed char *)((a4 + 0x8))) == 0) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 == 0) {
                if ((*(signed char *)((a4 + 0x108))) == 0) {
                    t1 = FUN_0c026554(a4);
                    if ((signed char)t1 != 0) {
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    } else {
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                        if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        }
                        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                        t1 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t1 + 0x10)) = ((*(int *)((t1 + 0x10))) + 0x1555);
                        t2 = 0x2E0;
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                t2 = t1;
            } else {
                t1 = t0;
                t0 = ((*(int *)((a4 + 0x30))) + 0x8000);
                t3 = 0x0;
                for (;;) {
                    if ((int)t3 >= (int)0x7) {
                        break;
                    }
                    t0 = (t0 + 0x2000);
                    t1 = 0x2;
                    t1 = (FUN_0c0e6e5c());
                    t1 = (fx_spawn_23(a4, t0, t1));
                    t3 = (t3 + 0x1);
                }
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x32);
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            return t2;
        }
        *(volatile short *)((a4 + 0xEC));
        *(unsigned char *)((a4 + 0x1)) = (FUN_0c0e6e5c());
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x14) {
            return obj_destroy(a4);
        }
        return 0xEC;
    }
    return obj_destroy(a4);
}

int fx_spawn_23(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t32;
    register float u14;
    register int t22;
    register int t23;
    register int t27;
    register float u18;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned char *)(((int)stk + 20)) = a6;
    t0 = obj_create(0x1, 0x1, 0x1);
    t32 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x7;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C1186;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 24)));
        FUN_0c0e6fe8();
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        if ((*(signed char *)((0x71BC + (*(int *)((a4 + 0x1C)))))) == 2) {
            u14 = ((float)((*(signed char *)(((int)stk + 20))) + 0x1) * 10.0f);
            u14 = -u14;
            u18 = u14;
        } else {
            u18 = ((float)(*(signed char *)(((int)stk + 20))) * 10.0f);
        }
        (((struct o3C_float *)(t0))->v) = u18;
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        obj_set_record_char(t0, 0x72);
        t22 = (((struct o2E0_int *)(t0))->v);
        t23 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t22, ((signed char)((((t23 << 1) + t23) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((t22 + 0x0)) = 0x1;
        *(unsigned short *)((t22 + 0x2)) = 0xB;
        *(unsigned int *)((t22 + 0x18)) = 0x4000;
        *(int *)((int)stk + 16) = 0xC1531B4;
        *(int *)((int)stk + 12) = 0xC1531A8;
        *(int *)((int)stk + 8) = 0x6F;
        *(int *)((int)stk + 4) = 0xB4;
        *(int *)((int)stk + 0) = 0x5;
        t27 = *(signed char *)((a4 + 0x3));
        t32 = (fx_spawn_linked_effect((*(signed char *)((t0 + 0x3))), (t0 + 0x6C), t0, ((signed char)((((t27 << 1) + t27) << 2) << 1) + 0xC6002D0), 0x5, 0xB4, 0x6F, 0xC1531A8, 0xC1531B4));
    }
    return t32;
}
