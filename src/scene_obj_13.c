/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0584e8-0c05876c) */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int fx_tick_0586de(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC4CFA80, (*(signed char *)((((short)((short)(*(signed char *)((a4 + 0x4))) * (short)0x1C) + 0xC14BC24) + 0x18))));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(volatile int *)((a4 + 0x2E0));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(volatile int *)((a4 + 0x2E0));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x11F;
        FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), 0xC4CFA80, ((*(signed char *)((((short)((short)(*(signed char *)((a4 + 0x4))) * (short)0x1C) + 0xC14BC24) + 0x19))) + 0x1));
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(volatile int *)((a4 + 0x2E4));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(volatile int *)((a4 + 0x2E4));
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0e6fe8();
        *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x11F;
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        t0 = *(signed char *)0xC7F2EE4;
                        t2 = (unsigned char)t0;
                        if ((unsigned char)t0 != 7) {
                            t0 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                            t2 = (t0 + 0x1);
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0299999993f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                u0 = (((struct o4_float *)0xC058744)->v);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - u0);
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - u0);
                t0 = 0xC;
                if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o8_float *)0xC058744)->v)))) {
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((((struct o0_float *)0xC058744)->v));
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
