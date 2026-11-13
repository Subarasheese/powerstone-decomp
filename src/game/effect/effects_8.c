/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c033ba8-0c033cd0) */

struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int fx_spawn_033ba8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = obj_create(0x5, 0x1, 0xA);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC033CD0;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.0f;
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oEE_ushort *)(t0))->v) = a5;
        (((struct oF2_ushort *)(t0))->v) = a6;
        (((struct oF0_ushort *)(t0))->v) = a6;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x7);
        t2 = 0x1;
        t3 = 0x1;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0x2E0 + t0));
            t3 = (*(int *)((t3 + 0x0)));
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0x41F;
            t4 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t3, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x8);
            (((struct o20_float *)(t3))->v) = 0.0f;
            t2 = (t2 + 0x1);
            (((struct o40_float *)(t3))->v) = 1.0f;
        }
        t1 = 0x2DC;
    }
    return t1;
}
