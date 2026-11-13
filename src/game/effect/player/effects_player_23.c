/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bd640-0c0bda68) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);

int FUN_0c0bd640(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t71;
    register int t3;
    register int t13;
    register int t15;
    register int t24;
    register int t27;
    register float t33;
    register float u36;
    register int t38;
    register float u41;
    register float u45;
    register float t46;
    register float u49;
    register int t51;
    register float u54;
    register float u58;
    register int t67;
    register float u70;
    register int t20;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    t71 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BD930;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        obj_set_record_char(t0, 0x74);
        *(unsigned char *)(((0x105 + t0) + 0x2)) = 0x1;
        *(unsigned char *)(((0x105 + t0) + 0x1)) = 0x1;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        t3 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        if ((*(signed char *)(((int)stk + 0))) == 127) {
            if (!((*(float *)0xC494D1C) > 500.0f)) {
                t13 = *(signed char *)((t0 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t13) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                t20 = ((((unsigned short)((unsigned short)((-t13) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t13) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0));
            } else {
                t15 = *(signed char *)((t0 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4);
                t20 = ((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0));
            }
            thunk_FUN_0c062242(t20, (t0 + 0x20));
        } else {
            t24 = *(signed char *)((t0 + 0x3));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t24 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t24 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t24 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (t0 + 0x20));
            t27 = *(signed char *)(((int)stk + 0));
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + (*(float *)((((((unsigned char)(t27 & 0x3) << 1) << 2) + 0xC33C4B8) + 0x0))));
            (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((((struct o4_float *)(((((unsigned char)(t27 & 0x3) << 1) << 2) + 0xC33C4B8)))->v)));
            t33 = math_rand_float();
            u36 = (t33 * 255.0f);
            if (!(2.14748365e+09f > (t33 * 255.0f))) {
                u36 = (((t33 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t38 = (int)((unsigned int)(int)u36 % (unsigned int)0xA);
            u41 = (float)t38;
            if ((int)t38 < 0) {
                u41 = ((float)t38 + 4.2949673e+09f);
            }
            u45 = ((((struct o20_float *)(t0))->v));
            u45 = u45 + 20.0f * u41;
            (((struct o20_float *)(t0))->v) = (u45 + -100.0f);
            t46 = math_rand_float();
            u49 = (t46 * 255.0f);
            if (!(2.14748365e+09f > (t46 * 255.0f))) {
                u49 = (((t46 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t51 = (int)((unsigned int)(int)u49 % (unsigned int)0xA);
            u54 = (float)t51;
            if ((int)t51 < 0) {
                u54 = ((float)t51 + 4.2949673e+09f);
            }
            u58 = ((((struct o28_float *)(t0))->v));
            u58 = u58 + 20.0f * u54;
            (((struct o28_float *)(t0))->v) = (u58 + -100.0f);
        }
        t67 = *(signed char *)((t0 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t67) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t67) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t67) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((int)stk + 0) + 0x8));
        u70 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u70 + 800.0f);
        (((struct o24_float *)(t0))->v) = (u70 + 800.0f);
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = -1.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct oEC_ushort *)(t0))->v) = 0xB4;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        t71 = 0x0;
    }
    return t71;
}
