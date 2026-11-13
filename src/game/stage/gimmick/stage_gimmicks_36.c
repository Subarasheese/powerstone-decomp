/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b476c-0c0b4a18) */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int snd_play_stage_obj_se(int, int, int);
int math_rand_next(void);
float math_rand_float(void);
int _modls(void);

int stage_gimmick_33_spawn(int a4)
{
    register int t0;
    register int t7;
    register float u2;
    register int t3;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x3);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B482E;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC0B4874)->v));
        u2 = (((struct o8_float *)0xC0B4874)->v);
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((t3 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t5, 0xC664958, ((*(signed char *)((a4 + 0x2))) + t3));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0x231;
            (((struct o44_float *)(t5))->v) = 1.0f;
            (((struct o48_float *)(t5))->v) = 1.0f;
            (((struct o4C_float *)(t5))->v) = 1.0f;
            (((struct o1C_float *)(t5))->v) = u2;
            t3 = (t3 + 0x1);
            (((struct o20_float *)(t5))->v) = u2;
            (((struct o24_float *)(t5))->v) = u2;
            if ((int)t3 >= (int)0x3) {
                break;
            }
        }
        t7 = 0x24;
    }
    return t7;
}

int stage_gimmick_33_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 == 3) {
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xEC;
                    if ((int)(short)(t0 - 1) < 0) {
                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                        t2 = 0x0;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - ((((((struct o44_float *)(t1))->v)) * 0.0399999991f)));
                (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - ((((((struct o48_float *)(t1))->v)) * 0.0399999991f)));
                (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - ((((((struct o4C_float *)(t1))->v)) * 0.0199999996f)));
                (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o44_float *)(t1))->v));
                (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o48_float *)(t1))->v));
                (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o4C_float *)(t1))->v));
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                t2 = 0xEC;
                if ((int)(short)(t1 + 0x1) > (int)0x78) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = ((int)((int)(math_rand_next()) % (int)0x3C));
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t2 = 0x2E4;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = 0x2E8;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    u0 = 6000.0f;
    u0 = u0 + 4000.0f * (math_rand_float());
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o28_float *)(a4))->v) = ((math_rand_float()) * 5000.0f);
    t0 = 0x0;
    t1 = (0x2E0 + a4);
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x1);
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o4C_float *)(t2))->v) = 1.0f;
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
    t0 = (int)((int)(math_rand_next()) % (int)0x3);
    if (t0 != 0) {
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x7);
    }
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
    return 0x2E4;
}
