/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c035444-0c0355cc) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int thunk_FUN_0c062242(int);

int fx_spawn_035444(int a4)
{
    register int t0;
    register int t1;

    t1 = obj_create(0x5, 0x1, 0x1);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x21F;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0354D8;
        FUN_0c0e6fe8(0x1);
        (((struct o58_float *)(t1))->v) = 1.0f;
        (((struct o54_float *)(t1))->v) = 1.0f;
        (((struct o50_float *)(t1))->v) = 1.0f;
        (((struct o68_float *)(t1))->v) = 1.0f;
        (((struct o64_float *)(t1))->v) = 1.0f;
        (((struct o60_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0xF;
        t0 = *(signed char *)((t1 + 0x3));
        return FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x16);
    }
    return t1;
}

int fx_tick_035444(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0));
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.049999997f);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = 0xEC;
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x6) {
        u0 = (((struct o68_float *)(a4))->v);
        (((struct o68_float *)(a4))->v) = (u0 - 0.149999991f);
        (((struct o64_float *)(a4))->v) = (u0 - 0.149999991f);
        (((struct o60_float *)(a4))->v) = (u0 - 0.149999991f);
        t0 = 0x60;
    }
    return t0;
}
