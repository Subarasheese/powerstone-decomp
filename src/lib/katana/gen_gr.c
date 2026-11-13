/* Straight-line functions with calls and guards (batch gen_gr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_int { char p[0xB8]; int v; };
struct oBC_int { char p[0xBC]; int v; };
int fx_spawn_03d254(int, int);
int fx_spawn_03d60c(int, int);
int obj_destroy(int, int, int, int);
int pl_get_hit_count_of_opponent(int);
int obj_set_record_char(int, int);
int FUN_0c0c58da(int);
int FUN_0c0c5906(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_pow_float(float, float);
float math_sin_angle16(int);
extern int _quick_odd_mvn();
extern int FUN_0c0f7e80();
extern float _builtin_sqrtf(float);
int thunk_FUN_0c062242(int, int);
float FUN_0c0c5920(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f8180(int a4);
int FUN_0c03a918(int a4, int a5, int a6);

int FUN_0c0f8180(int a4)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t4;
    int t8;
    int t12;
    register int t17;
    int t27;
    int t33;
    int t40;
    int t45;
    register int t51;
    register int t63;
    register int t73;
    register int t91;
    register int t77;
    register int t86;
    register int t101;
    int t109;
    register int t113;
    register int t125;
    register int t135;
    int t145;
    int t150;
    int t157;
    register int t163;
    int t174;
    int t181;
    register int t178;
    register int t179;
    register int t186;
    register int t202;
    register int t195;
    register int t213;
    register int t214;
    int t215;
    register int t218;
    register int t216;
    register int t219;
    int t221;
    int t260;
    register int t249;
    register int t250;
    int t253;
    int t267;
    int t280;
    int t285;
    int t293;
    int t298;
    register int t315;
    register int t303;
    int t327;
    register int t332;
    int t66;
    register int t68;
    register int t81;
    int t192;
    register int t228;
    register int t274;
    int t283;
    int t286;

    t0 = (((struct o94_int *)(a4))->v);
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t4 = (((struct o90_int *)(a4))->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((((struct o0_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((((struct o4_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o8_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = ((((struct oC_int *)0xC15AA10)->v));
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t12 = ((t0 & 0x1FFFFFFF) | ((*(int *)((a4 + 0x14))) << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t17 = ((0xE7FFFFFF & t12) | ((*(int *)((a4 + 0x18))) << 27));
    }
    t27 = t17;
    if ((0x20 & t8) != 0) {
        t27 = (t17 & 0xFBFFFFFF);
        if ((*(int *)((a4 + 0x28))) != 0) {
            t27 = (t17 | 0x4000000);
        }
    }
    t33 = t27;
    if ((0x8 & t8) != 0) {
        t33 = ((0xFDFFFFFF & t27) | (((((unsigned int)(*(int *)((a4 + 0x20))) >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    t40 = t33;
    if ((0x200 & t8) != 0) {
        t40 = ((0xFEFFFFFF & t33) | ((((((struct o40_int *)(a4))->v)) << 16) << 8));
    }
    t45 = t40;
    if ((0x8 & t8) != 0) {
        t45 = ((0xFF7FFFFF & t40) | (((*(int *)((a4 + 0x20))) & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    t51 = t45;
    if ((0x800000 & t8) != 0) {
        t51 = ((0xFFBFFFFF & t45) | ((*(int *)((a4 + 0x10))) << 22));
    }
    t63 = t51;
    if ((t8 & 0x4000000) != 0) {
        t63 = (t51 & 0xFFEFFFFF);
        if (((((struct oB4_int *)(a4))->v)) != 0) {
            t63 = (t51 | 0x100000);
        }
    }
    t73 = t1;
    if (((0x40 & t8) != 0) && (t66 = *(int *)((a4 + 0x2C)), (unsigned int)t66 < (unsigned int)0xC)) {
        switch ((t66 << 1)) {
            case 0:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t68 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t68 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t68 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t68 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t68 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t68 = t1;
            }
                break;
            case 16:
            {
                t68 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t68 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t68 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t73 = t68;
    }
    t91 = t73;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (t73 & 0x1FFFFFFF);
        t77 = *(int *)((a4 + 0x30));
        t86 = t73;
        if ((unsigned int)t77 < (unsigned int)0xC) {
            switch ((t77 << 1)) {
                case 0:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t81 = (0x18000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t81 = t73;
                }
                    break;
                case 8:
                {
                    t81 = (0x1C000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 14:
                {
                    t81 = (0xC000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t81 = (0x10000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t81 = (0x8000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t81 = (t73 & 0xE3FFFFFF);
                }
                    break;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    t101 = t91;
    if ((t8 & 0x1000000) != 0) {
        t101 = (t91 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t101 = (t91 | 0x2000000);
        }
    }
    t109 = t101;
    if ((0x2000000 & t8) != 0) {
        t109 = (t101 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t109 = (t101 | 0x1000000);
        }
    }
    t113 = t109;
    if ((0x100 & t8) != 0) {
        t113 = ((0xFF3FFFFF & t109) | (((*(int *)((a4 + 0x3C))) & 0x3) << 22));
    }
    t125 = t113;
    if ((0x40000 & t8) != 0) {
        t125 = (t113 & 0xFFDFFFFF);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            t125 = (t113 | 0x200000);
        }
    }
    t135 = t125;
    if ((0x400 & t8) != 0) {
        t135 = (t125 & 0xFFEFFFFF);
        if (((((struct o44_int *)(a4))->v)) != 0) {
            t135 = (t125 | 0x100000);
        }
    }
    t145 = t135;
    if ((0x800 & t8) != 0) {
        t145 = (t135 & 0xFFF7FFFF);
        if (((((struct o48_int *)(a4))->v)) != 0) {
            t145 = (t135 | 0x80000);
        }
    }
    t150 = t145;
    if ((t8 & 0x1000) != 0) {
        t150 = ((0xFFFE7FFF & t145) | (((((struct o4C_int *)(a4))->v)) << 15));
    }
    t157 = t150;
    if ((0x2000 & t8) != 0) {
        t157 = ((0xFFF9FFFF & t150) | ((((((struct o50_int *)(a4))->v)) << 16) << 1));
    }
    t163 = t157;
    if ((0x4000 & t8) != 0) {
        t163 = ((0xFFFF9FFF & t157) | ((*(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x10)) + 0x0))) << 13));
    }
    t174 = t163;
    if ((0x8000 & t8) != 0) {
        t174 = (t163 & 0xFFFFEFFF);
        if (((((struct o58_int *)(a4))->v)) != 0) {
            t174 = (t163 | 0x1000);
        }
    }
    t181 = t174;
    if ((0x10000 & t8) != 0) {
        t178 = (((struct o5C_int *)(a4))->v);
        t179 = (t178 & 0xF);
        if ((t178 & 0xF) == 0) {
            t179 = 0x4;
        }
        t181 = ((0xFFFFF0FF & t174) | (t179 << 8));
    }
    t186 = t181;
    if ((0x20000 & t8) != 0) {
        t186 = ((0xFFFFFF3F & t181) | ((((((((struct o60_int *)(a4))->v)) & 0x3) << 2) << 2) << 2));
    }
    t202 = t186;
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t192 = (((struct o6C_int *)(a4))->v), t192 != 0)) {
        t195 = ((int (*)(int, int, int, int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))), 0x3, 0x1000, 0x14000000);
        *(unsigned int *)(((int)stk + 0)) = ((t186 & 0xFFFFFFC7) | ((t195 << 2) << 1));
        t202 = ((((t186 & 0xFFFFFFC7) | ((t195 << 2) << 1)) & 0xFFFFFFF8) | (((int (*)(int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))))));
    }
    if (((*(int *)((a4 + 0x20))) >> 1) != 1) {
    } else {
        if (((((struct o6C_int *)(a4))->v)) != 0) {
            t213 = (((struct o6C_int *)(a4))->v);
            t214 = *(int *)(((int)stk + 8));
            t215 = *(int *)((t213 + 0x18));
            t218 = ((0x1 & t215) & 0x1);
            t216 = (int)(((unsigned int)t218 >> 1) | ((unsigned int)t218 << 31));
            t219 = *(int *)((t213 + 0x8));
            if ((((((((t215 & 0x8) << 27) | (((t214 & 0x7FFFFFFF) | t216) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t219 & 0x38000000)) & 0x38000000) != 0x28000000) && (((((((t215 & 0x8) << 27) | (((t214 & 0x7FFFFFFF) | t216) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t219 & 0x38000000)) & 0x38000000) != 0x30000000)) {
                t221 = *(int *)((((((struct o6C_int *)(a4))->v)) + 0x18));
                t228 = (((t221 & 0x10) << 21) | ((((((((t215 & 0x8) << 27) | (((t214 & 0x7FFFFFFF) | t216) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t219 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t221)) & 0x4) << 16) << 8)) & 0xFDFFFFFF));
            } else {
                t228 = ((0xF81FFFFF & (((((t215 & 0x8) << 27) | (((t214 & 0x7FFFFFFF) | t216) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t219 & 0x38000000))) | ((((((struct o68_int *)(a4))->v)) & 0x3F) << 21));
            }
            *(unsigned int *)(((int)stk + 8)) = ((t228 & 0xFFE00000) | ((unsigned int)((unsigned int)(*(int *)((((((struct o6C_int *)(a4))->v)) + 0x1C))) >> 2) >> 1));
        }
    }
    t260 = t4;
    if ((0x100000 & t8) != 0) {
        t249 = *(int *)((a4 + 0x4));
        t250 = t4;
        if (t249 == 0) {
            t250 = (0x80000000 | (t4 & 0x1FFFFFFF));
        }
        t253 = t250;
        if (t249 == 1) {
            t253 = (0x80000000 | (t250 & 0x1FFFFFFF));
        }
        t260 = t253;
        if (t249 == 2) {
            t260 = (0xA0000000 | (0x1FFFFFFF & t253));
        }
    }
    t267 = t260;
    if ((0x200000 & t8) != 0) {
        t267 = ((0xF8FFFFFF & t260) | (((*(int *)((a4 + 0x8))) << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t274 = ((((struct oB8_int *)(a4))->v));
    } else {
        t274 = (*(int *)0xC81719C);
    }
    t280 = (((t274 << 16) << 2) | (0xFFF3FFFF & (t267 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t280 = ((0xFFFCFFFF & (((t274 << 16) << 2) | (0xFFF3FFFF & (t267 | 0x800000)))) | (((((struct oBC_int *)(a4))->v)) << 16));
    }
    t285 = (0xFFFFFF3F & t280);
    if (((((((struct oA0_int *)(a4))->v)) & 0x60000000) != 0) && (t283 = *(int *)((a4 + 0x8)), (t283 & 1) != 0)) {
        t285 = (0x40 | (0xFFFFFF3F & t280));
    }
    t293 = t285;
    if (((0x10 & t8) != 0) && (t286 = *(int *)((a4 + 0x24)), (t286 & 1) != 0)) {
        t293 = ((0xFFFFFFBF & ((0xFFFFFF7F & t285) | ((*(int *)((a4 + 0x24))) << 7))) | ((((*(int *)0xC347088) << 2) << 2) << 2));
    }
    t298 = t293;
    if ((t8 & 0x400000) != 0) {
        t298 = ((0xFFFFFFCF & t293) | (((*(int *)((a4 + 0xC))) << 2) << 2));
    }
    t315 = t298;
    if ((0x8 & t8) != 0) {
        t303 = *(int *)((a4 + 0x20));
        t315 = ((0xFFFFFFF7 & t298) | ((((unsigned int)t303 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t315 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t298) | ((((unsigned int)t303 >> 1) << 2) << 1))) | (((*(int *)((a4 + 0x20))) & 0x1) << 1));
        }
    }
    t327 = t315;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t327 = (t315 & 0xFFFFFFFB);
        if (((((struct o40_int *)(a4))->v)) != 0) {
            t327 = (t315 | 0x4);
        }
    }
    t332 = t327;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t332 = ((*(int *)((a4 + 0x10))) | (0xFFFFFFFE & t327));
    }
    (((struct o94_uint *)(a4))->v) = (t63 & 0xFFD00000);
    (((struct o98_uint *)(a4))->v) = t202;
    (((struct o9C_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
    (((struct o90_uint *)(a4))->v) = (t332 & 0xE78F00FF);
    return 0x0;
}

