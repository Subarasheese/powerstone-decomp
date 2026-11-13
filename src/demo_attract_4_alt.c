/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c028dec-0c029268) */

/* named globals (symbols.txt) */
extern char g_res_syukyaku[];
struct o28_float { char p[0x28]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c028ea0(int, int, float);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int strlen(int);

int FUN_0c028f48(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x2C));
    t1 = *(int *)((a4 + 0x4));
    u0 = (((struct o8_float *)(a4))->v);
    if ((int)t1 > 0) {
        t2 = 0x28;
        if ((*(signed char *)0xC7F2F08) != 0) {
        } else {
            t3 = obj_create(0x5, 0x1, 0x1);
            t4 = t3;
            if (t3 != 0) {
                *(unsigned int *)((t3 + 0x10)) = 0xC028C88;
                FUN_0c028ea0(a4, t3, u0);
                (((struct o28_float *)(t3))->v) = 8.0f;
                t5 = 0x0;
                u1 = 8.0f;
                for (;;) {
                    if ((int)t5 >= (int)(*(signed char *)((t3 + 0x2DC)))) {
                        break;
                    }
                    t6 = t5;
                    t6 = (t6 << 2);
                    t6 = (t6 + (0x2E0 + t3));
                    t6 = (*(int *)((t6 + 0x0)));
                    *(unsigned char *)((t6 + 0x0)) = 0x1;
                    *(unsigned char *)((t6 + 0x1)) = 0x0;
                    *(unsigned short *)((t6 + 0x2)) = 0x100F;
                    FUN_0c06233a(t6, ((int)g_res_syukyaku), (*(int *)((a4 + 0x4))));
                    u1 = ((((struct o50_float *)(t3))->v));
                    (((struct o98_float *)(t6))->v) = u1;
                    u1 = ((((struct o98_float *)(t6))->v));
                    if (1.0f > u1) {
                        (((struct o98_float *)(t6))->v) = 1.0f;
                    }
                    u1 = ((((struct o54_float *)(t3))->v));
                    t5 = (t5 + 0x1);
                    if (u1 > (((((struct o98_float *)(t6))->v)))) {
                        u1 = ((((struct o54_float *)(t3))->v));
                        (((struct o98_float *)(t6))->v) = u1;
                    }
                }
                t4 = 0x2DC;
            }
            t2 = t4;
        }
        return t2;
    }
    if ((int)t1 < 0) {
        t1 = 0x28;
        if ((*(signed char *)0xC7F2F08) != 0) {
        } else {
            t2 = obj_create(0x5, 0x1, 0x1);
            t3 = t2;
            if (t2 != 0) {
                *(unsigned int *)((t2 + 0x10)) = 0xC028DEC;
                FUN_0c028ea0(a4, t2, u0);
                t4 = 0x0;
                for (;;) {
                    if ((int)t4 >= (int)(*(signed char *)((t2 + 0x2DC)))) {
                        break;
                    }
                    t5 = t4;
                    t5 = (t5 << 2);
                    t5 = (t5 + (0x2E0 + t2));
                    t5 = (*(int *)((t5 + 0x0)));
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                    *(unsigned char *)((t5 + 0x1)) = 0x0;
                    *(unsigned short *)((t5 + 0x2)) = 0x100F;
                    FUN_0c06233a(t5, ((int)g_res_syukyaku), (-(*(int *)((a4 + 0x4)))));
                    u0 = ((((struct o50_float *)(t2))->v));
                    (((struct o98_float *)(t5))->v) = u0;
                    u0 = ((((struct o98_float *)(t5))->v));
                    if (1.0f > u0) {
                        (((struct o98_float *)(t5))->v) = 1.0f;
                    }
                    u0 = ((((struct o54_float *)(t2))->v));
                    t4 = (t4 + 0x1);
                    if (u0 > (((((struct o98_float *)(t5))->v)))) {
                        u0 = ((((struct o54_float *)(t2))->v));
                        (((struct o98_float *)(t5))->v) = u0;
                    }
                }
                t3 = 0x2DC;
            }
            t1 = t3;
        }
        return t1;
    }
    if (t0 == 0) {
        return 0x8;
    }
    strlen((*(int *)((a4 + 0x2C))));
    return ((int (*)(void))(0xC029218))();
}
