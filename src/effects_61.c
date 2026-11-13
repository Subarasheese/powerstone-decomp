/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03c1ec-0c03c5c0) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
int FUN_0c06231c(int, int, int);
struct o308_uint { char p[0x308]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_destroy(int, int, int, int);
int snd_play_char_voice(int, int);

int fx_spawn_03c1ec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0xA);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03C380;
        *(unsigned char *)((t0 + 0x4)) = a7;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(volatile float *)0xC03C364;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t3) + 0x0))), 0xC4CFA68, 0x21);
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x2)) = 0x638;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            t5 = *(int *)((((0x2E0 + t0) + t3) + 0x0));
            (((struct o24_float *)(t5))->v) = 1.0f;
            (((struct o20_float *)(t5))->v) = 1.0f;
            (((struct o1C_float *)(t5))->v) = 1.0f;
            t5 = *(int *)((((0x2E0 + t0) + t3) + 0x0));
            math_rand_float();
            
            t4 = FUN_0c0e6f24();
            t2 = (t2 + 0x1);
            *(unsigned int *)(((0x18 + t5) + 0x0)) = (((t4 << 8) << 2) << 2);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)0xA) {
                break;
            }
        }
        t1 = (((t4 << 8) << 2) << 2);
    }
    return t1;
}

void FUN_0c03c2f6(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x2;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x7) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x21));
    return;
    }
}

int fx_spawn_03c3ca(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC03C478;
        *(unsigned char *)((t0 + 0x4)) = a5;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.5f;
        (((struct o54_float *)(t0))->v) = 0.5f;
        (((struct o50_float *)(t0))->v) = 0.5f;
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x25);
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x10;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        t2 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t2))->v) = 1.0f;
        (((struct o20_float *)(t2))->v) = 1.0f;
        (((struct o1C_float *)(t2))->v) = 1.0f;
        t1 = 0x1C;
    }
    return t1;
}

int fx_tick_03c3ca(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;

    t4 = *(int *)((a4 + 0x1C));
    if (t4 == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t4 + 0x1)));
    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t5 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t5 - 1);
        if (((short)(t5 - 1) != 0) && (t0 = *(int *)((t4 + 0x1C)), t1 = *(signed char *)((0x71BD + t0)), t1 != 53)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x190;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t0 = *(int *)0xC7F2B0C;
        *(unsigned int *)((a4 + 0x30)) = t0;
        (((struct o308_uint *)(a4))->v) = t0;
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if (((short)(t0 - 1) != 0) && (t2 = *(int *)((t4 + 0x1C)), t3 = *(signed char *)((0x71BD + t2)), t3 != 53)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1111);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((short)(t0 + 0x1) == 15) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) - 1);
                (((struct oEE_ushort *)(a4))->v) = 0x7;
                t1 = 0xEE;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = 0x7;
        snd_play_char_voice(t4, 0x35);
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        return snd_play_char_voice(t4, 0x35);
    }
    return 0xEE;
}
