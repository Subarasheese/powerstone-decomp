/* state update functions of the player state machine (table 0xC3390D4) (part 14 of 14 of the same module) (0c09788c-0c097c26) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o718C_int { char p[0x718C]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71F8_uint { char p[0x71F8]; unsigned int v; };
struct o71FC_uint { char p[0x71FC]; unsigned int v; };
struct o720C_short { char p[0x720C]; short v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7215_uchar { char p[0x7215]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7241_uchar { char p[0x7241]; unsigned char v; };
int FUN_0c08a6e4(int);
int FUN_0c092894(int);
int FUN_0c097b10(int);
extern int pl_state_dispatch_720a();
extern int FUN_0c098b9c();
int pl_clear_tint_flag(int);
int FUN_0c099a92(int);
int FUN_0c099ac6(int);
int FUN_0c099ae4(int);
int FUN_0c099afe(int);
int pl_start_motion(int, int, int);
int pl_mash_reduce_counter(int, int);
int pl_update_camera_side_flag(int);
int FUN_0c0e6fe8(void);

int FUN_0c09788c(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t29;
    register int t55;
    register int t67;
    register int t93;
    register int t94;
    register int t97;
    register int t121;
    register int t139;
    register int t165;
    register int t177;
    register int t203;
    register int t204;
    register int t207;
    int t25;
    int t54;
    int t135;
    int t164;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)0xC7F3192) == 0) {
            if (((((struct o720C_short *)(a4))->v)) != 0) {
                (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
            }
            if ((*(signed char *)((a4 + 0x7215))) != 0) {
                t8 = *(signed char *)((a4 + 0x7215));
                (((struct o7215_uchar *)(a4))->v) = (t8 - 1);
                if ((unsigned char)(t8 - 1) == 0) {
                    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                }
            }
        }
        if ((((((struct o7228_short *)(a4))->v)) == 0) && (t25 = *(signed char *)((a4 + 0x7226)), t25 == 0)) {
            pl_clear_tint_flag(a4);
        } else {
            t29 = *(signed char *)((a4 + 0x7226));
            switch (t29) {
            case 32:
                FUN_0c099a92(a4);
                pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t54 = (((struct o7228_short *)(a4))->v), (int)t54 > 0)) {
                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                    t55 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t55 - 30);
                    if ((int)(short)(t55 - 30) <= 0) {
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                    }
                }
                break;
            case 64:
                FUN_0c099ac6(a4);
                break;
            case 96:
                FUN_0c099afe(a4);
                break;
            case 0x80:
                FUN_0c099ae4(a4);
                break;
            }
            t67 = (((struct o7228_short *)(a4))->v);
            (((struct o7228_ushort *)(a4))->v) = (t67 - 1);
            if ((int)(short)(t67 - 1) <= 0) {
                (((struct o7226_uchar *)(a4))->v) = 0x0;
                (((struct o7228_ushort *)(a4))->v) = 0x0;
            }
        }
        pl_update_camera_side_flag(a4);
        FUN_0c0e6fe8();
        if ((*(signed char *)((a4 + 0x105))) != 0) {
            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
        }
        if ((*(signed char *)((a4 + 0x106))) != 0) {
            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
        }
        if ((*(signed char *)((a4 + 0x107))) != 0) {
            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
        }
        if ((*(signed char *)((a4 + 0x7241))) != 0) {
            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
        }
        (((struct o2D9_uchar *)(a4))->v) = 0x0;
        FUN_0c08a6e4(a4);
        t93 = *(signed char *)((a4 + 0x9));
        switch (t93) {
        case 0:
            FUN_0c097b10(a4);
            break;
        case 1:
            FUN_0c092894(a4);
            break;
        case 2:
            t97 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(pl_state_dispatch_720a))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
            break;
        case 3:
            t94 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c098b9c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            break;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o71BA_uchar *)(a4))->v) = 0x0;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        pl_start_motion(a4, 0x0, 0x0);
        (((struct o7194_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
        (((struct o7190_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        *(int *)((int)stk + 8) = a4;
        if ((*(signed char *)0xC7F3192) == 0) {
            if (((((struct o720C_short *)(a4))->v)) != 0) {
                (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
            }
            if ((*(signed char *)((a4 + 0x7215))) != 0) {
                t121 = *(signed char *)((a4 + 0x7215));
                (((struct o7215_uchar *)(a4))->v) = (t121 - 1);
                if ((unsigned char)(t121 - 1) == 0) {
                    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                }
            }
        }
        if ((((((struct o7228_short *)(a4))->v)) == 0) && (t135 = *(signed char *)((a4 + 0x7226)), t135 == 0)) {
            pl_clear_tint_flag(a4);
        } else {
            t139 = *(signed char *)((a4 + 0x7226));
            switch (t139) {
            case 32:
                FUN_0c099a92(a4);
                pl_mash_reduce_counter(a4, ((0x723E + a4) + 0x2));
                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t164 = (((struct o7228_short *)(a4))->v), (int)t164 > 0)) {
                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                    t165 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t165 - 30);
                    if ((int)(short)(t165 - 30) <= 0) {
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                    }
                }
                break;
            case 64:
                FUN_0c099ac6(a4);
                break;
            case 96:
                FUN_0c099afe(a4);
                break;
            case 0x80:
                FUN_0c099ae4(a4);
                break;
            }
            t177 = (((struct o7228_short *)(a4))->v);
            (((struct o7228_ushort *)(a4))->v) = (t177 - 1);
            if ((int)(short)(t177 - 1) <= 0) {
                (((struct o7226_uchar *)(a4))->v) = 0x0;
                (((struct o7228_ushort *)(a4))->v) = 0x0;
            }
        }
        pl_update_camera_side_flag(a4);
        FUN_0c0e6fe8();
        if ((*(signed char *)((a4 + 0x105))) != 0) {
            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
        }
        if ((*(signed char *)((a4 + 0x106))) != 0) {
            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
        }
        if ((*(signed char *)((a4 + 0x107))) != 0) {
            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
        }
        if ((*(signed char *)((a4 + 0x7241))) != 0) {
            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
        }
        (((struct o2D9_uchar *)(a4))->v) = 0x0;
        FUN_0c08a6e4(a4);
        t203 = *(signed char *)((a4 + 0x9));
        switch (t203) {
        case 0:
            FUN_0c097b10(a4);
            break;
        case 1:
            FUN_0c092894(a4);
            break;
        case 2:
            t207 = ((int (*)(int, int, int, int, int))(pl_state_dispatch_720a))(a4, 0x0, 0x0, 0x0, a4);
            break;
        case 3:
            t204 = ((int (*)(int, int, int, int, int))(FUN_0c098b9c))(a4, 0x0, 0x0, 0x0, a4);
            break;
        }
    }
    (((struct o71FC_uint *)(a4))->v) = ((((struct o71F8_int *)(a4))->v));
    (((struct o71F8_uint *)(a4))->v) = ((((struct o2E4_int *)(a4))->v));
    (((struct o71CC_uint *)(a4))->v) = 0x0;
    return ((int (*)(void))(0xC097ABC))();
}
