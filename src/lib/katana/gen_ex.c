/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06231c(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(int);
int _modlu(int);
int FUN_0c0fddd4(int, int);
int FUN_0c108fe8(int);
int FUN_0c10ba20(void);
int FUN_0c10d760(void);
int FUN_0c10dabe(int, int);
int FUN_0c10dd58(int, int);
int FUN_0c10dd8c(int, int);
int FUN_0c10ddb4(void);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int stage_gimmick_31_update(int a4);
int fx_tick_04a4c4(int a4);
int FUN_0c01be44(int a4, int a5, int a6, int a7);
int FUN_0c10ddd2(int a4);

int FUN_0c10ddd2(int a4)
{
    int t0;
    register int t1;
    register int t134;
    int t137;
    register int t147;
    register int t174;
    register int t175;
    register int t176;
    register int t177;
    register int t178;
    register int t227;
    register int t228;
    register int t229;
    register int t230;
    register int t231;
    register int t56;
    register int t74;
    register int t92;
    register int t110;
    register int t128;
    register int t188;
    register int t189;
    register int t200;
    register int t201;
    register int t212;
    register int t213;
    register int t224;
    register int t225;
    register int t241;
    register int t242;

    t0 = (((struct o0_int *)0xA05F6900)->v);
    if ((0x8 & t0) != 0) {
        t1 = FUN_0c10d760();
        t174 = t1;
        if (t1 != 0) {
            t174 = (FUN_0c108fe8(t1));
        }
    }
    if ((t0 & 0x20) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x20;
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x4);
    }
    if ((t0 & 0x4) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x7;
        *(unsigned int *)0xC8171C8 = 0x0;
        (((struct o0_uint *)0xC8426CC)->v) = 0x0;
        (((struct o4_uint *)0xC84270C)->v) = (((((struct o0_int *)0xC84270C)->v)) - (*(int *)0xFFD8000C));
        if (((((struct o18_int *)0xC817318)->v)) != 0) {
            (((struct o18_uint *)0xC817318)->v) = 0x0;
            (((struct o18_uint *)0xC8426CC)->v) = 0x0;
            (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC817268)->v));
            (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC817268)->v));
            (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC817268)->v));
            (((struct o24_uint *)0xA05F8048)->v) = ((((struct o8_int *)0xC817268)->v));
            t174 = 0xC817270;
        } else {
            *(unsigned int *)(((((((struct o0_int *)0xC817318)->v)) << 2) + 0xC817304)) = 0x5;
            t174 = 0xC817304;
        }
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x1);
        (((struct o10_uint *)0xC84270C)->v) = 0x0;
    }
    if ((t0 & 0x80000) != 0) {
        *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
        (((struct o0_uint *)0xA05F6900)->v) = 0x80000;
        t174 = (FUN_0c10ba20());
    } else {
        t56 = 0x80000;
    }
    if ((t0 & 0x40) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x40;
        (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) | 0x40);
    }
    t74 = t56;
    if ((t0 & 0x80) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x80;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x1);
        t174 = 0xC817324;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x80, t56));
        } else {
        }
        t74 = t56;
    }
    t92 = t74;
    if ((t0 & 0x100) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x100;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x2);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x100, t74));
        } else {
        }
        t92 = t74;
    }
    t110 = t92;
    if ((t0 & 0x200) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x4);
        t174 = 0xC817324;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x200, t92));
        } else {
        }
        t110 = t92;
    }
    t128 = t110;
    if ((t0 & 0x400) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x400;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x8);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x400, t110));
        } else {
        }
        t128 = t110;
    }
    t134 = 0x200000;
    t176 = t128;
    if ((t0 & 0x200000) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200000;
        (((struct oC_uint *)0xC817318)->v) = (((((struct oC_int *)0xC817318)->v)) | 0x10);
        t174 = 0xC817320;
        if (((((struct o8_int *)0xC817318)->v)) == ((((struct oC_int *)0xC817318)->v))) {
            t174 = (FUN_0c10dabe(0x200000, t128));
        } else {
            t134 = 0x200000;
        }
        t176 = t128;
    }
    t137 = (((struct o8_int *)0xA05F6900)->v);
    t147 = t134;
    if ((0x4 & t137) != 0) {
        t147 = FUN_0c10dd58(t134, t176);
        t174 = t147;
        if (t147 != 0) {
            t174 = (FUN_0c108fe8(t147));
        } else {
        }
    } else {
    }
    t175 = t147;
    if ((0x8 & t137) != 0) {
        t175 = FUN_0c10dd8c(t147, t176);
        t174 = t175;
        if (t175 != 0) {
            t174 = (FUN_0c108fe8(t175));
        } else {
        }
    } else {
    }
    if ((t137 & 0x2) != 0) {
        t175 = FUN_0c10ddb4();
        t174 = t175;
        if (t175 != 0) {
            t174 = (FUN_0c108fe8(t175));
        } else {
        }
    } else {
    }
    t177 = 0xA05F6900;
    t178 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t188 = t175;
            t189 = t176;
        }
        t175 = t188;
        t176 = t189;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t200 = t175;
            t201 = t176;
        }
        t175 = t200;
        t176 = t201;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t212 = t175;
            t213 = t176;
        }
        t175 = t212;
        t176 = t213;
        t178 = (t178 + 0x1);
        if ((((int)0x1 << (int)t178) & ((((struct o0_int *)0xC817268)->v))) != 0) {
            (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t178)));
            t177 = t178;
            t174 = 0xC8171F4;
            t177 = (t177 << 2);
            t177 = (t177 << 1);
            t176 = (*(int *)((t177 + t174)));
            t174 = (t174 - 4);
            t175 = (*(int *)((t177 + t174)));
            t174 = (FUN_0c0fddd4(t175, t176));
        } else {
            t224 = t175;
            t225 = t176;
        }
        t178 = (t178 + 0x1);
        t175 = t224;
        t176 = t225;
        if ((int)t178 >= (int)0x5) {
            break;
        }
    }
    if ((int)t178 < (int)0x9) {
        t227 = t174;
        t228 = t175;
        t229 = t176;
        t230 = 0x0;
        t231 = t178;
        for (;;) {
            if ((((int)0x1 << (int)t231) & ((((struct o0_int *)0xC817268)->v))) != 0) {
                (((struct o0_uint *)0xC817268)->v) = (((((struct o0_int *)0xC817268)->v)) & (~((int)0x1 << (int)t231)));
                t230 = t231;
                t227 = 0xC8171F4;
                t230 = (t230 << 2);
                t230 = (t230 << 1);
                t229 = (*(int *)((t230 + t227)));
                t227 = (t227 - 4);
                t228 = (*(int *)((t230 + t227)));
                t227 = (FUN_0c0fddd4(t228, t229));
            } else {
                t241 = t228;
                t242 = t229;
            }
            t231 = (t231 + 0x1);
            t228 = t241;
            t229 = t242;
            if ((int)t231 >= (int)0x9) {
                break;
            }
        }
    }
    return 0x0;
}
