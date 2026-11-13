/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0b78-0c0a0ccc) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
float FUN_0c02651e(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
int pl_get_held_item_class(int, int, int);
int hit_find_contact_direction(int);

int pl_enter_state_41(int a4)
{
    int stk[3];
    register int t8;

    (((struct o71BA_uchar *)(a4))->v) = 0x29;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_arm_forever(a4);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    pl_start_motion(a4, 0x2, 0xCF);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0xF);
    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        t8 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0xB, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t8 != 0) {
            (((struct o20_float *)(a4))->v) = ((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (FUN_0c02651e(a4)));
            obj_set_mode_owner(((((struct o71C8_int *)(a4))->v)), 0x13, (*(signed char *)((a4 + 0x3))));
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    return 0xEE;
}

int pl_check_pickup_input(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t1;
    register int t2;
    int t3;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 == 0) && ((t1 = *(signed char *)((a4 + 0x721A)), t1 == 0) && ((t2 = (((struct o2E4_int *)(a4))->v), (t2 & 4) != 0) && (t3 = (((struct o2DC_int *)(a4))->v), (t3 & 240) != 0)))) {
        t4 = hit_find_contact_direction(a4);
        *(unsigned char *)(((int)stk + 0)) = t4;
        if ((signed char)t4 != 0) {
            return (*(signed char *)(((int)stk + 0)));
        }
        return 0x0;
    }
    return 0x0;
}
