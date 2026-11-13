/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0382a8-0c038418) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);

int fx_spawn_0382a8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC038418;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(a4))->v)) + 4.0f);
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o54_float *)(t0))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o58_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (((t2 << 1) + t2) + 0x6));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0x41F;
            (((struct o4_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o8_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = (0.0f - (((float)t2 * 1.0f)));
            (((struct oC_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o1C_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            (((struct o24_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x10)) = 0x0;
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x14)) = 0x0;
            t3 = ((t2 << 2) + (0x2E0 + t0));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x18)) = 0x0;
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        t1 = 0x24;
    }
    return t1;
}
