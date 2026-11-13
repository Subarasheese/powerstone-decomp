typedef struct { int w[3]; } Stk3;
/* Valgas attack update and state updates (part 2 of 3 of the same module) (0c089de8-0c08a106) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
int FUN_0c0a3762(int, int);
int thunk_FUN_0c062242(int, int);
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct oEC_short { char p[0xEC]; short v; };
int fx_spawn_double_ring(int, int, Stk3);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int FUN_0c0a3d5c(int, int);
int _quick_odd_mvn(void);
int pl_end_action_choose_state(int);

int pl_valgas_special_id3(int a4)
{
    int stk[7];
    register int t4;
    register int t8;

    obj_place_linked_ahead(a4, 0x0, 0.0f);
    pl_start_motion(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x37);
    t4 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t4))->v) = 0x1;
    (((struct o71A8_uchar *)(t4))->v) = 0x1;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    t8 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    return (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
}

int pl_valgas_special_id4(int a4)
{
    int stk[5];
    register int t19;
    register int t35;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        return 0xEC;
    }
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 22.0f;
    (((struct o48_float *)(a4))->v) = -1.19999993f;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(int *)((int)stk + 16) = a4;
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x3C) {
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
    t19 = pl_landed(a4);
    t35 = (signed char)t19;
    if ((signed char)t19 != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_step_motion(a4);
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        obj_set_owner_hit_record(a4, 0x32);
        obj_force_owner_state27(a4, 0x32);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)); }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC08A058));
        fx_spawn_double_ring((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), ((int)stk + 0), *(Stk3 *)(((int)stk + 0)));
        t35 = (FUN_0c0a3d5c(((-(*(signed char *)((a4 + 0x3)))) + 0x1), (*(signed char *)((a4 + 0x27C)))));
    }
    return t35;
}

int FUN_0c089fca(int a4)
{
    register int t5;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t5 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x0, 0x9);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t5 = 0x71A8;
    }
    return t5;
}

int FUN_0c08a002(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}
