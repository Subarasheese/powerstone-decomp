/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c048c18-0c049288) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);

int fx_spawn_048c18(int a4, int a5, float f4);

int fx_spawn_048c18(int a4, int a5, float f4)
{
    int stk[4];
    register int t80;
    register float t3;
    register float u6;
    register int t21;
    register int t66;
    register float u23;
    register int t33;
    register int t34;
    register float t35;
    register float u37;
    register float u38;
    register int t42;
    register int t44;
    register int t45;
    register int t46;
    register float u47;
    register float u48;
    register float u49;
    register int t60;
    register int t11;
    register int t43;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t80 = 0x16B;
    if ((int)(*(signed char *)0xC7F3197) >= (int)0x4) {
    } else {
        *(unsigned char *)0xC7F3197 = ((*(signed char *)0xC7F3197) + 0x1);
        if ((*(signed char *)(((int)stk + 4))) != 0) {
            t3 = math_rand_float();
            u6 = (t3 * 255.0f);
            if (!(2.14748365e+09f > (t3 * 255.0f))) {
                u6 = (((t3 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t11 = (((int)((unsigned int)(int)u6 % (unsigned int)0x2)) + 0x3);
        } else {
            t11 = (((*(int *)0xC7F307C) & 0x1) + 0x1);
        }
        t21 = obj_create(0x5, 0x1, (t11 + 0x1), 0x0);
        t66 = t21;
        if (t21 != 0) {
            *(unsigned char *)((t21 + 0x0)) = 0x1;
            *(unsigned char *)((t21 + 0x1)) = 0x1;
            *(unsigned short *)((t21 + 0x6)) = 0x31;
            *(unsigned char *)((t21 + 0x5)) = 0x1;
            *(unsigned int *)((t21 + 0x10)) = 0xC048EA8;
            *(unsigned char *)((t21 + 0x3)) = 0x2;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t21 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
            (((struct o118_uint *)(t21))->v) = 0x0;
            *(unsigned int *)((t21 + 0x34)) = 0x0;
            *(unsigned int *)((t21 + 0x30)) = 0x0;
            *(unsigned int *)((t21 + 0x2C)) = 0x0;
            u23 = *(float *)(((int)stk + 12));
            (((struct o58_float *)(t21))->v) = (u23 * 1.0f);
            (((struct o54_float *)(t21))->v) = (u23 * 1.0f);
            (((struct o50_float *)(t21))->v) = (u23 * 1.0f);
            (((struct o308_uchar *)(t21))->v) = t11;
            *(unsigned char *)(((0x308 + t21) + 0x1)) = (*(signed char *)(((int)stk + 4)));
            FUN_0c06233a(((((struct o2E0_int *)(t21))->v)), 0xC4CFA68, 0x48);
            *(unsigned char *)((((((struct o2E0_int *)(t21))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t21))->v)) + 0x2)) = 0x219;
            (((struct o40_float *)(((((struct o2E0_int *)(t21))->v))))->v) = 1.0f;
            (((struct o44_float *)(((((struct o2E0_int *)(t21))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(t21))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(t21))->v))))->v) = 1.0f;
            t33 = (((struct o2E0_int *)(t21))->v);
            (((struct o24_float *)(t33))->v) = 1.0f;
            (((struct o20_float *)(t33))->v) = 1.0f;
            (((struct o1C_float *)(t33))->v) = 1.0f;
            t34 = (((struct o2E0_int *)(t21))->v);
            *(int *)((int)stk + 0) = (0x18 + t34);
            t35 = math_rand_float();
            u37 = 2.14748365e+09f;
            u38 = (t35 * 255.0f);
            if (!(2.14748365e+09f > (t35 * 255.0f))) {
                u37 = (2.14748365e+09f + 2.14748365e+09f);
                u38 = (((t35 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)(((0x18 + t34) + 0x0)) = (((((int)((unsigned int)(int)u38 % (unsigned int)0x10)) << 8) << 2) << 2);
            (((struct oC_float *)(((((struct o2E0_int *)(t21))->v))))->v) = 100.0f;
            t42 = 0xC048DC4;
            t44 = (0x18 + t34);
            t45 = 0x1;
            t46 = 0x1;
            u47 = t35;
            u48 = u37;
            u49 = 100.0f;
            for (;;) {
                if ((int)t45 >= (int)((*(signed char *)(((0x308 + t21) + 0x0))) + 0x1)) {
                    break;
                }
                t46 = t45;
                t46 = (t46 << 2);
                t42 = (FUN_0c06233a((*(int *)((((0x2E0 + t21) + t46) + 0x0))), 0xC4CFA68, 0x21));
                t42 = 0x619;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(unsigned char *)((t44 + 0x0)) = 0x0;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(unsigned short *)((t44 + 0x2)) = t42;
                t42 = 0x40;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(float *)((t44 + t42)) = 1.0f;
                t42 = 0x44;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(float *)((t44 + t42)) = 0.0f;
                t42 = 0x48;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(float *)((t44 + t42)) = 0.0f;
                t42 = 0x4C;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(float *)((t44 + t42)) = 0.0f;
                t42 = 0xC048F18;
                u49 = (*(float *)((t42 + 0x0)));
                t60 = *(int *)((((0x2E0 + t21) + t46) + 0x0));
                t42 = 0x24;
                *(float *)((t60 + t42)) = u49;
                t42 = 0x20;
                *(float *)((t60 + t42)) = u49;
                t42 = 0x1C;
                *(float *)((t60 + t42)) = u49;
                t44 = (*(int *)((((0x2E0 + t21) + t46) + 0x0)));
                *(int *)((int)stk + 0) = (0x18 + t44);
                u47 = (math_rand_float());
                u49 = u47;
                u49 = (u49 * 255.0f);
                u48 = 2.14748365e+09f;
                if (!(u48 > u49)) {
                    u48 = (u48 + u48);
                    u49 = (u49 - u48);
                }
                t44 = 0xC0E6F24;
                t43 = (int)u49;
                t42 = 0x10;
                t42 = ((int)((unsigned int)t43 % (unsigned int)t42));
                t42 = (t42 << 8);
                t43 = (0x18 + t44);
                t42 = (t42 << 2);
                t46 = (t46 + (0x2E0 + t21));
                t42 = (t42 << 2);
                *(unsigned int *)((t43 + 0x0)) = t42;
                t42 = 0xC;
                t44 = (*(int *)((t46 + 0x0)));
                t45 = (t45 + 0x1);
                *(float *)((t44 + t42)) = 90.0f;
            }
            t66 = t42;
        }
        t80 = t66;
    }
    return t80;
}

int FUN_0c048ea0(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC048C18))(a4, 0x0, a6, a7);
}

int FUN_0c048ea4(int a4, float f4)
{
    return fx_spawn_048c18(a4, 0x1, f4);
}
