/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c049b7c-0c049d14) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);

int fx_spawn_049b7c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x6, 0x1, 0x4, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC049D14;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = -190.0f;
        if ((*(int *)0xC7F3020) != 0) {
            (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) + 16.0f);
        }
        (((struct o28_float *)(t0))->v) = -20.0f;
        u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o38_float *)(t0))->v)));
        (((struct o20_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
        u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o3C_float *)(t0))->v)));
        (((struct o24_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
        t2 = 0xC14A9E4;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), ((int)g_res_kyoutsuu), 0xFFFFFF8C);
            t5 = *(int *)((((0x2E0 + t0) + t4) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0x31F;
            (((struct oC_float *)(t5))->v) = 0.0f;
            u0 = *(float *)((t2 + 0x0));
            t6 = t2;
            t2 = (t2 + 0x8);
            (((struct o28_float *)(t5))->v) = (u0 * 0.75f);
            (((struct o2C_float *)(t5))->v) = (((((struct o4_float *)(t6))->v)) * 0.75f);
            u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o28_float *)(t5))->v)));
            (((struct o4_float *)(t5))->v) = ((-(u0 * 1.0f)) / 640.0f);
            u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o2C_float *)(t5))->v)));
            (((struct o8_float *)(t5))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t3 = (t3 + 0x1);
            (((struct o1C_float *)(t5))->v) = ((-(((((struct o28_float *)(t0))->v)) * 0.75f)) / 640.0f);
            (((struct o20_float *)(t5))->v) = ((-(((((struct o28_float *)(t0))->v)) * 0.75f)) / 640.0f);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x20;
    }
    return t1;
}
