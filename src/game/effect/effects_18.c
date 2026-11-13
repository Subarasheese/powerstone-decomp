/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0355cc-0c0357e0) */

struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct o2E4_int { char p[0x2E4]; int v; };
struct oF0_short { char p[0xF0]; short v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);

int fx_spawn_0355cc(int a4)
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

    t0 = obj_create(0x5, 0x1, 0x2, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t2 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0356DE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        t2 = (((struct o7198_short *)(a4))->v);
        (((struct oF0_ushort *)(t0))->v) = t2;
        u0 = (((struct o0_float *)0xC035720)->v);
        u1 = (((struct o4_float *)0xC035720)->v);
        t3 = (t0 + 0x20);
        t4 = t2;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t5 = 0x2E0;
            t6 = t2;
            t6 = (t6 << 2);
            t5 = (t5 + t0);
            t5 = (t5 + t6);
            t5 = (*(int *)((t5 + 0x0)));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0xF;
            t7 = *(signed char *)(((0x3 + a4) + 0x0));
            t4 = 0xC06233A;
            FUN_0c06233a(t5, ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), (*(int *)((t6 + 0xC149658))));
            if (t2 == 0) {
                t4 = (*(signed char *)((a4 + 0x71F1)));
                if (t4 == 0) {
                    (((struct o90_uint *)(t5))->v) = (0x21F0 + a4);
                } else {
                    t3 = 0x3690;
                    t3 = (t3 + a4);
                    (((struct o90_uint *)(t5))->v) = t3;
                    t6 = t3;
                }
                t7 = t6;
                t6 = t4;
            } else {
                (((struct oC_float *)(t5))->v) = u1;
                (((struct o28_float *)(t5))->v) = 0.0f;
                (((struct o2C_float *)(t5))->v) = u0;
                (((struct o30_float *)(t5))->v) = 1.0f;
            }
            t3 = t7;
            t2 = (t2 + 0x1);
            t4 = t6;
        }
        t1 = 0x2DC;
    }
    return t1;
}

int fx_tick_0355cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 21) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct o2E4_int *)(a4))->v);
    math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
    t0 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x2000);
    t0 = (((struct o2E4_int *)(a4))->v);
    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - 1.0f);
    if (((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)) + 0x1));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
