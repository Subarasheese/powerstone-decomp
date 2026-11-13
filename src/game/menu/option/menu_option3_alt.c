/* OPTION group screen 3 (0c01ae48-0c01b66c) */

/* named globals (symbols.txt) */
extern char g_res_art_model[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
int obj_tick_class(int, int, int, int);
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };
struct o2_short { char p[0x2]; short v; };

int FUN_0c01b274(int a4)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t13;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x2);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B206;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        t2 = 0x0;
        t3 = 0xC11C220;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0x1F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), ((int)g_res_art_model), (*(signed char *)((t3 + 0xC))));
            t11 = *(int *)((((0x2E0 + t0) + t4) + 0x0));
            (((struct o24_float *)(t11))->v) = 1.0f;
            (((struct o20_float *)(t11))->v) = 1.0f;
            (((struct o1C_float *)(t11))->v) = 1.0f;
            *(volatile int *)((((0x2E0 + t0) + t4) + 0x0));
            t13 = FUN_0c0e6fe8(t11);
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x10);
            t4 = (t4 + 0x4);
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        t14 = t13;
    }
    return t14;
}

int opt_page3_run_objects_in_mask(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36234C = a4;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned short *)0xC36234C = 0x0;
    return t0;
}

int FUN_0c01b4f2(int a4, int a5, int a6, int a7)
{
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                return ((int (*)(int, int, int, int))(0xC01B56A))(a4, a5, 0xC361BF0, a7);
            }
            return ((int (*)(int, int, int, int))(0xC01B554))(a4, a5, 0xC361BF0, a7);
        }
        if (((unsigned short)((((struct o2_short *)0xC361BF8)->v)) & a5) == 0) {
            *(volatile short *)0xC361C0E;
            return ((int (*)(int, int, int, int))(0xC01B54A))(a4, a5, 0xC361BF0, a7);
        }
        return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
    }
    if (((unsigned short)((((struct o0_short *)0xC361BF8)->v)) & a5) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BF8)->v)) & a5) != 0) {
            return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
        }
        return ((int (*)(int, int, int, int))(0xC01B56A))(a4, a5, 0xC361BF0, a7);
    }
    return ((int (*)(int, int, int, int))(0xC01B566))(a4, a5, 0xC361BF0, a7);
}
