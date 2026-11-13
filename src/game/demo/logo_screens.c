/* PSTONE LOGO bank objects and logo screens (0c02afc4-0c02b0dc) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_sin_angle16(int);

int FUN_0c02afc4(int a4)
{
    int stk[3];
    register int t11;
    register float u16;
    register float u20;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x444);
    (((struct oF2_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    mdl_vtx_iter_begin((*(int *)(((*(int *)0xC664A08) + 0xC))), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    for (;;) {
        t11 = mdl_vtx_iter_next();
        if (t11 != 0) {
            break;
        }
        mdl_vtx_get_pos(((int)stk + 0));
        u16 = (*(float *)(((int)stk + 0)));
        u16 = u16 + 12.0f * (math_sin_angle16(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 0)) = u16;
        u20 = (*(float *)(((int)stk + 4)));
        u20 = u20 + 9.0f * (math_sin_angle16(((((struct oF2_short *)(a4))->v))));
        *(float *)(((int)stk + 4)) = u20;
        *(float *)(((int)stk + 8)) = ((math_sin_angle16(((((struct oF2_short *)(a4))->v)))) * 30.0f);
        mdl_vtx_set_pos(((int)stk + 0));
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x2AAA);
        }
        (((struct oEE_ushort *)(a4))->v) = ((-((((struct oEE_short *)(a4))->v))) + 0x1);
    }
    return t11;
}
