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
int thunk_FUN_0c062242(int);
float FUN_0c0c5920(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f8180(int a4);
int FUN_0c03a918(int a4, int a5, int a6);

int FUN_0c0f8180(int a4)
{
    int stk[8];
    register int t1;
    register int t3;
    int t8;
    register int t73;
    register int t91;
    register int t77;
    register int t86;
    register int t101;
    int t109;
    register int t113;
    register int t112;
    register int t125;
    register int t135;
    int t145;
    int t150;
    int t157;
    register int t163;
    register int t161;
    int t174;
    int t181;
    register int t178;
    register int t179;
    register int t186;
    register int t185;
    register int t199;
    register int t212;
    register int t213;
    int t214;
    register int t217;
    register int t215;
    register int t218;
    int t66;
    register int t68;
    register int t81;
    int t192;
    register int t205;
    register int t207;
    register int t208;

    *(volatile int *)((a4 + 0x94));
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t3 = (((struct o0_int *)0xC15AA10)->v);
    *(volatile int *)((a4 + 0x90));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = t3;
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((((struct o4_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o8_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = ((((struct oC_int *)0xC15AA10)->v));
    t8 = *(int *)((a4 + 0x0));
    if ((0x1 & t8) != 0) {
        *(volatile int *)((a4 + 0x14));
    }
    if ((0x2 & t8) != 0) {
        *(volatile int *)((a4 + 0x18));
    }
    if ((0x20 & t8) != 0) {
        *(volatile int *)((a4 + 0x28));
    }
    if ((0x8 & t8) != 0) {
        *(volatile int *)((a4 + 0x20));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    if ((0x200 & t8) != 0) {
        *(volatile int *)((a4 + 0x40));
    }
    if ((0x8 & t8) != 0) {
        *(volatile int *)((a4 + 0x20));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    if ((0x800000 & t8) != 0) {
        *(volatile int *)((a4 + 0x10));
    }
    if ((t8 & 0x4000000) != 0) {
        *(volatile int *)((a4 + 0xB4));
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
    t205 = 0x1000000;
    if ((0x100 & t8) != 0) {
        t112 = *(int *)((a4 + 0x3C));
        t113 = ((0xFF3FFFFF & t109) | ((t112 & 0x3) << 22));
        t205 = ((t112 & 0x3) << 22);
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
        t161 = *(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x10)) + 0x0));
        t163 = ((0xFFFF9FFF & t157) | (t161 << 13));
        t205 = (t161 << 13);
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
        t205 = (t179 << 8);
    }
    t186 = t181;
    if ((0x20000 & t8) != 0) {
        t185 = (((struct o60_int *)(a4))->v);
        t186 = ((0xFFFFFF3F & t181) | ((((t185 & 0x3) << 2) << 2) << 2));
        t205 = ((((t185 & 0x3) << 2) << 2) << 2);
    }
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t192 = (((struct o6C_int *)(a4))->v), t192 != 0)) {
        *(unsigned int *)(((int)stk + 0)) = ((t186 & 0xFFFFFFC7) | (((((int (*)(int, int, int, int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))), 0x3, 0x1000, 0x14000000)) << 2) << 1));
        t199 = ((int (*)(int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))));
    } else {
        t207 = 0x1000;
        t208 = 0x14000000;
    }
    if (((*(int *)((a4 + 0x20))) >> 1) != 1) {
        return ((int (*)(int, int, int, int))(0xC0F8718))(t205, 0x10, t207, t208);
    }
    if (((((struct o6C_int *)(a4))->v)) != 0) {
        t212 = (((struct o6C_int *)(a4))->v);
        t213 = *(int *)(((int)stk + 8));
        t214 = *(int *)((t212 + 0x18));
        t217 = ((0x1 & t214) & 0x1);
        t215 = (int)(((unsigned int)t217 >> 1) | ((unsigned int)t217 << 31));
        t218 = *(int *)((t212 + 0x8));
        if (((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x28000000) {
            if (((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) == 0x30000000) {
                return ((int (*)(int, int, int, int))(0xC0F8686))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0xF81FFFFF, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
            }
            return ((int (*)(int, int, int, int))(0xC0F86E0))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0x38000000, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
        }
        return ((int (*)(int, int, int, int))(0xC0F8686))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0xF81FFFFF, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
    }
    return ((int (*)(int, int, int, int))(0xC0F8718))(t205, 0x10, t207, t208);
}

