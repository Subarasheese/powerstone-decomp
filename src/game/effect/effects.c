/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0318e0-0c03202c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

int fx_spawn_0318e0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    if ((signed char)a5 != 0) {
        if ((signed char)a5 == 1) {
            t1 = obj_create(0x5, 0x1, 0x6, 0x0);
            t2 = t1;
            if (t1 != 0) {
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                *(unsigned char *)((t1 + 0x1)) = 0x1;
                *(unsigned char *)((t1 + 0x5)) = 0x19;
                *(unsigned int *)((t1 + 0x10)) = 0xC031DAA;
                *(unsigned int *)((t1 + 0x1C)) = a4;
                *(unsigned char *)((t1 + 0x8)) = a5;
                *(unsigned short *)((t1 + 0x6)) = 0xF;
                (((struct o24_float *)(t1))->v) = 0.0f;
                (((struct o28_float *)(t1))->v) = 0.0f;
                (((struct o20_float *)(t1))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
                (((struct o58_float *)(t1))->v) = 1.0f;
                (((struct o54_float *)(t1))->v) = 1.0f;
                (((struct o50_float *)(t1))->v) = 1.0f;
                t3 = 0x50;
                t4 = (t1 + 0x2C);
                t5 = (a4 + 0x2C);
                t6 = t0;
                t0 = 0x0;
                t7 = a5;
                for (;;) {
                    if ((int)t0 < (int)0x6) {
                        t5 = 0x2E0;
                        t7 = t0;
                        t7 = (t7 << 2);
                        t5 = (t5 + t1);
                        t5 = (t5 + t7);
                        t8 = *(int *)((t5 + 0x0));
                        t5 = 0x2E0;
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        t5 = (t5 + t1);
                        t5 = (t5 + t7);
                        t3 = 0x1F;
                        *(unsigned short *)(((*(int *)((t5 + 0x0))) + 0x2)) = t3;
                        t3 = (*(signed char *)((a4 + 0x3)));
                        t6 = 0x2E0;
                        t8 = t3;
                        t3 = (t3 << 1);
                        t3 = (t3 + t8);
                        t3 = (t3 << 2);
                        t5 = 0xC06233A;
                        t3 = (t3 << 1);
                        t6 = (t6 + t1);
                        t6 = (t6 + t7);
                        t6 = (*(int *)((t6 + 0x0)));
                        t3 = (FUN_0c06233a(t6, ((signed char)t3 + 0xC6002D0), 0x2));
                        t3 = 0x1C;
                        t6 = t0;
                        t6 = (t6 << 1);
                        t4 = 0xC149558;
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        *(float *)((t5 + t3)) = 1.0f;
                        t3 = 0x20;
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        *(float *)((t5 + t3)) = 0.0f;
                        t3 = 0x24;
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        *(float *)((t5 + t3)) = 1.0f;
                        t3 = 0x4;
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        t6 = (t6 + t0);
                        t6 = (t6 << 2);
                        t6 = (signed char)t6;
                        t6 = (t6 + t4);
                        u0 = (*(float *)((t6 + 0x0)));
                        *(float *)((t5 + t3)) = u0;
                        u0 = (*(float *)((t6 + t3)));
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        t3 = 0x8;
                        *(float *)((t5 + t3)) = u0;
                        u0 = (*(float *)((t6 + t3)));
                        t5 = (*(int *)((((0x2E0 + t1) + t7) + 0x0)));
                        t3 = 0xC;
                        *(float *)((t5 + t3)) = u0;
                        t8 = (int)t0 < (int)0x3;
                        t0 = (t0 + 0x1);
                        if (t8) {
                            t3 = 0x2E0;
                            t3 = (t3 + t1);
                            t6 = 0x72D0;
                            t5 = (*(int *)((t7 + t3)));
                            t3 = 0x6000;
                            t4 = 0x71F1;
                            *(unsigned int *)((t5 + 0x18)) = t3;
                            t5 = 0x2E0;
                            t5 = (t5 + t1);
                            t5 = (t5 + t7);
                            t3 = (*(int *)((t5 + 0x0)));
                            t5 = 0x2E0;
                            *(unsigned int *)((t3 + 0x10)) = 0x2000;
                            t5 = (t5 + t1);
                            t5 = (t5 + t7);
                            t3 = (*(int *)((t5 + 0x0)));
                            t5 = 0xC7E40C4;
                            t3 = (*(signed char *)((t1 + 0x3)));
                            t8 = ((unsigned short)t3 * (unsigned short)t6);
                            t3 = 0x300;
                            t6 = t8;
                            t6 = (unsigned short)t6;
                            t6 = (t6 + t5);
                            t4 = (t4 + t6);
                            t4 = (*(signed char *)((t4 + 0x0)));
                            t4 = ((short)t4 * (short)0xDC0);
                            t4 = (short)t4;
                            t3 = (t3 + t6);
                            t4 = (t4 + t3);
                            t8 = (0x90 + t3);
                            t3 = 0x790;
                            t4 = (t4 + t3);
                            *(unsigned int *)((t8 + 0x0)) = t4;
                        } else {
                            t5 = 0x2E0;
                            t6 = 0x72D0;
                            t5 = (t5 + t1);
                            t5 = (t5 + t7);
                            t3 = (*(int *)((t5 + 0x0)));
                            t5 = 0xFFFFA000;
                            *(unsigned int *)((t3 + 0x18)) = t5;
                            t3 = 0x2E0;
                            t3 = (t3 + t1);
                            t5 = (*(int *)((t7 + t3)));
                            t3 = 0x2E0;
                            *(unsigned int *)((t5 + 0x10)) = 0x2000;
                            t3 = (t3 + t1);
                            t5 = (*(int *)((t7 + t3)));
                            t3 = (*(signed char *)((t1 + 0x3)));
                            t8 = ((unsigned short)t3 * (unsigned short)t6);
                            t3 = 0xC7E40C4;
                            t6 = t8;
                            t6 = (unsigned short)t6;
                            t6 = (t6 + t3);
                            t3 = 0x71F1;
                            t4 = (*(signed char *)((t6 + t3)));
                            t3 = 0x300;
                            t3 = (t3 + t6);
                            t4 = ((short)t4 * (short)0xDC0);
                            t4 = (short)t4;
                            t4 = (t4 + t3);
                            t3 = 0x4D0;
                            t4 = (t4 + t3);
                            t3 = 0x90;
                            *(unsigned int *)((t5 + t3)) = t4;
                        }
                        continue;
                    }
                    break;
                }
                (((struct oEC_ushort *)(t1))->v) = 0x0;
                t2 = 0xEC;
            }
            t0 = t2;
        } else {
            if ((signed char)a5 != 2) {
                if ((signed char)a5 == 3) {
                    t1 = obj_create(0x5, 0x1, 0x1, 0x0);
                    t2 = t1;
                    if (t1 == 0) {
                    } else {
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                        *(unsigned char *)((t1 + 0x1)) = 0x1;
                        *(unsigned char *)((t1 + 0x5)) = 0x19;
                        *(unsigned int *)((t1 + 0x10)) = 0xC031DAA;
                        *(unsigned int *)((t1 + 0x1C)) = a4;
                        *(unsigned char *)((t1 + 0x8)) = a5;
                        *(unsigned short *)((t1 + 0x6)) = 0x1F;
                        (((struct o58_float *)(t1))->v) = 0.099999994f;
                        (((struct o54_float *)(t1))->v) = 0.099999994f;
                        (((struct o50_float *)(t1))->v) = 0.099999994f;
                        t3 = *(signed char *)((t1 + 0x3));
                        (((struct o118_uint *)(t1))->v) = (0x4D0 + ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4))));
                        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0x1F;
                        t3 = *(signed char *)((a4 + 0x3));
                        FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x5);
                        t3 = (((struct o2E0_int *)(t1))->v);
                        (((struct oC_float *)(t3))->v) = 0.0f;
                        (((struct o4_float *)(t3))->v) = 0.0f;
                        (((struct o8_float *)(((((struct o2E0_int *)(t1))->v))))->v) = -60.0f;
                        t3 = (((struct o2E0_int *)(t1))->v);
                        (((struct o24_float *)(t3))->v) = 1.0f;
                        (((struct o20_float *)(t3))->v) = 1.0f;
                        (((struct o1C_float *)(t3))->v) = 1.0f;
                        *(unsigned int *)((((((struct o2E0_int *)(t1))->v)) + 0x10)) = 0x4000;
                        (((struct oEC_ushort *)(t1))->v) = 0xA;
                        t2 = 0xEC;
                    }
                    t1 = t2;
                } else {
                    t2 = (signed char)a5;
                    if ((signed char)a5 == 10) {
                        t3 = obj_create(0x5, 0x1, 0x1, 0x0);
                        t4 = t3;
                        if (t3 != 0) {
                            *(unsigned char *)((t3 + 0x0)) = 0x1;
                            *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                            *(unsigned char *)((t3 + 0x1)) = 0x1;
                            *(unsigned char *)((t3 + 0x5)) = 0x19;
                            *(unsigned int *)((t3 + 0x10)) = 0xC031DAA;
                            *(unsigned int *)((t3 + 0x1C)) = a4;
                            *(unsigned char *)((t3 + 0x8)) = a5;
                            *(unsigned short *)((t3 + 0x6)) = 0x1F;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
                            (((struct o58_float *)(t3))->v) = 1.0f;
                            (((struct o54_float *)(t3))->v) = 1.0f;
                            (((struct o50_float *)(t3))->v) = 1.0f;
                            *(unsigned char *)((((((struct o2E0_int *)(t3))->v)) + 0x0)) = 0x1;
                            *(unsigned short *)((((((struct o2E0_int *)(t3))->v)) + 0x2)) = 0x1F;
                            t5 = *(signed char *)((a4 + 0x3));
                            FUN_0c06233a(((((struct o2E0_int *)(t3))->v)), ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x3);
                            t5 = (((struct o2E0_int *)(t3))->v);
                            u0 = *(float *)0xC031E08;
                            (((struct o24_float *)(t5))->v) = u0;
                            (((struct o20_float *)(t5))->v) = u0;
                            (((struct o1C_float *)(t5))->v) = u0;
                            (((struct oEC_ushort *)(t3))->v) = 0x0;
                            (((struct oEE_ushort *)(t3))->v) = 0x28;
                            t4 = 0xEE;
                        }
                        t2 = t4;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                t1 = obj_create(0x5, 0x1, 0x1, 0x0);
                t3 = t1;
                if (t1 == 0) {
                } else {
                    *(unsigned char *)((t1 + 0x0)) = 0x1;
                    *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                    *(unsigned char *)((t1 + 0x1)) = 0x1;
                    *(unsigned char *)((t1 + 0x5)) = 0x19;
                    *(unsigned int *)((t1 + 0x10)) = 0xC031DAA;
                    *(unsigned int *)((t1 + 0x1C)) = a4;
                    *(unsigned char *)((t1 + 0x8)) = a5;
                    *(unsigned short *)((t1 + 0x6)) = 0x1F;
                    (((struct o28_float *)(t1))->v) = 0.0f;
                    (((struct o20_float *)(t1))->v) = 0.0f;
                    (((struct o24_float *)(t1))->v) = -22.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
                    (((struct o58_float *)(t1))->v) = 1.0f;
                    (((struct o54_float *)(t1))->v) = 1.0f;
                    (((struct o50_float *)(t1))->v) = 1.0f;
                    *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0x1F;
                    t4 = *(signed char *)((a4 + 0x3));
                    FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x3);
                    t4 = (((struct o2E0_int *)(t1))->v);
                    (((struct o24_float *)(t4))->v) = 1.0f;
                    (((struct o20_float *)(t4))->v) = 1.0f;
                    (((struct o1C_float *)(t4))->v) = 1.0f;
                    t4 = *(signed char *)((t1 + 0x3));
                    (((struct o118_uint *)(t1))->v) = ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0x14A0) + (0x1E80 + ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4)));
                    (((struct oEC_ushort *)(t1))->v) = 0x0;
                    (((struct oEE_ushort *)(t1))->v) = 0x28;
                    t3 = 0xEE;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = obj_create(0x5, 0x1, 0x1, 0x0);
        t2 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned char *)((t0 + 0x5)) = 0x19;
            *(unsigned int *)((t0 + 0x10)) = 0xC031DAA;
            *(unsigned int *)((t0 + 0x1C)) = a4;
            *(unsigned char *)((t0 + 0x8)) = a5;
            *(unsigned short *)((t0 + 0x6)) = 0x1F;
            (((struct o28_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            (((struct o24_float *)(t0))->v) = -22.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
            (((struct o58_float *)(t0))->v) = 1.0f;
            (((struct o54_float *)(t0))->v) = 1.0f;
            (((struct o50_float *)(t0))->v) = 1.0f;
            *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x3);
            t3 = (((struct o2E0_int *)(t0))->v);
            (((struct o24_float *)(t3))->v) = 1.0f;
            (((struct o20_float *)(t3))->v) = 1.0f;
            (((struct o1C_float *)(t3))->v) = 1.0f;
            t3 = *(signed char *)((t0 + 0x3));
            (((struct o118_uint *)(t0))->v) = ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0x14A0) + (0x1E80 + ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4)));
            (((struct oEC_ushort *)(t0))->v) = 0x0;
            (((struct oEE_ushort *)(t0))->v) = 0x28;
            t2 = 0xEE;
        }
        t1 = t2;
    }
    return t1;
}
