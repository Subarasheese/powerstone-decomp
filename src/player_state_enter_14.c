/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a11f4-0c0a16bc) */

int math_vec3_normalize(float *);
int pl_start_motion(char *, int, int);
int FUN_0c0a3cb0(int, int);
int FUN_0c0a3cd6(int, int);
int math_atan_angle16(float);
float math_rand_float(void);
#define F(o) (*(float *)(player + (o)))
extern float math_rand_float(void);
extern int pl_start_motion(char *obj, int a, int b);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int pl_clear_tint_flag(int);
int pl_reset_pose(int);
int pl_reset_combo_counter(int);
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
int pl_reset_model_parts(int);

void pl_enter_state_17(char *player)
{
    float dir[3];
    unsigned int rnd;

    player[0x71BA] = 17;
    player[0x71BC] = 0;
    pl_start_motion(player, 0, 48);
    player[0x71A9] = 1;
    player[0x71A8] = 1;
    dir[0] = F(56);
    dir[2] = F(64);
    dir[1] = 0.0f;
    math_vec3_normalize(dir);
    F(56) = dir[0];
    F(64) = dir[2];
    F(60) = 0.0f;
    F(76) = 0.0f;
    F(72) = 0.0f;
    F(68) = 0.0f;
    if (dir[0] == 0.0f)
        dir[0] = 9.99999997e-07f;
    *(int *)(player + 0x30) = math_atan_angle16(-dir[2] / dir[0]);
    if (0.0f > dir[0])
        *(int *)(player + 0x30) = *(int *)(player + 0x30) + 0x8000;
    *(unsigned int *)(player + 0x30) = (unsigned short)(*(int *)(player + 0x30) + 0x4000);
    FUN_0c0a3cb0(player[3], 1);
    rnd = (unsigned int)(math_rand_float() * 255.0f);
    if (rnd % 2 != 0)
        FUN_0c0a3cd6(player[3], 0);
}

void pl_enter_state_18(char *obj)
{
    obj[0x71BA] = 18;
    obj[0x71BC] = 0;
    if ((unsigned)(math_rand_float() * 255.0f) % 2 == 0)
        pl_start_motion(obj, 3, 3);
    else
        pl_start_motion(obj, 3, 2);
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    *(short *)(obj + 0xEC) = 60;
}

int pl_enter_state_21(int a4, int a5)
{
    int stk[1];
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x15;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_reset_combo_counter(a4);
    (((struct o7228_ushort *)(a4))->v) = 0x0;
    (((struct o7226_uchar *)(a4))->v) = 0x0;
    pl_clear_tint_flag(a4);
    (((struct o7225_uchar *)(a4))->v) = 0x0;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o71CC_uint *)(a4))->v) = 0x0;
    t3 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)((a4 + 0xB)) = t3;
    return t3;
}

int pl_enter_state_22(int a4, int a5)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x16;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = a5;
    return a5;
}

int pl_set_power_form_on(int a4)
{
    (((struct o71F1_uchar *)(a4))->v) = 0x1;
    pl_reset_model_parts(a4);
    (((struct o71F4_ushort *)(a4))->v) = 0x960;
    return 0x71F4;
}

int pl_set_power_form_off(int a4)
{
    (((struct o71F1_uchar *)(a4))->v) = 0x0;
    pl_reset_model_parts(a4);
    (((struct o71F4_ushort *)(a4))->v) = 0x0;
    return 0x71F4;
}
