/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03921c-0c039424) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int _quick_odd_mvn(void);
int thunk_math_mat_get_translate(int, int);
struct o2E0_int { char p[0x2E0]; int v; };


int fx_tick_039090(int a4)
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
    register int t9;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    } else {
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                t0 = 0xC0392F4;
                t3 = 0x0;
                t4 = (0x2E0 + a4);
                t5 = (0x2E0 + a4);
                t6 = (0x2E0 + a4);
                t7 = (0x2E0 + a4);
                for (;;) {
                    if ((int)t3 >= (int)0xA) {
                        break;
                    }
                    t8 = 0x2E0;
                    t7 = t3;
                    t7 = (t7 << 2);
                    t8 = (t8 + a4);
                    t8 = (t8 + t7);
                    t9 = (*(int *)((t8 + 0x0)));
                    t0 = 0x44;
                    u0 = (*(float *)((t9 + t0)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t9 + t0)) = u0;
                    t0 = 0x48;
                    t9 = 0x2E0;
                    t9 = (t9 + a4);
                    t9 = (t9 + t7);
                    t8 = (*(int *)((t9 + 0x0)));
                    t9 = 0x2E0;
                    u0 = (*(float *)((t8 + t0)));
                    t9 = (t9 + a4);
                    u0 = (u0 - 0.049999997f);
                    t9 = (t9 + t7);
                    *(float *)((t8 + t0)) = u0;
                    t0 = 0x4C;
                    t8 = (*(int *)((t9 + 0x0)));
                    t9 = 0x2E0;
                    u0 = (*(float *)((t8 + t0)));
                    t9 = (t9 + a4);
                    u0 = (u0 - 0.049999997f);
                    t9 = (t9 + t7);
                    *(float *)((t8 + t0)) = u0;
                    t0 = 0x44;
                    t8 = (*(int *)((t9 + 0x0)));
                    u0 = 0.0f;
                    u1 = (*(float *)((t8 + t0)));
                    if (!(u1 > u0)) {
                        t8 = 0x2E0;
                        t8 = (t8 + a4);
                        t8 = (t8 + t7);
                        t9 = (*(int *)((t8 + 0x0)));
                        *(float *)((t9 + t0)) = 0.0f;
                    }
                    t9 = 0x2E0;
                    t0 = 0x48;
                    u0 = 0.0f;
                    t9 = (t9 + a4);
                    t9 = (t9 + t7);
                    t8 = (*(int *)((t9 + 0x0)));
                    u1 = (*(float *)((t8 + t0)));
                    if (!(u1 > u0)) {
                        t8 = (*(int *)((t4 + 0x0)));
                        *(float *)((t8 + t0)) = 0.0f;
                    }
                    t9 = (*(int *)((t5 + 0x0)));
                    t0 = 0x4C;
                    u0 = 0.0f;
                    u1 = (*(float *)((t9 + t0)));
                    t3 = (t3 + 0x1);
                    if (!(u1 > u0)) {
                        t8 = (*(int *)((t6 + 0x0)));
                        *(float *)((t8 + t0)) = 0.0f;
                    }
                    t4 = (t4 + 0x4);
                    t5 = (t5 + 0x4);
                    t6 = (t6 + 0x4);
                }
                t0 = 0xA;
                t3 = t8;
                t4 = 0x24;
                t5 = 0x20;
                t6 = 0x9;
                t8 = t7;
                for (;;) {
                    if ((int)t6 < (int)0x1) {
                        break;
                    }
                    t8 = 0x2E0;
                    t8 = (t8 + a4);
                    t3 = (*(int *)((t5 + t8)));
                    t0 = (*(int *)((t4 + t8)));
                    t3 = (t3 + 0x4);
                    t0 = (t0 + 0x4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t3); }
                    t4 = (t4 - 4);
                    t5 = (t5 - 4);
                    t6 = (t6 - 1);
                }
                t0 = *(signed char *)((a4 + 0x3));
                thunk_math_mat_get_translate(((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((((struct o2E0_int *)(a4))->v)) + 0x4));
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t3 = 0xEC;
                if ((int)(short)(t0 + 0x1) >= (int)0x14) {
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t3 = (t0 + 0x1);
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = 0x71BA;
            t3 = 0x24;
            t4 = 0x20;
            t5 = 0x9;
            for (;;) {
                if ((int)t5 < (int)0x1) {
                    break;
                }
                t6 = 0x2E0;
                t6 = (t6 + a4);
                t7 = (*(int *)((t4 + t6)));
                t2 = (*(int *)((t3 + t6)));
                t7 = (t7 + 0x4);
                t2 = (t2 + 0x4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t7); }
                t3 = (t3 - 4);
                t4 = (t4 - 4);
                t5 = (t5 - 1);
            }
            t2 = *(signed char *)((a4 + 0x3));
            thunk_math_mat_get_translate(((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((((struct o2E0_int *)(a4))->v)) + 0x4));
            t2 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xB));
            t3 = t2;
            if (t2 == 0) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t3 = 0xEC;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}
