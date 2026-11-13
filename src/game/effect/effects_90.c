/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c041820-0c0419a8) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int);
int FUN_0c0c9962(int);
int FUN_0c0c9982(int);

int fx_spawn_041820(int a4)
{
    register int t0;
    register int t7;
    register int t2;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0418B4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC149BA0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149BAC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149BB8); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t3 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0xB);
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        t7 = 0x1F;
    }
    return t7;
}

int fx_tick_041820(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c0c9962(a4);
    t0 = (((struct o2E0_int *)(a4))->v);
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t1 = *(signed char *)((a4 + 0x8));
        switch (t1) {
        case 0:
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o1C_float *)(t0))->v) = 0.25f;
            break;
        case 1:
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.25f);
            if (!(1.0f > (u0 + 0.25f))) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            break;
        case 2:
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.25f);
            if (((((struct o1C_float *)(t0))->v)) > 0.5f) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        case 3:
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.25f);
            if (!(1.0f > (u0 + 0.25f))) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        }
        (((struct o24_float *)(t0))->v) = ((((struct o1C_float *)(t0))->v));
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
    }
    t0 = FUN_0c0c9982(a4);
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    return t0;
}
