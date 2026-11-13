/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b87b0-0c0b8968) */

int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555dc(void);
extern int obj_destroy();
int math_vec3_add(int, int, int);

int fx_spawn_10(int a4, int a5)
{
    register int t0;
    register int t13;
    register int t4;
    register int t8;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x4)) = a5;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B888C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(((signed char)(((a5 << 1) + a5) << 2) + 0xC1530C0)); }
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t4;
            t3 = (t3 << 2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x2)) = 0xF;
            t8 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t3) + 0x0))), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x2);
            t4 = (t4 + 0x1);
        }
        t13 = 0x2DC;
    }
    return t13;
}

int fx_update_10(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(obj_destroy))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if ((((((struct oEE_short *)(a4))->v)) & 2) != 0) {
        u0 = (((((struct o50_float *)(a4))->v)) + 0.0199999996f);
    } else {
        u0 = (((((struct o50_float *)(a4))->v)) - 0.0199999996f);
    }
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o58_float *)(a4))->v) = u0;
    t0 = *(signed char *)((a4 + 0x4));
    math_vec3_add((a4 + 0x50), (a4 + 0x50), ((signed char)(((t0 << 1) + t0) << 2) + 0xC153108));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return ((int (*)(int))(obj_destroy))(a4);
    }
    t0 = FUN_0c0555dc();
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
