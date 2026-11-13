/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c0c70-0c0c0e3c) */

struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_linked_effect(int, int, int, int, int, int, int, int, int);
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int, int, float);

int fx_spawn_22(int a4)
{
    int stk[6];
    register int t0;
    register int t32;
    register float u6;
    register float u13;
    register int t19;
    register int t27;

    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    t32 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C0E3C;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        *(int *)((int)stk + 16) = (t0 + 0x20);
        u6 = ((((struct o20_float *)(t0))->v));
        u6 = u6 + (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC33C74C)->v));
        (((struct o20_float *)(t0))->v) = u6;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + ((((struct o4_float *)0xC33C74C)->v)));
        *(int *)((int)stk + 16) = (t0 + 0x28);
        u13 = ((((struct o28_float *)(t0))->v));
        u13 = u13 + (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o8_float *)0xC33C74C)->v));
        (((struct o28_float *)(t0))->v) = u13;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C734); }
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 40.0f);
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        obj_set_record_char(t0, 0x7D);
        t19 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t19 << 1) + t19) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xB;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x4000;
        *(int *)((int)stk + 16) = 0xC15319C;
        *(int *)((int)stk + 12) = 0xC153190;
        *(int *)((int)stk + 8) = 0x6F;
        *(int *)((int)stk + 4) = 0x78;
        *(int *)((int)stk + 0) = 0x5;
        t27 = *(signed char *)((a4 + 0x3));
        (((struct o14_uchar *)(((int)stk + 0)))->v) = t27;
        t32 = (fx_spawn_linked_effect((*(signed char *)(((int)stk + 20))), (t0 + 0x6C), t0, ((signed char)((((t27 << 1) + t27) << 2) << 1) + 0xC6002D0), 0x5, 0x78, 0x6F, 0xC153190, 0xC15319C));
    }
    return t32;
}
