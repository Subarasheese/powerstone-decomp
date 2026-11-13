/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c040260-0c040550) */

struct oF0_short { char p[0xF0]; short v; };
int math_vec3_add(int, int, int);
int FUN_0c0e6fe8(int);
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c040260(int);
int obj_destroy(int, int, int, int);

int FUN_0c040410(int a4);

int FUN_0c040410(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = 0xC0404E8;
    t1 = (0x2E0 + a4);
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    t4 = (0x2E0 + a4);
    for (;;) {
        if ((*(signed char *)(((*(int *)((t4 + 0x0))) + 0x0))) != 0) {
            t5 = (*(int *)((t3 + 0x0)));
            t0 = 0x44;
            t6 = t1;
            if (1.0f > (*(float *)((t5 + t0)))) {
                *(float *)((t5 + t0)) = ((*(float *)((t5 + t0))) + 0.125f);
                t0 = 0x48;
                *(float *)((t5 + t0)) = ((*(float *)((t5 + t0))) + 0.125f);
                t0 = 0x4C;
                u0 = *(float *)((t5 + t0));
                *(float *)((t5 + t0)) = (u0 + 0.125f);
                if (!(1.0f > (u0 + 0.125f))) {
                    t0 = 0xC;
                    t0 = (FUN_0c0e6fe8(t1));
                } else {
                    t6 = t1;
                }
            }
            t1 = t6;
            t1 = t5;
            t1 = (t1 + 0x4);
            t0 = (math_vec3_add(t1, (t5 + 0x4), (t5 + 0x28)));
            t6 = *(int *)((t5 + 0x10));
            *(unsigned int *)((t5 + 0x10)) = (t6 - 1);
            if ((t6 - 1) == 0) {
                t0 = 0xF0;
                *(unsigned char *)((t5 + 0x0)) = 0x0;
                *(unsigned short *)((a4 + t0)) = ((*(short *)((a4 + t0))) - 1);
            }
        } else {
            t5 = t1;
        }
        t2 = (t2 + 0x1);
        t1 = t5;
        t3 = (t3 + 0x4);
        t4 = (t4 + 0x4);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    return ((((struct oF0_short *)(a4))->v));
}

int fx_tick_04015c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4, a5, a6, a7);
            }
            t0 = FUN_0c040410(a4);
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    FUN_0c040260(a4);
    FUN_0c040410(a4);
    t0 = 0xF2;
    if (((((struct oF2_short *)((*(int *)((a4 + 0x1C)))))->v)) == 0) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
