/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0be448-0c0be5a4) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
int thunk_math_mat_get_translate(int, int);

int fx_spawn_state11_aura(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BE5A4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x3);
        t2 = *(signed char *)((a4 + 0x3));
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (t0 + 0x20));
        t2 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t2))->v) = 1.0f;
        (((struct o20_float *)(t2))->v) = 1.0f;
        (((struct o1C_float *)(t2))->v) = 1.0f;
        (((struct o90_uint *)(((((struct o2E0_int *)(t0))->v))))->v) = (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + 0x840);
        t2 = (((struct o2E0_int *)(t0))->v);
        (((struct o4_float *)(t2))->v) = (((((struct o4_float *)(t2))->v)) + 0.0f);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        t1 = 0xEE;
    }
    return t1;
}
