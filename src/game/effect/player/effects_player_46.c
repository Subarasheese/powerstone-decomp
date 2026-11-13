/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3268-0c0c3544) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int thunk_FUN_0c062242(int);

int fx_spawn_31(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = obj_create(0x1, 0x1, 0x2);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C4C48;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 100.0f);
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x2E);
        t2 = (((struct o2E0_int *)(t0))->v);
        u0 = *(float *)0xC0C3400;
        (((struct o24_float *)(t2))->v) = u0;
        (((struct o20_float *)(t2))->v) = u0;
        (((struct o1C_float *)(t2))->v) = u0;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x2F);
        t2 = (((struct o2E4_int *)(t0))->v);
        u0 = *(float *)0xC0C3400;
        (((struct o24_float *)(t2))->v) = u0;
        (((struct o20_float *)(t2))->v) = u0;
        (((struct o1C_float *)(t2))->v) = u0;
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        obj_set_record_char(t0, 0x72);
        *(unsigned char *)(((0x308 + t0) + 0x1)) = 0x0;
        (((struct o308_uchar *)(t0))->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c0c339a(int a4, float f4)
{
    register int t0;
    register int t7;

    t0 = *(signed char *)((a4 + 0x4));
    t7 = t0;
    if (t0 == 0) {
        (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (((((struct o50_float *)(a4))->v)) * 0.099999994f);
        (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (((((struct o54_float *)(a4))->v)) * 0.099999994f);
        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = (((((struct o58_float *)(a4))->v)) * 0.099999994f);
        t7 = 0x24;
    }
    return t7;
}

int fx31_spin_kid_angles(int a4)
{
    register int t0;

    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x16C);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) & 0xFFFF);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x71C);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}
