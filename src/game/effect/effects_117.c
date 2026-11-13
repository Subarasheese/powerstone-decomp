/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c049288-0c049408) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_evn_mvn(void);

int fx_spawn_0492a4(int a4);

int FUN_0c049288(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = fx_spawn_0492a4(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int fx_spawn_0492a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x4)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC04951E;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t3) + 0x0))), 0xC4CFA68, 0x21);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x2)) = 0x639;
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x40)) = *(struct mv4 *)((((a4 << 2) << 2) + 0xC14A970)); }
            t5 = *(int *)((((0x2E0 + t0) + t3) + 0x0));
            (((struct o24_float *)(t5))->v) = 2.0f;
            (((struct o20_float *)(t5))->v) = 2.0f;
            (((struct o1C_float *)(t5))->v) = 2.0f;
            t5 = *(int *)((((0x2E0 + t0) + t3) + 0x0));
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t4 = (int)((unsigned int)(int)u1 % (unsigned int)0x10);
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
