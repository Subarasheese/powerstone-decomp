/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b8460-0c0b87b0) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int, int, int, int);
int snd_play_char_voice(int, int);
int fx_spawn_10(int, int);

int fx_spawn_09(int a4, int a5);

int fx_spawn_09(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = obj_create(0x1, 0x1, 0x2, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)((a4 + 0x4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        (((struct oF0_ushort *)(t0))->v) = a5;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B8604;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = *(int *)((t0 + 0x30));
        t3 = *(int *)(((a5 << 2) + 0xC153090));
        u0 = ((((struct o20_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC1530A8 + (a5 << 2)) + 0x0))) * (math_cos_angle16((((-t2) + t3) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        u0 = ((((struct o28_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC1530A8 + (a5 << 2)) + 0x0))) * (math_sin_angle16((((-t2) + t3) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 300.0f);
        u0 = *(float *)(((a5 << 2) + 0xC153060));
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        obj_set_record_char(t0, 0x72);
        t4 = (((-t2) + t3) + 0x14000);
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t4 = t2;
            t4 = (t4 << 2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0xF;
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), t2);
            t2 = (t2 + 0x1);
        }
        (((struct o8_float *)(((((struct o2E4_int *)(t0))->v))))->v) = (((((struct o2D4_float *)(a4))->v)) - ((((struct o24_float *)(t0))->v)));
        t1 = 0x8;
    }
    return t1;
}

int fx_update_09(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C0B861A;
    if ((v0_2 == 1)) goto L_C0B8628;
    return obj_destroy(v0_0, R5, a6, a7);
    L_C0B8628:;
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    R5 = (0x1);
    if (((((((struct oEE_short *)(v0_0))->v)) & 0x1) == 0)) goto L_C0B8640;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_1;
    L_C0B8648:;
    w0_0 = (0.199999988f);
    if (((((((struct oEE_short *)(v0_0))->v)) & 2) == 0)) goto L_C0B865C;
    v0_2 = (0x50);
    w0_0 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C0B8662:;
    *(float *)((v0_0 + v0_2)) = w0_0;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0B8688;
    if ((v0_2 == 1)) goto L_C0B870E;
    if (!((v0_2 == 2))) goto L_C0B876E;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + (*(float *)(((((((struct oF0_short *)(v0_0))->v)) << 2) + 0xC153078))));
    (((struct o58_float *)(v0_0))->v) = ((((struct o50_float *)(v0_0))->v));
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0B876E;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0B876E;
    L_C0B876E:;
    v0_1 = FUN_0c0555dc();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0B878A;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    L_C0B878A:;
    return v0_2;
    L_C0B870E:;
    (((struct o8_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = 0.0f;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C0B876E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    (((struct o101_uchar *)(v0_0))->v) = v0_1;
    (((struct o102_uchar *)(v0_0))->v) = v0_1;
    goto L_C0B876E;
    L_C0B8688:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 30.0f);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    w0_0 = (30.0f);
    if (((int)((((struct oEC_short *)(v0_0))->v)) <= (int)R5)) goto L_C0B86AA;
    (((struct o8_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_0;
    L_C0B86AA:;
    if (((int)((((struct oF0_short *)(v0_0))->v)) <= (int)R5)) goto L_C0B86C4;
    if ((((((struct oEC_short *)(v0_0))->v)) != 10)) goto L_C0B86C4;
    fx_spawn_09((*(int *)((v0_0 + 0x1C))), (((((struct oF0_short *)(v0_0))->v)) - 1));
    L_C0B86C4:;
    if ((!(((((struct o2D4_float *)(v0_0))->v)) > ((((struct o24_float *)(v0_0))->v))))) goto L_C0B876E;
    if (((int)((((struct oEC_short *)(v0_0))->v)) >= (int)0xA)) goto L_C0B86EC;
    v0_2 = (0xF0);
    if (((int)((((struct oF0_short *)(v0_0))->v)) <= (int)0x1)) goto L_C0B86EC;
    fx_spawn_09((*(int *)((v0_0 + 0x1C))), ((*(short *)((v0_0 + v0_2))) - 1));
    L_C0B86EC:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    fx_spawn_10(v0_0, ((((struct oF0_short *)(v0_0))->v)));
    snd_play_char_voice((*(int *)((v0_0 + 0x1C))), 0x32);
    goto L_C0B876E;
    L_C0B865C:;
    v0_2 = (0x50);
    w0_0 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C0B8662;
    L_C0B8640:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C0B8648;
    L_C0B861A:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    (((struct oEE_ushort *)(v0_0))->v) = v0_1;
    goto L_C0B8628;
}
