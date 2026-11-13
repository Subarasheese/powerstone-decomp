/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 1 of 6 of the same module) (0c08a6c0-0c08a7d4) */

int ai_reset_slot(int);
int FUN_0c0ac8dc(int a4);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c08c864(int);

int FUN_0c08a6c0(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x71ED))) != 0) {
        ai_reset_slot(a4);
    }
    FUN_0c0ac8dc(a4);
    return ((int (*)(int, int, int, int))(0xC041574))(a4, a5, a6, a7);
}

int FUN_0c08a6e4(int a4)
{
    register int t35;
    register int t36;
    int t37;
    int t59;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    int t69;

    (((struct o2D9_uchar *)(a4))->v) = 0x1;
    (((struct o24_float *)(a4))->v) = 0.0f;
    if (-950.0f > ((((struct o20_float *)(a4))->v))) {
        (((struct o20_float *)(a4))->v) = -950.0f;
    }
    if (((((struct o20_float *)(a4))->v)) > 950.0f) {
        (((struct o20_float *)(a4))->v) = 950.0f;
    }
    if (-950.0f > ((((struct o28_float *)(a4))->v))) {
        (((struct o28_float *)(a4))->v) = -950.0f;
    }
    if (((((struct o28_float *)(a4))->v)) > 950.0f) {
        (((struct o28_float *)(a4))->v) = 950.0f;
    }
    FUN_0c08c864(a4);
    if ((*(signed char *)((a4 + 0x71BA))) == 11) {
        if (((*(signed char *)((a4 + 0x7223))) == 6) && ((t35 = (((struct oF0_short *)(a4))->v), t35 == 0) && ((t36 = *(signed char *)((a4 + 0xA)), t36 == 2) && (t37 = (((struct oEE_short *)(a4))->v), t37 == 0)))) {
            if (((0x4 & ((((struct o2E4_int *)(a4))->v))) != 0) && (t59 = (((struct o2DC_int *)(a4))->v), (t59 & 0x400) != 0)) {
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                (((struct oF0_ushort *)(a4))->v) = 0x1;
            }
        } else {
            if (((*(signed char *)((a4 + 0x71BA))) == 11) && ((t65 = *(signed char *)((a4 + 0x7223)), t65 == 4) && ((t66 = (((struct oF0_short *)(a4))->v), t66 == 0) && ((t67 = (((struct oEC_short *)(a4))->v), t67 != 0) && ((t68 = *(signed char *)((a4 + 0xA)), t68 == 1) && (t69 = (((struct o2E4_int *)(a4))->v), (0x4 & t69) != 0)))))) {
                (((struct oF0_ushort *)(a4))->v) = 0x1;
            }
        }
    }
    return 0x0;
}
