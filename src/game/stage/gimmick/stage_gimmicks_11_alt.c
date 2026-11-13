/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0150-0c0b0324) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c06233a(int, int, int);
int math_rand_next(void);
extern int _modls();
int _quick_odd_mvn(void);

void stage_gimmick_11_update(int a4)
{
    register int t0;
    register int t1;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x8);
    t1 = *(signed char *)((a4 + 0x8));
    switch (t1) {
    case 0:
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o5C_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        t0 = (int)((int)(math_rand_next()) % (int)0x6);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC33A2D4)); }
        break;
    case 1:
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.199999988f);
        if (1.0f > ((((struct o54_float *)(a4))->v))) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        break;
    case 2:
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
        if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x3C) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        break;
    case 3:
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
        if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x46) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
        }
        break;
    case 4:
        if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x78) {
            *(unsigned char *)((a4 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0x1)) = 0x1;
        }
        break;
    }
}
